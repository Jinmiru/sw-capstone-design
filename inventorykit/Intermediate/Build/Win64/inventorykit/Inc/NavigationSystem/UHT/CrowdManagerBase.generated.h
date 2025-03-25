// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrowdManagerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_CrowdManagerBase_generated_h
#error "CrowdManagerBase.generated.h already included, missing '#pragma once' in CrowdManagerBase.h"
#endif
#define NAVIGATIONSYSTEM_CrowdManagerBase_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrowdManagerBase(); \
	friend struct Z_Construct_UClass_UCrowdManagerBase_Statics; \
public: \
	DECLARE_CLASS(UCrowdManagerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UCrowdManagerBase)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UCrowdManagerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCrowdManagerBase(UCrowdManagerBase&&); \
	UCrowdManagerBase(const UCrowdManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UCrowdManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManagerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManagerBase) \
	NAVIGATIONSYSTEM_API virtual ~UCrowdManagerBase();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_12_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UCrowdManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
