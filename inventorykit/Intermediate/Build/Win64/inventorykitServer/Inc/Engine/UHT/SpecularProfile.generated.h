// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SpecularProfile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SpecularProfile_generated_h
#error "SpecularProfile.generated.h already included, missing '#pragma once' in SpecularProfile.h"
#endif
#define ENGINE_SpecularProfile_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpecularProfileStruct>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUSpecularProfile(); \
	friend struct Z_Construct_UClass_USpecularProfile_Statics; \
public: \
	DECLARE_CLASS(USpecularProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USpecularProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USpecularProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpecularProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USpecularProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpecularProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpecularProfile(USpecularProfile&&); \
	USpecularProfile(const USpecularProfile&); \
public: \
	ENGINE_API virtual ~USpecularProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_70_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_73_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USpecularProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h


#define FOREACH_ENUM_ESPECULARPROFILEFORMAT(op) \
	op(ESpecularProfileFormat::ViewLightVector) \
	op(ESpecularProfileFormat::HalfVector) 

enum class ESpecularProfileFormat : uint8;
template<> struct TIsUEnumClass<ESpecularProfileFormat> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESpecularProfileFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
