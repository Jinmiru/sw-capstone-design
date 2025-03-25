// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_SelectionSet_generated_h
#error "SelectionSet.generated.h already included, missing '#pragma once' in SelectionSet.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SelectionSet_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectionSet(); \
	friend struct Z_Construct_UClass_USelectionSet_Statics; \
public: \
	DECLARE_CLASS(USelectionSet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(USelectionSet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USelectionSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USelectionSet(USelectionSet&&); \
	USelectionSet(const USelectionSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USelectionSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectionSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectionSet) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USelectionSet();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_27_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class USelectionSet>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSelectionSet(); \
	friend struct Z_Construct_UClass_UMeshSelectionSet_Statics; \
public: \
	DECLARE_CLASS(UMeshSelectionSet, USelectionSet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UMeshSelectionSet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshSelectionSet(UMeshSelectionSet&&); \
	UMeshSelectionSet(const UMeshSelectionSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UMeshSelectionSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSelectionSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshSelectionSet) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UMeshSelectionSet();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_69_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UMeshSelectionSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
