// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBPFuncLib.h"

bool UMyBPFuncLib::Test_WordObj(class UObject* WorldContextObject, int32 WaveNumber) {
	UObject* const MyWorld = GEngine->GetWorldFromContextObject(WorldContextObject);
	if (MyWorld) {
		FString str = FString::Printf(TEXT("--- Test_WordObj, WaveNumber:%d"), WaveNumber);
		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red, str);
	}
	return true;
}
