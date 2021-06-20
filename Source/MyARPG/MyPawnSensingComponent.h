// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/PawnSensingComponent.h"
#include "MyPawnSensingComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = AI, HideCategories = (Activation, "Components | Activation", Collision), meta = (BlueprintSpawnableComponent))
class MYARPG_API UMyPawnSensingComponent : public UPawnSensingComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AI)
		UPawnSensingComponent* OtherPawnSensingComponent;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AI|Components| PawnSensing")
		bool HasLineOfSightTo_BP(const AActor* Other);
	
};
