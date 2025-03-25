// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEENGINE_InterchangeMeshUtilities_generated_h
#error "InterchangeMeshUtilities.generated.h already included, missing '#pragma once' in InterchangeMeshUtilities.h"
#endif
#define INTERCHANGEENGINE_InterchangeMeshUtilities_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMeshUtilities(); \
	friend struct Z_Construct_UClass_UInterchangeMeshUtilities_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMeshUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), INTERCHANGEENGINE_API) \
	DECLARE_SERIALIZER(UInterchangeMeshUtilities)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeMeshUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMeshUtilities(UInterchangeMeshUtilities&&); \
	UInterchangeMeshUtilities(const UInterchangeMeshUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeMeshUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeMeshUtilities) \
	INTERCHANGEENGINE_API virtual ~UInterchangeMeshUtilities();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_13_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangeMeshUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
