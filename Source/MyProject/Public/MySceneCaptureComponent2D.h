// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "MySceneCaptureComponent2D.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPROJECT_API UMySceneCaptureComponent2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

};
