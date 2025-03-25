// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbstractNavData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_AbstractNavData_generated_h
#error "AbstractNavData.generated.h already included, missing '#pragma once' in AbstractNavData.h"
#endif
#define NAVIGATIONSYSTEM_AbstractNavData_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbstractNavData(); \
	friend struct Z_Construct_UClass_AAbstractNavData_Statics; \
public: \
	DECLARE_CLASS(AAbstractNavData, ANavigationData, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(AAbstractNavData)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAbstractNavData(AAbstractNavData&&); \
	AAbstractNavData(const AAbstractNavData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, AAbstractNavData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbstractNavData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbstractNavData) \
	NAVIGATIONSYSTEM_API virtual ~AAbstractNavData();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_62_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class AAbstractNavData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
