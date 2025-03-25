// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenlockedFixedRateCustomTimeStep.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEMANAGEMENT_GenlockedFixedRateCustomTimeStep_generated_h
#error "GenlockedFixedRateCustomTimeStep.generated.h already included, missing '#pragma once' in GenlockedFixedRateCustomTimeStep.h"
#endif
#define TIMEMANAGEMENT_GenlockedFixedRateCustomTimeStep_generated_h

#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUGenlockedFixedRateCustomTimeStep(); \
	friend struct Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UGenlockedFixedRateCustomTimeStep, UGenlockedCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), TIMEMANAGEMENT_API) \
	DECLARE_SERIALIZER(UGenlockedFixedRateCustomTimeStep)


#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UGenlockedFixedRateCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenlockedFixedRateCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UGenlockedFixedRateCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenlockedFixedRateCustomTimeStep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenlockedFixedRateCustomTimeStep(UGenlockedFixedRateCustomTimeStep&&); \
	UGenlockedFixedRateCustomTimeStep(const UGenlockedFixedRateCustomTimeStep&); \
public: \
	TIMEMANAGEMENT_API virtual ~UGenlockedFixedRateCustomTimeStep();


#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_32_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_INCLASS \
	FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UGenlockedFixedRateCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
