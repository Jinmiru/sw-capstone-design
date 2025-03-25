// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavCollisionBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase();
ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNavCollisionBase
void UNavCollisionBase::StaticRegisterNativesUNavCollisionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavCollisionBase);
UClass* Z_Construct_UClass_UNavCollisionBase_NoRegister()
{
	return UNavCollisionBase::StaticClass();
}
struct Z_Construct_UClass_UNavCollisionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Navigation/NavCollisionBase.h" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollisionBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicObstacle_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If set, mesh will be used as dynamic obstacle (don't create navmesh on top, much faster adding/removing) */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollisionBase.h" },
		{ "ToolTip", "If set, mesh will be used as dynamic obstacle (don't create navmesh on top, much faster adding/removing)" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDynamicObstacle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicObstacle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavCollisionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle_SetBit(void* Obj)
{
	((UNavCollisionBase*)Obj)->bIsDynamicObstacle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle = { "bIsDynamicObstacle", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavCollisionBase), &Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDynamicObstacle_MetaData), NewProp_bIsDynamicObstacle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavCollisionBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavCollisionBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavCollisionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavCollisionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavCollisionBase_Statics::ClassParams = {
	&UNavCollisionBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavCollisionBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavCollisionBase_Statics::PropPointers),
	0,
	0x000800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavCollisionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavCollisionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavCollisionBase()
{
	if (!Z_Registration_Info_UClass_UNavCollisionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavCollisionBase.OuterSingleton, Z_Construct_UClass_UNavCollisionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavCollisionBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavCollisionBase>()
{
	return UNavCollisionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavCollisionBase);
UNavCollisionBase::~UNavCollisionBase() {}
// End Class UNavCollisionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavCollisionBase, UNavCollisionBase::StaticClass, TEXT("UNavCollisionBase"), &Z_Registration_Info_UClass_UNavCollisionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavCollisionBase), 470874052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_3614755414(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
