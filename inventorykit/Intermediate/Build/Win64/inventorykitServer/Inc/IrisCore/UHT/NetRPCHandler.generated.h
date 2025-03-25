// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetBlob/NetRPCHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_NetRPCHandler_generated_h
#error "NetRPCHandler.generated.h already included, missing '#pragma once' in NetRPCHandler.h"
#endif
#define IRISCORE_NetRPCHandler_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetRPCHandler(); \
	friend struct Z_Construct_UClass_UNetRPCHandler_Statics; \
public: \
	DECLARE_CLASS(UNetRPCHandler, UNetBlobHandler, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(UNetRPCHandler)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetRPCHandler(UNetRPCHandler&&); \
	UNetRPCHandler(const UNetRPCHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetRPCHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetRPCHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetRPCHandler)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_27_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetRPCHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
