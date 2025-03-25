// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/ExposedValueHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ExposedValueHandler_generated_h
#error "ExposedValueHandler.generated.h already included, missing '#pragma once' in ExposedValueHandler.h"
#endif
#define ENGINE_ExposedValueHandler_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FExposedValueCopyRecord>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedValueHandler_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FExposedValueHandler>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNodeExposedValueHandler>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeExposedValueHandler Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNodeExposedValueHandler_Base>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeExposedValueHandler_Base Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNodeExposedValueHandler_PropertyAccess>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h


#define FOREACH_ENUM_EPOSTCOPYOPERATION(op) \
	op(EPostCopyOperation::None) \
	op(EPostCopyOperation::LogicalNegateBool) 

enum class EPostCopyOperation : uint8;
template<> struct TIsUEnumClass<EPostCopyOperation> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPostCopyOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
