// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeGrassType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeGrassType_generated_h
#error "LandscapeGrassType.generated.h already included, missing '#pragma once' in LandscapeGrassType.h"
#endif
#define LANDSCAPE_LandscapeGrassType_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrassVariety_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FGrassVariety>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_162_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeGrassType(); \
	friend struct Z_Construct_UClass_ULandscapeGrassType_Statics; \
public: \
	DECLARE_CLASS(ULandscapeGrassType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeGrassType)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_162_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeGrassType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGrassType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeGrassType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGrassType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeGrassType(ULandscapeGrassType&&); \
	ULandscapeGrassType(const ULandscapeGrassType&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeGrassType();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_159_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_162_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_162_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_162_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeGrassType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h


#define FOREACH_ENUM_EGRASSSCALING(op) \
	op(EGrassScaling::Uniform) \
	op(EGrassScaling::Free) \
	op(EGrassScaling::LockXY) 

enum class EGrassScaling : uint8;
template<> struct TIsUEnumClass<EGrassScaling> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<EGrassScaling>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
