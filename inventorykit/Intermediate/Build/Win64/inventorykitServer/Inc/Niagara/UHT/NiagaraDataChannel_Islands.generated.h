// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannel_Islands.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataChannel_Islands_generated_h
#error "NiagaraDataChannel_Islands.generated.h already included, missing '#pragma once' in NiagaraDataChannel_Islands.h"
#endif
#define NIAGARA_NiagaraDataChannel_Islands_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDCIsland_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDCIsland>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDCIslandDebugDrawSettings>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannel_Islands(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannel_Islands, UNiagaraDataChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannel_Islands)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannel_Islands(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataChannel_Islands(UNiagaraDataChannel_Islands&&); \
	UNiagaraDataChannel_Islands(const UNiagaraDataChannel_Islands&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannel_Islands); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannel_Islands); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannel_Islands) \
	NIAGARA_API virtual ~UNiagaraDataChannel_Islands();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_114_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannel_Islands>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_195_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelHandler_Islands(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelHandler_Islands, UNiagaraDataChannelHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelHandler_Islands)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_195_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelHandler_Islands(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelHandler_Islands) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelHandler_Islands); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelHandler_Islands); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelHandler_Islands(UNiagaraDataChannelHandler_Islands&&); \
	UNiagaraDataChannelHandler_Islands(const UNiagaraDataChannelHandler_Islands&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataChannelHandler_Islands();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_192_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_195_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannelHandler_Islands>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h


#define FOREACH_ENUM_ENIAGRADATACHANNEL_ISLANDMODE(op) \
	op(ENiagraDataChannel_IslandMode::AlignedStatic) \
	op(ENiagraDataChannel_IslandMode::Dynamic) 

enum class ENiagraDataChannel_IslandMode : uint8;
template<> struct TIsUEnumClass<ENiagraDataChannel_IslandMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagraDataChannel_IslandMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
