// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UniversalObjectLocator/Public/UniversalObjectLocatorResolveParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorResolveParams() {}

// Begin Cross Module References
UNIVERSALOBJECTLOCATOR_API UEnum* Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags();
UPackage* Z_Construct_UPackage__Script_UniversalObjectLocator();
// End Cross Module References

// Begin Enum ELocatorResolveFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocatorResolveFlags;
static UEnum* ELocatorResolveFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags, (UObject*)Z_Construct_UPackage__Script_UniversalObjectLocator(), TEXT("ELocatorResolveFlags"));
	}
	return Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton;
}
template<> UNIVERSALOBJECTLOCATOR_API UEnum* StaticEnum<ELocatorResolveFlags>()
{
	return ELocatorResolveFlags_StaticEnum();
}
struct Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Async.Comment", "/**\n\x09 * Indicates that the operation should be performed asynchronously if possible.\n\x09 *   When not combined with WillWait, the caller will never block waiting for the result.\n\x09 *   When combined with WillWait, the caller will block on this thread until the result is available,\n\x09 *    so care needs to be taken avoid a deadlock if there are additional threading constraints on the load. */" },
		{ "Async.Name", "ELocatorResolveFlags::Async" },
		{ "Async.ToolTip", "Indicates that the operation should be performed asynchronously if possible.\n  When not combined with WillWait, the caller will never block waiting for the result.\n  When combined with WillWait, the caller will block on this thread until the result is available,\n   so care needs to be taken avoid a deadlock if there are additional threading constraints on the load." },
		{ "AsyncWait.Comment", "/** Combination of Async and WillWait. */" },
		{ "AsyncWait.Name", "ELocatorResolveFlags::AsyncWait" },
		{ "AsyncWait.ToolTip", "Combination of Async and WillWait." },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Load.Comment", "/** Flag to indicate whether the object should be loaded if it is not currently findable */" },
		{ "Load.Name", "ELocatorResolveFlags::Load" },
		{ "Load.ToolTip", "Flag to indicate whether the object should be loaded if it is not currently findable" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocatorResolveParams.h" },
		{ "None.Name", "ELocatorResolveFlags::None" },
		{ "Unload.Comment", "/** Flag to indicate whether the object should be unloaded or destroyed. Mutually exclusive with bLoad. */" },
		{ "Unload.Name", "ELocatorResolveFlags::Unload" },
		{ "Unload.ToolTip", "Flag to indicate whether the object should be unloaded or destroyed. Mutually exclusive with bLoad." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "WillWait.Comment", "/** Indicates the calling code is going to block waiting for the result. */" },
		{ "WillWait.Name", "ELocatorResolveFlags::WillWait" },
		{ "WillWait.ToolTip", "Indicates the calling code is going to block waiting for the result." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocatorResolveFlags::None", (int64)ELocatorResolveFlags::None },
		{ "ELocatorResolveFlags::Load", (int64)ELocatorResolveFlags::Load },
		{ "ELocatorResolveFlags::Unload", (int64)ELocatorResolveFlags::Unload },
		{ "ELocatorResolveFlags::Async", (int64)ELocatorResolveFlags::Async },
		{ "ELocatorResolveFlags::WillWait", (int64)ELocatorResolveFlags::WillWait },
		{ "ELocatorResolveFlags::AsyncWait", (int64)ELocatorResolveFlags::AsyncWait },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UniversalObjectLocator,
	nullptr,
	"ELocatorResolveFlags",
	"ELocatorResolveFlags",
	Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags()
{
	if (!Z_Registration_Info_UEnum_ELocatorResolveFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocatorResolveFlags.InnerSingleton, Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocatorResolveFlags.InnerSingleton;
}
// End Enum ELocatorResolveFlags

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorResolveParams_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocatorResolveFlags_StaticEnum, TEXT("ELocatorResolveFlags"), &Z_Registration_Info_UEnum_ELocatorResolveFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3426674037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorResolveParams_h_4053228351(TEXT("/Script/UniversalObjectLocator"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorResolveParams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorResolveParams_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
