// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavCollision.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavCollision() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavCollision();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavCollision_NoRegister();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionBox();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionCylinder();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin ScriptStruct FNavCollisionCylinder
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavCollisionCylinder;
class UScriptStruct* FNavCollisionCylinder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavCollisionCylinder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavCollisionCylinder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavCollisionCylinder, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavCollisionCylinder"));
	}
	return Z_Registration_Info_UScriptStruct_NavCollisionCylinder.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavCollisionCylinder>()
{
	return FNavCollisionCylinder::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Cylinder" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Cylinder" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Cylinder" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavCollisionCylinder>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavCollisionCylinder, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavCollisionCylinder, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavCollisionCylinder, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"NavCollisionCylinder",
	Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::PropPointers),
	sizeof(FNavCollisionCylinder),
	alignof(FNavCollisionCylinder),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionCylinder()
{
	if (!Z_Registration_Info_UScriptStruct_NavCollisionCylinder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavCollisionCylinder.InnerSingleton, Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavCollisionCylinder.InnerSingleton;
}
// End ScriptStruct FNavCollisionCylinder

// Begin ScriptStruct FNavCollisionBox
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavCollisionBox;
class UScriptStruct* FNavCollisionBox::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavCollisionBox.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavCollisionBox.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavCollisionBox, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavCollisionBox"));
	}
	return Z_Registration_Info_UScriptStruct_NavCollisionBox.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavCollisionBox>()
{
	return FNavCollisionBox::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavCollisionBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavCollisionBox>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavCollisionBox, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavCollisionBox, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavCollisionBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Extent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavCollisionBox_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"NavCollisionBox",
	Z_Construct_UScriptStruct_FNavCollisionBox_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::PropPointers),
	sizeof(FNavCollisionBox),
	alignof(FNavCollisionBox),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavCollisionBox_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionBox()
{
	if (!Z_Registration_Info_UScriptStruct_NavCollisionBox.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavCollisionBox.InnerSingleton, Z_Construct_UScriptStruct_FNavCollisionBox_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavCollisionBox.InnerSingleton;
}
// End ScriptStruct FNavCollisionBox

// Begin Class UNavCollision
void UNavCollision::StaticRegisterNativesUNavCollision()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavCollision);
UClass* Z_Construct_UClass_UNavCollision_NoRegister()
{
	return UNavCollision::StaticClass();
}
struct Z_Construct_UClass_UNavCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NavCollision.h" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderCollision_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** list of nav collision cylinders */" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "list of nav collision cylinders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** list of nav collision boxes */" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "list of nav collision boxes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** navigation area type that will be use when this static mesh is used as \n\x09 *\x09""a navigation obstacle. See bIsDynamicObstacle.\n\x09 *\x09""Empty AreaClass means the default obstacle class will be used */" },
		{ "EditCondition", "bIsDynamicObstacle" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "navigation area type that will be use when this static mesh is used as\n    a navigation obstacle. See bIsDynamicObstacle.\n    Empty AreaClass means the default obstacle class will be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGatherConvexGeometry_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If set, convex collisions will be exported offline for faster runtime navmesh building (increases memory usage) */" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "If set, convex collisions will be exported offline for faster runtime navmesh building (increases memory usage)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateOnClient_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If false, will not create nav collision when connecting as a client */" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "If false, will not create nav collision when connecting as a client" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CylinderCollision_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CylinderCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxCollision_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
	static void NewProp_bGatherConvexGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGatherConvexGeometry;
	static void NewProp_bCreateOnClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateOnClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision_Inner = { "CylinderCollision", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNavCollisionCylinder, METADATA_PARAMS(0, nullptr) }; // 1298213596
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision = { "CylinderCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavCollision, CylinderCollision), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderCollision_MetaData), NewProp_CylinderCollision_MetaData) }; // 1298213596
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision_Inner = { "BoxCollision", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNavCollisionBox, METADATA_PARAMS(0, nullptr) }; // 1453386027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavCollision, BoxCollision), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) }; // 1453386027
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavCollision, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClass_MetaData), NewProp_AreaClass_MetaData) };
void Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry_SetBit(void* Obj)
{
	((UNavCollision*)Obj)->bGatherConvexGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry = { "bGatherConvexGeometry", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavCollision), &Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGatherConvexGeometry_MetaData), NewProp_bGatherConvexGeometry_MetaData) };
void Z_Construct_UClass_UNavCollision_Statics::NewProp_bCreateOnClient_SetBit(void* Obj)
{
	((UNavCollision*)Obj)->bCreateOnClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_bCreateOnClient = { "bCreateOnClient", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavCollision), &Z_Construct_UClass_UNavCollision_Statics::NewProp_bCreateOnClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateOnClient_MetaData), NewProp_bCreateOnClient_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_AreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_bCreateOnClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavCollisionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavCollision_Statics::ClassParams = {
	&UNavCollision::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavCollision_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavCollision_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavCollision()
{
	if (!Z_Registration_Info_UClass_UNavCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavCollision.OuterSingleton, Z_Construct_UClass_UNavCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavCollision.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavCollision>()
{
	return UNavCollision::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavCollision);
UNavCollision::~UNavCollision() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNavCollision)
// End Class UNavCollision

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavCollisionCylinder::StaticStruct, Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewStructOps, TEXT("NavCollisionCylinder"), &Z_Registration_Info_UScriptStruct_NavCollisionCylinder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavCollisionCylinder), 1298213596U) },
		{ FNavCollisionBox::StaticStruct, Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewStructOps, TEXT("NavCollisionBox"), &Z_Registration_Info_UScriptStruct_NavCollisionBox, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavCollisionBox), 1453386027U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavCollision, UNavCollision::StaticClass, TEXT("UNavCollision"), &Z_Registration_Info_UClass_UNavCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavCollision), 591392414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_2619012381(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
