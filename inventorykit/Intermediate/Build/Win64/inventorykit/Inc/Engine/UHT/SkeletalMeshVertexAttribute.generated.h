// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/SkeletalMeshVertexAttribute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshVertexAttribute_generated_h
#error "SkeletalMeshVertexAttribute.generated.h already included, missing '#pragma once' in SkeletalMeshVertexAttribute.h"
#endif
#define ENGINE_SkeletalMeshVertexAttribute_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshVertexAttributeInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h


#define FOREACH_ENUM_ESKELETALMESHVERTEXATTRIBUTEDATATYPE(op) \
	op(ESkeletalMeshVertexAttributeDataType::Float) \
	op(ESkeletalMeshVertexAttributeDataType::HalfFloat) \
	op(ESkeletalMeshVertexAttributeDataType::NUInt8) 

enum class ESkeletalMeshVertexAttributeDataType;
template<> struct TIsUEnumClass<ESkeletalMeshVertexAttributeDataType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshVertexAttributeDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
