// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeSpaceConversions.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeSpaceConversions() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_ConvertComponentToLocalSpace
static_assert(std::is_polymorphic<FAnimNode_ConvertComponentToLocalSpace>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ConvertComponentToLocalSpace cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace;
class UScriptStruct* FAnimNode_ConvertComponentToLocalSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ConvertComponentToLocalSpace"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_ConvertComponentToLocalSpace>()
{
	return FAnimNode_ConvertComponentToLocalSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ConvertComponentToLocalSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose = { "ComponentPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ConvertComponentToLocalSpace, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentPose_MetaData), NewProp_ComponentPose_MetaData) }; // 1693320103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_ConvertComponentToLocalSpace",
	Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers),
	sizeof(FAnimNode_ConvertComponentToLocalSpace),
	alignof(FAnimNode_ConvertComponentToLocalSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.InnerSingleton;
}
// End ScriptStruct FAnimNode_ConvertComponentToLocalSpace

// Begin ScriptStruct FAnimNode_ConvertLocalToComponentSpace
static_assert(std::is_polymorphic<FAnimNode_ConvertLocalToComponentSpace>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ConvertLocalToComponentSpace cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace;
class UScriptStruct* FAnimNode_ConvertLocalToComponentSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ConvertLocalToComponentSpace"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_ConvertLocalToComponentSpace>()
{
	return FAnimNode_ConvertLocalToComponentSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ConvertLocalToComponentSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose = { "LocalPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ConvertLocalToComponentSpace, LocalPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPose_MetaData), NewProp_LocalPose_MetaData) }; // 1074011079
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_ConvertLocalToComponentSpace",
	Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers),
	sizeof(FAnimNode_ConvertLocalToComponentSpace),
	alignof(FAnimNode_ConvertLocalToComponentSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.InnerSingleton;
}
// End ScriptStruct FAnimNode_ConvertLocalToComponentSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_ConvertComponentToLocalSpace::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewStructOps, TEXT("AnimNode_ConvertComponentToLocalSpace"), &Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ConvertComponentToLocalSpace), 230056565U) },
		{ FAnimNode_ConvertLocalToComponentSpace::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewStructOps, TEXT("AnimNode_ConvertLocalToComponentSpace"), &Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ConvertLocalToComponentSpace), 660695959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_1637026332(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
