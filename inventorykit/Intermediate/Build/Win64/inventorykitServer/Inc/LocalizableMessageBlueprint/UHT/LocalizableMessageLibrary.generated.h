// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalizableMessageLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLocalizableMessage;
#ifdef LOCALIZABLEMESSAGEBLUEPRINT_LocalizableMessageLibrary_generated_h
#error "LocalizableMessageLibrary.generated.h already included, missing '#pragma once' in LocalizableMessageLibrary.h"
#endif
#define LOCALIZABLEMESSAGEBLUEPRINT_LocalizableMessageLibrary_generated_h

#define FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset_LocalizableMessage); \
	DECLARE_FUNCTION(execIsEmpty_LocalizableMessage); \
	DECLARE_FUNCTION(execConv_LocalizableMessageToText);


#define FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalizableMessageLibrary(); \
	friend struct Z_Construct_UClass_ULocalizableMessageLibrary_Statics; \
public: \
	DECLARE_CLASS(ULocalizableMessageLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LocalizableMessageBlueprint"), LOCALIZABLEMESSAGEBLUEPRINT_API) \
	DECLARE_SERIALIZER(ULocalizableMessageLibrary)


#define FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOCALIZABLEMESSAGEBLUEPRINT_API ULocalizableMessageLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocalizableMessageLibrary(ULocalizableMessageLibrary&&); \
	ULocalizableMessageLibrary(const ULocalizableMessageLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOCALIZABLEMESSAGEBLUEPRINT_API, ULocalizableMessageLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizableMessageLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizableMessageLibrary) \
	LOCALIZABLEMESSAGEBLUEPRINT_API virtual ~ULocalizableMessageLibrary();


#define FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCALIZABLEMESSAGEBLUEPRINT_API UClass* StaticClass<class ULocalizableMessageLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
