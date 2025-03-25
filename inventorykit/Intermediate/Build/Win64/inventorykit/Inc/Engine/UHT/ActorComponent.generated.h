// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UObject;
#ifdef ENGINE_ActorComponent_generated_h
#error "ActorComponent.generated.h already included, missing '#pragma once' in ActorComponent.h"
#endif
#define ENGINE_ActorComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_117_DELEGATE \
ENGINE_API void FActorComponentActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentActivatedSignature, UActorComponent* Component, bool bReset);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_118_DELEGATE \
ENGINE_API void FActorComponentDeactivateSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentDeactivateSignature, UActorComponent* Component);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor); \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor); \
	DECLARE_FUNCTION(execSetTickGroup); \
	DECLARE_FUNCTION(execK2_DestroyComponent); \
	DECLARE_FUNCTION(execGetComponentTickInterval); \
	DECLARE_FUNCTION(execSetComponentTickIntervalAndCooldown); \
	DECLARE_FUNCTION(execSetComponentTickInterval); \
	DECLARE_FUNCTION(execIsComponentTickEnabled); \
	DECLARE_FUNCTION(execSetComponentTickEnabled); \
	DECLARE_FUNCTION(execSetIsReplicated); \
	DECLARE_FUNCTION(execSetTickableWhenPaused); \
	DECLARE_FUNCTION(execSetAutoActivate); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execComponentHasTag); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execIsBeingDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UActorComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorComponent(); \
	friend struct Z_Construct_UClass_UActorComponent_Statics; \
public: \
	DECLARE_CLASS(UActorComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UActorComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UActorComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicates=NETFIELD_REP_START, \
		bIsActive, \
		NETFIELD_REP_END=bIsActive	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UActorComponent) \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorComponent(UActorComponent&&); \
	UActorComponent(const UActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponent) \
	ENGINE_API virtual ~UActorComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_131_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
