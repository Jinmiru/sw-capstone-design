// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/AIResources.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIResources() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Logic();
AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Logic_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Movement();
AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Movement_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAIResource_Movement
void UAIResource_Movement::StaticRegisterNativesUAIResource_Movement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIResource_Movement);
UClass* Z_Construct_UClass_UAIResource_Movement_NoRegister()
{
	return UAIResource_Movement::StaticClass();
}
struct Z_Construct_UClass_UAIResource_Movement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "AI Movement" },
		{ "IncludePath", "AIResources.h" },
		{ "ModuleRelativePath", "Classes/AIResources.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIResource_Movement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIResource_Movement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayTaskResource,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIResource_Movement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIResource_Movement_Statics::ClassParams = {
	&UAIResource_Movement::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIResource_Movement_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIResource_Movement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIResource_Movement()
{
	if (!Z_Registration_Info_UClass_UAIResource_Movement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIResource_Movement.OuterSingleton, Z_Construct_UClass_UAIResource_Movement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIResource_Movement.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIResource_Movement>()
{
	return UAIResource_Movement::StaticClass();
}
UAIResource_Movement::UAIResource_Movement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResource_Movement);
UAIResource_Movement::~UAIResource_Movement() {}
// End Class UAIResource_Movement

// Begin Class UAIResource_Logic
void UAIResource_Logic::StaticRegisterNativesUAIResource_Logic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIResource_Logic);
UClass* Z_Construct_UClass_UAIResource_Logic_NoRegister()
{
	return UAIResource_Logic::StaticClass();
}
struct Z_Construct_UClass_UAIResource_Logic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "AI Logic" },
		{ "IncludePath", "AIResources.h" },
		{ "ModuleRelativePath", "Classes/AIResources.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIResource_Logic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIResource_Logic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayTaskResource,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIResource_Logic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIResource_Logic_Statics::ClassParams = {
	&UAIResource_Logic::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIResource_Logic_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIResource_Logic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIResource_Logic()
{
	if (!Z_Registration_Info_UClass_UAIResource_Logic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIResource_Logic.OuterSingleton, Z_Construct_UClass_UAIResource_Logic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIResource_Logic.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIResource_Logic>()
{
	return UAIResource_Logic::StaticClass();
}
UAIResource_Logic::UAIResource_Logic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResource_Logic);
UAIResource_Logic::~UAIResource_Logic() {}
// End Class UAIResource_Logic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIResource_Movement, UAIResource_Movement::StaticClass, TEXT("UAIResource_Movement"), &Z_Registration_Info_UClass_UAIResource_Movement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIResource_Movement), 1988414083U) },
		{ Z_Construct_UClass_UAIResource_Logic, UAIResource_Logic::StaticClass, TEXT("UAIResource_Logic"), &Z_Registration_Info_UClass_UAIResource_Logic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIResource_Logic), 1431538697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_1251099450(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
