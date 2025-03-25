// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/SafeZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZone() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UMG_API UClass* Z_Construct_UClass_USafeZone();
UMG_API UClass* Z_Construct_UClass_USafeZone_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class USafeZone Function SetSidesToPad
struct Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics
{
	struct SafeZone_eventSetSidesToPad_Parms
	{
		bool InPadLeft;
		bool InPadRight;
		bool InPadTop;
		bool InPadBottom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InPadLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InPadLeft;
	static void NewProp_InPadRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InPadRight;
	static void NewProp_InPadTop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InPadTop;
	static void NewProp_InPadBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InPadBottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft_SetBit(void* Obj)
{
	((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft = { "InPadLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight_SetBit(void* Obj)
{
	((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight = { "InPadRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop_SetBit(void* Obj)
{
	((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadTop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop = { "InPadTop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom_SetBit(void* Obj)
{
	((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom = { "InPadBottom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USafeZone, nullptr, "SetSidesToPad", nullptr, nullptr, Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers), sizeof(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::SafeZone_eventSetSidesToPad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::Function_MetaDataParams), Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::SafeZone_eventSetSidesToPad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USafeZone_SetSidesToPad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USafeZone::execSetSidesToPad)
{
	P_GET_UBOOL(Z_Param_InPadLeft);
	P_GET_UBOOL(Z_Param_InPadRight);
	P_GET_UBOOL(Z_Param_InPadTop);
	P_GET_UBOOL(Z_Param_InPadBottom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSidesToPad(Z_Param_InPadLeft,Z_Param_InPadRight,Z_Param_InPadTop,Z_Param_InPadBottom);
	P_NATIVE_END;
}
// End Class USafeZone Function SetSidesToPad

// Begin Class USafeZone
void USafeZone::GetPadLeft_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZone* Obj = (const USafeZone*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetPadLeft();
}
void USafeZone::SetPadLeft_WrapperImpl(void* Object, const void* InValue)
{
	USafeZone* Obj = (USafeZone*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetPadLeft(Value);
}
void USafeZone::GetPadRight_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZone* Obj = (const USafeZone*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetPadRight();
}
void USafeZone::SetPadRight_WrapperImpl(void* Object, const void* InValue)
{
	USafeZone* Obj = (USafeZone*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetPadRight(Value);
}
void USafeZone::GetPadTop_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZone* Obj = (const USafeZone*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetPadTop();
}
void USafeZone::SetPadTop_WrapperImpl(void* Object, const void* InValue)
{
	USafeZone* Obj = (USafeZone*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetPadTop(Value);
}
void USafeZone::GetPadBottom_WrapperImpl(const void* Object, void* OutValue)
{
	const USafeZone* Obj = (const USafeZone*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetPadBottom();
}
void USafeZone::SetPadBottom_WrapperImpl(void* Object, const void* InValue)
{
	USafeZone* Obj = (USafeZone*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetPadBottom(Value);
}
void USafeZone::StaticRegisterNativesUSafeZone()
{
	UClass* Class = USafeZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSidesToPad", &USafeZone::execSetSidesToPad },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USafeZone);
UClass* Z_Construct_UClass_USafeZone_NoRegister()
{
	return USafeZone::StaticClass();
}
struct Z_Construct_UClass_USafeZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Safe-Zone widget is an essential part of developing a game UI that can run on lots of different non-PC platforms.\n * While a modern flat panel computer monitor may not have over scan issues, this is a common occurrence for Consoles.  \n * It's common for TVs to have extra pixels under the bezel, in addition to projectors and projection TVs having potentially\n * several vertical and horizontal columns of pixels hidden behind or against a black border of the projection screen.\n * \n * Useful testing console commands to help, simulate the safe zone on PC,\n *   r.DebugSafeZone.TitleRatio 0.96\n *   r.DebugActionZone.ActionRatio 0.96\n * \n * To enable a red band to visualize the safe zone, use this console command,\n * r.DebugSafeZone.Mode controls the debug visualization overlay (0..2, default 0).\n *   0: Do not display the safe zone overlay.\n *   1: Display the overlay for the title safe zone.\n *   2: Display the overlay for the action safe zone.\n */" },
		{ "IncludePath", "Components/SafeZone.h" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "The Safe-Zone widget is an essential part of developing a game UI that can run on lots of different non-PC platforms.\nWhile a modern flat panel computer monitor may not have over scan issues, this is a common occurrence for Consoles.\nIt's common for TVs to have extra pixels under the bezel, in addition to projectors and projection TVs having potentially\nseveral vertical and horizontal columns of pixels hidden behind or against a black border of the projection screen.\n\nUseful testing console commands to help, simulate the safe zone on PC,\n  r.DebugSafeZone.TitleRatio 0.96\n  r.DebugActionZone.ActionRatio 0.96\n\nTo enable a red band to visualize the safe zone, use this console command,\nr.DebugSafeZone.Mode controls the debug visualization overlay (0..2, default 0).\n  0: Do not display the safe zone overlay.\n  1: Display the overlay for the title safe zone.\n  2: Display the overlay for the action safe zone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PadLeft_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "Comment", "/** If this safe zone should pad for the left side of the screen's safe zone */" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the left side of the screen's safe zone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PadRight_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "Comment", "/** If this safe zone should pad for the right side of the screen's safe zone */" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the right side of the screen's safe zone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PadTop_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "Comment", "/** If this safe zone should pad for the top side of the screen's safe zone */" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the top side of the screen's safe zone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PadBottom_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "Comment", "/** If this safe zone should pad for the bottom side of the screen's safe zone */" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the bottom side of the screen's safe zone" },
	};
#endif // WITH_METADATA
	static void NewProp_PadLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PadLeft;
	static void NewProp_PadRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PadRight;
	static void NewProp_PadTop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PadTop;
	static void NewProp_PadBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PadBottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USafeZone_SetSidesToPad, "SetSidesToPad" }, // 262637007
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_SetBit(void* Obj)
{
	((USafeZone*)Obj)->PadLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft = { "PadLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZone::SetPadLeft_WrapperImpl, &USafeZone::GetPadLeft_WrapperImpl, 1, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PadLeft_MetaData), NewProp_PadLeft_MetaData) };
void Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_SetBit(void* Obj)
{
	((USafeZone*)Obj)->PadRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight = { "PadRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZone::SetPadRight_WrapperImpl, &USafeZone::GetPadRight_WrapperImpl, 1, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PadRight_MetaData), NewProp_PadRight_MetaData) };
void Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_SetBit(void* Obj)
{
	((USafeZone*)Obj)->PadTop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop = { "PadTop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZone::SetPadTop_WrapperImpl, &USafeZone::GetPadTop_WrapperImpl, 1, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PadTop_MetaData), NewProp_PadTop_MetaData) };
void Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_SetBit(void* Obj)
{
	((USafeZone*)Obj)->PadBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom = { "PadBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USafeZone::SetPadBottom_WrapperImpl, &USafeZone::GetPadBottom_WrapperImpl, 1, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PadBottom_MetaData), NewProp_PadBottom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USafeZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USafeZone_Statics::ClassParams = {
	&USafeZone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USafeZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::Class_MetaDataParams), Z_Construct_UClass_USafeZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USafeZone()
{
	if (!Z_Registration_Info_UClass_USafeZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USafeZone.OuterSingleton, Z_Construct_UClass_USafeZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USafeZone.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USafeZone>()
{
	return USafeZone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZone);
USafeZone::~USafeZone() {}
// End Class USafeZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USafeZone, USafeZone::StaticClass, TEXT("USafeZone"), &Z_Registration_Info_UClass_USafeZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USafeZone), 459569241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_3681311209(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
