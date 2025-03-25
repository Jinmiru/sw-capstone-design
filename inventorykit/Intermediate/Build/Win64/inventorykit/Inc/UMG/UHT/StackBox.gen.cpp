// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/StackBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStackBox() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
UMG_API UClass* Z_Construct_UClass_UPanelWidget();
UMG_API UClass* Z_Construct_UClass_UStackBox();
UMG_API UClass* Z_Construct_UClass_UStackBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UStackBoxSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UStackBox Function AddChildToStackBox
struct Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics
{
	struct StackBox_eventAddChildToStackBox_Parms
	{
		UWidget* Content;
		UStackBoxSlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "Comment", "/** Adds a new child widget to the container. */" },
		{ "ModuleRelativePath", "Public/Components/StackBox.h" },
		{ "ToolTip", "Adds a new child widget to the container." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StackBox_eventAddChildToStackBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StackBox_eventAddChildToStackBox_Parms, ReturnValue), Z_Construct_UClass_UStackBoxSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStackBox, nullptr, "AddChildToStackBox", nullptr, nullptr, Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::StackBox_eventAddChildToStackBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::StackBox_eventAddChildToStackBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStackBox_AddChildToStackBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStackBox::execAddChildToStackBox)
{
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStackBoxSlot**)Z_Param__Result=P_THIS->AddChildToStackBox(Z_Param_Content);
	P_NATIVE_END;
}
// End Class UStackBox Function AddChildToStackBox

// Begin Class UStackBox Function ReplaceStackBoxChildAt
struct Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics
{
	struct StackBox_eventReplaceStackBoxChildAt_Parms
	{
		int32 Index;
		UWidget* Content;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "Comment", "/** Replace the widget at the given index it with a different widget. */" },
		{ "ModuleRelativePath", "Public/Components/StackBox.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StackBox_eventReplaceStackBoxChildAt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StackBox_eventReplaceStackBoxChildAt_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
void Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StackBox_eventReplaceStackBoxChildAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StackBox_eventReplaceStackBoxChildAt_Parms), &Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStackBox, nullptr, "ReplaceStackBoxChildAt", nullptr, nullptr, Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::StackBox_eventReplaceStackBoxChildAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::StackBox_eventReplaceStackBoxChildAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStackBox::execReplaceStackBoxChildAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReplaceStackBoxChildAt(Z_Param_Index,Z_Param_Content);
	P_NATIVE_END;
}
// End Class UStackBox Function ReplaceStackBoxChildAt

// Begin Class UStackBox
void UStackBox::GetOrientation_WrapperImpl(const void* Object, void* OutValue)
{
	const UStackBox* Obj = (const UStackBox*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetOrientation();
}
void UStackBox::SetOrientation_WrapperImpl(void* Object, const void* InValue)
{
	UStackBox* Obj = (UStackBox*)Object;
	EOrientation Value = (EOrientation)*(uint8*)InValue;
	Obj->SetOrientation(Value);
}
void UStackBox::StaticRegisterNativesUStackBox()
{
	UClass* Class = UStackBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildToStackBox", &UStackBox::execAddChildToStackBox },
		{ "ReplaceStackBoxChildAt", &UStackBox::execReplaceStackBoxChildAt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStackBox);
UClass* Z_Construct_UClass_UStackBox_NoRegister()
{
	return UStackBox::StaticClass();
}
struct Z_Construct_UClass_UStackBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A stack box widget is a layout panel allowing child widgets to be automatically laid out\n * vertically or horizontally.\n *\n * * Many Children\n * * Flows Vertical or Horizontal\n */" },
		{ "IncludePath", "Components/StackBox.h" },
		{ "ModuleRelativePath", "Public/Components/StackBox.h" },
		{ "ShortTooltip", "A layout panel for automatically laying child widgets out vertically or horizontally" },
		{ "ToolTip", "A stack box widget is a layout panel allowing child widgets to be automatically laid out\nvertically or horizontally.\n\n* Many Children\n* Flows Vertical or Horizontal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behavior" },
		{ "Comment", "/** The orientation of the stack box. */" },
		{ "ModuleRelativePath", "Public/Components/StackBox.h" },
		{ "ToolTip", "The orientation of the stack box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStackBox_AddChildToStackBox, "AddChildToStackBox" }, // 707989106
		{ &Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt, "ReplaceStackBoxChildAt" }, // 2419929700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStackBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStackBox_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UStackBox::SetOrientation_WrapperImpl, &UStackBox::GetOrientation_WrapperImpl, 1, STRUCT_OFFSET(UStackBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStackBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBox_Statics::NewProp_Orientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStackBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStackBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStackBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStackBox_Statics::ClassParams = {
	&UStackBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStackBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStackBox_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStackBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UStackBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStackBox()
{
	if (!Z_Registration_Info_UClass_UStackBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStackBox.OuterSingleton, Z_Construct_UClass_UStackBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStackBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UStackBox>()
{
	return UStackBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStackBox);
UStackBox::~UStackBox() {}
// End Class UStackBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStackBox, UStackBox::StaticClass, TEXT("UStackBox"), &Z_Registration_Info_UClass_UStackBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStackBox), 2510946680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_3014057197(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
