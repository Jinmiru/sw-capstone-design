// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Animation/AnimBlueprintClassSubsystem_PropertyAccess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintClassSubsystem_PropertyAccess() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimBlueprintClassSubsystem_PropertyAccess
void UAnimBlueprintClassSubsystem_PropertyAccess::StaticRegisterNativesUAnimBlueprintClassSubsystem_PropertyAccess()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintClassSubsystem_PropertyAccess);
UClass* Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_NoRegister()
{
	return UAnimBlueprintClassSubsystem_PropertyAccess::StaticClass();
}
struct Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Dummy class to prevent warnings on load of older subsystem implementation\n" },
		{ "IncludePath", "Animation/AnimBlueprintClassSubsystem_PropertyAccess.h" },
		{ "ModuleRelativePath", "Private/Animation/AnimBlueprintClassSubsystem_PropertyAccess.h" },
		{ "ToolTip", "Dummy class to prevent warnings on load of older subsystem implementation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintClassSubsystem_PropertyAccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_Statics::ClassParams = {
	&UAnimBlueprintClassSubsystem_PropertyAccess::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess()
{
	if (!Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.OuterSingleton, Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimBlueprintClassSubsystem_PropertyAccess>()
{
	return UAnimBlueprintClassSubsystem_PropertyAccess::StaticClass();
}
UAnimBlueprintClassSubsystem_PropertyAccess::UAnimBlueprintClassSubsystem_PropertyAccess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintClassSubsystem_PropertyAccess);
UAnimBlueprintClassSubsystem_PropertyAccess::~UAnimBlueprintClassSubsystem_PropertyAccess() {}
// End Class UAnimBlueprintClassSubsystem_PropertyAccess

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Animation_AnimBlueprintClassSubsystem_PropertyAccess_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintClassSubsystem_PropertyAccess, UAnimBlueprintClassSubsystem_PropertyAccess::StaticClass, TEXT("UAnimBlueprintClassSubsystem_PropertyAccess"), &Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintClassSubsystem_PropertyAccess), 2887306380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Animation_AnimBlueprintClassSubsystem_PropertyAccess_h_692694106(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Animation_AnimBlueprintClassSubsystem_PropertyAccess_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Animation_AnimBlueprintClassSubsystem_PropertyAccess_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
