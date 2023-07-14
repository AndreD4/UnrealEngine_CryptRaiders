// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

  UE_LOG(LogTemp, Display, TEXT("Constructing"));
}

void UTriggerComponent::BeginPlay()
{
  Super::BeginPlay();
  
 
}


void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  TArray<AActor*> Actors;
  GetOverlappingActors(Actors);

  int32 index = 0;
  while (index < Actors.Num())
  {
    FString ActorName = Actors[index]->GetActorNameOrLabel();
    UE_LOG(LogTemp, Display, TEXT("Overlapping: %s"), *ActorName);
    ++index;
  }

}