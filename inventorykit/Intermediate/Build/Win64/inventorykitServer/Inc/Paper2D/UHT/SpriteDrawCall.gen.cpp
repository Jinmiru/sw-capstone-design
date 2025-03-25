// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/SpriteDrawCall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpriteDrawCall() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteDrawCallRecord();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FSpriteDrawCallRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord;
class UScriptStruct* FSpriteDrawCallRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteDrawCallRecord, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteDrawCallRecord"));
	}
	return Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteDrawCallRecord>()
{
	return FSpriteDrawCallRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteDrawCallRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpriteDrawCallRecord, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Destination_MetaData), NewProp_Destination_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture = { "BaseTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpriteDrawCallRecord, BaseTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTexture_MetaData), NewProp_BaseTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpriteDrawCallRecord, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"SpriteDrawCallRecord",
	Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers),
	sizeof(FSpriteDrawCallRecord),
	alignof(FSpriteDrawCallRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpriteDrawCallRecord()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.InnerSingleton, Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.InnerSingleton;
}
// End ScriptStruct FSpriteDrawCallRecord

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpriteDrawCallRecord::StaticStruct, Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewStructOps, TEXT("SpriteDrawCallRecord"), &Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpriteDrawCallRecord), 1232159771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_1896366076(TEXT("/Script/Paper2D"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
