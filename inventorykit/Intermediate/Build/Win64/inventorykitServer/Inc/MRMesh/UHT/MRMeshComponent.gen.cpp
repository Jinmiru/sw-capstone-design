// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MRMesh/Public/MRMeshComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
MRMESH_API UClass* Z_Construct_UClass_UMRMeshBodyHolder();
MRMESH_API UClass* Z_Construct_UClass_UMRMeshBodyHolder_NoRegister();
MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent();
MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MRMesh();
// End Cross Module References

// Begin Class UMRMeshBodyHolder
void UMRMeshBodyHolder::StaticRegisterNativesUMRMeshBodyHolder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRMeshBodyHolder);
UClass* Z_Construct_UClass_UMRMeshBodyHolder_NoRegister()
{
	return UMRMeshBodyHolder::StaticClass();
}
struct Z_Construct_UClass_UMRMeshBodyHolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Because physics cooking uses GetOuter() to get the IInterface_CollisionDataProvider and provides no way to determine which physics body it\n// is currently working on we are wrapping each body in this Holder so that it can be the Outer and provide the correct data.\n" },
		{ "IncludePath", "MRMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Because physics cooking uses GetOuter() to get the IInterface_CollisionDataProvider and provides no way to determine which physics body it\nis currently working on we are wrapping each body in this Holder so that it can be the Outer and provide the correct data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRMeshBodyHolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRMeshBodyHolder, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_MetaData), NewProp_BodySetup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRMeshBodyHolder, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 3706165537
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRMeshBodyHolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodyInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshBodyHolder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMRMeshBodyHolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshBodyHolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMRMeshBodyHolder_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UMRMeshBodyHolder, IInterface_CollisionDataProvider), false },  // 4090871341
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRMeshBodyHolder_Statics::ClassParams = {
	&UMRMeshBodyHolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMRMeshBodyHolder_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshBodyHolder_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshBodyHolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRMeshBodyHolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMRMeshBodyHolder()
{
	if (!Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton, Z_Construct_UClass_UMRMeshBodyHolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton;
}
template<> MRMESH_API UClass* StaticClass<UMRMeshBodyHolder>()
{
	return UMRMeshBodyHolder::StaticClass();
}
UMRMeshBodyHolder::UMRMeshBodyHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMRMeshBodyHolder);
UMRMeshBodyHolder::~UMRMeshBodyHolder() {}
// End Class UMRMeshBodyHolder

// Begin Class UMRMeshComponent Function Clear
struct Z_Construct_UFunction_UMRMeshComponent_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "Clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMRMeshComponent_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function Clear

// Begin Class UMRMeshComponent Function ForceNavMeshUpdate
struct Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09* Force navmesh generation to run using the current collision data.  This will run even if the collision data has not been udpated! Unless you are changing navmesh settings or similar RequestNavMeshUpdate is reccomended.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Force navmesh generation to run using the current collision data.  This will run even if the collision data has not been udpated! Unless you are changing navmesh settings or similar RequestNavMeshUpdate is reccomended." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "ForceNavMeshUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execForceNavMeshUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceNavMeshUpdate();
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function ForceNavMeshUpdate

// Begin Class UMRMeshComponent Function GetEnableMeshOcclusion
struct Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics
{
	struct MRMeshComponent_eventGetEnableMeshOcclusion_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MRMeshComponent_eventGetEnableMeshOcclusion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRMeshComponent_eventGetEnableMeshOcclusion_Parms), &Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetEnableMeshOcclusion", nullptr, nullptr, Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::MRMeshComponent_eventGetEnableMeshOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::MRMeshComponent_eventGetEnableMeshOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execGetEnableMeshOcclusion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnableMeshOcclusion();
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function GetEnableMeshOcclusion

// Begin Class UMRMeshComponent Function GetUseWireframe
struct Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics
{
	struct MRMeshComponent_eventGetUseWireframe_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MRMeshComponent_eventGetUseWireframe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRMeshComponent_eventGetUseWireframe_Parms), &Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetUseWireframe", nullptr, nullptr, Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::MRMeshComponent_eventGetUseWireframe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::MRMeshComponent_eventGetUseWireframe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execGetUseWireframe)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUseWireframe();
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function GetUseWireframe

// Begin Class UMRMeshComponent Function GetWireframeColor
struct Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics
{
	struct MRMeshComponent_eventGetWireframeColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRMeshComponent_eventGetWireframeColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetWireframeColor", nullptr, nullptr, Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::MRMeshComponent_eventGetWireframeColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::MRMeshComponent_eventGetWireframeColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execGetWireframeColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetWireframeColor();
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function GetWireframeColor

// Begin Class UMRMeshComponent Function IsConnected
struct Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics
{
	struct MRMeshComponent_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MRMeshComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRMeshComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::MRMeshComponent_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::MRMeshComponent_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRMeshComponent_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function IsConnected

// Begin Class UMRMeshComponent Function RequestNavMeshUpdate
struct Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09* Generate nav mesh if collision data has changed since the last nav mesh generation.  \n\x09*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Generate nav mesh if collision data has changed since the last nav mesh generation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "RequestNavMeshUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execRequestNavMeshUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestNavMeshUpdate();
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function RequestNavMeshUpdate

// Begin Class UMRMeshComponent Function SetEnableMeshOcclusion
struct Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics
{
	struct MRMeshComponent_eventSetEnableMeshOcclusion_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((MRMeshComponent_eventSetEnableMeshOcclusion_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRMeshComponent_eventSetEnableMeshOcclusion_Parms), &Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetEnableMeshOcclusion", nullptr, nullptr, Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::MRMeshComponent_eventSetEnableMeshOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::MRMeshComponent_eventSetEnableMeshOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execSetEnableMeshOcclusion)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableMeshOcclusion(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function SetEnableMeshOcclusion

// Begin Class UMRMeshComponent Function SetUseWireframe
struct Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics
{
	struct MRMeshComponent_eventSetUseWireframe_Parms
	{
		bool bUseWireframe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe_SetBit(void* Obj)
{
	((MRMeshComponent_eventSetUseWireframe_Parms*)Obj)->bUseWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe = { "bUseWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRMeshComponent_eventSetUseWireframe_Parms), &Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetUseWireframe", nullptr, nullptr, Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::MRMeshComponent_eventSetUseWireframe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::MRMeshComponent_eventSetUseWireframe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execSetUseWireframe)
{
	P_GET_UBOOL(Z_Param_bUseWireframe);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseWireframe(Z_Param_bUseWireframe);
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function SetUseWireframe

// Begin Class UMRMeshComponent Function SetWireframeColor
struct Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics
{
	struct MRMeshComponent_eventSetWireframeColor_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRMeshComponent_eventSetWireframeColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColor_MetaData), NewProp_InColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetWireframeColor", nullptr, nullptr, Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::MRMeshComponent_eventSetWireframeColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::MRMeshComponent_eventSetWireframeColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execSetWireframeColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWireframeColor(Z_Param_Out_InColor);
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function SetWireframeColor

// Begin Class UMRMeshComponent Function SetWireframeMaterial
struct Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics
{
	struct MRMeshComponent_eventSetWireframeMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "// Set the wireframe material.\n" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Set the wireframe material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRMeshComponent_eventSetWireframeMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetWireframeMaterial", nullptr, nullptr, Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::MRMeshComponent_eventSetWireframeMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::MRMeshComponent_eventSetWireframeMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRMeshComponent::execSetWireframeMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWireframeMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// End Class UMRMeshComponent Function SetWireframeMaterial

// Begin Class UMRMeshComponent
void UMRMeshComponent::StaticRegisterNativesUMRMeshComponent()
{
	UClass* Class = UMRMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Clear", &UMRMeshComponent::execClear },
		{ "ForceNavMeshUpdate", &UMRMeshComponent::execForceNavMeshUpdate },
		{ "GetEnableMeshOcclusion", &UMRMeshComponent::execGetEnableMeshOcclusion },
		{ "GetUseWireframe", &UMRMeshComponent::execGetUseWireframe },
		{ "GetWireframeColor", &UMRMeshComponent::execGetWireframeColor },
		{ "IsConnected", &UMRMeshComponent::execIsConnected },
		{ "RequestNavMeshUpdate", &UMRMeshComponent::execRequestNavMeshUpdate },
		{ "SetEnableMeshOcclusion", &UMRMeshComponent::execSetEnableMeshOcclusion },
		{ "SetUseWireframe", &UMRMeshComponent::execSetUseWireframe },
		{ "SetWireframeColor", &UMRMeshComponent::execSetWireframeColor },
		{ "SetWireframeMaterial", &UMRMeshComponent::execSetWireframeMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRMeshComponent);
UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister()
{
	return UMRMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UMRMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Physics Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MRMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeMaterial_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMeshProxySections_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, MRMesh will create a renderable mesh proxy.  If false it will not, but could still provide collision. */" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will create a renderable mesh proxy.  If false it will not, but could still provide collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavMeshOnMeshUpdate_MetaData[] = {
		{ "Category", "MRMesh" },
		{ "Comment", "/** If true, MRMesh will automatically update its navmesh whenever any Mesh section is updated. This may be expensive. If this is disabled use ForceNavMeshUpdate to trigger a navmesh update when necessary.  Moving the component will also trigger a navmesh update.*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will automatically update its navmesh whenever any Mesh section is updated. This may be expensive. If this is disabled use ForceNavMeshUpdate to trigger a navmesh update when necessary.  Moving the component will also trigger a navmesh update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeverCreateCollisionMesh_MetaData[] = {
		{ "Category", "MRMesh" },
		{ "Comment", "/** If true, MRMesh will not create a collidable ridgid body for each mesh section and can therefore never have collision.  Avoids the cost of generating collision.*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will not create a collidable ridgid body for each mesh section and can therefore never have collision.  Avoids the cost of generating collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyHolders_MetaData[] = {
		{ "Comment", "// Collision/Physics data\n" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Collision/Physics data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WireframeMaterial;
	static void NewProp_bCreateMeshProxySections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMeshProxySections;
	static void NewProp_bUpdateNavMeshOnMeshUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavMeshOnMeshUpdate;
	static void NewProp_bNeverCreateCollisionMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverCreateCollisionMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyHolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BodyHolders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRMeshComponent_Clear, "Clear" }, // 3060705892
		{ &Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate, "ForceNavMeshUpdate" }, // 3735536990
		{ &Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion, "GetEnableMeshOcclusion" }, // 4084880788
		{ &Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe, "GetUseWireframe" }, // 1596214876
		{ &Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor, "GetWireframeColor" }, // 833577826
		{ &Z_Construct_UFunction_UMRMeshComponent_IsConnected, "IsConnected" }, // 168268923
		{ &Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate, "RequestNavMeshUpdate" }, // 1043334830
		{ &Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion, "SetEnableMeshOcclusion" }, // 1358358647
		{ &Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe, "SetUseWireframe" }, // 2287457587
		{ &Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor, "SetWireframeColor" }, // 3907047338
		{ &Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial, "SetWireframeMaterial" }, // 854975815
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRMeshComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial = { "WireframeMaterial", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRMeshComponent, WireframeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeMaterial_MetaData), NewProp_WireframeMaterial_MetaData) };
void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit(void* Obj)
{
	((UMRMeshComponent*)Obj)->bCreateMeshProxySections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections = { "bCreateMeshProxySections", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMeshProxySections_MetaData), NewProp_bCreateMeshProxySections_MetaData) };
void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit(void* Obj)
{
	((UMRMeshComponent*)Obj)->bUpdateNavMeshOnMeshUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate = { "bUpdateNavMeshOnMeshUpdate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateNavMeshOnMeshUpdate_MetaData), NewProp_bUpdateNavMeshOnMeshUpdate_MetaData) };
void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_SetBit(void* Obj)
{
	((UMRMeshComponent*)Obj)->bNeverCreateCollisionMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh = { "bNeverCreateCollisionMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeverCreateCollisionMesh_MetaData), NewProp_bNeverCreateCollisionMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders_Inner = { "BodyHolders", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMRMeshBodyHolder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders = { "BodyHolders", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRMeshComponent, BodyHolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyHolders_MetaData), NewProp_BodyHolders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMRMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams = {
	&UMRMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMRMeshComponent()
{
	if (!Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton, Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton;
}
template<> MRMESH_API UClass* StaticClass<UMRMeshComponent>()
{
	return UMRMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMRMeshComponent);
UMRMeshComponent::~UMRMeshComponent() {}
// End Class UMRMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRMeshBodyHolder, UMRMeshBodyHolder::StaticClass, TEXT("UMRMeshBodyHolder"), &Z_Registration_Info_UClass_UMRMeshBodyHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRMeshBodyHolder), 3520600741U) },
		{ Z_Construct_UClass_UMRMeshComponent, UMRMeshComponent::StaticClass, TEXT("UMRMeshComponent"), &Z_Registration_Info_UClass_UMRMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRMeshComponent), 2040321177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_894201197(TEXT("/Script/MRMesh"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
