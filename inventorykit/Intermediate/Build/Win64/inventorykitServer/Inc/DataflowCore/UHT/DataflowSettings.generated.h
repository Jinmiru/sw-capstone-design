// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWCORE_DataflowSettings_generated_h
#error "DataflowSettings.generated.h already included, missing '#pragma once' in DataflowSettings.h"
#endif
#define DATAFLOWCORE_DataflowSettings_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNodeColors_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct();


template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<struct FNodeColors>();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowSettings(); \
	friend struct Z_Construct_UClass_UDataflowSettings_Statics; \
public: \
	DECLARE_CLASS(UDataflowSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataflowCore"), DATAFLOWCORE_API) \
	DECLARE_SERIALIZER(UDataflowSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWCORE_API UDataflowSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWCORE_API, UDataflowSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowSettings(UDataflowSettings&&); \
	UDataflowSettings(const UDataflowSettings&); \
public: \
	DATAFLOWCORE_API virtual ~UDataflowSettings();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_29_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_32_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWCORE_API UClass* StaticClass<class UDataflowSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
