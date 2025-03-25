// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInstanceActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialInstanceActor_generated_h
#error "MaterialInstanceActor.generated.h already included, missing '#pragma once' in MaterialInstanceActor.h"
#endif
#define ENGINE_MaterialInstanceActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMaterialInstanceActor(); \
	friend struct Z_Construct_UClass_AMaterialInstanceActor_Statics; \
public: \
	DECLARE_CLASS(AMaterialInstanceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AMaterialInstanceActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AMaterialInstanceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaterialInstanceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AMaterialInstanceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaterialInstanceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMaterialInstanceActor(AMaterialInstanceActor&&); \
	AMaterialInstanceActor(const AMaterialInstanceActor&); \
public: \
	ENGINE_API virtual ~AMaterialInstanceActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AMaterialInstanceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
