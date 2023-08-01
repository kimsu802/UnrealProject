// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABFountain.generated.h"

UCLASS()
class ARENABATTLE_API AABFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	/*
		Visible / Edit : �б� ����, ���� ����
		Anywhere / DefaultsOnly / InstanceOnly : ��Ÿ�ӿ����� �б� �������� ���, �ν��Ͻ����� ���ϵ��� �����ϰ� Ŭ���� ���ؿ����� �������� �ʴ´�.
		BlueprintReadOnly / BlueprintReadWrite
		Category : ī�װ� ����
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	TObjectPtr<class UStaticMeshComponent> Body;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	TObjectPtr<class UStaticMeshComponent> Water;

};
