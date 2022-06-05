// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TriggerBase.h"
#include "Boid.generated.h"

class UStaticMeshComponent;

UCLASS()
class UNREALBUTTERFLY_API ABoid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoid();
	FVector GetVelocity();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void CheckBoundaryBox();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, Category = "Variables")
	float MIN_SPEED = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Variables")
	float MAX_SPEED = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Variables")
	float COHERENCE_WEIGHT = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Variables")
	float SEPERATION_WEIGHT = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Variables")
	float ALIGNMENT_WEIGHT = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Variables")
	bool DEBUG = false;


	UPROPERTY(EditAnywhere, Category = "Variables")
	float VISION_DOT_PRODUCT = 0.0f;	// between -1 and 1

	UPROPERTY(EditAnywhere, Category = "Variables")
	float visionRange = 100.0f;
	UPROPERTY(EditAnywhere, Category = "Variables")
	float stayAwayRange = 50.0f;
	
	UPROPERTY(EditAnywhere, Category = "Variables")
	ATriggerBase* boxToStayWithin = nullptr;

	TArray<AActor*> FoundActors;
	FVector boidVelocity;
	FVector coherenceVelocity;
	FVector seperationVelocity;
	FVector alignmentVelocity;
	FVector3d boxExtents;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
