// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetStringTableLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_KismetStringTableLibrary_generated_h
#error "KismetStringTableLibrary.generated.h already included, missing '#pragma once' in KismetStringTableLibrary.h"
#endif
#define ENGINE_KismetStringTableLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetMetaDataIdsFromStringTableEntry); \
	DECLARE_FUNCTION(execGetKeysFromStringTable); \
	DECLARE_FUNCTION(execGetRegisteredStringTables); \
	DECLARE_FUNCTION(execGetTableEntryMetaData); \
	DECLARE_FUNCTION(execGetTableEntrySourceString); \
	DECLARE_FUNCTION(execGetTableNamespace); \
	DECLARE_FUNCTION(execIsRegisteredTableEntry); \
	DECLARE_FUNCTION(execIsRegisteredTableId);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUKismetStringTableLibrary(); \
	friend struct Z_Construct_UClass_UKismetStringTableLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetStringTableLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetStringTableLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetStringTableLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetStringTableLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetStringTableLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetStringTableLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKismetStringTableLibrary(UKismetStringTableLibrary&&); \
	UKismetStringTableLibrary(const UKismetStringTableLibrary&); \
public: \
	ENGINE_API virtual ~UKismetStringTableLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetStringTableLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
