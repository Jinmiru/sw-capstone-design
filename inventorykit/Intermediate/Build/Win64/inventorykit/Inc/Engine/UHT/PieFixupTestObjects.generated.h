// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/PieFixupTestObjects.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PieFixupTestObjects_generated_h
#error "PieFixupTestObjects.generated.h already included, missing '#pragma once' in PieFixupTestObjects.h"
#endif
#define ENGINE_PieFixupTestObjects_generated_h

#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPieFixupStructWithSoftObjectPath>();

#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPieFixupTestObject(); \
	friend struct Z_Construct_UClass_UPieFixupTestObject_Statics; \
public: \
	DECLARE_CLASS(UPieFixupTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPieFixupTestObject)


#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPieFixupTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPieFixupTestObject(UPieFixupTestObject&&); \
	UPieFixupTestObject(const UPieFixupTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPieFixupTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPieFixupTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPieFixupTestObject) \
	NO_API virtual ~UPieFixupTestObject();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPieFixupTestObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
