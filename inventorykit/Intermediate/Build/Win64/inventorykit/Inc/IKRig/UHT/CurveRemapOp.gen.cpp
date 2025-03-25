// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Retargeter/RetargetOps/CurveRemapOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveRemapOp() {}

// Begin Cross Module References
IKRIG_API UClass* Z_Construct_UClass_UCurveRemapOp();
IKRIG_API UClass* Z_Construct_UClass_UCurveRemapOp_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpBase();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCurveRemapPair();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin ScriptStruct FCurveRemapPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveRemapPair;
class UScriptStruct* FCurveRemapPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveRemapPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveRemapPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveRemapPair, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("CurveRemapPair"));
	}
	return Z_Registration_Info_UScriptStruct_CurveRemapPair.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FCurveRemapPair>()
{
	return FCurveRemapPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurveRemapPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/CurveRemapOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The curve name on the SOURCE skeletal mesh to copy animation data from.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/CurveRemapOp.h" },
		{ "ToolTip", "The curve name on the SOURCE skeletal mesh to copy animation data from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The curve name on the TARGET skeletal mesh to receive animation data.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/CurveRemapOp.h" },
		{ "ToolTip", "The curve name on the TARGET skeletal mesh to receive animation data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceCurve;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveRemapPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveRemapPair_Statics::NewProp_SourceCurve = { "SourceCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveRemapPair, SourceCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCurve_MetaData), NewProp_SourceCurve_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveRemapPair_Statics::NewProp_TargetCurve = { "TargetCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveRemapPair, TargetCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCurve_MetaData), NewProp_TargetCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveRemapPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveRemapPair_Statics::NewProp_SourceCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveRemapPair_Statics::NewProp_TargetCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveRemapPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveRemapPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"CurveRemapPair",
	Z_Construct_UScriptStruct_FCurveRemapPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveRemapPair_Statics::PropPointers),
	sizeof(FCurveRemapPair),
	alignof(FCurveRemapPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveRemapPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveRemapPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurveRemapPair()
{
	if (!Z_Registration_Info_UScriptStruct_CurveRemapPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveRemapPair.InnerSingleton, Z_Construct_UScriptStruct_FCurveRemapPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurveRemapPair.InnerSingleton;
}
// End ScriptStruct FCurveRemapPair

// Begin Class UCurveRemapOp
void UCurveRemapOp::StaticRegisterNativesUCurveRemapOp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveRemapOp);
UClass* Z_Construct_UClass_UCurveRemapOp_NoRegister()
{
	return UCurveRemapOp::StaticClass();
}
struct Z_Construct_UClass_UCurveRemapOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Retargeter/RetargetOps/CurveRemapOp.h" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/CurveRemapOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvesToRemap_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// Add pairs of Source/Target curve names to remap. While retargeting, the animation from the source curves\n// will be redirected to the curves on the target skeletal meshes. Can be used to drive, blendshapes or other downstream systems.\n// NOTE: By default the IK Retargeter will automatically copy all equivalently named curves from the source to the\n// target. Remapping with this op is only necessary when the target curve name(s) are different.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/CurveRemapOp.h" },
		{ "ToolTip", "Add pairs of Source/Target curve names to remap. While retargeting, the animation from the source curves\nwill be redirected to the curves on the target skeletal meshes. Can be used to drive, blendshapes or other downstream systems.\nNOTE: By default the IK Retargeter will automatically copy all equivalently named curves from the source to the\ntarget. Remapping with this op is only necessary when the target curve name(s) are different." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyAllSourceCurves_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// This setting only applies to all curves when exporting retargeted animations.\n// True: all source curves are copied to the target animation sequence asset.\n// False: only remapped curves are left on the target animation sequence asset.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/CurveRemapOp.h" },
		{ "ToolTip", "This setting only applies to all curves when exporting retargeted animations.\nTrue: all source curves are copied to the target animation sequence asset.\nFalse: only remapped curves are left on the target animation sequence asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvesToRemap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvesToRemap;
	static void NewProp_bCopyAllSourceCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyAllSourceCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveRemapOp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_CurvesToRemap_Inner = { "CurvesToRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurveRemapPair, METADATA_PARAMS(0, nullptr) }; // 2127003267
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_CurvesToRemap = { "CurvesToRemap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveRemapOp, CurvesToRemap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvesToRemap_MetaData), NewProp_CurvesToRemap_MetaData) }; // 2127003267
void Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_bCopyAllSourceCurves_SetBit(void* Obj)
{
	((UCurveRemapOp*)Obj)->bCopyAllSourceCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_bCopyAllSourceCurves = { "bCopyAllSourceCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCurveRemapOp), &Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_bCopyAllSourceCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyAllSourceCurves_MetaData), NewProp_bCopyAllSourceCurves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveRemapOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_CurvesToRemap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_CurvesToRemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_bCopyAllSourceCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveRemapOp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurveRemapOp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URetargetOpBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveRemapOp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveRemapOp_Statics::ClassParams = {
	&UCurveRemapOp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCurveRemapOp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurveRemapOp_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveRemapOp_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveRemapOp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveRemapOp()
{
	if (!Z_Registration_Info_UClass_UCurveRemapOp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveRemapOp.OuterSingleton, Z_Construct_UClass_UCurveRemapOp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveRemapOp.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UCurveRemapOp>()
{
	return UCurveRemapOp::StaticClass();
}
UCurveRemapOp::UCurveRemapOp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveRemapOp);
UCurveRemapOp::~UCurveRemapOp() {}
// End Class UCurveRemapOp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCurveRemapPair::StaticStruct, Z_Construct_UScriptStruct_FCurveRemapPair_Statics::NewStructOps, TEXT("CurveRemapPair"), &Z_Registration_Info_UScriptStruct_CurveRemapPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveRemapPair), 2127003267U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveRemapOp, UCurveRemapOp::StaticClass, TEXT("UCurveRemapOp"), &Z_Registration_Info_UClass_UCurveRemapOp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveRemapOp), 975356114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_1013908087(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
