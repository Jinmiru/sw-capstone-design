// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseFinalizeProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseFinalizeProxy;
struct FInAppPurchaseReceiptInfo2;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseFinalizeProxy_generated_h
#error "InAppPurchaseFinalizeProxy.generated.h already included, missing '#pragma once' in InAppPurchaseFinalizeProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseFinalizeProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_12_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseFinalize);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseFinalizeProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseFinalizeProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseFinalizeProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseFinalizeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseFinalizeProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseFinalizeProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseFinalizeProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInAppPurchaseFinalizeProxy(UInAppPurchaseFinalizeProxy&&); \
	UInAppPurchaseFinalizeProxy(const UInAppPurchaseFinalizeProxy&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseFinalizeProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_9_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_12_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseFinalizeProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
