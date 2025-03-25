// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationDataInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationDataInterface_generated_h
#error "NavigationDataInterface.generated.h already included, missing '#pragma once' in NavigationDataInterface.h"
#endif
#define ENGINE_NavigationDataInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavigationDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationDataInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavigationDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationDataInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationDataInterface(UNavigationDataInterface&&); \
	UNavigationDataInterface(const UNavigationDataInterface&); \
public: \
	ENGINE_API virtual ~UNavigationDataInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavigationDataInterface(); \
	friend struct Z_Construct_UClass_UNavigationDataInterface_Statics; \
public: \
	DECLARE_CLASS(UNavigationDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavigationDataInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~INavigationDataInterface() {} \
public: \
	typedef UNavigationDataInterface UClassType; \
	typedef INavigationDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
