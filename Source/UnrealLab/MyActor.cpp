// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Misc/OutputDeviceNull.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::runBpFunc(FString _funcName, FString _arg1, int32 _arg2) {
	FOutputDeviceNull ar;
	FString command = FString::Printf(TEXT("%s \"%s\" %d"), *_funcName, *_arg1, _arg2);
	CallFunctionByNameWithArguments(*command, ar, nullptr, true);
}

