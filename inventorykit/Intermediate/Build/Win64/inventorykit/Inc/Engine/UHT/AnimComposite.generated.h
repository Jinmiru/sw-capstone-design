// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimComposite.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimComposite_generated_h
#error "AnimComposite.generated.h already included, missing '#pragma once' in AnimComposite.h"
#endif
#define ENGINE_AnimComposite_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAnimComposite(); \
	friend struct Z_Construct_UClass_UAnimComposite_Statics; \
public: \
	DECLARE_CLASS(UAnimComposite, UAnimCompositeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimComposite) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimComposite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimComposite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimComposite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimComposite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimComposite(UAnimComposite&&); \
	UAnimComposite(const UAnimComposite&); \
public: \
	ENGINE_API virtual ~UAnimComposite();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimComposite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
