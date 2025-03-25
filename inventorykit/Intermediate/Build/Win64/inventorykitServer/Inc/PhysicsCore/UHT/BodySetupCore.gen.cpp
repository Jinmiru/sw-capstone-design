// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetupCore() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PHYSICSCORE_API UClass* Z_Construct_UClass_UBodySetupCore();
PHYSICSCORE_API UClass* Z_Construct_UClass_UBodySetupCore_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicsType();
UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References

// Begin Class UBodySetupCore
void UBodySetupCore::StaticRegisterNativesUBodySetupCore()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodySetupCore);
UClass* Z_Construct_UClass_UBodySetupCore_NoRegister()
{
	return UBodySetupCore::StaticClass();
}
struct Z_Construct_UClass_UBodySetupCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BodySetupCore.h" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh. */" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsType_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 *\x09If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate **/" },
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionReponse_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision Type for this body. This eventually changes response to collision to others **/" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Collision Type for this body. This eventually changes response to collision to others *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionReponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySetupCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetupCore, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType = { "PhysicsType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetupCore, PhysicsType), Z_Construct_UEnum_PhysicsCore_EPhysicsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsType_MetaData), NewProp_PhysicsType_MetaData) }; // 1154880165
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetupCore, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTraceFlag_MetaData), NewProp_CollisionTraceFlag_MetaData) }; // 4042370968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse = { "CollisionReponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetupCore, CollisionReponse), Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionReponse_MetaData), NewProp_CollisionReponse_MetaData) }; // 1952725187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySetupCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodySetupCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodySetupCore_Statics::ClassParams = {
	&UBodySetupCore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBodySetupCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::PropPointers),
	0,
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodySetupCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodySetupCore()
{
	if (!Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton, Z_Construct_UClass_UBodySetupCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton;
}
template<> PHYSICSCORE_API UClass* StaticClass<UBodySetupCore>()
{
	return UBodySetupCore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodySetupCore);
UBodySetupCore::~UBodySetupCore() {}
// End Class UBodySetupCore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodySetupCore, UBodySetupCore::StaticClass, TEXT("UBodySetupCore"), &Z_Registration_Info_UClass_UBodySetupCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodySetupCore), 3761959854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_789882624(TEXT("/Script/PhysicsCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
