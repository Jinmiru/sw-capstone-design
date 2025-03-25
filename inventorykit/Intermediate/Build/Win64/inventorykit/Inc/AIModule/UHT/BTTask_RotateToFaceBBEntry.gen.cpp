// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RotateToFaceBBEntry() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_RotateToFaceBBEntry
void UBTTask_RotateToFaceBBEntry::StaticRegisterNativesUBTTask_RotateToFaceBBEntry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RotateToFaceBBEntry);
UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister()
{
	return UBTTask_RotateToFaceBBEntry::StaticClass();
}
struct Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Success condition precision in degrees */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
		{ "ToolTip", "Success condition precision in degrees" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RotateToFaceBBEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RotateToFaceBBEntry, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precision_MetaData), NewProp_Precision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::ClassParams = {
	&UBTTask_RotateToFaceBBEntry::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry()
{
	if (!Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.OuterSingleton, Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_RotateToFaceBBEntry>()
{
	return UBTTask_RotateToFaceBBEntry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RotateToFaceBBEntry);
UBTTask_RotateToFaceBBEntry::~UBTTask_RotateToFaceBBEntry() {}
// End Class UBTTask_RotateToFaceBBEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RotateToFaceBBEntry, UBTTask_RotateToFaceBBEntry::StaticClass, TEXT("UBTTask_RotateToFaceBBEntry"), &Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RotateToFaceBBEntry), 4140670069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_3180973670(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
