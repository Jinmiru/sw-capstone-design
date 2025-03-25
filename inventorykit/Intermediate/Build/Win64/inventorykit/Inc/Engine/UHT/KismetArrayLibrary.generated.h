// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetArrayLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class EArraySortOrder : uint8;
struct FRandomStream;
#ifdef ENGINE_KismetArrayLibrary_generated_h
#error "KismetArrayLibrary.generated.h already included, missing '#pragma once' in KismetArrayLibrary.h"
#endif
#define ENGINE_KismetArrayLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSortFloatArray); \
	DECLARE_FUNCTION(execSortInt64Array); \
	DECLARE_FUNCTION(execSortIntArray); \
	DECLARE_FUNCTION(execSortByteArray); \
	DECLARE_FUNCTION(execSortNameArray); \
	DECLARE_FUNCTION(execSortStringArray); \
	DECLARE_FUNCTION(execFilterArray);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUKismetArrayLibrary(); \
	friend struct Z_Construct_UClass_UKismetArrayLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetArrayLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetArrayLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetArrayLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetArrayLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetArrayLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetArrayLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKismetArrayLibrary(UKismetArrayLibrary&&); \
	UKismetArrayLibrary(const UKismetArrayLibrary&); \
public: \
	ENGINE_API virtual ~UKismetArrayLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetArrayLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h


#define FOREACH_ENUM_EARRAYSORTORDER(op) \
	op(EArraySortOrder::Ascending) \
	op(EArraySortOrder::Descending) 

enum class EArraySortOrder : uint8;
template<> struct TIsUEnumClass<EArraySortOrder> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EArraySortOrder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
