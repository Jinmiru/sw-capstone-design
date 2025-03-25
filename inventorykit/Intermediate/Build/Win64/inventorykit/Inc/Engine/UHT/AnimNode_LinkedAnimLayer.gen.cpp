// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_LinkedAnimLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimLayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimLayerInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_LinkedAnimLayer
static_assert(std::is_polymorphic<FAnimNode_LinkedAnimLayer>() == std::is_polymorphic<FAnimNode_LinkedAnimGraph>(), "USTRUCT FAnimNode_LinkedAnimLayer cannot be polymorphic unless super FAnimNode_LinkedAnimGraph is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer;
class UScriptStruct* FAnimNode_LinkedAnimLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_LinkedAnimLayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_LinkedAnimLayer>()
{
	return FAnimNode_LinkedAnimLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[] = {
		{ "Comment", "/** \n\x09 * Optional interface. If this is set then this node will only accept (both statically and dynamically) anim instances that implement this interface.\n\x09 * If not set, then this is considered a 'self' layer. This value is set when Layer is changed in the details panel.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
		{ "ToolTip", "Optional interface. If this is set then this node will only accept (both statically and dynamically) anim instances that implement this interface.\nIf not set, then this is considered a 'self' layer. This value is set when Layer is changed in the details panel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The layer in the interface to use */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
		{ "ToolTip", "The layer in the interface to use" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Interface;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Layer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LinkedAnimLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimLayer, Interface), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimLayerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interface_MetaData), NewProp_Interface_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimLayer, Layer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph,
	&NewStructOps,
	"AnimNode_LinkedAnimLayer",
	Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers),
	sizeof(FAnimNode_LinkedAnimLayer),
	alignof(FAnimNode_LinkedAnimLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.InnerSingleton;
}
// End ScriptStruct FAnimNode_LinkedAnimLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_LinkedAnimLayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewStructOps, TEXT("AnimNode_LinkedAnimLayer"), &Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LinkedAnimLayer), 67075652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_3054825341(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
