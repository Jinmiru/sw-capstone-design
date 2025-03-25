// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestBeaconClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_TestBeaconClient_generated_h
#error "TestBeaconClient.generated.h already included, missing '#pragma once' in TestBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_TestBeaconClient_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_RPC_WRAPPERS \
	virtual bool ServerPong_Validate(); \
	virtual void ServerPong_Implementation(); \
	virtual void ClientPing_Implementation(); \
	DECLARE_FUNCTION(execServerPong); \
	DECLARE_FUNCTION(execClientPing);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATestBeaconClient(); \
	friend struct Z_Construct_UClass_ATestBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ATestBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(ATestBeaconClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestBeaconClient(ATestBeaconClient&&); \
	ATestBeaconClient(const ATestBeaconClient&); \
public: \
	NO_API virtual ~ATestBeaconClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_11_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class ATestBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
