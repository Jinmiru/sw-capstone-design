// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Selection/SelectionEditInteractiveCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectionEditInteractiveCommand() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommand();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandArguments();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandResult();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommand();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommand_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommandArguments();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommandArguments_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommandResult();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommandResult_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UGeometrySelectionEditCommandArguments
void UGeometrySelectionEditCommandArguments::StaticRegisterNativesUGeometrySelectionEditCommandArguments()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometrySelectionEditCommandArguments);
UClass* Z_Construct_UClass_UGeometrySelectionEditCommandArguments_NoRegister()
{
	return UGeometrySelectionEditCommandArguments::StaticClass();
}
struct Z_Construct_UClass_UGeometrySelectionEditCommandArguments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Arguments for a UGeometrySelectionEditCommand\n */" },
		{ "IncludePath", "Selection/SelectionEditInteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/Selection/SelectionEditInteractiveCommand.h" },
		{ "ToolTip", "Arguments for a UGeometrySelectionEditCommand" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometrySelectionEditCommandArguments>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeometrySelectionEditCommandArguments_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveCommandArguments,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionEditCommandArguments_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometrySelectionEditCommandArguments_Statics::ClassParams = {
	&UGeometrySelectionEditCommandArguments::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionEditCommandArguments_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometrySelectionEditCommandArguments_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometrySelectionEditCommandArguments()
{
	if (!Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.OuterSingleton, Z_Construct_UClass_UGeometrySelectionEditCommandArguments_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UGeometrySelectionEditCommandArguments>()
{
	return UGeometrySelectionEditCommandArguments::StaticClass();
}
UGeometrySelectionEditCommandArguments::UGeometrySelectionEditCommandArguments(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometrySelectionEditCommandArguments);
UGeometrySelectionEditCommandArguments::~UGeometrySelectionEditCommandArguments() {}
// End Class UGeometrySelectionEditCommandArguments

// Begin Class UGeometrySelectionEditCommandResult
void UGeometrySelectionEditCommandResult::StaticRegisterNativesUGeometrySelectionEditCommandResult()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometrySelectionEditCommandResult);
UClass* Z_Construct_UClass_UGeometrySelectionEditCommandResult_NoRegister()
{
	return UGeometrySelectionEditCommandResult::StaticClass();
}
struct Z_Construct_UClass_UGeometrySelectionEditCommandResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Selection/SelectionEditInteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/Selection/SelectionEditInteractiveCommand.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometrySelectionEditCommandResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeometrySelectionEditCommandResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveCommandResult,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionEditCommandResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometrySelectionEditCommandResult_Statics::ClassParams = {
	&UGeometrySelectionEditCommandResult::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionEditCommandResult_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometrySelectionEditCommandResult_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometrySelectionEditCommandResult()
{
	if (!Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.OuterSingleton, Z_Construct_UClass_UGeometrySelectionEditCommandResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UGeometrySelectionEditCommandResult>()
{
	return UGeometrySelectionEditCommandResult::StaticClass();
}
UGeometrySelectionEditCommandResult::UGeometrySelectionEditCommandResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometrySelectionEditCommandResult);
UGeometrySelectionEditCommandResult::~UGeometrySelectionEditCommandResult() {}
// End Class UGeometrySelectionEditCommandResult

// Begin Class UGeometrySelectionEditCommand
void UGeometrySelectionEditCommand::StaticRegisterNativesUGeometrySelectionEditCommand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometrySelectionEditCommand);
UClass* Z_Construct_UClass_UGeometrySelectionEditCommand_NoRegister()
{
	return UGeometrySelectionEditCommand::StaticClass();
}
struct Z_Construct_UClass_UGeometrySelectionEditCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGeometrySelectionEditCommand is a command that edits geometry based on a selection.\n * Requires a UGeometrySelectionEditCommandArguments\n */" },
		{ "IncludePath", "Selection/SelectionEditInteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/Selection/SelectionEditInteractiveCommand.h" },
		{ "ToolTip", "UGeometrySelectionEditCommand is a command that edits geometry based on a selection.\nRequires a UGeometrySelectionEditCommandArguments" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometrySelectionEditCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeometrySelectionEditCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveCommand,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionEditCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometrySelectionEditCommand_Statics::ClassParams = {
	&UGeometrySelectionEditCommand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionEditCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometrySelectionEditCommand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometrySelectionEditCommand()
{
	if (!Z_Registration_Info_UClass_UGeometrySelectionEditCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometrySelectionEditCommand.OuterSingleton, Z_Construct_UClass_UGeometrySelectionEditCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometrySelectionEditCommand.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UGeometrySelectionEditCommand>()
{
	return UGeometrySelectionEditCommand::StaticClass();
}
UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometrySelectionEditCommand);
UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand() {}
// End Class UGeometrySelectionEditCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_SelectionEditInteractiveCommand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometrySelectionEditCommandArguments, UGeometrySelectionEditCommandArguments::StaticClass, TEXT("UGeometrySelectionEditCommandArguments"), &Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometrySelectionEditCommandArguments), 3477647342U) },
		{ Z_Construct_UClass_UGeometrySelectionEditCommandResult, UGeometrySelectionEditCommandResult::StaticClass, TEXT("UGeometrySelectionEditCommandResult"), &Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometrySelectionEditCommandResult), 170381486U) },
		{ Z_Construct_UClass_UGeometrySelectionEditCommand, UGeometrySelectionEditCommand::StaticClass, TEXT("UGeometrySelectionEditCommand"), &Z_Registration_Info_UClass_UGeometrySelectionEditCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometrySelectionEditCommand), 1371614630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_SelectionEditInteractiveCommand_h_803262489(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_SelectionEditInteractiveCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_SelectionEditInteractiveCommand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
