// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraDataChannelAsset;
class UNiagaraDataChannelHandler;
class UNiagaraDataChannelReader;
class UNiagaraDataChannelWriter;
class UObject;
enum class ENiagartaDataChannelReadResult : uint8;
struct FNiagaraDataChannelSearchParameters;
#ifdef NIAGARA_NiagaraDataChannel_generated_h
#error "NiagaraDataChannel.generated.h already included, missing '#pragma once' in NiagaraDataChannel.h"
#endif
#define NIAGARA_NiagaraDataChannel_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannel(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannel_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannel)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataChannel(UNiagaraDataChannel&&); \
	UNiagaraDataChannel(const UNiagaraDataChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannel) \
	NIAGARA_API virtual ~UNiagaraDataChannel();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_84_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_88_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannel>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_209_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWriteToNiagaraDataChannelSingle); \
	DECLARE_FUNCTION(execReadFromNiagaraDataChannelSingle); \
	DECLARE_FUNCTION(execGetDataChannelElementCount); \
	DECLARE_FUNCTION(execReadFromNiagaraDataChannel); \
	DECLARE_FUNCTION(execWriteToNiagaraDataChannel); \
	DECLARE_FUNCTION(execGetNiagaraDataChannel);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_209_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_209_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataChannelLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataChannelLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelLibrary(UNiagaraDataChannelLibrary&&); \
	UNiagaraDataChannelLibrary(const UNiagaraDataChannelLibrary&); \
public: \
	NO_API virtual ~UNiagaraDataChannelLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_206_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_209_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_209_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_209_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_209_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannelLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h


#define FOREACH_ENUM_ENIAGARTADATACHANNELREADRESULT(op) \
	op(ENiagartaDataChannelReadResult::Success) \
	op(ENiagartaDataChannelReadResult::Failure) 

enum class ENiagartaDataChannelReadResult : uint8;
template<> struct TIsUEnumClass<ENiagartaDataChannelReadResult> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagartaDataChannelReadResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
