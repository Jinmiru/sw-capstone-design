// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class ANavigationData;
class ANavMeshBoundsVolume;
class UNavArea;
class UNavigationPath;
class UNavigationQueryFilter;
class UNavigationSystemV1;
class UObject;
enum class ENavDataGatheringModeConfig : uint8;
#ifdef NAVIGATIONSYSTEM_NavigationSystem_generated_h
#error "NavigationSystem.generated.h already included, missing '#pragma once' in NavigationSystem.h"
#endif
#define NAVIGATIONSYSTEM_NavigationSystem_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_63_DELEGATE \
NAVIGATIONSYSTEM_API void FOnNavDataGenericEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNavDataGenericEvent, ANavigationData* NavData);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_299_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius); \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated); \
	DECLARE_FUNCTION(execK2_ReplaceAreaInOctreeData); \
	DECLARE_FUNCTION(execSetGeometryGatheringMode); \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker); \
	DECLARE_FUNCTION(execRegisterNavigationInvoker); \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execNavigationRaycast); \
	DECLARE_FUNCTION(execFindPathToActorSynchronously); \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously); \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked); \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execK2_GetRandomLocationInNavigableRadius); \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius); \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation); \
	DECLARE_FUNCTION(execGetNavigationSystem);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_299_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemV1(); \
	friend struct Z_Construct_UClass_UNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemV1, UNavigationSystemBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationSystemV1) \
	DECLARE_WITHIN(UWorld)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_299_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationSystemV1(UNavigationSystemV1&&); \
	UNavigationSystemV1(const UNavigationSystemV1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationSystemV1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemV1); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemV1)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_296_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_299_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_299_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_299_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_299_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationSystemV1>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1435_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemModuleConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemModuleConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationSystemModuleConfig)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1435_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationSystemModuleConfig(UNavigationSystemModuleConfig&&); \
	UNavigationSystemModuleConfig(const UNavigationSystemModuleConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationSystemModuleConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemModuleConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemModuleConfig) \
	NAVIGATIONSYSTEM_API virtual ~UNavigationSystemModuleConfig();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1432_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1435_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1435_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1435_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationSystemModuleConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
