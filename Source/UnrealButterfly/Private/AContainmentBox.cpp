// Fill out your copyright notice in the Description page of Project Settings.

#include "AContainmentBox.h"
#include "Boid.h"

AAContainmentBox::AAContainmentBox() {

}

void AAContainmentBox::BeginPlay() {
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Spawned"));
}

// declare overlap begin function
void AAContainmentBox::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	return;
}

// declare overlap end function
void AAContainmentBox::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Something exited overlap"));
	if (OtherActor->IsA(ABoid::StaticClass())){
		FVector newLocation = OtherActor->GetActorLocation() - (GetActorLocation() - OtherActor->GetActorLocation())*2;
		OtherActor->SetActorLocation(newLocation);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Boid exited overlap"));
	}
}
