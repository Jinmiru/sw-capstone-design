// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieScene_generated_h
#error "MovieScene.generated.h already included, missing '#pragma once' in MovieScene.h"
#endif
#define MOVIESCENE_MovieScene_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneExpansionState>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEditorData>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTrackLabels>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneObjectBindingIDs>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSectionGroup>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNodeGroup(); \
	friend struct Z_Construct_UClass_UMovieSceneNodeGroup_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNodeGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneNodeGroup)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneNodeGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneNodeGroup(UMovieSceneNodeGroup&&); \
	UMovieSceneNodeGroup(const UMovieSceneNodeGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneNodeGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNodeGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNodeGroup) \
	MOVIESCENE_API virtual ~UMovieSceneNodeGroup();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_224_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_227_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneNodeGroup>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_286_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNodeGroupCollection(); \
	friend struct Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNodeGroupCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneNodeGroupCollection)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_286_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneNodeGroupCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneNodeGroupCollection(UMovieSceneNodeGroupCollection&&); \
	UMovieSceneNodeGroupCollection(const UMovieSceneNodeGroupCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneNodeGroupCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNodeGroupCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNodeGroupCollection) \
	MOVIESCENE_API virtual ~UMovieSceneNodeGroupCollection();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_283_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_286_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_286_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_286_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneNodeGroupCollection>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_343_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene, MOVIESCENE_API)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_343_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene(); \
	friend struct Z_Construct_UClass_UMovieScene_Statics; \
public: \
	DECLARE_CLASS(UMovieScene, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieScene) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_343_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_343_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieScene(UMovieScene&&); \
	UMovieScene(const UMovieScene&); \
public: \
	MOVIESCENE_API virtual ~UMovieScene();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_339_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_343_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_343_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_343_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
