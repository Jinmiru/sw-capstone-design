// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalUniqueNetIdReplNetSerializer() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FUniqueNetIdReplNetSerializerStringStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct;
class UScriptStruct* FUniqueNetIdReplNetSerializerStringStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdReplNetSerializerStringStruct"));
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUniqueNetIdReplNetSerializerStringStruct>()
{
	return FUniqueNetIdReplNetSerializerStringStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdReplNetSerializerStringStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniqueNetIdReplNetSerializerStringStruct, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"UniqueNetIdReplNetSerializerStringStruct",
	Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::PropPointers),
	sizeof(FUniqueNetIdReplNetSerializerStringStruct),
	alignof(FUniqueNetIdReplNetSerializerStringStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.InnerSingleton, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.InnerSingleton;
}
// End ScriptStruct FUniqueNetIdReplNetSerializerStringStruct

// Begin ScriptStruct FUniqueNetIdReplNetSerializerNameStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct;
class UScriptStruct* FUniqueNetIdReplNetSerializerNameStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdReplNetSerializerNameStruct"));
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUniqueNetIdReplNetSerializerNameStruct>()
{
	return FUniqueNetIdReplNetSerializerNameStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdReplNetSerializerNameStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniqueNetIdReplNetSerializerNameStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"UniqueNetIdReplNetSerializerNameStruct",
	Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::PropPointers),
	sizeof(FUniqueNetIdReplNetSerializerNameStruct),
	alignof(FUniqueNetIdReplNetSerializerNameStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.InnerSingleton, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.InnerSingleton;
}
// End ScriptStruct FUniqueNetIdReplNetSerializerNameStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUniqueNetIdReplNetSerializerStringStruct::StaticStruct, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewStructOps, TEXT("UniqueNetIdReplNetSerializerStringStruct"), &Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniqueNetIdReplNetSerializerStringStruct), 3305511939U) },
		{ FUniqueNetIdReplNetSerializerNameStruct::StaticStruct, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewStructOps, TEXT("UniqueNetIdReplNetSerializerNameStruct"), &Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniqueNetIdReplNetSerializerNameStruct), 3678285964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_4026172682(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
