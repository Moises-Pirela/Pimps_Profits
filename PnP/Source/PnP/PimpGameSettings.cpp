// Fill out your copyright notice in the Description page of Project Settings.


#include "PimpGameSettings.h"

#include "Camera/CameraComponent.h"

UPimpGameSettings::UPimpGameSettings()
{
}

UPimpGameSettings* UPimpGameSettings::GetMyGameUserSettings()
{
	return Cast<UPimpGameSettings>(UGameUserSettings::GetGameUserSettings());
}

void UPimpGameSettings::ApplyCustomSettings()
{
	
}

void UPimpGameSettings::ApplySettings(bool bCheckForCommandLineOverrides)
{
	Super::ApplySettings(bCheckForCommandLineOverrides);

	ApplyCustomSettings();
}

void UPimpGameSettings::SetToDefaults()
{
	Super::SetToDefaults();
	FOV = 90;
	HorizontalSensitivity = 1;
	VerticalSensitivity = 1;
}
