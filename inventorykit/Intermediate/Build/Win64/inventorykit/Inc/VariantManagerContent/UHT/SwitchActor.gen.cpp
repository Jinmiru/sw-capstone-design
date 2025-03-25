// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/SwitchActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ASwitchActor();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ASwitchActor_NoRegister();
// End Cross Module References

// Begin Class ASwitchActor Function GetOptions
struct Z_Construct_UFunction_ASwitchActor_GetOptions_Statics
{
	struct SwitchActor_eventGetOptions_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SwitchActor" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ToolTip", "Returns the child actors that are available options, in a fixed order that may differ from the one displayed in the world outliner" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwitchActor_eventGetOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchActor, nullptr, "GetOptions", nullptr, nullptr, Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::SwitchActor_eventGetOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::SwitchActor_eventGetOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASwitchActor_GetOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASwitchActor::execGetOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetOptions();
	P_NATIVE_END;
}
// End Class ASwitchActor Function GetOptions

// Begin Class ASwitchActor Function GetSelectedOption
struct Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics
{
	struct SwitchActor_eventGetSelectedOption_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SwitchActor" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ToolTip", "If we have exactly one child actor visible, it will return a pointer to it. Returns nullptr otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwitchActor_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchActor, nullptr, "GetSelectedOption", nullptr, nullptr, Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::SwitchActor_eventGetSelectedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::SwitchActor_eventGetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASwitchActor_GetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASwitchActor::execGetSelectedOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedOption();
	P_NATIVE_END;
}
// End Class ASwitchActor Function GetSelectedOption

// Begin Class ASwitchActor Function SelectOption
struct Z_Construct_UFunction_ASwitchActor_SelectOption_Statics
{
	struct SwitchActor_eventSelectOption_Parms
	{
		int32 OptionIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SwitchActor" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ToolTip", "Select one of the available options by index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwitchActor_eventSelectOption_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::NewProp_OptionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchActor, nullptr, "SelectOption", nullptr, nullptr, Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::SwitchActor_eventSelectOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::SwitchActor_eventSelectOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASwitchActor_SelectOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASwitchActor::execSelectOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectOption(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// End Class ASwitchActor Function SelectOption

// Begin Class ASwitchActor
void ASwitchActor::StaticRegisterNativesASwitchActor()
{
	UClass* Class = ASwitchActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOptions", &ASwitchActor::execGetOptions },
		{ "GetSelectedOption", &ASwitchActor::execGetSelectedOption },
		{ "SelectOption", &ASwitchActor::execSelectOption },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASwitchActor);
UClass* Z_Construct_UClass_ASwitchActor_NoRegister()
{
	return ASwitchActor::StaticClass();
}
struct Z_Construct_UClass_ASwitchActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Switch Actor allows quickly toggling the visibility of its child actors so that\n * only one is visible at a time. It can also be captured with the Variant Manager\n * to expose this capability as a property capture\n */" },
		{ "IncludePath", "SwitchActor.h" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Switch Actor allows quickly toggling the visibility of its child actors so that\nonly one is visible at a time. It can also be captured with the Variant Manager\nto expose this capability as a property capture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "SwitchActor" },
		{ "Comment", "// Exposing our root component like this allows manual Mobility control on the details panel\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ToolTip", "Exposing our root component like this allows manual Mobility control on the details panel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSelectedOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastSelectedOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwitchActor_GetOptions, "GetOptions" }, // 2997736563
		{ &Z_Construct_UFunction_ASwitchActor_GetSelectedOption, "GetSelectedOption" }, // 2333394244
		{ &Z_Construct_UFunction_ASwitchActor_SelectOption, "SelectOption" }, // 2555426669
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwitchActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwitchActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASwitchActor_Statics::NewProp_LastSelectedOption = { "LastSelectedOption", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwitchActor, LastSelectedOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSelectedOption_MetaData), NewProp_LastSelectedOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwitchActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchActor_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchActor_Statics::NewProp_LastSelectedOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASwitchActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwitchActor_Statics::ClassParams = {
	&ASwitchActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASwitchActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASwitchActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASwitchActor()
{
	if (!Z_Registration_Info_UClass_ASwitchActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwitchActor.OuterSingleton, Z_Construct_UClass_ASwitchActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASwitchActor.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ASwitchActor>()
{
	return ASwitchActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASwitchActor);
ASwitchActor::~ASwitchActor() {}
// End Class ASwitchActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASwitchActor, ASwitchActor::StaticClass, TEXT("ASwitchActor"), &Z_Registration_Info_UClass_ASwitchActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwitchActor), 2150526118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_525254888(TEXT("/Script/VariantManagerContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
