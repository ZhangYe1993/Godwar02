// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawnSensingComponent.h"

bool UMyPawnSensingComponent::HasLineOfSightTo_BP(const AActor* Other)
{
	return HasLineOfSightTo(Other);
}
