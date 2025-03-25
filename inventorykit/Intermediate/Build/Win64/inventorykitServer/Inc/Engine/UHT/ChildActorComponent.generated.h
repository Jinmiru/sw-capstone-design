// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ChildActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ENGINE_ChildActorComponent_generated_h
#error "ChildActorComponent.generated.h already included, missing '#pragma once' in ChildActorComponent.h"
#endif
#define ENGINE_ChildActorComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChildActorAttachedActorInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChildActorComponentInstanceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnChildActorDestroyed); \
	DECLARE_FUNCTION(execOnRep_ChildActor); \
	DECLARE_FUNCTION(execSetChildActorClass);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChildActorComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUChildActorComponent(); \
	friend struct Z_Construct_UClass_UChildActorComponent_Statics; \
public: \
	DECLARE_CLASS(UChildActorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UChildActorComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ChildActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=ChildActor	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UChildActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UChildActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChildActorComponent(UChildActorComponent&&); \
	UChildActorComponent(const UChildActorComponent&); \
public: \
	ENGINE_API virtual ~UChildActorComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_83_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UChildActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h


#define FOREACH_ENUM_ECHILDACTORCOMPONENTTREEVIEWVISUALIZATIONMODE(op) \
	op(EChildActorComponentTreeViewVisualizationMode::UseDefault) \
	op(EChildActorComponentTreeViewVisualizationMode::ComponentOnly) \
	op(EChildActorComponentTreeViewVisualizationMode::ComponentWithChildActor) \
	op(EChildActorComponentTreeViewVisualizationMode::ChildActorOnly) \
	op(EChildActorComponentTreeViewVisualizationMode::Hidden) 

enum class EChildActorComponentTreeViewVisualizationMode : uint8;
template<> struct TIsUEnumClass<EChildActorComponentTreeViewVisualizationMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EChildActorComponentTreeViewVisualizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
