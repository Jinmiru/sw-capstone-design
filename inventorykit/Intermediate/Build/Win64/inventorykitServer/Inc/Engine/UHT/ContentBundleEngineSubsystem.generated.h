// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ContentBundleEngineSubsystem_generated_h
#error "ContentBundleEngineSubsystem.generated.h already included, missing '#pragma once' in ContentBundleEngineSubsystem.h"
#endif
#define ENGINE_ContentBundleEngineSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBundleEngineSubsystem(); \
	friend struct Z_Construct_UClass_UContentBundleEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UContentBundleEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UContentBundleEngineSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UContentBundleEngineSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContentBundleEngineSubsystem(UContentBundleEngineSubsystem&&); \
	UContentBundleEngineSubsystem(const UContentBundleEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UContentBundleEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBundleEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UContentBundleEngineSubsystem) \
	ENGINE_API virtual ~UContentBundleEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UContentBundleEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
