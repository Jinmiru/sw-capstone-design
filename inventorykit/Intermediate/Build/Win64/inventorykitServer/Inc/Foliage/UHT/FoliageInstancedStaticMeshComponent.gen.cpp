// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/FoliageInstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageInstancedStaticMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
FOLIAGE_API UFunction* Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature();
FOLIAGE_API UFunction* Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Delegate FInstancePointDamageSignature
struct Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics
{
	struct _Script_Foliage_eventInstancePointDamageSignature_Parms
	{
		int32 InstanceIndex;
		float Damage;
		AController* InstigatedBy;
		FVector HitLocation;
		FVector ShotFromDirection;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n*/" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Foliage, nullptr, "InstancePointDamageSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::_Script_Foliage_eventInstancePointDamageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::_Script_Foliage_eventInstancePointDamageSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInstancePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstancePointDamageSignature, int32 InstanceIndex, float Damage, AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser)
{
	struct _Script_Foliage_eventInstancePointDamageSignature_Parms
	{
		int32 InstanceIndex;
		float Damage;
		AController* InstigatedBy;
		FVector HitLocation;
		FVector ShotFromDirection;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
	_Script_Foliage_eventInstancePointDamageSignature_Parms Parms;
	Parms.InstanceIndex=InstanceIndex;
	Parms.Damage=Damage;
	Parms.InstigatedBy=InstigatedBy;
	Parms.HitLocation=HitLocation;
	Parms.ShotFromDirection=ShotFromDirection;
	Parms.DamageType=DamageType;
	Parms.DamageCauser=DamageCauser;
	InstancePointDamageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInstancePointDamageSignature

// Begin Delegate FInstanceRadialDamageSignature
struct Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics
{
	struct _Script_Foliage_eventInstanceRadialDamageSignature_Parms
	{
		TArray<int32> Instances;
		TArray<float> Damages;
		AController* InstigatedBy;
		FVector Origin;
		float MaxRadius;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damages_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Instances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Damages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_MetaData), NewProp_Instances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_Inner = { "Damages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages = { "Damages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Damages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damages_MetaData), NewProp_Damages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, MaxRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_MaxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Foliage, nullptr, "InstanceRadialDamageSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::_Script_Foliage_eventInstanceRadialDamageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::_Script_Foliage_eventInstanceRadialDamageSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInstanceRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstanceRadialDamageSignature, TArray<int32> const& Instances, TArray<float> const& Damages, AController* InstigatedBy, FVector Origin, float MaxRadius, const UDamageType* DamageType, AActor* DamageCauser)
{
	struct _Script_Foliage_eventInstanceRadialDamageSignature_Parms
	{
		TArray<int32> Instances;
		TArray<float> Damages;
		AController* InstigatedBy;
		FVector Origin;
		float MaxRadius;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
	_Script_Foliage_eventInstanceRadialDamageSignature_Parms Parms;
	Parms.Instances=Instances;
	Parms.Damages=Damages;
	Parms.InstigatedBy=InstigatedBy;
	Parms.Origin=Origin;
	Parms.MaxRadius=MaxRadius;
	Parms.DamageType=DamageType;
	Parms.DamageCauser=DamageCauser;
	InstanceRadialDamageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInstanceRadialDamageSignature

// Begin Class UFoliageInstancedStaticMeshComponent
void UFoliageInstancedStaticMeshComponent::StaticRegisterNativesUFoliageInstancedStaticMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageInstancedStaticMeshComponent);
UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister()
{
	return UFoliageInstancedStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Foliage" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "FoliageInstancedStaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInstanceTakePointDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInstanceTakeRadialDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiscardOnLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageHiddenEditorViews_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstanceTakePointDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstanceTakeRadialDamage;
	static void NewProp_bEnableDiscardOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiscardOnLoad;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_FoliageHiddenEditorViews;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageInstancedStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage = { "OnInstanceTakePointDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, OnInstanceTakePointDamage), Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInstanceTakePointDamage_MetaData), NewProp_OnInstanceTakePointDamage_MetaData) }; // 1530082201
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage = { "OnInstanceTakeRadialDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, OnInstanceTakeRadialDamage), Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInstanceTakeRadialDamage_MetaData), NewProp_OnInstanceTakeRadialDamage_MetaData) }; // 1661605330
void Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad_SetBit(void* Obj)
{
	((UFoliageInstancedStaticMeshComponent*)Obj)->bEnableDiscardOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad = { "bEnableDiscardOnLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFoliageInstancedStaticMeshComponent), &Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiscardOnLoad_MetaData), NewProp_bEnableDiscardOnLoad_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews = { "FoliageHiddenEditorViews", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, FoliageHiddenEditorViews), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageHiddenEditorViews_MetaData), NewProp_FoliageHiddenEditorViews_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_GenerationGuid = { "GenerationGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, GenerationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationGuid_MetaData), NewProp_GenerationGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_GenerationGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::ClassParams = {
	&UFoliageInstancedStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UFoliageInstancedStaticMeshComponent>()
{
	return UFoliageInstancedStaticMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageInstancedStaticMeshComponent);
UFoliageInstancedStaticMeshComponent::~UFoliageInstancedStaticMeshComponent() {}
// End Class UFoliageInstancedStaticMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageInstancedStaticMeshComponent, UFoliageInstancedStaticMeshComponent::StaticClass, TEXT("UFoliageInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageInstancedStaticMeshComponent), 2577343275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_138805520(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
