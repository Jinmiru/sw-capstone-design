// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PoseWatch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PoseWatch_generated_h
#error "PoseWatch.generated.h already included, missing '#pragma once' in PoseWatch.h"
#endif
#define ENGINE_PoseWatch_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUPoseWatchFolder(); \
	friend struct Z_Construct_UClass_UPoseWatchFolder_Statics; \
public: \
	DECLARE_CLASS(UPoseWatchFolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseWatchFolder)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseWatchFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseWatchFolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseWatchFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseWatchFolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseWatchFolder(UPoseWatchFolder&&); \
	UPoseWatchFolder(const UPoseWatchFolder&); \
public: \
	ENGINE_API virtual ~UPoseWatchFolder();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseWatchFolder>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseWatchElement(); \
	friend struct Z_Construct_UClass_UPoseWatchElement_Statics; \
public: \
	DECLARE_CLASS(UPoseWatchElement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseWatchElement)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseWatchElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseWatchElement(UPoseWatchElement&&); \
	UPoseWatchElement(const UPoseWatchElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseWatchElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseWatchElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseWatchElement)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_130_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseWatchElement>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseWatchPoseElement(); \
	friend struct Z_Construct_UClass_UPoseWatchPoseElement_Statics; \
public: \
	DECLARE_CLASS(UPoseWatchPoseElement, UPoseWatchElement, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseWatchPoseElement)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseWatchPoseElement(UPoseWatchPoseElement&&); \
	UPoseWatchPoseElement(const UPoseWatchPoseElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseWatchPoseElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseWatchPoseElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseWatchPoseElement) \
	ENGINE_API virtual ~UPoseWatchPoseElement();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_228_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseWatchPoseElement>();

#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseWatch, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_INCLASS \
private: \
	static void StaticRegisterNativesUPoseWatch(); \
	friend struct Z_Construct_UClass_UPoseWatch_Statics; \
public: \
	DECLARE_CLASS(UPoseWatch, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseWatch) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseWatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseWatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseWatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseWatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseWatch(UPoseWatch&&); \
	UPoseWatch(const UPoseWatch&); \
public: \
	ENGINE_API virtual ~UPoseWatch();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_264_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseWatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
