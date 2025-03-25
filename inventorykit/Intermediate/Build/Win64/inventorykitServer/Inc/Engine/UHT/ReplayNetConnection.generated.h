// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplayNetConnection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReplayNetConnection_generated_h
#error "ReplayNetConnection.generated.h already included, missing '#pragma once' in ReplayNetConnection.h"
#endif
#define ENGINE_ReplayNetConnection_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReplayNetConnection, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplayNetConnection(); \
	friend struct Z_Construct_UClass_UReplayNetConnection_Statics; \
public: \
	DECLARE_CLASS(UReplayNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReplayNetConnection) \
	FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReplayNetConnection(UReplayNetConnection&&); \
	UReplayNetConnection(const UReplayNetConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReplayNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplayNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplayNetConnection) \
	ENGINE_API virtual ~UReplayNetConnection();


#define FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReplayNetConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
