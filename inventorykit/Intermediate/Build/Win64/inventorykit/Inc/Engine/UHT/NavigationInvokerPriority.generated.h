// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationInvokerPriority.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationInvokerPriority_generated_h
#error "NavigationInvokerPriority.generated.h already included, missing '#pragma once' in NavigationInvokerPriority.h"
#endif
#define ENGINE_NavigationInvokerPriority_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerPriority_h


#define FOREACH_ENUM_ENAVIGATIONINVOKERPRIORITY(op) \
	op(ENavigationInvokerPriority::VeryLow) \
	op(ENavigationInvokerPriority::Low) \
	op(ENavigationInvokerPriority::Default) \
	op(ENavigationInvokerPriority::High) \
	op(ENavigationInvokerPriority::VeryHigh) 

enum class ENavigationInvokerPriority : uint8;
template<> struct TIsUEnumClass<ENavigationInvokerPriority> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENavigationInvokerPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
