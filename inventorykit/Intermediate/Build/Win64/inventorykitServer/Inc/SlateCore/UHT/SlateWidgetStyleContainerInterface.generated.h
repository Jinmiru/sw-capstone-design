// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/SlateWidgetStyleContainerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateWidgetStyleContainerInterface_generated_h
#error "SlateWidgetStyleContainerInterface.generated.h already included, missing '#pragma once' in SlateWidgetStyleContainerInterface.h"
#endif
#define SLATECORE_SlateWidgetStyleContainerInterface_generated_h

#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API USlateWidgetStyleContainerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateWidgetStyleContainerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, USlateWidgetStyleContainerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateWidgetStyleContainerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlateWidgetStyleContainerInterface(USlateWidgetStyleContainerInterface&&); \
	USlateWidgetStyleContainerInterface(const USlateWidgetStyleContainerInterface&); \
public: \
	SLATECORE_API virtual ~USlateWidgetStyleContainerInterface();


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSlateWidgetStyleContainerInterface(); \
	friend struct Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics; \
public: \
	DECLARE_CLASS(USlateWidgetStyleContainerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlateCore"), SLATECORE_API) \
	DECLARE_SERIALIZER(USlateWidgetStyleContainerInterface)


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~ISlateWidgetStyleContainerInterface() {} \
public: \
	typedef USlateWidgetStyleContainerInterface UClassType; \
	typedef ISlateWidgetStyleContainerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_14_PROLOG
#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLATECORE_API UClass* StaticClass<class USlateWidgetStyleContainerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
