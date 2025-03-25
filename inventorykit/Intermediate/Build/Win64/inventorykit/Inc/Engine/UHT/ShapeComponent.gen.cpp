// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UShapeComponent Function SetLineThickness
struct Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics
{
	struct ShapeComponent_eventSetLineThickness_Parms
	{
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shape" },
		{ "Comment", "// Set the LineThickness\n" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Set the LineThickness" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShapeComponent_eventSetLineThickness_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShapeComponent, nullptr, "SetLineThickness", nullptr, nullptr, Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::ShapeComponent_eventSetLineThickness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::ShapeComponent_eventSetLineThickness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShapeComponent_SetLineThickness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShapeComponent_SetLineThickness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShapeComponent::execSetLineThickness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLineThickness(Z_Param_Thickness);
	P_NATIVE_END;
}
// End Class UShapeComponent Function SetLineThickness

// Begin Class UShapeComponent
void UShapeComponent::StaticRegisterNativesUShapeComponent()
{
	UClass* Class = UShapeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetLineThickness", &UShapeComponent::execSetLineThickness },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShapeComponent);
UClass* Z_Construct_UClass_UShapeComponent_NoRegister()
{
	return UShapeComponent::StaticClass();
}
struct Z_Construct_UClass_UShapeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * ShapeComponent is a PrimitiveComponent that is represented by a simple geometrical shape (sphere, capsule, box, etc).\n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/ShapeComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "ShapeComponent is a PrimitiveComponent that is represented by a simple geometrical shape (sphere, capsule, box, etc)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeBodySetup_MetaData[] = {
		{ "Comment", "/** Description of collision */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeColor_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Color used to draw the shape. */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Color used to draw the shape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOnlyIfSelected_MetaData[] = {
		{ "Comment", "/** Only show this component if the actor is selected */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Only show this component if the actor is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCollideWhenPlacing_MetaData[] = {
		{ "Comment", "/** If true it allows Collision when placing even if collision is not enabled*/" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "If true it allows Collision when placing even if collision is not enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicObstacle_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If set, shape will be exported for navigation as dynamic modifier instead of using regular collision data */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "If set, shape will be exported for navigation as dynamic modifier instead of using regular collision data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClassOverride_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Navigation area type override, null / none = no change to nav mesh.\n\x09 *  bDynamicObstacle must be true and bUseSystemDefaultAreaClass false to use this.\n\x09 */" },
		{ "EditCondition", "bDynamicObstacle && !bUseSystemDefaultObstacleAreaClass" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Navigation area type override, null / none = no change to nav mesh.\nbDynamicObstacle must be true and bUseSystemDefaultAreaClass false to use this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSystemDefaultObstacleAreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Uses FNavigationSystem::GetDefaultObstacleArea() by default instead of AreaClassOverride, bDynamicObstacle must be true to use this.  */" },
		{ "EditCondition", "bDynamicObstacle" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Uses FNavigationSystem::GetDefaultObstacleArea() by default instead of AreaClassOverride, bDynamicObstacle must be true to use this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Used to control the line thickness when rendering */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Used to control the line thickness when rendering" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShapeBodySetup;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeColor;
	static void NewProp_bDrawOnlyIfSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOnlyIfSelected;
	static void NewProp_bShouldCollideWhenPlacing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCollideWhenPlacing;
	static void NewProp_bDynamicObstacle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicObstacle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClassOverride;
	static void NewProp_bUseSystemDefaultObstacleAreaClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSystemDefaultObstacleAreaClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShapeComponent_SetLineThickness, "SetLineThickness" }, // 1705911429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShapeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup = { "ShapeBodySetup", nullptr, (EPropertyFlags)0x0114000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShapeComponent, ShapeBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeBodySetup_MetaData), NewProp_ShapeBodySetup_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShapeComponent, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavAreaBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClass_MetaData), NewProp_AreaClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor = { "ShapeColor", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShapeComponent, ShapeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeColor_MetaData), NewProp_ShapeColor_MetaData) };
void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_SetBit(void* Obj)
{
	((UShapeComponent*)Obj)->bDrawOnlyIfSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected = { "bDrawOnlyIfSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawOnlyIfSelected_MetaData), NewProp_bDrawOnlyIfSelected_MetaData) };
void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_SetBit(void* Obj)
{
	((UShapeComponent*)Obj)->bShouldCollideWhenPlacing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing = { "bShouldCollideWhenPlacing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCollideWhenPlacing_MetaData), NewProp_bShouldCollideWhenPlacing_MetaData) };
void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_SetBit(void* Obj)
{
	((UShapeComponent*)Obj)->bDynamicObstacle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle = { "bDynamicObstacle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicObstacle_MetaData), NewProp_bDynamicObstacle_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClassOverride = { "AreaClassOverride", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShapeComponent, AreaClassOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavAreaBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClassOverride_MetaData), NewProp_AreaClassOverride_MetaData) };
void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass_SetBit(void* Obj)
{
	((UShapeComponent*)Obj)->bUseSystemDefaultObstacleAreaClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass = { "bUseSystemDefaultObstacleAreaClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSystemDefaultObstacleAreaClass_MetaData), NewProp_bUseSystemDefaultObstacleAreaClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShapeComponent, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShapeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClassOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_LineThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShapeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShapeComponent_Statics::ClassParams = {
	&UShapeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShapeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::PropPointers),
	0,
	0x00A810A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UShapeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShapeComponent()
{
	if (!Z_Registration_Info_UClass_UShapeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShapeComponent.OuterSingleton, Z_Construct_UClass_UShapeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShapeComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UShapeComponent>()
{
	return UShapeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeComponent);
UShapeComponent::~UShapeComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UShapeComponent)
// End Class UShapeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShapeComponent, UShapeComponent::StaticClass, TEXT("UShapeComponent"), &Z_Registration_Info_UClass_UShapeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShapeComponent), 507117338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_1509631714(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
