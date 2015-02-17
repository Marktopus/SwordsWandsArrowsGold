// TODO

#include "SWAGTARPG.h"
#include "SettingsHelper.h"

#include "Engine.h"
#include "AudioDevice.h"

//#include "RHIMethods.h"

bool ASettingsHelper::SetAudioVolume(const FString& name, float vol)
{
  auto& soundClassArray = GEngine->GetAudioDevice()->SoundClasses;
  for (auto& it : soundClassArray)
  {
    if (it.Key->GetFullName().Contains("." + name))
    {
      it.Value.Volume = vol;
      return true;
    }
    
  }
  return false;
}

TArray<FVector2D> ASettingsHelper::GetSupportedResolutions()
{
  TArray<FVector2D> retVal;
  FScreenResolutionArray resolutions;
  if (RHIGetAvailableResolutions(resolutions, true))
  {
    for (int i = 0; i < resolutions.Num(); ++i)
    {
      retVal.Add(FVector2D(resolutions[i].Width, resolutions[i].Height));
    }
  }
  return retVal;
}



