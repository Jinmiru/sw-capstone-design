// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISubsystem() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISubsystem
void UAISubsystem::StaticRegisterNativesUAISubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISubsystem);
UClass* Z_Construct_UClass_UAISubsystem_NoRegister()
{
	return UAISubsystem::StaticClass();
}
struct Z_Construct_UClass_UAISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A class representing a common interface and behavior for AI subsystems */" },
		{ "IncludePath", "AISubsystem.h" },
		{ "ModuleRelativePath", "Classes/AISubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class representing a common interface and behavior for AI subsystems" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem = { "AISystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISubsystem, AISystem), Z_Construct_UClass_UAISystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISystem_MetaData), NewProp_AISystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISubsystem_Statics::ClassParams = {
	&UAISubsystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::PropPointers),
	0,
	0x000800A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISubsystem()
{
	if (!Z_Registration_Info_UClass_UAISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISubsystem.OuterSingleton, Z_Construct_UClass_UAISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISubsystem.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISubsystem>()
{
	return UAISubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISubsystem);
UAISubsystem::~UAISubsystem() {}
// End Class UAISubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISubsystem, UAISubsystem::StaticClass, TEXT("UAISubsystem"), &Z_Registration_Info_UClass_UAISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISubsystem), 1635609478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_3960403253(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
