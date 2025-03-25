// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasPanel() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UCanvasPanel();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UCanvasPanel Function AddChildToCanvas
struct Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics
{
	struct CanvasPanel_eventAddChildToCanvas_Parms
	{
		UWidget* Content;
		UCanvasPanelSlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canvas Panel" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanel.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanel_eventAddChildToCanvas_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanel_eventAddChildToCanvas_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanel, nullptr, "AddChildToCanvas", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::CanvasPanel_eventAddChildToCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::CanvasPanel_eventAddChildToCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanel::execAddChildToCanvas)
{
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCanvasPanelSlot**)Z_Param__Result=P_THIS->AddChildToCanvas(Z_Param_Content);
	P_NATIVE_END;
}
// End Class UCanvasPanel Function AddChildToCanvas

// Begin Class UCanvasPanel
void UCanvasPanel::StaticRegisterNativesUCanvasPanel()
{
	UClass* Class = UCanvasPanel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildToCanvas", &UCanvasPanel::execAddChildToCanvas },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCanvasPanel);
UClass* Z_Construct_UClass_UCanvasPanel_NoRegister()
{
	return UCanvasPanel::StaticClass();
}
struct Z_Construct_UClass_UCanvasPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The canvas panel is a designer friendly panel that allows widgets to be laid out at arbitrary \n * locations, anchored and z-ordered with other children of the canvas.  The canvas is a great widget\n * for manual layout, but bad when you want to procedurally just generate widgets and place them in a \n * container (unless you want absolute layout).\n *\n * * Many Children\n * * Absolute Layout\n * * Anchors\n */" },
		{ "IncludePath", "Components/CanvasPanel.h" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanel.h" },
		{ "ShortTooltip", "A designer-friendly panel useful for laying out top-level widgets. Use sparingly." },
		{ "ToolTip", "The canvas panel is a designer friendly panel that allows widgets to be laid out at arbitrary\nlocations, anchored and z-ordered with other children of the canvas.  The canvas is a great widget\nfor manual layout, but bad when you want to procedurally just generate widgets and place them in a\ncontainer (unless you want absolute layout).\n\n* Many Children\n* Absolute Layout\n* Anchors" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas, "AddChildToCanvas" }, // 379006708
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasPanel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCanvasPanel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanvasPanel_Statics::ClassParams = {
	&UCanvasPanel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanvasPanel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanvasPanel()
{
	if (!Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton, Z_Construct_UClass_UCanvasPanel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UCanvasPanel>()
{
	return UCanvasPanel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasPanel);
UCanvasPanel::~UCanvasPanel() {}
// End Class UCanvasPanel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanvasPanel, UCanvasPanel::StaticClass, TEXT("UCanvasPanel"), &Z_Registration_Info_UClass_UCanvasPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanvasPanel), 3114241385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_279045801(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
