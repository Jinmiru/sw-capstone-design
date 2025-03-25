// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MRMesh/Public/MeshReconstructorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReconstructorBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase();
MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister();
MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
MRMESH_API UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration();
UPackage* Z_Construct_UPackage__Script_MRMesh();
// End Cross Module References

// Begin ScriptStruct FMRMeshConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRMeshConfiguration;
class UScriptStruct* FMRMeshConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRMeshConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRMeshConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRMeshConfiguration, (UObject*)Z_Construct_UPackage__Script_MRMesh(), TEXT("MRMeshConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_MRMeshConfiguration.OuterSingleton;
}
template<> MRMESH_API UScriptStruct* StaticStruct<FMRMeshConfiguration>()
{
	return FMRMeshConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRMeshConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	nullptr,
	&NewStructOps,
	"MRMeshConfiguration",
	nullptr,
	0,
	sizeof(FMRMeshConfiguration),
	alignof(FMRMeshConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_MRMeshConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRMeshConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MRMeshConfiguration.InnerSingleton;
}
// End ScriptStruct FMRMeshConfiguration

// Begin Class UMeshReconstructorBase Function ConnectMRMesh
struct Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics
{
	struct MeshReconstructorBase_eventConnectMRMesh_Parms
	{
		UMRMeshComponent* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshReconstructorBase_eventConnectMRMesh_Parms, Mesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "ConnectMRMesh", nullptr, nullptr, Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::MeshReconstructorBase_eventConnectMRMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::MeshReconstructorBase_eventConnectMRMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshReconstructorBase::execConnectMRMesh)
{
	P_GET_OBJECT(UMRMeshComponent,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectMRMesh(Z_Param_Mesh);
	P_NATIVE_END;
}
// End Class UMeshReconstructorBase Function ConnectMRMesh

// Begin Class UMeshReconstructorBase Function DisconnectMRMesh
struct Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "DisconnectMRMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshReconstructorBase::execDisconnectMRMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectMRMesh();
	P_NATIVE_END;
}
// End Class UMeshReconstructorBase Function DisconnectMRMesh

// Begin Class UMeshReconstructorBase Function IsReconstructionPaused
struct Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics
{
	struct MeshReconstructorBase_eventIsReconstructionPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshReconstructorBase_eventIsReconstructionPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshReconstructorBase_eventIsReconstructionPaused_Parms), &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "IsReconstructionPaused", nullptr, nullptr, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::MeshReconstructorBase_eventIsReconstructionPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::MeshReconstructorBase_eventIsReconstructionPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshReconstructorBase::execIsReconstructionPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReconstructionPaused();
	P_NATIVE_END;
}
// End Class UMeshReconstructorBase Function IsReconstructionPaused

// Begin Class UMeshReconstructorBase Function IsReconstructionStarted
struct Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics
{
	struct MeshReconstructorBase_eventIsReconstructionStarted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshReconstructorBase_eventIsReconstructionStarted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshReconstructorBase_eventIsReconstructionStarted_Parms), &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "IsReconstructionStarted", nullptr, nullptr, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::MeshReconstructorBase_eventIsReconstructionStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::MeshReconstructorBase_eventIsReconstructionStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshReconstructorBase::execIsReconstructionStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReconstructionStarted();
	P_NATIVE_END;
}
// End Class UMeshReconstructorBase Function IsReconstructionStarted

// Begin Class UMeshReconstructorBase Function PauseReconstruction
struct Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "PauseReconstruction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshReconstructorBase::execPauseReconstruction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseReconstruction();
	P_NATIVE_END;
}
// End Class UMeshReconstructorBase Function PauseReconstruction

// Begin Class UMeshReconstructorBase Function StartReconstruction
struct Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "StartReconstruction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshReconstructorBase::execStartReconstruction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartReconstruction();
	P_NATIVE_END;
}
// End Class UMeshReconstructorBase Function StartReconstruction

// Begin Class UMeshReconstructorBase Function StopReconstruction
struct Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "StopReconstruction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshReconstructorBase::execStopReconstruction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopReconstruction();
	P_NATIVE_END;
}
// End Class UMeshReconstructorBase Function StopReconstruction

// Begin Class UMeshReconstructorBase
void UMeshReconstructorBase::StaticRegisterNativesUMeshReconstructorBase()
{
	UClass* Class = UMeshReconstructorBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectMRMesh", &UMeshReconstructorBase::execConnectMRMesh },
		{ "DisconnectMRMesh", &UMeshReconstructorBase::execDisconnectMRMesh },
		{ "IsReconstructionPaused", &UMeshReconstructorBase::execIsReconstructionPaused },
		{ "IsReconstructionStarted", &UMeshReconstructorBase::execIsReconstructionStarted },
		{ "PauseReconstruction", &UMeshReconstructorBase::execPauseReconstruction },
		{ "StartReconstruction", &UMeshReconstructorBase::execStartReconstruction },
		{ "StopReconstruction", &UMeshReconstructorBase::execStopReconstruction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshReconstructorBase);
UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister()
{
	return UMeshReconstructorBase::StaticClass();
}
struct Z_Construct_UClass_UMeshReconstructorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "IncludePath", "MeshReconstructorBase.h" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh, "ConnectMRMesh" }, // 2733197912
		{ &Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh, "DisconnectMRMesh" }, // 2474261652
		{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused, "IsReconstructionPaused" }, // 2563387223
		{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted, "IsReconstructionStarted" }, // 1070599485
		{ &Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction, "PauseReconstruction" }, // 3675052890
		{ &Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction, "StartReconstruction" }, // 406902596
		{ &Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction, "StopReconstruction" }, // 611927189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshReconstructorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshReconstructorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshReconstructorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams = {
	&UMeshReconstructorBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshReconstructorBase()
{
	if (!Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton, Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton;
}
template<> MRMESH_API UClass* StaticClass<UMeshReconstructorBase>()
{
	return UMeshReconstructorBase::StaticClass();
}
UMeshReconstructorBase::UMeshReconstructorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReconstructorBase);
UMeshReconstructorBase::~UMeshReconstructorBase() {}
// End Class UMeshReconstructorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMRMeshConfiguration::StaticStruct, Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::NewStructOps, TEXT("MRMeshConfiguration"), &Z_Registration_Info_UScriptStruct_MRMeshConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRMeshConfiguration), 3705604060U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshReconstructorBase, UMeshReconstructorBase::StaticClass, TEXT("UMeshReconstructorBase"), &Z_Registration_Info_UClass_UMeshReconstructorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshReconstructorBase), 3899999848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_101282872(TEXT("/Script/MRMesh"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
