// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsThruster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsThruster() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APhysicsThruster();
ENGINE_API UClass* Z_Construct_UClass_APhysicsThruster_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APhysicsThruster
void APhysicsThruster::StaticRegisterNativesAPhysicsThruster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsThruster);
UClass* Z_Construct_UClass_APhysicsThruster_NoRegister()
{
	return APhysicsThruster::StaticClass();
}
struct Z_Construct_UClass_APhysicsThruster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""Attach one of these on an object using physics simulation and it will apply a force down the negative-X direction\n *\x09ie. point X in the direction you want the thrust in.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PhysicsEngine/PhysicsThruster.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Attach one of these on an object using physics simulation and it will apply a force down the negative-X direction\nie. point X in the direction you want the thrust in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrusterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Physics" },
		{ "Comment", "/** Thruster component */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Activation,Components|Activation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
		{ "ToolTip", "Thruster component" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrusterComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsThruster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent = { "ThrusterComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhysicsThruster, ThrusterComponent), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrusterComponent_MetaData), NewProp_ThrusterComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhysicsThruster, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsThruster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APhysicsThruster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsThruster_Statics::ClassParams = {
	&APhysicsThruster::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APhysicsThruster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::Class_MetaDataParams), Z_Construct_UClass_APhysicsThruster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APhysicsThruster()
{
	if (!Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton, Z_Construct_UClass_APhysicsThruster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APhysicsThruster>()
{
	return APhysicsThruster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsThruster);
APhysicsThruster::~APhysicsThruster() {}
// End Class APhysicsThruster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APhysicsThruster, APhysicsThruster::StaticClass, TEXT("APhysicsThruster"), &Z_Registration_Info_UClass_APhysicsThruster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsThruster), 4128070331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_2632042999(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
