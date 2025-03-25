// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocument.h"
#include "MetasoundFrontend/Public/MetasoundFrontendLiteral.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundFrontendDocument() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
METASOUNDFRONTEND_API UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType();
METASOUNDFRONTEND_API UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility();
METASOUNDFRONTEND_API UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClass();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassInput();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassName();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocument();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendEdge();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendGraph();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterface();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendLiteral();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendNode();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVariable();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVersion();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertex();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata();
UPackage* Z_Construct_UPackage__Script_MetasoundFrontend();
// End Cross Module References

// Begin Enum EMetasoundFrontendVertexAccessType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetasoundFrontendVertexAccessType;
static UEnum* EMetasoundFrontendVertexAccessType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetasoundFrontendVertexAccessType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetasoundFrontendVertexAccessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("EMetasoundFrontendVertexAccessType"));
	}
	return Z_Registration_Info_UEnum_EMetasoundFrontendVertexAccessType.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UEnum* StaticEnum<EMetasoundFrontendVertexAccessType>()
{
	return EMetasoundFrontendVertexAccessType_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Describes how a vertex accesses the data connected to it. \n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "Reference.Name", "EMetasoundFrontendVertexAccessType::Reference" },
		{ "ToolTip", "Describes how a vertex accesses the data connected to it." },
		{ "Unset.Comment", "//< The vertex accesses data by value.\n" },
		{ "Unset.Name", "EMetasoundFrontendVertexAccessType::Unset" },
		{ "Unset.ToolTip", "< The vertex accesses data by value." },
		{ "Value.Comment", "//< The vertex accesses data by reference.\n" },
		{ "Value.Name", "EMetasoundFrontendVertexAccessType::Value" },
		{ "Value.ToolTip", "< The vertex accesses data by reference." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetasoundFrontendVertexAccessType::Reference", (int64)EMetasoundFrontendVertexAccessType::Reference },
		{ "EMetasoundFrontendVertexAccessType::Value", (int64)EMetasoundFrontendVertexAccessType::Value },
		{ "EMetasoundFrontendVertexAccessType::Unset", (int64)EMetasoundFrontendVertexAccessType::Unset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	"EMetasoundFrontendVertexAccessType",
	"EMetasoundFrontendVertexAccessType",
	Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType()
{
	if (!Z_Registration_Info_UEnum_EMetasoundFrontendVertexAccessType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetasoundFrontendVertexAccessType.InnerSingleton, Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetasoundFrontendVertexAccessType.InnerSingleton;
}
// End Enum EMetasoundFrontendVertexAccessType

// Begin Enum EMetasoundFrontendClassType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetasoundFrontendClassType;
static UEnum* EMetasoundFrontendClassType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetasoundFrontendClassType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetasoundFrontendClassType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("EMetasoundFrontendClassType"));
	}
	return Z_Registration_Info_UEnum_EMetasoundFrontendClassType.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UEnum* StaticEnum<EMetasoundFrontendClassType>()
{
	return EMetasoundFrontendClassType_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "External.Comment", "// The MetaSound class is defined externally, in compiled code or in another document.\n" },
		{ "External.Name", "EMetasoundFrontendClassType::External" },
		{ "External.ToolTip", "The MetaSound class is defined externally, in compiled code or in another document." },
		{ "Graph.Comment", "// The MetaSound class is a graph within the containing document.\n" },
		{ "Graph.Name", "EMetasoundFrontendClassType::Graph" },
		{ "Graph.ToolTip", "The MetaSound class is a graph within the containing document." },
		{ "Input.Comment", "// The MetaSound class is an input into a graph in the containing document.\n" },
		{ "Input.Name", "EMetasoundFrontendClassType::Input" },
		{ "Input.ToolTip", "The MetaSound class is an input into a graph in the containing document." },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EMetasoundFrontendClassType::Invalid" },
		{ "Literal.Comment", "// The MetaSound class is an literal requiring an literal value to construct.\n" },
		{ "Literal.Name", "EMetasoundFrontendClassType::Literal" },
		{ "Literal.ToolTip", "The MetaSound class is an literal requiring an literal value to construct." },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "Output.Comment", "// The MetaSound class is an output from a graph in the containing document.\n" },
		{ "Output.Name", "EMetasoundFrontendClassType::Output" },
		{ "Output.ToolTip", "The MetaSound class is an output from a graph in the containing document." },
		{ "Template.Comment", "// The MetaSound class is defined only by the Frontend, and associatively\n// performs a functional operation within the given document in a registration/cook step.\n" },
		{ "Template.Name", "EMetasoundFrontendClassType::Template" },
		{ "Template.ToolTip", "The MetaSound class is defined only by the Frontend, and associatively\nperforms a functional operation within the given document in a registration/cook step." },
		{ "Variable.Comment", "// The MetaSound class is an variable requiring an literal value to construct.\n" },
		{ "Variable.Name", "EMetasoundFrontendClassType::Variable" },
		{ "Variable.ToolTip", "The MetaSound class is an variable requiring an literal value to construct." },
		{ "VariableAccessor.Comment", "// The MetaSound class accesses variables.\n" },
		{ "VariableAccessor.Name", "EMetasoundFrontendClassType::VariableAccessor" },
		{ "VariableAccessor.ToolTip", "The MetaSound class accesses variables." },
		{ "VariableDeferredAccessor.Comment", "// The MetaSound class accesses variables.\n" },
		{ "VariableDeferredAccessor.Name", "EMetasoundFrontendClassType::VariableDeferredAccessor" },
		{ "VariableDeferredAccessor.ToolTip", "The MetaSound class accesses variables." },
		{ "VariableMutator.Comment", "// The MetaSound class mutates variables.\n" },
		{ "VariableMutator.Name", "EMetasoundFrontendClassType::VariableMutator" },
		{ "VariableMutator.ToolTip", "The MetaSound class mutates variables." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetasoundFrontendClassType::External", (int64)EMetasoundFrontendClassType::External },
		{ "EMetasoundFrontendClassType::Graph", (int64)EMetasoundFrontendClassType::Graph },
		{ "EMetasoundFrontendClassType::Input", (int64)EMetasoundFrontendClassType::Input },
		{ "EMetasoundFrontendClassType::Output", (int64)EMetasoundFrontendClassType::Output },
		{ "EMetasoundFrontendClassType::Literal", (int64)EMetasoundFrontendClassType::Literal },
		{ "EMetasoundFrontendClassType::Variable", (int64)EMetasoundFrontendClassType::Variable },
		{ "EMetasoundFrontendClassType::VariableDeferredAccessor", (int64)EMetasoundFrontendClassType::VariableDeferredAccessor },
		{ "EMetasoundFrontendClassType::VariableAccessor", (int64)EMetasoundFrontendClassType::VariableAccessor },
		{ "EMetasoundFrontendClassType::VariableMutator", (int64)EMetasoundFrontendClassType::VariableMutator },
		{ "EMetasoundFrontendClassType::Template", (int64)EMetasoundFrontendClassType::Template },
		{ "EMetasoundFrontendClassType::Invalid", (int64)EMetasoundFrontendClassType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	"EMetasoundFrontendClassType",
	"EMetasoundFrontendClassType",
	Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType()
{
	if (!Z_Registration_Info_UEnum_EMetasoundFrontendClassType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetasoundFrontendClassType.InnerSingleton, Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetasoundFrontendClassType.InnerSingleton;
}
// End Enum EMetasoundFrontendClassType

// Begin ScriptStruct FMetasoundFrontendVersionNumber
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendVersionNumber;
class UScriptStruct* FMetasoundFrontendVersionNumber::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVersionNumber.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendVersionNumber.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendVersionNumber"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVersionNumber.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendVersionNumber>()
{
	return FMetasoundFrontendVersionNumber::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// General purpose version number for Metasound Frontend objects.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "General purpose version number for Metasound Frontend objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Major_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Major version number.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Major version number." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Minor version number.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Minor version number." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendVersionNumber>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVersionNumber, Major), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Major_MetaData), NewProp_Major_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVersionNumber, Minor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minor_MetaData), NewProp_Minor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::NewProp_Major,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::NewProp_Minor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendVersionNumber",
	Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::PropPointers),
	sizeof(FMetasoundFrontendVersionNumber),
	alignof(FMetasoundFrontendVersionNumber),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVersionNumber.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendVersionNumber.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVersionNumber.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendVersionNumber

// Begin ScriptStruct FMetasoundFrontendVersion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendVersion;
class UScriptStruct* FMetasoundFrontendVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVersion, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendVersion"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVersion.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendVersion>()
{
	return FMetasoundFrontendVersion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// General purpose version info for Metasound Frontend objects.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "General purpose version info for Metasound Frontend objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CustomView" },
		{ "Comment", "// Name of version.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name of version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[] = {
		{ "Category", "CustomView" },
		{ "Comment", "// Version number.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Version number." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVersion, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVersion, Number), Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Number_MetaData), NewProp_Number_MetaData) }; // 44310332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::NewProp_Number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendVersion",
	Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::PropPointers),
	sizeof(FMetasoundFrontendVersion),
	alignof(FMetasoundFrontendVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVersion()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendVersion.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVersion.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendVersion

// Begin ScriptStruct FMetasoundFrontendVertex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendVertex;
class UScriptStruct* FMetasoundFrontendVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVertex, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendVertex"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVertex.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendVertex>()
{
	return FMetasoundFrontendVertex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// An FMetasoundFrontendVertex provides a named connection point of a node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "An FMetasoundFrontendVertex provides a named connection point of a node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CustomView" },
		{ "Comment", "// Name of the vertex. Unique amongst other vertices on the same interface.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name of the vertex. Unique amongst other vertices on the same interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Data type name of the vertex.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Data type name of the vertex." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[] = {
		{ "Comment", "// ID of vertex\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "ID of vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertex, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertex, TypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeName_MetaData), NewProp_TypeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertex, VertexID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexID_MetaData), NewProp_VertexID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::NewProp_TypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::NewProp_VertexID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendVertex",
	Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::PropPointers),
	sizeof(FMetasoundFrontendVertex),
	alignof(FMetasoundFrontendVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertex()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendVertex.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVertex.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendVertex

// Begin ScriptStruct FMetasoundFrontendVertexHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexHandle;
class UScriptStruct* FMetasoundFrontendVertexHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendVertexHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexHandle.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendVertexHandle>()
{
	return FMetasoundFrontendVertexHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Pair of guids used to address location of vertex within a FrontendDocument graph\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Pair of guids used to address location of vertex within a FrontendDocument graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendVertexHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexHandle, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexHandle, VertexID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexID_MetaData), NewProp_VertexID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::NewProp_VertexID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendVertexHandle",
	Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::PropPointers),
	sizeof(FMetasoundFrontendVertexHandle),
	alignof(FMetasoundFrontendVertexHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexHandle.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexHandle.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendVertexHandle

// Begin ScriptStruct FMetasoundFrontendVertexLiteral
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexLiteral;
class UScriptStruct* FMetasoundFrontendVertexLiteral::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexLiteral.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexLiteral.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendVertexLiteral"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexLiteral.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendVertexLiteral>()
{
	return FMetasoundFrontendVertexLiteral::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Contains a default value for a single vertex ID\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Contains a default value for a single vertex ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// ID of vertex.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "ID of vertex." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Value to use when constructing input.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Value to use when constructing input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendVertexLiteral>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexLiteral, VertexID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexID_MetaData), NewProp_VertexID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexLiteral, Value), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendVertexLiteral",
	Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::PropPointers),
	sizeof(FMetasoundFrontendVertexLiteral),
	alignof(FMetasoundFrontendVertexLiteral),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexLiteral.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexLiteral.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexLiteral.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendVertexLiteral

// Begin ScriptStruct FMetasoundFrontendVariable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendVariable;
class UScriptStruct* FMetasoundFrontendVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVariable, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendVariable"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVariable.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendVariable>()
{
	return FMetasoundFrontendVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Contains graph data associated with a variable.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Contains graph data associated with a variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CustomView" },
		{ "Comment", "// Name of the vertex. Unique amongst other vertices on the same interface.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name of the vertex. Unique amongst other vertices on the same interface." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Comment", "// Variable display name\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Variable display name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Comment", "// Variable description\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Variable description" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[] = {
		{ "Comment", "// Variable data type name\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Variable data type name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Literal_MetaData[] = {
		{ "Comment", "// Literal used to initialize the variable.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Literal used to initialize the variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Comment", "// Unique ID for the variable\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Unique ID for the variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableNodeID_MetaData[] = {
		{ "Comment", "// Node ID of the associated VariableNode\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Node ID of the associated VariableNode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutatorNodeID_MetaData[] = {
		{ "Comment", "// Node ID of the associated VariableMutatorNode\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Node ID of the associated VariableMutatorNode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessorNodeIDs_MetaData[] = {
		{ "Comment", "// Node IDs of the associated VariableAccessorNodes\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Node IDs of the associated VariableAccessorNodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredAccessorNodeIDs_MetaData[] = {
		{ "Comment", "// Node IDs of the associated VariableDeferredAccessorNodes\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Node IDs of the associated VariableDeferredAccessorNodes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Literal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableNodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MutatorNodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccessorNodeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AccessorNodeIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeferredAccessorNodeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeferredAccessorNodeIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, TypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeName_MetaData), NewProp_TypeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_Literal = { "Literal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, Literal), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Literal_MetaData), NewProp_Literal_MetaData) }; // 1401040219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_VariableNodeID = { "VariableNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, VariableNodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableNodeID_MetaData), NewProp_VariableNodeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_MutatorNodeID = { "MutatorNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, MutatorNodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutatorNodeID_MetaData), NewProp_MutatorNodeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_AccessorNodeIDs_Inner = { "AccessorNodeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_AccessorNodeIDs = { "AccessorNodeIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, AccessorNodeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessorNodeIDs_MetaData), NewProp_AccessorNodeIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_DeferredAccessorNodeIDs_Inner = { "DeferredAccessorNodeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_DeferredAccessorNodeIDs = { "DeferredAccessorNodeIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVariable, DeferredAccessorNodeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredAccessorNodeIDs_MetaData), NewProp_DeferredAccessorNodeIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_TypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_Literal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_VariableNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_MutatorNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_AccessorNodeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_AccessorNodeIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_DeferredAccessorNodeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewProp_DeferredAccessorNodeIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendVariable",
	Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::PropPointers),
	sizeof(FMetasoundFrontendVariable),
	alignof(FMetasoundFrontendVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVariable()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendVariable.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVariable.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendVariable

// Begin ScriptStruct FMetasoundFrontendNodeInterface
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeInterface;
class UScriptStruct* FMetasoundFrontendNodeInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendNodeInterface"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeInterface.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendNodeInterface>()
{
	return FMetasoundFrontendNodeInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Comment", "// Input vertices to node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Input vertices to node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "Comment", "// Output vertices to node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Output vertices to node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Environment_MetaData[] = {
		{ "Comment", "// Environment variables of node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Environment variables of node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Environment_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Environment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendNodeInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendVertex, METADATA_PARAMS(0, nullptr) }; // 1496573235
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNodeInterface, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 1496573235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendVertex, METADATA_PARAMS(0, nullptr) }; // 1496573235
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNodeInterface, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) }; // 1496573235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Environment_Inner = { "Environment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendVertex, METADATA_PARAMS(0, nullptr) }; // 1496573235
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Environment = { "Environment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNodeInterface, Environment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Environment_MetaData), NewProp_Environment_MetaData) }; // 1496573235
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Environment_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewProp_Environment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendNodeInterface",
	Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::PropPointers),
	sizeof(FMetasoundFrontendNodeInterface),
	alignof(FMetasoundFrontendNodeInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeInterface.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeInterface.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendNodeInterface

// Begin Enum EMetasoundFrontendNodeStyleDisplayVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetasoundFrontendNodeStyleDisplayVisibility;
static UEnum* EMetasoundFrontendNodeStyleDisplayVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetasoundFrontendNodeStyleDisplayVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetasoundFrontendNodeStyleDisplayVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("EMetasoundFrontendNodeStyleDisplayVisibility"));
	}
	return Z_Registration_Info_UEnum_EMetasoundFrontendNodeStyleDisplayVisibility.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UEnum* StaticEnum<EMetasoundFrontendNodeStyleDisplayVisibility>()
{
	return EMetasoundFrontendNodeStyleDisplayVisibility_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// DEPRECATED in Document Model v1.1\n" },
		{ "Hidden.Name", "EMetasoundFrontendNodeStyleDisplayVisibility::Hidden" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "DEPRECATED in Document Model v1.1" },
		{ "Visible.Name", "EMetasoundFrontendNodeStyleDisplayVisibility::Visible" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetasoundFrontendNodeStyleDisplayVisibility::Visible", (int64)EMetasoundFrontendNodeStyleDisplayVisibility::Visible },
		{ "EMetasoundFrontendNodeStyleDisplayVisibility::Hidden", (int64)EMetasoundFrontendNodeStyleDisplayVisibility::Hidden },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	"EMetasoundFrontendNodeStyleDisplayVisibility",
	"EMetasoundFrontendNodeStyleDisplayVisibility",
	Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility()
{
	if (!Z_Registration_Info_UEnum_EMetasoundFrontendNodeStyleDisplayVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetasoundFrontendNodeStyleDisplayVisibility.InnerSingleton, Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetasoundFrontendNodeStyleDisplayVisibility.InnerSingleton;
}
// End Enum EMetasoundFrontendNodeStyleDisplayVisibility

// Begin ScriptStruct FMetasoundFrontendNodeStyleDisplay
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyleDisplay;
class UScriptStruct* FMetasoundFrontendNodeStyleDisplay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyleDisplay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyleDisplay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendNodeStyleDisplay"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyleDisplay.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendNodeStyleDisplay>()
{
	return FMetasoundFrontendNodeStyleDisplay::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "Comment", "// DEPRECATED in Document Model v1.1: Visibility state of node\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "DEPRECATED in Document Model v1.1: Visibility state of node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[] = {
		{ "Comment", "// Map of visual node guid to 2D location. May have more than one if the node allows displaying in\n// more than one place on the graph (Only functionally relevant for nodes that cannot contain inputs.)\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Map of visual node guid to 2D location. May have more than one if the node allows displaying in\nmore than one place on the graph (Only functionally relevant for nodes that cannot contain inputs.)" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Locations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendNodeStyleDisplay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNodeStyleDisplay, Visibility), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendNodeStyleDisplayVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 2455559818
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Locations_ValueProp = { "Locations", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Locations_Key_KeyProp = { "Locations_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNodeStyleDisplay, Locations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locations_MetaData), NewProp_Locations_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Locations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Locations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewProp_Locations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendNodeStyleDisplay",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::PropPointers), 0),
	sizeof(FMetasoundFrontendNodeStyleDisplay),
	alignof(FMetasoundFrontendNodeStyleDisplay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyleDisplay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyleDisplay.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyleDisplay.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendNodeStyleDisplay

// Begin ScriptStruct FMetasoundFrontendNodeStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyle;
class UScriptStruct* FMetasoundFrontendNodeStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendNodeStyle"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyle.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendNodeStyle>()
{
	return FMetasoundFrontendNodeStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Display_MetaData[] = {
		{ "Comment", "// Display style of a node\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Display style of a node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMessageNodeUpdated_MetaData[] = {
		{ "Comment", "// Whether or not to display if\n// the node's version has been updated\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Whether or not to display if\nthe node's version has been updated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrivate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Display;
	static void NewProp_bMessageNodeUpdated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMessageNodeUpdated;
	static void NewProp_bIsPrivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrivate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendNodeStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_Display = { "Display", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNodeStyle, Display), Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Display_MetaData), NewProp_Display_MetaData) }; // 3054122161
void Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_bMessageNodeUpdated_SetBit(void* Obj)
{
	((FMetasoundFrontendNodeStyle*)Obj)->bMessageNodeUpdated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_bMessageNodeUpdated = { "bMessageNodeUpdated", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendNodeStyle), &Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_bMessageNodeUpdated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMessageNodeUpdated_MetaData), NewProp_bMessageNodeUpdated_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_bIsPrivate_SetBit(void* Obj)
{
	((FMetasoundFrontendNodeStyle*)Obj)->bIsPrivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_bIsPrivate = { "bIsPrivate", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendNodeStyle), &Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_bIsPrivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPrivate_MetaData), NewProp_bIsPrivate_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_Display,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_bMessageNodeUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewProp_bIsPrivate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendNodeStyle",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::PropPointers), 0),
	sizeof(FMetasoundFrontendNodeStyle),
	alignof(FMetasoundFrontendNodeStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyle.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyle.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendNodeStyle

// Begin ScriptStruct FMetasoundFrontendNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendNode;
class UScriptStruct* FMetasoundFrontendNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendNode, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendNode.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendNode>()
{
	return FMetasoundFrontendNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// An FMetasoundFrontendNode represents a single instance of a FMetasoundFrontendClass\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "An FMetasoundFrontendNode represents a single instance of a FMetasoundFrontendClass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Comment", "// Unique ID of this node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Unique ID of this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassID_MetaData[] = {
		{ "Comment", "// ID of FMetasoundFrontendClass corresponding to this node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "ID of FMetasoundFrontendClass corresponding to this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "// Name of node instance.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name of node instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[] = {
		{ "Comment", "// Interface of node instance.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Interface of node instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputLiterals_MetaData[] = {
		{ "Comment", "// Default values for node inputs.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Default values for node inputs." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Comment", "// Style info related to a node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Style info related to a node." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Interface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputLiterals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputLiterals;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNode, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_ClassID = { "ClassID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNode, ClassID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassID_MetaData), NewProp_ClassID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNode, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNode, Interface), Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interface_MetaData), NewProp_Interface_MetaData) }; // 2735406734
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_InputLiterals_Inner = { "InputLiterals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral, METADATA_PARAMS(0, nullptr) }; // 1822348725
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_InputLiterals = { "InputLiterals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNode, InputLiterals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputLiterals_MetaData), NewProp_InputLiterals_MetaData) }; // 1822348725
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendNode, Style), Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 3080165617
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_ClassID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_Interface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_InputLiterals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_InputLiterals,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewProp_Style,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendNode",
	Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::PropPointers),
	sizeof(FMetasoundFrontendNode),
	alignof(FMetasoundFrontendNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendNode()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendNode.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendNode

// Begin ScriptStruct FMetasoundFrontendEdge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendEdge;
class UScriptStruct* FMetasoundFrontendEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendEdge, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendEdge"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendEdge.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendEdge>()
{
	return FMetasoundFrontendEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Represents a single connection from one point to another.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Represents a single connection from one point to another." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromNodeID_MetaData[] = {
		{ "Comment", "// ID of source node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "ID of source node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromVertexID_MetaData[] = {
		{ "Comment", "// ID of source point on source node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "ID of source point on source node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToNodeID_MetaData[] = {
		{ "Comment", "// ID of destination node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "ID of destination node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToVertexID_MetaData[] = {
		{ "Comment", "// ID of destination point on destination node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "ID of destination point on destination node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromNodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromVertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToNodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToVertexID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewProp_FromNodeID = { "FromNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdge, FromNodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromNodeID_MetaData), NewProp_FromNodeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewProp_FromVertexID = { "FromVertexID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdge, FromVertexID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromVertexID_MetaData), NewProp_FromVertexID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewProp_ToNodeID = { "ToNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdge, ToNodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToNodeID_MetaData), NewProp_ToNodeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewProp_ToVertexID = { "ToVertexID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdge, ToVertexID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToVertexID_MetaData), NewProp_ToVertexID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewProp_FromNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewProp_FromVertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewProp_ToNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewProp_ToVertexID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendEdge",
	Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::PropPointers),
	sizeof(FMetasoundFrontendEdge),
	alignof(FMetasoundFrontendEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendEdge()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendEdge.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendEdge.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendEdge

// Begin ScriptStruct FMetasoundFrontendEdgeStyleLiteralColorPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyleLiteralColorPair;
class UScriptStruct* FMetasoundFrontendEdgeStyleLiteralColorPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyleLiteralColorPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyleLiteralColorPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendEdgeStyleLiteralColorPair"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyleLiteralColorPair.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendEdgeStyleLiteralColorPair>()
{
	return FMetasoundFrontendEdgeStyleLiteralColorPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendEdgeStyleLiteralColorPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdgeStyleLiteralColorPair, Value), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1401040219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdgeStyleLiteralColorPair, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendEdgeStyleLiteralColorPair",
	Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::PropPointers),
	sizeof(FMetasoundFrontendEdgeStyleLiteralColorPair),
	alignof(FMetasoundFrontendEdgeStyleLiteralColorPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyleLiteralColorPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyleLiteralColorPair.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyleLiteralColorPair.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendEdgeStyleLiteralColorPair

// Begin ScriptStruct FMetasoundFrontendEdgeStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyle;
class UScriptStruct* FMetasoundFrontendEdgeStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendEdgeStyle"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyle.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendEdgeStyle>()
{
	return FMetasoundFrontendEdgeStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Styling for all edges associated with a given output (characterized by NodeID & Name)\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Styling for all edges associated with a given output (characterized by NodeID & Name)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "Comment", "// Node ID for associated edge(s) that should use the given style data.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Node ID for associated edge(s) that should use the given style data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "Comment", "// Name of node's output to associate style information for its associated edge(s).\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name of node's output to associate style information for its associated edge(s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiteralColorPairs_MetaData[] = {
		{ "Comment", "// Array of colors used to animate given output's associated edge(s). Interpolation\n// between values dependent on value used.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Array of colors used to animate given output's associated edge(s). Interpolation\nbetween values dependent on value used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiteralColorPairs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LiteralColorPairs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendEdgeStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdgeStyle, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdgeStyle, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewProp_LiteralColorPairs_Inner = { "LiteralColorPairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair, METADATA_PARAMS(0, nullptr) }; // 2773005864
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewProp_LiteralColorPairs = { "LiteralColorPairs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendEdgeStyle, LiteralColorPairs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiteralColorPairs_MetaData), NewProp_LiteralColorPairs_MetaData) }; // 2773005864
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewProp_LiteralColorPairs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewProp_LiteralColorPairs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendEdgeStyle",
	Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::PropPointers),
	sizeof(FMetasoundFrontendEdgeStyle),
	alignof(FMetasoundFrontendEdgeStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyle.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyle.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendEdgeStyle

// Begin ScriptStruct FMetasoundFrontendGraphStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphStyle;
class UScriptStruct* FMetasoundFrontendGraphStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendGraphStyle"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphStyle.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendGraphStyle>()
{
	return FMetasoundFrontendGraphStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Styling for a class\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Styling for a class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGraphEditable_MetaData[] = {
		{ "Comment", "// Whether or not the graph is editable by a user\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Whether or not the graph is editable by a user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeStyles_MetaData[] = {
		{ "Comment", "// Styles for graph edges.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Styles for graph edges." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsGraphEditable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGraphEditable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeStyles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeStyles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendGraphStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewProp_bIsGraphEditable_SetBit(void* Obj)
{
	((FMetasoundFrontendGraphStyle*)Obj)->bIsGraphEditable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewProp_bIsGraphEditable = { "bIsGraphEditable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendGraphStyle), &Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewProp_bIsGraphEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGraphEditable_MetaData), NewProp_bIsGraphEditable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewProp_EdgeStyles_Inner = { "EdgeStyles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle, METADATA_PARAMS(0, nullptr) }; // 331798888
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewProp_EdgeStyles = { "EdgeStyles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendGraphStyle, EdgeStyles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeStyles_MetaData), NewProp_EdgeStyles_MetaData) }; // 331798888
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewProp_bIsGraphEditable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewProp_EdgeStyles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewProp_EdgeStyles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendGraphStyle",
	Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::PropPointers),
	sizeof(FMetasoundFrontendGraphStyle),
	alignof(FMetasoundFrontendGraphStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphStyle.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphStyle.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendGraphStyle

// Begin ScriptStruct FMetasoundFrontendGraph
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendGraph;
class UScriptStruct* FMetasoundFrontendGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendGraph, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendGraph"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendGraph.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendGraph>()
{
	return FMetasoundFrontendGraph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Comment", "// Node contained in graph\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Node contained in graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[] = {
		{ "Comment", "// Connections between points on nodes.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Connections between points on nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "Comment", "// Graph local variables.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Graph local variables." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Comment", "// Style of graph display.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Style of graph display." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendGraph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendNode, METADATA_PARAMS(0, nullptr) }; // 862369136
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 862369136
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendEdge, METADATA_PARAMS(0, nullptr) }; // 2484088442
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendGraph, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edges_MetaData), NewProp_Edges_MetaData) }; // 2484088442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendVariable, METADATA_PARAMS(0, nullptr) }; // 3890925121
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendGraph, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 3890925121
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendGraph, Style), Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 1900242818
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Edges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Edges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Variables,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewProp_Style,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendGraph",
	Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::PropPointers),
	sizeof(FMetasoundFrontendGraph),
	alignof(FMetasoundFrontendGraph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendGraph()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendGraph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendGraph.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendGraph.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendGraph

// Begin ScriptStruct FMetasoundFrontendVertexMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexMetadata;
class UScriptStruct* FMetasoundFrontendVertexMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendVertexMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexMetadata.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendVertexMetadata>()
{
	return FMetasoundFrontendVertexMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Metadata associated with a vertex.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Metadata associated with a vertex." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Display name for a vertex\n" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Display name for a vertex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameTransient_MetaData[] = {
		{ "Comment", "// Display name for a vertex if vertex is natively defined\n// (must be transient to avoid localization desync on load)\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Display name for a vertex if vertex is natively defined\n(must be transient to avoid localization desync on load)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Description of the vertex.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Description of the vertex." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionTransient_MetaData[] = {
		{ "Comment", "// Description of the vertex if vertex is natively defined\n// (must be transient to avoid localization desync on load)\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Description of the vertex if vertex is natively defined\n(must be transient to avoid localization desync on load)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortOrderIndex_MetaData[] = {
		{ "Comment", "// Order index of vertex member when shown as a node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Order index of vertex member when shown as a node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAdvancedDisplay_MetaData[] = {
		{ "Comment", "// If true, vertex is shown for advanced display.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "If true, vertex is shown for advanced display." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSerializeText_MetaData[] = {
		{ "Comment", "// Whether or not the given metadata text should be serialized\n// or is procedurally maintained via auto-update & the referenced\n// registry class (to avoid localization text desync).  Should be\n// false for classes serialized as externally-defined dependencies\n// or interfaces.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Whether or not the given metadata text should be serialized\nor is procedurally maintained via auto-update & the referenced\nregistry class (to avoid localization text desync).  Should be\nfalse for classes serialized as externally-defined dependencies\nor interfaces." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayNameTransient;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DescriptionTransient;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrderIndex;
	static void NewProp_bIsAdvancedDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdvancedDisplay;
	static void NewProp_bSerializeText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSerializeText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendVertexMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexMetadata, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_DisplayNameTransient = { "DisplayNameTransient", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexMetadata, DisplayNameTransient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNameTransient_MetaData), NewProp_DisplayNameTransient_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexMetadata, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_DescriptionTransient = { "DescriptionTransient", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexMetadata, DescriptionTransient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionTransient_MetaData), NewProp_DescriptionTransient_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_SortOrderIndex = { "SortOrderIndex", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendVertexMetadata, SortOrderIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortOrderIndex_MetaData), NewProp_SortOrderIndex_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_bIsAdvancedDisplay_SetBit(void* Obj)
{
	((FMetasoundFrontendVertexMetadata*)Obj)->bIsAdvancedDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_bIsAdvancedDisplay = { "bIsAdvancedDisplay", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendVertexMetadata), &Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_bIsAdvancedDisplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAdvancedDisplay_MetaData), NewProp_bIsAdvancedDisplay_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_bSerializeText_SetBit(void* Obj)
{
	((FMetasoundFrontendVertexMetadata*)Obj)->bSerializeText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_bSerializeText = { "bSerializeText", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendVertexMetadata), &Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_bSerializeText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSerializeText_MetaData), NewProp_bSerializeText_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_DisplayNameTransient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_DescriptionTransient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_SortOrderIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_bIsAdvancedDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewProp_bSerializeText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendVertexMetadata",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::PropPointers), 0),
	sizeof(FMetasoundFrontendVertexMetadata),
	alignof(FMetasoundFrontendVertexMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexMetadata.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexMetadata.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendVertexMetadata

// Begin ScriptStruct FMetasoundFrontendClassVertex
static_assert(std::is_polymorphic<FMetasoundFrontendClassVertex>() == std::is_polymorphic<FMetasoundFrontendVertex>(), "USTRUCT FMetasoundFrontendClassVertex cannot be polymorphic unless super FMetasoundFrontendVertex is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVertex;
class UScriptStruct* FMetasoundFrontendClassVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassVertex"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVertex.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassVertex>()
{
	return FMetasoundFrontendClassVertex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "CustomView" },
		{ "Comment", "// Metadata associated with vertex.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Metadata associated with vertex." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AccessType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccessType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassVertex, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassVertex, Metadata), Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) }; // 399474955
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewProp_AccessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewProp_AccessType = { "AccessType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassVertex, AccessType), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendVertexAccessType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessType_MetaData), NewProp_AccessType_MetaData) }; // 2298378053
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewProp_NodeID,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewProp_Metadata,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewProp_AccessType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewProp_AccessType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	Z_Construct_UScriptStruct_FMetasoundFrontendVertex,
	&NewStructOps,
	"MetasoundFrontendClassVertex",
	Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::PropPointers),
	sizeof(FMetasoundFrontendClassVertex),
	alignof(FMetasoundFrontendClassVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVertex.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVertex.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassVertex

// Begin ScriptStruct FMetasoundFrontendClassStyleDisplay
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyleDisplay;
class UScriptStruct* FMetasoundFrontendClassStyleDisplay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyleDisplay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyleDisplay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassStyleDisplay"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyleDisplay.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassStyleDisplay>()
{
	return FMetasoundFrontendClassStyleDisplay::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Information regarding how to display a node class\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Information regarding how to display a node class" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutputNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowLiterals_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageName;
	static void NewProp_bShowName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowName;
	static void NewProp_bShowInputNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInputNames;
	static void NewProp_bShowOutputNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutputNames;
	static void NewProp_bShowLiterals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLiterals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassStyleDisplay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassStyleDisplay, ImageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageName_MetaData), NewProp_ImageName_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowName_SetBit(void* Obj)
{
	((FMetasoundFrontendClassStyleDisplay*)Obj)->bShowName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowName = { "bShowName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendClassStyleDisplay), &Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowName_MetaData), NewProp_bShowName_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowInputNames_SetBit(void* Obj)
{
	((FMetasoundFrontendClassStyleDisplay*)Obj)->bShowInputNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowInputNames = { "bShowInputNames", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendClassStyleDisplay), &Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowInputNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInputNames_MetaData), NewProp_bShowInputNames_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowOutputNames_SetBit(void* Obj)
{
	((FMetasoundFrontendClassStyleDisplay*)Obj)->bShowOutputNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowOutputNames = { "bShowOutputNames", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendClassStyleDisplay), &Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowOutputNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOutputNames_MetaData), NewProp_bShowOutputNames_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowLiterals_SetBit(void* Obj)
{
	((FMetasoundFrontendClassStyleDisplay*)Obj)->bShowLiterals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowLiterals = { "bShowLiterals", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendClassStyleDisplay), &Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowLiterals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowLiterals_MetaData), NewProp_bShowLiterals_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_ImageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowInputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowOutputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewProp_bShowLiterals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendClassStyleDisplay",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::PropPointers), 0),
	sizeof(FMetasoundFrontendClassStyleDisplay),
	alignof(FMetasoundFrontendClassStyleDisplay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyleDisplay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyleDisplay.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyleDisplay.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassStyleDisplay

// Begin ScriptStruct FMetasoundFrontendClassInput
static_assert(std::is_polymorphic<FMetasoundFrontendClassInput>() == std::is_polymorphic<FMetasoundFrontendClassVertex>(), "USTRUCT FMetasoundFrontendClassInput cannot be polymorphic unless super FMetasoundFrontendClassVertex is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInput;
class UScriptStruct* FMetasoundFrontendClassInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInput, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassInput"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInput.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassInput>()
{
	return FMetasoundFrontendClassInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Contains info for input vertex of a Metasound class.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Contains info for input vertex of a Metasound class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLiteral_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Default value for this input.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Default value for this input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLiteral;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::NewProp_DefaultLiteral = { "DefaultLiteral", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassInput, DefaultLiteral), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLiteral_MetaData), NewProp_DefaultLiteral_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::NewProp_DefaultLiteral,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex,
	&NewStructOps,
	"MetasoundFrontendClassInput",
	Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::PropPointers),
	sizeof(FMetasoundFrontendClassInput),
	alignof(FMetasoundFrontendClassInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassInput()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInput.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInput.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassInput

// Begin ScriptStruct FMetasoundFrontendClassVariable
static_assert(std::is_polymorphic<FMetasoundFrontendClassVariable>() == std::is_polymorphic<FMetasoundFrontendClassVertex>(), "USTRUCT FMetasoundFrontendClassVariable cannot be polymorphic unless super FMetasoundFrontendClassVertex is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVariable;
class UScriptStruct* FMetasoundFrontendClassVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassVariable"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVariable.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassVariable>()
{
	return FMetasoundFrontendClassVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Contains info for variable vertex of a Metasound class.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Contains info for variable vertex of a Metasound class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLiteral_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Default value for this variable.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Default value for this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLiteral;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::NewProp_DefaultLiteral = { "DefaultLiteral", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassVariable, DefaultLiteral), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLiteral_MetaData), NewProp_DefaultLiteral_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::NewProp_DefaultLiteral,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex,
	&NewStructOps,
	"MetasoundFrontendClassVariable",
	Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::PropPointers),
	sizeof(FMetasoundFrontendClassVariable),
	alignof(FMetasoundFrontendClassVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVariable.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVariable.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassVariable

// Begin ScriptStruct FMetasoundFrontendClassOutput
static_assert(std::is_polymorphic<FMetasoundFrontendClassOutput>() == std::is_polymorphic<FMetasoundFrontendClassVertex>(), "USTRUCT FMetasoundFrontendClassOutput cannot be polymorphic unless super FMetasoundFrontendClassVertex is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassOutput;
class UScriptStruct* FMetasoundFrontendClassOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassOutput"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassOutput.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassOutput>()
{
	return FMetasoundFrontendClassOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Contains info for output vertex of a Metasound class.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Contains info for output vertex of a Metasound class." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex,
	&NewStructOps,
	"MetasoundFrontendClassOutput",
	nullptr,
	0,
	sizeof(FMetasoundFrontendClassOutput),
	alignof(FMetasoundFrontendClassOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassOutput.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassOutput.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassOutput

// Begin ScriptStruct FMetasoundFrontendClassEnvironmentVariable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassEnvironmentVariable;
class UScriptStruct* FMetasoundFrontendClassEnvironmentVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassEnvironmentVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassEnvironmentVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassEnvironmentVariable"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassEnvironmentVariable.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassEnvironmentVariable>()
{
	return FMetasoundFrontendClassEnvironmentVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "// Name of environment variable.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name of environment variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[] = {
		{ "Comment", "// Type of environment variable.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Type of environment variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRequired_MetaData[] = {
		{ "Comment", "// True if the environment variable is needed in order to instantiate a node instance of the class.\n// TODO: Should be deprecated?\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "True if the environment variable is needed in order to instantiate a node instance of the class.\nTODO: Should be deprecated?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
	static void NewProp_bIsRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRequired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassEnvironmentVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassEnvironmentVariable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassEnvironmentVariable, TypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeName_MetaData), NewProp_TypeName_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewProp_bIsRequired_SetBit(void* Obj)
{
	((FMetasoundFrontendClassEnvironmentVariable*)Obj)->bIsRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewProp_bIsRequired = { "bIsRequired", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendClassEnvironmentVariable), &Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewProp_bIsRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRequired_MetaData), NewProp_bIsRequired_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewProp_TypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewProp_bIsRequired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendClassEnvironmentVariable",
	Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::PropPointers),
	sizeof(FMetasoundFrontendClassEnvironmentVariable),
	alignof(FMetasoundFrontendClassEnvironmentVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassEnvironmentVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassEnvironmentVariable.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassEnvironmentVariable.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassEnvironmentVariable

// Begin ScriptStruct FMetasoundFrontendInterfaceStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceStyle;
class UScriptStruct* FMetasoundFrontendInterfaceStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendInterfaceStyle"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceStyle.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendInterfaceStyle>()
{
	return FMetasoundFrontendInterfaceStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Style info of an interface.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Style info of an interface." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSortOrder_MetaData[] = {
		{ "Comment", "// Default vertex sort order, where array index mirrors array interface index and value is display sort index.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Default vertex sort order, where array index mirrors array interface index and value is display sort index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredMembers_MetaData[] = {
		{ "Comment", "// Map of member names with FText to be used as warnings if not hooked up\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Map of member names with FText to be used as warnings if not hooked up" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultSortOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultSortOrder;
	static const UECodeGen_Private::FTextPropertyParams NewProp_RequiredMembers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredMembers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RequiredMembers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendInterfaceStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_DefaultSortOrder_Inner = { "DefaultSortOrder", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_DefaultSortOrder = { "DefaultSortOrder", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceStyle, DefaultSortOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSortOrder_MetaData), NewProp_DefaultSortOrder_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_RequiredMembers_ValueProp = { "RequiredMembers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_RequiredMembers_Key_KeyProp = { "RequiredMembers_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_RequiredMembers = { "RequiredMembers", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceStyle, RequiredMembers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredMembers_MetaData), NewProp_RequiredMembers_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_DefaultSortOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_DefaultSortOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_RequiredMembers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_RequiredMembers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewProp_RequiredMembers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendInterfaceStyle",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::PropPointers), 0),
	sizeof(FMetasoundFrontendInterfaceStyle),
	alignof(FMetasoundFrontendInterfaceStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceStyle.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceStyle.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendInterfaceStyle

// Begin ScriptStruct FMetasoundFrontendClassInterface
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInterface;
class UScriptStruct* FMetasoundFrontendClassInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassInterface"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInterface.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassInterface>()
{
	return FMetasoundFrontendClassInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputStyle_MetaData[] = {
		{ "Comment", "// Style info for inputs.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Style info for inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputStyle_MetaData[] = {
		{ "Comment", "// Style info for outputs.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Style info for outputs." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Category", "CustomView" },
		{ "Comment", "// Description of class inputs.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Description of class inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "Category", "CustomView" },
		{ "Comment", "// Description of class outputs.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Description of class outputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Environment_MetaData[] = {
		{ "Category", "CustomView" },
		{ "Comment", "// Description of class environment variables.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Description of class environment variables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputStyle;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Environment_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Environment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_InputStyle = { "InputStyle", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassInterface, InputStyle), Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputStyle_MetaData), NewProp_InputStyle_MetaData) }; // 3137192840
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_OutputStyle = { "OutputStyle", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassInterface, OutputStyle), Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputStyle_MetaData), NewProp_OutputStyle_MetaData) }; // 3137192840
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClassInput, METADATA_PARAMS(0, nullptr) }; // 294729200
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassInterface, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 294729200
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput, METADATA_PARAMS(0, nullptr) }; // 1301572420
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassInterface, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) }; // 1301572420
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Environment_Inner = { "Environment", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable, METADATA_PARAMS(0, nullptr) }; // 3753197251
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Environment = { "Environment", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassInterface, Environment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Environment_MetaData), NewProp_Environment_MetaData) }; // 3753197251
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_ChangeID = { "ChangeID", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassInterface, ChangeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeID_MetaData), NewProp_ChangeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_InputStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_OutputStyle,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Environment_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_Environment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewProp_ChangeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendClassInterface",
	Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::PropPointers),
	sizeof(FMetasoundFrontendClassInterface),
	alignof(FMetasoundFrontendClassInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInterface.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInterface.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassInterface

// Begin ScriptStruct FMetasoundFrontendInterfaceVertexBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceVertexBinding;
class UScriptStruct* FMetasoundFrontendInterfaceVertexBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceVertexBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceVertexBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendInterfaceVertexBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceVertexBinding.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendInterfaceVertexBinding>()
{
	return FMetasoundFrontendInterfaceVertexBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendInterfaceVertexBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceVertexBinding, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceVertexBinding, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::NewProp_InputName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendInterfaceVertexBinding",
	Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::PropPointers),
	sizeof(FMetasoundFrontendInterfaceVertexBinding),
	alignof(FMetasoundFrontendInterfaceVertexBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceVertexBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceVertexBinding.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceVertexBinding.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendInterfaceVertexBinding

// Begin ScriptStruct FMetasoundFrontendInterfaceBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceBinding;
class UScriptStruct* FMetasoundFrontendInterfaceBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendInterfaceBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceBinding.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendInterfaceBinding>()
{
	return FMetasoundFrontendInterfaceBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputInterfaceVersion_MetaData[] = {
		{ "Comment", "// Version of interface to bind from (the corresponding output vertices)\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Version of interface to bind from (the corresponding output vertices)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputInterfaceVersion_MetaData[] = {
		{ "Comment", "// Version of interface to bind to (the corresponding input vertices)\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Version of interface to bind to (the corresponding input vertices)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingPriority_MetaData[] = {
		{ "Comment", "// Value describing if interface binding priority is higher or lower than another interface\n// binding that may be shared between vertices attempting to be connected via binding functionality.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Value describing if interface binding priority is higher or lower than another interface\nbinding that may be shared between vertices attempting to be connected via binding functionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexBindings_MetaData[] = {
		{ "Comment", "// Array of named pairs (output & input names) that describe what edges to create if binding functionality\n// is executed between two nodes.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Array of named pairs (output & input names) that describe what edges to create if binding functionality\nis executed between two nodes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputInterfaceVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputInterfaceVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BindingPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendInterfaceBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_OutputInterfaceVersion = { "OutputInterfaceVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceBinding, OutputInterfaceVersion), Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputInterfaceVersion_MetaData), NewProp_OutputInterfaceVersion_MetaData) }; // 3999094279
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_InputInterfaceVersion = { "InputInterfaceVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceBinding, InputInterfaceVersion), Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputInterfaceVersion_MetaData), NewProp_InputInterfaceVersion_MetaData) }; // 3999094279
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_BindingPriority = { "BindingPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceBinding, BindingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingPriority_MetaData), NewProp_BindingPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_VertexBindings_Inner = { "VertexBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding, METADATA_PARAMS(0, nullptr) }; // 2258954132
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_VertexBindings = { "VertexBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceBinding, VertexBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexBindings_MetaData), NewProp_VertexBindings_MetaData) }; // 2258954132
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_OutputInterfaceVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_InputInterfaceVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_BindingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_VertexBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewProp_VertexBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendInterfaceBinding",
	Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::PropPointers),
	sizeof(FMetasoundFrontendInterfaceBinding),
	alignof(FMetasoundFrontendInterfaceBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceBinding.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceBinding.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendInterfaceBinding

// Begin ScriptStruct FMetasoundFrontendInterfaceUClassOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceUClassOptions;
class UScriptStruct* FMetasoundFrontendInterfaceUClassOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceUClassOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceUClassOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendInterfaceUClassOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceUClassOptions.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendInterfaceUClassOptions>()
{
	return FMetasoundFrontendInterfaceUClassOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Options used to restrict a corresponding UClass that interface may be applied to.\n// If unspecified, interface is assumed to be applicable to any arbitrary UClass.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Options used to restrict a corresponding UClass that interface may be applied to.\nIf unspecified, interface is assumed to be applicable to any arbitrary UClass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsModifiable_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassPath;
	static void NewProp_bIsModifiable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsModifiable;
	static void NewProp_bIsDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendInterfaceUClassOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_ClassPath = { "ClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterfaceUClassOptions, ClassPath), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassPath_MetaData), NewProp_ClassPath_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_bIsModifiable_SetBit(void* Obj)
{
	((FMetasoundFrontendInterfaceUClassOptions*)Obj)->bIsModifiable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_bIsModifiable = { "bIsModifiable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendInterfaceUClassOptions), &Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_bIsModifiable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsModifiable_MetaData), NewProp_bIsModifiable_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_bIsDefault_SetBit(void* Obj)
{
	((FMetasoundFrontendInterfaceUClassOptions*)Obj)->bIsDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendInterfaceUClassOptions), &Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefault_MetaData), NewProp_bIsDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_ClassPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_bIsModifiable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewProp_bIsDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendInterfaceUClassOptions",
	Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::PropPointers),
	sizeof(FMetasoundFrontendInterfaceUClassOptions),
	alignof(FMetasoundFrontendInterfaceUClassOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceUClassOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceUClassOptions.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceUClassOptions.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendInterfaceUClassOptions

// Begin ScriptStruct FMetasoundFrontendInterface
static_assert(std::is_polymorphic<FMetasoundFrontendInterface>() == std::is_polymorphic<FMetasoundFrontendClassInterface>(), "USTRUCT FMetasoundFrontendInterface cannot be polymorphic unless super FMetasoundFrontendClassInterface is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendInterface;
class UScriptStruct* FMetasoundFrontendInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendInterface, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendInterface"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterface.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendInterface>()
{
	return FMetasoundFrontendInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Definition of an interface that an FMetasoundFrontendClass adheres to in part or full.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Definition of an interface that an FMetasoundFrontendClass adheres to in part or full." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Comment", "// Name and version number of the interface\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name and version number of the interface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UClassOptions_MetaData[] = {
		{ "Comment", "// If specified, options used to restrict a corresponding UClass that interface may be\n// applied to.  If unspecified, interface is assumed to be applicable to any arbitrary UClass.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "If specified, options used to restrict a corresponding UClass that interface may be\napplied to.  If unspecified, interface is assumed to be applicable to any arbitrary UClass." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UClassOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UClassOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterface, Version), Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 3999094279
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::NewProp_UClassOptions_Inner = { "UClassOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions, METADATA_PARAMS(0, nullptr) }; // 3718835929
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::NewProp_UClassOptions = { "UClassOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendInterface, UClassOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UClassOptions_MetaData), NewProp_UClassOptions_MetaData) }; // 3718835929
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::NewProp_UClassOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::NewProp_UClassOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
	&NewStructOps,
	"MetasoundFrontendInterface",
	Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::PropPointers),
	sizeof(FMetasoundFrontendInterface),
	alignof(FMetasoundFrontendInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendInterface()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendInterface.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendInterface.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendInterface

// Begin ScriptStruct FMetasoundFrontendClassName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassName;
class UScriptStruct* FMetasoundFrontendClassName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassName, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassName"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassName.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassName>()
{
	return FMetasoundFrontendClassName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Name of a Metasound class\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name of a Metasound class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Namespace of class.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Namespace of class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Name of class.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Name of class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Variant of class. The Variant is used to describe an equivalent class which performs the same operation but on differing types.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Variant of class. The Variant is used to describe an equivalent class which performs the same operation but on differing types." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Variant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassName, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassName, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassName, Variant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variant_MetaData), NewProp_Variant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::NewProp_Variant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendClassName",
	Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::PropPointers),
	sizeof(FMetasoundFrontendClassName),
	alignof(FMetasoundFrontendClassName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassName()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassName.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassName.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassName

// Begin ScriptStruct FMetasoundFrontendClassMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassMetadata;
class UScriptStruct* FMetasoundFrontendClassMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassMetadata.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassMetadata>()
{
	return FMetasoundFrontendClassMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Category", "Metasound" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Metasound" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Metasound" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Metasound" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameTransient_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Metasound" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionTransient_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptIfMissingTransient_MetaData[] = {
		{ "Comment", "// TODO: Move to using a non-localized hint path.  Due to localization,\n// loading & the fact that class registration happens on demand (post serialization),\n// copying an FText to the referencing document can result in localization ids\n// mismatched to different text when attempting to gather text.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "TODO: Move to using a non-localized hint path.  Due to localization,\nloading & the fact that class registration happens on demand (post serialization),\ncopying an FText to the referencing document can result in localization ids\nmismatched to different text when attempting to gather text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "Category", "Metasound" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
		{ "Category", "Metasound" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeywordsTransient_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryHierarchy_MetaData[] = {
		{ "Category", "Metasound" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryHierarchyTransient_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeprecated_MetaData[] = {
		{ "Category", "Metasound" },
		{ "Comment", "// If true, this node is deprecated and should not be used in new MetaSounds.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "If true, this node is deprecated and should not be used in new MetaSounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateManagesInterface_MetaData[] = {
		{ "Comment", "// If true, auto-update will manage (add and remove)\n// inputs/outputs associated with internally connected\n// nodes when the interface of the given node is auto-updated.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "If true, auto-update will manage (add and remove)\ninputs/outputs associated with internally connected\nnodes when the interface of the given node is auto-updated." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSerializeText_MetaData[] = {
		{ "Comment", "// Whether or not the given metadata text should be serialized\n// or is procedurally maintained via auto-update & the referenced\n// registry class (to avoid localization text desync).  Should be\n// false for classes serialized as externally-defined dependencies\n// or interfaces.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Whether or not the given metadata text should be serialized\nor is procedurally maintained via auto-update & the referenced\nregistry class (to avoid localization text desync).  Should be\nfalse for classes serialized as externally-defined dependencies\nor interfaces." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeID_MetaData[] = {
		{ "Comment", "// ID used to identify if any of the above have been modified,\n// to determine if the parent class should be auto-updated.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "ID used to identify if any of the above have been modified,\nto determine if the parent class should be auto-updated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayNameTransient;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DescriptionTransient;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PromptIfMissingTransient;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Keywords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keywords;
	static const UECodeGen_Private::FTextPropertyParams NewProp_KeywordsTransient_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeywordsTransient;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CategoryHierarchy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryHierarchy;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CategoryHierarchyTransient_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryHierarchyTransient;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsDeprecated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeprecated;
	static void NewProp_bAutoUpdateManagesInterface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateManagesInterface;
#if WITH_EDITORONLY_DATA
	static void NewProp_bSerializeText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSerializeText;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, ClassName), Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) }; // 2449018862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, Version), Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 44310332
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, Type), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 350856062
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_DisplayNameTransient = { "DisplayNameTransient", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, DisplayNameTransient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNameTransient_MetaData), NewProp_DisplayNameTransient_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_DescriptionTransient = { "DescriptionTransient", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, DescriptionTransient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionTransient_MetaData), NewProp_DescriptionTransient_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_PromptIfMissingTransient = { "PromptIfMissingTransient", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, PromptIfMissingTransient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptIfMissingTransient_MetaData), NewProp_PromptIfMissingTransient_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, Author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Keywords_Inner = { "Keywords", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, Keywords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keywords_MetaData), NewProp_Keywords_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_KeywordsTransient_Inner = { "KeywordsTransient", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_KeywordsTransient = { "KeywordsTransient", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, KeywordsTransient), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeywordsTransient_MetaData), NewProp_KeywordsTransient_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_CategoryHierarchy_Inner = { "CategoryHierarchy", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_CategoryHierarchy = { "CategoryHierarchy", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, CategoryHierarchy), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryHierarchy_MetaData), NewProp_CategoryHierarchy_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_CategoryHierarchyTransient_Inner = { "CategoryHierarchyTransient", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_CategoryHierarchyTransient = { "CategoryHierarchyTransient", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, CategoryHierarchyTransient), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryHierarchyTransient_MetaData), NewProp_CategoryHierarchyTransient_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bIsDeprecated_SetBit(void* Obj)
{
	((FMetasoundFrontendClassMetadata*)Obj)->bIsDeprecated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bIsDeprecated = { "bIsDeprecated", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendClassMetadata), &Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bIsDeprecated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDeprecated_MetaData), NewProp_bIsDeprecated_MetaData) };
void Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bAutoUpdateManagesInterface_SetBit(void* Obj)
{
	((FMetasoundFrontendClassMetadata*)Obj)->bAutoUpdateManagesInterface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bAutoUpdateManagesInterface = { "bAutoUpdateManagesInterface", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendClassMetadata), &Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bAutoUpdateManagesInterface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoUpdateManagesInterface_MetaData), NewProp_bAutoUpdateManagesInterface_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bSerializeText_SetBit(void* Obj)
{
	((FMetasoundFrontendClassMetadata*)Obj)->bSerializeText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bSerializeText = { "bSerializeText", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendClassMetadata), &Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bSerializeText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSerializeText_MetaData), NewProp_bSerializeText_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_ChangeID = { "ChangeID", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassMetadata, ChangeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeID_MetaData), NewProp_ChangeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Type,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_DisplayNameTransient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_DescriptionTransient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_PromptIfMissingTransient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Keywords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_Keywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_KeywordsTransient_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_KeywordsTransient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_CategoryHierarchy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_CategoryHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_CategoryHierarchyTransient_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_CategoryHierarchyTransient,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bIsDeprecated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bAutoUpdateManagesInterface,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_bSerializeText,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewProp_ChangeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendClassMetadata",
	Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::PropPointers),
	sizeof(FMetasoundFrontendClassMetadata),
	alignof(FMetasoundFrontendClassMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassMetadata.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassMetadata.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassMetadata

// Begin ScriptStruct FMetasoundFrontendClassStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyle;
class UScriptStruct* FMetasoundFrontendClassStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClassStyle"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyle.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClassStyle>()
{
	return FMetasoundFrontendClassStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Display_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Display;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClassStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::NewProp_Display = { "Display", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassStyle, Display), Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Display_MetaData), NewProp_Display_MetaData) }; // 960849546
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::NewProp_ChangeID = { "ChangeID", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClassStyle, ChangeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeID_MetaData), NewProp_ChangeID_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::NewProp_Display,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::NewProp_ChangeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendClassStyle",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::PropPointers), 0),
	sizeof(FMetasoundFrontendClassStyle),
	alignof(FMetasoundFrontendClassStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyle.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyle.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClassStyle

// Begin ScriptStruct FMetasoundFrontendClass
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendClass;
class UScriptStruct* FMetasoundFrontendClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClass, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendClass"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClass.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendClass>()
{
	return FMetasoundFrontendClass::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "CustomView" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[] = {
		{ "Category", "CustomView" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Interface;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendClass>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClass, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClass, Metadata), Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) }; // 3712323117
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClass, Interface), Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interface_MetaData), NewProp_Interface_MetaData) }; // 646503871
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendClass, Style), Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 1972131183
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewProp_Interface,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewProp_Style,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendClass",
	Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::PropPointers),
	sizeof(FMetasoundFrontendClass),
	alignof(FMetasoundFrontendClass),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClass()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendClass.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendClass.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendClass

// Begin ScriptStruct FMetasoundFrontendGraphClassPresetOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClassPresetOptions;
class UScriptStruct* FMetasoundFrontendGraphClassPresetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClassPresetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClassPresetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendGraphClassPresetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClassPresetOptions.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendGraphClassPresetOptions>()
{
	return FMetasoundFrontendGraphClassPresetOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Preset options related to a parent graph class.  A graph class with bIsPreset set to true\n// auto-updates to mirror the interface members (inputs & outputs) of the single, referenced\n// node. It also connects all of these nodes' interface members on update to corresponding inputs\n// & outputs, and inherits input defaults from the referenced node unless otherwise specified.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Preset options related to a parent graph class.  A graph class with bIsPreset set to true\nauto-updates to mirror the interface members (inputs & outputs) of the single, referenced\nnode. It also connects all of these nodes' interface members on update to corresponding inputs\n& outputs, and inherits input defaults from the referenced node unless otherwise specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreset_MetaData[] = {
		{ "Comment", "// Whether or not graph class is a preset or not.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Whether or not graph class is a preset or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsInheritingDefault_MetaData[] = {
		{ "Comment", "// Names of all inputs inheriting default values from the referenced node. All input names\n// in this set have their default value set on update when registered with the Frontend Class\n// Registry.  Omitted inputs remain using the pre-existing, serialized default values.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
		{ "ToolTip", "Names of all inputs inheriting default values from the referenced node. All input names\nin this set have their default value set on update when registered with the Frontend Class\nRegistry.  Omitted inputs remain using the pre-existing, serialized default values." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPreset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputsInheritingDefault_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InputsInheritingDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendGraphClassPresetOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewProp_bIsPreset_SetBit(void* Obj)
{
	((FMetasoundFrontendGraphClassPresetOptions*)Obj)->bIsPreset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewProp_bIsPreset = { "bIsPreset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetasoundFrontendGraphClassPresetOptions), &Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewProp_bIsPreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPreset_MetaData), NewProp_bIsPreset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewProp_InputsInheritingDefault_ElementProp = { "InputsInheritingDefault", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewProp_InputsInheritingDefault = { "InputsInheritingDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendGraphClassPresetOptions, InputsInheritingDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsInheritingDefault_MetaData), NewProp_InputsInheritingDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewProp_bIsPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewProp_InputsInheritingDefault_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewProp_InputsInheritingDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendGraphClassPresetOptions",
	Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::PropPointers),
	sizeof(FMetasoundFrontendGraphClassPresetOptions),
	alignof(FMetasoundFrontendGraphClassPresetOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClassPresetOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClassPresetOptions.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClassPresetOptions.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendGraphClassPresetOptions

// Begin ScriptStruct FMetasoundFrontendGraphClass
static_assert(std::is_polymorphic<FMetasoundFrontendGraphClass>() == std::is_polymorphic<FMetasoundFrontendClass>(), "USTRUCT FMetasoundFrontendGraphClass cannot be polymorphic unless super FMetasoundFrontendClass is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClass;
class UScriptStruct* FMetasoundFrontendGraphClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendGraphClass"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClass.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendGraphClass>()
{
	return FMetasoundFrontendGraphClass::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendGraphClass>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendGraphClass, Graph), Z_Construct_UScriptStruct_FMetasoundFrontendGraph, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) }; // 3442658498
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::NewProp_PresetOptions = { "PresetOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendGraphClass, PresetOptions), Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetOptions_MetaData), NewProp_PresetOptions_MetaData) }; // 3192502062
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::NewProp_PresetOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	Z_Construct_UScriptStruct_FMetasoundFrontendClass,
	&NewStructOps,
	"MetasoundFrontendGraphClass",
	Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::PropPointers),
	sizeof(FMetasoundFrontendGraphClass),
	alignof(FMetasoundFrontendGraphClass),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClass.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClass.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendGraphClass

// Begin ScriptStruct FMetasoundFrontendDocumentMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendDocumentMetadata;
class UScriptStruct* FMetasoundFrontendDocumentMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendDocumentMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendDocumentMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendDocumentMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendDocumentMetadata.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendDocumentMetadata>()
{
	return FMetasoundFrontendDocumentMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendDocumentMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendDocumentMetadata, Version), Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 3999094279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendDocumentMetadata",
	Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::PropPointers),
	sizeof(FMetasoundFrontendDocumentMetadata),
	alignof(FMetasoundFrontendDocumentMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendDocumentMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendDocumentMetadata.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendDocumentMetadata.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendDocumentMetadata

// Begin ScriptStruct FMetasoundFrontendDocument
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendDocument;
class UScriptStruct* FMetasoundFrontendDocument::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendDocument.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendDocument.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendDocument, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendDocument"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendDocument.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendDocument>()
{
	return FMetasoundFrontendDocument::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interfaces_MetaData[] = {
		{ "Category", "CustomView" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootGraph_MetaData[] = {
		{ "Category", "CustomView" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subgraphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArchetypeVersion_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - ArchetypeVersion has been migrated to InterfaceVersions array." },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceVersions_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - InterfaceVersions has been migrated to Interfaces set." },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Interfaces_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Interfaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootGraph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subgraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subgraphs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArchetypeVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterfaceVersions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InterfaceVersions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendDocument>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendDocument, Metadata), Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) }; // 1183265909
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Interfaces_ElementProp = { "Interfaces", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(0, nullptr) }; // 3999094279
static_assert(TModels_V<CGetTypeHashable, FMetasoundFrontendVersion>, "The structure 'FMetasoundFrontendVersion' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Interfaces = { "Interfaces", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendDocument, Interfaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interfaces_MetaData), NewProp_Interfaces_MetaData) }; // 3999094279
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_RootGraph = { "RootGraph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendDocument, RootGraph), Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootGraph_MetaData), NewProp_RootGraph_MetaData) }; // 591628598
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Subgraphs_Inner = { "Subgraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass, METADATA_PARAMS(0, nullptr) }; // 591628598
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Subgraphs = { "Subgraphs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendDocument, Subgraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subgraphs_MetaData), NewProp_Subgraphs_MetaData) }; // 591628598
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClass, METADATA_PARAMS(0, nullptr) }; // 1289387749
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendDocument, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependencies_MetaData), NewProp_Dependencies_MetaData) }; // 1289387749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_ArchetypeVersion = { "ArchetypeVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendDocument, ArchetypeVersion), Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArchetypeVersion_MetaData), NewProp_ArchetypeVersion_MetaData) }; // 3999094279
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_InterfaceVersions_Inner = { "InterfaceVersions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(0, nullptr) }; // 3999094279
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_InterfaceVersions = { "InterfaceVersions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendDocument, InterfaceVersions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceVersions_MetaData), NewProp_InterfaceVersions_MetaData) }; // 3999094279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Interfaces_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Interfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_RootGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Subgraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Subgraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Dependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_Dependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_ArchetypeVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_InterfaceVersions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewProp_InterfaceVersions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendDocument",
	Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::PropPointers),
	sizeof(FMetasoundFrontendDocument),
	alignof(FMetasoundFrontendDocument),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocument()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendDocument.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendDocument.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendDocument.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendDocument

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocument_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMetasoundFrontendVertexAccessType_StaticEnum, TEXT("EMetasoundFrontendVertexAccessType"), &Z_Registration_Info_UEnum_EMetasoundFrontendVertexAccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2298378053U) },
		{ EMetasoundFrontendClassType_StaticEnum, TEXT("EMetasoundFrontendClassType"), &Z_Registration_Info_UEnum_EMetasoundFrontendClassType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 350856062U) },
		{ EMetasoundFrontendNodeStyleDisplayVisibility_StaticEnum, TEXT("EMetasoundFrontendNodeStyleDisplayVisibility"), &Z_Registration_Info_UEnum_EMetasoundFrontendNodeStyleDisplayVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2455559818U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetasoundFrontendVersionNumber::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber_Statics::NewStructOps, TEXT("MetasoundFrontendVersionNumber"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendVersionNumber, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendVersionNumber), 44310332U) },
		{ FMetasoundFrontendVersion::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendVersion_Statics::NewStructOps, TEXT("MetasoundFrontendVersion"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendVersion), 3999094279U) },
		{ FMetasoundFrontendVertex::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendVertex_Statics::NewStructOps, TEXT("MetasoundFrontendVertex"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendVertex), 1496573235U) },
		{ FMetasoundFrontendVertexHandle::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle_Statics::NewStructOps, TEXT("MetasoundFrontendVertexHandle"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendVertexHandle), 1448127840U) },
		{ FMetasoundFrontendVertexLiteral::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral_Statics::NewStructOps, TEXT("MetasoundFrontendVertexLiteral"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexLiteral, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendVertexLiteral), 1822348725U) },
		{ FMetasoundFrontendVariable::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendVariable_Statics::NewStructOps, TEXT("MetasoundFrontendVariable"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendVariable), 3890925121U) },
		{ FMetasoundFrontendNodeInterface::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface_Statics::NewStructOps, TEXT("MetasoundFrontendNodeInterface"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendNodeInterface), 2735406734U) },
		{ FMetasoundFrontendNodeStyleDisplay::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyleDisplay_Statics::NewStructOps, TEXT("MetasoundFrontendNodeStyleDisplay"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyleDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendNodeStyleDisplay), 3054122161U) },
		{ FMetasoundFrontendNodeStyle::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendNodeStyle_Statics::NewStructOps, TEXT("MetasoundFrontendNodeStyle"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendNodeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendNodeStyle), 3080165617U) },
		{ FMetasoundFrontendNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendNode_Statics::NewStructOps, TEXT("MetasoundFrontendNode"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendNode), 862369136U) },
		{ FMetasoundFrontendEdge::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendEdge_Statics::NewStructOps, TEXT("MetasoundFrontendEdge"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendEdge), 2484088442U) },
		{ FMetasoundFrontendEdgeStyleLiteralColorPair::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyleLiteralColorPair_Statics::NewStructOps, TEXT("MetasoundFrontendEdgeStyleLiteralColorPair"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyleLiteralColorPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendEdgeStyleLiteralColorPair), 2773005864U) },
		{ FMetasoundFrontendEdgeStyle::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendEdgeStyle_Statics::NewStructOps, TEXT("MetasoundFrontendEdgeStyle"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendEdgeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendEdgeStyle), 331798888U) },
		{ FMetasoundFrontendGraphStyle::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendGraphStyle_Statics::NewStructOps, TEXT("MetasoundFrontendGraphStyle"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendGraphStyle), 1900242818U) },
		{ FMetasoundFrontendGraph::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendGraph_Statics::NewStructOps, TEXT("MetasoundFrontendGraph"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendGraph), 3442658498U) },
		{ FMetasoundFrontendVertexMetadata::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendVertexMetadata_Statics::NewStructOps, TEXT("MetasoundFrontendVertexMetadata"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendVertexMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendVertexMetadata), 399474955U) },
		{ FMetasoundFrontendClassVertex::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex_Statics::NewStructOps, TEXT("MetasoundFrontendClassVertex"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassVertex), 479530473U) },
		{ FMetasoundFrontendClassStyleDisplay::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassStyleDisplay_Statics::NewStructOps, TEXT("MetasoundFrontendClassStyleDisplay"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyleDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassStyleDisplay), 960849546U) },
		{ FMetasoundFrontendClassInput::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassInput_Statics::NewStructOps, TEXT("MetasoundFrontendClassInput"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassInput), 294729200U) },
		{ FMetasoundFrontendClassVariable::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable_Statics::NewStructOps, TEXT("MetasoundFrontendClassVariable"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassVariable), 2227683153U) },
		{ FMetasoundFrontendClassOutput::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput_Statics::NewStructOps, TEXT("MetasoundFrontendClassOutput"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassOutput), 1301572420U) },
		{ FMetasoundFrontendClassEnvironmentVariable::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable_Statics::NewStructOps, TEXT("MetasoundFrontendClassEnvironmentVariable"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassEnvironmentVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassEnvironmentVariable), 3753197251U) },
		{ FMetasoundFrontendInterfaceStyle::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceStyle_Statics::NewStructOps, TEXT("MetasoundFrontendInterfaceStyle"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendInterfaceStyle), 3137192840U) },
		{ FMetasoundFrontendClassInterface::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface_Statics::NewStructOps, TEXT("MetasoundFrontendClassInterface"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassInterface), 646503871U) },
		{ FMetasoundFrontendInterfaceVertexBinding::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceVertexBinding_Statics::NewStructOps, TEXT("MetasoundFrontendInterfaceVertexBinding"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceVertexBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendInterfaceVertexBinding), 2258954132U) },
		{ FMetasoundFrontendInterfaceBinding::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceBinding_Statics::NewStructOps, TEXT("MetasoundFrontendInterfaceBinding"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendInterfaceBinding), 2941388633U) },
		{ FMetasoundFrontendInterfaceUClassOptions::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions_Statics::NewStructOps, TEXT("MetasoundFrontendInterfaceUClassOptions"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendInterfaceUClassOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendInterfaceUClassOptions), 3718835929U) },
		{ FMetasoundFrontendInterface::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendInterface_Statics::NewStructOps, TEXT("MetasoundFrontendInterface"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendInterface), 309052310U) },
		{ FMetasoundFrontendClassName::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassName_Statics::NewStructOps, TEXT("MetasoundFrontendClassName"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassName), 2449018862U) },
		{ FMetasoundFrontendClassMetadata::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata_Statics::NewStructOps, TEXT("MetasoundFrontendClassMetadata"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassMetadata), 3712323117U) },
		{ FMetasoundFrontendClassStyle::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClassStyle_Statics::NewStructOps, TEXT("MetasoundFrontendClassStyle"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClassStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClassStyle), 1972131183U) },
		{ FMetasoundFrontendClass::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendClass_Statics::NewStructOps, TEXT("MetasoundFrontendClass"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendClass), 1289387749U) },
		{ FMetasoundFrontendGraphClassPresetOptions::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendGraphClassPresetOptions_Statics::NewStructOps, TEXT("MetasoundFrontendGraphClassPresetOptions"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClassPresetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendGraphClassPresetOptions), 3192502062U) },
		{ FMetasoundFrontendGraphClass::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass_Statics::NewStructOps, TEXT("MetasoundFrontendGraphClass"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendGraphClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendGraphClass), 591628598U) },
		{ FMetasoundFrontendDocumentMetadata::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata_Statics::NewStructOps, TEXT("MetasoundFrontendDocumentMetadata"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendDocumentMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendDocumentMetadata), 1183265909U) },
		{ FMetasoundFrontendDocument::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendDocument_Statics::NewStructOps, TEXT("MetasoundFrontendDocument"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendDocument, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendDocument), 2494560277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocument_h_1614609289(TEXT("/Script/MetasoundFrontend"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocument_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocument_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocument_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocument_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
