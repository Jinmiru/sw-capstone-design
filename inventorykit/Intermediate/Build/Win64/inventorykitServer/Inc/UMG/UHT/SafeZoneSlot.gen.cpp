// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZoneSlot() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UMG_API UClass* Z_Construct_UClass_USafeZoneSlot();
UMG_API UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class USafeZoneSlot
void USafeZoneSlot::GetbIsTitleSafe_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsTitleSafe();
}
void USafeZoneSlot::SetbIsTitleSafe_WrapperImpl(void* Object, const void* InValue)
{
	USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsTitleSafe(Value);
}
void USafeZoneSlot::GetSafeAreaScale_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetSafeAreaScale();
}
void USafeZoneSlot::SetSafeAreaScale_WrapperImpl(void* Object, const void* InValue)
{
	USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetSafeAreaScale(Value);
}
void USafeZoneSlot::GetHAlign_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetHorizontalAlignment();
}
void USafeZoneSlot::SetHAlign_WrapperImpl(void* Object, const void* InValue)
{
	USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
	EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
	Obj->SetHorizontalAlignment(Value);
}
void USafeZoneSlot::GetVAlign_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetVerticalAlignment();
}
void USafeZoneSlot::SetVAlign_WrapperImpl(void* Object, const void* InValue)
{
	USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
	EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
	Obj->SetVerticalAlignment(Value);
}
void USafeZoneSlot::GetPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetPadding();
}
void USafeZoneSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
{
	USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetPadding(Value);
}
void USafeZoneSlot::StaticRegisterNativesUSafeZoneSlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USafeZoneSlot);
UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister()
{
	return USafeZoneSlot::StaticClass();
}
struct Z_Construct_UClass_USafeZoneSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SafeZoneSlot.h" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTitleSafe_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeAreaScale_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HAlign_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VAlign_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsTitleSafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTitleSafe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafeAreaScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HAlign;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VAlign;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeZoneSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_SetBit(void* Obj)
{
	((USafeZoneSlot*)Obj)->bIsTitleSafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe = { "bIsTitleSafe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZoneSlot::SetbIsTitleSafe_WrapperImpl, &USafeZoneSlot::GetbIsTitleSafe_WrapperImpl, 1, sizeof(bool), sizeof(USafeZoneSlot), &Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTitleSafe_MetaData), NewProp_bIsTitleSafe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale = { "SafeAreaScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZoneSlot::SetSafeAreaScale_WrapperImpl, &USafeZoneSlot::GetSafeAreaScale_WrapperImpl, 1, STRUCT_OFFSET(USafeZoneSlot, SafeAreaScale), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeAreaScale_MetaData), NewProp_SafeAreaScale_MetaData) }; // 2986890016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign = { "HAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZoneSlot::SetHAlign_WrapperImpl, &USafeZoneSlot::GetHAlign_WrapperImpl, 1, STRUCT_OFFSET(USafeZoneSlot, HAlign), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HAlign_MetaData), NewProp_HAlign_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign = { "VAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZoneSlot::SetVAlign_WrapperImpl, &USafeZoneSlot::GetVAlign_WrapperImpl, 1, STRUCT_OFFSET(USafeZoneSlot, VAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VAlign_MetaData), NewProp_VAlign_MetaData) }; // 550775363
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZoneSlot::SetPadding_WrapperImpl, &USafeZoneSlot::GetPadding_WrapperImpl, 1, STRUCT_OFFSET(USafeZoneSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USafeZoneSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USafeZoneSlot_Statics::ClassParams = {
	&USafeZoneSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USafeZoneSlot()
{
	if (!Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton, Z_Construct_UClass_USafeZoneSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USafeZoneSlot>()
{
	return USafeZoneSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZoneSlot);
USafeZoneSlot::~USafeZoneSlot() {}
// End Class USafeZoneSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USafeZoneSlot, USafeZoneSlot::StaticClass, TEXT("USafeZoneSlot"), &Z_Registration_Info_UClass_USafeZoneSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USafeZoneSlot), 2175974765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_3507535563(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
