// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODDestruction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IWorldPartitionDestructibleInHLODInterface;
struct FWorldPartitionHLODDestructionTag;
#ifdef ENGINE_HLODDestruction_generated_h
#error "HLODDestruction.generated.h already included, missing '#pragma once' in HLODDestruction.h"
#endif
#define ENGINE_HLODDestruction_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPartitionHLODDestructionTag>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	ENGINE_API virtual FWorldPartitionHLODDestructionTag GetHLODDestructionTag_Implementation() const { return FWorldPartitionHLODDestructionTag(); }; \
	ENGINE_API virtual void SetHLODDestructionTag_Implementation(FWorldPartitionHLODDestructionTag const& InDestructionTag) {}; \
	DECLARE_FUNCTION(execGetHLODDestructionTag); \
	DECLARE_FUNCTION(execSetHLODDestructionTag);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionDestructibleInHLODInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionDestructibleInHLODInterface(UWorldPartitionDestructibleInHLODInterface&&); \
	UWorldPartitionDestructibleInHLODInterface(const UWorldPartitionDestructibleInHLODInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionDestructibleInHLODInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionDestructibleInHLODInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionDestructibleInHLODInterface) \
	ENGINE_API virtual ~UWorldPartitionDestructibleInHLODInterface();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldPartitionDestructibleInHLODInterface(); \
	friend struct Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionDestructibleInHLODInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionDestructibleInHLODInterface)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWorldPartitionDestructibleInHLODInterface() {} \
public: \
	typedef UWorldPartitionDestructibleInHLODInterface UClassType; \
	typedef IWorldPartitionDestructibleInHLODInterface ThisClass; \
	ENGINE_API static FWorldPartitionHLODDestructionTag Execute_GetHLODDestructionTag(const UObject* O); \
	ENGINE_API static void Execute_SetHLODDestructionTag(UObject* O, FWorldPartitionHLODDestructionTag const& InDestructionTag); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_38_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionDestructibleInHLODInterface>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDamageInHLOD); \
	DECLARE_FUNCTION(execDestroyInHLOD);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionDestructibleInHLODSupportLibrary(); \
	friend struct Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionDestructibleInHLODSupportLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionDestructibleInHLODSupportLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionDestructibleInHLODSupportLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionDestructibleInHLODSupportLibrary(UWorldPartitionDestructibleInHLODSupportLibrary&&); \
	UWorldPartitionDestructibleInHLODSupportLibrary(const UWorldPartitionDestructibleInHLODSupportLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionDestructibleInHLODSupportLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionDestructibleInHLODSupportLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionDestructibleInHLODSupportLibrary) \
	ENGINE_API virtual ~UWorldPartitionDestructibleInHLODSupportLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionDestructibleInHLODSupportLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
