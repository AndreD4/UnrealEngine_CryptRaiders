// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

void UTriggerComponent::BeginPlay()
{
  Super::BeginPlay();
  
  UE_LOG(LogTemp, Display, TEXT("Trigger Component Alive"));
}


void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  UE_LOG(LogTemp, Display, TEXT("Trigger Component is ticking"));
}