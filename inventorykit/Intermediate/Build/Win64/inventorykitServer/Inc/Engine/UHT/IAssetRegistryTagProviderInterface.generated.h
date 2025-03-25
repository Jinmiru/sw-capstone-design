// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAssetRegistryTagProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_IAssetRegistryTagProviderInterface_generated_h
#error "IAssetRegistryTagProviderInterface.generated.h already included, missing '#pragma once' in IAssetRegistryTagProviderInterface.h"
#endif
#define ENGINE_IAssetRegistryTagProviderInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAssetRegistryTagProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetRegistryTagProviderInterface(UAssetRegistryTagProviderInterface&&); \
	UAssetRegistryTagProviderInterface(const UAssetRegistryTagProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAssetRegistryTagProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryTagProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryTagProviderInterface) \
	ENGINE_API virtual ~UAssetRegistryTagProviderInterface();


#define FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetRegistryTagProviderInterface(); \
	friend struct Z_Construct_UClass_UAssetRegistryTagProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryTagProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAssetRegistryTagProviderInterface)


#define FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetRegistryTagProviderInterface() {} \
public: \
	typedef UAssetRegistryTagProviderInterface UClassType; \
	typedef IAssetRegistryTagProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetRegistryTagProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
