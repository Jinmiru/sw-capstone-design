// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasicOverlays.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVERLAY_BasicOverlays_generated_h
#error "BasicOverlays.generated.h already included, missing '#pragma once' in BasicOverlays.h"
#endif
#define OVERLAY_BasicOverlays_generated_h

#define FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicOverlays(); \
	friend struct Z_Construct_UClass_UBasicOverlays_Statics; \
public: \
	DECLARE_CLASS(UBasicOverlays, UOverlays, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Overlay"), OVERLAY_API) \
	DECLARE_SERIALIZER(UBasicOverlays)


#define FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OVERLAY_API UBasicOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasicOverlays(UBasicOverlays&&); \
	UBasicOverlays(const UBasicOverlays&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OVERLAY_API, UBasicOverlays); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicOverlays); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicOverlays) \
	OVERLAY_API virtual ~UBasicOverlays();


#define FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_24_PROLOG
#define FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVERLAY_API UClass* StaticClass<class UBasicOverlays>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
