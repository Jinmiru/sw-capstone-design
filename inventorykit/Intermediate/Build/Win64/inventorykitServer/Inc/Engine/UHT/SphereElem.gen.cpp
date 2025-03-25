// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereElem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKSphereElem
static_assert(std::is_polymorphic<FKSphereElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKSphereElem cannot be polymorphic unless super FKShapeElem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KSphereElem;
class UScriptStruct* FKSphereElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KSphereElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KSphereElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKSphereElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KSphereElem"));
	}
	return Z_Registration_Info_UScriptStruct_KSphereElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKSphereElem>()
{
	return FKSphereElem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKSphereElem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Sphere shape used for collision */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
		{ "ToolTip", "Sphere shape used for collision" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TM_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Position of the sphere's origin */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
		{ "ToolTip", "Position of the sphere's origin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TM;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKSphereElem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_TM = { "TM", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKSphereElem, TM_DEPRECATED), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TM_MetaData), NewProp_TM_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKSphereElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKSphereElem, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKSphereElem_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_TM,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphereElem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKSphereElem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FKShapeElem,
	&NewStructOps,
	"KSphereElem",
	Z_Construct_UScriptStruct_FKSphereElem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphereElem_Statics::PropPointers),
	sizeof(FKSphereElem),
	alignof(FKSphereElem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphereElem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKSphereElem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem()
{
	if (!Z_Registration_Info_UScriptStruct_KSphereElem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KSphereElem.InnerSingleton, Z_Construct_UScriptStruct_FKSphereElem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KSphereElem.InnerSingleton;
}
// End ScriptStruct FKSphereElem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKSphereElem::StaticStruct, Z_Construct_UScriptStruct_FKSphereElem_Statics::NewStructOps, TEXT("KSphereElem"), &Z_Registration_Info_UScriptStruct_KSphereElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKSphereElem), 4006634544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_3302880957(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
