// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Actors/BaseRifle.h"
#include "../Public/AnimationEventGraph.h"
#include "Blueprint/UserWidget.h"
#include "Components/HealthComponent.h"
#include "../Public/Widgets/FeedbackWidget.h"

ABasePlayer::ABasePlayer()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->AddLocalOffset(FVector(0.0f, 90.0f, 90.0f));
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();
	PlayerController = GetController()->CastToPlayerController();

	if (PlayerController == nullptr)
		Destroy();

	UUserWidget* Widget = CreateWidget<class UUserWidget, class APlayerController>(PlayerController, UserWidget);
	Widget->AddToViewport();
	FeedbackWidget = Cast<UFeedbackWidget>(Widget);

	if (Widget == nullptr)
		Destroy();

	HealthComponent->OnHealthChanged.AddDynamic(FeedbackWidget, &UFeedbackWidget::SetHealth);

	Weapon->OnAmmoChanged.AddDynamic(FeedbackWidget, &UFeedbackWidget::SetAmmo);
	Weapon->Reload();
	Weapon->OnReload.AddDynamic(Animations, &UAnimationEventGraph::ReloadAnimation);
}

FRotator ABasePlayer::GetBaseAimRotation() const
{
	return FRotationMatrix::MakeFromX(FeedbackWidget->GetEndPoint() - Weapon->GetStartLocation()).Rotator();
}

void ABasePlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Turn
	PlayerInputComponent->BindAxis("TurnTo", this, &ABasePlayer::AddControllerYawInput);

	//Movement
	PlayerInputComponent->BindAxis("Forward", this, &ABasePlayer::InputAxisForward);
	PlayerInputComponent->BindAxis("Right", this, &ABasePlayer::InputAxisRight);

	//Look
	PlayerInputComponent->BindAxis("LookUp", this, &ABasePlayer::AddControllerPitchInput);

	//Fire Weapon
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &ABasePlayer::InputFire);

	//Switch Damage Type
	PlayerInputComponent->BindAction("FireType", IE_Pressed, this, &ABasePlayer::SetFireType);
	PlayerInputComponent->BindAction("PlantType", IE_Pressed, this, &ABasePlayer::SetPlantType);
	PlayerInputComponent->BindAction("WaterType", IE_Pressed, this, &ABasePlayer::SetWaterType);

	//Reload
	PlayerInputComponent->BindAction("Reload", EInputEvent::IE_Pressed, this, &ABasePlayer::InputReload);
}

void ABasePlayer::InputAxisForward(float AxisInput)
{
	AddMovementInput(GetActorForwardVector(), AxisInput);
}

void ABasePlayer::InputAxisRight(float AxisInput)
{
	AddMovementInput(GetActorRightVector(), AxisInput);
}

void ABasePlayer::InputFire()
{
	Weapon->FireWeapon();
}

void ABasePlayer::InputReload()
{
	Weapon->RequestReload();
}

void ABasePlayer::HandleDeath()
{
	Super::HandleDeath();
	DisableInput(PlayerController);
}

void ABasePlayer::SetFireType()
{
	Weapon->SetElement(ETypes::FIRE);
}

void ABasePlayer::SetPlantType()
{
	Weapon->SetElement(ETypes::PLANT);
}

void ABasePlayer::SetWaterType()
{
	Weapon->SetElement(ETypes::WATER);
}