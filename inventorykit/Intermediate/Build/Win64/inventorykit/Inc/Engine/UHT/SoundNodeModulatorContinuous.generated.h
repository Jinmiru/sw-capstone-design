// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeModulatorContinuous.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeModulatorContinuous_generated_h
#error "SoundNodeModulatorContinuous.generated.h already included, missing '#pragma once' in SoundNodeModulatorContinuous.h"
#endif
#define ENGINE_SoundNodeModulatorContinuous_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FModulatorContinuousParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeModulatorContinuous(); \
	friend struct Z_Construct_UClass_USoundNodeModulatorContinuous_Statics; \
public: \
	DECLARE_CLASS(USoundNodeModulatorContinuous, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeModulatorContinuous)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeModulatorContinuous(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulatorContinuous) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeModulatorContinuous); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulatorContinuous); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeModulatorContinuous(USoundNodeModulatorContinuous&&); \
	USoundNodeModulatorContinuous(const USoundNodeModulatorContinuous&); \
public: \
	ENGINE_API virtual ~USoundNodeModulatorContinuous();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeModulatorContinuous>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h


#define FOREACH_ENUM_MODULATIONPARAMMODE(op) \
	op(MPM_Normal) \
	op(MPM_Abs) \
	op(MPM_Direct) 

enum ModulationParamMode : int;
template<> ENGINE_API UEnum* StaticEnum<ModulationParamMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
