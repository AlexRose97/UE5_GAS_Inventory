// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Inv_PlayerController.h"
#include "Inventory.h"

void AInv_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogInventory, Log, TEXT("Inventory Module Started"));
}
