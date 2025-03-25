// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Streaming/ServerStreamingLevelsVisibility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ServerStreamingLevelsVisibility_generated_h
#error "ServerStreamingLevelsVisibility.generated.h already included, missing '#pragma once' in ServerStreamingLevelsVisibility.h"
#endif
#define ENGINE_ServerStreamingLevelsVisibility_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAServerStreamingLevelsVisibility(); \
	friend struct Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics; \
public: \
	DECLARE_CLASS(AServerStreamingLevelsVisibility, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AServerStreamingLevelsVisibility)


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AServerStreamingLevelsVisibility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AServerStreamingLevelsVisibility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AServerStreamingLevelsVisibility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerStreamingLevelsVisibility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AServerStreamingLevelsVisibility(AServerStreamingLevelsVisibility&&); \
	AServerStreamingLevelsVisibility(const AServerStreamingLevelsVisibility&); \
public: \
	ENGINE_API virtual ~AServerStreamingLevelsVisibility();


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AServerStreamingLevelsVisibility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
