// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ModularRig.h"
#include "ControlRig/Public/ModularRigModel.h"
#include "ControlRig/Public/Rigs/RigModuleDefines.h"
#include "RigVM/Public/RigVMCore/RigVMExternalVariable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularRig() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRig();
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRig_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FModularRigModel();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FModularRigSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigModuleExecutionElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigModuleInstance();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigModuleInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigModuleInstance;
class UScriptStruct* FRigModuleInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigModuleInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleInstance, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigModuleInstance"));
	}
	return Z_Registration_Info_UScriptStruct_RigModuleInstance.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigModuleInstance>()
{
	return FRigModuleInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigModuleInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RigPtr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableBindings_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableBindings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VariableBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigModuleInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleInstance, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_RigPtr = { "RigPtr", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleInstance, RigPtr), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigPtr_MetaData), NewProp_RigPtr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_ParentPath = { "ParentPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleInstance, ParentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentPath_MetaData), NewProp_ParentPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_VariableBindings_ValueProp = { "VariableBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigVMExternalVariable, METADATA_PARAMS(0, nullptr) }; // 2881080269
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_VariableBindings_Key_KeyProp = { "VariableBindings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_VariableBindings = { "VariableBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleInstance, VariableBindings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableBindings_MetaData), NewProp_VariableBindings_MetaData) }; // 2881080269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigModuleInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_RigPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_ParentPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_VariableBindings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_VariableBindings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewProp_VariableBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigModuleInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigModuleInstance",
	Z_Construct_UScriptStruct_FRigModuleInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleInstance_Statics::PropPointers),
	sizeof(FRigModuleInstance),
	alignof(FRigModuleInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigModuleInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigModuleInstance()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigModuleInstance.InnerSingleton, Z_Construct_UScriptStruct_FRigModuleInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigModuleInstance.InnerSingleton;
}
// End ScriptStruct FRigModuleInstance

// Begin ScriptStruct FRigModuleExecutionElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigModuleExecutionElement;
class UScriptStruct* FRigModuleExecutionElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleExecutionElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigModuleExecutionElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleExecutionElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigModuleExecutionElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigModuleExecutionElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigModuleExecutionElement>()
{
	return FRigModuleExecutionElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExecuted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModulePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static void NewProp_bExecuted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigModuleExecutionElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_ModulePath = { "ModulePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleExecutionElement, ModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulePath_MetaData), NewProp_ModulePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleExecutionElement, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
void Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_bExecuted_SetBit(void* Obj)
{
	((FRigModuleExecutionElement*)Obj)->bExecuted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_bExecuted = { "bExecuted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigModuleExecutionElement), &Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_bExecuted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExecuted_MetaData), NewProp_bExecuted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_ModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_bExecuted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigModuleExecutionElement",
	Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::PropPointers),
	sizeof(FRigModuleExecutionElement),
	alignof(FRigModuleExecutionElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigModuleExecutionElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleExecutionElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigModuleExecutionElement.InnerSingleton, Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigModuleExecutionElement.InnerSingleton;
}
// End ScriptStruct FRigModuleExecutionElement

// Begin Class UModularRig
void UModularRig::StaticRegisterNativesUModularRig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularRig);
UClass* Z_Construct_UClass_UModularRig_NoRegister()
{
	return UModularRig::StaticClass();
}
struct Z_Construct_UClass_UModularRig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Runs logic for mapping input data to transforms (the \"Rig\") */" },
		{ "IncludePath", "ModularRig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularRig.h" },
		{ "ToolTip", "Runs logic for mapping input data to transforms (the \"Rig\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularRigSettings_MetaData[] = {
		{ "Comment", "// END ControlRig\n" },
		{ "ModuleRelativePath", "Public/ModularRig.h" },
		{ "ToolTip", "END ControlRig" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularRigModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModularRigSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModularRigModel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExecutionQueue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularRig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularRig_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigModuleInstance, METADATA_PARAMS(0, nullptr) }; // 2388876286
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularRig_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularRig, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modules_MetaData), NewProp_Modules_MetaData) }; // 2388876286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularRig_Statics::NewProp_ModularRigSettings = { "ModularRigSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularRig, ModularRigSettings), Z_Construct_UScriptStruct_FModularRigSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularRigSettings_MetaData), NewProp_ModularRigSettings_MetaData) }; // 1685218981
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularRig_Statics::NewProp_ModularRigModel = { "ModularRigModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularRig, ModularRigModel), Z_Construct_UScriptStruct_FModularRigModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularRigModel_MetaData), NewProp_ModularRigModel_MetaData) }; // 2341661585
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularRig_Statics::NewProp_ExecutionQueue_Inner = { "ExecutionQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigModuleExecutionElement, METADATA_PARAMS(0, nullptr) }; // 4177576133
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularRig_Statics::NewProp_ExecutionQueue = { "ExecutionQueue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularRig, ExecutionQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionQueue_MetaData), NewProp_ExecutionQueue_MetaData) }; // 4177576133
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularRig_Statics::NewProp_Modules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularRig_Statics::NewProp_Modules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularRig_Statics::NewProp_ModularRigSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularRig_Statics::NewProp_ModularRigModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularRig_Statics::NewProp_ExecutionQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularRig_Statics::NewProp_ExecutionQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularRig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularRig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControlRig,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularRig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularRig_Statics::ClassParams = {
	&UModularRig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularRig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularRig_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularRig_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularRig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularRig()
{
	if (!Z_Registration_Info_UClass_UModularRig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularRig.OuterSingleton, Z_Construct_UClass_UModularRig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularRig.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UModularRig>()
{
	return UModularRig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularRig);
UModularRig::~UModularRig() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UModularRig)
// End Class UModularRig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigModuleInstance::StaticStruct, Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewStructOps, TEXT("RigModuleInstance"), &Z_Registration_Info_UScriptStruct_RigModuleInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigModuleInstance), 2388876286U) },
		{ FRigModuleExecutionElement::StaticStruct, Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewStructOps, TEXT("RigModuleExecutionElement"), &Z_Registration_Info_UScriptStruct_RigModuleExecutionElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigModuleExecutionElement), 4177576133U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularRig, UModularRig::StaticClass, TEXT("UModularRig"), &Z_Registration_Info_UClass_UModularRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularRig), 1177016334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_4251707749(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
