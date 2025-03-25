// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRig_FBIKSolver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_IKRig_FBIKSolver_generated_h
#error "IKRig_FBIKSolver.generated.h already included, missing '#pragma once' in IKRig_FBIKSolver.h"
#endif
#define IKRIG_IKRig_FBIKSolver_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_FBIKEffector(); \
	friend struct Z_Construct_UClass_UIKRig_FBIKEffector_Statics; \
public: \
	DECLARE_CLASS(UIKRig_FBIKEffector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRig_FBIKEffector)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRig_FBIKEffector(UIKRig_FBIKEffector&&); \
	UIKRig_FBIKEffector(const UIKRig_FBIKEffector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRig_FBIKEffector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_FBIKEffector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRig_FBIKEffector) \
	NO_API virtual ~UIKRig_FBIKEffector();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_12_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRig_FBIKEffector>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_FBIKBoneSettings(); \
	friend struct Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics; \
public: \
	DECLARE_CLASS(UIKRig_FBIKBoneSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRig_FBIKBoneSettings)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRig_FBIKBoneSettings(UIKRig_FBIKBoneSettings&&); \
	UIKRig_FBIKBoneSettings(const UIKRig_FBIKBoneSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRig_FBIKBoneSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_FBIKBoneSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRig_FBIKBoneSettings) \
	NO_API virtual ~UIKRig_FBIKBoneSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_68_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRig_FBIKBoneSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigFBIKSolver(); \
	friend struct Z_Construct_UClass_UIKRigFBIKSolver_Statics; \
public: \
	DECLARE_CLASS(UIKRigFBIKSolver, UIKRigSolver, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRigFBIKSolver) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigFBIKSolver(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRigFBIKSolver(UIKRigFBIKSolver&&); \
	UIKRigFBIKSolver(const UIKRigFBIKSolver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigFBIKSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigFBIKSolver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRigFBIKSolver) \
	NO_API virtual ~UIKRigFBIKSolver();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_184_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRigFBIKSolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_FBIKSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
