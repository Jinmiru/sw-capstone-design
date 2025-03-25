// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneMaterialTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneMaterialTrack_generated_h
#error "MovieSceneMaterialTrack.generated.h already included, missing '#pragma once' in MovieSceneMaterialTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneMaterialTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FComponentMaterialInfo>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMaterialTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneMaterialTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneMaterialTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneMaterialTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneMaterialTrack(UMovieSceneMaterialTrack&&); \
	UMovieSceneMaterialTrack(const UMovieSceneMaterialTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneMaterialTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMaterialTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMaterialTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneMaterialTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_85_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneMaterialTrack>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_209_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneComponentMaterialTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneComponentMaterialTrack, UMovieSceneMaterialTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneComponentMaterialTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneComponentMaterialTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_209_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneComponentMaterialTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComponentMaterialTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneComponentMaterialTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComponentMaterialTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneComponentMaterialTrack(UMovieSceneComponentMaterialTrack&&); \
	UMovieSceneComponentMaterialTrack(const UMovieSceneComponentMaterialTrack&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneComponentMaterialTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_203_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_209_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_209_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_209_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneComponentMaterialTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h


#define FOREACH_ENUM_ECOMPONENTMATERIALTYPE(op) \
	op(EComponentMaterialType::Empty) \
	op(EComponentMaterialType::IndexedMaterial) \
	op(EComponentMaterialType::OverlayMaterial) \
	op(EComponentMaterialType::DecalMaterial) \
	op(EComponentMaterialType::VolumetricCloudMaterial) 

enum class EComponentMaterialType;
template<> struct TIsUEnumClass<EComponentMaterialType> { enum { Value = true }; };
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EComponentMaterialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
