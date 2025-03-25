// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigAssetUserData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRigShapeLibrary;
#ifdef CONTROLRIG_ControlRigAssetUserData_generated_h
#error "ControlRigAssetUserData.generated.h already included, missing '#pragma once' in ControlRigAssetUserData.h"
#endif
#define CONTROLRIG_ControlRigAssetUserData_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetShapeLibrary); \
	DECLARE_FUNCTION(execGetShapeLibrary);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigShapeLibraryLink, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigShapeLibraryLink(); \
	friend struct Z_Construct_UClass_UControlRigShapeLibraryLink_Statics; \
public: \
	DECLARE_CLASS(UControlRigShapeLibraryLink, UNameSpacedUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigShapeLibraryLink) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigShapeLibraryLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigShapeLibraryLink(UControlRigShapeLibraryLink&&); \
	UControlRigShapeLibraryLink(const UControlRigShapeLibraryLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigShapeLibraryLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigShapeLibraryLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigShapeLibraryLink) \
	NO_API virtual ~UControlRigShapeLibraryLink();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_12_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigShapeLibraryLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
