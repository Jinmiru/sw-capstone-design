// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SubUVAnimation() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENSMSubUVAnimation_Mode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode;
static UEnum* ENSMSubUVAnimation_Mode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENSMSubUVAnimation_Mode"));
	}
	return Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENSMSubUVAnimation_Mode>()
{
	return ENSMSubUVAnimation_Mode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InfiniteLoop.Name", "ENSMSubUVAnimation_Mode::InfiniteLoop" },
		{ "Linear.Name", "ENSMSubUVAnimation_Mode::Linear" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
		{ "Random.Name", "ENSMSubUVAnimation_Mode::Random" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENSMSubUVAnimation_Mode::InfiniteLoop", (int64)ENSMSubUVAnimation_Mode::InfiniteLoop },
		{ "ENSMSubUVAnimation_Mode::Linear", (int64)ENSMSubUVAnimation_Mode::Linear },
		{ "ENSMSubUVAnimation_Mode::Random", (int64)ENSMSubUVAnimation_Mode::Random },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENSMSubUVAnimation_Mode",
	"ENSMSubUVAnimation_Mode",
	Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode()
{
	if (!Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.InnerSingleton, Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.InnerSingleton;
}
// End Enum ENSMSubUVAnimation_Mode

// Begin Class UNiagaraStatelessModule_SubUVAnimation
void UNiagaraStatelessModule_SubUVAnimation::StaticRegisterNativesUNiagaraStatelessModule_SubUVAnimation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_SubUVAnimation);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_NoRegister()
{
	return UNiagaraStatelessModule_SubUVAnimation::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Sub UV Animation" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartFrameRangeOverride_Enabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndFrameRangeOverride_Enabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameRangeOverride_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bStartFrameRangeOverride_Enabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameRangeOverride_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bEndFrameRangeOverride_Enabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopsPerSecond_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//-Note: Main module has PlaybackMode (Loops / FPS) to choose between loops or frames per second\n" },
		{ "EditCondition", "AnimationMode == ENSMSubUVAnimation_Mode::InfiniteLoop" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
		{ "ToolTip", "-Note: Main module has PlaybackMode (Loops / FPS) to choose between loops or frames per second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomChangeInterval_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//-Note: Main module has a few more options\n//UPROPERTY(EditAnywhere, Category = \"Parameters\", meta = (EditConditionHides, EditCondition = \"AnimationMode == ENSMSubUVAnimation_Mode::Linear\"))\n//bool bRandomStartFrame = false;\n//int32 StartFrameOffset = 0;\n//float LoopupIndexScale = 0.0f;\n" },
		{ "EditCondition", "AnimationMode == ENSMSubUVAnimation_Mode::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h" },
		{ "ToolTip", "-Note: Main module has a few more options\nUPROPERTY(EditAnywhere, Category = \"Parameters\", meta = (EditConditionHides, EditCondition = \"AnimationMode == ENSMSubUVAnimation_Mode::Linear\"))\nbool bRandomStartFrame = false;\nint32 StartFrameOffset = 0;\nfloat LoopupIndexScale = 0.0f;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
	static void NewProp_bStartFrameRangeOverride_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFrameRangeOverride_Enabled;
	static void NewProp_bEndFrameRangeOverride_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndFrameRangeOverride_Enabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrameRangeOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrameRangeOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AnimationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopsPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomChangeInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_SubUVAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SubUVAnimation, NumFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFrames_MetaData), NewProp_NumFrames_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_bStartFrameRangeOverride_Enabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_SubUVAnimation*)Obj)->bStartFrameRangeOverride_Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_bStartFrameRangeOverride_Enabled = { "bStartFrameRangeOverride_Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_SubUVAnimation), &Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_bStartFrameRangeOverride_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartFrameRangeOverride_Enabled_MetaData), NewProp_bStartFrameRangeOverride_Enabled_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_bEndFrameRangeOverride_Enabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_SubUVAnimation*)Obj)->bEndFrameRangeOverride_Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_bEndFrameRangeOverride_Enabled = { "bEndFrameRangeOverride_Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_SubUVAnimation), &Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_bEndFrameRangeOverride_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndFrameRangeOverride_Enabled_MetaData), NewProp_bEndFrameRangeOverride_Enabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_StartFrameRangeOverride = { "StartFrameRangeOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SubUVAnimation, StartFrameRangeOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameRangeOverride_MetaData), NewProp_StartFrameRangeOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_EndFrameRangeOverride = { "EndFrameRangeOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SubUVAnimation, EndFrameRangeOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrameRangeOverride_MetaData), NewProp_EndFrameRangeOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_AnimationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_AnimationMode = { "AnimationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SubUVAnimation, AnimationMode), Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationMode_MetaData), NewProp_AnimationMode_MetaData) }; // 355572543
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_LoopsPerSecond = { "LoopsPerSecond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SubUVAnimation, LoopsPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopsPerSecond_MetaData), NewProp_LoopsPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_RandomChangeInterval = { "RandomChangeInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SubUVAnimation, RandomChangeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomChangeInterval_MetaData), NewProp_RandomChangeInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_NumFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_bStartFrameRangeOverride_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_bEndFrameRangeOverride_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_StartFrameRangeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_EndFrameRangeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_AnimationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_AnimationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_LoopsPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::NewProp_RandomChangeInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::ClassParams = {
	&UNiagaraStatelessModule_SubUVAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_SubUVAnimation>()
{
	return UNiagaraStatelessModule_SubUVAnimation::StaticClass();
}
UNiagaraStatelessModule_SubUVAnimation::UNiagaraStatelessModule_SubUVAnimation() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_SubUVAnimation);
UNiagaraStatelessModule_SubUVAnimation::~UNiagaraStatelessModule_SubUVAnimation() {}
// End Class UNiagaraStatelessModule_SubUVAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENSMSubUVAnimation_Mode_StaticEnum, TEXT("ENSMSubUVAnimation_Mode"), &Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 355572543U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation, UNiagaraStatelessModule_SubUVAnimation::StaticClass, TEXT("UNiagaraStatelessModule_SubUVAnimation"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_SubUVAnimation), 1769337857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_524029282(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
