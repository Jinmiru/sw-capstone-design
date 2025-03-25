// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/StackBoxSlot.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStackBoxSlot() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UMG_API UClass* Z_Construct_UClass_UStackBoxSlot();
UMG_API UClass* Z_Construct_UClass_UStackBoxSlot_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UStackBoxSlot
void UStackBoxSlot::GetPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const UStackBoxSlot* Obj = (const UStackBoxSlot*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetPadding();
}
void UStackBoxSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
{
	UStackBoxSlot* Obj = (UStackBoxSlot*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetPadding(Value);
}
void UStackBoxSlot::GetSize_WrapperImpl(const void* Object, void* OutValue)
{
	const UStackBoxSlot* Obj = (const UStackBoxSlot*)Object;
	FSlateChildSize& Result = *(FSlateChildSize*)OutValue;
	Result = (FSlateChildSize)Obj->GetSize();
}
void UStackBoxSlot::SetSize_WrapperImpl(void* Object, const void* InValue)
{
	UStackBoxSlot* Obj = (UStackBoxSlot*)Object;
	FSlateChildSize& Value = *(FSlateChildSize*)InValue;
	Obj->SetSize(Value);
}
void UStackBoxSlot::GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue)
{
	const UStackBoxSlot* Obj = (const UStackBoxSlot*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetHorizontalAlignment();
}
void UStackBoxSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UStackBoxSlot* Obj = (UStackBoxSlot*)Object;
	EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
	Obj->SetHorizontalAlignment(Value);
}
void UStackBoxSlot::GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue)
{
	const UStackBoxSlot* Obj = (const UStackBoxSlot*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetVerticalAlignment();
}
void UStackBoxSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UStackBoxSlot* Obj = (UStackBoxSlot*)Object;
	EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
	Obj->SetVerticalAlignment(Value);
}
void UStackBoxSlot::StaticRegisterNativesUStackBoxSlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStackBoxSlot);
UClass* Z_Construct_UClass_UStackBoxSlot_NoRegister()
{
	return UStackBoxSlot::StaticClass();
}
struct Z_Construct_UClass_UStackBoxSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The Slot for the UStackBox, contains the widget that is flowed vertically or horizontally. */" },
		{ "IncludePath", "Components/StackBoxSlot.h" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "The Slot for the UStackBox, contains the widget that is flowed vertically or horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout|Stack Box Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout|Stack Box Slot" },
		{ "Comment", "/** How much space this slot should occupy in the direction of the panel. */" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "How much space this slot should occupy in the direction of the panel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout|Stack Box Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout|Stack Box Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStackBoxSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UStackBoxSlot::SetPadding_WrapperImpl, &UStackBoxSlot::GetPadding_WrapperImpl, 1, STRUCT_OFFSET(UStackBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UStackBoxSlot::SetSize_WrapperImpl, &UStackBoxSlot::GetSize_WrapperImpl, 1, STRUCT_OFFSET(UStackBoxSlot, Size), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) }; // 1279028364
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UStackBoxSlot::SetHorizontalAlignment_WrapperImpl, &UStackBoxSlot::GetHorizontalAlignment_WrapperImpl, 1, STRUCT_OFFSET(UStackBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UStackBoxSlot::SetVerticalAlignment_WrapperImpl, &UStackBoxSlot::GetVerticalAlignment_WrapperImpl, 1, STRUCT_OFFSET(UStackBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStackBoxSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_VerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStackBoxSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStackBoxSlot_Statics::ClassParams = {
	&UStackBoxSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStackBoxSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UStackBoxSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStackBoxSlot()
{
	if (!Z_Registration_Info_UClass_UStackBoxSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStackBoxSlot.OuterSingleton, Z_Construct_UClass_UStackBoxSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStackBoxSlot.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UStackBoxSlot>()
{
	return UStackBoxSlot::StaticClass();
}
UStackBoxSlot::UStackBoxSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStackBoxSlot);
UStackBoxSlot::~UStackBoxSlot() {}
// End Class UStackBoxSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStackBoxSlot, UStackBoxSlot::StaticClass, TEXT("UStackBoxSlot"), &Z_Registration_Info_UClass_UStackBoxSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStackBoxSlot), 3598393936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_2336661443(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
