// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "PimpGameSettings.generated.h"

/**
 * 
 */
UCLASS()
class PNP_API UPimpGameSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:

	UPimpGameSettings();

	UFUNCTION(BlueprintCallable, Category = "Settings")
	static UPimpGameSettings* GetMyGameUserSettings();

	UPROPERTY(Config, BlueprintReadWrite, Category= "Graphics")
	float FOV = 90;

	UPROPERTY(Config, BlueprintReadWrite, Category = "Gameplay")
	float HorizontalSensitivity = 1;

	UPROPERTY(Config, BlueprintReadWrite, Category = "Gameplay")
	float VerticalSensitivity = 1;

	UPROPERTY(Config, BlueprintReadWrite, Category = "Audio")
	float MasterVolume = 1;

	UPROPERTY(Config, BlueprintReadWrite, Category = "Audio")
	float SFXVolume = 1;

	UPROPERTY(Config, BlueprintReadWrite, Category = "Audio")
	float MusicVolume = 1;

	void ApplyCustomSettings();

	virtual void ApplySettings(bool bCheckForCommandLineOverrides) override;
	virtual void SetToDefaults() override;
	
};
