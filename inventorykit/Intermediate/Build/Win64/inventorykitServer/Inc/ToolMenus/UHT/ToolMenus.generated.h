// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UToolMenu;
class UToolMenuEntryScript;
class UToolMenus;
enum class EMultiBoxType : uint8;
enum class EToolMenuInsertType : uint8;
struct FToolMenuContext;
#ifdef TOOLMENUS_ToolMenus_generated_h
#error "ToolMenus.generated.h already included, missing '#pragma once' in ToolMenus.h"
#endif
#define TOOLMENUS_ToolMenus_generated_h

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuProfileContext(); \
	friend struct Z_Construct_UClass_UToolMenuProfileContext_Statics; \
public: \
	DECLARE_CLASS(UToolMenuProfileContext, UToolMenuContextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuProfileContext)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuProfileContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToolMenuProfileContext(UToolMenuProfileContext&&); \
	UToolMenuProfileContext(const UToolMenuProfileContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuProfileContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuProfileContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuProfileContext) \
	NO_API virtual ~UToolMenuProfileContext();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_55_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLMENUS_API UClass* StaticClass<class UToolMenuProfileContext>();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


template<> TOOLMENUS_API UScriptStruct* StaticStruct<struct FToolMenuProfileMap>();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindContext); \
	DECLARE_FUNCTION(execRemoveMenu); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execRemoveEntry); \
	DECLARE_FUNCTION(execSetSectionPosition); \
	DECLARE_FUNCTION(execSetSectionLabel); \
	DECLARE_FUNCTION(execUnregisterOwnerByName); \
	DECLARE_FUNCTION(execAddMenuEntryObject); \
	DECLARE_FUNCTION(execRefreshAllWidgets); \
	DECLARE_FUNCTION(execRefreshMenuWidget); \
	DECLARE_FUNCTION(execIsMenuRegistered); \
	DECLARE_FUNCTION(execFindMenu); \
	DECLARE_FUNCTION(execExtendMenu); \
	DECLARE_FUNCTION(execRegisterMenu); \
	DECLARE_FUNCTION(execGet);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenus(); \
	friend struct Z_Construct_UClass_UToolMenus_Statics; \
public: \
	DECLARE_CLASS(UToolMenus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenus) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToolMenus(UToolMenus&&); \
	UToolMenus(const UToolMenus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolMenus) \
	NO_API virtual ~UToolMenus();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_76_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLMENUS_API UClass* StaticClass<class UToolMenus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
