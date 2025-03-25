// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/UdpMessagingSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UDPMESSAGING_UdpMessagingSettings_generated_h
#error "UdpMessagingSettings.generated.h already included, missing '#pragma once' in UdpMessagingSettings.h"
#endif
#define UDPMESSAGING_UdpMessagingSettings_generated_h

#define FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUUdpMessagingSettings(); \
	friend struct Z_Construct_UClass_UUdpMessagingSettings_Statics; \
public: \
	DECLARE_CLASS(UUdpMessagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UdpMessaging"), NO_API) \
	DECLARE_SERIALIZER(UUdpMessagingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUdpMessagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUdpMessagingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUdpMessagingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUdpMessagingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUdpMessagingSettings(UUdpMessagingSettings&&); \
	UUdpMessagingSettings(const UUdpMessagingSettings&); \
public: \
	NO_API virtual ~UUdpMessagingSettings();


#define FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_34_PROLOG
#define FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_38_INCLASS \
	FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDPMESSAGING_API UClass* StaticClass<class UUdpMessagingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h


#define FOREACH_ENUM_EUDPMESSAGEFORMAT(op) \
	op(EUdpMessageFormat::None) \
	op(EUdpMessageFormat::Json) \
	op(EUdpMessageFormat::TaggedProperty) \
	op(EUdpMessageFormat::CborPlatformEndianness) \
	op(EUdpMessageFormat::CborStandardEndianness) 

enum class EUdpMessageFormat : uint8;
template<> struct TIsUEnumClass<EUdpMessageFormat> { enum { Value = true }; };
template<> UDPMESSAGING_API UEnum* StaticEnum<EUdpMessageFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
