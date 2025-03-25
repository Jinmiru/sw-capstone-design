// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveGizmoManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveGizmoManager_generated_h
#error "InteractiveGizmoManager.generated.h already included, missing '#pragma once' in InteractiveGizmoManager.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveGizmoManager_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveGizmo_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FActiveGizmo>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveGizmoManager(); \
	friend struct Z_Construct_UClass_UInteractiveGizmoManager_Statics; \
public: \
	DECLARE_CLASS(UInteractiveGizmoManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UInteractiveGizmoManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveGizmoManager*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractiveGizmoManager(UInteractiveGizmoManager&&); \
	UInteractiveGizmoManager(const UInteractiveGizmoManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveGizmoManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmoManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveGizmoManager) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveGizmoManager();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveGizmoManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
