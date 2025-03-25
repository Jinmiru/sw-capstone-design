// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavAreas/NavAreaMeta.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavAreaMeta_generated_h
#error "NavAreaMeta.generated.h already included, missing '#pragma once' in NavAreaMeta.h"
#endif
#define NAVIGATIONSYSTEM_NavAreaMeta_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavAreaMeta(); \
	friend struct Z_Construct_UClass_UNavAreaMeta_Statics; \
public: \
	DECLARE_CLASS(UNavAreaMeta, UNavArea, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavAreaMeta)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavAreaMeta(UNavAreaMeta&&); \
	UNavAreaMeta(const UNavAreaMeta&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavAreaMeta); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAreaMeta); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAreaMeta) \
	NAVIGATIONSYSTEM_API virtual ~UNavAreaMeta();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_21_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavAreaMeta>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
