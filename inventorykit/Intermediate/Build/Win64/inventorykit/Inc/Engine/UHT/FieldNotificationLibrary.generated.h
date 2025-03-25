// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FieldNotification/FieldNotificationLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFieldNotificationId;
#ifdef ENGINE_FieldNotificationLibrary_generated_h
#error "FieldNotificationLibrary.generated.h already included, missing '#pragma once' in FieldNotificationLibrary.h"
#endif
#define ENGINE_FieldNotificationLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastFieldsValueChanged); \
	DECLARE_FUNCTION(execBroadcastFieldValueChanged);


#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldNotificationLibrary(); \
	friend struct Z_Construct_UClass_UFieldNotificationLibrary_Statics; \
public: \
	DECLARE_CLASS(UFieldNotificationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFieldNotificationLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFieldNotificationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFieldNotificationLibrary(UFieldNotificationLibrary&&); \
	UFieldNotificationLibrary(const UFieldNotificationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFieldNotificationLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNotificationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNotificationLibrary) \
	ENGINE_API virtual ~UFieldNotificationLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFieldNotificationLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
