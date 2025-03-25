// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRigValidationPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigValidationPass() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidationPass();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidationPass_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidator();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidator_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigValidationContext();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FControlRigValidationContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigValidationContext;
class UScriptStruct* FControlRigValidationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigValidationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigValidationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigValidationContext, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigValidationContext"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigValidationContext.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigValidationContext>()
{
	return FControlRigValidationContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigValidationContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// todo DECLARE_DELEGATE_TwoParams(FControlRigValidationControlRigChangedDelegate, UControlRigValidator*, UControlRig*);\n" },
		{ "ModuleRelativePath", "Public/ControlRigValidationPass.h" },
		{ "ToolTip", "todo DECLARE_DELEGATE_TwoParams(FControlRigValidationControlRigChangedDelegate, UControlRigValidator*, UControlRig*);" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigValidationContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigValidationContext",
	nullptr,
	0,
	sizeof(FControlRigValidationContext),
	alignof(FControlRigValidationContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigValidationContext()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigValidationContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigValidationContext.InnerSingleton, Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigValidationContext.InnerSingleton;
}
// End ScriptStruct FControlRigValidationContext

// Begin Class UControlRigValidator
void UControlRigValidator::StaticRegisterNativesUControlRigValidator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigValidator);
UClass* Z_Construct_UClass_UControlRigValidator_NoRegister()
{
	return UControlRigValidator::StaticClass();
}
struct Z_Construct_UClass_UControlRigValidator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Used to perform validation on a debugged Control Rig */" },
		{ "IncludePath", "ControlRigValidationPass.h" },
		{ "ModuleRelativePath", "Public/ControlRigValidationPass.h" },
		{ "ToolTip", "Used to perform validation on a debugged Control Rig" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Passes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigValidationPass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Passes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Passes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigValidator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes_Inner = { "Passes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UControlRigValidationPass_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes = { "Passes", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigValidator, Passes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Passes_MetaData), NewProp_Passes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigValidator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigValidator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigValidator_Statics::ClassParams = {
	&UControlRigValidator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UControlRigValidator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidator_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigValidator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigValidator()
{
	if (!Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton, Z_Construct_UClass_UControlRigValidator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigValidator>()
{
	return UControlRigValidator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigValidator);
UControlRigValidator::~UControlRigValidator() {}
// End Class UControlRigValidator

// Begin Class UControlRigValidationPass
void UControlRigValidationPass::StaticRegisterNativesUControlRigValidationPass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigValidationPass);
UClass* Z_Construct_UClass_UControlRigValidationPass_NoRegister()
{
	return UControlRigValidationPass::StaticClass();
}
struct Z_Construct_UClass_UControlRigValidationPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Used to perform validation on a debugged Control Rig */" },
		{ "IncludePath", "ControlRigValidationPass.h" },
		{ "ModuleRelativePath", "Public/ControlRigValidationPass.h" },
		{ "ToolTip", "Used to perform validation on a debugged Control Rig" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigValidationPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UControlRigValidationPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidationPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigValidationPass_Statics::ClassParams = {
	&UControlRigValidationPass::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidationPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigValidationPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigValidationPass()
{
	if (!Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton, Z_Construct_UClass_UControlRigValidationPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigValidationPass>()
{
	return UControlRigValidationPass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigValidationPass);
UControlRigValidationPass::~UControlRigValidationPass() {}
// End Class UControlRigValidationPass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlRigValidationContext::StaticStruct, Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::NewStructOps, TEXT("ControlRigValidationContext"), &Z_Registration_Info_UScriptStruct_ControlRigValidationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigValidationContext), 1243855663U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigValidator, UControlRigValidator::StaticClass, TEXT("UControlRigValidator"), &Z_Registration_Info_UClass_UControlRigValidator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigValidator), 2591367296U) },
		{ Z_Construct_UClass_UControlRigValidationPass, UControlRigValidationPass::StaticClass, TEXT("UControlRigValidationPass"), &Z_Registration_Info_UClass_UControlRigValidationPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigValidationPass), 4189024252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_2599716658(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
