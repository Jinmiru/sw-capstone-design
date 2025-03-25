// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDisplayProperty() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FDebugDisplayProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugDisplayProperty;
class UScriptStruct* FDebugDisplayProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugDisplayProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugDisplayProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugDisplayProperty, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DebugDisplayProperty"));
	}
	return Z_Registration_Info_UScriptStruct_DebugDisplayProperty.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebugDisplayProperty>()
{
	return FDebugDisplayProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Debug property display functionality to interact with this, use \"display\", \"displayall\", \"displayclear\"\n *\n * @see UGameViewportClient\n * @see FDebugDisplayProperty\n * @see DrawStatsHUD\n */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "Debug property display functionality to interact with this, use \"display\", \"displayall\", \"displayclear\"\n\n@see UGameViewportClient\n@see FDebugDisplayProperty\n@see DrawStatsHUD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Obj_MetaData[] = {
		{ "Comment", "/** the object whose property to display. If this is a class, all objects of that class are drawn. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "the object whose property to display. If this is a class, all objects of that class are drawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WithinClass_MetaData[] = {
		{ "Comment", "/** if Obj is a class and WithinClass is not nullptr, further limit the display to objects that have an Outer of WithinClass */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "if Obj is a class and WithinClass is not nullptr, further limit the display to objects that have an Outer of WithinClass" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WithinClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugDisplayProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugDisplayProperty, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Obj_MetaData), NewProp_Obj_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass = { "WithinClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugDisplayProperty, WithinClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WithinClass_MetaData), NewProp_WithinClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DebugDisplayProperty",
	Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers),
	sizeof(FDebugDisplayProperty),
	alignof(FDebugDisplayProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty()
{
	if (!Z_Registration_Info_UScriptStruct_DebugDisplayProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugDisplayProperty.InnerSingleton, Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DebugDisplayProperty.InnerSingleton;
}
// End ScriptStruct FDebugDisplayProperty

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDebugDisplayProperty::StaticStruct, Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewStructOps, TEXT("DebugDisplayProperty"), &Z_Registration_Info_UScriptStruct_DebugDisplayProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugDisplayProperty), 785509049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_443455421(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
