// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeStreamingProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeStreamingProxy_generated_h
#error "LandscapeStreamingProxy.generated.h already included, missing '#pragma once' in LandscapeStreamingProxy.h"
#endif
#define LANDSCAPE_LandscapeStreamingProxy_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeStreamingProxy(); \
	friend struct Z_Construct_UClass_ALandscapeStreamingProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeStreamingProxy, ALandscapeProxy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeStreamingProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandscapeStreamingProxy(ALandscapeStreamingProxy&&); \
	ALandscapeStreamingProxy(const ALandscapeStreamingProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeStreamingProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeStreamingProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeStreamingProxy) \
	LANDSCAPE_API virtual ~ALandscapeStreamingProxy();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_18_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeStreamingProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
