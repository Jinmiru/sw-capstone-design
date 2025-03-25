// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/BlendProfile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendProfile_generated_h
#error "BlendProfile.generated.h already included, missing '#pragma once' in BlendProfile.h"
#endif
#define ENGINE_BlendProfile_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendProfileBoneEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendProfile(); \
	friend struct Z_Construct_UClass_UBlendProfile_Statics; \
public: \
	DECLARE_CLASS(UBlendProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendProfile) \
	DECLARE_WITHIN(USkeleton)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlendProfile(UBlendProfile&&); \
	UBlendProfile(const UBlendProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendProfile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlendProfile) \
	ENGINE_API virtual ~UBlendProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_57_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_62_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlendProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h


#define FOREACH_ENUM_EBLENDPROFILEMODE(op) \
	op(EBlendProfileMode::TimeFactor) \
	op(EBlendProfileMode::WeightFactor) \
	op(EBlendProfileMode::BlendMask) 

enum class EBlendProfileMode : uint8;
template<> struct TIsUEnumClass<EBlendProfileMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EBlendProfileMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
