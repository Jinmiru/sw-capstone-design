// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Constraints/ControlRigTransformableHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigTransformableHandle() {}

// Begin Cross Module References
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UTransformableControlHandle();
CONTROLRIG_API UClass* Z_Construct_UClass_UTransformableControlHandle_NoRegister();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UTransformableControlHandle
void UTransformableControlHandle::StaticRegisterNativesUTransformableControlHandle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformableControlHandle);
UClass* Z_Construct_UClass_UTransformableControlHandle_NoRegister()
{
	return UTransformableControlHandle::StaticClass();
}
struct Z_Construct_UClass_UTransformableControlHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UTransformableControlHandle\n */" },
		{ "IncludePath", "Constraints/ControlRigTransformableHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Constraints/ControlRigTransformableHandle.h" },
		{ "ToolTip", "UTransformableControlHandle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** The ControlRig that this handle is pointing at. */" },
		{ "ModuleRelativePath", "Public/Constraints/ControlRigTransformableHandle.h" },
		{ "ToolTip", "The ControlRig that this handle is pointing at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** The ControlName of the control that this handle is pointing at. */" },
		{ "ModuleRelativePath", "Public/Constraints/ControlRigTransformableHandle.h" },
		{ "ToolTip", "The ControlName of the control that this handle is pointing at." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ControlRig;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformableControlHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformableControlHandle, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRig_MetaData), NewProp_ControlRig_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformableControlHandle, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlName_MetaData), NewProp_ControlName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformableControlHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableControlHandle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransformableControlHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTransformableHandle,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableControlHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformableControlHandle_Statics::ClassParams = {
	&UTransformableControlHandle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransformableControlHandle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableControlHandle_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableControlHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformableControlHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformableControlHandle()
{
	if (!Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton, Z_Construct_UClass_UTransformableControlHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UTransformableControlHandle>()
{
	return UTransformableControlHandle::StaticClass();
}
UTransformableControlHandle::UTransformableControlHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformableControlHandle);
// End Class UTransformableControlHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransformableControlHandle, UTransformableControlHandle::StaticClass, TEXT("UTransformableControlHandle"), &Z_Registration_Info_UClass_UTransformableControlHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformableControlHandle), 2042535364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_3219152484(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
