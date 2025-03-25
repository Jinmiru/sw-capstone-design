// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceGrid3DCollection.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid3DCollection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceGrid3DCollection Function FillRawVolumeTexture
struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics
{
	struct NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms
	{
		const UNiagaraComponent* Component;
		UVolumeTexture* Dest;
		int32 TilesX;
		int32 TilesY;
		int32 TileZ;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by object user variables on the emitter to specify render targets to fill with data." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TilesX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TilesY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileZ;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, Dest), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesX = { "TilesX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TilesX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesY = { "TilesY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TilesY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TileZ = { "TileZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TileZ), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TileZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "FillRawVolumeTexture", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execFillRawVolumeTexture)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
	P_GET_OBJECT(UVolumeTexture,Z_Param_Dest);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TilesX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TilesY);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FillRawVolumeTexture(Z_Param_Component,Z_Param_Dest,Z_Param_Out_TilesX,Z_Param_Out_TilesY,Z_Param_Out_TileZ);
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceGrid3DCollection Function FillRawVolumeTexture

// Begin Class UNiagaraDataInterfaceGrid3DCollection Function FillVolumeTexture
struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics
{
	struct NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms
	{
		const UNiagaraComponent* Component;
		UVolumeTexture* dest;
		int32 AttributeIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "// Fills a texture render target 2d with the current data from the simulation\n// #todo(dmp): this will eventually go away when we formalize how data makes it out of Niagara\n// #todo(dmp): reimplement for 3d\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by object user variables on the emitter to specify render targets to fill with data." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Fills a texture render target 2d with the current data from the simulation\n#todo(dmp): this will eventually go away when we formalize how data makes it out of Niagara\n#todo(dmp): reimplement for 3d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_dest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_dest = { "dest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, dest), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, AttributeIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_AttributeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "FillVolumeTexture", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execFillVolumeTexture)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
	P_GET_OBJECT(UVolumeTexture,Z_Param_dest);
	P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FillVolumeTexture(Z_Param_Component,Z_Param_dest,Z_Param_AttributeIndex);
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceGrid3DCollection Function FillVolumeTexture

// Begin Class UNiagaraDataInterfaceGrid3DCollection Function GetRawTextureSize
struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics
{
	struct NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms
	{
		const UNiagaraComponent* Component;
		int32 SizeX;
		int32 SizeY;
		int32 SizeZ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "GetRawTextureSize", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execGetRawTextureSize)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeY);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRawTextureSize(Z_Param_Component,Z_Param_Out_SizeX,Z_Param_Out_SizeY,Z_Param_Out_SizeZ);
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceGrid3DCollection Function GetRawTextureSize

// Begin Class UNiagaraDataInterfaceGrid3DCollection Function GetTextureSize
struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics
{
	struct NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms
	{
		const UNiagaraComponent* Component;
		int32 SizeX;
		int32 SizeY;
		int32 SizeZ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "GetTextureSize", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execGetTextureSize)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeY);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTextureSize(Z_Param_Component,Z_Param_Out_SizeX,Z_Param_Out_SizeY,Z_Param_Out_SizeZ);
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceGrid3DCollection Function GetTextureSize

// Begin Class UNiagaraDataInterfaceGrid3DCollection
void UNiagaraDataInterfaceGrid3DCollection::StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection()
{
	UClass* Class = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FillRawVolumeTexture", &UNiagaraDataInterfaceGrid3DCollection::execFillRawVolumeTexture },
		{ "FillVolumeTexture", &UNiagaraDataInterfaceGrid3DCollection::execFillVolumeTexture },
		{ "GetRawTextureSize", &UNiagaraDataInterfaceGrid3DCollection::execGetRawTextureSize },
		{ "GetTextureSize", &UNiagaraDataInterfaceGrid3DCollection::execGetTextureSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGrid3DCollection);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_NoRegister()
{
	return UNiagaraDataInterfaceGrid3DCollection::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Grid" },
		{ "DisplayName", "Grid3D Collection" },
		{ "IncludePath", "NiagaraDataInterfaceGrid3DCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAttributes_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of attributes stored on the grid\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Number of attributes stored on the grid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetUserParameter_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBufferFormat_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** When enabled overrides the format used to store data inside the grid, otherwise uses the project default setting.  Lower bit depth formats will save memory and performance at the cost of precision. */" },
		{ "EditCondition", "bOverrideFormat" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "When enabled overrides the format used to store data inside the grid, otherwise uses the project default setting.  Lower bit depth formats will save memory and performance at the cost of precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFormat_MetaData[] = {
		{ "Category", "Grid" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "PinHiddenByDefault", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewGrid_MetaData[] = {
		{ "Category", "Grid" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAttribute_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditCondition", "bPreviewGrid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "When enabled allows you to preview the grid in a debug display" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetUserParameter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideBufferFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideBufferFormat;
	static void NewProp_bOverrideFormat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFormat;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPreviewGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewGrid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewAttribute;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture, "FillRawVolumeTexture" }, // 665710579
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture, "FillVolumeTexture" }, // 1264581741
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize, "GetRawTextureSize" }, // 865551119
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize, "GetTextureSize" }, // 3507944895
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid3DCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes = { "NumAttributes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, NumAttributes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAttributes_MetaData), NewProp_NumAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter = { "RenderTargetUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetUserParameter_MetaData), NewProp_RenderTargetUserParameter_MetaData) }; // 174428838
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat = { "OverrideBufferFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, OverrideBufferFormat), Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideBufferFormat_MetaData), NewProp_OverrideBufferFormat_MetaData) }; // 3847478653
void Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceGrid3DCollection*)Obj)->bOverrideFormat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat = { "bOverrideFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceGrid3DCollection), &Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFormat_MetaData), NewProp_bOverrideFormat_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceGrid3DCollection*)Obj)->bPreviewGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid = { "bPreviewGrid", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceGrid3DCollection), &Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewGrid_MetaData), NewProp_bPreviewGrid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_PreviewAttribute = { "PreviewAttribute", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, PreviewAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAttribute_MetaData), NewProp_PreviewAttribute_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_PreviewAttribute,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3D,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::ClassParams = {
	&UNiagaraDataInterfaceGrid3DCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid3DCollection>()
{
	return UNiagaraDataInterfaceGrid3DCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid3DCollection);
UNiagaraDataInterfaceGrid3DCollection::~UNiagaraDataInterfaceGrid3DCollection() {}
// End Class UNiagaraDataInterfaceGrid3DCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, UNiagaraDataInterfaceGrid3DCollection::StaticClass, TEXT("UNiagaraDataInterfaceGrid3DCollection"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGrid3DCollection), 950392611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_2363274555(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
