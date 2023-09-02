// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "UnnamedHuntingGameCharacter.h"
#include "UnnamedHuntingGameProjectile.h"
#include "GameFramework/PlayerController.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"



// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);
	shooting = false;
}


void UTP_WeaponComponent::Fire()
{
	if(Character == nullptr || Character->GetController() == nullptr || shooting == true)
	{
		return;
	}


	// Try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
			const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);
	
			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	
			// Spawn the projectile at the muzzle
			World->SpawnActor<AUnnamedHuntingGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

			OnWeaponFired.Broadcast();
			shooting = true;

			GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &UTP_WeaponComponent::DelayFire, 1.0f, false);
		}
	}
	
	// Try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, Character->GetActorLocation());
	}

	FString BoolValueString = shooting ? TEXT("True") : TEXT("False");
	FColor TextColor = FColor::Green; // Choose a color for the text
	float Duration = 5.0f; // How long the message will stay on the screen

	// Add the debug message to the screen
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, Duration, TextColor, BoolValueString);
	}

}

void UTP_WeaponComponent::DelayFire()
{
	shooting = false;

	FString BoolValueString = TEXT("should have stopped");
	FColor TextColor = FColor::Green; // Choose a color for the text
	float Duration = 5.0f; // How long the message will stay on the screen

	// Add the debug message to the screen
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, Duration, TextColor, BoolValueString);
	}
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if(Character != nullptr)
	{
		// Unregister from the OnUseItem Event
		Character->OnUseItem.RemoveDynamic(this, &UTP_WeaponComponent::Fire);
	}
}

void UTP_WeaponComponent::AttachWeapon(AUnnamedHuntingGameCharacter* TargetCharacter)
{

	Character = TargetCharacter;
	if(Character != nullptr)
	{
		// Attach the weapon to the First Person Character
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
		GetOwner()->AttachToComponent(Character->GetMesh1P(),AttachmentRules, FName(TEXT("GripPoint")));

		// Register so that Fire is called every time the character tries to use the item being held
		Character->OnUseItem.AddDynamic(this, &UTP_WeaponComponent::Fire);
		Character->hasWeapon = true;
		OnWeaponAttach.Broadcast();
	}
}

