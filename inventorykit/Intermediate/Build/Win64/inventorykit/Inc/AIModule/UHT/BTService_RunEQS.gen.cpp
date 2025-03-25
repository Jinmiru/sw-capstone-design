// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Services/BTService_RunEQS.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_RunEQS() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTService_RunEQS();
AIMODULE_API UClass* Z_Construct_UClass_UBTService_RunEQS_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTService_RunEQS
void UBTService_RunEQS::StaticRegisterNativesUBTService_RunEQS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_RunEQS);
UClass* Z_Construct_UClass_UBTService_RunEQS_NoRegister()
{
	return UBTService_RunEQS::StaticClass();
}
struct Z_Construct_UClass_UBTService_RunEQS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Services/BTService_RunEQS.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_RunEQS.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_RunEQS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateBBOnFail_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_RunEQS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
	static void NewProp_bUpdateBBOnFail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateBBOnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_RunEQS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_RunEQS_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_RunEQS, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EQSRequest_MetaData), NewProp_EQSRequest_MetaData) }; // 1212105169
void Z_Construct_UClass_UBTService_RunEQS_Statics::NewProp_bUpdateBBOnFail_SetBit(void* Obj)
{
	((UBTService_RunEQS*)Obj)->bUpdateBBOnFail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_RunEQS_Statics::NewProp_bUpdateBBOnFail = { "bUpdateBBOnFail", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTService_RunEQS), &Z_Construct_UClass_UBTService_RunEQS_Statics::NewProp_bUpdateBBOnFail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateBBOnFail_MetaData), NewProp_bUpdateBBOnFail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_RunEQS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_RunEQS_Statics::NewProp_EQSRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_RunEQS_Statics::NewProp_bUpdateBBOnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_RunEQS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_RunEQS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_RunEQS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_RunEQS_Statics::ClassParams = {
	&UBTService_RunEQS::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_RunEQS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_RunEQS_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_RunEQS_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_RunEQS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_RunEQS()
{
	if (!Z_Registration_Info_UClass_UBTService_RunEQS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_RunEQS.OuterSingleton, Z_Construct_UClass_UBTService_RunEQS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_RunEQS.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTService_RunEQS>()
{
	return UBTService_RunEQS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_RunEQS);
UBTService_RunEQS::~UBTService_RunEQS() {}
// End Class UBTService_RunEQS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_RunEQS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_RunEQS, UBTService_RunEQS::StaticClass, TEXT("UBTService_RunEQS"), &Z_Registration_Info_UClass_UBTService_RunEQS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_RunEQS), 1978299009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_RunEQS_h_41276058(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_RunEQS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_RunEQS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
