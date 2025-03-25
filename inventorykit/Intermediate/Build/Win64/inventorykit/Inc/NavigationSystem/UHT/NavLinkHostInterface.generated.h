// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinkHostInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavLinkHostInterface_generated_h
#error "NavLinkHostInterface.generated.h already included, missing '#pragma once' in NavLinkHostInterface.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkHostInterface_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavLinkHostInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkHostInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavLinkHostInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkHostInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavLinkHostInterface(UNavLinkHostInterface&&); \
	UNavLinkHostInterface(const UNavLinkHostInterface&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavLinkHostInterface();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavLinkHostInterface(); \
	friend struct Z_Construct_UClass_UNavLinkHostInterface_Statics; \
public: \
	DECLARE_CLASS(UNavLinkHostInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavLinkHostInterface)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~INavLinkHostInterface() {} \
public: \
	typedef UNavLinkHostInterface UClassType; \
	typedef INavLinkHostInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_14_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavLinkHostInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
