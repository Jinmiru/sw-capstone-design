// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/TransformSources.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_TransformSources_generated_h
#error "TransformSources.generated.h already included, missing '#pragma once' in TransformSources.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_TransformSources_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoBaseTransformSource(); \
	friend struct Z_Construct_UClass_UGizmoBaseTransformSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoBaseTransformSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UGizmoBaseTransformSource) \
	virtual UObject* _getUObject() const override { return const_cast<UGizmoBaseTransformSource*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoBaseTransformSource(UGizmoBaseTransformSource&&); \
	UGizmoBaseTransformSource(const UGizmoBaseTransformSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoBaseTransformSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBaseTransformSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoBaseTransformSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoBaseTransformSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_33_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoBaseTransformSource>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoComponentWorldTransformSource(); \
	friend struct Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoComponentWorldTransformSource, UGizmoBaseTransformSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UGizmoComponentWorldTransformSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentWorldTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoComponentWorldTransformSource(UGizmoComponentWorldTransformSource&&); \
	UGizmoComponentWorldTransformSource(const UGizmoComponentWorldTransformSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoComponentWorldTransformSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoComponentWorldTransformSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoComponentWorldTransformSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoComponentWorldTransformSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_60_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoComponentWorldTransformSource>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoScaledTransformSource(); \
	friend struct Z_Construct_UClass_UGizmoScaledTransformSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoScaledTransformSource, UGizmoBaseTransformSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UGizmoScaledTransformSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoScaledTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoScaledTransformSource(UGizmoScaledTransformSource&&); \
	UGizmoScaledTransformSource(const UGizmoScaledTransformSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoScaledTransformSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoScaledTransformSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoScaledTransformSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoScaledTransformSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_119_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoScaledTransformSource>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoTransformProxyTransformSource(); \
	friend struct Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoTransformProxyTransformSource, UGizmoBaseTransformSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UGizmoTransformProxyTransformSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoTransformProxyTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoTransformProxyTransformSource(UGizmoTransformProxyTransformSource&&); \
	UGizmoTransformProxyTransformSource(const UGizmoTransformProxyTransformSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoTransformProxyTransformSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoTransformProxyTransformSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoTransformProxyTransformSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoTransformProxyTransformSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_176_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_179_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoTransformProxyTransformSource>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_224_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoScaledAndUnscaledTransformSources(); \
	friend struct Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics; \
public: \
	DECLARE_CLASS(UGizmoScaledAndUnscaledTransformSources, UGizmoBaseTransformSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UGizmoScaledAndUnscaledTransformSources)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_224_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoScaledAndUnscaledTransformSources(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoScaledAndUnscaledTransformSources(UGizmoScaledAndUnscaledTransformSources&&); \
	UGizmoScaledAndUnscaledTransformSources(const UGizmoScaledAndUnscaledTransformSources&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoScaledAndUnscaledTransformSources); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoScaledAndUnscaledTransformSources); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoScaledAndUnscaledTransformSources) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoScaledAndUnscaledTransformSources();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_221_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_224_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_224_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoScaledAndUnscaledTransformSources>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
