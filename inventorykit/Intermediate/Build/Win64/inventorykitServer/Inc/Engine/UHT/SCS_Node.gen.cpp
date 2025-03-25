// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCS_Node() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USCS_Node();
ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USCS_Node
void USCS_Node::StaticRegisterNativesUSCS_Node()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USCS_Node);
UClass* Z_Construct_UClass_USCS_Node_NoRegister()
{
	return USCS_Node::StaticClass();
}
struct Z_Construct_UClass_USCS_Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/SCS_Node.h" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "Comment", "/** Component class */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Component class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplate_MetaData[] = {
		{ "Comment", "/** Template for the component to create */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Template for the component to create" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "Comment", "/** Cached data for faster runtime instancing (only used in cooked builds) */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Cached data for faster runtime instancing (only used in cooked builds)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "Comment", "/** If non-None, the assigned category name */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "If non-None, the assigned category name" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToName_MetaData[] = {
		{ "Comment", "/** Socket/Bone that Node might attach to */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Socket/Bone that Node might attach to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponentOrVariableName_MetaData[] = {
		{ "Comment", "/** Component template or variable that Node might be parented to */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Component template or variable that Node might be parented to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponentOwnerClassName_MetaData[] = {
		{ "Comment", "/** If the node is attached to another node inherited from a parent Blueprint, this contains the name of the Blueprint parent class that owns the component template *///@TODO: We can potentially remove this if/when inherited SCS component template instances are included in subobject serialization, as we could then infer that the owner class is always the same as the BP class.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "If the node is attached to another node inherited from a parent Blueprint, this contains the name of the Blueprint parent class that owns the component template //@TODO: We can potentially remove this if/when inherited SCS component template instances are included in subobject serialization, as we could then infer that the owner class is always the same as the BP class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsParentComponentNative_MetaData[] = {
		{ "Comment", "/** If the node is parented, this indicates whether or not the template is found in the CDO's Components array */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "If the node is parented, this indicates whether or not the template is found in the CDO's Components array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildNodes_MetaData[] = {
		{ "Comment", "/** Set of child nodes */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Set of child nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Metadata information for this Node */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Metadata information for this Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNative_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Indicates if this is a native component or not */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "(DEPRECATED) Indicates if this is a native component or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeComponentName_MetaData[] = {
		{ "Comment", "/* (DEPRECATED) If this is a native component, this is the name of the UActorComponent */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "(DEPRECATED) If this is a native component, this is the name of the UActorComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVariableNameAutoGenerated_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) If true, the variable name was a autogenerated and is not presented to the user */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "(DEPRECATED) If true, the variable name was a autogenerated and is not presented to the user" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalVariableName_MetaData[] = {
		{ "Comment", "/** Internal variable name. This is used for:\n\x09\x09\x09""a) Generating the component template (archetype) object name.\n\x09\x09\x09""b) A FObjectProperty in the generated Blueprint class. This holds a reference to the component instance created at Actor construction time.\n\x09\x09\x09""c) Archetype lookup through the generated Blueprint class. All instances route back to the archetype through the variable name (i.e. not the template name).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Internal variable name. This is used for:\n                      a) Generating the component template (archetype) object name.\n                      b) A FObjectProperty in the generated Blueprint class. This holds a reference to the component instance created at Actor construction time.\n                      c) Archetype lookup through the generated Blueprint class. All instances route back to the archetype through the variable name (i.e. not the template name)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_CategoryName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachToName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentComponentOrVariableName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentComponentOwnerClassName;
	static void NewProp_bIsParentComponentNative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParentComponentNative;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsNative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNative;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NativeComponentName;
	static void NewProp_bVariableNameAutoGenerated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVariableNameAutoGenerated;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InternalVariableName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USCS_Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentTemplate = { "ComponentTemplate", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, ComponentTemplate), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTemplate_MetaData), NewProp_ComponentTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_CookedComponentInstancingData = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, CookedComponentInstancingData), Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedComponentInstancingData_MetaData), NewProp_CookedComponentInstancingData_MetaData) }; // 4287695424
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_AttachToName = { "AttachToName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, AttachToName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToName_MetaData), NewProp_AttachToName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOrVariableName = { "ParentComponentOrVariableName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, ParentComponentOrVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentComponentOrVariableName_MetaData), NewProp_ParentComponentOrVariableName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOwnerClassName = { "ParentComponentOwnerClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, ParentComponentOwnerClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentComponentOwnerClassName_MetaData), NewProp_ParentComponentOwnerClassName_MetaData) };
void Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative_SetBit(void* Obj)
{
	((USCS_Node*)Obj)->bIsParentComponentNative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative = { "bIsParentComponentNative", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USCS_Node), &Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsParentComponentNative_MetaData), NewProp_bIsParentComponentNative_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes_Inner = { "ChildNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes = { "ChildNodes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, ChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildNodes_MetaData), NewProp_ChildNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray_Inner = { "MetaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(0, nullptr) }; // 3809530829
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray = { "MetaDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, MetaDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDataArray_MetaData), NewProp_MetaDataArray_MetaData) }; // 3809530829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableGuid_MetaData), NewProp_VariableGuid_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative_SetBit(void* Obj)
{
	((USCS_Node*)Obj)->bIsNative_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative = { "bIsNative", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USCS_Node), &Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNative_MetaData), NewProp_bIsNative_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_NativeComponentName = { "NativeComponentName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, NativeComponentName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeComponentName_MetaData), NewProp_NativeComponentName_MetaData) };
void Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated_SetBit(void* Obj)
{
	((USCS_Node*)Obj)->bVariableNameAutoGenerated_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated = { "bVariableNameAutoGenerated", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USCS_Node), &Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVariableNameAutoGenerated_MetaData), NewProp_bVariableNameAutoGenerated_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_InternalVariableName = { "InternalVariableName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCS_Node, InternalVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalVariableName_MetaData), NewProp_InternalVariableName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USCS_Node_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_CookedComponentInstancingData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_CategoryName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_AttachToName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOrVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOwnerClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_VariableGuid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_NativeComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_InternalVariableName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USCS_Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USCS_Node_Statics::ClassParams = {
	&USCS_Node::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USCS_Node_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::Class_MetaDataParams), Z_Construct_UClass_USCS_Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USCS_Node()
{
	if (!Z_Registration_Info_UClass_USCS_Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USCS_Node.OuterSingleton, Z_Construct_UClass_USCS_Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USCS_Node.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USCS_Node>()
{
	return USCS_Node::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USCS_Node);
USCS_Node::~USCS_Node() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USCS_Node)
// End Class USCS_Node

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USCS_Node, USCS_Node::StaticClass, TEXT("USCS_Node"), &Z_Registration_Info_UClass_USCS_Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USCS_Node), 3502137679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_2071516148(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
