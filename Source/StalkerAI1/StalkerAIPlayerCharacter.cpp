// Fill out your copyright notice in the Description page of Project Settings.


#include "StalkerAIPlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"




AStalkerAIPlayerCharacter::AStalkerAIPlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 1. Create the Spring Arm Component
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);      // Attach the arm to the character's root
	SpringArmComponent->TargetArmLength = 300.0f;          // Set the default distance from the character
	SpringArmComponent->bUsePawnControlRotation = true;    // Let the arm rotate based on the controller's input

	// 2. Create the Follow Camera Component
	FollowCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCameraComponent"));
	FollowCameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName); // Attach the camera to the end of the spring arm
	FollowCameraComponent->bUsePawnControlRotation = false; // The camera itself should not rotate relative to the arm
}