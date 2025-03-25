// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/LevelSetElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSetElem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKLevelSetElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKLevelSetElem
static_assert(std::is_polymorphic<FKLevelSetElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKLevelSetElem cannot be polymorphic unless super FKShapeElem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLevelSetElem;
class UScriptStruct* FKLevelSetElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLevelSetElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLevelSetElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLevelSetElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KLevelSetElem"));
	}
	return Z_Registration_Info_UScriptStruct_KLevelSetElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKLevelSetElem>()
{
	return FKLevelSetElem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKLevelSetElem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/LevelSetElem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform of this element */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/LevelSetElem.h" },
		{ "ToolTip", "Transform of this element" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLevelSetElem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKLevelSetElem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLevelSetElem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLevelSetElem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLevelSetElem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FKShapeElem,
	&NewStructOps,
	"KLevelSetElem",
	Z_Construct_UScriptStruct_FKLevelSetElem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLevelSetElem_Statics::PropPointers),
	sizeof(FKLevelSetElem),
	alignof(FKLevelSetElem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLevelSetElem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKLevelSetElem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKLevelSetElem()
{
	if (!Z_Registration_Info_UScriptStruct_KLevelSetElem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLevelSetElem.InnerSingleton, Z_Construct_UScriptStruct_FKLevelSetElem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KLevelSetElem.InnerSingleton;
}
// End ScriptStruct FKLevelSetElem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKLevelSetElem::StaticStruct, Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewStructOps, TEXT("KLevelSetElem"), &Z_Registration_Info_UScriptStruct_KLevelSetElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLevelSetElem), 2559079891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_2411339699(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
