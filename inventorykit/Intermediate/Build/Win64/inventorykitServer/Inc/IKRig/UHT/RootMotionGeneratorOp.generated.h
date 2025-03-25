// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/RootMotionGeneratorOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_RootMotionGeneratorOp_generated_h
#error "RootMotionGeneratorOp.generated.h already included, missing '#pragma once' in RootMotionGeneratorOp.h"
#endif
#define IKRIG_RootMotionGeneratorOp_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionGeneratorOp(); \
	friend struct Z_Construct_UClass_URootMotionGeneratorOp_Statics; \
public: \
	DECLARE_CLASS(URootMotionGeneratorOp, URetargetOpBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(URootMotionGeneratorOp)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URootMotionGeneratorOp(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URootMotionGeneratorOp(URootMotionGeneratorOp&&); \
	URootMotionGeneratorOp(const URootMotionGeneratorOp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionGeneratorOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionGeneratorOp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URootMotionGeneratorOp) \
	NO_API virtual ~URootMotionGeneratorOp();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_26_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class URootMotionGeneratorOp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h


#define FOREACH_ENUM_EROOTMOTIONSOURCE(op) \
	op(ERootMotionSource::CopyFromSourceRoot) \
	op(ERootMotionSource::GenerateFromTargetPelvis) 

enum class ERootMotionSource : uint8;
template<> struct TIsUEnumClass<ERootMotionSource> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<ERootMotionSource>();

#define FOREACH_ENUM_EROOTMOTIONHEIGHTSOURCE(op) \
	op(ERootMotionHeightSource::CopyHeightFromSource) \
	op(ERootMotionHeightSource::SnapToGround) 

enum class ERootMotionHeightSource : uint8;
template<> struct TIsUEnumClass<ERootMotionHeightSource> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<ERootMotionHeightSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
