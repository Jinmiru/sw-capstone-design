// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Base() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UHapticFeedbackEffect_Base
void UHapticFeedbackEffect_Base::StaticRegisterNativesUHapticFeedbackEffect_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHapticFeedbackEffect_Base);
UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister()
{
	return UHapticFeedbackEffect_Base::StaticClass();
}
struct Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_Base.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::ClassParams = {
	&UHapticFeedbackEffect_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base()
{
	if (!Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.OuterSingleton, Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_Base>()
{
	return UHapticFeedbackEffect_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Base);
UHapticFeedbackEffect_Base::~UHapticFeedbackEffect_Base() {}
// End Class UHapticFeedbackEffect_Base

// Begin ScriptStruct FActiveHapticFeedbackEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveHapticFeedbackEffect;
class UScriptStruct* FActiveHapticFeedbackEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveHapticFeedbackEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveHapticFeedbackEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActiveHapticFeedbackEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveHapticFeedbackEffect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActiveHapticFeedbackEffect>()
{
	return FActiveHapticFeedbackEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticEffect_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveHapticFeedbackEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveHapticFeedbackEffect, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticEffect_MetaData), NewProp_HapticEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewProp_HapticEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActiveHapticFeedbackEffect",
	Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::PropPointers),
	sizeof(FActiveHapticFeedbackEffect),
	alignof(FActiveHapticFeedbackEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveHapticFeedbackEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveHapticFeedbackEffect.InnerSingleton, Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveHapticFeedbackEffect.InnerSingleton;
}
// End ScriptStruct FActiveHapticFeedbackEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveHapticFeedbackEffect::StaticStruct, Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewStructOps, TEXT("ActiveHapticFeedbackEffect"), &Z_Registration_Info_UScriptStruct_ActiveHapticFeedbackEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveHapticFeedbackEffect), 2539434034U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHapticFeedbackEffect_Base, UHapticFeedbackEffect_Base::StaticClass, TEXT("UHapticFeedbackEffect_Base"), &Z_Registration_Info_UClass_UHapticFeedbackEffect_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHapticFeedbackEffect_Base), 3103160262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_1045389919(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
