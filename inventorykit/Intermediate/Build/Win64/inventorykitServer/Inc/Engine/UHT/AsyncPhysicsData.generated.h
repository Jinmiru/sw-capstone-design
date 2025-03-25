// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/AsyncPhysicsData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AsyncPhysicsData_generated_h
#error "AsyncPhysicsData.generated.h already included, missing '#pragma once' in AsyncPhysicsData.h"
#endif
#define ENGINE_AsyncPhysicsData_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncPhysicsData(); \
	friend struct Z_Construct_UClass_UAsyncPhysicsData_Statics; \
public: \
	DECLARE_CLASS(UAsyncPhysicsData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAsyncPhysicsData)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAsyncPhysicsData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncPhysicsData(UAsyncPhysicsData&&); \
	UAsyncPhysicsData(const UAsyncPhysicsData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAsyncPhysicsData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncPhysicsData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncPhysicsData)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncPhysicsData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
