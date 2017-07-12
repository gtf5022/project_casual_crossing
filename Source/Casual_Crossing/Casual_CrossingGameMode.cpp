// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Casual_CrossingGameMode.h"
#include "Casual_CrossingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACasual_CrossingGameMode::ACasual_CrossingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
