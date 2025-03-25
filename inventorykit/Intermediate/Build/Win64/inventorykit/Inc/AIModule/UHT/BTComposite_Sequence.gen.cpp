// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Composites/BTComposite_Sequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_Sequence() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence();
AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTComposite_Sequence
void UBTComposite_Sequence::StaticRegisterNativesUBTComposite_Sequence()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTComposite_Sequence);
UClass* Z_Construct_UClass_UBTComposite_Sequence_NoRegister()
{
	return UBTComposite_Sequence::StaticClass();
}
struct Z_Construct_UClass_UBTComposite_Sequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sequence composite node.\n * Sequence Nodes execute their children from left to right, and will stop executing its children when one of their children fails.\n * If a child fails, then the Sequence fails. If all the Sequence's children succeed, then the Sequence succeeds.\n */" },
		{ "IncludePath", "BehaviorTree/Composites/BTComposite_Sequence.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_Sequence.h" },
		{ "ToolTip", "Sequence composite node.\nSequence Nodes execute their children from left to right, and will stop executing its children when one of their children fails.\nIf a child fails, then the Sequence fails. If all the Sequence's children succeed, then the Sequence succeeds." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTComposite_Sequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTComposite_Sequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTComposite_Sequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTComposite_Sequence_Statics::ClassParams = {
	&UBTComposite_Sequence::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTComposite_Sequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTComposite_Sequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTComposite_Sequence()
{
	if (!Z_Registration_Info_UClass_UBTComposite_Sequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTComposite_Sequence.OuterSingleton, Z_Construct_UClass_UBTComposite_Sequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTComposite_Sequence.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTComposite_Sequence>()
{
	return UBTComposite_Sequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_Sequence);
UBTComposite_Sequence::~UBTComposite_Sequence() {}
// End Class UBTComposite_Sequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTComposite_Sequence, UBTComposite_Sequence::StaticClass, TEXT("UBTComposite_Sequence"), &Z_Registration_Info_UClass_UBTComposite_Sequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTComposite_Sequence), 7355961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_1121388973(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
