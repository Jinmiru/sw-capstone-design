// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/Throbber.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrobber() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UThrobber();
UMG_API UClass* Z_Construct_UClass_UThrobber_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UThrobber Function SetAnimateHorizontally
struct Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics
{
	struct Throbber_eventSetAnimateHorizontally_Parms
	{
		bool bInAnimateHorizontally;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether the pieces animate horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Sets whether the pieces animate horizontally." },
	};
#endif // WITH_METADATA
	static void NewProp_bInAnimateHorizontally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAnimateHorizontally;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::NewProp_bInAnimateHorizontally_SetBit(void* Obj)
{
	((Throbber_eventSetAnimateHorizontally_Parms*)Obj)->bInAnimateHorizontally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::NewProp_bInAnimateHorizontally = { "bInAnimateHorizontally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Throbber_eventSetAnimateHorizontally_Parms), &Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::NewProp_bInAnimateHorizontally_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::NewProp_bInAnimateHorizontally,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, nullptr, "SetAnimateHorizontally", nullptr, nullptr, Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::Throbber_eventSetAnimateHorizontally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::Throbber_eventSetAnimateHorizontally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThrobber_SetAnimateHorizontally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThrobber::execSetAnimateHorizontally)
{
	P_GET_UBOOL(Z_Param_bInAnimateHorizontally);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimateHorizontally(Z_Param_bInAnimateHorizontally);
	P_NATIVE_END;
}
// End Class UThrobber Function SetAnimateHorizontally

// Begin Class UThrobber Function SetAnimateOpacity
struct Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics
{
	struct Throbber_eventSetAnimateOpacity_Parms
	{
		bool bInAnimateOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether the pieces animate their opacity. */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Sets whether the pieces animate their opacity." },
	};
#endif // WITH_METADATA
	static void NewProp_bInAnimateOpacity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAnimateOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::NewProp_bInAnimateOpacity_SetBit(void* Obj)
{
	((Throbber_eventSetAnimateOpacity_Parms*)Obj)->bInAnimateOpacity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::NewProp_bInAnimateOpacity = { "bInAnimateOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Throbber_eventSetAnimateOpacity_Parms), &Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::NewProp_bInAnimateOpacity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::NewProp_bInAnimateOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, nullptr, "SetAnimateOpacity", nullptr, nullptr, Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::Throbber_eventSetAnimateOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::Throbber_eventSetAnimateOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThrobber_SetAnimateOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThrobber::execSetAnimateOpacity)
{
	P_GET_UBOOL(Z_Param_bInAnimateOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimateOpacity(Z_Param_bInAnimateOpacity);
	P_NATIVE_END;
}
// End Class UThrobber Function SetAnimateOpacity

// Begin Class UThrobber Function SetAnimateVertically
struct Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics
{
	struct Throbber_eventSetAnimateVertically_Parms
	{
		bool bInAnimateVertically;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether the pieces animate vertically. */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Sets whether the pieces animate vertically." },
	};
#endif // WITH_METADATA
	static void NewProp_bInAnimateVertically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAnimateVertically;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::NewProp_bInAnimateVertically_SetBit(void* Obj)
{
	((Throbber_eventSetAnimateVertically_Parms*)Obj)->bInAnimateVertically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::NewProp_bInAnimateVertically = { "bInAnimateVertically", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Throbber_eventSetAnimateVertically_Parms), &Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::NewProp_bInAnimateVertically_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::NewProp_bInAnimateVertically,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, nullptr, "SetAnimateVertically", nullptr, nullptr, Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::Throbber_eventSetAnimateVertically_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::Throbber_eventSetAnimateVertically_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThrobber_SetAnimateVertically()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThrobber::execSetAnimateVertically)
{
	P_GET_UBOOL(Z_Param_bInAnimateVertically);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimateVertically(Z_Param_bInAnimateVertically);
	P_NATIVE_END;
}
// End Class UThrobber Function SetAnimateVertically

// Begin Class UThrobber Function SetNumberOfPieces
struct Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics
{
	struct Throbber_eventSetNumberOfPieces_Parms
	{
		int32 InNumberOfPieces;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets how many pieces there are */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Sets how many pieces there are" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumberOfPieces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces = { "InNumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Throbber_eventSetNumberOfPieces_Parms, InNumberOfPieces), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, nullptr, "SetNumberOfPieces", nullptr, nullptr, Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::Throbber_eventSetNumberOfPieces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::Throbber_eventSetNumberOfPieces_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThrobber_SetNumberOfPieces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThrobber::execSetNumberOfPieces)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumberOfPieces);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberOfPieces(Z_Param_InNumberOfPieces);
	P_NATIVE_END;
}
// End Class UThrobber Function SetNumberOfPieces

// Begin Class UThrobber
void UThrobber::GetNumberOfPieces_WrapperImpl(const void* Object, void* OutValue)
{
	const UThrobber* Obj = (const UThrobber*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetNumberOfPieces();
}
void UThrobber::SetNumberOfPieces_WrapperImpl(void* Object, const void* InValue)
{
	UThrobber* Obj = (UThrobber*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetNumberOfPieces(Value);
}
void UThrobber::GetbAnimateHorizontally_WrapperImpl(const void* Object, void* OutValue)
{
	const UThrobber* Obj = (const UThrobber*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsAnimateHorizontally();
}
void UThrobber::SetbAnimateHorizontally_WrapperImpl(void* Object, const void* InValue)
{
	UThrobber* Obj = (UThrobber*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAnimateHorizontally(Value);
}
void UThrobber::GetbAnimateVertically_WrapperImpl(const void* Object, void* OutValue)
{
	const UThrobber* Obj = (const UThrobber*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsAnimateVertically();
}
void UThrobber::SetbAnimateVertically_WrapperImpl(void* Object, const void* InValue)
{
	UThrobber* Obj = (UThrobber*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAnimateVertically(Value);
}
void UThrobber::GetbAnimateOpacity_WrapperImpl(const void* Object, void* OutValue)
{
	const UThrobber* Obj = (const UThrobber*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsAnimateOpacity();
}
void UThrobber::SetbAnimateOpacity_WrapperImpl(void* Object, const void* InValue)
{
	UThrobber* Obj = (UThrobber*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAnimateOpacity(Value);
}
void UThrobber::GetImage_WrapperImpl(const void* Object, void* OutValue)
{
	const UThrobber* Obj = (const UThrobber*)Object;
	FSlateBrush& Result = *(FSlateBrush*)OutValue;
	Result = (FSlateBrush)Obj->GetImage();
}
void UThrobber::SetImage_WrapperImpl(void* Object, const void* InValue)
{
	UThrobber* Obj = (UThrobber*)Object;
	FSlateBrush& Value = *(FSlateBrush*)InValue;
	Obj->SetImage(Value);
}
void UThrobber::StaticRegisterNativesUThrobber()
{
	UClass* Class = UThrobber::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAnimateHorizontally", &UThrobber::execSetAnimateHorizontally },
		{ "SetAnimateOpacity", &UThrobber::execSetAnimateOpacity },
		{ "SetAnimateVertically", &UThrobber::execSetAnimateVertically },
		{ "SetNumberOfPieces", &UThrobber::execSetNumberOfPieces },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrobber);
UClass* Z_Construct_UClass_UThrobber_NoRegister()
{
	return UThrobber::StaticClass();
}
struct Z_Construct_UClass_UThrobber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Throbber widget that shows several zooming circles in a row.\n */" },
		{ "IncludePath", "Components/Throbber.h" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "A Throbber widget that shows several zooming circles in a row." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[] = {
		{ "BlueprintSetter", "SetNumberOfPieces" },
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many pieces there are */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateHorizontally_MetaData[] = {
		{ "BlueprintSetter", "SetAnimateHorizontally" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate horizontally? */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Should the pieces animate horizontally?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateVertically_MetaData[] = {
		{ "BlueprintSetter", "SetAnimateVertically" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate vertically? */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Should the pieces animate vertically?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetAnimateOpacity" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate their opacity? */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Should the pieces animate their opacity?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The animated pieces. */" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "The animated pieces." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
	static void NewProp_bAnimateHorizontally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateHorizontally;
	static void NewProp_bAnimateVertically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateVertically;
	static void NewProp_bAnimateOpacity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UThrobber_SetAnimateHorizontally, "SetAnimateHorizontally" }, // 3210498674
		{ &Z_Construct_UFunction_UThrobber_SetAnimateOpacity, "SetAnimateOpacity" }, // 2724514884
		{ &Z_Construct_UFunction_UThrobber_SetAnimateVertically, "SetAnimateVertically" }, // 3873573299
		{ &Z_Construct_UFunction_UThrobber_SetNumberOfPieces, "SetNumberOfPieces" }, // 1256982368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrobber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UThrobber::SetNumberOfPieces_WrapperImpl, &UThrobber::GetNumberOfPieces_WrapperImpl, 1, STRUCT_OFFSET(UThrobber, NumberOfPieces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPieces_MetaData), NewProp_NumberOfPieces_MetaData) };
void Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally_SetBit(void* Obj)
{
	((UThrobber*)Obj)->bAnimateHorizontally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally = { "bAnimateHorizontally", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UThrobber::SetbAnimateHorizontally_WrapperImpl, &UThrobber::GetbAnimateHorizontally_WrapperImpl, 1, sizeof(bool), sizeof(UThrobber), &Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateHorizontally_MetaData), NewProp_bAnimateHorizontally_MetaData) };
void Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically_SetBit(void* Obj)
{
	((UThrobber*)Obj)->bAnimateVertically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically = { "bAnimateVertically", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UThrobber::SetbAnimateVertically_WrapperImpl, &UThrobber::GetbAnimateVertically_WrapperImpl, 1, sizeof(bool), sizeof(UThrobber), &Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateVertically_MetaData), NewProp_bAnimateVertically_MetaData) };
void Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity_SetBit(void* Obj)
{
	((UThrobber*)Obj)->bAnimateOpacity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity = { "bAnimateOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UThrobber::SetbAnimateOpacity_WrapperImpl, &UThrobber::GetbAnimateOpacity_WrapperImpl, 1, sizeof(bool), sizeof(UThrobber), &Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateOpacity_MetaData), NewProp_bAnimateOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UThrobber::SetImage_WrapperImpl, &UThrobber::GetImage_WrapperImpl, 1, STRUCT_OFFSET(UThrobber, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrobber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_NumberOfPieces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_Image,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UThrobber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrobber_Statics::ClassParams = {
	&UThrobber::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UThrobber_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrobber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThrobber()
{
	if (!Z_Registration_Info_UClass_UThrobber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrobber.OuterSingleton, Z_Construct_UClass_UThrobber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThrobber.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UThrobber>()
{
	return UThrobber::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThrobber);
UThrobber::~UThrobber() {}
// End Class UThrobber

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThrobber, UThrobber::StaticClass, TEXT("UThrobber"), &Z_Registration_Info_UClass_UThrobber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrobber), 3936250396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_364513141(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
