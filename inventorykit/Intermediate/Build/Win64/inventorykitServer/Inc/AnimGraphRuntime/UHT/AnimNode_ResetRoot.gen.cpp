// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ResetRoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ResetRoot() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ResetRoot();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_ResetRoot
static_assert(std::is_polymorphic<FAnimNode_ResetRoot>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ResetRoot cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ResetRoot;
class UScriptStruct* FAnimNode_ResetRoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ResetRoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ResetRoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ResetRoot, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ResetRoot"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ResetRoot.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ResetRoot>()
{
	return FAnimNode_ResetRoot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ResetRoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ResetRoot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ResetRoot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ResetRoot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_ResetRoot",
	nullptr,
	0,
	sizeof(FAnimNode_ResetRoot),
	alignof(FAnimNode_ResetRoot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ResetRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ResetRoot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ResetRoot()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ResetRoot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ResetRoot.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ResetRoot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ResetRoot.InnerSingleton;
}
// End ScriptStruct FAnimNode_ResetRoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ResetRoot_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_ResetRoot::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ResetRoot_Statics::NewStructOps, TEXT("AnimNode_ResetRoot"), &Z_Registration_Info_UScriptStruct_AnimNode_ResetRoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ResetRoot), 4194359886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ResetRoot_h_3678295664(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ResetRoot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ResetRoot_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
