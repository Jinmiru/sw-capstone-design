// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsole() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UConsole();
ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAutoCompleteNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoCompleteNode;
class UScriptStruct* FAutoCompleteNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoCompleteNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoCompleteNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AutoCompleteNode"));
	}
	return Z_Registration_Info_UScriptStruct_AutoCompleteNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAutoCompleteNode>()
{
	return FAutoCompleteNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutoCompleteNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Node for storing an auto-complete tree based on each char in the command.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Node for storing an auto-complete tree based on each char in the command." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexChar_MetaData[] = {
		{ "Comment", "/** Char for node in the tree */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Char for node in the tree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteListIndices_MetaData[] = {
		{ "Comment", "/** Indices into AutoCompleteList for commands that match to this level */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Indices into AutoCompleteList for commands that match to this level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexChar;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoCompleteListIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoCompleteListIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoCompleteNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar = { "IndexChar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoCompleteNode, IndexChar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexChar_MetaData), NewProp_IndexChar_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_Inner = { "AutoCompleteListIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices = { "AutoCompleteListIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoCompleteNode, AutoCompleteListIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCompleteListIndices_MetaData), NewProp_AutoCompleteListIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AutoCompleteNode",
	Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers),
	sizeof(FAutoCompleteNode),
	alignof(FAutoCompleteNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode()
{
	if (!Z_Registration_Info_UScriptStruct_AutoCompleteNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoCompleteNode.InnerSingleton, Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutoCompleteNode.InnerSingleton;
}
// End ScriptStruct FAutoCompleteNode

// Begin Class UConsole
void UConsole::StaticRegisterNativesUConsole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsole);
UClass* Z_Construct_UClass_UConsole_NoRegister()
{
	return UConsole::StaticClass();
}
struct Z_Construct_UClass_UConsole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A basic command line console that accepts most commands.\n */" },
		{ "IncludePath", "Engine/Console.h" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "A basic command line console that accepts most commands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleTargetPlayer_MetaData[] = {
		{ "Comment", "/** The player which the next console command should be executed in the context of.  If nullptr, execute in the viewport. */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "The player which the next console command should be executed in the context of.  If nullptr, execute in the viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_Black_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_White_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistoryBuffer_MetaData[] = {
		{ "Comment", "/** Holds the history buffer, order is old to new */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Holds the history buffer, order is old to new" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConsoleTargetPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture_Black;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture_White;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HistoryBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HistoryBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer = { "ConsoleTargetPlayer", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsole, ConsoleTargetPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleTargetPlayer_MetaData), NewProp_ConsoleTargetPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black = { "DefaultTexture_Black", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsole, DefaultTexture_Black), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTexture_Black_MetaData), NewProp_DefaultTexture_Black_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White = { "DefaultTexture_White", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsole, DefaultTexture_White), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTexture_White_MetaData), NewProp_DefaultTexture_White_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_Inner = { "HistoryBuffer", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer = { "HistoryBuffer", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsole, HistoryBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistoryBuffer_MetaData), NewProp_HistoryBuffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConsole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsole_Statics::ClassParams = {
	&UConsole::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConsole_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::Class_MetaDataParams), Z_Construct_UClass_UConsole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConsole()
{
	if (!Z_Registration_Info_UClass_UConsole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsole.OuterSingleton, Z_Construct_UClass_UConsole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConsole.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UConsole>()
{
	return UConsole::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConsole);
// End Class UConsole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutoCompleteNode::StaticStruct, Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewStructOps, TEXT("AutoCompleteNode"), &Z_Registration_Info_UScriptStruct_AutoCompleteNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoCompleteNode), 3270390078U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConsole, UConsole::StaticClass, TEXT("UConsole"), &Z_Registration_Info_UClass_UConsole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsole), 3065020677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_103173075(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
