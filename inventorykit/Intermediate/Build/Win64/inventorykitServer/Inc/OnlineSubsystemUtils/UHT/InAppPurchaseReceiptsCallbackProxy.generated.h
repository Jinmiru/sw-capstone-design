// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseReceiptsCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseReceiptsCallbackProxy;
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseReceiptInfo2;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseReceiptsCallbackProxy_generated_h
#error "InAppPurchaseReceiptsCallbackProxy.generated.h already included, missing '#pragma once' in InAppPurchaseReceiptsCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseReceiptsCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_9_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FOnlineProxyInAppReceiptsResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineProxyInAppReceiptsResult, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseReceiptInfo2> const& InAppPurchaseReceipts);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestoreOwnedProducts); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQueryOwnedProducts); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseGetKnownReceipts);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseReceiptsCallbackProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseReceiptsCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseReceiptsCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseReceiptsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseReceiptsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseReceiptsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseReceiptsCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInAppPurchaseReceiptsCallbackProxy(UInAppPurchaseReceiptsCallbackProxy&&); \
	UInAppPurchaseReceiptsCallbackProxy(const UInAppPurchaseReceiptsCallbackProxy&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseReceiptsCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_11_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseReceiptsCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
