// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fear_GalleryGameMode.h"
#include "Fear_GalleryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFear_GalleryGameMode::AFear_GalleryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
