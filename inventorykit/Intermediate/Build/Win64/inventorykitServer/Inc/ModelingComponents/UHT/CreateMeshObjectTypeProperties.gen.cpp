// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/PropertySets/CreateMeshObjectTypeProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateMeshObjectTypeProperties() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UCreateMeshObjectTypeProperties Function GetCurrentCreateMeshType
struct Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics
{
	struct CreateMeshObjectTypeProperties_eventGetCurrentCreateMeshType_Parms
	{
		ECreateObjectTypeHint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Convert current OutputType selection into a type that can be passed to UModelingObjectsCreationAPI */" },
		{ "ModuleRelativePath", "Public/PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "ToolTip", "Convert current OutputType selection into a type that can be passed to UModelingObjectsCreationAPI" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateMeshObjectTypeProperties_eventGetCurrentCreateMeshType_Parms, ReturnValue), Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint, METADATA_PARAMS(0, nullptr) }; // 2458025360
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateMeshObjectTypeProperties, nullptr, "GetCurrentCreateMeshType", nullptr, nullptr, Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::CreateMeshObjectTypeProperties_eventGetCurrentCreateMeshType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::CreateMeshObjectTypeProperties_eventGetCurrentCreateMeshType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCreateMeshObjectTypeProperties::execGetCurrentCreateMeshType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECreateObjectTypeHint*)Z_Param__Result=P_THIS->GetCurrentCreateMeshType();
	P_NATIVE_END;
}
// End Class UCreateMeshObjectTypeProperties Function GetCurrentCreateMeshType

// Begin Class UCreateMeshObjectTypeProperties Function GetOutputTypeNamesFunc
struct Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics
{
	struct CreateMeshObjectTypeProperties_eventGetOutputTypeNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// This function returns a list that is shown to select OutputType\n" },
		{ "ModuleRelativePath", "Public/PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "ToolTip", "This function returns a list that is shown to select OutputType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateMeshObjectTypeProperties_eventGetOutputTypeNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateMeshObjectTypeProperties, nullptr, "GetOutputTypeNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::CreateMeshObjectTypeProperties_eventGetOutputTypeNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::CreateMeshObjectTypeProperties_eventGetOutputTypeNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCreateMeshObjectTypeProperties::execGetOutputTypeNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetOutputTypeNamesFunc();
	P_NATIVE_END;
}
// End Class UCreateMeshObjectTypeProperties Function GetOutputTypeNamesFunc

// Begin Class UCreateMeshObjectTypeProperties Function ShouldShowPropertySet
struct Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics
{
	struct CreateMeshObjectTypeProperties_eventShouldShowPropertySet_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** @return true if we should show this property set on a Tool, ie if there are options the user can actually change (false if only one possible output type that has no options) */" },
		{ "ModuleRelativePath", "Public/PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "ToolTip", "@return true if we should show this property set on a Tool, ie if there are options the user can actually change (false if only one possible output type that has no options)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CreateMeshObjectTypeProperties_eventShouldShowPropertySet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateMeshObjectTypeProperties_eventShouldShowPropertySet_Parms), &Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateMeshObjectTypeProperties, nullptr, "ShouldShowPropertySet", nullptr, nullptr, Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::CreateMeshObjectTypeProperties_eventShouldShowPropertySet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::CreateMeshObjectTypeProperties_eventShouldShowPropertySet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCreateMeshObjectTypeProperties::execShouldShowPropertySet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldShowPropertySet();
	P_NATIVE_END;
}
// End Class UCreateMeshObjectTypeProperties Function ShouldShowPropertySet

// Begin Class UCreateMeshObjectTypeProperties
void UCreateMeshObjectTypeProperties::StaticRegisterNativesUCreateMeshObjectTypeProperties()
{
	UClass* Class = UCreateMeshObjectTypeProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentCreateMeshType", &UCreateMeshObjectTypeProperties::execGetCurrentCreateMeshType },
		{ "GetOutputTypeNamesFunc", &UCreateMeshObjectTypeProperties::execGetOutputTypeNamesFunc },
		{ "ShouldShowPropertySet", &UCreateMeshObjectTypeProperties::execShouldShowPropertySet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateMeshObjectTypeProperties);
UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister()
{
	return UCreateMeshObjectTypeProperties::StaticClass();
}
struct Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCreateMeshObjectTypeProperties is a InteractiveTool PropertySet used to select\n * what type of object to create, in creation tools (ie StaticMesh, Volume, etc).\n */" },
		{ "IncludePath", "PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "ToolTip", "UCreateMeshObjectTypeProperties is a InteractiveTool PropertySet used to select\nwhat type of object to create, in creation tools (ie StaticMesh, Volume, etc)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "OutputType" },
		{ "Comment", "/** Type of object to create */" },
		{ "DisplayName", "Output Type" },
		{ "GetOptions", "GetOutputTypeNamesFunc" },
		{ "ModuleRelativePath", "Public/PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Type of object to create" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeType_MetaData[] = {
		{ "Category", "OutputType" },
		{ "Comment", "/** Type of volume to create */" },
		{ "EditCondition", "bShowVolumeList == true" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "ToolTip", "Type of volume to create" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeNamesList_MetaData[] = {
		{ "Comment", "// The list returned by GetOutputTypeNamesFunc()\n" },
		{ "ModuleRelativePath", "Public/PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "ToolTip", "The list returned by GetOutputTypeNamesFunc()" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowVolumeList_MetaData[] = {
		{ "Comment", "// control whether the VolumeType field is enabled\n" },
		{ "ModuleRelativePath", "Public/PropertySets/CreateMeshObjectTypeProperties.h" },
		{ "ToolTip", "control whether the VolumeType field is enabled" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VolumeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputTypeNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputTypeNamesList;
	static void NewProp_bShowVolumeList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVolumeList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType, "GetCurrentCreateMeshType" }, // 1833447781
		{ &Z_Construct_UFunction_UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc, "GetOutputTypeNamesFunc" }, // 3144401474
		{ &Z_Construct_UFunction_UCreateMeshObjectTypeProperties_ShouldShowPropertySet, "ShouldShowPropertySet" }, // 2139280311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateMeshObjectTypeProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreateMeshObjectTypeProperties, OutputType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_VolumeType = { "VolumeType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreateMeshObjectTypeProperties, VolumeType), Z_Construct_UClass_UClass, Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeType_MetaData), NewProp_VolumeType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_OutputTypeNamesList_Inner = { "OutputTypeNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_OutputTypeNamesList = { "OutputTypeNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreateMeshObjectTypeProperties, OutputTypeNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeNamesList_MetaData), NewProp_OutputTypeNamesList_MetaData) };
void Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_bShowVolumeList_SetBit(void* Obj)
{
	((UCreateMeshObjectTypeProperties*)Obj)->bShowVolumeList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_bShowVolumeList = { "bShowVolumeList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCreateMeshObjectTypeProperties), &Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_bShowVolumeList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowVolumeList_MetaData), NewProp_bShowVolumeList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_VolumeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_OutputTypeNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_OutputTypeNamesList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::NewProp_bShowVolumeList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::ClassParams = {
	&UCreateMeshObjectTypeProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties()
{
	if (!Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.OuterSingleton, Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UCreateMeshObjectTypeProperties>()
{
	return UCreateMeshObjectTypeProperties::StaticClass();
}
UCreateMeshObjectTypeProperties::UCreateMeshObjectTypeProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateMeshObjectTypeProperties);
UCreateMeshObjectTypeProperties::~UCreateMeshObjectTypeProperties() {}
// End Class UCreateMeshObjectTypeProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCreateMeshObjectTypeProperties, UCreateMeshObjectTypeProperties::StaticClass, TEXT("UCreateMeshObjectTypeProperties"), &Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateMeshObjectTypeProperties), 3685062543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_2081326283(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
