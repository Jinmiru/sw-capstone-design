// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_SolveVelocitiesAndForces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SolveVelocitiesAndForces() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_SolveVelocitiesAndForces
void UNiagaraStatelessModule_SolveVelocitiesAndForces::StaticRegisterNativesUNiagaraStatelessModule_SolveVelocitiesAndForces()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_SolveVelocitiesAndForces);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_NoRegister()
{
	return UNiagaraStatelessModule_SolveVelocitiesAndForces::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Solve Forces And Velocity" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_SolveVelocitiesAndForces.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SolveVelocitiesAndForces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_SolveVelocitiesAndForces>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_Statics::ClassParams = {
	&UNiagaraStatelessModule_SolveVelocitiesAndForces::StaticClass,
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
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_SolveVelocitiesAndForces>()
{
	return UNiagaraStatelessModule_SolveVelocitiesAndForces::StaticClass();
}
UNiagaraStatelessModule_SolveVelocitiesAndForces::UNiagaraStatelessModule_SolveVelocitiesAndForces() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_SolveVelocitiesAndForces);
UNiagaraStatelessModule_SolveVelocitiesAndForces::~UNiagaraStatelessModule_SolveVelocitiesAndForces() {}
// End Class UNiagaraStatelessModule_SolveVelocitiesAndForces

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SolveVelocitiesAndForces_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces, UNiagaraStatelessModule_SolveVelocitiesAndForces::StaticClass, TEXT("UNiagaraStatelessModule_SolveVelocitiesAndForces"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_SolveVelocitiesAndForces), 1620559736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SolveVelocitiesAndForces_h_3744086380(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SolveVelocitiesAndForces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SolveVelocitiesAndForces_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
