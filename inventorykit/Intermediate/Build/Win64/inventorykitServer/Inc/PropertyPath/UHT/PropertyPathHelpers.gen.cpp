// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyPathHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath();
PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathSegment();
UPackage* Z_Construct_UPackage__Script_PropertyPath();
// End Cross Module References

// Begin ScriptStruct FPropertyPathSegment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPathSegment;
class UScriptStruct* FPropertyPathSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPathSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathSegment, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathSegment"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathSegment.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathSegment>()
{
	return FPropertyPathSegment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyPathSegment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for cached property path segments */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "Base class for cached property path segments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** The sub-component of the property path, a single value between .'s of the path */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "The sub-component of the property path, a single value between .'s of the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** The optional array index. */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "The optional array index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "Comment", "/** The cached Class or ScriptStruct that was used last to resolve Name to a property. */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "The cached Class or ScriptStruct that was used last to resolve Name to a property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathSegment, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathSegment, ArrayIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayIndex_MetaData), NewProp_ArrayIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathSegment, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_ArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Struct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
	nullptr,
	&NewStructOps,
	"PropertyPathSegment",
	Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::PropPointers),
	sizeof(FPropertyPathSegment),
	alignof(FPropertyPathSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathSegment()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPathSegment.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathSegment.InnerSingleton;
}
// End ScriptStruct FPropertyPathSegment

// Begin ScriptStruct FCachedPropertyPath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedPropertyPath;
class UScriptStruct* FCachedPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedPropertyPath, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("CachedPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_CachedPropertyPath.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FCachedPropertyPath>()
{
	return FCachedPropertyPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedPropertyPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for cached property paths */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "Base class for cached property paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "Comment", "/** Path segments for this path */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "Path segments for this path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedFunction_MetaData[] = {
		{ "Comment", "/** Cached function for function-terminated paths */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "Cached function for function-terminated paths" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedPropertyPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPropertyPathSegment, METADATA_PARAMS(0, nullptr) }; // 2624965816
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedPropertyPath, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) }; // 2624965816
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_CachedFunction = { "CachedFunction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedPropertyPath, CachedFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedFunction_MetaData), NewProp_CachedFunction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_CachedFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
	nullptr,
	&NewStructOps,
	"CachedPropertyPath",
	Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::PropPointers),
	sizeof(FCachedPropertyPath),
	alignof(FCachedPropertyPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath()
{
	if (!Z_Registration_Info_UScriptStruct_CachedPropertyPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedPropertyPath.InnerSingleton;
}
// End ScriptStruct FCachedPropertyPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Public_PropertyPathHelpers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPropertyPathSegment::StaticStruct, Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewStructOps, TEXT("PropertyPathSegment"), &Z_Registration_Info_UScriptStruct_PropertyPathSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPathSegment), 2624965816U) },
		{ FCachedPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewStructOps, TEXT("CachedPropertyPath"), &Z_Registration_Info_UScriptStruct_CachedPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedPropertyPath), 2813334034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Public_PropertyPathHelpers_h_1027211965(TEXT("/Script/PropertyPath"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Public_PropertyPathHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Public_PropertyPathHelpers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
