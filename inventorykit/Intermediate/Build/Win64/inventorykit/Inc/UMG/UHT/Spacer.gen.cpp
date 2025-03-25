// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpacer() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UMG_API UClass* Z_Construct_UClass_USpacer();
UMG_API UClass* Z_Construct_UClass_USpacer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class USpacer Function SetSize
struct Z_Construct_UFunction_USpacer_SetSize_Statics
{
	struct Spacer_eventSetSize_Parms
	{
		FVector2D InSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the size of the spacer */" },
		{ "ModuleRelativePath", "Public/Components/Spacer.h" },
		{ "ToolTip", "Sets the size of the spacer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpacer_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spacer_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpacer_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacer_SetSize_Statics::NewProp_InSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacer_SetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpacer_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpacer, nullptr, "SetSize", nullptr, nullptr, Z_Construct_UFunction_USpacer_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpacer_SetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpacer_SetSize_Statics::Spacer_eventSetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacer_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpacer_SetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpacer_SetSize_Statics::Spacer_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpacer_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpacer_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpacer::execSetSize)
{
	P_GET_STRUCT(FVector2D,Z_Param_InSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSize(Z_Param_InSize);
	P_NATIVE_END;
}
// End Class USpacer Function SetSize

// Begin Class USpacer
void USpacer::GetSize_WrapperImpl(const void* Object, void* OutValue)
{
	const USpacer* Obj = (const USpacer*)Object;
	FVector2D& Result = *(FVector2D*)OutValue;
	Result = (FVector2D)Obj->GetSize();
}
void USpacer::SetSize_WrapperImpl(void* Object, const void* InValue)
{
	USpacer* Obj = (USpacer*)Object;
	FVector2D& Value = *(FVector2D*)InValue;
	Obj->SetSize(Value);
}
void USpacer::StaticRegisterNativesUSpacer()
{
	UClass* Class = USpacer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSize", &USpacer::execSetSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpacer);
UClass* Z_Construct_UClass_USpacer_NoRegister()
{
	return USpacer::StaticClass();
}
struct Z_Construct_UClass_USpacer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A spacer widget; it does not have a visual representation, and just provides padding between other widgets.\n *\n * * No Children\n */" },
		{ "IncludePath", "Components/Spacer.h" },
		{ "ModuleRelativePath", "Public/Components/Spacer.h" },
		{ "ToolTip", "A spacer widget; it does not have a visual representation, and just provides padding between other widgets.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "BlueprintSetter", "SetSize" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The size of the spacer */" },
		{ "ModuleRelativePath", "Public/Components/Spacer.h" },
		{ "ToolTip", "The size of the spacer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpacer_SetSize, "SetSize" }, // 2629583101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpacer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpacer_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USpacer::SetSize_WrapperImpl, &USpacer::GetSize_WrapperImpl, 1, STRUCT_OFFSET(USpacer, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpacer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacer_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpacer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpacer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpacer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpacer_Statics::ClassParams = {
	&USpacer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpacer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpacer_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpacer_Statics::Class_MetaDataParams), Z_Construct_UClass_USpacer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpacer()
{
	if (!Z_Registration_Info_UClass_USpacer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpacer.OuterSingleton, Z_Construct_UClass_USpacer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpacer.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USpacer>()
{
	return USpacer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpacer);
USpacer::~USpacer() {}
// End Class USpacer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpacer, USpacer::StaticClass, TEXT("USpacer"), &Z_Registration_Info_UClass_USpacer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpacer), 4074899739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_3536372227(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
