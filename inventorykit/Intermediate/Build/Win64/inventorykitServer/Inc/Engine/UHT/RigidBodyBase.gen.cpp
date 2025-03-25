// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/RigidBodyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigidBodyBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ARigidBodyBase
void ARigidBodyBase::StaticRegisterNativesARigidBodyBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARigidBodyBase);
UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister()
{
	return ARigidBodyBase::StaticClass();
}
struct Z_Construct_UClass_ARigidBodyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Physics" },
		{ "IncludePath", "PhysicsEngine/RigidBodyBase.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RigidBodyBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARigidBodyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARigidBodyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARigidBodyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARigidBodyBase_Statics::ClassParams = {
	&ARigidBodyBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARigidBodyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARigidBodyBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARigidBodyBase()
{
	if (!Z_Registration_Info_UClass_ARigidBodyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARigidBodyBase.OuterSingleton, Z_Construct_UClass_ARigidBodyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARigidBodyBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ARigidBodyBase>()
{
	return ARigidBodyBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARigidBodyBase);
ARigidBodyBase::~ARigidBodyBase() {}
// End Class ARigidBodyBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARigidBodyBase, ARigidBodyBase::StaticClass, TEXT("ARigidBodyBase"), &Z_Registration_Info_UClass_ARigidBodyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARigidBodyBase), 2388291112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_1188050610(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
