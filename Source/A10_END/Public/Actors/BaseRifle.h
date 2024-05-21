// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enums/ETypesCode.h"
#include "BaseRifle.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRifleDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmmoDelegate, float, CurrentAmmo, float, MaxAmmo);
UCLASS()
class A10_END_API ABaseRifle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseRifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		APawn* ParentPawn;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FName SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class ABaseBullet>BulletClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool InProcess;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool Dead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurrentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxAmmo;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TSubclassOf<class ABaseBullet>> BulletTypes;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void FireWeapon();

	UFUNCTION()
		bool CanFire();

	UFUNCTION()
		void StopProcess();

	UFUNCTION()
		void ResetFire();

	UFUNCTION()
		void OwnerDead();

	UFUNCTION()
		void RequestReload();

	UFUNCTION()
		void Reload();

	UFUNCTION()
		void UseAmmo();

	UFUNCTION()
		void SetElement(ETypes Type);

	UFUNCTION()
		FVector GetStartLocation();

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable|Delegate")
		FRifleDelegate OnShotHappened;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable|Delegate")
		FRifleDelegate OnReload;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable|Delegate")
		FAmmoDelegate OnAmmoChanged;
};
