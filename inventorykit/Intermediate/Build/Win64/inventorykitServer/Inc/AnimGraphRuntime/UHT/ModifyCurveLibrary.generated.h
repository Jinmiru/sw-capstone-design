// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModifyCurveLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EAnimNodeReferenceConversionResult : uint8;
enum class EModifyCurveApplyMode : uint8;
struct FAnimNodeReference;
struct FModifyCurveAnimNodeReference;
#ifdef ANIMGRAPHRUNTIME_ModifyCurveLibrary_generated_h
#error "ModifyCurveLibrary.generated.h already included, missing '#pragma once' in ModifyCurveLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_ModifyCurveLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FModifyCurveAnimNodeReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetApplyMode); \
	DECLARE_FUNCTION(execGetApplyMode); \
	DECLARE_FUNCTION(execSetCurveMap); \
	DECLARE_FUNCTION(execConvertToModifyCurveNodePure); \
	DECLARE_FUNCTION(execConvertToModifyCurveNode);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifyCurveAnimLibrary(); \
	friend struct Z_Construct_UClass_UModifyCurveAnimLibrary_Statics; \
public: \
	DECLARE_CLASS(UModifyCurveAnimLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UModifyCurveAnimLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifyCurveAnimLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModifyCurveAnimLibrary(UModifyCurveAnimLibrary&&); \
	UModifyCurveAnimLibrary(const UModifyCurveAnimLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifyCurveAnimLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifyCurveAnimLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifyCurveAnimLibrary) \
	NO_API virtual ~UModifyCurveAnimLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_21_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UModifyCurveAnimLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
