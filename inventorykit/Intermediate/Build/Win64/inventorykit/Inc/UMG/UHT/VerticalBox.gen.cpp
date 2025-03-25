// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerticalBox() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPanelWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UVerticalBox Function AddChildToVerticalBox
struct Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics
{
	struct VerticalBox_eventAddChildToVerticalBox_Parms
	{
		UWidget* Content;
		UVerticalBoxSlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/VerticalBox.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VerticalBox_eventAddChildToVerticalBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VerticalBox_eventAddChildToVerticalBox_Parms, ReturnValue), Z_Construct_UClass_UVerticalBoxSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVerticalBox, nullptr, "AddChildToVerticalBox", nullptr, nullptr, Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::VerticalBox_eventAddChildToVerticalBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::VerticalBox_eventAddChildToVerticalBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVerticalBox::execAddChildToVerticalBox)
{
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVerticalBoxSlot**)Z_Param__Result=P_THIS->AddChildToVerticalBox(Z_Param_Content);
	P_NATIVE_END;
}
// End Class UVerticalBox Function AddChildToVerticalBox

// Begin Class UVerticalBox
void UVerticalBox::StaticRegisterNativesUVerticalBox()
{
	UClass* Class = UVerticalBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildToVerticalBox", &UVerticalBox::execAddChildToVerticalBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVerticalBox);
UClass* Z_Construct_UClass_UVerticalBox_NoRegister()
{
	return UVerticalBox::StaticClass();
}
struct Z_Construct_UClass_UVerticalBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A vertical box widget is a layout panel allowing child widgets to be automatically laid out\n * vertically.\n *\n * * Many Children\n * * Flows Vertical\n */" },
		{ "IncludePath", "Components/VerticalBox.h" },
		{ "ModuleRelativePath", "Public/Components/VerticalBox.h" },
		{ "ShortTooltip", "A layout panel for automatically laying child widgets out vertically" },
		{ "ToolTip", "A vertical box widget is a layout panel allowing child widgets to be automatically laid out\nvertically.\n\n* Many Children\n* Flows Vertical" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox, "AddChildToVerticalBox" }, // 1808364285
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVerticalBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVerticalBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVerticalBox_Statics::ClassParams = {
	&UVerticalBox::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UVerticalBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVerticalBox()
{
	if (!Z_Registration_Info_UClass_UVerticalBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVerticalBox.OuterSingleton, Z_Construct_UClass_UVerticalBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVerticalBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UVerticalBox>()
{
	return UVerticalBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVerticalBox);
UVerticalBox::~UVerticalBox() {}
// End Class UVerticalBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVerticalBox, UVerticalBox::StaticClass, TEXT("UVerticalBox"), &Z_Registration_Info_UClass_UVerticalBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVerticalBox), 3939513877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_1778041132(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
