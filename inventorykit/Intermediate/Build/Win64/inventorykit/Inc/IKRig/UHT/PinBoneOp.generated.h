// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/PinBoneOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_PinBoneOp_generated_h
#error "PinBoneOp.generated.h already included, missing '#pragma once' in PinBoneOp.h"
#endif
#define IKRIG_PinBoneOp_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPinBoneData_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FPinBoneData>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPinBoneOp(); \
	friend struct Z_Construct_UClass_UPinBoneOp_Statics; \
public: \
	DECLARE_CLASS(UPinBoneOp, URetargetOpBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UPinBoneOp)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPinBoneOp(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPinBoneOp(UPinBoneOp&&); \
	UPinBoneOp(const UPinBoneOp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPinBoneOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPinBoneOp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPinBoneOp) \
	NO_API virtual ~UPinBoneOp();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_48_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UPinBoneOp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h


#define FOREACH_ENUM_EPINBONETYPE(op) \
	op(EPinBoneType::FullTransform) \
	op(EPinBoneType::TranslateOnly) \
	op(EPinBoneType::RotateOnly) \
	op(EPinBoneType::ScaleOnly) 

enum class EPinBoneType : uint8;
template<> struct TIsUEnumClass<EPinBoneType> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<EPinBoneType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
