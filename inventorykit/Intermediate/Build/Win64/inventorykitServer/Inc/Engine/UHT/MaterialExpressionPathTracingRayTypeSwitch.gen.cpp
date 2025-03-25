// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPathTracingRayTypeSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPathTracingRayTypeSwitch
void UMaterialExpressionPathTracingRayTypeSwitch::StaticRegisterNativesUMaterialExpressionPathTracingRayTypeSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPathTracingRayTypeSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_NoRegister()
{
	return UMaterialExpressionPathTracingRayTypeSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[] = {
		{ "Comment", "/** Used for camera rays (or for non-path traced shading) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used for camera rays (or for non-path traced shading)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shadow_MetaData[] = {
		{ "Comment", "/** Used by the path tracer on shadow rays (this only applies for non-opaque blend modes) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used by the path tracer on shadow rays (this only applies for non-opaque blend modes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndirectDiffuse_MetaData[] = {
		{ "Comment", "/** Used by the path tracer on indirect diffuse rays */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used by the path tracer on indirect diffuse rays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndirectSpecular_MetaData[] = {
		{ "Comment", "/** Used by the path tracer on indirect specular rays */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used by the path tracer on indirect specular rays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndirectVolume_MetaData[] = {
		{ "Comment", "/** Used by the path tracer on indirect volume rays */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used by the path tracer on indirect volume rays" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Main;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shadow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndirectDiffuse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndirectSpecular;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndirectVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPathTracingRayTypeSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, Main), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Main_MetaData), NewProp_Main_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Shadow = { "Shadow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, Shadow), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shadow_MetaData), NewProp_Shadow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectDiffuse = { "IndirectDiffuse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, IndirectDiffuse), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndirectDiffuse_MetaData), NewProp_IndirectDiffuse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectSpecular = { "IndirectSpecular", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, IndirectSpecular), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndirectSpecular_MetaData), NewProp_IndirectSpecular_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectVolume = { "IndirectVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, IndirectVolume), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndirectVolume_MetaData), NewProp_IndirectVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Main,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Shadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectDiffuse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectSpecular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::ClassParams = {
	&UMaterialExpressionPathTracingRayTypeSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPathTracingRayTypeSwitch>()
{
	return UMaterialExpressionPathTracingRayTypeSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPathTracingRayTypeSwitch);
UMaterialExpressionPathTracingRayTypeSwitch::~UMaterialExpressionPathTracingRayTypeSwitch() {}
// End Class UMaterialExpressionPathTracingRayTypeSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch, UMaterialExpressionPathTracingRayTypeSwitch::StaticClass, TEXT("UMaterialExpressionPathTracingRayTypeSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPathTracingRayTypeSwitch), 3404847032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_632939264(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
