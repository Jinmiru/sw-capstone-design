// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsReplicationMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AStaticMeshActor Function SetMobility
struct Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics
{
	struct StaticMeshActor_eventSetMobility_Parms
	{
		TEnumAsByte<EComponentMobility::Type> InMobility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobility" },
		{ "Comment", "/** Function to change mobility type */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ToolTip", "Function to change mobility type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMobility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::NewProp_InMobility = { "InMobility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshActor_eventSetMobility_Parms, InMobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(0, nullptr) }; // 2012069661
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::NewProp_InMobility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticMeshActor, nullptr, "SetMobility", nullptr, nullptr, Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::StaticMeshActor_eventSetMobility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::StaticMeshActor_eventSetMobility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStaticMeshActor_SetMobility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStaticMeshActor::execSetMobility)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InMobility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMobility(EComponentMobility::Type(Z_Param_InMobility));
	P_NATIVE_END;
}
// End Class AStaticMeshActor Function SetMobility

// Begin Class AStaticMeshActor
void AStaticMeshActor::StaticRegisterNativesAStaticMeshActor()
{
	UClass* Class = AStaticMeshActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMobility", &AStaticMeshActor::execSetMobility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStaticMeshActor);
UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister()
{
	return AStaticMeshActor::StaticClass();
}
struct Z_Construct_UClass_AStaticMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * StaticMeshActor is an instance of a UStaticMesh in the world.\n * Static meshes are geometry that do not animate or otherwise deform, and are more efficient to render than other types of geometry.\n * Static meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Actors/StaticMeshActor/\n * @see UStaticMesh\n */" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/StaticMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "StaticMeshActor is an instance of a UStaticMesh in the world.\nStatic meshes are geometry that do not animate or otherwise deform, and are more efficient to render than other types of geometry.\nStatic meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/StaticMeshActor/\n@see UStaticMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshReplicateMovement_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** This static mesh should replicate movement. Automatically sets the RemoteRole and bReplicateMovement flags. Meant to be edited on placed actors (those other two properties are not) */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ToolTip", "This static mesh should replicate movement. Automatically sets the RemoteRole and bReplicateMovement flags. Meant to be edited on placed actors (those other two properties are not)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPhysicsReplicationMode_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Set which replication mode to use for this static mesh instance if it both replicates and simulates physics. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ToolTip", "Set which replication mode to use for this static mesh instance if it both replicates and simulates physics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationGeometryGatheringMode_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static void NewProp_bStaticMeshReplicateMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshReplicateMovement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StaticMeshPhysicsReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StaticMeshPhysicsReplicationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NavigationGeometryGatheringMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NavigationGeometryGatheringMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AStaticMeshActor_SetMobility, "SetMobility" }, // 3164767423
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStaticMeshActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
void Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_SetBit(void* Obj)
{
	((AStaticMeshActor*)Obj)->bStaticMeshReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement = { "bStaticMeshReplicateMovement", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AStaticMeshActor), &Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticMeshReplicateMovement_MetaData), NewProp_bStaticMeshReplicateMovement_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshPhysicsReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshPhysicsReplicationMode = { "StaticMeshPhysicsReplicationMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStaticMeshActor, StaticMeshPhysicsReplicationMode), Z_Construct_UEnum_Engine_EPhysicsReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshPhysicsReplicationMode_MetaData), NewProp_StaticMeshPhysicsReplicationMode_MetaData) }; // 1461121912
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode = { "NavigationGeometryGatheringMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStaticMeshActor, NavigationGeometryGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationGeometryGatheringMode_MetaData), NewProp_NavigationGeometryGatheringMode_MetaData) }; // 4143279902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshPhysicsReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshPhysicsReplicationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStaticMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStaticMeshActor_Statics::ClassParams = {
	&AStaticMeshActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AStaticMeshActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStaticMeshActor()
{
	if (!Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton, Z_Construct_UClass_AStaticMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AStaticMeshActor>()
{
	return AStaticMeshActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticMeshActor);
AStaticMeshActor::~AStaticMeshActor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AStaticMeshActor)
// End Class AStaticMeshActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStaticMeshActor, AStaticMeshActor::StaticClass, TEXT("AStaticMeshActor"), &Z_Registration_Info_UClass_AStaticMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStaticMeshActor), 1979073109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_2625191242(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
