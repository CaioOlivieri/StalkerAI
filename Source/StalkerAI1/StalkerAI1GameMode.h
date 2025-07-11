// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StalkerAI1GameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AStalkerAI1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AStalkerAI1GameMode();
};



