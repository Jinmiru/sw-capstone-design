// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTaskResource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTASKS_GameplayTaskResource_generated_h
#error "GameplayTaskResource.generated.h already included, missing '#pragma once' in GameplayTaskResource.h"
#endif
#define GAMEPLAYTASKS_GameplayTaskResource_generated_h

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTaskResource(); \
	friend struct Z_Construct_UClass_UGameplayTaskResource_Statics; \
public: \
	DECLARE_CLASS(UGameplayTaskResource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTaskResource) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayTaskResource(UGameplayTaskResource&&); \
	UGameplayTaskResource(const UGameplayTaskResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTaskResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTaskResource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTaskResource) \
	GAMEPLAYTASKS_API virtual ~UGameplayTaskResource();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_13_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTaskResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
