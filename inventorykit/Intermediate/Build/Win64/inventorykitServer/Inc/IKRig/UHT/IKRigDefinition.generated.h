// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IKRigDefinition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_IKRigDefinition_generated_h
#error "IKRigDefinition.generated.h already included, missing '#pragma once' in IKRigDefinition.h"
#endif
#define IKRIG_IKRigDefinition_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigEffectorGoal(); \
	friend struct Z_Construct_UClass_UIKRigEffectorGoal_Statics; \
public: \
	DECLARE_CLASS(UIKRigEffectorGoal, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRigEffectorGoal)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigEffectorGoal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRigEffectorGoal(UIKRigEffectorGoal&&); \
	UIKRigEffectorGoal(const UIKRigEffectorGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigEffectorGoal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigEffectorGoal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigEffectorGoal) \
	NO_API virtual ~UIKRigEffectorGoal();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_37_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRigEffectorGoal>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneChain_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FBoneChain>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRetargetDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FRetargetDefinition>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_187_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UIKRigDefinition, NO_API)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigDefinition(); \
	friend struct Z_Construct_UClass_UIKRigDefinition_Statics; \
public: \
	DECLARE_CLASS(UIKRigDefinition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRigDefinition) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_187_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UIKRigDefinition*>(this); }


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRigDefinition(UIKRigDefinition&&); \
	UIKRigDefinition(const UIKRigDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigDefinition) \
	NO_API virtual ~UIKRigDefinition();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_184_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRigDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h


#define FOREACH_ENUM_EIKRIGGOALPREVIEWMODE(op) \
	op(EIKRigGoalPreviewMode::Additive) \
	op(EIKRigGoalPreviewMode::Absolute) 

enum class EIKRigGoalPreviewMode : uint8;
template<> struct TIsUEnumClass<EIKRigGoalPreviewMode> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<EIKRigGoalPreviewMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
