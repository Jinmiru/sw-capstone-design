// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavAreas/NavArea.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavArea_generated_h
#error "NavArea.generated.h already included, missing '#pragma once' in NavArea.h"
#endif
#define NAVIGATIONSYSTEM_NavArea_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNavArea, NAVIGATIONSYSTEM_API)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavArea(); \
	friend struct Z_Construct_UClass_UNavArea_Statics; \
public: \
	DECLARE_CLASS(UNavArea, UNavAreaBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavArea) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavArea(UNavArea&&); \
	UNavArea(const UNavArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea) \
	NAVIGATIONSYSTEM_API virtual ~UNavArea();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
