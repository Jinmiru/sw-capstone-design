// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineBeaconClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconClient_generated_h
#error "OnlineBeaconClient.generated.h already included, missing '#pragma once' in OnlineBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconClient_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_RPC_WRAPPERS \
	virtual void ClientOnConnected_Implementation(); \
	DECLARE_FUNCTION(execClientOnConnected);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_AOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(AOnlineBeaconClient, AOnlineBeacon, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(AOnlineBeaconClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOnlineBeaconClient(AOnlineBeaconClient&&); \
	AOnlineBeaconClient(const AOnlineBeaconClient&); \
public: \
	NO_API virtual ~AOnlineBeaconClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_40_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class AOnlineBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h


#define FOREACH_ENUM_EBEACONCONNECTIONSTATE(op) \
	op(EBeaconConnectionState::Invalid) \
	op(EBeaconConnectionState::Closed) \
	op(EBeaconConnectionState::Pending) \
	op(EBeaconConnectionState::Open) 

enum class EBeaconConnectionState : uint8;
template<> struct TIsUEnumClass<EBeaconConnectionState> { enum { Value = true }; };
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EBeaconConnectionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
