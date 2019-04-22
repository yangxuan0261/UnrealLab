// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBPFuncLib.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UNREALLAB_API UMyBPFuncLib : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "MyGlobalMgr", meta = (WorldContext = ""))
	static bool Test_WordObj(class UObject* WorldContextObject, int32 WaveNumber);
};
