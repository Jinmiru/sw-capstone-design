// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveTableBank.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAVETABLE_WaveTableBank_generated_h
#error "WaveTableBank.generated.h already included, missing '#pragma once' in WaveTableBank.h"
#endif
#define WAVETABLE_WaveTableBank_generated_h

#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WAVETABLE_API UScriptStruct* StaticStruct<struct FWaveTableBankEntry>();

#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWaveTableBank, NO_API)


#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveTableBank(); \
	friend struct Z_Construct_UClass_UWaveTableBank_Statics; \
public: \
	DECLARE_CLASS(UWaveTableBank, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveTable"), NO_API) \
	DECLARE_SERIALIZER(UWaveTableBank) \
	FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_30_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveTableBank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveTableBank(UWaveTableBank&&); \
	UWaveTableBank(const UWaveTableBank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveTableBank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveTableBank); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveTableBank) \
	NO_API virtual ~UWaveTableBank();


#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVETABLE_API UClass* StaticClass<class UWaveTableBank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
