// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/AnimDataNotifications.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAnimationDataModel;
class UScriptStruct;
enum class EAnimDataModelNotifyType : uint8;
struct FAnimDataModelNotifPayload;
struct FEmptyPayload;
#ifdef ENGINE_AnimDataNotifications_generated_h
#error "AnimDataNotifications.generated.h already included, missing '#pragma once' in AnimDataNotifications.h"
#endif
#define ENGINE_AnimDataNotifications_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmptyPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEmptyPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBracketPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBracketPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTrackPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationTrackPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTrackAddedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSequenceLengthChangedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFrameRateChangedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurvePayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurvePayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveScaledPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCurvePayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveScaledPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCurvePayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveRenamedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCurvePayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveFlagsChangedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributePayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAttributePayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimDataModelNotifPayload>();

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_279_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetPayload); \
	DECLARE_FUNCTION(execCopyPayload);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_279_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_279_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationDataModelNotifiesExtensions(); \
	friend struct Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataModelNotifiesExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimationDataModelNotifiesExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_279_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationDataModelNotifiesExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationDataModelNotifiesExtensions(UAnimationDataModelNotifiesExtensions&&); \
	UAnimationDataModelNotifiesExtensions(const UAnimationDataModelNotifiesExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationDataModelNotifiesExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataModelNotifiesExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataModelNotifiesExtensions) \
	ENGINE_API virtual ~UAnimationDataModelNotifiesExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_276_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_279_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_279_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_279_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_279_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationDataModelNotifiesExtensions>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_300_DELEGATE \
ENGINE_API void FAnimDataModelModifiedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& AnimDataModelModifiedDynamicEvent, EAnimDataModelNotifyType NotifType, const TScriptInterface<IAnimationDataModel>& Model, FAnimDataModelNotifPayload const& Payload);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h


#define FOREACH_ENUM_EANIMDATAMODELNOTIFYTYPE(op) \
	op(EAnimDataModelNotifyType::BracketOpened) \
	op(EAnimDataModelNotifyType::BracketClosed) \
	op(EAnimDataModelNotifyType::TrackAdded) \
	op(EAnimDataModelNotifyType::TrackChanged) \
	op(EAnimDataModelNotifyType::TrackRemoved) \
	op(EAnimDataModelNotifyType::SequenceLengthChanged) \
	op(EAnimDataModelNotifyType::FrameRateChanged) \
	op(EAnimDataModelNotifyType::CurveAdded) \
	op(EAnimDataModelNotifyType::CurveChanged) \
	op(EAnimDataModelNotifyType::CurveRemoved) \
	op(EAnimDataModelNotifyType::CurveFlagsChanged) \
	op(EAnimDataModelNotifyType::CurveRenamed) \
	op(EAnimDataModelNotifyType::CurveScaled) \
	op(EAnimDataModelNotifyType::CurveColorChanged) \
	op(EAnimDataModelNotifyType::CurveCommentChanged) \
	op(EAnimDataModelNotifyType::AttributeAdded) \
	op(EAnimDataModelNotifyType::AttributeRemoved) \
	op(EAnimDataModelNotifyType::AttributeChanged) \
	op(EAnimDataModelNotifyType::Populated) \
	op(EAnimDataModelNotifyType::Reset) \
	op(EAnimDataModelNotifyType::SkeletonChanged) \
	op(EAnimDataModelNotifyType::Invalid) 

enum class EAnimDataModelNotifyType : uint8;
template<> struct TIsUEnumClass<EAnimDataModelNotifyType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimDataModelNotifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
