// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationDataSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONCORE_AnimationDataSource_generated_h
#error "AnimationDataSource.generated.h already included, missing '#pragma once' in AnimationDataSource.h"
#endif
#define ANIMATIONCORE_AnimationDataSource_generated_h

#define FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationDataSourceRegistry(); \
	friend struct Z_Construct_UClass_UAnimationDataSourceRegistry_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataSourceRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationCore"), ANIMATIONCORE_API) \
	DECLARE_SERIALIZER(UAnimationDataSourceRegistry)


#define FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONCORE_API UAnimationDataSourceRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationDataSourceRegistry(UAnimationDataSourceRegistry&&); \
	UAnimationDataSourceRegistry(const UAnimationDataSourceRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONCORE_API, UAnimationDataSourceRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataSourceRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataSourceRegistry) \
	ANIMATIONCORE_API virtual ~UAnimationDataSourceRegistry();


#define FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_19_PROLOG
#define FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONCORE_API UClass* StaticClass<class UAnimationDataSourceRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
