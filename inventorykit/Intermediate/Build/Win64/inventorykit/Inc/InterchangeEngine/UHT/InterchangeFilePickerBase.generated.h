// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeFilePickerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeTranslatorAssetType : uint8;
enum class EInterchangeTranslatorType : uint8;
struct FInterchangeFilePickerParameters;
#ifdef INTERCHANGEENGINE_InterchangeFilePickerBase_generated_h
#error "InterchangeFilePickerBase.generated.h already included, missing '#pragma once' in InterchangeFilePickerBase.h"
#endif
#define INTERCHANGEENGINE_InterchangeFilePickerBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangeFilePickerParameters>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScriptedFilePickerForTranslatorType); \
	DECLARE_FUNCTION(execScriptedFilePickerForTranslatorAssetType);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFilePickerBase(); \
	friend struct Z_Construct_UClass_UInterchangeFilePickerBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangeFilePickerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), INTERCHANGEENGINE_API) \
	DECLARE_SERIALIZER(UInterchangeFilePickerBase)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeFilePickerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeFilePickerBase(UInterchangeFilePickerBase&&); \
	UInterchangeFilePickerBase(const UInterchangeFilePickerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeFilePickerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFilePickerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFilePickerBase) \
	INTERCHANGEENGINE_API virtual ~UInterchangeFilePickerBase();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_30_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangeFilePickerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
