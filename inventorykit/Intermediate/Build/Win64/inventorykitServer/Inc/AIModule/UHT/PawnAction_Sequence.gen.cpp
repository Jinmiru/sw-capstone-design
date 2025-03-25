// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction_Sequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Sequence() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UDEPRECATED_PawnAction_Sequence
void UDEPRECATED_PawnAction_Sequence::StaticRegisterNativesUDEPRECATED_PawnAction_Sequence()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnAction_Sequence);
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_NoRegister()
{
	return UDEPRECATED_PawnAction_Sequence::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Sequence.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionSequence_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildFailureHandlingMode_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentActionCopy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSequence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChildFailureHandlingMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecentActionCopy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnAction_Sequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::NewProp_ActionSequence_Inner = { "ActionSequence", nullptr, (EPropertyFlags)0x0104000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::NewProp_ActionSequence = { "ActionSequence", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction_Sequence, ActionSequence_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionSequence_MetaData), NewProp_ActionSequence_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode = { "ChildFailureHandlingMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction_Sequence, ChildFailureHandlingMode), Z_Construct_UEnum_AIModule_EPawnActionFailHandling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildFailureHandlingMode_MetaData), NewProp_ChildFailureHandlingMode_MetaData) }; // 3306492818
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::NewProp_RecentActionCopy = { "RecentActionCopy", nullptr, (EPropertyFlags)0x0114000020002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction_Sequence, RecentActionCopy_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentActionCopy_MetaData), NewProp_RecentActionCopy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::NewProp_ActionSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::NewProp_ActionSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::NewProp_RecentActionCopy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDEPRECATED_PawnAction,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::ClassParams = {
	&UDEPRECATED_PawnAction_Sequence::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::PropPointers),
	0,
	0x028812A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Sequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Sequence.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Sequence.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnAction_Sequence>()
{
	return UDEPRECATED_PawnAction_Sequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnAction_Sequence);
UDEPRECATED_PawnAction_Sequence::~UDEPRECATED_PawnAction_Sequence() {}
// End Class UDEPRECATED_PawnAction_Sequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnAction_Sequence, UDEPRECATED_PawnAction_Sequence::StaticClass, TEXT("UDEPRECATED_PawnAction_Sequence"), &Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Sequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnAction_Sequence), 293002043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_2914119129(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
