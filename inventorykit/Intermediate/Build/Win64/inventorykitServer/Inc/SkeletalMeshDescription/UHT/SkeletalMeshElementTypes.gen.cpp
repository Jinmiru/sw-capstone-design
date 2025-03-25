// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SkeletalMeshDescription/Public/SkeletalMeshElementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshElementTypes() {}

// Begin Cross Module References
MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FElementID();
SKELETALMESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FBoneID();
SKELETALMESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FSourceGeometryPartID();
UPackage* Z_Construct_UPackage__Script_SkeletalMeshDescription();
// End Cross Module References

// Begin ScriptStruct FBoneID
static_assert(std::is_polymorphic<FBoneID>() == std::is_polymorphic<FElementID>(), "USTRUCT FBoneID cannot be polymorphic unless super FElementID is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneID;
class UScriptStruct* FBoneID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneID, (UObject*)Z_Construct_UPackage__Script_SkeletalMeshDescription(), TEXT("BoneID"));
	}
	return Z_Registration_Info_UScriptStruct_BoneID.OuterSingleton;
}
template<> SKELETALMESHDESCRIPTION_API UScriptStruct* StaticStruct<FBoneID>()
{
	return FBoneID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalMeshElementTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshDescription,
	Z_Construct_UScriptStruct_FElementID,
	&NewStructOps,
	"BoneID",
	nullptr,
	0,
	sizeof(FBoneID),
	alignof(FBoneID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneID()
{
	if (!Z_Registration_Info_UScriptStruct_BoneID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneID.InnerSingleton, Z_Construct_UScriptStruct_FBoneID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneID.InnerSingleton;
}
// End ScriptStruct FBoneID

// Begin ScriptStruct FSourceGeometryPartID
static_assert(std::is_polymorphic<FSourceGeometryPartID>() == std::is_polymorphic<FElementID>(), "USTRUCT FSourceGeometryPartID cannot be polymorphic unless super FElementID is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceGeometryPartID;
class UScriptStruct* FSourceGeometryPartID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceGeometryPartID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceGeometryPartID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceGeometryPartID, (UObject*)Z_Construct_UPackage__Script_SkeletalMeshDescription(), TEXT("SourceGeometryPartID"));
	}
	return Z_Registration_Info_UScriptStruct_SourceGeometryPartID.OuterSingleton;
}
template<> SKELETALMESHDESCRIPTION_API UScriptStruct* StaticStruct<FSourceGeometryPartID>()
{
	return FSourceGeometryPartID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceGeometryPartID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalMeshElementTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceGeometryPartID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceGeometryPartID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshDescription,
	Z_Construct_UScriptStruct_FElementID,
	&NewStructOps,
	"SourceGeometryPartID",
	nullptr,
	0,
	sizeof(FSourceGeometryPartID),
	alignof(FSourceGeometryPartID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceGeometryPartID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceGeometryPartID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceGeometryPartID()
{
	if (!Z_Registration_Info_UScriptStruct_SourceGeometryPartID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceGeometryPartID.InnerSingleton, Z_Construct_UScriptStruct_FSourceGeometryPartID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceGeometryPartID.InnerSingleton;
}
// End ScriptStruct FSourceGeometryPartID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshElementTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoneID::StaticStruct, Z_Construct_UScriptStruct_FBoneID_Statics::NewStructOps, TEXT("BoneID"), &Z_Registration_Info_UScriptStruct_BoneID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneID), 1470493172U) },
		{ FSourceGeometryPartID::StaticStruct, Z_Construct_UScriptStruct_FSourceGeometryPartID_Statics::NewStructOps, TEXT("SourceGeometryPartID"), &Z_Registration_Info_UScriptStruct_SourceGeometryPartID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceGeometryPartID), 3712723892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshElementTypes_h_1348243501(TEXT("/Script/SkeletalMeshDescription"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshElementTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshElementTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
