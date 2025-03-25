// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Blueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Blueprint_generated_h
#error "Blueprint.generated.h already included, missing '#pragma once' in Blueprint.h"
#endif
#define ENGINE_Blueprint_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_Breakpoint(); \
	friend struct Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_Breakpoint, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_Breakpoint)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_Breakpoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_Breakpoint(UDEPRECATED_Breakpoint&&); \
	UDEPRECATED_Breakpoint(const UDEPRECATED_Breakpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_Breakpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_Breakpoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_Breakpoint) \
	NO_API virtual ~UDEPRECATED_Breakpoint();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_97_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDEPRECATED_Breakpoint>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintMacroCosmeticInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBPVariableMetaDataEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVariableDescription_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBPVariableDescription>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_265_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBPInterfaceDescription>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEditedDocumentInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_353_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBPEditorBookmarkNode>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_414_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprint, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_414_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprint(); \
	friend struct Z_Construct_UClass_UBlueprint_Statics; \
public: \
	DECLARE_CLASS(UBlueprint, UBlueprintCore, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_UBlueprint, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprint) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_414_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_414_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprint(UBlueprint&&); \
	UBlueprint(const UBlueprint&); \
public: \
	ENGINE_API virtual ~UBlueprint();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_411_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_414_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_414_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_414_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h


#define FOREACH_ENUM_EBLUEPRINTSTATUS(op) \
	op(BS_Unknown) \
	op(BS_Dirty) \
	op(BS_Error) \
	op(BS_UpToDate) \
	op(BS_BeingCreated) \
	op(BS_UpToDateWithWarnings) 

enum EBlueprintStatus : int;
template<> ENGINE_API UEnum* StaticEnum<EBlueprintStatus>();

#define FOREACH_ENUM_EBLUEPRINTTYPE(op) \
	op(BPTYPE_Normal) \
	op(BPTYPE_Const) \
	op(BPTYPE_MacroLibrary) \
	op(BPTYPE_Interface) \
	op(BPTYPE_LevelScript) \
	op(BPTYPE_FunctionLibrary) 

enum EBlueprintType : int;
template<> ENGINE_API UEnum* StaticEnum<EBlueprintType>();

#define FOREACH_ENUM_EBLUEPRINTCOMPILEMODE(op) \
	op(EBlueprintCompileMode::Default) \
	op(EBlueprintCompileMode::Development) \
	op(EBlueprintCompileMode::FinalRelease) 

enum class EBlueprintCompileMode : uint8;
template<> struct TIsUEnumClass<EBlueprintCompileMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EBlueprintCompileMode>();

#define FOREACH_ENUM_EBLUEPRINTNATIVIZATIONFLAG(op) \
	op(EBlueprintNativizationFlag::Disabled) \
	op(EBlueprintNativizationFlag::Dependency) \
	op(EBlueprintNativizationFlag::ExplicitlyEnabled) 

enum class EBlueprintNativizationFlag : uint8;
template<> struct TIsUEnumClass<EBlueprintNativizationFlag> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EBlueprintNativizationFlag>();

#define FOREACH_ENUM_ESHOULDCOOKBLUEPRINTPROPERTYGUIDS(op) \
	op(EShouldCookBlueprintPropertyGuids::No) \
	op(EShouldCookBlueprintPropertyGuids::Yes) \
	op(EShouldCookBlueprintPropertyGuids::Inherit) 

enum class EShouldCookBlueprintPropertyGuids;
template<> struct TIsUEnumClass<EShouldCookBlueprintPropertyGuids> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EShouldCookBlueprintPropertyGuids>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
