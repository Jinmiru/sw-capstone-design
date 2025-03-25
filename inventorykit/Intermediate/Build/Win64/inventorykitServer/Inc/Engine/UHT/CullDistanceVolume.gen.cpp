// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CullDistanceVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCullDistanceVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACullDistanceVolume();
ENGINE_API UClass* Z_Construct_UClass_ACullDistanceVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCullDistanceSizePair();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCullDistanceSizePair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CullDistanceSizePair;
class UScriptStruct* FCullDistanceSizePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CullDistanceSizePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CullDistanceSizePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCullDistanceSizePair, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CullDistanceSizePair"));
	}
	return Z_Registration_Info_UScriptStruct_CullDistanceSizePair.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCullDistanceSizePair>()
{
	return FCullDistanceSizePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Helper structure containing size and cull distance pair.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Helper structure containing size and cull distance pair." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "CullDistanceSizePair" },
		{ "Comment", "/** Size to associate with cull distance. */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Size to associate with cull distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[] = {
		{ "Category", "CullDistanceSizePair" },
		{ "Comment", "/** Cull distance associated with size. */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Cull distance associated with size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCullDistanceSizePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCullDistanceSizePair, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCullDistanceSizePair, CullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullDistance_MetaData), NewProp_CullDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CullDistanceSizePair",
	Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers),
	sizeof(FCullDistanceSizePair),
	alignof(FCullDistanceSizePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCullDistanceSizePair()
{
	if (!Z_Registration_Info_UScriptStruct_CullDistanceSizePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CullDistanceSizePair.InnerSingleton, Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CullDistanceSizePair.InnerSingleton;
}
// End ScriptStruct FCullDistanceSizePair

// Begin Class ACullDistanceVolume
void ACullDistanceVolume::StaticRegisterNativesACullDistanceVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACullDistanceVolume);
UClass* Z_Construct_UClass_ACullDistanceVolume_NoRegister()
{
	return ACullDistanceVolume::StaticClass();
}
struct Z_Construct_UClass_ACullDistanceVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/CullDistanceVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullDistances_MetaData[] = {
		{ "Category", "CullDistanceVolume" },
		{ "Comment", "/**\n\x09 * Array of size and cull distance pairs. The code will calculate the sphere diameter of a primitive's BB and look for a best\n\x09 * fit in this array to determine which cull distance to use.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Array of size and cull distance pairs. The code will calculate the sphere diameter of a primitive's BB and look for a best\nfit in this array to determine which cull distance to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "CullDistanceVolume" },
		{ "Comment", "/**\n\x09 * Whether the volume is currently enabled or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Whether the volume is currently enabled or not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CullDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CullDistances;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACullDistanceVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_Inner = { "CullDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCullDistanceSizePair, METADATA_PARAMS(0, nullptr) }; // 1625518122
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances = { "CullDistances", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACullDistanceVolume, CullDistances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullDistances_MetaData), NewProp_CullDistances_MetaData) }; // 1625518122
void Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ACullDistanceVolume*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ACullDistanceVolume), &Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACullDistanceVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACullDistanceVolume_Statics::ClassParams = {
	&ACullDistanceVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ACullDistanceVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACullDistanceVolume()
{
	if (!Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton, Z_Construct_UClass_ACullDistanceVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ACullDistanceVolume>()
{
	return ACullDistanceVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACullDistanceVolume);
ACullDistanceVolume::~ACullDistanceVolume() {}
// End Class ACullDistanceVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCullDistanceSizePair::StaticStruct, Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewStructOps, TEXT("CullDistanceSizePair"), &Z_Registration_Info_UScriptStruct_CullDistanceSizePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCullDistanceSizePair), 1625518122U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACullDistanceVolume, ACullDistanceVolume::StaticClass, TEXT("ACullDistanceVolume"), &Z_Registration_Info_UClass_ACullDistanceVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACullDistanceVolume), 914716340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_1920907937(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
