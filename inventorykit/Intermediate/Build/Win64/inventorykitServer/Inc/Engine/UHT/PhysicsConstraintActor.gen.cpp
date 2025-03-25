// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APhysicsConstraintActor();
ENGINE_API UClass* Z_Construct_UClass_APhysicsConstraintActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APhysicsConstraintActor
void APhysicsConstraintActor::StaticRegisterNativesAPhysicsConstraintActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsConstraintActor);
UClass* Z_Construct_UClass_APhysicsConstraintActor_NoRegister()
{
	return APhysicsConstraintActor::StaticClass();
}
struct Z_Construct_UClass_APhysicsConstraintActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PhysicsEngine/PhysicsConstraintActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstraintActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "JointDrive,Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor2;
	static void NewProp_bDisableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsConstraintActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp = { "ConstraintComp", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintComp), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintComp_MetaData), NewProp_ConstraintComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1 = { "ConstraintActor1", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintActor1_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintActor1_MetaData), NewProp_ConstraintActor1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2 = { "ConstraintActor2", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintActor2_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintActor2_MetaData), NewProp_ConstraintActor2_MetaData) };
void Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
{
	((APhysicsConstraintActor*)Obj)->bDisableCollision_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APhysicsConstraintActor), &Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCollision_MetaData), NewProp_bDisableCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APhysicsConstraintActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsConstraintActor_Statics::ClassParams = {
	&APhysicsConstraintActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APhysicsConstraintActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APhysicsConstraintActor()
{
	if (!Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton, Z_Construct_UClass_APhysicsConstraintActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APhysicsConstraintActor>()
{
	return APhysicsConstraintActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsConstraintActor);
APhysicsConstraintActor::~APhysicsConstraintActor() {}
// End Class APhysicsConstraintActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APhysicsConstraintActor, APhysicsConstraintActor::StaticClass, TEXT("APhysicsConstraintActor"), &Z_Registration_Info_UClass_APhysicsConstraintActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsConstraintActor), 277902474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_2407255992(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
