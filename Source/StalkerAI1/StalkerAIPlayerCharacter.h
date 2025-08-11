// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StalkerAICharacter.h"
#include "StalkerAIPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class STALKERAI1_API AStalkerAIPlayerCharacter : public AStalkerAICharacter
{
	GENERATED_BODY()

	private:

	/** Spring arm component to position the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent;

	/** Third-person camera that follows the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCameraComponent;

	public:
	// Sets default values for this character's properties
	AStalkerAIPlayerCharacter();

	protected:
	// ...
	
};
