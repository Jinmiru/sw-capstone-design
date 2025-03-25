// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandlerComponentFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACKETHANDLER_HandlerComponentFactory_generated_h
#error "HandlerComponentFactory.generated.h already included, missing '#pragma once' in HandlerComponentFactory.h"
#endif
#define PACKETHANDLER_HandlerComponentFactory_generated_h

#define FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUHandlerComponentFactory(); \
	friend struct Z_Construct_UClass_UHandlerComponentFactory_Statics; \
public: \
	DECLARE_CLASS(UHandlerComponentFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PacketHandler"), PACKETHANDLER_API) \
	DECLARE_SERIALIZER(UHandlerComponentFactory)


#define FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PACKETHANDLER_API UHandlerComponentFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandlerComponentFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PACKETHANDLER_API, UHandlerComponentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandlerComponentFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHandlerComponentFactory(UHandlerComponentFactory&&); \
	UHandlerComponentFactory(const UHandlerComponentFactory&); \
public: \
	PACKETHANDLER_API virtual ~UHandlerComponentFactory();


#define FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_16_PROLOG
#define FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_INCLASS \
	FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACKETHANDLER_API UClass* StaticClass<class UHandlerComponentFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
