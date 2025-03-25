// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationObjectRepository.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationObjectRepository_generated_h
#error "NavigationObjectRepository.generated.h already included, missing '#pragma once' in NavigationObjectRepository.h"
#endif
#define NAVIGATIONSYSTEM_NavigationObjectRepository_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationObjectRepository(); \
	friend struct Z_Construct_UClass_UNavigationObjectRepository_Statics; \
public: \
	DECLARE_CLASS(UNavigationObjectRepository, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationObjectRepository)


#define FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationObjectRepository(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationObjectRepository(UNavigationObjectRepository&&); \
	UNavigationObjectRepository(const UNavigationObjectRepository&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationObjectRepository); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationObjectRepository); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavigationObjectRepository) \
	NO_API virtual ~UNavigationObjectRepository();


#define FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_19_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationObjectRepository>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
