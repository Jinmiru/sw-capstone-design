// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputChord() {}

// Begin Cross Module References
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin ScriptStruct FInputChord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputChord;
class UScriptStruct* FInputChord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputChord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputChord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputChord, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("InputChord"));
	}
	return Z_Registration_Info_UScriptStruct_InputChord.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FInputChord>()
{
	return FInputChord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputChord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An Input Chord is a key and the modifier keys that are to be held with it. */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "An Input Chord is a key and the modifier keys that are to be held with it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The Key is the core of the chord. */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "The Key is the core of the chord." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/** Whether the shift key is part of the chord.  */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the shift key is part of the chord." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/** Whether the control key is part of the chord.  */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the control key is part of the chord." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/** Whether the alt key is part of the chord.  */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the alt key is part of the chord." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCmd_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/** Whether the command key is part of the chord.  */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the command key is part of the chord." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_bShift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShift;
	static void NewProp_bCtrl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrl;
	static void NewProp_bAlt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlt;
	static void NewProp_bCmd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCmd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputChord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputChord, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_SetBit(void* Obj)
{
	((FInputChord*)Obj)->bShift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShift_MetaData), NewProp_bShift_MetaData) };
void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_SetBit(void* Obj)
{
	((FInputChord*)Obj)->bCtrl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl = { "bCtrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCtrl_MetaData), NewProp_bCtrl_MetaData) };
void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_SetBit(void* Obj)
{
	((FInputChord*)Obj)->bAlt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlt_MetaData), NewProp_bAlt_MetaData) };
void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_SetBit(void* Obj)
{
	((FInputChord*)Obj)->bCmd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd = { "bCmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCmd_MetaData), NewProp_bCmd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputChord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"InputChord",
	Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers),
	sizeof(FInputChord),
	alignof(FInputChord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputChord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputChord()
{
	if (!Z_Registration_Info_UScriptStruct_InputChord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputChord.InnerSingleton, Z_Construct_UScriptStruct_FInputChord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputChord.InnerSingleton;
}
// End ScriptStruct FInputChord

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputChord::StaticStruct, Z_Construct_UScriptStruct_FInputChord_Statics::NewStructOps, TEXT("InputChord"), &Z_Registration_Info_UScriptStruct_InputChord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputChord), 4109060215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_2334312249(TEXT("/Script/Slate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
