// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IKRigProcessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_IKRigProcessor_generated_h
#error "IKRigProcessor.generated.h already included, missing '#pragma once' in IKRigProcessor.h"
#endif
#define IKRIG_IKRigProcessor_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoalBone_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FGoalBone>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigProcessor(); \
	friend struct Z_Construct_UClass_UIKRigProcessor_Statics; \
public: \
	DECLARE_CLASS(UIKRigProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRigProcessor)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRigProcessor(UIKRigProcessor&&); \
	UIKRigProcessor(const UIKRigProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRigProcessor) \
	NO_API virtual ~UIKRigProcessor();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_25_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRigProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
