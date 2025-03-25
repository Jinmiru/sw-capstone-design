// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveFoliageActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FOLIAGE_InteractiveFoliageActor_generated_h
#error "InteractiveFoliageActor.generated.h already included, missing '#pragma once' in InteractiveFoliageActor.h"
#endif
#define FOLIAGE_InteractiveFoliageActor_generated_h

#define FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCapsuleTouched);


#define FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAInteractiveFoliageActor(); \
	friend struct Z_Construct_UClass_AInteractiveFoliageActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveFoliageActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(AInteractiveFoliageActor)


#define FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API AInteractiveFoliageActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractiveFoliageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, AInteractiveFoliageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveFoliageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractiveFoliageActor(AInteractiveFoliageActor&&); \
	AInteractiveFoliageActor(const AInteractiveFoliageActor&); \
public: \
	FOLIAGE_API virtual ~AInteractiveFoliageActor();


#define FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class AInteractiveFoliageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
