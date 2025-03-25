// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseCheckoutCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseCheckoutCallbackProxy;
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseProductRequest2;
struct FInAppPurchaseReceiptInfo2;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseCheckoutCallbackProxy_generated_h
#error "InAppPurchaseCheckoutCallbackProxy.generated.h already included, missing '#pragma once' in InAppPurchaseCheckoutCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseCheckoutCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_10_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FOnlineProxyInAppCheckoutResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineProxyInAppCheckoutResult, EInAppPurchaseStatus PurchaseStatus, FInAppPurchaseReceiptInfo2 const& InAppPurchaseReceipt);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseCheckout);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCheckoutCallbackProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseCheckoutCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseCheckoutCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCheckoutCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCheckoutCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCheckoutCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCheckoutCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInAppPurchaseCheckoutCallbackProxy(UInAppPurchaseCheckoutCallbackProxy&&); \
	UInAppPurchaseCheckoutCallbackProxy(const UInAppPurchaseCheckoutCallbackProxy&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseCheckoutCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_12_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseCheckoutCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
