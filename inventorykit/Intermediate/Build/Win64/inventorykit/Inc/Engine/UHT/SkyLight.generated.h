// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkyLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkyLight_generated_h
#error "SkyLight.generated.h already included, missing '#pragma once' in SkyLight.h"
#endif
#define ENGINE_SkyLight_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASkyLight(); \
	friend struct Z_Construct_UClass_ASkyLight_Statics; \
public: \
	DECLARE_CLASS(ASkyLight, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASkyLight) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASkyLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASkyLight(ASkyLight&&); \
	ASkyLight(const ASkyLight&); \
public: \
	ENGINE_API virtual ~ASkyLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASkyLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
