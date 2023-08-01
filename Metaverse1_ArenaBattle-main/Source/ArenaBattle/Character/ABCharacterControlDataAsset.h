// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ABCharacterControlDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABCharacterControlDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	//깃허브에 저장할 때, 다른 이름으로 저장 -> 인코딩하여 저장 -> 유니코드 65001 로 인코딩해서 저장해야 깃허브 내에서 한글이 깨져보이지 않는다.
	UABCharacterControlDataAsset();

	UPROPERTY(EditAnywhere, Category = Pawn)
		uint32 bUseControlRotationYaw : 1;

	UPROPERTY(EditAnywhere, Category = Pawn)
		uint32 bUseControlRotationPitch : 1;

	UPROPERTY(EditAnywhere, Category = Pawn)
		uint32 bUseControlRotationRoll : 1;

	UPROPERTY(EditAnywhere, Category = CharacterMovement)
		FRotator RotationRate;

	UPROPERTY(EditAnywhere, Category = CharacterMovement)
		uint32 bUseControlDesiredRotation : 1;

	UPROPERTY(EditAnywhere, Category = CharacterMovement)
		uint32 bOrientRotationMovement : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		TObjectPtr<class UInputMappingContext> InputMappingContext;

	
	//Spring arm Section

	UPROPERTY(EditAnywhere, Category = SpringArm)
		float TargetArmLength;

	UPROPERTY(EditAnywhere, Category = SpringArm)
		FRotator RelativeRotation;

	UPROPERTY(EditAnywhere, Category = SpringArm)
		uint32 bUsePawnControlRotation : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
		uint32 bDoCollisionTest : 1;





	


	
};
