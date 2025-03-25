// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvexElem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKConvexElem
static_assert(std::is_polymorphic<FKConvexElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKConvexElem cannot be polymorphic unless super FKShapeElem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KConvexElem;
class UScriptStruct* FKConvexElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KConvexElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KConvexElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKConvexElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KConvexElem"));
	}
	return Z_Registration_Info_UScriptStruct_KConvexElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKConvexElem>()
{
	return FKConvexElem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKConvexElem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** One convex hull, used for simplified collision. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "One convex hull, used for simplified collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexData_MetaData[] = {
		{ "Comment", "/** Array of indices that make up the convex hull. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Array of indices that make up the convex hull." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElemBox_MetaData[] = {
		{ "Comment", "/** Bounding box of this convex hull. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Bounding box of this convex hull." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform of this element */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Transform of this element" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElemBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKConvexElem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_Inner = { "VertexData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData = { "VertexData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKConvexElem, VertexData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexData_MetaData), NewProp_VertexData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData_Inner = { "IndexData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData = { "IndexData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKConvexElem, IndexData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexData_MetaData), NewProp_IndexData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox = { "ElemBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKConvexElem, ElemBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElemBox_MetaData), NewProp_ElemBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKConvexElem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKConvexElem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FKShapeElem,
	&NewStructOps,
	"KConvexElem",
	Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers),
	sizeof(FKConvexElem),
	alignof(FKConvexElem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKConvexElem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem()
{
	if (!Z_Registration_Info_UScriptStruct_KConvexElem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KConvexElem.InnerSingleton, Z_Construct_UScriptStruct_FKConvexElem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KConvexElem.InnerSingleton;
}
// End ScriptStruct FKConvexElem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKConvexElem::StaticStruct, Z_Construct_UScriptStruct_FKConvexElem_Statics::NewStructOps, TEXT("KConvexElem"), &Z_Registration_Info_UScriptStruct_KConvexElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKConvexElem), 3161735465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_9492005(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
