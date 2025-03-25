// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseDataTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseDataTypes_generated_h
#error "InAppPurchaseDataTypes.generated.h already included, missing '#pragma once' in InAppPurchaseDataTypes.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseDataTypes_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseProductRequest2>();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseReceiptInfo2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h


#define FOREACH_ENUM_EINAPPPURCHASESTATUS(op) \
	op(EInAppPurchaseStatus::Invalid) \
	op(EInAppPurchaseStatus::Failed) \
	op(EInAppPurchaseStatus::Deferred) \
	op(EInAppPurchaseStatus::Canceled) \
	op(EInAppPurchaseStatus::Purchased) \
	op(EInAppPurchaseStatus::Restored) 

enum class EInAppPurchaseStatus : uint8;
template<> struct TIsUEnumClass<EInAppPurchaseStatus> { enum { Value = true }; };
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EInAppPurchaseStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
