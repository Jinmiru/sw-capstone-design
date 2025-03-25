// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavDataGatheringMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavDataGatheringMode_generated_h
#error "NavDataGatheringMode.generated.h already included, missing '#pragma once' in NavDataGatheringMode.h"
#endif
#define ENGINE_NavDataGatheringMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavDataGatheringMode_h


#define FOREACH_ENUM_ENAVDATAGATHERINGMODE(op) \
	op(ENavDataGatheringMode::Default) \
	op(ENavDataGatheringMode::Instant) \
	op(ENavDataGatheringMode::Lazy) 

enum class ENavDataGatheringMode : uint8;
template<> struct TIsUEnumClass<ENavDataGatheringMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
