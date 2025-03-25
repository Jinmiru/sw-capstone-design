// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavigationTestingActor.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationTestingActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavPathObserverInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationTestingActor();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavTestRenderingComponent_NoRegister();
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ENavCostDisplay();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Enum ENavCostDisplay
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavCostDisplay;
static UEnum* ENavCostDisplay_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ENavCostDisplay"));
	}
	return Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavCostDisplay::Type>()
{
	return ENavCostDisplay_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HeuristicOnly.Name", "ENavCostDisplay::HeuristicOnly" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "RealCostOnly.Name", "ENavCostDisplay::RealCostOnly" },
		{ "TotalCost.Name", "ENavCostDisplay::TotalCost" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavCostDisplay::TotalCost", (int64)ENavCostDisplay::TotalCost },
		{ "ENavCostDisplay::HeuristicOnly", (int64)ENavCostDisplay::HeuristicOnly },
		{ "ENavCostDisplay::RealCostOnly", (int64)ENavCostDisplay::RealCostOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"ENavCostDisplay",
	"ENavCostDisplay::Type",
	Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_ENavCostDisplay()
{
	if (!Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton;
}
// End Enum ENavCostDisplay

// Begin Class ANavigationTestingActor
void ANavigationTestingActor::StaticRegisterNativesANavigationTestingActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationTestingActor);
UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister()
{
	return ANavigationTestingActor::StaticClass();
}
struct Z_Construct_UClass_ANavigationTestingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Actor Input Rendering Replication HLOD Cooking" },
		{ "IncludePath", "NavigationTestingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[] = {
		{ "Comment", "/** Editor Preview */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Editor Preview" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvokerComponent_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditCondition", "bActAsNavigationInvoker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActAsNavigationInvoker_MetaData[] = {
		{ "Category", "Navigation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[] = {
		{ "Category", "Agent" },
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryingExtent_MetaData[] = {
		{ "Category", "Agent" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedLocation_MetaData[] = {
		{ "Category", "AgentStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectedLocationValid_MetaData[] = {
		{ "Category", "AgentStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchStart_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, start the search from this actor, else start the search from the other actor */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "if set, start the search from this actor, else start the search from the other actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CostLimitFactor_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0" },
		{ "Comment", "/** this multiplier is used to compute a max node cost allowed to the open list\n\x09 *\x09(cost limit = CostLimitFactor*InitialHeuristicEstimate) */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "this multiplier is used to compute a max node cost allowed to the open list\n    (cost limit = CostLimitFactor*InitialHeuristicEstimate)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumCostLimit_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0" },
		{ "Comment", "/** minimum cost limit clamping value (in cost units)\n\x09 *\x09used to allow large deviation in short paths */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "minimum cost limit clamping value (in cost units)\n    used to allow large deviation in short paths" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBacktracking_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** Instead of regular pathfinding from source to target location do\n\x09 *\x09""a 'backwards' search that searches from the source, but as if the allowed\n\x09 *\x09movement direction was coming from the target. Meaningful only for paths\n\x09 *\x09""containing one-direction nav links. */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Instead of regular pathfinding from source to target location do\n    a 'backwards' search that searches from the source, but as if the allowed\n    movement direction was coming from the target. Meaningful only for paths\n    containing one-direction nav links." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHierarchicalPathfinding_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGatherDetailedInfo_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, all steps of A* algorithm will be accessible for debugging */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "if set, all steps of A* algorithm will be accessible for debugging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNavigableEndLocation_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, require the end location to be close to the navigation data. The tolerance is controlled by QueryingExtent */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "if set, require the end location to be close to the navigation data. The tolerance is controlled by QueryingExtent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDistanceToWall_MetaData[] = {
		{ "Category", "Query" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawIfNavDataIsReadyInRadius_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** If set, a cylinder is drawn to indicate if the navigation data is ready (has been generated) for the given radius (green when ready, red otherwise). */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "If set, a cylinder is drawn to indicate if the navigation data is ready (has been generated) for the given radius (green when ready, red otherwise)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowNodePool_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show polys from open (orange) and closed (yellow) sets */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show polys from open (orange) and closed (yellow) sets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBestPath_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show current best path */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show current best path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDiffWithPreviousStep_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show which nodes were modified in current A* step */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show which nodes were modified in current A* step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInGame_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusUsedToValidateNavData_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** NavData must be ready for all tiles within radius. When using 0, NavData must be ready at the actor location. */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "NavData must be ready for all tiles within radius. When using 0, NavData must be ready at the actor location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CostDisplayMode_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** determines which cost will be shown*/" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "determines which cost will be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextCanvasOffset_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** text canvas offset to apply */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "text canvas offset to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPathExist_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPathIsPartial_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPathSearchOutOfNodes_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingTime_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "Comment", "/** Time in micro seconds */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Time in micro seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathCost_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingSteps_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowStepIndex_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Show debug steps up to this index. Use -1 to disable. */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Show debug steps up to this index. Use -1 to disable." },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetFromCornersDistance_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdRenderComp;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvokerComponent;
	static void NewProp_bActAsNavigationInvoker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActAsNavigationInvoker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavAgentProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryingExtent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyNavData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedLocation;
	static void NewProp_bProjectedLocationValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectedLocationValid;
	static void NewProp_bSearchStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CostLimitFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumCostLimit;
	static void NewProp_bBacktracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBacktracking;
	static void NewProp_bUseHierarchicalPathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHierarchicalPathfinding;
	static void NewProp_bGatherDetailedInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGatherDetailedInfo;
	static void NewProp_bRequireNavigableEndLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNavigableEndLocation;
	static void NewProp_bDrawDistanceToWall_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDistanceToWall;
	static void NewProp_bDrawIfNavDataIsReadyInRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawIfNavDataIsReadyInRadius;
	static void NewProp_bShowNodePool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNodePool;
	static void NewProp_bShowBestPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBestPath;
	static void NewProp_bShowDiffWithPreviousStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDiffWithPreviousStep;
	static void NewProp_bShouldBeVisibleInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInGame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusUsedToValidateNavData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CostDisplayMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextCanvasOffset;
	static void NewProp_bPathExist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathExist;
	static void NewProp_bPathIsPartial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathIsPartial;
	static void NewProp_bPathSearchOutOfNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathSearchOutOfNodes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PathfindingTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PathCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathfindingSteps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShowStepIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetFromCornersDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationTestingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComponent_MetaData), NewProp_CapsuleComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp = { "EdRenderComp", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, EdRenderComp), Z_Construct_UClass_UNavTestRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdRenderComp_MetaData), NewProp_EdRenderComp_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent = { "InvokerComponent", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, InvokerComponent), Z_Construct_UClass_UNavigationInvokerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvokerComponent_MetaData), NewProp_InvokerComponent_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bActAsNavigationInvoker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker = { "bActAsNavigationInvoker", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActAsNavigationInvoker_MetaData), NewProp_bActAsNavigationInvoker_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps = { "NavAgentProps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavAgentProps_MetaData), NewProp_NavAgentProps_MetaData) }; // 2797488484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent = { "QueryingExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, QueryingExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryingExtent_MetaData), NewProp_QueryingExtent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData = { "MyNavData", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyNavData_MetaData), NewProp_MyNavData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation = { "ProjectedLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, ProjectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectedLocation_MetaData), NewProp_ProjectedLocation_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bProjectedLocationValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid = { "bProjectedLocationValid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectedLocationValid_MetaData), NewProp_bProjectedLocationValid_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bSearchStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart = { "bSearchStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchStart_MetaData), NewProp_bSearchStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor = { "CostLimitFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, CostLimitFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CostLimitFactor_MetaData), NewProp_CostLimitFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit = { "MinimumCostLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, MinimumCostLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumCostLimit_MetaData), NewProp_MinimumCostLimit_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bBacktracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking = { "bBacktracking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBacktracking_MetaData), NewProp_bBacktracking_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bUseHierarchicalPathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding = { "bUseHierarchicalPathfinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHierarchicalPathfinding_MetaData), NewProp_bUseHierarchicalPathfinding_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bGatherDetailedInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo = { "bGatherDetailedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGatherDetailedInfo_MetaData), NewProp_bGatherDetailedInfo_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bRequireNavigableEndLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation = { "bRequireNavigableEndLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireNavigableEndLocation_MetaData), NewProp_bRequireNavigableEndLocation_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bDrawDistanceToWall = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall = { "bDrawDistanceToWall", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDistanceToWall_MetaData), NewProp_bDrawDistanceToWall_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawIfNavDataIsReadyInRadius_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bDrawIfNavDataIsReadyInRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawIfNavDataIsReadyInRadius = { "bDrawIfNavDataIsReadyInRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawIfNavDataIsReadyInRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawIfNavDataIsReadyInRadius_MetaData), NewProp_bDrawIfNavDataIsReadyInRadius_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bShowNodePool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool = { "bShowNodePool", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowNodePool_MetaData), NewProp_bShowNodePool_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bShowBestPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath = { "bShowBestPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBestPath_MetaData), NewProp_bShowBestPath_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bShowDiffWithPreviousStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep = { "bShowDiffWithPreviousStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDiffWithPreviousStep_MetaData), NewProp_bShowDiffWithPreviousStep_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bShouldBeVisibleInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame = { "bShouldBeVisibleInGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeVisibleInGame_MetaData), NewProp_bShouldBeVisibleInGame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_RadiusUsedToValidateNavData = { "RadiusUsedToValidateNavData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, RadiusUsedToValidateNavData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusUsedToValidateNavData_MetaData), NewProp_RadiusUsedToValidateNavData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode = { "CostDisplayMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, CostDisplayMode), Z_Construct_UEnum_NavigationSystem_ENavCostDisplay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CostDisplayMode_MetaData), NewProp_CostDisplayMode_MetaData) }; // 3495780377
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset = { "TextCanvasOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, TextCanvasOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextCanvasOffset_MetaData), NewProp_TextCanvasOffset_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bPathExist = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist = { "bPathExist", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPathExist_MetaData), NewProp_bPathExist_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bPathIsPartial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial = { "bPathIsPartial", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPathIsPartial_MetaData), NewProp_bPathIsPartial_MetaData) };
void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_SetBit(void* Obj)
{
	((ANavigationTestingActor*)Obj)->bPathSearchOutOfNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes = { "bPathSearchOutOfNodes", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPathSearchOutOfNodes_MetaData), NewProp_bPathSearchOutOfNodes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime = { "PathfindingTime", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, PathfindingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfindingTime_MetaData), NewProp_PathfindingTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost = { "PathCost", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, PathCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathCost_MetaData), NewProp_PathCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps = { "PathfindingSteps", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, PathfindingSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfindingSteps_MetaData), NewProp_PathfindingSteps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, OtherActor), Z_Construct_UClass_ANavigationTestingActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterClass_MetaData), NewProp_FilterClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex = { "ShowStepIndex", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, ShowStepIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowStepIndex_MetaData), NewProp_ShowStepIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance = { "OffsetFromCornersDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationTestingActor, OffsetFromCornersDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetFromCornersDistance_MetaData), NewProp_OffsetFromCornersDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawIfNavDataIsReadyInRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_RadiusUsedToValidateNavData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavigationTestingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationTestingActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationTestingActor, INavAgentInterface), false },  // 3971589188
	{ Z_Construct_UClass_UNavPathObserverInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationTestingActor, INavPathObserverInterface), false },  // 2060296677
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationTestingActor_Statics::ClassParams = {
	&ANavigationTestingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigationTestingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigationTestingActor()
{
	if (!Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton, Z_Construct_UClass_ANavigationTestingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationTestingActor>()
{
	return ANavigationTestingActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationTestingActor);
// End Class ANavigationTestingActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENavCostDisplay_StaticEnum, TEXT("ENavCostDisplay"), &Z_Registration_Info_UEnum_ENavCostDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3495780377U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationTestingActor, ANavigationTestingActor::StaticClass, TEXT("ANavigationTestingActor"), &Z_Registration_Info_UClass_ANavigationTestingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationTestingActor), 3471720462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_3401398104(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
