// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UniversalObjectLocatorResolveParams.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNIVERSALOBJECTLOCATOR_UniversalObjectLocatorResolveParams_generated_h
#error "UniversalObjectLocatorResolveParams.generated.h already included, missing '#pragma once' in UniversalObjectLocatorResolveParams.h"
#endif
#define UNIVERSALOBJECTLOCATOR_UniversalObjectLocatorResolveParams_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorResolveParams_h


#define FOREACH_ENUM_ELOCATORRESOLVEFLAGS(op) \
	op(ELocatorResolveFlags::None) \
	op(ELocatorResolveFlags::Load) \
	op(ELocatorResolveFlags::Unload) \
	op(ELocatorResolveFlags::Async) \
	op(ELocatorResolveFlags::WillWait) \
	op(ELocatorResolveFlags::AsyncWait) 

enum class ELocatorResolveFlags : uint8;
template<> struct TIsUEnumClass<ELocatorResolveFlags> { enum { Value = true }; };
template<> UNIVERSALOBJECTLOCATOR_API UEnum* StaticEnum<ELocatorResolveFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
