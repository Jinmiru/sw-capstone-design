// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMeshLODSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshLODSettings_generated_h
#error "SkeletalMeshLODSettings.generated.h already included, missing '#pragma once' in SkeletalMeshLODSettings.h"
#endif
#define ENGINE_SkeletalMeshLODSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneFilter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneFilter>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshLODGroupSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshLODSettings, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshLODSettings(); \
	friend struct Z_Construct_UClass_USkeletalMeshLODSettings_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshLODSettings, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshLODSettings) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshLODSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshLODSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletalMeshLODSettings(USkeletalMeshLODSettings&&); \
	USkeletalMeshLODSettings(const USkeletalMeshLODSettings&); \
public: \
	ENGINE_API virtual ~USkeletalMeshLODSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_122_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshLODSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h


#define FOREACH_ENUM_EBONEFILTERACTIONOPTION(op) \
	op(EBoneFilterActionOption::Remove) \
	op(EBoneFilterActionOption::Keep) \
	op(EBoneFilterActionOption::Invalid) 

enum class EBoneFilterActionOption : uint8;
template<> struct TIsUEnumClass<EBoneFilterActionOption> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EBoneFilterActionOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
