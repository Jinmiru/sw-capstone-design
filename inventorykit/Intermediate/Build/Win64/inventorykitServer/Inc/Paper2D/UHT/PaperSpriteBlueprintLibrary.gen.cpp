// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSpriteBlueprintLibrary.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteBlueprintLibrary();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteBlueprintLibrary_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class UPaperSpriteBlueprintLibrary Function MakeBrushFromSprite
struct Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics
{
	struct PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms
	{
		UPaperSprite* Sprite;
		int32 Width;
		int32 Height;
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "ModuleRelativePath", "Classes/PaperSpriteBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperSpriteBlueprintLibrary, nullptr, "MakeBrushFromSprite", nullptr, nullptr, Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperSpriteBlueprintLibrary::execMakeBrushFromSprite)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(Z_Param_Sprite,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UPaperSpriteBlueprintLibrary Function MakeBrushFromSprite

// Begin Class UPaperSpriteBlueprintLibrary
void UPaperSpriteBlueprintLibrary::StaticRegisterNativesUPaperSpriteBlueprintLibrary()
{
	UClass* Class = UPaperSpriteBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeBrushFromSprite", &UPaperSpriteBlueprintLibrary::execMakeBrushFromSprite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteBlueprintLibrary);
UClass* Z_Construct_UClass_UPaperSpriteBlueprintLibrary_NoRegister()
{
	return UPaperSpriteBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PaperSpriteBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteBlueprintLibrary.h" },
		{ "ScriptName", "PaperSpriteLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite, "MakeBrushFromSprite" }, // 26289162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::ClassParams = {
	&UPaperSpriteBlueprintLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperSpriteBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperSpriteBlueprintLibrary>()
{
	return UPaperSpriteBlueprintLibrary::StaticClass();
}
UPaperSpriteBlueprintLibrary::UPaperSpriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteBlueprintLibrary);
UPaperSpriteBlueprintLibrary::~UPaperSpriteBlueprintLibrary() {}
// End Class UPaperSpriteBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteBlueprintLibrary, UPaperSpriteBlueprintLibrary::StaticClass, TEXT("UPaperSpriteBlueprintLibrary"), &Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteBlueprintLibrary), 417603300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_2477591173(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
