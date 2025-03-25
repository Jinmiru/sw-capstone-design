// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMixerSourceManager.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOMIXER_AudioMixerSourceManager_generated_h
#error "AudioMixerSourceManager.generated.h already included, missing '#pragma once' in AudioMixerSourceManager.h"
#endif
#define AUDIOMIXER_AudioMixerSourceManager_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h


#define FOREACH_ENUM_ESOURCEMANAGERRENDERTHREADPHASE(op) \
	op(Begin) \
	op(PumpMpscCmds) \
	op(PumpCmds) \
	op(ProcessModulators) \
	op(UpdatePendingReleaseData) \
	op(GenerateSrcAudio_WithBusses) \
	op(ComputeBusses) \
	op(GenerateSrcAudio_WithoutBusses) \
	op(UpdateBusses) \
	op(SpatialInterface_OnAllSourcesProcessed) \
	op(SourceDataOverride_OnAllSourcesProcessed) \
	op(UpdateGameThreadCopies) \
	op(Finished) 

enum ESourceManagerRenderThreadPhase : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<ESourceManagerRenderThreadPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
