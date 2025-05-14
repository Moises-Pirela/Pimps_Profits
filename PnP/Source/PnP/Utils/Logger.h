#pragma once

enum ELogLevel {
	LOG_INFO,
	LOG_DEBUG,
	LOG_WARNING,
	LOG_ERROR,
	LOG_MAX,
};

inline FColor logColorLookUp[LOG_MAX]
{
	FColor::White,
	FColor::Green,
	FColor::Yellow,
	FColor::Red
};

DECLARE_LOG_CATEGORY_EXTERN(LogClock, Log, All);

static void ClockLog(const FString& message, const ELogLevel level = LOG_INFO, const bool bOnScreen = true)
{
	switch(level)
	{
	case LOG_WARNING:
		UE_LOG(LogClock, Warning, TEXT("%s"), *message);
		break;

	case LOG_ERROR:
		UE_LOG(LogClock, Error, TEXT("%s"), *message);
		break;

	case LOG_INFO:
	default:
		UE_LOG(LogClock, Log, TEXT("%s"), *message);
		break;
	}

	if(bOnScreen)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.0f,
			logColorLookUp[level],
			message
		);
	}
}