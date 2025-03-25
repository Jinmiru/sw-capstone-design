// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Core/Connection/NetEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETCORE_NetEnums_generated_h
#error "NetEnums.generated.h already included, missing '#pragma once' in NetEnums.h"
#endif
#define NETCORE_NetEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h


#define FOREACH_ENUM_ENETWORKFAILURE(op) \
	op(ENetworkFailure::NetDriverAlreadyExists) \
	op(ENetworkFailure::NetDriverCreateFailure) \
	op(ENetworkFailure::NetDriverListenFailure) \
	op(ENetworkFailure::ConnectionLost) \
	op(ENetworkFailure::ConnectionTimeout) \
	op(ENetworkFailure::FailureReceived) \
	op(ENetworkFailure::OutdatedClient) \
	op(ENetworkFailure::OutdatedServer) \
	op(ENetworkFailure::PendingConnectionFailure) \
	op(ENetworkFailure::NetGuidMismatch) \
	op(ENetworkFailure::NetChecksumMismatch) 

namespace ENetworkFailure { enum Type : int; }
template<> NETCORE_API UEnum* StaticEnum<ENetworkFailure::Type>();

#define FOREACH_ENUM_EREPLICATIONSYSTEM(op) \
	op(EReplicationSystem::Default) \
	op(EReplicationSystem::Generic) \
	op(EReplicationSystem::Iris) 

enum class EReplicationSystem : uint8;
template<> struct TIsUEnumClass<EReplicationSystem> { enum { Value = true }; };
template<> NETCORE_API UEnum* StaticEnum<EReplicationSystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
