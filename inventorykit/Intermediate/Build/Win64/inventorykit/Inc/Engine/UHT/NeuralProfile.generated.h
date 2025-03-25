// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NeuralProfile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NeuralProfile_generated_h
#error "NeuralProfile.generated.h already included, missing '#pragma once' in NeuralProfile.h"
#endif
#define ENGINE_NeuralProfile_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNeuralProfileStruct>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_INCLASS \
private: \
	static void StaticRegisterNativesUNeuralProfile(); \
	friend struct Z_Construct_UClass_UNeuralProfile_Statics; \
public: \
	DECLARE_CLASS(UNeuralProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNeuralProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNeuralProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNeuralProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNeuralProfile(UNeuralProfile&&); \
	UNeuralProfile(const UNeuralProfile&); \
public: \
	ENGINE_API virtual ~UNeuralProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_139_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNeuralProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h


#define FOREACH_ENUM_ENEURALPROFILEFORMAT(op) \
	op(ENeuralProfileFormat::Type32) \
	op(ENeuralProfileFormat::Type16) 

enum class ENeuralProfileFormat : uint8;
template<> struct TIsUEnumClass<ENeuralProfileFormat> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENeuralProfileFormat>();

#define FOREACH_ENUM_ENEURALMODELTILETYPE(op) \
	op(ENeuralModelTileType::OneByOne) \
	op(ENeuralModelTileType::TwoByTwo) \
	op(ENeuralModelTileType::FourByFour) \
	op(ENeuralModelTileType::EightByEight) \
	op(ENeuralModelTileType::Auto) 

enum class ENeuralModelTileType : uint8;
template<> struct TIsUEnumClass<ENeuralModelTileType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENeuralModelTileType>();

#define FOREACH_ENUM_ETILEOVERLAPRESOLVETYPE(op) \
	op(ETileOverlapResolveType::Ignore) \
	op(ETileOverlapResolveType::Feathering) 

enum class ETileOverlapResolveType : uint8;
template<> struct TIsUEnumClass<ETileOverlapResolveType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETileOverlapResolveType>();

#define FOREACH_ENUM_ENEURALPROFILERUNTIMETYPE(op) \
	op(ENeuralProfileRuntimeType::NNERuntimeRDGDml) \
	op(ENeuralProfileRuntimeType::NNERuntimeRDGHlsl) 

enum class ENeuralProfileRuntimeType : uint8;
template<> struct TIsUEnumClass<ENeuralProfileRuntimeType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENeuralProfileRuntimeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
