// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocols/FrameGrabberProtocol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_FrameGrabberProtocol_generated_h
#error "FrameGrabberProtocol.generated.h already included, missing '#pragma once' in FrameGrabberProtocol.h"
#endif
#define MOVIESCENECAPTURE_FrameGrabberProtocol_generated_h

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrameGrabberProtocol(); \
	friend struct Z_Construct_UClass_UFrameGrabberProtocol_Statics; \
public: \
	DECLARE_CLASS(UFrameGrabberProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UFrameGrabberProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFrameGrabberProtocol(UFrameGrabberProtocol&&); \
	UFrameGrabberProtocol(const UFrameGrabberProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UFrameGrabberProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrameGrabberProtocol); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrameGrabberProtocol) \
	MOVIESCENECAPTURE_API virtual ~UFrameGrabberProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UFrameGrabberProtocol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
