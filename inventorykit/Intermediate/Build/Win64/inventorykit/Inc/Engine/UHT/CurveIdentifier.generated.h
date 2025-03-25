// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/CurveIdentifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeleton;
enum class ERawCurveTrackTypes : uint8;
enum class ETransformCurveChannel : uint8;
enum class EVectorCurveChannel : uint8;
struct FAnimationCurveIdentifier;
#ifdef ENGINE_CurveIdentifier_generated_h
#error "CurveIdentifier.generated.h already included, missing '#pragma once' in CurveIdentifier.h"
#endif
#define ENGINE_CurveIdentifier_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationCurveIdentifier>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execIsValid);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetTransformChildCurveIdentifier); \
	DECLARE_FUNCTION(execGetCurveIdentifiers); \
	DECLARE_FUNCTION(execFindCurveIdentifier); \
	DECLARE_FUNCTION(execGetCurveIdentifier); \
	DECLARE_FUNCTION(execSetCurveIdentifier);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationCurveIdentifierExtensions(); \
	friend struct Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationCurveIdentifierExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimationCurveIdentifierExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationCurveIdentifierExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationCurveIdentifierExtensions(UAnimationCurveIdentifierExtensions&&); \
	UAnimationCurveIdentifierExtensions(const UAnimationCurveIdentifierExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationCurveIdentifierExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCurveIdentifierExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCurveIdentifierExtensions) \
	ENGINE_API virtual ~UAnimationCurveIdentifierExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_115_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationCurveIdentifierExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h


#define FOREACH_ENUM_ETRANSFORMCURVECHANNEL(op) \
	op(ETransformCurveChannel::Position) \
	op(ETransformCurveChannel::Rotation) \
	op(ETransformCurveChannel::Scale) \
	op(ETransformCurveChannel::Invalid) 

enum class ETransformCurveChannel : uint8;
template<> struct TIsUEnumClass<ETransformCurveChannel> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETransformCurveChannel>();

#define FOREACH_ENUM_EVECTORCURVECHANNEL(op) \
	op(EVectorCurveChannel::X) \
	op(EVectorCurveChannel::Y) \
	op(EVectorCurveChannel::Z) \
	op(EVectorCurveChannel::Invalid) 

enum class EVectorCurveChannel : uint8;
template<> struct TIsUEnumClass<EVectorCurveChannel> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVectorCurveChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
