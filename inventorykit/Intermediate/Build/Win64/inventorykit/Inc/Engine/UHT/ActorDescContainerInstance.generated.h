// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ActorDescContainerInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorDescContainerInstance_generated_h
#error "ActorDescContainerInstance.generated.h already included, missing '#pragma once' in ActorDescContainerInstance.h"
#endif
#define ENGINE_ActorDescContainerInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorDescContainerInstance(); \
	friend struct Z_Construct_UClass_UActorDescContainerInstance_Statics; \
public: \
	DECLARE_CLASS(UActorDescContainerInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UActorDescContainerInstance)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorDescContainerInstance(UActorDescContainerInstance&&); \
	UActorDescContainerInstance(const UActorDescContainerInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorDescContainerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorDescContainerInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorDescContainerInstance) \
	ENGINE_API virtual ~UActorDescContainerInstance();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorDescContainerInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
