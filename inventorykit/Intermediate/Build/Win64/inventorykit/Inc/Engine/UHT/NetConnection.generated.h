// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NetConnection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetConnection_generated_h
#error "NetConnection.generated.h already included, missing '#pragma once' in NetConnection.h"
#endif
#define ENGINE_NetConnection_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_278_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetConnection, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_278_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetConnection(); \
	friend struct Z_Construct_UClass_UNetConnection_Statics; \
public: \
	DECLARE_CLASS(UNetConnection, UPlayer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetConnection) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_278_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_278_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetConnection(UNetConnection&&); \
	UNetConnection(const UNetConnection&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetConnection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetConnection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_272_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_278_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_278_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_278_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetConnection>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1954_INCLASS \
private: \
	static void StaticRegisterNativesUSimulatedClientNetConnection(); \
	friend struct Z_Construct_UClass_USimulatedClientNetConnection_Statics; \
public: \
	DECLARE_CLASS(USimulatedClientNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USimulatedClientNetConnection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1954_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USimulatedClientNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulatedClientNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USimulatedClientNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulatedClientNetConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimulatedClientNetConnection(USimulatedClientNetConnection&&); \
	USimulatedClientNetConnection(const USimulatedClientNetConnection&); \
public: \
	ENGINE_API virtual ~USimulatedClientNetConnection();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1950_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1954_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1954_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1954_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USimulatedClientNetConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
