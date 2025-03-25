// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Collision/RigUnit_WorldCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_WorldCollision() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_SphereTrace_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphereTrace_WorkData;
class UScriptStruct* FRigUnit_SphereTrace_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTrace_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphereTrace_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphereTrace_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTrace_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphereTrace_WorkData>()
{
	return FRigUnit_SphereTrace_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphereTrace_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTrace_WorkData, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((FRigUnit_SphereTrace_WorkData*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SphereTrace_WorkData), &Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHit_MetaData), NewProp_bHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTrace_WorkData, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTrace_WorkData, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewProp_HitNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_SphereTrace_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_SphereTrace_WorkData),
	alignof(FRigUnit_SphereTrace_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTrace_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphereTrace_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTrace_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_SphereTrace_WorkData

// Begin ScriptStruct FRigUnit_SphereTraceWorld
static_assert(std::is_polymorphic<FRigUnit_SphereTraceWorld>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SphereTraceWorld cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld;
class UScriptStruct* FRigUnit_SphereTraceWorld::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphereTraceWorld"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SphereTraceWorld_Execute;
		Arguments_FRigUnit_SphereTraceWorld_Execute.Emplace(TEXT("Start"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceWorld_Execute.Emplace(TEXT("End"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceWorld_Execute.Emplace(TEXT("Channel"), TEXT("ECollisionChannel"));
		Arguments_FRigUnit_SphereTraceWorld_Execute.Emplace(TEXT("Radius"), TEXT("float"));
		Arguments_FRigUnit_SphereTraceWorld_Execute.Emplace(TEXT("bHit"), TEXT("bool"));
		Arguments_FRigUnit_SphereTraceWorld_Execute.Emplace(TEXT("HitLocation"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceWorld_Execute.Emplace(TEXT("HitNormal"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceWorld_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SphereTrace_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SphereTraceWorld::Execute"), &FRigUnit_SphereTraceWorld::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.OuterSingleton, Arguments_FRigUnit_SphereTraceWorld_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphereTraceWorld>()
{
	return FRigUnit_SphereTraceWorld::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n * Sweeps a sphere against the world and return the first blocking hit using a specific channel\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Sphere Trace" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Sweep,Raytrace,Collision,Collide,Trace" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "NodeColor", "0.2 0.4 0.7" },
		{ "ToolTip", "Sweeps a sphere against the world and return the first blocking hit using a specific channel" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Start of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Start of the trace in rig / global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** End of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "End of the trace in rig / global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The 'channel' that this trace is in, used to determine which components to hit */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "The 'channel' that this trace is in, used to determine which components to hit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Radius of the sphere to use for sweeping / tracing */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Radius of the sphere to use for sweeping / tracing" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Returns true if there was a hit */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if there was a hit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Hit location in rig / global Space */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit location in rig / global Space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Hit normal in rig / global Space */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit normal in rig / global Space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "Comment", "/** Cache / workstate */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Cache / workstate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphereTraceWorld>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((FRigUnit_SphereTraceWorld*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SphereTraceWorld), &Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHit_MetaData), NewProp_bHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, WorkData), Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 2105827618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_SphereTraceWorld",
	Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::PropPointers),
	sizeof(FRigUnit_SphereTraceWorld),
	alignof(FRigUnit_SphereTraceWorld),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.InnerSingleton;
}
void FRigUnit_SphereTraceWorld::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SphereTraceWorld::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Start,
		End,
		Channel,
		Radius,
		bHit,
		HitLocation,
		HitNormal,
		WorkData
	);
}
// End ScriptStruct FRigUnit_SphereTraceWorld

// Begin ScriptStruct FRigUnit_SphereTraceByTraceChannel
static_assert(std::is_polymorphic<FRigUnit_SphereTraceByTraceChannel>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SphereTraceByTraceChannel cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel;
class UScriptStruct* FRigUnit_SphereTraceByTraceChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphereTraceByTraceChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SphereTraceByTraceChannel_Execute;
		Arguments_FRigUnit_SphereTraceByTraceChannel_Execute.Emplace(TEXT("Start"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceByTraceChannel_Execute.Emplace(TEXT("End"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceByTraceChannel_Execute.Emplace(TEXT("TraceChannel"), TEXT("ETraceTypeQuery"));
		Arguments_FRigUnit_SphereTraceByTraceChannel_Execute.Emplace(TEXT("Radius"), TEXT("float"));
		Arguments_FRigUnit_SphereTraceByTraceChannel_Execute.Emplace(TEXT("bHit"), TEXT("bool"));
		Arguments_FRigUnit_SphereTraceByTraceChannel_Execute.Emplace(TEXT("HitLocation"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceByTraceChannel_Execute.Emplace(TEXT("HitNormal"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceByTraceChannel_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SphereTrace_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SphereTraceByTraceChannel::Execute"), &FRigUnit_SphereTraceByTraceChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.OuterSingleton, Arguments_FRigUnit_SphereTraceByTraceChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphereTraceByTraceChannel>()
{
	return FRigUnit_SphereTraceByTraceChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n * Sweeps a sphere against the world and return the first blocking hit using a specific channel. Target objects can have different object types, but they need to have the same trace channel set to \"block\" in their collision response settings. \n * You can create custom trace channels in Project Setting - Collision. \n */" },
		{ "DisplayName", "Sphere Trace By Trace Channel" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Sweep,Raytrace,Collision,Collide,Trace" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "NodeColor", "0.2 0.4 0.7" },
		{ "ToolTip", "Sweeps a sphere against the world and return the first blocking hit using a specific channel. Target objects can have different object types, but they need to have the same trace channel set to \"block\" in their collision response settings.\nYou can create custom trace channels in Project Setting - Collision." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Start of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Start of the trace in rig / global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** End of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "End of the trace in rig / global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The 'channel' that this trace is in, used to determine which components to hit */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "The 'channel' that this trace is in, used to determine which components to hit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Radius of the sphere to use for sweeping / tracing */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Radius of the sphere to use for sweeping / tracing" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Returns true if there was a hit */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if there was a hit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Hit location in rig / global Space */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit location in rig / global Space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Hit normal in rig / global Space */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit normal in rig / global Space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "Comment", "/** Cache / workstate */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Cache / workstate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphereTraceByTraceChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 1673313466
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((FRigUnit_SphereTraceByTraceChannel*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SphereTraceByTraceChannel), &Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHit_MetaData), NewProp_bHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, WorkData), Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 2105827618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_SphereTraceByTraceChannel",
	Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::PropPointers),
	sizeof(FRigUnit_SphereTraceByTraceChannel),
	alignof(FRigUnit_SphereTraceByTraceChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.InnerSingleton;
}
void FRigUnit_SphereTraceByTraceChannel::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SphereTraceByTraceChannel::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Start,
		End,
		TraceChannel,
		Radius,
		bHit,
		HitLocation,
		HitNormal,
		WorkData
	);
}
// End ScriptStruct FRigUnit_SphereTraceByTraceChannel

// Begin ScriptStruct FRigUnit_SphereTraceByObjectTypes
static_assert(std::is_polymorphic<FRigUnit_SphereTraceByObjectTypes>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SphereTraceByObjectTypes cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes;
class UScriptStruct* FRigUnit_SphereTraceByObjectTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphereTraceByObjectTypes"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SphereTraceByObjectTypes_Execute;
		Arguments_FRigUnit_SphereTraceByObjectTypes_Execute.Emplace(TEXT("Start"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceByObjectTypes_Execute.Emplace(TEXT("End"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceByObjectTypes_Execute.Emplace(TEXT("ObjectTypes"), TEXT("TArray<TEnumAsByte<EObjectTypeQuery> >"));
		Arguments_FRigUnit_SphereTraceByObjectTypes_Execute.Emplace(TEXT("Radius"), TEXT("float"));
		Arguments_FRigUnit_SphereTraceByObjectTypes_Execute.Emplace(TEXT("bHit"), TEXT("bool"));
		Arguments_FRigUnit_SphereTraceByObjectTypes_Execute.Emplace(TEXT("HitLocation"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceByObjectTypes_Execute.Emplace(TEXT("HitNormal"), TEXT("FVector"));
		Arguments_FRigUnit_SphereTraceByObjectTypes_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SphereTrace_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SphereTraceByObjectTypes::Execute"), &FRigUnit_SphereTraceByObjectTypes::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.OuterSingleton, Arguments_FRigUnit_SphereTraceByObjectTypes_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphereTraceByObjectTypes>()
{
	return FRigUnit_SphereTraceByObjectTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n * Sweeps a sphere against the world and return the first blocking hit. The trace is filtered by object types only, the collision response settings are ignored.\n * You can create custom object types in Project Setting - Collision\n */" },
		{ "DisplayName", "Sphere Trace By Object Types" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Sweep,Raytrace,Collision,Collide,Trace" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "NodeColor", "0.2 0.4 0.7" },
		{ "ToolTip", "Sweeps a sphere against the world and return the first blocking hit. The trace is filtered by object types only, the collision response settings are ignored.\nYou can create custom object types in Project Setting - Collision" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Start of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Start of the trace in rig / global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** End of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "End of the trace in rig / global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The types of objects that this trace can hit */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "The types of objects that this trace can hit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Radius of the sphere to use for sweeping / tracing */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Radius of the sphere to use for sweeping / tracing" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Returns true if there was a hit */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if there was a hit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Hit location in rig / global Space */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit location in rig / global Space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Hit normal in rig / global Space */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit normal in rig / global Space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "Comment", "/** Cache / workstate */" },
		{ "ModuleRelativePath", "Public/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Cache / workstate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphereTraceByObjectTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((FRigUnit_SphereTraceByObjectTypes*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SphereTraceByObjectTypes), &Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHit_MetaData), NewProp_bHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, WorkData), Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 2105827618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_SphereTraceByObjectTypes",
	Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::PropPointers),
	sizeof(FRigUnit_SphereTraceByObjectTypes),
	alignof(FRigUnit_SphereTraceByObjectTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.InnerSingleton;
}
void FRigUnit_SphereTraceByObjectTypes::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SphereTraceByObjectTypes::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const TEnumAsByte<EObjectTypeQuery> > ObjectTypes_2_Array(ObjectTypes);
	StaticExecute(
		InExecuteContext,
		Start,
		End,
		ObjectTypes_2_Array,
		Radius,
		bHit,
		HitLocation,
		HitNormal,
		WorkData
	);
}
// End ScriptStruct FRigUnit_SphereTraceByObjectTypes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_SphereTrace_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics::NewStructOps, TEXT("RigUnit_SphereTrace_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_SphereTrace_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphereTrace_WorkData), 2105827618U) },
		{ FRigUnit_SphereTraceWorld::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewStructOps, TEXT("RigUnit_SphereTraceWorld"), &Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphereTraceWorld), 4031896438U) },
		{ FRigUnit_SphereTraceByTraceChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewStructOps, TEXT("RigUnit_SphereTraceByTraceChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphereTraceByTraceChannel), 3909690487U) },
		{ FRigUnit_SphereTraceByObjectTypes::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewStructOps, TEXT("RigUnit_SphereTraceByObjectTypes"), &Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphereTraceByObjectTypes), 3783109428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_2470063576(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
