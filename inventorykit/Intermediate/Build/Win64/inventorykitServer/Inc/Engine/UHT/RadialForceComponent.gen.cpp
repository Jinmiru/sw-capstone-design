// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/RadialForceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialForceComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent();
ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class URadialForceComponent Function AddObjectTypeToAffect
struct Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics
{
	struct RadialForceComponent_eventAddObjectTypeToAffect_Parms
	{
		TEnumAsByte<EObjectTypeQuery> ObjectType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "Comment", "/** Add an object type for this radial force to affect */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Add an object type for this radial force to affect" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialForceComponent_eventAddObjectTypeToAffect_Parms, ObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::NewProp_ObjectType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, nullptr, "AddObjectTypeToAffect", nullptr, nullptr, Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::RadialForceComponent_eventAddObjectTypeToAffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::RadialForceComponent_eventAddObjectTypeToAffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadialForceComponent::execAddObjectTypeToAffect)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ObjectType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddObjectTypeToAffect(EObjectTypeQuery(Z_Param_ObjectType));
	P_NATIVE_END;
}
// End Class URadialForceComponent Function AddObjectTypeToAffect

// Begin Class URadialForceComponent Function FireImpulse
struct Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "Comment", "/** Fire a single impulse */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Fire a single impulse" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, nullptr, "FireImpulse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URadialForceComponent_FireImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadialForceComponent::execFireImpulse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireImpulse();
	P_NATIVE_END;
}
// End Class URadialForceComponent Function FireImpulse

// Begin Class URadialForceComponent Function RemoveObjectTypeToAffect
struct Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics
{
	struct RadialForceComponent_eventRemoveObjectTypeToAffect_Parms
	{
		TEnumAsByte<EObjectTypeQuery> ObjectType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "Comment", "/** Remove an object type that is affected by this radial force */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Remove an object type that is affected by this radial force" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialForceComponent_eventRemoveObjectTypeToAffect_Parms, ObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::NewProp_ObjectType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, nullptr, "RemoveObjectTypeToAffect", nullptr, nullptr, Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::RadialForceComponent_eventRemoveObjectTypeToAffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::RadialForceComponent_eventRemoveObjectTypeToAffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadialForceComponent::execRemoveObjectTypeToAffect)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ObjectType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveObjectTypeToAffect(EObjectTypeQuery(Z_Param_ObjectType));
	P_NATIVE_END;
}
// End Class URadialForceComponent Function RemoveObjectTypeToAffect

// Begin Class URadialForceComponent
void URadialForceComponent::StaticRegisterNativesURadialForceComponent()
{
	UClass* Class = URadialForceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddObjectTypeToAffect", &URadialForceComponent::execAddObjectTypeToAffect },
		{ "FireImpulse", &URadialForceComponent::execFireImpulse },
		{ "RemoveObjectTypeToAffect", &URadialForceComponent::execRemoveObjectTypeToAffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadialForceComponent);
UClass* Z_Construct_UClass_URadialForceComponent_NoRegister()
{
	return URadialForceComponent::StaticClass();
}
struct Z_Construct_UClass_URadialForceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n *\x09Used to emit a radial force or impulse that can affect physics objects and or destructible objects.\n */" },
		{ "HideCategories", "Object Mobility LOD Physics PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/RadialForceComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Used to emit a radial force or impulse that can affect physics objects and or destructible objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "Comment", "/** The radius to apply the force or impulse in */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "The radius to apply the force or impulse in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "Comment", "/** How the force or impulse should fall off as object are further away from the center */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How the force or impulse should fall off as object are further away from the center" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "Impulse" },
		{ "Comment", "/** How strong the impulse should be */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How strong the impulse should be" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImpulseVelChange_MetaData[] = {
		{ "Category", "Impulse" },
		{ "Comment", "/** If true, the impulse will ignore mass of objects and will always result in a fixed velocity change */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If true, the impulse will ignore mass of objects and will always result in a fixed velocity change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOwningActor_MetaData[] = {
		{ "Category", "Impulse" },
		{ "Comment", "/** If true, do not apply force/impulse to any physics objects that are part of the Actor that owns this component. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If true, do not apply force/impulse to any physics objects that are part of the Actor that owns this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceStrength_MetaData[] = {
		{ "Category", "Force" },
		{ "Comment", "/** How strong the force should be */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How strong the force should be" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamage_MetaData[] = {
		{ "Category", "Destructible" },
		{ "Comment", "/** If > 0.f, will cause damage to destructible meshes as well  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If > 0.f, will cause damage to destructible meshes as well" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypesToAffect_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "Comment", "/** The object types that are affected by this radial force */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "The object types that are affected by this radial force" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
	static void NewProp_bImpulseVelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpulseVelChange;
	static void NewProp_bIgnoreOwningActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOwningActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypesToAffect_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypesToAffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect, "AddObjectTypeToAffect" }, // 86860854
		{ &Z_Construct_UFunction_URadialForceComponent_FireImpulse, "FireImpulse" }, // 1545650358
		{ &Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect, "RemoveObjectTypeToAffect" }, // 3396726033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadialForceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialForceComponent, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialForceComponent, Falloff), Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 679550656
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialForceComponent, ImpulseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseStrength_MetaData), NewProp_ImpulseStrength_MetaData) };
void Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_SetBit(void* Obj)
{
	((URadialForceComponent*)Obj)->bImpulseVelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange = { "bImpulseVelChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URadialForceComponent), &Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImpulseVelChange_MetaData), NewProp_bImpulseVelChange_MetaData) };
void Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_SetBit(void* Obj)
{
	((URadialForceComponent*)Obj)->bIgnoreOwningActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor = { "bIgnoreOwningActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URadialForceComponent), &Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreOwningActor_MetaData), NewProp_bIgnoreOwningActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength = { "ForceStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialForceComponent, ForceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceStrength_MetaData), NewProp_ForceStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage = { "DestructibleDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialForceComponent, DestructibleDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleDamage_MetaData), NewProp_DestructibleDamage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_Inner = { "ObjectTypesToAffect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect = { "ObjectTypesToAffect", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialForceComponent, ObjectTypesToAffect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypesToAffect_MetaData), NewProp_ObjectTypesToAffect_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadialForceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URadialForceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URadialForceComponent_Statics::ClassParams = {
	&URadialForceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URadialForceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URadialForceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URadialForceComponent()
{
	if (!Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton, Z_Construct_UClass_URadialForceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URadialForceComponent>()
{
	return URadialForceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URadialForceComponent);
URadialForceComponent::~URadialForceComponent() {}
// End Class URadialForceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URadialForceComponent, URadialForceComponent::StaticClass, TEXT("URadialForceComponent"), &Z_Registration_Info_UClass_URadialForceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadialForceComponent), 2243353354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_2333021251(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
