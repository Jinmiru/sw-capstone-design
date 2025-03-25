// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CreateSessionCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCreateSessionCallbackProxy;
class UObject;
#ifdef ONLINESUBSYSTEMUTILS_CreateSessionCallbackProxy_generated_h
#error "CreateSessionCallbackProxy.generated.h already included, missing '#pragma once' in CreateSessionCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_CreateSessionCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateSession);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCreateSessionCallbackProxy(); \
	friend struct Z_Construct_UClass_UCreateSessionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UCreateSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UCreateSessionCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UCreateSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateSessionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UCreateSessionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateSessionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCreateSessionCallbackProxy(UCreateSessionCallbackProxy&&); \
	UCreateSessionCallbackProxy(const UCreateSessionCallbackProxy&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UCreateSessionCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_10_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_13_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UCreateSessionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
