// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationPathGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationPathGenerator_generated_h
#error "NavigationPathGenerator.generated.h already included, missing '#pragma once' in NavigationPathGenerator.h"
#endif
#define NAVIGATIONSYSTEM_NavigationPathGenerator_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationPathGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationPathGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationPathGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationPathGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationPathGenerator(UNavigationPathGenerator&&); \
	UNavigationPathGenerator(const UNavigationPathGenerator&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavigationPathGenerator();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavigationPathGenerator(); \
	friend struct Z_Construct_UClass_UNavigationPathGenerator_Statics; \
public: \
	DECLARE_CLASS(UNavigationPathGenerator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationPathGenerator)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~INavigationPathGenerator() {} \
public: \
	typedef UNavigationPathGenerator UClassType; \
	typedef INavigationPathGenerator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_13_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationPathGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
