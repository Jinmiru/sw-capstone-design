// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaperedCapsuleElem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKTaperedCapsuleElem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKTaperedCapsuleElem
static_assert(std::is_polymorphic<FKTaperedCapsuleElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKTaperedCapsuleElem cannot be polymorphic unless super FKShapeElem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KTaperedCapsuleElem;
class UScriptStruct* FKTaperedCapsuleElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KTaperedCapsuleElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KTaperedCapsuleElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKTaperedCapsuleElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KTaperedCapsuleElem"));
	}
	return Z_Registration_Info_UScriptStruct_KTaperedCapsuleElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKTaperedCapsuleElem>()
{
	return FKTaperedCapsuleElem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Capsule shape used for collision. Z axis is capsule axis. Has a start and end radius that can differ. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Capsule shape used for collision. Z axis is capsule axis. Has a start and end radius that can differ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Capsule" },
		{ "Comment", "/** Position of the capsule's origin */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Position of the capsule's origin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Capsule" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Rotation of the capsule */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Rotation of the capsule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius0_MetaData[] = {
		{ "Category", "Capsule" },
		{ "Comment", "/** Radius of the capsule start point */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Radius of the capsule start point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius1_MetaData[] = {
		{ "Category", "Capsule" },
		{ "Comment", "/** Radius of the capsule end point */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Radius of the capsule end point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "Capsule" },
		{ "Comment", "/** Length of line-segment. Add Radius0 and Radius 1 to find total length. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Length of line-segment. Add Radius0 and Radius 1 to find total length." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKTaperedCapsuleElem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius0 = { "Radius0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Radius0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius0_MetaData), NewProp_Radius0_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius1 = { "Radius1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Radius1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius1_MetaData), NewProp_Radius1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FKShapeElem,
	&NewStructOps,
	"KTaperedCapsuleElem",
	Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::PropPointers),
	sizeof(FKTaperedCapsuleElem),
	alignof(FKTaperedCapsuleElem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKTaperedCapsuleElem()
{
	if (!Z_Registration_Info_UScriptStruct_KTaperedCapsuleElem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KTaperedCapsuleElem.InnerSingleton, Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KTaperedCapsuleElem.InnerSingleton;
}
// End ScriptStruct FKTaperedCapsuleElem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_TaperedCapsuleElem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKTaperedCapsuleElem::StaticStruct, Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewStructOps, TEXT("KTaperedCapsuleElem"), &Z_Registration_Info_UScriptStruct_KTaperedCapsuleElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKTaperedCapsuleElem), 4119801632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_TaperedCapsuleElem_h_3822297744(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_TaperedCapsuleElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_TaperedCapsuleElem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
