// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/Commands/ModifyGeometrySelectionCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifyGeometrySelectionCommand() {}

// Begin Cross Module References
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommand();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UModifyGeometrySelectionCommand
void UModifyGeometrySelectionCommand::StaticRegisterNativesUModifyGeometrySelectionCommand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifyGeometrySelectionCommand);
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_NoRegister()
{
	return UModifyGeometrySelectionCommand::StaticClass();
}
struct Z_Construct_UClass_UModifyGeometrySelectionCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UModifyGeometrySelectionCommand updates/edits the current selection in various ways.\n * Default operation is to Select All.\n * Subclasses below can be used in situations where specific per-modification types are needed.\n */" },
		{ "IncludePath", "Commands/ModifyGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/ModifyGeometrySelectionCommand.h" },
		{ "ToolTip", "UModifyGeometrySelectionCommand updates/edits the current selection in various ways.\nDefault operation is to Select All.\nSubclasses below can be used in situations where specific per-modification types are needed." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyGeometrySelectionCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModifyGeometrySelectionCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeometrySelectionEditCommand,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyGeometrySelectionCommand_Statics::ClassParams = {
	&UModifyGeometrySelectionCommand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyGeometrySelectionCommand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand()
{
	if (!Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.OuterSingleton, Z_Construct_UClass_UModifyGeometrySelectionCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UModifyGeometrySelectionCommand>()
{
	return UModifyGeometrySelectionCommand::StaticClass();
}
UModifyGeometrySelectionCommand::UModifyGeometrySelectionCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyGeometrySelectionCommand);
UModifyGeometrySelectionCommand::~UModifyGeometrySelectionCommand() {}
// End Class UModifyGeometrySelectionCommand

// Begin Class UModifyGeometrySelectionCommand_Invert
void UModifyGeometrySelectionCommand_Invert::StaticRegisterNativesUModifyGeometrySelectionCommand_Invert()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifyGeometrySelectionCommand_Invert);
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_NoRegister()
{
	return UModifyGeometrySelectionCommand_Invert::StaticClass();
}
struct Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Command to Invert the current Selection\n */" },
		{ "IncludePath", "Commands/ModifyGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/ModifyGeometrySelectionCommand.h" },
		{ "ToolTip", "Command to Invert the current Selection" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyGeometrySelectionCommand_Invert>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModifyGeometrySelectionCommand,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_Statics::ClassParams = {
	&UModifyGeometrySelectionCommand_Invert::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert()
{
	if (!Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.OuterSingleton, Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UModifyGeometrySelectionCommand_Invert>()
{
	return UModifyGeometrySelectionCommand_Invert::StaticClass();
}
UModifyGeometrySelectionCommand_Invert::UModifyGeometrySelectionCommand_Invert(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyGeometrySelectionCommand_Invert);
UModifyGeometrySelectionCommand_Invert::~UModifyGeometrySelectionCommand_Invert() {}
// End Class UModifyGeometrySelectionCommand_Invert

// Begin Class UModifyGeometrySelectionCommand_ExpandToConnected
void UModifyGeometrySelectionCommand_ExpandToConnected::StaticRegisterNativesUModifyGeometrySelectionCommand_ExpandToConnected()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifyGeometrySelectionCommand_ExpandToConnected);
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_NoRegister()
{
	return UModifyGeometrySelectionCommand_ExpandToConnected::StaticClass();
}
struct Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Command to Expand the current Selection to all connected geometry\n */" },
		{ "IncludePath", "Commands/ModifyGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/ModifyGeometrySelectionCommand.h" },
		{ "ToolTip", "Command to Expand the current Selection to all connected geometry" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyGeometrySelectionCommand_ExpandToConnected>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModifyGeometrySelectionCommand,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_Statics::ClassParams = {
	&UModifyGeometrySelectionCommand_ExpandToConnected::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected()
{
	if (!Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.OuterSingleton, Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UModifyGeometrySelectionCommand_ExpandToConnected>()
{
	return UModifyGeometrySelectionCommand_ExpandToConnected::StaticClass();
}
UModifyGeometrySelectionCommand_ExpandToConnected::UModifyGeometrySelectionCommand_ExpandToConnected(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyGeometrySelectionCommand_ExpandToConnected);
UModifyGeometrySelectionCommand_ExpandToConnected::~UModifyGeometrySelectionCommand_ExpandToConnected() {}
// End Class UModifyGeometrySelectionCommand_ExpandToConnected

// Begin Class UModifyGeometrySelectionCommand_InvertConnected
void UModifyGeometrySelectionCommand_InvertConnected::StaticRegisterNativesUModifyGeometrySelectionCommand_InvertConnected()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifyGeometrySelectionCommand_InvertConnected);
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_NoRegister()
{
	return UModifyGeometrySelectionCommand_InvertConnected::StaticClass();
}
struct Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Command to Invert the current Selection, only considering connected geometry\n */" },
		{ "IncludePath", "Commands/ModifyGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/ModifyGeometrySelectionCommand.h" },
		{ "ToolTip", "Command to Invert the current Selection, only considering connected geometry" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyGeometrySelectionCommand_InvertConnected>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModifyGeometrySelectionCommand,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_Statics::ClassParams = {
	&UModifyGeometrySelectionCommand_InvertConnected::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected()
{
	if (!Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.OuterSingleton, Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UModifyGeometrySelectionCommand_InvertConnected>()
{
	return UModifyGeometrySelectionCommand_InvertConnected::StaticClass();
}
UModifyGeometrySelectionCommand_InvertConnected::UModifyGeometrySelectionCommand_InvertConnected(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyGeometrySelectionCommand_InvertConnected);
UModifyGeometrySelectionCommand_InvertConnected::~UModifyGeometrySelectionCommand_InvertConnected() {}
// End Class UModifyGeometrySelectionCommand_InvertConnected

// Begin Class UModifyGeometrySelectionCommand_Expand
void UModifyGeometrySelectionCommand_Expand::StaticRegisterNativesUModifyGeometrySelectionCommand_Expand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifyGeometrySelectionCommand_Expand);
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_NoRegister()
{
	return UModifyGeometrySelectionCommand_Expand::StaticClass();
}
struct Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Command to Expand the current Selection by a one-ring\n */" },
		{ "IncludePath", "Commands/ModifyGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/ModifyGeometrySelectionCommand.h" },
		{ "ToolTip", "Command to Expand the current Selection by a one-ring" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyGeometrySelectionCommand_Expand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModifyGeometrySelectionCommand,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_Statics::ClassParams = {
	&UModifyGeometrySelectionCommand_Expand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand()
{
	if (!Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.OuterSingleton, Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UModifyGeometrySelectionCommand_Expand>()
{
	return UModifyGeometrySelectionCommand_Expand::StaticClass();
}
UModifyGeometrySelectionCommand_Expand::UModifyGeometrySelectionCommand_Expand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyGeometrySelectionCommand_Expand);
UModifyGeometrySelectionCommand_Expand::~UModifyGeometrySelectionCommand_Expand() {}
// End Class UModifyGeometrySelectionCommand_Expand

// Begin Class UModifyGeometrySelectionCommand_Contract
void UModifyGeometrySelectionCommand_Contract::StaticRegisterNativesUModifyGeometrySelectionCommand_Contract()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifyGeometrySelectionCommand_Contract);
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_NoRegister()
{
	return UModifyGeometrySelectionCommand_Contract::StaticClass();
}
struct Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Command to Contract the current Selection by a one-ring\n */" },
		{ "IncludePath", "Commands/ModifyGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/ModifyGeometrySelectionCommand.h" },
		{ "ToolTip", "Command to Contract the current Selection by a one-ring" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyGeometrySelectionCommand_Contract>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModifyGeometrySelectionCommand,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_Statics::ClassParams = {
	&UModifyGeometrySelectionCommand_Contract::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract()
{
	if (!Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.OuterSingleton, Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UModifyGeometrySelectionCommand_Contract>()
{
	return UModifyGeometrySelectionCommand_Contract::StaticClass();
}
UModifyGeometrySelectionCommand_Contract::UModifyGeometrySelectionCommand_Contract(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyGeometrySelectionCommand_Contract);
UModifyGeometrySelectionCommand_Contract::~UModifyGeometrySelectionCommand_Contract() {}
// End Class UModifyGeometrySelectionCommand_Contract

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_ModifyGeometrySelectionCommand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModifyGeometrySelectionCommand, UModifyGeometrySelectionCommand::StaticClass, TEXT("UModifyGeometrySelectionCommand"), &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyGeometrySelectionCommand), 729386525U) },
		{ Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert, UModifyGeometrySelectionCommand_Invert::StaticClass, TEXT("UModifyGeometrySelectionCommand_Invert"), &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyGeometrySelectionCommand_Invert), 2324533603U) },
		{ Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected, UModifyGeometrySelectionCommand_ExpandToConnected::StaticClass, TEXT("UModifyGeometrySelectionCommand_ExpandToConnected"), &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyGeometrySelectionCommand_ExpandToConnected), 4126479143U) },
		{ Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected, UModifyGeometrySelectionCommand_InvertConnected::StaticClass, TEXT("UModifyGeometrySelectionCommand_InvertConnected"), &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyGeometrySelectionCommand_InvertConnected), 1625124327U) },
		{ Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand, UModifyGeometrySelectionCommand_Expand::StaticClass, TEXT("UModifyGeometrySelectionCommand_Expand"), &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyGeometrySelectionCommand_Expand), 916630031U) },
		{ Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract, UModifyGeometrySelectionCommand_Contract::StaticClass, TEXT("UModifyGeometrySelectionCommand_Contract"), &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyGeometrySelectionCommand_Contract), 462010612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_ModifyGeometrySelectionCommand_h_3238242252(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_ModifyGeometrySelectionCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_ModifyGeometrySelectionCommand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
