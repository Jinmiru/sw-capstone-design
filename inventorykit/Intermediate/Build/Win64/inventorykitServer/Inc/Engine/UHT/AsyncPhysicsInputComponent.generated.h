// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/AsyncPhysicsInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncPhysicsData;
#ifdef ENGINE_AsyncPhysicsInputComponent_generated_h
#error "AsyncPhysicsInputComponent.generated.h already included, missing '#pragma once' in AsyncPhysicsInputComponent.h"
#endif
#define ENGINE_AsyncPhysicsInputComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ENGINE_API virtual void ServerRPCBufferInput_Implementation(UAsyncPhysicsData* AsyncPhysicsData); \
	DECLARE_FUNCTION(execGetDataToConsume); \
	DECLARE_FUNCTION(execGetDataToWrite); \
	DECLARE_FUNCTION(execServerRPCBufferInput);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncPhysicsInputComponent(); \
	friend struct Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics; \
public: \
	DECLARE_CLASS(UAsyncPhysicsInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAsyncPhysicsInputComponent)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncPhysicsInputComponent(UAsyncPhysicsInputComponent&&); \
	UAsyncPhysicsInputComponent(const UAsyncPhysicsInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAsyncPhysicsInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncPhysicsInputComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncPhysicsInputComponent) \
	ENGINE_API virtual ~UAsyncPhysicsInputComponent();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncPhysicsInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
