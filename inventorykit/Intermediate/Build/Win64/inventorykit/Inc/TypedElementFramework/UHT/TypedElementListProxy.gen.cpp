// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementListProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementListProxy() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FScriptTypedElementListProxy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy;
class UScriptStruct* FScriptTypedElementListProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptTypedElementListProxy, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("ScriptTypedElementListProxy"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FScriptTypedElementListProxy>()
{
	return FScriptTypedElementListProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A list of script element handles (proxy to a FScriptTypedElementList instance).\n * Provides high-level access to groups of elements, including accessing elements that implement specific interfaces.\n * \n * Note: the script list proxy use should be avoided when not using it for the script exposure apis.\n * The weak model for the handles come with an additional cost to the runtime performance and the memory usage.\n */" },
		{ "DisplayName", "Typed Element List" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementListProxy.h" },
		{ "ScriptName", "TypedElementList" },
		{ "ToolTip", "A list of script element handles (proxy to a FScriptTypedElementList instance).\nProvides high-level access to groups of elements, including accessing elements that implement specific interfaces.\n\nNote: the script list proxy use should be avoided when not using it for the script exposure apis.\nThe weak model for the handles come with an additional cost to the runtime performance and the memory usage." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptTypedElementListProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"ScriptTypedElementListProxy",
	nullptr,
	0,
	sizeof(FScriptTypedElementListProxy),
	alignof(FScriptTypedElementListProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.InnerSingleton, Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.InnerSingleton;
}
// End ScriptStruct FScriptTypedElementListProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScriptTypedElementListProxy::StaticStruct, Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::NewStructOps, TEXT("ScriptTypedElementListProxy"), &Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptTypedElementListProxy), 3651675797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_2356458971(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
