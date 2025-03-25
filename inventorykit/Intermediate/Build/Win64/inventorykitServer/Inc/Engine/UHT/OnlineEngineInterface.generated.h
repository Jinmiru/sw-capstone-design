// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/OnlineEngineInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_OnlineEngineInterface_generated_h
#error "OnlineEngineInterface.generated.h already included, missing '#pragma once' in OnlineEngineInterface.h"
#endif
#define ENGINE_OnlineEngineInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineEngineInterface(); \
	friend struct Z_Construct_UClass_UOnlineEngineInterface_Statics; \
public: \
	DECLARE_CLASS(UOnlineEngineInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UOnlineEngineInterface) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UOnlineEngineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineEngineInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UOnlineEngineInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineEngineInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnlineEngineInterface(UOnlineEngineInterface&&); \
	UOnlineEngineInterface(const UOnlineEngineInterface&); \
public: \
	ENGINE_API virtual ~UOnlineEngineInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UOnlineEngineInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
