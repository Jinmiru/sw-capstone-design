// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimSubsystem_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_Base() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_Base();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimSubsystem_Base
static_assert(std::is_polymorphic<FAnimSubsystem_Base>() == std::is_polymorphic<FAnimSubsystem>(), "USTRUCT FAnimSubsystem_Base cannot be polymorphic unless super FAnimSubsystem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystem_Base;
class UScriptStruct* FAnimSubsystem_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_Base, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystem_Base"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystem_Base>()
{
	return FAnimSubsystem_Base::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Provides common built-in anim node functionality as a subsystem */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_Base.h" },
		{ "ToolTip", "Provides common built-in anim node functionality as a subsystem" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystem_Base>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimSubsystem,
	&NewStructOps,
	"AnimSubsystem_Base",
	nullptr,
	0,
	sizeof(FAnimSubsystem_Base),
	alignof(FAnimSubsystem_Base),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_Base()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.InnerSingleton;
}
// End ScriptStruct FAnimSubsystem_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimSubsystem_Base::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewStructOps, TEXT("AnimSubsystem_Base"), &Z_Registration_Info_UScriptStruct_AnimSubsystem_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystem_Base), 1367556208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_3134155996(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
