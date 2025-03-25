// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeElem() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKShapeElem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KShapeElem;
class UScriptStruct* FKShapeElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KShapeElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KShapeElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKShapeElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KShapeElem"));
	}
	return Z_Registration_Info_UScriptStruct_KShapeElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKShapeElem>()
{
	return FKShapeElem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKShapeElem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class of shapes used for collision, such as Sphere, Box, Sphyl, Convex, TaperedCapsule or LevelSet */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "Base class of shapes used for collision, such as Sphere, Box, Sphyl, Convex, TaperedCapsule or LevelSet" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestOffset_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Offset used when generating contact points. This allows you to smooth out\n\x09\x09the Minkowski sum by radius R. Useful for making objects slide smoothly\n\x09\x09on top of irregularities  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "Offset used when generating contact points. This allows you to smooth out\n              the Minkowski sum by radius R. Useful for making objects slide smoothly\n              on top of irregularities" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGenerated_MetaData[] = {
		{ "Comment", "/** True when the shape was created by the engine and was not imported. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "True when the shape was created by the engine and was not imported." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** User-defined name for this shape */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "User-defined name for this shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContributeToMass_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** True if this shape should contribute to the overall mass of the body it\n\x09\x09""belongs to. This lets you create extra collision volumes which do not affect\n\x09\x09the mass properties of an object. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "True if this shape should contribute to the overall mass of the body it\n              belongs to. This lets you create extra collision volumes which do not affect\n              the mass properties of an object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Course per-primitive collision filtering. This allows for individual primitives to\n\x09\x09""be toggled in and out of sim and query collision without changing filtering details. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "Course per-primitive collision filtering. This allows for individual primitives to\n              be toggled in and out of sim and query collision without changing filtering details." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestOffset;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsGenerated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGenerated;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_bContributeToMass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContributeToMass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKShapeElem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset = { "RestOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKShapeElem, RestOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestOffset_MetaData), NewProp_RestOffset_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated_SetBit(void* Obj)
{
	((FKShapeElem*)Obj)->bIsGenerated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated = { "bIsGenerated", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKShapeElem), &Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGenerated_MetaData), NewProp_bIsGenerated_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKShapeElem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_SetBit(void* Obj)
{
	((FKShapeElem*)Obj)->bContributeToMass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass = { "bContributeToMass", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKShapeElem), &Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContributeToMass_MetaData), NewProp_bContributeToMass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKShapeElem, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEnabled_MetaData), NewProp_CollisionEnabled_MetaData) }; // 2362857466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_CollisionEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKShapeElem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"KShapeElem",
	Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers),
	sizeof(FKShapeElem),
	alignof(FKShapeElem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKShapeElem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem()
{
	if (!Z_Registration_Info_UScriptStruct_KShapeElem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KShapeElem.InnerSingleton, Z_Construct_UScriptStruct_FKShapeElem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KShapeElem.InnerSingleton;
}
// End ScriptStruct FKShapeElem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ShapeElem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKShapeElem::StaticStruct, Z_Construct_UScriptStruct_FKShapeElem_Statics::NewStructOps, TEXT("KShapeElem"), &Z_Registration_Info_UScriptStruct_KShapeElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKShapeElem), 1986755504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ShapeElem_h_713398478(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ShapeElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ShapeElem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
