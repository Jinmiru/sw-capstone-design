// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BehaviorTreeManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BehaviorTreeManager_generated_h
#error "BehaviorTreeManager.generated.h already included, missing '#pragma once' in BehaviorTreeManager.h"
#endif
#define AIMODULE_BehaviorTreeManager_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBehaviorTreeTemplateInfo>();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeManager(); \
	friend struct Z_Construct_UClass_UBehaviorTreeManager_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBehaviorTreeManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBehaviorTreeManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBehaviorTreeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTreeManager(UBehaviorTreeManager&&); \
	UBehaviorTreeManager(const UBehaviorTreeManager&); \
public: \
	AIMODULE_API virtual ~UBehaviorTreeManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_32_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBehaviorTreeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
