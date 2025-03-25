// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolver() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolver();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolver_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References

// Begin Class UChaosSolver
void UChaosSolver::StaticRegisterNativesUChaosSolver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosSolver);
UClass* Z_Construct_UClass_UChaosSolver_NoRegister()
{
	return UChaosSolver::StaticClass();
}
struct Z_Construct_UClass_UChaosSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UChaosSolver (UObject)\n*\n*/" },
		{ "IncludePath", "Chaos/ChaosSolver.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UChaosSolver (UObject)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosSolver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosSolver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosSolver_Statics::ClassParams = {
	&UChaosSolver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosSolver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosSolver()
{
	if (!Z_Registration_Info_UClass_UChaosSolver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosSolver.OuterSingleton, Z_Construct_UClass_UChaosSolver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosSolver.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosSolver>()
{
	return UChaosSolver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosSolver);
UChaosSolver::~UChaosSolver() {}
// End Class UChaosSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosSolver, UChaosSolver::StaticClass, TEXT("UChaosSolver"), &Z_Registration_Info_UClass_UChaosSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosSolver), 936185063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_3396319048(TEXT("/Script/ChaosSolverEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
