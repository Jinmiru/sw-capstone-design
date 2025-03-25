// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AimOffsetBlendSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace();
ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAimOffsetBlendSpace
void UAimOffsetBlendSpace::StaticRegisterNativesUAimOffsetBlendSpace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAimOffsetBlendSpace);
UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister()
{
	return UAimOffsetBlendSpace::StaticClass();
}
struct Z_Construct_UClass_UAimOffsetBlendSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An Aim Offset is an asset that stores a blendable series of poses to help a character aim a weapon.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AimOffsetBlendSpace.h" },
		{ "ModuleRelativePath", "Classes/Animation/AimOffsetBlendSpace.h" },
		{ "ToolTip", "An Aim Offset is an asset that stores a blendable series of poses to help a character aim a weapon." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimOffsetBlendSpace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAimOffsetBlendSpace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlendSpace,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetBlendSpace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimOffsetBlendSpace_Statics::ClassParams = {
	&UAimOffsetBlendSpace::StaticClass,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetBlendSpace_Statics::Class_MetaDataParams), Z_Construct_UClass_UAimOffsetBlendSpace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAimOffsetBlendSpace()
{
	if (!Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton, Z_Construct_UClass_UAimOffsetBlendSpace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAimOffsetBlendSpace>()
{
	return UAimOffsetBlendSpace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpace);
UAimOffsetBlendSpace::~UAimOffsetBlendSpace() {}
// End Class UAimOffsetBlendSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAimOffsetBlendSpace, UAimOffsetBlendSpace::StaticClass, TEXT("UAimOffsetBlendSpace"), &Z_Registration_Info_UClass_UAimOffsetBlendSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimOffsetBlendSpace), 2037102048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_1642203201(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
