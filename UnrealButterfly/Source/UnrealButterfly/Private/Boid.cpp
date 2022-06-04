// Fill out your copyright notice in the Description page of Project Settings.

#include "Boid.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
ABoid::ABoid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = MeshComp;
}

FVector ABoid::GetVelocity()
{
	return boidVelocity;
}

// Called when the game starts or when spawned
void ABoid::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABoid::StaticClass(), FoundActors);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Boid spawned"));
	boidVelocity = GetActorForwardVector();
	if (boxToStayWithin) {
		boxExtents = boxToStayWithin->GetComponentsBoundingBox().GetExtent();
	}
}

// Called every frame
void ABoid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	coherenceVelocity = FVector::Zero();	// try to move towards boid center
	seperationVelocity = FVector::Zero();	// try to avoid nearby boid
	alignmentVelocity = FVector::Zero();	// try to match boid velocity (as in, try to move in the same direction as other boids)
	for (int32 i = 0; i < FoundActors.Num(); i++) {
		ABoid* boid = Cast<ABoid>(FoundActors[i]);
		if (boid == this) {
			continue;
		}
		
		// check if close enough, and angle of facing between
		FRotator a1 = GetActorRotation();
		FVector angle1 = a1.Vector();
		angle1.Normalize();
		FVector angle2 = boid->GetActorLocation();
		angle2.Normalize();

		float angle = angle1.Dot(angle2);
		if (boid->GetDistanceTo(this) <= visionRange && angle > VISION_DOT_PRODUCT) {
			coherenceVelocity += boid->GetActorLocation() - this->GetActorLocation();			// Calculate center of mass and attempt to move towards it
			if (boid->GetDistanceTo(this) <= stayAwayRange) {
				seperationVelocity -= (boid->GetActorLocation() - this->GetActorLocation());	// "Double" distance away from nearby boids. Leads to "acceleration" like behaviour
			}
			alignmentVelocity += boid->GetVelocity();

			if (DEBUG == true) {
				//v1.Normalize();
				//FVector temp = FVector::Zero() + v1;
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%f"), angle));
			}
		}
	}

	if (FoundActors.Num() > 1) {
		coherenceVelocity /= (FoundActors.Num() - 1);	// move 10% towards center of mass
		alignmentVelocity /= (FoundActors.Num() - 1);	// rotate towards center of rotation
	}
	FVector v1 = coherenceVelocity * COHERENCE_WEIGHT;
	FVector v2 = seperationVelocity * SEPERATION_WEIGHT;
	FVector v3 = alignmentVelocity * ALIGNMENT_WEIGHT;
	boidVelocity += v1 + v2 + v3;
	boidVelocity = boidVelocity.GetClampedToSize(MIN_SPEED, MAX_SPEED);
	FVector newLocation = this->GetActorLocation() + boidVelocity;
	SetActorRotation((newLocation - this->GetActorLocation()).Rotation());
	SetActorLocation(newLocation);

	CheckBoundaryBox();
}	

void ABoid::CheckBoundaryBox() {
	if (!boxToStayWithin) {
		return;
	}
	FVector newLocation = GetActorLocation();
	for (int i = 0; i < 3; i++) {
		if (GetActorLocation()[i] > boxToStayWithin->GetActorLocation()[i] + boxExtents[i]) {
			FVector temp = FVector::Zero();
			temp[i] = boxExtents[i] * 2;
			newLocation -= temp;	// move to opposite side of box
		}
		if (GetActorLocation()[i] < boxToStayWithin->GetActorLocation()[i] - boxExtents[i]) {
			FVector temp = FVector::Zero();
			temp[i] = boxExtents[i] * 2;
			newLocation += temp;
		}
	}
	SetActorLocation(newLocation);
}
