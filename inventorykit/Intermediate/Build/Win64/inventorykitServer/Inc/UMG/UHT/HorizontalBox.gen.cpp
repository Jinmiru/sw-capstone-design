// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizontalBox() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UHorizontalBox();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBoxSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UHorizontalBox Function AddChildToHorizontalBox
struct Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics
{
	struct HorizontalBox_eventAddChildToHorizontalBox_Parms
	{
		UWidget* Content;
		UHorizontalBoxSlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizontalBox_eventAddChildToHorizontalBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizontalBox_eventAddChildToHorizontalBox_Parms, ReturnValue), Z_Construct_UClass_UHorizontalBoxSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizontalBox, nullptr, "AddChildToHorizontalBox", nullptr, nullptr, Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::HorizontalBox_eventAddChildToHorizontalBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::HorizontalBox_eventAddChildToHorizontalBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizontalBox::execAddChildToHorizontalBox)
{
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHorizontalBoxSlot**)Z_Param__Result=P_THIS->AddChildToHorizontalBox(Z_Param_Content);
	P_NATIVE_END;
}
// End Class UHorizontalBox Function AddChildToHorizontalBox

// Begin Class UHorizontalBox
void UHorizontalBox::StaticRegisterNativesUHorizontalBox()
{
	UClass* Class = UHorizontalBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildToHorizontalBox", &UHorizontalBox::execAddChildToHorizontalBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHorizontalBox);
UClass* Z_Construct_UClass_UHorizontalBox_NoRegister()
{
	return UHorizontalBox::StaticClass();
}
struct Z_Construct_UClass_UHorizontalBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows widgets to be laid out in a flow horizontally.\n *\n * * Many Children\n * * Flow Horizontal\n */" },
		{ "IncludePath", "Components/HorizontalBox.h" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBox.h" },
		{ "ShortTooltip", "A layout panel for automatically laying child widgets out horizontally" },
		{ "ToolTip", "Allows widgets to be laid out in a flow horizontally.\n\n* Many Children\n* Flow Horizontal" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox, "AddChildToHorizontalBox" }, // 1992925624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizontalBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHorizontalBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorizontalBox_Statics::ClassParams = {
	&UHorizontalBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UHorizontalBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHorizontalBox()
{
	if (!Z_Registration_Info_UClass_UHorizontalBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorizontalBox.OuterSingleton, Z_Construct_UClass_UHorizontalBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHorizontalBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UHorizontalBox>()
{
	return UHorizontalBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizontalBox);
UHorizontalBox::~UHorizontalBox() {}
// End Class UHorizontalBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHorizontalBox, UHorizontalBox::StaticClass, TEXT("UHorizontalBox"), &Z_Registration_Info_UClass_UHorizontalBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorizontalBox), 3916894575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_3708159603(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
