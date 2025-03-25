// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/FKControlRig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFKControlRig() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig();
CONTROLRIG_API UClass* Z_Construct_UClass_UFKControlRig();
CONTROLRIG_API UClass* Z_Construct_UClass_UFKControlRig_NoRegister();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum EControlRigFKRigExecuteMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode;
static UEnum* EControlRigFKRigExecuteMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigFKRigExecuteMode"));
	}
	return Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigFKRigExecuteMode>()
{
	return EControlRigFKRigExecuteMode_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** Applies the authored pose as an additive layer */" },
		{ "Additive.Name", "EControlRigFKRigExecuteMode::Additive" },
		{ "Additive.ToolTip", "Applies the authored pose as an additive layer" },
		{ "BlueprintType", "true" },
		{ "Direct.Comment", "/** Sets the current pose without the use of offset transforms */" },
		{ "Direct.Name", "EControlRigFKRigExecuteMode::Direct" },
		{ "Direct.ToolTip", "Sets the current pose without the use of offset transforms" },
		{ "IsBlueprintBase", "true" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigFKRigExecuteMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Rigs/FKControlRig.h" },
		{ "Replace.Comment", "/** Replaces the current pose */" },
		{ "Replace.Name", "EControlRigFKRigExecuteMode::Replace" },
		{ "Replace.ToolTip", "Replaces the current pose" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigFKRigExecuteMode::Replace", (int64)EControlRigFKRigExecuteMode::Replace },
		{ "EControlRigFKRigExecuteMode::Additive", (int64)EControlRigFKRigExecuteMode::Additive },
		{ "EControlRigFKRigExecuteMode::Direct", (int64)EControlRigFKRigExecuteMode::Direct },
		{ "EControlRigFKRigExecuteMode::Max", (int64)EControlRigFKRigExecuteMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigFKRigExecuteMode",
	"EControlRigFKRigExecuteMode",
	Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode()
{
	if (!Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton;
}
// End Enum EControlRigFKRigExecuteMode

// Begin Class UFKControlRig
void UFKControlRig::StaticRegisterNativesUFKControlRig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFKControlRig);
UClass* Z_Construct_UClass_UFKControlRig_NoRegister()
{
	return UFKControlRig::StaticClass();
}
struct Z_Construct_UClass_UFKControlRig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Rig that allows override editing per joint */" },
		{ "DisplayName", "FK Control Rig" },
		{ "IncludePath", "Rigs/FKControlRig.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Rigs/FKControlRig.h" },
		{ "ToolTip", "Rig that allows override editing per joint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsControlActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/FKControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/FKControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsControlActive_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IsControlActive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFKControlRig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive_Inner = { "IsControlActive", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive = { "IsControlActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFKControlRig, IsControlActive), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsControlActive_MetaData), NewProp_IsControlActive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode = { "ApplyMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFKControlRig, ApplyMode), Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyMode_MetaData), NewProp_ApplyMode_MetaData) }; // 3141715209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFKControlRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFKControlRig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFKControlRig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControlRig,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFKControlRig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFKControlRig_Statics::ClassParams = {
	&UFKControlRig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFKControlRig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFKControlRig_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFKControlRig_Statics::Class_MetaDataParams), Z_Construct_UClass_UFKControlRig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFKControlRig()
{
	if (!Z_Registration_Info_UClass_UFKControlRig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFKControlRig.OuterSingleton, Z_Construct_UClass_UFKControlRig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFKControlRig.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UFKControlRig>()
{
	return UFKControlRig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFKControlRig);
UFKControlRig::~UFKControlRig() {}
// End Class UFKControlRig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControlRigFKRigExecuteMode_StaticEnum, TEXT("EControlRigFKRigExecuteMode"), &Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3141715209U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFKControlRig, UFKControlRig::StaticClass, TEXT("UFKControlRig"), &Z_Registration_Info_UClass_UFKControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFKControlRig), 3022121096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_2350963297(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
