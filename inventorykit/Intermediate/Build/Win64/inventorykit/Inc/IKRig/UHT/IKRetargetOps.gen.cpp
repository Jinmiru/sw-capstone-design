// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Retargeter/IKRetargetOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetOps() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpBase();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpBase_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpStack();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Class URetargetOpBase
void URetargetOpBase::StaticRegisterNativesURetargetOpBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetargetOpBase);
UClass* Z_Construct_UClass_URetargetOpBase_NoRegister()
{
	return URetargetOpBase::StaticClass();
}
struct Z_Construct_UClass_URetargetOpBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Retargeter/IKRetargetOps.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetOps.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetargetOpBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URetargetOpBase_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((URetargetOpBase*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetOpBase_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URetargetOpBase), &Z_Construct_UClass_URetargetOpBase_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetargetOpBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetOpBase_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetOpBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URetargetOpBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetOpBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URetargetOpBase_Statics::ClassParams = {
	&URetargetOpBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URetargetOpBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URetargetOpBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetOpBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URetargetOpBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URetargetOpBase()
{
	if (!Z_Registration_Info_UClass_URetargetOpBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetargetOpBase.OuterSingleton, Z_Construct_UClass_URetargetOpBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URetargetOpBase.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<URetargetOpBase>()
{
	return URetargetOpBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URetargetOpBase);
URetargetOpBase::~URetargetOpBase() {}
// End Class URetargetOpBase

// Begin Class URetargetOpStack
void URetargetOpStack::StaticRegisterNativesURetargetOpStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetargetOpStack);
UClass* Z_Construct_UClass_URetargetOpStack_NoRegister()
{
	return URetargetOpStack::StaticClass();
}
struct Z_Construct_UClass_URetargetOpStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// wrapper around a TArray of Retarget Ops for display in details panel\n" },
		{ "IncludePath", "Retargeter/IKRetargetOps.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetOps.h" },
		{ "ToolTip", "wrapper around a TArray of Retarget Ops for display in details panel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetOps_MetaData[] = {
		{ "Comment", "// stack of operations to run AFTER the main retarget phases (Order is: Root/IK/FK/Post) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetOps.h" },
		{ "ToolTip", "stack of operations to run AFTER the main retarget phases (Order is: Root/IK/FK/Post)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetOps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RetargetOps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetargetOpStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URetargetOpStack_Statics::NewProp_RetargetOps_Inner = { "RetargetOps", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URetargetOpBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URetargetOpStack_Statics::NewProp_RetargetOps = { "RetargetOps", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetOpStack, RetargetOps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetOps_MetaData), NewProp_RetargetOps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetargetOpStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetOpStack_Statics::NewProp_RetargetOps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetOpStack_Statics::NewProp_RetargetOps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetOpStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URetargetOpStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetOpStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URetargetOpStack_Statics::ClassParams = {
	&URetargetOpStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URetargetOpStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URetargetOpStack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetOpStack_Statics::Class_MetaDataParams), Z_Construct_UClass_URetargetOpStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URetargetOpStack()
{
	if (!Z_Registration_Info_UClass_URetargetOpStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetargetOpStack.OuterSingleton, Z_Construct_UClass_URetargetOpStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URetargetOpStack.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<URetargetOpStack>()
{
	return URetargetOpStack::StaticClass();
}
URetargetOpStack::URetargetOpStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URetargetOpStack);
URetargetOpStack::~URetargetOpStack() {}
// End Class URetargetOpStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URetargetOpBase, URetargetOpBase::StaticClass, TEXT("URetargetOpBase"), &Z_Registration_Info_UClass_URetargetOpBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetargetOpBase), 780324176U) },
		{ Z_Construct_UClass_URetargetOpStack, URetargetOpStack::StaticClass, TEXT("URetargetOpStack"), &Z_Registration_Info_UClass_URetargetOpStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetargetOpStack), 568250457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_106281774(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
