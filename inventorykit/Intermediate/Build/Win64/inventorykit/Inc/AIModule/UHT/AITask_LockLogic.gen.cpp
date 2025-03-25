// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Tasks/AITask_LockLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_LockLogic() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAITask();
AIMODULE_API UClass* Z_Construct_UClass_UAITask_LockLogic();
AIMODULE_API UClass* Z_Construct_UClass_UAITask_LockLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAITask_LockLogic
void UAITask_LockLogic::StaticRegisterNativesUAITask_LockLogic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask_LockLogic);
UClass* Z_Construct_UClass_UAITask_LockLogic_NoRegister()
{
	return UAITask_LockLogic::StaticClass();
}
struct Z_Construct_UClass_UAITask_LockLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Locks AI logic until removed by external trigger */" },
		{ "IncludePath", "Tasks/AITask_LockLogic.h" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_LockLogic.h" },
		{ "ToolTip", "Locks AI logic until removed by external trigger" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_LockLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAITask_LockLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAITask,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_LockLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_LockLogic_Statics::ClassParams = {
	&UAITask_LockLogic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_LockLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITask_LockLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAITask_LockLogic()
{
	if (!Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton, Z_Construct_UClass_UAITask_LockLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAITask_LockLogic>()
{
	return UAITask_LockLogic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_LockLogic);
UAITask_LockLogic::~UAITask_LockLogic() {}
// End Class UAITask_LockLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAITask_LockLogic, UAITask_LockLogic::StaticClass, TEXT("UAITask_LockLogic"), &Z_Registration_Info_UClass_UAITask_LockLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask_LockLogic), 4245870692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_2974170643(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
