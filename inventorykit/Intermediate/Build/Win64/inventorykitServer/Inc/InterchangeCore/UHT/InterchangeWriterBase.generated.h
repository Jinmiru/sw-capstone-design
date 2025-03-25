// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeWriterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECORE_InterchangeWriterBase_generated_h
#error "InterchangeWriterBase.generated.h already included, missing '#pragma once' in InterchangeWriterBase.h"
#endif
#define INTERCHANGECORE_InterchangeWriterBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeWriterBase(); \
	friend struct Z_Construct_UClass_UInterchangeWriterBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangeWriterBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeWriterBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeWriterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeWriterBase(UInterchangeWriterBase&&); \
	UInterchangeWriterBase(const UInterchangeWriterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeWriterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeWriterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeWriterBase) \
	INTERCHANGECORE_API virtual ~UInterchangeWriterBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_12_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeWriterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
