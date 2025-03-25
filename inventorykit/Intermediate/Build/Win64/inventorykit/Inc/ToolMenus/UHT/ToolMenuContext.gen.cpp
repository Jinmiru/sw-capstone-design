// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_USlateTabManagerContext();
TOOLMENUS_API UClass* Z_Construct_UClass_USlateTabManagerContext_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase_NoRegister();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin Class UToolMenuContextBase
void UToolMenuContextBase::StaticRegisterNativesUToolMenuContextBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuContextBase);
UClass* Z_Construct_UClass_UToolMenuContextBase_NoRegister()
{
	return UToolMenuContextBase::StaticClass();
}
struct Z_Construct_UClass_UToolMenuContextBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/ToolMenuContext.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuContextBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolMenuContextBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuContextBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuContextBase_Statics::ClassParams = {
	&UToolMenuContextBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuContextBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuContextBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuContextBase()
{
	if (!Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton, Z_Construct_UClass_UToolMenuContextBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenuContextBase>()
{
	return UToolMenuContextBase::StaticClass();
}
UToolMenuContextBase::UToolMenuContextBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuContextBase);
UToolMenuContextBase::~UToolMenuContextBase() {}
// End Class UToolMenuContextBase

// Begin Class USlateTabManagerContext
void USlateTabManagerContext::StaticRegisterNativesUSlateTabManagerContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateTabManagerContext);
UClass* Z_Construct_UClass_USlateTabManagerContext_NoRegister()
{
	return USlateTabManagerContext::StaticClass();
}
struct Z_Construct_UClass_USlateTabManagerContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/ToolMenuContext.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateTabManagerContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlateTabManagerContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UToolMenuContextBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateTabManagerContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateTabManagerContext_Statics::ClassParams = {
	&USlateTabManagerContext::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateTabManagerContext_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateTabManagerContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateTabManagerContext()
{
	if (!Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton, Z_Construct_UClass_USlateTabManagerContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<USlateTabManagerContext>()
{
	return USlateTabManagerContext::StaticClass();
}
USlateTabManagerContext::USlateTabManagerContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateTabManagerContext);
USlateTabManagerContext::~USlateTabManagerContext() {}
// End Class USlateTabManagerContext

// Begin ScriptStruct FToolMenuContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuContext;
class UScriptStruct* FToolMenuContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuContext, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuContext"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuContext.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuContext>()
{
	return FToolMenuContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenuContext.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects_Inner = { "ContextObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects = { "ContextObjects", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuContext, ContextObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObjects_MetaData), NewProp_ContextObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuContext",
	Z_Construct_UScriptStruct_FToolMenuContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuContext_Statics::PropPointers),
	sizeof(FToolMenuContext),
	alignof(FToolMenuContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuContext.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuContext.InnerSingleton;
}
// End ScriptStruct FToolMenuContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToolMenuContext::StaticStruct, Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewStructOps, TEXT("ToolMenuContext"), &Z_Registration_Info_UScriptStruct_ToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuContext), 1834469202U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuContextBase, UToolMenuContextBase::StaticClass, TEXT("UToolMenuContextBase"), &Z_Registration_Info_UClass_UToolMenuContextBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuContextBase), 3815716984U) },
		{ Z_Construct_UClass_USlateTabManagerContext, USlateTabManagerContext::StaticClass, TEXT("USlateTabManagerContext"), &Z_Registration_Info_UClass_USlateTabManagerContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateTabManagerContext), 1146236887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_180910839(TEXT("/Script/ToolMenus"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
