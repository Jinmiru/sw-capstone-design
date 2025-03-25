// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeResultsContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECORE_InterchangeResultsContainer_generated_h
#error "InterchangeResultsContainer.generated.h already included, missing '#pragma once' in InterchangeResultsContainer.h"
#endif
#define INTERCHANGECORE_InterchangeResultsContainer_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeResultsContainer(); \
	friend struct Z_Construct_UClass_UInterchangeResultsContainer_Statics; \
public: \
	DECLARE_CLASS(UInterchangeResultsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeResultsContainer)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeResultsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeResultsContainer(UInterchangeResultsContainer&&); \
	UInterchangeResultsContainer(const UInterchangeResultsContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeResultsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeResultsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeResultsContainer) \
	INTERCHANGECORE_API virtual ~UInterchangeResultsContainer();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_19_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeResultsContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
