// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Streaming/ActorTextureStreamingBuildDataComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorTextureStreamingBuildDataComponent_generated_h
#error "ActorTextureStreamingBuildDataComponent.generated.h already included, missing '#pragma once' in ActorTextureStreamingBuildDataComponent.h"
#endif
#define ENGINE_ActorTextureStreamingBuildDataComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamableTexture_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStreamableTexture>();

#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorTextureStreamingBuildDataComponent(); \
	friend struct Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics; \
public: \
	DECLARE_CLASS(UActorTextureStreamingBuildDataComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UActorTextureStreamingBuildDataComponent)


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorTextureStreamingBuildDataComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorTextureStreamingBuildDataComponent(UActorTextureStreamingBuildDataComponent&&); \
	UActorTextureStreamingBuildDataComponent(const UActorTextureStreamingBuildDataComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorTextureStreamingBuildDataComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTextureStreamingBuildDataComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorTextureStreamingBuildDataComponent) \
	ENGINE_API virtual ~UActorTextureStreamingBuildDataComponent();


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_41_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorTextureStreamingBuildDataComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
