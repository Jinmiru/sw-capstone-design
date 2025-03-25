// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/CurveRemapOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_CurveRemapOp_generated_h
#error "CurveRemapOp.generated.h already included, missing '#pragma once' in CurveRemapOp.h"
#endif
#define IKRIG_CurveRemapOp_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveRemapPair_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FCurveRemapPair>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveRemapOp(); \
	friend struct Z_Construct_UClass_UCurveRemapOp_Statics; \
public: \
	DECLARE_CLASS(UCurveRemapOp, URetargetOpBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UCurveRemapOp)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveRemapOp(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveRemapOp(UCurveRemapOp&&); \
	UCurveRemapOp(const UCurveRemapOp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveRemapOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveRemapOp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveRemapOp) \
	NO_API virtual ~UCurveRemapOp();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_23_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UCurveRemapOp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
