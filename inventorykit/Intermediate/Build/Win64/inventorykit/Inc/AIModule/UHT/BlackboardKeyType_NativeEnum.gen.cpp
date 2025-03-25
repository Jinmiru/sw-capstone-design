// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_NativeEnum() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NativeEnum();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NativeEnum_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBlackboardKeyType_NativeEnum
void UBlackboardKeyType_NativeEnum::StaticRegisterNativesUBlackboardKeyType_NativeEnum()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType_NativeEnum);
UClass* Z_Construct_UClass_UBlackboardKeyType_NativeEnum_NoRegister()
{
	return UBlackboardKeyType_NativeEnum::StaticClass();
}
struct Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "Comment", "// DEPRECATED, please use UBlackboardKeyType_Enum instead\n" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h" },
		{ "ToolTip", "DEPRECATED, please use UBlackboardKeyType_Enum instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnumName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnumType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_NativeEnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::NewProp_EnumName = { "EnumName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardKeyType_NativeEnum, EnumName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumName_MetaData), NewProp_EnumName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::NewProp_EnumType = { "EnumType", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardKeyType_NativeEnum, EnumType), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumType_MetaData), NewProp_EnumType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::NewProp_EnumName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::NewProp_EnumType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::ClassParams = {
	&UBlackboardKeyType_NativeEnum::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::PropPointers),
	0,
	0x040820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlackboardKeyType_NativeEnum()
{
	if (!Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_NativeEnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType_NativeEnum>()
{
	return UBlackboardKeyType_NativeEnum::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_NativeEnum);
UBlackboardKeyType_NativeEnum::~UBlackboardKeyType_NativeEnum() {}
// End Class UBlackboardKeyType_NativeEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_NativeEnum_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType_NativeEnum, UBlackboardKeyType_NativeEnum::StaticClass, TEXT("UBlackboardKeyType_NativeEnum"), &Z_Registration_Info_UClass_UBlackboardKeyType_NativeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType_NativeEnum), 273814023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_NativeEnum_h_1953714710(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_NativeEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_NativeEnum_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
