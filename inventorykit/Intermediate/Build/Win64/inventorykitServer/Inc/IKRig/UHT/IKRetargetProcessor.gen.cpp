// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Retargeter/IKRetargetProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetProcessor();
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetProcessor_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Class UIKRetargetProcessor
void UIKRetargetProcessor::StaticRegisterNativesUIKRetargetProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargetProcessor);
UClass* Z_Construct_UClass_UIKRetargetProcessor_NoRegister()
{
	return UIKRetargetProcessor::StaticClass();
}
struct Z_Construct_UClass_UIKRetargetProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The runtime processor that converts an input pose from a source skeleton into an output pose on a target skeleton.\n * To use:\n * 1. Initialize a processor with a Source/Target skeletal mesh and a UIKRetargeter asset.\n * 2. Call RunRetargeter and pass in a source pose as an array of global-space transforms\n * 3. RunRetargeter returns an array of global space transforms for the target skeleton.\n */" },
		{ "IncludePath", "Retargeter/IKRetargetProcessor.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProcessor.h" },
		{ "ToolTip", "The runtime processor that converts an input pose from a source skeleton into an output pose on a target skeleton.\nTo use:\n1. Initialize a processor with a Source/Target skeletal mesh and a UIKRetargeter asset.\n2. Call RunRetargeter and pass in a source pose as an array of global-space transforms\n3. RunRetargeter returns an array of global space transforms for the target skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKRigProcessor_MetaData[] = {
		{ "Comment", "/** The IK Rig processor for running IK on the target */// must be property to keep from being GC'd\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProcessor.h" },
		{ "ToolTip", "The IK Rig processor for running IK on the target // must be property to keep from being GC'd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpStack_MetaData[] = {
		{ "Comment", "/** The collection of operations to run in the final phase of retargeting */// must be property to keep from being GC'd\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProcessor.h" },
		{ "ToolTip", "The collection of operations to run in the final phase of retargeting // must be property to keep from being GC'd" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRigProcessor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OpStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargetProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_IKRigProcessor = { "IKRigProcessor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargetProcessor, IKRigProcessor), Z_Construct_UClass_UIKRigProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKRigProcessor_MetaData), NewProp_IKRigProcessor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_OpStack_Inner = { "OpStack", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URetargetOpBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_OpStack = { "OpStack", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargetProcessor, OpStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpStack_MetaData), NewProp_OpStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargetProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_IKRigProcessor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_OpStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_OpStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRetargetProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargetProcessor_Statics::ClassParams = {
	&UIKRetargetProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRetargetProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetProcessor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRetargetProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRetargetProcessor()
{
	if (!Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton, Z_Construct_UClass_UIKRetargetProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRetargetProcessor>()
{
	return UIKRetargetProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargetProcessor);
UIKRetargetProcessor::~UIKRetargetProcessor() {}
// End Class UIKRetargetProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKRetargetProcessor, UIKRetargetProcessor::StaticClass, TEXT("UIKRetargetProcessor"), &Z_Registration_Info_UClass_UIKRetargetProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargetProcessor), 659021117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_182367428(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
