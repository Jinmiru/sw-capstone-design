// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComponentInstanceDataCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ComponentInstanceDataCache_generated_h
#error "ComponentInstanceDataCache.generated.h already included, missing '#pragma once' in ComponentInstanceDataCache.h"
#endif
#define ENGINE_ComponentInstanceDataCache_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDataCacheDuplicatedObjectData>();

#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstanceCacheDataBase>();

#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorComponentInstanceSourceInfo>();

#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FInstanceCacheDataBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorComponentInstanceData>();

#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FInstanceCacheDataBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h


#define FOREACH_ENUM_ECOMPONENTCREATIONMETHOD(op) \
	op(EComponentCreationMethod::Native) \
	op(EComponentCreationMethod::SimpleConstructionScript) \
	op(EComponentCreationMethod::UserConstructionScript) \
	op(EComponentCreationMethod::Instance) 

enum class EComponentCreationMethod : uint8;
template<> struct TIsUEnumClass<EComponentCreationMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EComponentCreationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
