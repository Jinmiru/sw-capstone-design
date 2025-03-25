// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDebugDrawActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionDebugDrawActor() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Enum EGeometryCollectionDebugDrawActorHideGeometry
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry;
static UEnum* EGeometryCollectionDebugDrawActorHideGeometry_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EGeometryCollectionDebugDrawActorHideGeometry"));
	}
	return Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EGeometryCollectionDebugDrawActorHideGeometry>()
{
	return EGeometryCollectionDebugDrawActorHideGeometry_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* EGeometryCollectionDebugDrawActorHideGeometry\n*   Visibility enum.\n*/" },
		{ "HideAll.Comment", "// Hide all geometry collections.\n" },
		{ "HideAll.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideAll" },
		{ "HideAll.ToolTip", "Hide all geometry collections." },
		{ "HideNone.Comment", "// Do not hide any geometry.\n" },
		{ "HideNone.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideNone" },
		{ "HideNone.ToolTip", "Do not hide any geometry." },
		{ "HideSelected.Comment", "// Hide the geometry associated with the selected rigid bodies.\n" },
		{ "HideSelected.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideSelected" },
		{ "HideSelected.ToolTip", "Hide the geometry associated with the selected rigid bodies." },
		{ "HideWholeCollection.Comment", "// Hide the entire geometry collection associated with the selected rigid bodies.\n" },
		{ "HideWholeCollection.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideWholeCollection" },
		{ "HideWholeCollection.ToolTip", "Hide the entire geometry collection associated with the selected rigid bodies." },
		{ "HideWithCollision.Comment", "// Hide the geometry associated with rigid bodies that are selected for collision volume visualization.\n" },
		{ "HideWithCollision.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideWithCollision" },
		{ "HideWithCollision.ToolTip", "Hide the geometry associated with rigid bodies that are selected for collision volume visualization." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "EGeometryCollectionDebugDrawActorHideGeometry\n  Visibility enum." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideNone", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideNone },
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideWithCollision", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideWithCollision },
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideSelected", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideSelected },
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideWholeCollection", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideWholeCollection },
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideAll", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideAll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	"EGeometryCollectionDebugDrawActorHideGeometry",
	"EGeometryCollectionDebugDrawActorHideGeometry",
	Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry()
{
	if (!Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.InnerSingleton;
}
// End Enum EGeometryCollectionDebugDrawActorHideGeometry

// Begin ScriptStruct FGeometryCollectionDebugDrawWarningMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage;
class UScriptStruct* FGeometryCollectionDebugDrawWarningMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionDebugDrawWarningMessage"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionDebugDrawWarningMessage>()
{
	return FGeometryCollectionDebugDrawWarningMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FGeometryCollectionDebugDrawWarningMessage\n*   Empty structure used to embed a warning message in the UI through a detail customization.\n*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "FGeometryCollectionDebugDrawWarningMessage\n  Empty structure used to embed a warning message in the UI through a detail customization." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionDebugDrawWarningMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionDebugDrawWarningMessage",
	nullptr,
	0,
	sizeof(FGeometryCollectionDebugDrawWarningMessage),
	alignof(FGeometryCollectionDebugDrawWarningMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionDebugDrawWarningMessage

// Begin ScriptStruct FGeometryCollectionDebugDrawActorSelectedRigidBody
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody;
class UScriptStruct* FGeometryCollectionDebugDrawActorSelectedRigidBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionDebugDrawActorSelectedRigidBody"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionDebugDrawActorSelectedRigidBody>()
{
	return FGeometryCollectionDebugDrawActorSelectedRigidBody::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FGeometryCollectionDebugDrawActorSelectedRigidBody\n*   Structure used to select a rigid body id with a picking tool through a detail customization.\n*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "FGeometryCollectionDebugDrawActorSelectedRigidBody\n  Structure used to select a rigid body id with a picking tool through a detail customization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Selected Rigid Body" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Id of the selected rigid body whose to visualize debug informations. Use -1 to visualize all Geometry Collections. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Id of the selected rigid body whose to visualize debug informations. Use -1 to visualize all Geometry Collections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[] = {
		{ "Category", "Selected Rigid Body" },
		{ "Comment", "/** Chaos RBD Solver. Will use the world's default solver actor if null. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Chaos RBD Solver. Will use the world's default solver actor if null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollection_MetaData[] = {
		{ "Category", "Selected Rigid Body" },
		{ "Comment", "/** Currently selected geometry collection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Currently selected geometry collection." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Solver;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionDebugDrawActorSelectedRigidBody>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionDebugDrawActorSelectedRigidBody, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionDebugDrawActorSelectedRigidBody, Solver), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Solver_MetaData), NewProp_Solver_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_GeometryCollection = { "GeometryCollection", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionDebugDrawActorSelectedRigidBody, GeometryCollection), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollection_MetaData), NewProp_GeometryCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Solver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_GeometryCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionDebugDrawActorSelectedRigidBody",
	Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::PropPointers),
	sizeof(FGeometryCollectionDebugDrawActorSelectedRigidBody),
	alignof(FGeometryCollectionDebugDrawActorSelectedRigidBody),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionDebugDrawActorSelectedRigidBody

// Begin Class AGeometryCollectionDebugDrawActor
void AGeometryCollectionDebugDrawActor::StaticRegisterNativesAGeometryCollectionDebugDrawActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCollectionDebugDrawActor);
UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister()
{
	return AGeometryCollectionDebugDrawActor::StaticClass();
}
struct Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Replication Input Actor Collision LOD Cooking" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningMessage_MetaData[] = {
		{ "Comment", "/** Warning message to explain that the debug draw properties have no effect until starting playing/simulating. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Warning message to explain that the debug draw properties have no effect until starting playing/simulating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedRigidBody_MetaData[] = {
		{ "Comment", "/** Picking tool used to select a rigid body id. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Picking tool used to select a rigid body id." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawWholeCollection_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Show debug visualization for the rest of the geometry collection related to the current rigid body id selection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show debug visualization for the rest of the geometry collection related to the current rigid body id selection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawHierarchy_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Show debug visualization for the top level node rather than the bottom leaf nodes of a cluster's hierarchy. * Only affects Clustering and Geometry visualization.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show debug visualization for the top level node rather than the bottom leaf nodes of a cluster's hierarchy. * Only affects Clustering and Geometry visualization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawClustering_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Show debug visualization for all clustered children associated to the current rigid body id selection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show debug visualization for all clustered children associated to the current rigid body id selection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideGeometry_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Geometry visibility setting. Select the part of the geometry to hide in order to better visualize the debug information. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Geometry visibility setting. Select the part of the geometry to hide in order to better visualize the debug information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyId_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Display the selected rigid body's id. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Display the selected rigid body's id." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyCollision_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's collision volume. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's collision volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollisionAtOrigin_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's collision volume at the origin, in local space. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's collision volume at the origin, in local space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyTransform_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's transform. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyInertia_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's inertia tensor box. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's inertia tensor box." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyVelocity_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's linear and angular velocity. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's linear and angular velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyForce_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's applied force and torque. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's applied force and torque." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyInfos_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's on screen text information. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's on screen text information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransformIndex_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show the transform index for the selected rigid body's associated cluster nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the transform index for the selected rigid body's associated cluster nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransform_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show the transform for the selected rigid body's associated cluster nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the transform for the selected rigid body's associated cluster nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowParent_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show a link from the selected rigid body's associated cluster nodes to their parent's nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show a link from the selected rigid body's associated cluster nodes to their parent's nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowLevel_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show the hierarchical level for the selected rigid body's associated cluster nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the hierarchical level for the selected rigid body's associated cluster nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowConnectivityEdges_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show the connectivity edges for the selected rigid body's associated cluster nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the connectivity edges for the selected rigid body's associated cluster nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGeometryIndex_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the geometry index for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the geometry index for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGeometryTransform_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the geometry transform for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the geometry transform for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBoundingBox_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the bounding box for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the bounding box for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFaces_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the faces for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the faces for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFaceIndices_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the face indices for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the face indices for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFaceNormals_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the face normals for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the face normals for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSingleFace_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Enable single face visualization for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Enable single face visualization for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleFaceIndex_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The index of the single face to visualize. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "The index of the single face to visualize." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowVertices_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the vertices for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the vertices for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowVertexIndices_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the vertex indices for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the vertex indices for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowVertexNormals_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the vertex normals for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the vertex normals for the selected rigid body's associated geometries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseActiveVisualization_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Adapt visualization depending of the cluster nodes' hierarchical level. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Adapt visualization depending of the cluster nodes' hierarchical level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointThickness_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thickness of points when visualizing vertices. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Thickness of points when visualizing vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thickness of lines when visualizing faces, normals, ...etc. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Thickness of lines when visualizing faces, normals, ...etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTextShadow_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Draw shadows under the displayed text. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Draw shadows under the displayed text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale of the font used to display text. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale of the font used to display text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale factor used for visualizing normals. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale factor used for visualizing normals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale of the axis used for visualizing all transforms. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale of the axis used for visualizing all transforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Size of arrows used for visualizing normals, breaking information, ...etc. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Size of arrows used for visualizing normals, breaking information, ...etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyIdColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the rigid body ids. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the rigid body ids." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyTransformScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale for rigid body transform visualization. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale for rigid body transform visualization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyCollisionColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for collision primitives visualization. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for collision primitives visualization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyInertiaColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the rigid body inertia tensor box. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the rigid body inertia tensor box." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyVelocityColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for rigid body velocities visualization. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for rigid body velocities visualization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyForceColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for rigid body applied force and torque visualization. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for rigid body applied force and torque visualization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyInfoColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the rigid body infos. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the rigid body infos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformIndexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the transform indices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the transform indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale for cluster transform visualization. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale for cluster transform visualization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the levels. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the levels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the link from the parents. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the link from the parents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectivityEdgeThickness_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Line thickness used for the visualization of the rigid clustering connectivity edges. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Line thickness used for the visualization of the rigid clustering connectivity edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryIndexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the geometry indices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the geometry indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryTransformScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale for geometry transform visualization. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale for geometry transform visualization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the bounding boxes. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the bounding boxes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the faces. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the faces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the face indices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the face indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceNormalColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the face normals. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the face normals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleFaceColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the single face. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the single face." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the vertices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the vertex indices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the vertex indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexNormalColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the vertex normals. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the vertex normals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Display icon in the editor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Display icon in the editor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarningMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedRigidBody;
	static void NewProp_bDebugDrawWholeCollection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawWholeCollection;
	static void NewProp_bDebugDrawHierarchy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawHierarchy;
	static void NewProp_bDebugDrawClustering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawClustering;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HideGeometry_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HideGeometry;
	static void NewProp_bShowRigidBodyId_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyId;
	static void NewProp_bShowRigidBodyCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyCollision;
	static void NewProp_bCollisionAtOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollisionAtOrigin;
	static void NewProp_bShowRigidBodyTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyTransform;
	static void NewProp_bShowRigidBodyInertia_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyInertia;
	static void NewProp_bShowRigidBodyVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyVelocity;
	static void NewProp_bShowRigidBodyForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyForce;
	static void NewProp_bShowRigidBodyInfos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyInfos;
	static void NewProp_bShowTransformIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransformIndex;
	static void NewProp_bShowTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransform;
	static void NewProp_bShowParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParent;
	static void NewProp_bShowLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLevel;
	static void NewProp_bShowConnectivityEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConnectivityEdges;
	static void NewProp_bShowGeometryIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGeometryIndex;
	static void NewProp_bShowGeometryTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGeometryTransform;
	static void NewProp_bShowBoundingBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBoundingBox;
	static void NewProp_bShowFaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFaces;
	static void NewProp_bShowFaceIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFaceIndices;
	static void NewProp_bShowFaceNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFaceNormals;
	static void NewProp_bShowSingleFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSingleFace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SingleFaceIndex;
	static void NewProp_bShowVertices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVertices;
	static void NewProp_bShowVertexIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVertexIndices;
	static void NewProp_bShowVertexNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVertexNormals;
	static void NewProp_bUseActiveVisualization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActiveVisualization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static void NewProp_bTextShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTextShadow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyIdColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RigidBodyTransformScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyCollisionColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyInertiaColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyVelocityColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyForceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyInfoColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformIndexColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransformScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectivityEdgeThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryIndexColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeometryTransformScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceIndexColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceNormalColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleFaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexIndexColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexNormalColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionDebugDrawActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_WarningMessage = { "WarningMessage", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, WarningMessage_DEPRECATED), Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningMessage_MetaData), NewProp_WarningMessage_MetaData) }; // 3725312775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SelectedRigidBody = { "SelectedRigidBody", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, SelectedRigidBody_DEPRECATED), Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedRigidBody_MetaData), NewProp_SelectedRigidBody_MetaData) }; // 2738517745
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bDebugDrawWholeCollection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection = { "bDebugDrawWholeCollection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawWholeCollection_MetaData), NewProp_bDebugDrawWholeCollection_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bDebugDrawHierarchy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy = { "bDebugDrawHierarchy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawHierarchy_MetaData), NewProp_bDebugDrawHierarchy_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bDebugDrawClustering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering = { "bDebugDrawClustering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawClustering_MetaData), NewProp_bDebugDrawClustering_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry = { "HideGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, HideGeometry), Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideGeometry_MetaData), NewProp_HideGeometry_MetaData) }; // 1139763690
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyId = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId = { "bShowRigidBodyId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRigidBodyId_MetaData), NewProp_bShowRigidBodyId_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision = { "bShowRigidBodyCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRigidBodyCollision_MetaData), NewProp_bShowRigidBodyCollision_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bCollisionAtOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin = { "bCollisionAtOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollisionAtOrigin_MetaData), NewProp_bCollisionAtOrigin_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform = { "bShowRigidBodyTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRigidBodyTransform_MetaData), NewProp_bShowRigidBodyTransform_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyInertia = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia = { "bShowRigidBodyInertia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRigidBodyInertia_MetaData), NewProp_bShowRigidBodyInertia_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity = { "bShowRigidBodyVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRigidBodyVelocity_MetaData), NewProp_bShowRigidBodyVelocity_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce = { "bShowRigidBodyForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRigidBodyForce_MetaData), NewProp_bShowRigidBodyForce_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyInfos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos = { "bShowRigidBodyInfos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRigidBodyInfos_MetaData), NewProp_bShowRigidBodyInfos_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowTransformIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex = { "bShowTransformIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTransformIndex_MetaData), NewProp_bShowTransformIndex_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform = { "bShowTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTransform_MetaData), NewProp_bShowTransform_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent = { "bShowParent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowParent_MetaData), NewProp_bShowParent_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel = { "bShowLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowLevel_MetaData), NewProp_bShowLevel_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowConnectivityEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges = { "bShowConnectivityEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowConnectivityEdges_MetaData), NewProp_bShowConnectivityEdges_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowGeometryIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex = { "bShowGeometryIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGeometryIndex_MetaData), NewProp_bShowGeometryIndex_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowGeometryTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform = { "bShowGeometryTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGeometryTransform_MetaData), NewProp_bShowGeometryTransform_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowBoundingBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox = { "bShowBoundingBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBoundingBox_MetaData), NewProp_bShowBoundingBox_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowFaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces = { "bShowFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFaces_MetaData), NewProp_bShowFaces_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowFaceIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices = { "bShowFaceIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFaceIndices_MetaData), NewProp_bShowFaceIndices_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowFaceNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals = { "bShowFaceNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFaceNormals_MetaData), NewProp_bShowFaceNormals_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowSingleFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace = { "bShowSingleFace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSingleFace_MetaData), NewProp_bShowSingleFace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceIndex = { "SingleFaceIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, SingleFaceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleFaceIndex_MetaData), NewProp_SingleFaceIndex_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowVertices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices = { "bShowVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowVertices_MetaData), NewProp_bShowVertices_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowVertexIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices = { "bShowVertexIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowVertexIndices_MetaData), NewProp_bShowVertexIndices_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bShowVertexNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals = { "bShowVertexNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowVertexNormals_MetaData), NewProp_bShowVertexNormals_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bUseActiveVisualization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization = { "bUseActiveVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseActiveVisualization_MetaData), NewProp_bUseActiveVisualization_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness = { "PointThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, PointThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointThickness_MetaData), NewProp_PointThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_SetBit(void* Obj)
{
	((AGeometryCollectionDebugDrawActor*)Obj)->bTextShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow = { "bTextShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTextShadow_MetaData), NewProp_bTextShadow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, TextScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextScale_MetaData), NewProp_TextScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale = { "NormalScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, NormalScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalScale_MetaData), NewProp_NormalScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_AxisScale = { "AxisScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, AxisScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisScale_MetaData), NewProp_AxisScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale = { "ArrowScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, ArrowScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowScale_MetaData), NewProp_ArrowScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyIdColor = { "RigidBodyIdColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyIdColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBodyIdColor_MetaData), NewProp_RigidBodyIdColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyTransformScale = { "RigidBodyTransformScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyTransformScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBodyTransformScale_MetaData), NewProp_RigidBodyTransformScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyCollisionColor = { "RigidBodyCollisionColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyCollisionColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBodyCollisionColor_MetaData), NewProp_RigidBodyCollisionColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInertiaColor = { "RigidBodyInertiaColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyInertiaColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBodyInertiaColor_MetaData), NewProp_RigidBodyInertiaColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyVelocityColor = { "RigidBodyVelocityColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyVelocityColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBodyVelocityColor_MetaData), NewProp_RigidBodyVelocityColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyForceColor = { "RigidBodyForceColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyForceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBodyForceColor_MetaData), NewProp_RigidBodyForceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInfoColor = { "RigidBodyInfoColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyInfoColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBodyInfoColor_MetaData), NewProp_RigidBodyInfoColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformIndexColor = { "TransformIndexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, TransformIndexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformIndexColor_MetaData), NewProp_TransformIndexColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, TransformScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformScale_MetaData), NewProp_TransformScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LevelColor = { "LevelColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, LevelColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelColor_MetaData), NewProp_LevelColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ParentColor = { "ParentColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, ParentColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentColor_MetaData), NewProp_ParentColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ConnectivityEdgeThickness = { "ConnectivityEdgeThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, ConnectivityEdgeThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectivityEdgeThickness_MetaData), NewProp_ConnectivityEdgeThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryIndexColor = { "GeometryIndexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, GeometryIndexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryIndexColor_MetaData), NewProp_GeometryIndexColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryTransformScale = { "GeometryTransformScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, GeometryTransformScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryTransformScale_MetaData), NewProp_GeometryTransformScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_BoundingBoxColor = { "BoundingBoxColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, BoundingBoxColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxColor_MetaData), NewProp_BoundingBoxColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceColor = { "FaceColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, FaceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceColor_MetaData), NewProp_FaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceIndexColor = { "FaceIndexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, FaceIndexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceIndexColor_MetaData), NewProp_FaceIndexColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceNormalColor = { "FaceNormalColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, FaceNormalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceNormalColor_MetaData), NewProp_FaceNormalColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceColor = { "SingleFaceColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, SingleFaceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleFaceColor_MetaData), NewProp_SingleFaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, VertexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColor_MetaData), NewProp_VertexColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexIndexColor = { "VertexIndexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, VertexIndexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexIndexColor_MetaData), NewProp_VertexIndexColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexNormalColor = { "VertexNormalColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, VertexNormalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexNormalColor_MetaData), NewProp_VertexNormalColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_WarningMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SelectedRigidBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_AxisScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyIdColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyTransformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyCollisionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInertiaColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyVelocityColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyForceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInfoColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformIndexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LevelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ParentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ConnectivityEdgeThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryIndexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryTransformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_BoundingBoxColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceIndexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceNormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexIndexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexNormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SpriteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::ClassParams = {
	&AGeometryCollectionDebugDrawActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor()
{
	if (!Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.OuterSingleton, Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionDebugDrawActor>()
{
	return AGeometryCollectionDebugDrawActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionDebugDrawActor);
AGeometryCollectionDebugDrawActor::~AGeometryCollectionDebugDrawActor() {}
// End Class AGeometryCollectionDebugDrawActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGeometryCollectionDebugDrawActorHideGeometry_StaticEnum, TEXT("EGeometryCollectionDebugDrawActorHideGeometry"), &Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1139763690U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeometryCollectionDebugDrawWarningMessage::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::NewStructOps, TEXT("GeometryCollectionDebugDrawWarningMessage"), &Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionDebugDrawWarningMessage), 3725312775U) },
		{ FGeometryCollectionDebugDrawActorSelectedRigidBody::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewStructOps, TEXT("GeometryCollectionDebugDrawActorSelectedRigidBody"), &Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionDebugDrawActorSelectedRigidBody), 2738517745U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCollectionDebugDrawActor, AGeometryCollectionDebugDrawActor::StaticClass, TEXT("AGeometryCollectionDebugDrawActor"), &Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCollectionDebugDrawActor), 903870784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_473439068(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
