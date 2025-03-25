// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/Cook/WorldPartitionCookPackageInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionCookPackageInterface_generated_h
#error "WorldPartitionCookPackageInterface.generated.h already included, missing '#pragma once' in WorldPartitionCookPackageInterface.h"
#endif
#define ENGINE_WorldPartitionCookPackageInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionCookPackageObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionCookPackageObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionCookPackageObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionCookPackageObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionCookPackageObject(UWorldPartitionCookPackageObject&&); \
	UWorldPartitionCookPackageObject(const UWorldPartitionCookPackageObject&); \
public: \
	ENGINE_API virtual ~UWorldPartitionCookPackageObject();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldPartitionCookPackageObject(); \
	friend struct Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionCookPackageObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionCookPackageObject)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IWorldPartitionCookPackageObject() {} \
public: \
	typedef UWorldPartitionCookPackageObject UClassType; \
	typedef IWorldPartitionCookPackageObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionCookPackageObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
