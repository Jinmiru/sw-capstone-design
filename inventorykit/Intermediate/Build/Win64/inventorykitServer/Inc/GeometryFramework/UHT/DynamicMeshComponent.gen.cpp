// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GeometryFramework/Public/Components/DynamicMeshComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode();
GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References

// Begin Enum EDynamicMeshComponentRenderUpdateMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode;
static UEnum* EDynamicMeshComponentRenderUpdateMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshComponentRenderUpdateMode"));
	}
	return Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentRenderUpdateMode>()
{
	return EDynamicMeshComponentRenderUpdateMode_StaticEnum();
}
struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Render data update hint */" },
		{ "FastUpdate.Comment", "/** Attempt to do partial update of render data if possible */" },
		{ "FastUpdate.Name", "EDynamicMeshComponentRenderUpdateMode::FastUpdate" },
		{ "FastUpdate.ToolTip", "Attempt to do partial update of render data if possible" },
		{ "FullUpdate.Comment", "/** Invalidate overlay of internal component, rebuilding all render data */" },
		{ "FullUpdate.Name", "EDynamicMeshComponentRenderUpdateMode::FullUpdate" },
		{ "FullUpdate.ToolTip", "Invalidate overlay of internal component, rebuilding all render data" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "NoUpdate.Comment", "/** Do not update render data */" },
		{ "NoUpdate.Name", "EDynamicMeshComponentRenderUpdateMode::NoUpdate" },
		{ "NoUpdate.ToolTip", "Do not update render data" },
		{ "ToolTip", "Render data update hint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDynamicMeshComponentRenderUpdateMode::NoUpdate", (int64)EDynamicMeshComponentRenderUpdateMode::NoUpdate },
		{ "EDynamicMeshComponentRenderUpdateMode::FullUpdate", (int64)EDynamicMeshComponentRenderUpdateMode::FullUpdate },
		{ "EDynamicMeshComponentRenderUpdateMode::FastUpdate", (int64)EDynamicMeshComponentRenderUpdateMode::FastUpdate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
	nullptr,
	"EDynamicMeshComponentRenderUpdateMode",
	"EDynamicMeshComponentRenderUpdateMode",
	Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode()
{
	if (!Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton;
}
// End Enum EDynamicMeshComponentRenderUpdateMode

// Begin Class UDynamicMeshComponent Function ConfigureMaterialSet
struct Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics
{
	struct DynamicMeshComponent_eventConfigureMaterialSet_Parms
	{
		TArray<UMaterialInterface*> NewMaterialSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set new list of Materials for the Mesh. Dynamic Mesh Component does not have \n\x09 * Slot Names, so the size of the Material Set should be the same as the number of\n\x09 * different Material IDs on the mesh MaterialID attribute\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Set new list of Materials for the Mesh. Dynamic Mesh Component does not have\nSlot Names, so the size of the Material Set should be the same as the number of\ndifferent Material IDs on the mesh MaterialID attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMaterialSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterialSet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMaterialSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet_Inner = { "NewMaterialSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet = { "NewMaterialSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicMeshComponent_eventConfigureMaterialSet_Parms, NewMaterialSet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMaterialSet_MetaData), NewProp_NewMaterialSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "ConfigureMaterialSet", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::DynamicMeshComponent_eventConfigureMaterialSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::DynamicMeshComponent_eventConfigureMaterialSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execConfigureMaterialSet)
{
	P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_NewMaterialSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureMaterialSet(Z_Param_Out_NewMaterialSet);
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function ConfigureMaterialSet

// Begin Class UDynamicMeshComponent Function EnableComplexAsSimpleCollision
struct Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * calls SetComplexAsSimpleCollisionEnabled(true, true)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "calls SetComplexAsSimpleCollisionEnabled(true, true)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "EnableComplexAsSimpleCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execEnableComplexAsSimpleCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableComplexAsSimpleCollision();
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function EnableComplexAsSimpleCollision

// Begin Class UDynamicMeshComponent Function GetTangentsType
struct Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics
{
	struct DynamicMeshComponent_eventGetTangentsType_Parms
	{
		EDynamicMeshComponentTangentsMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicMeshComponent_eventGetTangentsType_Parms, ReturnValue), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, METADATA_PARAMS(0, nullptr) }; // 2825355924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "GetTangentsType", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::DynamicMeshComponent_eventGetTangentsType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::DynamicMeshComponent_eventGetTangentsType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execGetTangentsType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDynamicMeshComponentTangentsMode*)Z_Param__Result=P_THIS->GetTangentsType();
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function GetTangentsType

// Begin Class UDynamicMeshComponent Function GetTangentsTypePure
struct Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics
{
	struct DynamicMeshComponent_eventGetTangentsTypePure_Parms
	{
		EDynamicMeshComponentTangentsMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "// pure version of GetTangentsType, so it can be used as a getter below (getters must be BlueprintPure)\n" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "pure version of GetTangentsType, so it can be used as a getter below (getters must be BlueprintPure)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicMeshComponent_eventGetTangentsTypePure_Parms, ReturnValue), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, METADATA_PARAMS(0, nullptr) }; // 2825355924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "GetTangentsTypePure", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::DynamicMeshComponent_eventGetTangentsTypePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::DynamicMeshComponent_eventGetTangentsTypePure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execGetTangentsTypePure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDynamicMeshComponentTangentsMode*)Z_Param__Result=P_THIS->GetTangentsTypePure();
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function GetTangentsTypePure

// Begin Class UDynamicMeshComponent Function NotifyMeshModified
struct Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Notify the Component that it's DynamicMesh has been modified externally. This will result in all Rendering Data\n\x09 * for the Component being rebuilt on the next frame (internally the Scene Proxy is fully destroyed and rebuilt).\n\x09 *\n\x09 * You must use this function if the mesh triangulation has been modified, or if polygroups or material assignments\n\x09 * have been changed, or if Normal/UV/Color topology has changed (ie new split-vertices have been introduced).\n\x09 * If only vertex attribute values (position, normals, UVs, colors) have been modified, then \n\x09 * Notify Vertex Attributes Updated can be used to do a faster update.\n\x09 */" },
		{ "DisplayName", "Notify Mesh Updated" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Notify the Component that it's DynamicMesh has been modified externally. This will result in all Rendering Data\nfor the Component being rebuilt on the next frame (internally the Scene Proxy is fully destroyed and rebuilt).\n\nYou must use this function if the mesh triangulation has been modified, or if polygroups or material assignments\nhave been changed, or if Normal/UV/Color topology has changed (ie new split-vertices have been introduced).\nIf only vertex attribute values (position, normals, UVs, colors) have been modified, then\nNotify Vertex Attributes Updated can be used to do a faster update." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "NotifyMeshModified", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execNotifyMeshModified)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyMeshModified();
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function NotifyMeshModified

// Begin Class UDynamicMeshComponent Function NotifyMeshVertexAttributesModified
struct Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics
{
	struct DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms
	{
		bool bPositions;
		bool bNormals;
		bool bUVs;
		bool bColors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Notify the Component that vertex attribute values of it's DynamicMesh have been modified externally. This will result in\n\x09 * Rendering vertex buffers being updated. This update path is more efficient than doing a full Notify Mesh Updated.\n\x09 * \n\x09 * @warning it is invalid to call this function if (1) the mesh triangulation has also been changed, (2) triangle MaterialIDs have been changed,\n\x09 * or (3) any attribute overlay (normal, color, UV) topology has been modified, ie split-vertices have been added/removed.\n\x09 * Behavior of this function is undefined in these cases and may crash. If you are unsure, use Notify Mesh Updated.\n\x09 */" },
		{ "CPP_Default_bColors", "true" },
		{ "CPP_Default_bNormals", "true" },
		{ "CPP_Default_bPositions", "true" },
		{ "CPP_Default_bUVs", "true" },
		{ "DisplayName", "Notify Vertex Attributes Updated" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Notify the Component that vertex attribute values of it's DynamicMesh have been modified externally. This will result in\nRendering vertex buffers being updated. This update path is more efficient than doing a full Notify Mesh Updated.\n\n@warning it is invalid to call this function if (1) the mesh triangulation has also been changed, (2) triangle MaterialIDs have been changed,\nor (3) any attribute overlay (normal, color, UV) topology has been modified, ie split-vertices have been added/removed.\nBehavior of this function is undefined in these cases and may crash. If you are unsure, use Notify Mesh Updated." },
	};
#endif // WITH_METADATA
	static void NewProp_bPositions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositions;
	static void NewProp_bNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormals;
	static void NewProp_bUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUVs;
	static void NewProp_bColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bPositions_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms*)Obj)->bPositions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bPositions = { "bPositions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bPositions_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bNormals_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms*)Obj)->bNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bNormals = { "bNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bNormals_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bUVs_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms*)Obj)->bUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bUVs = { "bUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bUVs_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bColors_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms*)Obj)->bColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bColors = { "bColors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bColors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::NewProp_bColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "NotifyMeshVertexAttributesModified", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::DynamicMeshComponent_eventNotifyMeshVertexAttributesModified_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execNotifyMeshVertexAttributesModified)
{
	P_GET_UBOOL(Z_Param_bPositions);
	P_GET_UBOOL(Z_Param_bNormals);
	P_GET_UBOOL(Z_Param_bUVs);
	P_GET_UBOOL(Z_Param_bColors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyMeshVertexAttributesModified(Z_Param_bPositions,Z_Param_bNormals,Z_Param_bUVs,Z_Param_bColors);
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function NotifyMeshVertexAttributesModified

// Begin Class UDynamicMeshComponent Function SetComplexAsSimpleCollisionEnabled
struct Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics
{
	struct DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms
	{
		bool bEnabled;
		bool bImmediateUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * If bEnabled=true, sets bEnableComplexCollision=true and CollisionType=CTF_UseComplexAsSimple\n\x09 * If bEnabled=true, sets bEnableComplexCollision=false and CollisionType=CTF_UseDefault\n\x09 * @param bImmediateUpdate if true, UpdateCollision(true) is called\n\x09 */" },
		{ "CPP_Default_bImmediateUpdate", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "If bEnabled=true, sets bEnableComplexCollision=true and CollisionType=CTF_UseComplexAsSimple\nIf bEnabled=true, sets bEnableComplexCollision=false and CollisionType=CTF_UseDefault\n@param bImmediateUpdate if true, UpdateCollision(true) is called" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bImmediateUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediateUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bImmediateUpdate_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms*)Obj)->bImmediateUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bImmediateUpdate = { "bImmediateUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bImmediateUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bImmediateUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "SetComplexAsSimpleCollisionEnabled", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execSetComplexAsSimpleCollisionEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_GET_UBOOL(Z_Param_bImmediateUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetComplexAsSimpleCollisionEnabled(Z_Param_bEnabled,Z_Param_bImmediateUpdate);
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function SetComplexAsSimpleCollisionEnabled

// Begin Class UDynamicMeshComponent Function SetDeferredCollisionUpdatesEnabled
struct Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics
{
	struct DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms
	{
		bool bEnabled;
		bool bImmediateUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set value of bDeferCollisionUpdates, when enabled, collision is not automatically recomputed each time the mesh changes.\n\x09 * @param bImmediateUpdate if true, UpdateCollision(true) is called if bEnabled=false, ie to force a collision rebuild\n\x09 */" },
		{ "CPP_Default_bImmediateUpdate", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Set value of bDeferCollisionUpdates, when enabled, collision is not automatically recomputed each time the mesh changes.\n@param bImmediateUpdate if true, UpdateCollision(true) is called if bEnabled=false, ie to force a collision rebuild" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bImmediateUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediateUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bImmediateUpdate_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms*)Obj)->bImmediateUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bImmediateUpdate = { "bImmediateUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bImmediateUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bImmediateUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "SetDeferredCollisionUpdatesEnabled", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execSetDeferredCollisionUpdatesEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_GET_UBOOL(Z_Param_bImmediateUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeferredCollisionUpdatesEnabled(Z_Param_bEnabled,Z_Param_bImmediateUpdate);
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function SetDeferredCollisionUpdatesEnabled

// Begin Class UDynamicMeshComponent Function SetDynamicMesh
struct Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics
{
	struct DynamicMeshComponent_eventSetDynamicMesh_Parms
	{
		UDynamicMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Replace the current UDynamicMesh with a new one, and transfer ownership of NewMesh to this Component.\n\x09 * This can be used to (eg) assign a UDynamicMesh created with NewObject in the Transient Package to this Component.\n\x09 * @warning If NewMesh is owned/Outer'd to another DynamicMeshComponent, a GLEO error may occur if that Component is serialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Replace the current UDynamicMesh with a new one, and transfer ownership of NewMesh to this Component.\nThis can be used to (eg) assign a UDynamicMesh created with NewObject in the Transient Package to this Component.\n@warning If NewMesh is owned/Outer'd to another DynamicMeshComponent, a GLEO error may occur if that Component is serialized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicMeshComponent_eventSetDynamicMesh_Parms, NewMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "SetDynamicMesh", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::DynamicMeshComponent_eventSetDynamicMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::DynamicMeshComponent_eventSetDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execSetDynamicMesh)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamicMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function SetDynamicMesh

// Begin Class UDynamicMeshComponent Function SetTangentsType
struct Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics
{
	struct DynamicMeshComponent_eventSetTangentsType_Parms
	{
		EDynamicMeshComponentTangentsMode NewTangentsType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTangentsType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTangentsType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::NewProp_NewTangentsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::NewProp_NewTangentsType = { "NewTangentsType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicMeshComponent_eventSetTangentsType_Parms, NewTangentsType), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, METADATA_PARAMS(0, nullptr) }; // 2825355924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::NewProp_NewTangentsType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::NewProp_NewTangentsType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "SetTangentsType", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::DynamicMeshComponent_eventSetTangentsType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::DynamicMeshComponent_eventSetTangentsType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execSetTangentsType)
{
	P_GET_ENUM(EDynamicMeshComponentTangentsMode,Z_Param_NewTangentsType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTangentsType(EDynamicMeshComponentTangentsMode(Z_Param_NewTangentsType));
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function SetTangentsType

// Begin Class UDynamicMeshComponent Function UpdateCollision
struct Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics
{
	struct DynamicMeshComponent_eventUpdateCollision_Parms
	{
		bool bOnlyIfPending;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Force an update of the Collision/Physics data for this Component.\n\x09 * @param bOnlyIfPending only update if a collision update is pending, ie the underlying DynamicMesh changed and bDeferCollisionUpdates is enabled\n\x09 */" },
		{ "CPP_Default_bOnlyIfPending", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Force an update of the Collision/Physics data for this Component.\n@param bOnlyIfPending only update if a collision update is pending, ie the underlying DynamicMesh changed and bDeferCollisionUpdates is enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyIfPending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfPending;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventUpdateCollision_Parms*)Obj)->bOnlyIfPending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending = { "bOnlyIfPending", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventUpdateCollision_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "UpdateCollision", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::DynamicMeshComponent_eventUpdateCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::DynamicMeshComponent_eventUpdateCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execUpdateCollision)
{
	P_GET_UBOOL(Z_Param_bOnlyIfPending);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCollision(Z_Param_bOnlyIfPending);
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function UpdateCollision

// Begin Class UDynamicMeshComponent Function ValidateMaterialSlots
struct Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics
{
	struct DynamicMeshComponent_eventValidateMaterialSlots_Parms
	{
		bool bCreateIfMissing;
		bool bDeleteExtraSlots;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Compute the maximum MaterialID on the DynamicMesh, and ensure that Material Slots match.\n\x09 * Pass both arguments as false to just do a check.\n\x09 * @param bCreateIfMissing if true, add extra (empty) Material Slots to match max MaterialID\n\x09 * @param bDeleteExtraSlots if true, extra Material Slots beyond max MaterialID are removed\n\x09 * @return true if at the end of this function, Material Slot Count == Max MaterialID\n\x09 */" },
		{ "CPP_Default_bCreateIfMissing", "true" },
		{ "CPP_Default_bDeleteExtraSlots", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Compute the maximum MaterialID on the DynamicMesh, and ensure that Material Slots match.\nPass both arguments as false to just do a check.\n@param bCreateIfMissing if true, add extra (empty) Material Slots to match max MaterialID\n@param bDeleteExtraSlots if true, extra Material Slots beyond max MaterialID are removed\n@return true if at the end of this function, Material Slot Count == Max MaterialID" },
	};
#endif // WITH_METADATA
	static void NewProp_bCreateIfMissing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfMissing;
	static void NewProp_bDeleteExtraSlots_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExtraSlots;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bCreateIfMissing_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventValidateMaterialSlots_Parms*)Obj)->bCreateIfMissing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bCreateIfMissing = { "bCreateIfMissing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventValidateMaterialSlots_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bCreateIfMissing_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bDeleteExtraSlots_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventValidateMaterialSlots_Parms*)Obj)->bDeleteExtraSlots = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bDeleteExtraSlots = { "bDeleteExtraSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventValidateMaterialSlots_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bDeleteExtraSlots_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DynamicMeshComponent_eventValidateMaterialSlots_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicMeshComponent_eventValidateMaterialSlots_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bCreateIfMissing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bDeleteExtraSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "ValidateMaterialSlots", nullptr, nullptr, Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::DynamicMeshComponent_eventValidateMaterialSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::DynamicMeshComponent_eventValidateMaterialSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicMeshComponent::execValidateMaterialSlots)
{
	P_GET_UBOOL(Z_Param_bCreateIfMissing);
	P_GET_UBOOL(Z_Param_bDeleteExtraSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateMaterialSlots(Z_Param_bCreateIfMissing,Z_Param_bDeleteExtraSlots);
	P_NATIVE_END;
}
// End Class UDynamicMeshComponent Function ValidateMaterialSlots

// Begin Class UDynamicMeshComponent
void UDynamicMeshComponent::StaticRegisterNativesUDynamicMeshComponent()
{
	UClass* Class = UDynamicMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigureMaterialSet", &UDynamicMeshComponent::execConfigureMaterialSet },
		{ "EnableComplexAsSimpleCollision", &UDynamicMeshComponent::execEnableComplexAsSimpleCollision },
		{ "GetTangentsType", &UDynamicMeshComponent::execGetTangentsType },
		{ "GetTangentsTypePure", &UDynamicMeshComponent::execGetTangentsTypePure },
		{ "NotifyMeshModified", &UDynamicMeshComponent::execNotifyMeshModified },
		{ "NotifyMeshVertexAttributesModified", &UDynamicMeshComponent::execNotifyMeshVertexAttributesModified },
		{ "SetComplexAsSimpleCollisionEnabled", &UDynamicMeshComponent::execSetComplexAsSimpleCollisionEnabled },
		{ "SetDeferredCollisionUpdatesEnabled", &UDynamicMeshComponent::execSetDeferredCollisionUpdatesEnabled },
		{ "SetDynamicMesh", &UDynamicMeshComponent::execSetDynamicMesh },
		{ "SetTangentsType", &UDynamicMeshComponent::execSetTangentsType },
		{ "UpdateCollision", &UDynamicMeshComponent::execUpdateCollision },
		{ "ValidateMaterialSlots", &UDynamicMeshComponent::execValidateMaterialSlots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshComponent);
UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister()
{
	return UDynamicMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UDynamicMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * UDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,\n * except it bases the renderable geometry off an internal UDynamicMesh instance (which\n * encapsulates a FDynamicMesh3). \n * \n * There is extensive support for partial updates to render buffers, customizing colors,\n * internally decomposing the mesh into separate chunks for more efficient render updates,\n * and support for attaching a 'Postprocessor' to generate a render mesh on-the-fly\n * See comment sections below for details.\n * \n */" },
		{ "HideCategories", "LOD LOD Mobility Trigger" },
		{ "IncludePath", "Components/DynamicMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "UDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,\nexcept it bases the renderable geometry off an internal UDynamicMesh instance (which\nencapsulates a FDynamicMesh3).\n\nThere is extensive support for partial updates to render buffers, customizing colors,\ninternally decomposing the mesh into separate chunks for more efficient render updates,\nand support for attaching a 'Postprocessor' to generate a render mesh on-the-fly\nSee comment sections below for details." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshObject_MetaData[] = {
		{ "Comment", "/**\n\x09 * Internal FDynamicMesh is stored inside a UDynamicMesh container, which allows it to be\n\x09 * used from BP, shared with other UObjects, and so on\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Internal FDynamicMesh is stored inside a UDynamicMesh container, which allows it to be\nused from BP, shared with other UObjects, and so on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentsType_MetaData[] = {
		{ "BlueprintGetter", "GetTangentsTypePure" },
		{ "BlueprintSetter", "SetTangentsType" },
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/** Tangent source defines whether we use the provided tangents on the Dynamic Mesh, autogenerate tangents, or do not use tangents */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Tangent source defines whether we use the provided tangents on the Dynamic Mesh, autogenerate tangents, or do not use tangents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/** Type of Collision Geometry to use for this Mesh */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Type of Collision Geometry to use for this Mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/**\n\x09 *\x09""Controls whether the physics cooking should be done off the game thread.\n\x09 *  This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Controls whether the physics cooking should be done off the game thread.\nThis should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableComplexCollision_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/** \n\x09 * If true, current mesh will be used as Complex Collision source mesh. \n\x09 * This is independent of the CollisionType setting, ie, even if Complex collision is enabled, if this is false, then the Complex Collision mesh will be empty\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "If true, current mesh will be used as Complex Collision source mesh.\nThis is independent of the CollisionType setting, ie, even if Complex collision is enabled, if this is false, then the Complex Collision mesh will be empty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeferCollisionUpdates_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/** If true, updates to the mesh will not result in immediate collision regeneration. Useful when the mesh will be modified multiple times before collision is needed. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "If true, updates to the mesh will not result in immediate collision regeneration. Useful when the mesh will be modified multiple times before collision is needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBodySetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggGeom_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** Simplified collision representation for the mesh component  */" },
		{ "DisplayName", "Primitives" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Simplified collision representation for the mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[] = {
		{ "Comment", "/** Queue for async body setups that are being cooked */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Queue for async body setups that are being cooked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentsType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TangentsType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
	static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
	static void NewProp_bEnableComplexCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableComplexCollision;
	static void NewProp_bDeferCollisionUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferCollisionUpdates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshBodySetup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggGeom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncBodySetupQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet, "ConfigureMaterialSet" }, // 3656358006
		{ &Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision, "EnableComplexAsSimpleCollision" }, // 3662846603
		{ &Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType, "GetTangentsType" }, // 872800331
		{ &Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure, "GetTangentsTypePure" }, // 3864616802
		{ &Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified, "NotifyMeshModified" }, // 1424929961
		{ &Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified, "NotifyMeshVertexAttributesModified" }, // 659598621
		{ &Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled, "SetComplexAsSimpleCollisionEnabled" }, // 613561915
		{ &Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled, "SetDeferredCollisionUpdatesEnabled" }, // 976593352
		{ &Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh, "SetDynamicMesh" }, // 363591645
		{ &Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType, "SetTangentsType" }, // 1672304869
		{ &Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision, "UpdateCollision" }, // 2639711949
		{ &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots, "ValidateMaterialSlots" }, // 3729833463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshObject = { "MeshObject", nullptr, (EPropertyFlags)0x0126080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicMeshComponent, MeshObject), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshObject_MetaData), NewProp_MeshObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType = { "TangentsType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicMeshComponent, TangentsType), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentsType_MetaData), NewProp_TangentsType_MetaData) }; // 2825355924
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicMeshComponent, CollisionType), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 4042370968
void Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
{
	((UDynamicMeshComponent*)Obj)->bUseAsyncCooking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDynamicMeshComponent), &Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncCooking_MetaData), NewProp_bUseAsyncCooking_MetaData) };
void Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision_SetBit(void* Obj)
{
	((UDynamicMeshComponent*)Obj)->bEnableComplexCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision = { "bEnableComplexCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDynamicMeshComponent), &Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableComplexCollision_MetaData), NewProp_bEnableComplexCollision_MetaData) };
void Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates_SetBit(void* Obj)
{
	((UDynamicMeshComponent*)Obj)->bDeferCollisionUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates = { "bDeferCollisionUpdates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDynamicMeshComponent), &Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeferCollisionUpdates_MetaData), NewProp_bDeferCollisionUpdates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshBodySetup = { "MeshBodySetup", nullptr, (EPropertyFlags)0x0126080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicMeshComponent, MeshBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBodySetup_MetaData), NewProp_MeshBodySetup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AggGeom = { "AggGeom", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicMeshComponent, AggGeom), Z_Construct_UScriptStruct_FKAggregateGeom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggGeom_MetaData), NewProp_AggGeom_MetaData) }; // 1026465065
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicMeshComponent, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncBodySetupQueue_MetaData), NewProp_AsyncBodySetupQueue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_CollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshBodySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AggGeom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDynamicMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseDynamicMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDynamicMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponent, IInterface_CollisionDataProvider), false },  // 4090871341
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshComponent_Statics::ClassParams = {
	&UDynamicMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDynamicMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicMeshComponent()
{
	if (!Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton, Z_Construct_UClass_UDynamicMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UDynamicMeshComponent>()
{
	return UDynamicMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshComponent);
UDynamicMeshComponent::~UDynamicMeshComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDynamicMeshComponent)
// End Class UDynamicMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDynamicMeshComponentRenderUpdateMode_StaticEnum, TEXT("EDynamicMeshComponentRenderUpdateMode"), &Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 78345951U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshComponent, UDynamicMeshComponent::StaticClass, TEXT("UDynamicMeshComponent"), &Z_Registration_Info_UClass_UDynamicMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshComponent), 1958489895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_1600262314(TEXT("/Script/GeometryFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
