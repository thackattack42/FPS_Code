// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "FeedbackWidget.generated.h"

/**
 * 
 */
UCLASS()
class A10_END_API UFeedbackWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UProgressBar* HealthBar;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* CurrentAmmo;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* MaximumAmmo;

	UPROPERTY(BlueprintReadOnly)
		class UMaterialInstanceDynamic* ReticleMaterial;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		FVector EndPoint;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		FName ColorName;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		FLinearColor SafeColor;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		FLinearColor EnemyColor;

	FVector2D PixelPos;
	FVector2D ViewportPos;

	FVector WorldPos;
	FVector WorldDir;

	FHitResult OutHit;

	FCollisionObjectQueryParams ObjectTypes;
	FCollisionQueryParams ActorsToIgnore;
public:
	UFeedbackWidget(const FObjectInitializer& ObjectInitializer);
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;
	virtual void NativeConstruct() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
		class UImage* Reticle;

	UFUNCTION(BlueprintCallable)
		void SetHealth(float ratio);

	UFUNCTION(BlueprintCallable)
		void SetAmmo(float currAmmo, float maxAmmo);

	UFUNCTION(BlueprintCallable)
		FVector GetEndPoint();
};
