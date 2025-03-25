// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlay() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UOverlay();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlaySlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UOverlay Function AddChildToOverlay
struct Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics
{
	struct Overlay_eventAddChildToOverlay_Parms
	{
		UWidget* Content;
		UOverlaySlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Overlay.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Overlay_eventAddChildToOverlay_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Overlay_eventAddChildToOverlay_Parms, ReturnValue), Z_Construct_UClass_UOverlaySlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlay, nullptr, "AddChildToOverlay", nullptr, nullptr, Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::Overlay_eventAddChildToOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::Overlay_eventAddChildToOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOverlay_AddChildToOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOverlay::execAddChildToOverlay)
{
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOverlaySlot**)Z_Param__Result=P_THIS->AddChildToOverlay(Z_Param_Content);
	P_NATIVE_END;
}
// End Class UOverlay Function AddChildToOverlay

// Begin Class UOverlay Function ReplaceOverlayChildAt
struct Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics
{
	struct Overlay_eventReplaceOverlayChildAt_Parms
	{
		int32 Index;
		UWidget* Content;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "Comment", "/** Replace the widget at the given index it with a different widget. */" },
		{ "ModuleRelativePath", "Public/Components/Overlay.h" },
		{ "ToolTip", "Replace the widget at the given index it with a different widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Overlay_eventReplaceOverlayChildAt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Overlay_eventReplaceOverlayChildAt_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
void Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Overlay_eventReplaceOverlayChildAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Overlay_eventReplaceOverlayChildAt_Parms), &Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlay, nullptr, "ReplaceOverlayChildAt", nullptr, nullptr, Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::Overlay_eventReplaceOverlayChildAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::Overlay_eventReplaceOverlayChildAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOverlay::execReplaceOverlayChildAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReplaceOverlayChildAt(Z_Param_Index,Z_Param_Content);
	P_NATIVE_END;
}
// End Class UOverlay Function ReplaceOverlayChildAt

// Begin Class UOverlay
void UOverlay::StaticRegisterNativesUOverlay()
{
	UClass* Class = UOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildToOverlay", &UOverlay::execAddChildToOverlay },
		{ "ReplaceOverlayChildAt", &UOverlay::execReplaceOverlayChildAt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlay);
UClass* Z_Construct_UClass_UOverlay_NoRegister()
{
	return UOverlay::StaticClass();
}
struct Z_Construct_UClass_UOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows widgets to be stacked on top of each other, uses simple flow layout for content on each layer.\n */" },
		{ "IncludePath", "Components/Overlay.h" },
		{ "ModuleRelativePath", "Public/Components/Overlay.h" },
		{ "ToolTip", "Allows widgets to be stacked on top of each other, uses simple flow layout for content on each layer." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverlay_AddChildToOverlay, "AddChildToOverlay" }, // 3618997730
		{ &Z_Construct_UFunction_UOverlay_ReplaceOverlayChildAt, "ReplaceOverlayChildAt" }, // 3715574892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlay_Statics::ClassParams = {
	&UOverlay::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOverlay()
{
	if (!Z_Registration_Info_UClass_UOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlay.OuterSingleton, Z_Construct_UClass_UOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOverlay.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UOverlay>()
{
	return UOverlay::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlay);
UOverlay::~UOverlay() {}
// End Class UOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOverlay, UOverlay::StaticClass, TEXT("UOverlay"), &Z_Registration_Info_UClass_UOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlay), 697131397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_1774710045(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
