// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinkCustomComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavLinkCustomComponent_generated_h
#error "NavLinkCustomComponent.generated.h already included, missing '#pragma once' in NavLinkCustomComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkCustomComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNavLinkCustomComponent, NAVIGATIONSYSTEM_API)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkCustomComponent(); \
	friend struct Z_Construct_UClass_UNavLinkCustomComponent_Statics; \
public: \
	DECLARE_CLASS(UNavLinkCustomComponent, UNavRelevantComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavLinkCustomComponent) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_33_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UNavLinkCustomComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkCustomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavLinkCustomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkCustomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavLinkCustomComponent(UNavLinkCustomComponent&&); \
	UNavLinkCustomComponent(const UNavLinkCustomComponent&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavLinkCustomComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_33_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavLinkCustomComponent>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_262_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavLinkCustomInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
