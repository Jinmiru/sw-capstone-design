// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTerrainComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainMaterial_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister();
PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class UPaperTerrainComponent Function SetTerrainColor
struct Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics
{
	struct PaperTerrainComponent_eventSetTerrainColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Set color of the terrain\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Set color of the terrain" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperTerrainComponent_eventSetTerrainColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTerrainComponent, nullptr, "SetTerrainColor", nullptr, nullptr, Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PaperTerrainComponent_eventSetTerrainColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PaperTerrainComponent_eventSetTerrainColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperTerrainComponent::execSetTerrainColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTerrainColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UPaperTerrainComponent Function SetTerrainColor

// Begin Class UPaperTerrainComponent
void UPaperTerrainComponent::StaticRegisterNativesUPaperTerrainComponent()
{
	UClass* Class = UPaperTerrainComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTerrainColor", &UPaperTerrainComponent::execSetTerrainColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTerrainComponent);
UClass* Z_Construct_UClass_UPaperTerrainComponent_NoRegister()
{
	return UPaperTerrainComponent::StaticClass();
}
struct Z_Construct_UClass_UPaperTerrainComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The terrain visualization component for an associated spline component.\n * This takes a 2D terrain material and instances sprite geometry along the spline path.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "PaperTerrainComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The terrain visualization component for an associated spline component.\nThis takes a 2D terrain material and instances sprite geometry along the spline path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMaterial_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** The terrain material to apply to this component (set of rules for which sprites are used on different surfaces or the interior) */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The terrain material to apply to this component (set of rules for which sprites are used on different surfaces or the interior)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosedSpline_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilledSpline_MetaData[] = {
		{ "Category", "Sprite" },
		{ "EditCondition", "bClosedSpline" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedSpline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Random seed used for choosing which spline meshes to use. */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Random seed used for choosing which spline meshes to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentOverlapAmount_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** The overlap amount between segments */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The overlap amount between segments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainColor_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** The color of the terrain (passed to the sprite material as a vertex color) */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The color of the terrain (passed to the sprite material as a vertex color)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReparamStepsPerSegment_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Number of steps per spline segment to place in the reparameterization table */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Number of steps per spline segment to place in the reparameterization table" },
		{ "UIMin", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteCollisionDomain_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision domain (no collision, 2D (experimental), or 3D) */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Collision domain (no collision, 2D (experimental), or 3D)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** The extrusion thickness of collision geometry when using a 3D collision domain */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The extrusion thickness of collision geometry when using a 3D collision domain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBodySetup_MetaData[] = {
		{ "Comment", "/** Description of collision */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMaterial;
	static void NewProp_bClosedSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedSpline;
	static void NewProp_bFilledSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilledSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedSpline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentOverlapAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TerrainColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReparamStepsPerSegment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpriteCollisionDomain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedBodySetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor, "SetTerrainColor" }, // 3348264292
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTerrainComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainMaterial = { "TerrainMaterial", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, TerrainMaterial), Z_Construct_UClass_UPaperTerrainMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainMaterial_MetaData), NewProp_TerrainMaterial_MetaData) };
void Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline_SetBit(void* Obj)
{
	((UPaperTerrainComponent*)Obj)->bClosedSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline = { "bClosedSpline", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperTerrainComponent), &Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosedSpline_MetaData), NewProp_bClosedSpline_MetaData) };
void Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline_SetBit(void* Obj)
{
	((UPaperTerrainComponent*)Obj)->bFilledSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline = { "bFilledSpline", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperTerrainComponent), &Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilledSpline_MetaData), NewProp_bFilledSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_AssociatedSpline = { "AssociatedSpline", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, AssociatedSpline), Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedSpline_MetaData), NewProp_AssociatedSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SegmentOverlapAmount = { "SegmentOverlapAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, SegmentOverlapAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentOverlapAmount_MetaData), NewProp_SegmentOverlapAmount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainColor = { "TerrainColor", nullptr, (EPropertyFlags)0x0020080200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, TerrainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainColor_MetaData), NewProp_TerrainColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_ReparamStepsPerSegment = { "ReparamStepsPerSegment", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, ReparamStepsPerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReparamStepsPerSegment_MetaData), NewProp_ReparamStepsPerSegment_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SpriteCollisionDomain = { "SpriteCollisionDomain", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, SpriteCollisionDomain), Z_Construct_UEnum_Paper2D_ESpriteCollisionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteCollisionDomain_MetaData), NewProp_SpriteCollisionDomain_MetaData) }; // 3506429279
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, CollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionThickness_MetaData), NewProp_CollisionThickness_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CachedBodySetup = { "CachedBodySetup", nullptr, (EPropertyFlags)0x0124080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainComponent, CachedBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBodySetup_MetaData), NewProp_CachedBodySetup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTerrainComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_AssociatedSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SegmentOverlapAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_ReparamStepsPerSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SpriteCollisionDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CollisionThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CachedBodySetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperTerrainComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTerrainComponent_Statics::ClassParams = {
	&UPaperTerrainComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPaperTerrainComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperTerrainComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperTerrainComponent()
{
	if (!Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton, Z_Construct_UClass_UPaperTerrainComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperTerrainComponent>()
{
	return UPaperTerrainComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTerrainComponent);
UPaperTerrainComponent::~UPaperTerrainComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTerrainComponent)
// End Class UPaperTerrainComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTerrainComponent, UPaperTerrainComponent::StaticClass, TEXT("UPaperTerrainComponent"), &Z_Registration_Info_UClass_UPaperTerrainComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTerrainComponent), 3211851620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_1774928385(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
