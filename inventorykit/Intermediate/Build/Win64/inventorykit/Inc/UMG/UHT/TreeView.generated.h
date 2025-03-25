// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TreeView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UMG_TreeView_generated_h
#error "TreeView.generated.h already included, missing '#pragma once' in TreeView.h"
#endif
#define UMG_TreeView_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_9_DELEGATE \
UMG_API void FOnGetItemChildrenDynamic_DelegateWrapper(const FScriptDelegate& OnGetItemChildrenDynamic, UObject* Item, TArray<UObject*>& Children);


#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_10_DELEGATE \
UMG_API void FOnItemExpansionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemExpansionChangedDynamic, UObject* Item, bool bIsExpanded);


#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCollapseAll); \
	DECLARE_FUNCTION(execExpandAll); \
	DECLARE_FUNCTION(execSetItemExpansion);


#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTreeView(); \
	friend struct Z_Construct_UClass_UTreeView_Statics; \
public: \
	DECLARE_CLASS(UTreeView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UTreeView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTreeView(UTreeView&&); \
	UTreeView(const UTreeView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UTreeView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTreeView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTreeView) \
	UMG_API virtual ~UTreeView();


#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_19_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTreeView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
