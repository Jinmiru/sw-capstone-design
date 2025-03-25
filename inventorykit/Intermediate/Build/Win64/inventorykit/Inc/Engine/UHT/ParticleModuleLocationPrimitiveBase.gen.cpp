// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleLocationPrimitiveBase
void UParticleModuleLocationPrimitiveBase::StaticRegisterNativesUParticleModuleLocationPrimitiveBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationPrimitiveBase);
UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister()
{
	return UParticleModuleLocationPrimitiveBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positive_X_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the positive X axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the positive X axis is valid for spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positive_Y_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the positive Y axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the positive Y axis is valid for spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positive_Z_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the positive Z axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the positive Z axis is valid for spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Negative_X_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the negative X axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the negative X axis is valid for spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Negative_Y_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the negative Y axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the negative Y axis is valid for spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Negative_Z_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the negative Zaxis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the negative Zaxis is valid for spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceOnly_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether particles will only spawn on the surface of the primitive. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether particles will only spawn on the surface of the primitive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the particle should get its velocity from the position within the primitive. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the particle should get its velocity from the position within the primitive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityScale_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The scale applied to the velocity. (Only used if 'Velocity' is checked). */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "The scale applied to the velocity. (Only used if 'Velocity' is checked)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The location of the bounding primitive relative to the position of the emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "The location of the bounding primitive relative to the position of the emitter." },
	};
#endif // WITH_METADATA
	static void NewProp_Positive_X_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_X;
	static void NewProp_Positive_Y_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_Y;
	static void NewProp_Positive_Z_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_Z;
	static void NewProp_Negative_X_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_X;
	static void NewProp_Negative_Y_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_Y;
	static void NewProp_Negative_Z_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_Z;
	static void NewProp_SurfaceOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SurfaceOnly;
	static void NewProp_Velocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationPrimitiveBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_X = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X = { "Positive_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positive_X_MetaData), NewProp_Positive_X_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_Y = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y = { "Positive_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positive_Y_MetaData), NewProp_Positive_Y_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_Z = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z = { "Positive_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positive_Z_MetaData), NewProp_Positive_Z_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_X = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X = { "Negative_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Negative_X_MetaData), NewProp_Negative_X_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_Y = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y = { "Negative_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Negative_Y_MetaData), NewProp_Negative_Y_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_Z = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z = { "Negative_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Negative_Z_MetaData), NewProp_Negative_Z_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveBase*)Obj)->SurfaceOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly = { "SurfaceOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceOnly_MetaData), NewProp_SurfaceOnly_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveBase*)Obj)->Velocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_VelocityScale = { "VelocityScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationPrimitiveBase, VelocityScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityScale_MetaData), NewProp_VelocityScale_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationPrimitiveBase, StartLocation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) }; // 1238237137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_VelocityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_StartLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::ClassParams = {
	&UParticleModuleLocationPrimitiveBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationPrimitiveBase>()
{
	return UParticleModuleLocationPrimitiveBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveBase);
UParticleModuleLocationPrimitiveBase::~UParticleModuleLocationPrimitiveBase() {}
// End Class UParticleModuleLocationPrimitiveBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationPrimitiveBase, UParticleModuleLocationPrimitiveBase::StaticClass, TEXT("UParticleModuleLocationPrimitiveBase"), &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationPrimitiveBase), 571934474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_3457429317(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
