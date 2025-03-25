// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/SlateRendererTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateRendererTypes_generated_h
#error "SlateRendererTypes.generated.h already included, missing '#pragma once' in SlateRendererTypes.h"
#endif
#define SLATECORE_SlateRendererTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Rendering_SlateRendererTypes_h


#define FOREACH_ENUM_ESLATEPOSTRT(op) \
	op(ESlatePostRT::None) \
	op(ESlatePostRT::ESlatePostRT_0) \
	op(ESlatePostRT::ESlatePostRT_1) \
	op(ESlatePostRT::ESlatePostRT_2) \
	op(ESlatePostRT::ESlatePostRT_3) \
	op(ESlatePostRT::ESlatePostRT_4) \
	op(ESlatePostRT::Num) 

enum class ESlatePostRT : uint8;
template<> struct TIsUEnumClass<ESlatePostRT> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<ESlatePostRT>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
