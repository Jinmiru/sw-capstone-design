// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UniversalObjectLocators/AnimInstanceLocatorFragment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimInstanceLocatorFragment_generated_h
#error "AnimInstanceLocatorFragment.generated.h already included, missing '#pragma once' in AnimInstanceLocatorFragment.h"
#endif
#define ENGINE_AnimInstanceLocatorFragment_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimInstanceLocatorFragment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h


#define FOREACH_ENUM_EANIMINSTANCELOCATORFRAGMENTTYPE(op) \
	op(EAnimInstanceLocatorFragmentType::AnimInstance) \
	op(EAnimInstanceLocatorFragmentType::PostProcessAnimInstance) 

enum class EAnimInstanceLocatorFragmentType;
template<> struct TIsUEnumClass<EAnimInstanceLocatorFragmentType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimInstanceLocatorFragmentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
