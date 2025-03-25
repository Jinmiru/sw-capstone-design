// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/InterchangeAnimationPayloadInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeAnimationPayloadInterface_generated_h
#error "InterchangeAnimationPayloadInterface.generated.h already included, missing '#pragma once' in InterchangeAnimationPayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeAnimationPayloadInterface_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAnimationPayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeAnimationPayloadInterface(UInterchangeAnimationPayloadInterface&&); \
	UInterchangeAnimationPayloadInterface(const UInterchangeAnimationPayloadInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimationPayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationPayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAnimationPayloadInterface) \
	NO_API virtual ~UInterchangeAnimationPayloadInterface();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeAnimationPayloadInterface(); \
	friend struct Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimationPayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimationPayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeAnimationPayloadInterface() {} \
public: \
	typedef UInterchangeAnimationPayloadInterface UClassType; \
	typedef IInterchangeAnimationPayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_15_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeAnimationPayloadInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
