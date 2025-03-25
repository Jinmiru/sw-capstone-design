// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMExecuteContext() {}

// Begin Cross Module References
RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorage_NoRegister();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSlice();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMSlice
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMSlice;
class UScriptStruct* FRigVMSlice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMSlice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMSlice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSlice, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMSlice"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMSlice.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMSlice>()
{
	return FRigVMSlice::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMSlice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMSlice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMSlice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMSlice",
	nullptr,
	0,
	sizeof(FRigVMSlice),
	alignof(FRigVMSlice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSlice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMSlice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMSlice()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMSlice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMSlice.InnerSingleton, Z_Construct_UScriptStruct_FRigVMSlice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMSlice.InnerSingleton;
}
// End ScriptStruct FRigVMSlice

// Begin ScriptStruct FRigVMRuntimeSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings;
class UScriptStruct* FRigVMRuntimeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMRuntimeSettings, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMRuntimeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMRuntimeSettings>()
{
	return FRigVMRuntimeSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumArraySize_MetaData[] = {
		{ "Category", "VM" },
		{ "Comment", "/**\n\x09 * The largest allowed size for arrays within the RigVM.\n\x09 * Accessing or creating larger arrays will cause runtime errors in the rig.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "The largest allowed size for arrays within the RigVM.\nAccessing or creating larger arrays will cause runtime errors in the rig." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProfiling_MetaData[] = {
		{ "Category", "VM" },
		{ "Comment", "// When enabled records the timing of each instruction / node\n// on each node and within the execution stack window.\n// Keep in mind when looking at nodes in a function the duration\n// represents the accumulated duration of all invocations\n// of the function currently running.\n// \n// Note: This can only be used when in Debug Mode. Click the \"Release\" button\n// in the top toolbar to switch to Debug mode.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "When enabled records the timing of each instruction / node\non each node and within the execution stack window.\nKeep in mind when looking at nodes in a function the duration\nrepresents the accumulated duration of all invocations\nof the function currently running.\n\nNote: This can only be used when in Debug Mode. Click the \"Release\" button\nin the top toolbar to switch to Debug mode." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumArraySize;
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnableProfiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProfiling;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMRuntimeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_MaximumArraySize = { "MaximumArraySize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMRuntimeSettings, MaximumArraySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumArraySize_MetaData), NewProp_MaximumArraySize_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling_SetBit(void* Obj)
{
	((FRigVMRuntimeSettings*)Obj)->bEnableProfiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling = { "bEnableProfiling", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMRuntimeSettings), &Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProfiling_MetaData), NewProp_bEnableProfiling_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_MaximumArraySize,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMRuntimeSettings",
	Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::PropPointers),
	sizeof(FRigVMRuntimeSettings),
	alignof(FRigVMRuntimeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.InnerSingleton;
}
// End ScriptStruct FRigVMRuntimeSettings

// Begin ScriptStruct FRigVMExecuteContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMExecuteContext;
class UScriptStruct* FRigVMExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMExecuteContext.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMExecuteContext>()
{
	return FRigVMExecuteContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The execute context is used for mutable nodes to\n * indicate execution order.\n */" },
		{ "DisplayName", "Execute Context" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "The execute context is used for mutable nodes to\nindicate execution order." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMExecuteContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMExecuteContext",
	nullptr,
	0,
	sizeof(FRigVMExecuteContext),
	alignof(FRigVMExecuteContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExecuteContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMExecuteContext.InnerSingleton;
}
// End ScriptStruct FRigVMExecuteContext

// Begin ScriptStruct FRigVMExtendedExecuteContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext;
class UScriptStruct* FRigVMExtendedExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMExtendedExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMExtendedExecuteContext>()
{
	return FRigVMExtendedExecuteContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The execute context is used for mutable nodes to\n * indicate execution order.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "The execute context is used for mutable nodes to\nindicate execution order." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkMemoryStorageObject_MetaData[] = {
		{ "Comment", "// Deprecated 5.4\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please, use WorkMemoryStorage" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "Deprecated 5.4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMemoryStorageObject_MetaData[] = {
		{ "Comment", "// Deprecated 5.4\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please, use DebugMemoryStorage" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "Deprecated 5.4" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkMemoryStorageObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugMemoryStorageObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMExtendedExecuteContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::NewProp_WorkMemoryStorageObject = { "WorkMemoryStorageObject", nullptr, (EPropertyFlags)0x0114000820002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMExtendedExecuteContext, WorkMemoryStorageObject_DEPRECATED), Z_Construct_UClass_URigVMMemoryStorage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkMemoryStorageObject_MetaData), NewProp_WorkMemoryStorageObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::NewProp_DebugMemoryStorageObject = { "DebugMemoryStorageObject", nullptr, (EPropertyFlags)0x0114000820002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMExtendedExecuteContext, DebugMemoryStorageObject_DEPRECATED), Z_Construct_UClass_URigVMMemoryStorage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMemoryStorageObject_MetaData), NewProp_DebugMemoryStorageObject_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::NewProp_WorkMemoryStorageObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::NewProp_DebugMemoryStorageObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMExtendedExecuteContext",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::PropPointers), 0),
	sizeof(FRigVMExtendedExecuteContext),
	alignof(FRigVMExtendedExecuteContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.InnerSingleton;
}
// End ScriptStruct FRigVMExtendedExecuteContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExecuteContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMSlice::StaticStruct, Z_Construct_UScriptStruct_FRigVMSlice_Statics::NewStructOps, TEXT("RigVMSlice"), &Z_Registration_Info_UScriptStruct_RigVMSlice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMSlice), 2074399119U) },
		{ FRigVMRuntimeSettings::StaticStruct, Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewStructOps, TEXT("RigVMRuntimeSettings"), &Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMRuntimeSettings), 1384363951U) },
		{ FRigVMExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::NewStructOps, TEXT("RigVMExecuteContext"), &Z_Registration_Info_UScriptStruct_RigVMExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMExecuteContext), 2576597148U) },
		{ FRigVMExtendedExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::NewStructOps, TEXT("RigVMExtendedExecuteContext"), &Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMExtendedExecuteContext), 1517476021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExecuteContext_h_3165404119(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExecuteContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExecuteContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
