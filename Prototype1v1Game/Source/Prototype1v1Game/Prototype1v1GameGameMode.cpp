// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Prototype1v1GameGameMode.h"
#include "Prototype1v1GamePawn.h"

APrototype1v1GameGameMode::APrototype1v1GameGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APrototype1v1GamePawn::StaticClass();
}

