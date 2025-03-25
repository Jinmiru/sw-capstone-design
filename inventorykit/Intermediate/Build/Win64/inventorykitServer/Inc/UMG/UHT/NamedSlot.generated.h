// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NamedSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_NamedSlot_generated_h
#error "NamedSlot.generated.h already included, missing '#pragma once' in NamedSlot.h"
#endif
#define UMG_NamedSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNamedSlot, UMG_API)


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNamedSlot(); \
	friend struct Z_Construct_UClass_UNamedSlot_Statics; \
public: \
	DECLARE_CLASS(UNamedSlot, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UNamedSlot) \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UNamedSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UNamedSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNamedSlot(UNamedSlot&&); \
	UNamedSlot(const UNamedSlot&); \
public: \
	UMG_API virtual ~UNamedSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UNamedSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
