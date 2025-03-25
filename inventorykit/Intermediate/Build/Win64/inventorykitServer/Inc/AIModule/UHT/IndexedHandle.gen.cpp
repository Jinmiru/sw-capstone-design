// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Public/IndexedHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndexedHandle() {}

// Begin Cross Module References
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactIndexedHandleBase();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedHandleBase();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleIndexedHandleBase();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FSimpleIndexedHandleBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleIndexedHandleBase;
class UScriptStruct* FSimpleIndexedHandleBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleIndexedHandleBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleIndexedHandleBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleIndexedHandleBase, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("SimpleIndexedHandleBase"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleIndexedHandleBase.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FSimpleIndexedHandleBase>()
{
	return FSimpleIndexedHandleBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleIndexedHandleBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Index based handle that doesn't use a serial number.\n * For fast access in to index based data structures when we don't expect handles to be able to be stale\n */" },
		{ "ModuleRelativePath", "Public/IndexedHandle.h" },
		{ "ToolTip", "Index based handle that doesn't use a serial number.\nFor fast access in to index based data structures when we don't expect handles to be able to be stale" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleIndexedHandleBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleIndexedHandleBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"SimpleIndexedHandleBase",
	nullptr,
	0,
	sizeof(FSimpleIndexedHandleBase),
	alignof(FSimpleIndexedHandleBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleIndexedHandleBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleIndexedHandleBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleIndexedHandleBase()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleIndexedHandleBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleIndexedHandleBase.InnerSingleton, Z_Construct_UScriptStruct_FSimpleIndexedHandleBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleIndexedHandleBase.InnerSingleton;
}
// End ScriptStruct FSimpleIndexedHandleBase

// Begin ScriptStruct FIndexedHandleBase
static_assert(std::is_polymorphic<FIndexedHandleBase>() == std::is_polymorphic<FSimpleIndexedHandleBase>(), "USTRUCT FIndexedHandleBase cannot be polymorphic unless super FSimpleIndexedHandleBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IndexedHandleBase;
class UScriptStruct* FIndexedHandleBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IndexedHandleBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IndexedHandleBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedHandleBase, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("IndexedHandleBase"));
	}
	return Z_Registration_Info_UScriptStruct_IndexedHandleBase.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FIndexedHandleBase>()
{
	return FIndexedHandleBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIndexedHandleBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Index based handle that has a serial number to verify stale handles. For fast safe access in to index based data structures */" },
		{ "ModuleRelativePath", "Public/IndexedHandle.h" },
		{ "ToolTip", "Index based handle that has a serial number to verify stale handles. For fast safe access in to index based data structures" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedHandleBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIndexedHandleBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FSimpleIndexedHandleBase,
	&NewStructOps,
	"IndexedHandleBase",
	nullptr,
	0,
	sizeof(FIndexedHandleBase),
	alignof(FIndexedHandleBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedHandleBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIndexedHandleBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIndexedHandleBase()
{
	if (!Z_Registration_Info_UScriptStruct_IndexedHandleBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IndexedHandleBase.InnerSingleton, Z_Construct_UScriptStruct_FIndexedHandleBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IndexedHandleBase.InnerSingleton;
}
// End ScriptStruct FIndexedHandleBase

// Begin ScriptStruct FCompactIndexedHandleBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactIndexedHandleBase;
class UScriptStruct* FCompactIndexedHandleBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactIndexedHandleBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactIndexedHandleBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactIndexedHandleBase, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("CompactIndexedHandleBase"));
	}
	return Z_Registration_Info_UScriptStruct_CompactIndexedHandleBase.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FCompactIndexedHandleBase>()
{
	return FCompactIndexedHandleBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompactIndexedHandleBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Compact Index based handle that has a serial number to verify stale handles. For fast safe access in to index based data structures. */" },
		{ "ModuleRelativePath", "Public/IndexedHandle.h" },
		{ "ToolTip", "Compact Index based handle that has a serial number to verify stale handles. For fast safe access in to index based data structures." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactIndexedHandleBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactIndexedHandleBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"CompactIndexedHandleBase",
	nullptr,
	0,
	sizeof(FCompactIndexedHandleBase),
	alignof(FCompactIndexedHandleBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactIndexedHandleBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompactIndexedHandleBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompactIndexedHandleBase()
{
	if (!Z_Registration_Info_UScriptStruct_CompactIndexedHandleBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactIndexedHandleBase.InnerSingleton, Z_Construct_UScriptStruct_FCompactIndexedHandleBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompactIndexedHandleBase.InnerSingleton;
}
// End ScriptStruct FCompactIndexedHandleBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_IndexedHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleIndexedHandleBase::StaticStruct, Z_Construct_UScriptStruct_FSimpleIndexedHandleBase_Statics::NewStructOps, TEXT("SimpleIndexedHandleBase"), &Z_Registration_Info_UScriptStruct_SimpleIndexedHandleBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleIndexedHandleBase), 609679009U) },
		{ FIndexedHandleBase::StaticStruct, Z_Construct_UScriptStruct_FIndexedHandleBase_Statics::NewStructOps, TEXT("IndexedHandleBase"), &Z_Registration_Info_UScriptStruct_IndexedHandleBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIndexedHandleBase), 332939252U) },
		{ FCompactIndexedHandleBase::StaticStruct, Z_Construct_UScriptStruct_FCompactIndexedHandleBase_Statics::NewStructOps, TEXT("CompactIndexedHandleBase"), &Z_Registration_Info_UScriptStruct_CompactIndexedHandleBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactIndexedHandleBase), 2450498584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_IndexedHandle_h_1894577354(TEXT("/Script/AIModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_IndexedHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_IndexedHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
