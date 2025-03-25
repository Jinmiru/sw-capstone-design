// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorPawnMovement() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement();
ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USpectatorPawnMovement
void USpectatorPawnMovement::StaticRegisterNativesUSpectatorPawnMovement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpectatorPawnMovement);
UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister()
{
	return USpectatorPawnMovement::StaticClass();
}
struct Z_Construct_UClass_USpectatorPawnMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/SpectatorPawnMovement.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawnMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Comment", "/** If true, component moves at full speed no matter the time dilation. Default is false. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawnMovement.h" },
		{ "ToolTip", "If true, component moves at full speed no matter the time dilation. Default is false." },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectatorPawnMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
{
	((USpectatorPawnMovement*)Obj)->bIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpectatorPawnMovement), &Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData), NewProp_bIgnoreTimeDilation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpectatorPawnMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpectatorPawnMovement_Statics::ClassParams = {
	&USpectatorPawnMovement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_USpectatorPawnMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpectatorPawnMovement()
{
	if (!Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton, Z_Construct_UClass_USpectatorPawnMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USpectatorPawnMovement>()
{
	return USpectatorPawnMovement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpectatorPawnMovement);
USpectatorPawnMovement::~USpectatorPawnMovement() {}
// End Class USpectatorPawnMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpectatorPawnMovement, USpectatorPawnMovement::StaticClass, TEXT("USpectatorPawnMovement"), &Z_Registration_Info_UClass_USpectatorPawnMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpectatorPawnMovement), 2312404594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_3236511944(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
