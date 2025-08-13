// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StalkerAICharacter.h"
#include "InputActionValue.h"
#include "StalkerAIPlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;

UCLASS()
class STALKERAI1_API AStalkerAIPlayerCharacter : public AStalkerAICharacter
{
	GENERATED_BODY()

	public:
		//	== PUBLIC FUNCTIONS & CONSTRUCTOR =========================================

		/** Sets default values for this character's properties */
		AStalkerAIPlayerCharacter();

		// ============================================================================

	private:

		/** Spring arm component to position the camera behind the character */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArmComponent;

		/** Third-person camera that follows the character */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCameraComponent;

	protected:
		//	== INPUT ASSETS ===========================================================
		
		/** Mapping Context */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
		UInputMappingContext* DefaultMappingContext;

		/** Move Input Action */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
		UInputAction* MoveAction;

		/** Look Input Action */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
		UInputAction* LookAction;

		/** Jump Input Action */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
		UInputAction* JumpAction;

		// ============================================================================

		//	== INPUT FUNCTIONS ========================================================
	

		/** Called for movement input */
		void Move(const FInputActionValue& Value);

		/** Called for looking input */
		void Look(const FInputActionValue& Value);

		// ============================================================================
	
	protected:
		//	== ENGINE OVERRIDE FUNCTIONS ==============================================
		
		// APawn interface
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

		// ============================================================================
};
