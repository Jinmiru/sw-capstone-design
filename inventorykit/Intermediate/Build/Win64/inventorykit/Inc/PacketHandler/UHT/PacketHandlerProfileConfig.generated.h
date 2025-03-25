// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacketHandlerProfileConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACKETHANDLER_PacketHandlerProfileConfig_generated_h
#error "PacketHandlerProfileConfig.generated.h already included, missing '#pragma once' in PacketHandlerProfileConfig.h"
#endif
#define PACKETHANDLER_PacketHandlerProfileConfig_generated_h

#define FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPacketHandlerProfileConfig(); \
	friend struct Z_Construct_UClass_UPacketHandlerProfileConfig_Statics; \
public: \
	DECLARE_CLASS(UPacketHandlerProfileConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacketHandler"), NO_API) \
	DECLARE_SERIALIZER(UPacketHandlerProfileConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPacketHandlerProfileConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPacketHandlerProfileConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPacketHandlerProfileConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPacketHandlerProfileConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPacketHandlerProfileConfig(UPacketHandlerProfileConfig&&); \
	UPacketHandlerProfileConfig(const UPacketHandlerProfileConfig&); \
public: \
	NO_API virtual ~UPacketHandlerProfileConfig();


#define FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_13_PROLOG
#define FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_16_INCLASS \
	FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACKETHANDLER_API UClass* StaticClass<class UPacketHandlerProfileConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
