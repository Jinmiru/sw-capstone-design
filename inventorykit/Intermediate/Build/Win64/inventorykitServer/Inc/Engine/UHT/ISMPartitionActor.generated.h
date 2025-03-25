// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISMPartition/ISMPartitionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ISMPartitionActor_generated_h
#error "ISMPartitionActor.generated.h already included, missing '#pragma once' in ISMPartitionActor.h"
#endif
#define ENGINE_ISMPartitionActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAISMPartitionActor(); \
	friend struct Z_Construct_UClass_AISMPartitionActor_Statics; \
public: \
	DECLARE_CLASS(AISMPartitionActor, APartitionActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AISMPartitionActor) \
	virtual UObject* _getUObject() const override { return const_cast<AISMPartitionActor*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AISMPartitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AISMPartitionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AISMPartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISMPartitionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISMPartitionActor(AISMPartitionActor&&); \
	AISMPartitionActor(const AISMPartitionActor&); \
public: \
	ENGINE_API virtual ~AISMPartitionActor();


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AISMPartitionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
