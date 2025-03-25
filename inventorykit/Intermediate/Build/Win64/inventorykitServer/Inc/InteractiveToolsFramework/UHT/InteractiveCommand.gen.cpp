// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveCommand() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommand();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommand_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandArguments();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandArguments_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandResult();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandResult_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UInteractiveCommandArguments
void UInteractiveCommandArguments::StaticRegisterNativesUInteractiveCommandArguments()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveCommandArguments);
UClass* Z_Construct_UClass_UInteractiveCommandArguments_NoRegister()
{
	return UInteractiveCommandArguments::StaticClass();
}
struct Z_Construct_UClass_UInteractiveCommandArguments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveCommandArguments are arguments passed to a UInteractiveCommand.\n * Subclasses of UInteractiveCommand will generally be paired with subclasses of UInteractiveCommandArguments.\n * \n * The base UInteractiveCommandArguments provides support for transactions via \n * a IToolsContextTransactionsAPI\n */" },
		{ "IncludePath", "InteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/InteractiveCommand.h" },
		{ "ToolTip", "UInteractiveCommandArguments are arguments passed to a UInteractiveCommand.\nSubclasses of UInteractiveCommand will generally be paired with subclasses of UInteractiveCommandArguments.\n\nThe base UInteractiveCommandArguments provides support for transactions via\na IToolsContextTransactionsAPI" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveCommandArguments>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveCommandArguments_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommandArguments_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveCommandArguments_Statics::ClassParams = {
	&UInteractiveCommandArguments::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommandArguments_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveCommandArguments_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveCommandArguments()
{
	if (!Z_Registration_Info_UClass_UInteractiveCommandArguments.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveCommandArguments.OuterSingleton, Z_Construct_UClass_UInteractiveCommandArguments_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveCommandArguments.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveCommandArguments>()
{
	return UInteractiveCommandArguments::StaticClass();
}
UInteractiveCommandArguments::UInteractiveCommandArguments(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveCommandArguments);
UInteractiveCommandArguments::~UInteractiveCommandArguments() {}
// End Class UInteractiveCommandArguments

// Begin Class UInteractiveCommandResult
void UInteractiveCommandResult::StaticRegisterNativesUInteractiveCommandResult()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveCommandResult);
UClass* Z_Construct_UClass_UInteractiveCommandResult_NoRegister()
{
	return UInteractiveCommandResult::StaticClass();
}
struct Z_Construct_UClass_UInteractiveCommandResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveCommandResult subclasses are returned from UInteractiveCommands, to allow\n * commands to return custom information.\n */" },
		{ "IncludePath", "InteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/InteractiveCommand.h" },
		{ "ToolTip", "UInteractiveCommandResult subclasses are returned from UInteractiveCommands, to allow\ncommands to return custom information." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveCommandResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveCommandResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommandResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveCommandResult_Statics::ClassParams = {
	&UInteractiveCommandResult::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommandResult_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveCommandResult_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveCommandResult()
{
	if (!Z_Registration_Info_UClass_UInteractiveCommandResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveCommandResult.OuterSingleton, Z_Construct_UClass_UInteractiveCommandResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveCommandResult.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveCommandResult>()
{
	return UInteractiveCommandResult::StaticClass();
}
UInteractiveCommandResult::UInteractiveCommandResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveCommandResult);
UInteractiveCommandResult::~UInteractiveCommandResult() {}
// End Class UInteractiveCommandResult

// Begin Class UInteractiveCommand
void UInteractiveCommand::StaticRegisterNativesUInteractiveCommand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveCommand);
UClass* Z_Construct_UClass_UInteractiveCommand_NoRegister()
{
	return UInteractiveCommand::StaticClass();
}
struct Z_Construct_UClass_UInteractiveCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveCommand is an atomic action that can be executed via some user interaction.\n * For example clicking a button that deletes an active selection can be considered an Interactive Command.\n * This differs from an Interactive Tool in that there is no ongoing user interaction once the\n * command has been initiated. \n */" },
		{ "IncludePath", "InteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/InteractiveCommand.h" },
		{ "ToolTip", "A UInteractiveCommand is an atomic action that can be executed via some user interaction.\nFor example clicking a button that deletes an active selection can be considered an Interactive Command.\nThis differs from an Interactive Tool in that there is no ongoing user interaction once the\ncommand has been initiated." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveCommand_Statics::ClassParams = {
	&UInteractiveCommand::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveCommand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveCommand()
{
	if (!Z_Registration_Info_UClass_UInteractiveCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveCommand.OuterSingleton, Z_Construct_UClass_UInteractiveCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveCommand.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveCommand>()
{
	return UInteractiveCommand::StaticClass();
}
UInteractiveCommand::UInteractiveCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveCommand);
UInteractiveCommand::~UInteractiveCommand() {}
// End Class UInteractiveCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveCommandArguments, UInteractiveCommandArguments::StaticClass, TEXT("UInteractiveCommandArguments"), &Z_Registration_Info_UClass_UInteractiveCommandArguments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveCommandArguments), 2077632724U) },
		{ Z_Construct_UClass_UInteractiveCommandResult, UInteractiveCommandResult::StaticClass, TEXT("UInteractiveCommandResult"), &Z_Registration_Info_UClass_UInteractiveCommandResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveCommandResult), 2055650243U) },
		{ Z_Construct_UClass_UInteractiveCommand, UInteractiveCommand::StaticClass, TEXT("UInteractiveCommand"), &Z_Registration_Info_UClass_UInteractiveCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveCommand), 1963285012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_1629424740(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
