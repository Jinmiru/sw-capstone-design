// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/BoneSocketReference.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneSocketReference() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSocketReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSocketReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocketReference;
class UScriptStruct* FSocketReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocketReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocketReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SocketReference"));
	}
	return Z_Registration_Info_UScriptStruct_SocketReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSocketReference>()
{
	return FSocketReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSocketReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "FSocketReference" },
		{ "Comment", "/** Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. **/" },
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
		{ "ToolTip", "Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocketReference_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketReference, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocketReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketReference_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocketReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SocketReference",
	Z_Construct_UScriptStruct_FSocketReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketReference_Statics::PropPointers),
	sizeof(FSocketReference),
	alignof(FSocketReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSocketReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSocketReference()
{
	if (!Z_Registration_Info_UScriptStruct_SocketReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocketReference.InnerSingleton, Z_Construct_UScriptStruct_FSocketReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SocketReference.InnerSingleton;
}
// End ScriptStruct FSocketReference

// Begin ScriptStruct FBoneSocketTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneSocketTarget;
class UScriptStruct* FBoneSocketTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneSocketTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneSocketTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneSocketTarget, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneSocketTarget"));
	}
	return Z_Registration_Info_UScriptStruct_BoneSocketTarget.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneSocketTarget>()
{
	return FBoneSocketTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneSocketTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSocket_MetaData[] = {
		{ "Category", "FBoneSocketTarget" },
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[] = {
		{ "Category", "FBoneSocketTarget" },
		{ "EditCondition", "!bUseSocket" },
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketReference_MetaData[] = {
		{ "Category", "FBoneSocketTarget" },
		{ "EditCondition", "bUseSocket" },
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseSocket_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneSocketTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket_SetBit(void* Obj)
{
	((FBoneSocketTarget*)Obj)->bUseSocket = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket = { "bUseSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoneSocketTarget), &Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSocket_MetaData), NewProp_bUseSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSocketTarget, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneReference_MetaData), NewProp_BoneReference_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_SocketReference = { "SocketReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSocketTarget, SocketReference), Z_Construct_UScriptStruct_FSocketReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketReference_MetaData), NewProp_SocketReference_MetaData) }; // 1964059700
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_BoneReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_SocketReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BoneSocketTarget",
	Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::PropPointers),
	sizeof(FBoneSocketTarget),
	alignof(FBoneSocketTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget()
{
	if (!Z_Registration_Info_UScriptStruct_BoneSocketTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneSocketTarget.InnerSingleton, Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneSocketTarget.InnerSingleton;
}
// End ScriptStruct FBoneSocketTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSocketReference::StaticStruct, Z_Construct_UScriptStruct_FSocketReference_Statics::NewStructOps, TEXT("SocketReference"), &Z_Registration_Info_UScriptStruct_SocketReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocketReference), 1964059700U) },
		{ FBoneSocketTarget::StaticStruct, Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewStructOps, TEXT("BoneSocketTarget"), &Z_Registration_Info_UScriptStruct_BoneSocketTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneSocketTarget), 2425971742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_1375605874(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
