// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendListBaseLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FBlendListBaseReference;
#ifdef ANIMGRAPHRUNTIME_BlendListBaseLibrary_generated_h
#error "BlendListBaseLibrary.generated.h already included, missing '#pragma once' in BlendListBaseLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_BlendListBaseLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendListBaseReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FBlendListBaseReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetNode); \
	DECLARE_FUNCTION(execConvertToBlendListBase);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendListBaseLibrary(); \
	friend struct Z_Construct_UClass_UBlendListBaseLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlendListBaseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(UBlendListBaseLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UBlendListBaseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlendListBaseLibrary(UBlendListBaseLibrary&&); \
	UBlendListBaseLibrary(const UBlendListBaseLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UBlendListBaseLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendListBaseLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendListBaseLibrary) \
	ANIMGRAPHRUNTIME_API virtual ~UBlendListBaseLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_21_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UBlendListBaseLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
