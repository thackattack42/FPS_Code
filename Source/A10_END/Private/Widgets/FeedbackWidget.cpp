// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/FeedbackWidget.h"
#include "Components/ProgressBar.h"
#include "../../A10_END.h"

UFeedbackWidget::UFeedbackWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer), SafeColor(0.0f, 0.7f, 0.7f, 0.0f), EnemyColor(0.85f, 0.1f, 0.1f, 0.0f), ColorName(TEXT("Color")),
WorldPos(0.0f, 0.0f, 0.0f), WorldDir(0.0f, 0.0f, 0.0f), PixelPos(0.0f, 0.0f), ViewportPos(0.0f, 0.0f)
{
	if (HealthBar)
	{
		UE_LOG(Game, Warning, TEXT("Valid Bar"));
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Invalid Bar"));
	}
}

void UFeedbackWidget::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	//Super::NativeTick(MyGeometry, DeltaTime)

	Reticle->GetWorld()->GetGameViewport()->GetViewportSize(ViewportPos);
	PixelPos = MyGeometry.AbsoluteToLocal(Reticle->GetCachedGeometry().LocalToAbsolute(FVector2D(0.0f, 0.0f))) / MyGeometry.GetLocalSize() * ViewportPos;
	PixelPos += 0.5f * TransformVector(Reticle->GetCachedGeometry().GetAccumulatedRenderTransform(), Reticle->GetCachedGeometry().GetLocalSize());

	GetOwningPlayer()->DeprojectScreenPositionToWorld(PixelPos.X, PixelPos.Y, WorldPos, WorldDir);
	EndPoint = 100000.0f * WorldDir + WorldPos;

	ObjectTypes.AddObjectTypesToQuery(ECC_WorldStatic);
	ObjectTypes.AddObjectTypesToQuery(ECC_Pawn);

	ActorsToIgnore.bTraceComplex = false;
	ActorsToIgnore.bReturnPhysicalMaterial = true;
	ActorsToIgnore.bReturnFaceIndex = true;
	ActorsToIgnore.AddIgnoredActor(GetOwningPlayerPawn());

	if (!GetWorld()->LineTraceSingleByObjectType(OutHit, EndPoint, WorldPos, ObjectTypes, ActorsToIgnore))
		return ReticleMaterial->SetVectorParameterValue(ColorName, SafeColor);

	EndPoint = OutHit.ImpactPoint;

	if (Cast<APawn>(OutHit.GetActor()) == nullptr)
		return ReticleMaterial->SetVectorParameterValue(ColorName, SafeColor);

	ReticleMaterial->SetVectorParameterValue(ColorName, EnemyColor);
}

void UFeedbackWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ReticleMaterial = Reticle->GetDynamicMaterial();
}

void UFeedbackWidget::SetHealth(float ratio)
{
	HealthBar->SetPercent(ratio);
}

void UFeedbackWidget::SetAmmo(float currAmmo, float maxAmmo)
{
	FText currentAmmo = currentAmmo.AsNumber(currAmmo);
	FText maximumAmmo = maximumAmmo.AsNumber(maxAmmo);

	CurrentAmmo->SetText(currentAmmo);
	MaximumAmmo->SetText(maximumAmmo);
}

FVector UFeedbackWidget::GetEndPoint()
{
	return EndPoint;
}
