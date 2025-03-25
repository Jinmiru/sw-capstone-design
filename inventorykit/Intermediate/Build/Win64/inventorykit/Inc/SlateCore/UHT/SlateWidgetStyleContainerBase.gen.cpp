// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleContainerBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Class USlateWidgetStyleContainerBase
void USlateWidgetStyleContainerBase::StaticRegisterNativesUSlateWidgetStyleContainerBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateWidgetStyleContainerBase);
UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister()
{
	return USlateWidgetStyleContainerBase::StaticClass();
}
struct Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Just a wrapper for the struct with real data in it.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Styling/SlateWidgetStyleContainerBase.h" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleContainerBase.h" },
		{ "ToolTip", "Just a wrapper for the struct with real data in it." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateWidgetStyleContainerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister, (int32)VTABLE_OFFSET(USlateWidgetStyleContainerBase, ISlateWidgetStyleContainerInterface), false },  // 391521087
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::ClassParams = {
	&USlateWidgetStyleContainerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase()
{
	if (!Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.OuterSingleton, Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.OuterSingleton;
}
template<> SLATECORE_API UClass* StaticClass<USlateWidgetStyleContainerBase>()
{
	return USlateWidgetStyleContainerBase::StaticClass();
}
USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleContainerBase);
USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase() {}
// End Class USlateWidgetStyleContainerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateWidgetStyleContainerBase, USlateWidgetStyleContainerBase::StaticClass, TEXT("USlateWidgetStyleContainerBase"), &Z_Registration_Info_UClass_USlateWidgetStyleContainerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateWidgetStyleContainerBase), 656835302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_3234876559(TEXT("/Script/SlateCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
