// TODO

#pragma once

#include "GameFramework/WorldSettings.h"
#include "SettingsHelper.generated.h"

struct FSoundClassProperties;
class FString;

/**
 * 
 */
UCLASS()
class SWAGTARPG_API ASettingsHelper : public AWorldSettings
{
	GENERATED_BODY()
  public:
	  UFUNCTION(BlueprintCallable, meta = (FriendlyName = "Set Audio Volume", CompactNodeTitle = "SetAudioVolume", Keywords = "Audio Sound Volume"), Category = Game)
      static bool SetAudioVolume(const FString& name, float vol);

    UFUNCTION(BlueprintPure, meta = (FriendlyName = "Get Supported Resolutions", CompactNodeTitle = "GetSupportedResolutions", Keywords = "Resolution"), Category = Game)
      static TArray<FVector2D> GetSupportedResolutions();
};




