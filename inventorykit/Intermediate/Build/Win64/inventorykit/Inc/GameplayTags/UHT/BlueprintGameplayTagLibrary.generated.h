// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintGameplayTagLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IGameplayTagAssetInterface;
class UObject;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGameplayTagQuery;
#ifdef GAMEPLAYTAGS_BlueprintGameplayTagLibrary_generated_h
#error "BlueprintGameplayTagLibrary.generated.h already included, missing '#pragma once' in BlueprintGameplayTagLibrary.h"
#endif
#define GAMEPLAYTAGS_BlueprintGameplayTagLibrary_generated_h

#define FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTag); \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTagContainer); \
	DECLARE_FUNCTION(execNotEqual_TagContainerTagContainer); \
	DECLARE_FUNCTION(execNotEqual_TagTag); \
	DECLARE_FUNCTION(execDoesTagAssetInterfaceHaveTag); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execMakeGameplayTagQuery_MatchNoTags); \
	DECLARE_FUNCTION(execMakeGameplayTagQuery_MatchAllTags); \
	DECLARE_FUNCTION(execMakeGameplayTagQuery_MatchAnyTags); \
	DECLARE_FUNCTION(execMakeGameplayTagQuery); \
	DECLARE_FUNCTION(execBreakGameplayTagContainer); \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromTag); \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromArray); \
	DECLARE_FUNCTION(execMakeLiteralGameplayTagContainer); \
	DECLARE_FUNCTION(execNotEqual_GameplayTagContainer); \
	DECLARE_FUNCTION(execEqualEqual_GameplayTagContainer); \
	DECLARE_FUNCTION(execAppendGameplayTagContainers); \
	DECLARE_FUNCTION(execRemoveGameplayTag); \
	DECLARE_FUNCTION(execAddGameplayTag); \
	DECLARE_FUNCTION(execGetAllActorsOfClassMatchingTagQuery); \
	DECLARE_FUNCTION(execDoesContainerMatchTagQuery); \
	DECLARE_FUNCTION(execIsTagQueryEmpty); \
	DECLARE_FUNCTION(execHasAllTags); \
	DECLARE_FUNCTION(execHasAnyTags); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetNumGameplayTagsInContainer); \
	DECLARE_FUNCTION(execMakeLiteralGameplayTag); \
	DECLARE_FUNCTION(execGetTagName); \
	DECLARE_FUNCTION(execIsGameplayTagValid); \
	DECLARE_FUNCTION(execNotEqual_GameplayTag); \
	DECLARE_FUNCTION(execEqualEqual_GameplayTag); \
	DECLARE_FUNCTION(execMatchesAnyTags); \
	DECLARE_FUNCTION(execMatchesTag);


#define FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintGameplayTagLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGameplayTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UBlueprintGameplayTagLibrary)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintGameplayTagLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UBlueprintGameplayTagLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameplayTagLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintGameplayTagLibrary(UBlueprintGameplayTagLibrary&&); \
	UBlueprintGameplayTagLibrary(const UBlueprintGameplayTagLibrary&); \
public: \
	GAMEPLAYTAGS_API virtual ~UBlueprintGameplayTagLibrary();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_14_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UBlueprintGameplayTagLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
