// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveToolChange.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveToolChange_generated_h
#error "InteractiveToolChange.generated.h already included, missing '#pragma once' in InteractiveToolChange.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveToolChange_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UToolContextTransactionProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToolContextTransactionProvider(UToolContextTransactionProvider&&); \
	UToolContextTransactionProvider(const UToolContextTransactionProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UToolContextTransactionProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolContextTransactionProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolContextTransactionProvider) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UToolContextTransactionProvider();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUToolContextTransactionProvider(); \
	friend struct Z_Construct_UClass_UToolContextTransactionProvider_Statics; \
public: \
	DECLARE_CLASS(UToolContextTransactionProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UToolContextTransactionProvider)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IToolContextTransactionProvider() {} \
public: \
	typedef UToolContextTransactionProvider UClassType; \
	typedef IToolContextTransactionProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_28_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UToolContextTransactionProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
