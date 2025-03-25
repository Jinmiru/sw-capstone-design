// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/MovieSceneEasingCurves.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEasingCurves_generated_h
#error "MovieSceneEasingCurves.generated.h already included, missing '#pragma once' in MovieSceneEasingCurves.h"
#endif
#define MOVIESCENE_MovieSceneEasingCurves_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBuiltInEasingFunction(); \
	friend struct Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBuiltInEasingFunction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBuiltInEasingFunction) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneBuiltInEasingFunction*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBuiltInEasingFunction(UMovieSceneBuiltInEasingFunction&&); \
	UMovieSceneBuiltInEasingFunction(const UMovieSceneBuiltInEasingFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBuiltInEasingFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBuiltInEasingFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBuiltInEasingFunction) \
	MOVIESCENE_API virtual ~UMovieSceneBuiltInEasingFunction();


#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_44_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_48_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBuiltInEasingFunction>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEasingExternalCurve(); \
	friend struct Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEasingExternalCurve, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneEasingExternalCurve) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEasingExternalCurve*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneEasingExternalCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEasingExternalCurve(UMovieSceneEasingExternalCurve&&); \
	UMovieSceneEasingExternalCurve(const UMovieSceneEasingExternalCurve&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEasingExternalCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEasingExternalCurve); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEasingExternalCurve) \
	MOVIESCENE_API virtual ~UMovieSceneEasingExternalCurve();


#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_63_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_67_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneEasingExternalCurve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h


#define FOREACH_ENUM_EMOVIESCENEBUILTINEASING(op) \
	op(EMovieSceneBuiltInEasing::Linear) \
	op(EMovieSceneBuiltInEasing::SinIn) \
	op(EMovieSceneBuiltInEasing::SinOut) \
	op(EMovieSceneBuiltInEasing::SinInOut) \
	op(EMovieSceneBuiltInEasing::QuadIn) \
	op(EMovieSceneBuiltInEasing::QuadOut) \
	op(EMovieSceneBuiltInEasing::QuadInOut) \
	op(EMovieSceneBuiltInEasing::Cubic) \
	op(EMovieSceneBuiltInEasing::CubicIn) \
	op(EMovieSceneBuiltInEasing::CubicOut) \
	op(EMovieSceneBuiltInEasing::CubicInOut) \
	op(EMovieSceneBuiltInEasing::HermiteCubicInOut) \
	op(EMovieSceneBuiltInEasing::QuartIn) \
	op(EMovieSceneBuiltInEasing::QuartOut) \
	op(EMovieSceneBuiltInEasing::QuartInOut) \
	op(EMovieSceneBuiltInEasing::QuintIn) \
	op(EMovieSceneBuiltInEasing::QuintOut) \
	op(EMovieSceneBuiltInEasing::QuintInOut) \
	op(EMovieSceneBuiltInEasing::ExpoIn) \
	op(EMovieSceneBuiltInEasing::ExpoOut) \
	op(EMovieSceneBuiltInEasing::ExpoInOut) \
	op(EMovieSceneBuiltInEasing::CircIn) \
	op(EMovieSceneBuiltInEasing::CircOut) \
	op(EMovieSceneBuiltInEasing::CircInOut) \
	op(EMovieSceneBuiltInEasing::Custom) 

enum class EMovieSceneBuiltInEasing : uint8;
template<> struct TIsUEnumClass<EMovieSceneBuiltInEasing> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBuiltInEasing>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
