// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintTypeConversions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef ENGINE_BlueprintTypeConversions_generated_h
#error "BlueprintTypeConversions.generated.h already included, missing '#pragma once' in BlueprintTypeConversions.h"
#endif
#define ENGINE_BlueprintTypeConversions_generated_h

#define FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintTypeConversions(); \
	friend struct Z_Construct_UClass_UBlueprintTypeConversions_Statics; \
public: \
	DECLARE_CLASS(UBlueprintTypeConversions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprintTypeConversions)


#define FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintTypeConversions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintTypeConversions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintTypeConversions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintTypeConversions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintTypeConversions(UBlueprintTypeConversions&&); \
	UBlueprintTypeConversions(const UBlueprintTypeConversions&); \
public: \
	ENGINE_API virtual ~UBlueprintTypeConversions();


#define FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_45_PROLOG
#define FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_49_INCLASS \
	FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintTypeConversions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
