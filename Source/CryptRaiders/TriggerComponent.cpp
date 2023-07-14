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

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  AActor *Actor = GetAcceptableActor();
  if (Actor != nullptr)
  {
    Mover->SetShouldMove(true);
  }
  else
  {
    Mover->SetShouldMove(false);
  }
}

void UTriggerComponent::SetMover(UMover* NewMover)
{
  Mover = NewMover;
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
  TArray<AActor *> Actors;
  GetOverlappingActors(Actors);
  for (AActor *Actor : Actors)
  {
    if (Actor->ActorHasTag(AcceptableActorTag))
    {
      return Actor;
    }
  }

  return nullptr;
}