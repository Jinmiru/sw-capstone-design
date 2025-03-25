// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacketHandlers/EngineHandlerComponentFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EngineHandlerComponentFactory_generated_h
#error "EngineHandlerComponentFactory.generated.h already included, missing '#pragma once' in EngineHandlerComponentFactory.h"
#endif
#define ENGINE_EngineHandlerComponentFactory_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEngineHandlerComponentFactory(); \
	friend struct Z_Construct_UClass_UEngineHandlerComponentFactory_Statics; \
public: \
	DECLARE_CLASS(UEngineHandlerComponentFactory, UHandlerComponentFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngineHandlerComponentFactory)


#define FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineHandlerComponentFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineHandlerComponentFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineHandlerComponentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineHandlerComponentFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEngineHandlerComponentFactory(UEngineHandlerComponentFactory&&); \
	UEngineHandlerComponentFactory(const UEngineHandlerComponentFactory&); \
public: \
	NO_API virtual ~UEngineHandlerComponentFactory();


#define FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngineHandlerComponentFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
