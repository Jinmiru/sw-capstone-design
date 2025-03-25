// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimBoneCompressionCodec_ACL.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACLPLUGIN_AnimBoneCompressionCodec_ACL_generated_h
#error "AnimBoneCompressionCodec_ACL.generated.h already included, missing '#pragma once' in AnimBoneCompressionCodec_ACL.h"
#endif
#define ACLPLUGIN_AnimBoneCompressionCodec_ACL_generated_h

#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBoneCompressionCodec_ACL(); \
	friend struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics; \
public: \
	DECLARE_CLASS(UAnimBoneCompressionCodec_ACL, UAnimBoneCompressionCodec_ACLBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACLPlugin"), ACLPLUGIN_API) \
	DECLARE_SERIALIZER(UAnimBoneCompressionCodec_ACL) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACLPLUGIN_API UAnimBoneCompressionCodec_ACL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBoneCompressionCodec_ACL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACLPLUGIN_API, UAnimBoneCompressionCodec_ACL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBoneCompressionCodec_ACL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimBoneCompressionCodec_ACL(UAnimBoneCompressionCodec_ACL&&); \
	UAnimBoneCompressionCodec_ACL(const UAnimBoneCompressionCodec_ACL&); \
public: \
	ACLPLUGIN_API virtual ~UAnimBoneCompressionCodec_ACL();


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_13_PROLOG
#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_16_INCLASS \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACLPLUGIN_API UClass* StaticClass<class UAnimBoneCompressionCodec_ACL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
