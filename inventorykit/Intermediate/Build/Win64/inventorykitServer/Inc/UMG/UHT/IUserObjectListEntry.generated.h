// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/IUserObjectListEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IUserObjectListEntry;
class UObject;
#ifdef UMG_IUserObjectListEntry_generated_h
#error "IUserObjectListEntry.generated.h already included, missing '#pragma once' in IUserObjectListEntry.h"
#endif
#define UMG_IUserObjectListEntry_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUserObjectListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserObjectListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUserObjectListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserObjectListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUserObjectListEntry(UUserObjectListEntry&&); \
	UUserObjectListEntry(const UUserObjectListEntry&); \
public: \
	UMG_API virtual ~UUserObjectListEntry();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUserObjectListEntry(); \
	friend struct Z_Construct_UClass_UUserObjectListEntry_Statics; \
public: \
	DECLARE_CLASS(UUserObjectListEntry, UUserListEntry, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UUserObjectListEntry)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IUserObjectListEntry() {} \
public: \
	typedef UUserObjectListEntry UClassType; \
	typedef IUserObjectListEntry ThisClass; \
	UMG_API static void Execute_OnListItemObjectSet(UObject* O, UObject* ListItemObject); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_12_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserObjectListEntry>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetListItemObject);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserObjectListEntryLibrary(); \
	friend struct Z_Construct_UClass_UUserObjectListEntryLibrary_Statics; \
public: \
	DECLARE_CLASS(UUserObjectListEntryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UUserObjectListEntryLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUserObjectListEntryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUserObjectListEntryLibrary(UUserObjectListEntryLibrary&&); \
	UUserObjectListEntryLibrary(const UUserObjectListEntryLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUserObjectListEntryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserObjectListEntryLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserObjectListEntryLibrary) \
	UMG_API virtual ~UUserObjectListEntryLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_47_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserObjectListEntryLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
