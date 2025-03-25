// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/NamedInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedInterfaces() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UNamedInterfaces();
ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UNamedInterfaces_NoRegister();
ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNamedInterface();
ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNamedInterfaceDef();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
// End Cross Module References

// Begin ScriptStruct FNamedInterface
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedInterface;
class UScriptStruct* FNamedInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedInterface, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("NamedInterface"));
	}
	return Z_Registration_Info_UScriptStruct_NamedInterface.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FNamedInterface>()
{
	return FNamedInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds a named object interface for dynamically bound interfaces */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds a named object interface for dynamically bound interfaces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceName_MetaData[] = {
		{ "Comment", "/** The name to bind this object to */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The name to bind this object to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceObject_MetaData[] = {
		{ "Comment", "/** The object to store at this location */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The object to store at this location" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterfaceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedInterface, InterfaceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceName_MetaData), NewProp_InterfaceName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject = { "InterfaceObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedInterface, InterfaceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceObject_MetaData), NewProp_InterfaceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
	nullptr,
	&NewStructOps,
	"NamedInterface",
	Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers),
	sizeof(FNamedInterface),
	alignof(FNamedInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedInterface()
{
	if (!Z_Registration_Info_UScriptStruct_NamedInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedInterface.InnerSingleton, Z_Construct_UScriptStruct_FNamedInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedInterface.InnerSingleton;
}
// End ScriptStruct FNamedInterface

// Begin ScriptStruct FNamedInterfaceDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedInterfaceDef;
class UScriptStruct* FNamedInterfaceDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedInterfaceDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedInterfaceDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedInterfaceDef, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("NamedInterfaceDef"));
	}
	return Z_Registration_Info_UScriptStruct_NamedInterfaceDef.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FNamedInterfaceDef>()
{
	return FNamedInterfaceDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds a name to class name mapping for adding the named interfaces automatically */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds a name to class name mapping for adding the named interfaces automatically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceName_MetaData[] = {
		{ "Comment", "/** The name to bind this object to */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The name to bind this object to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceClassName_MetaData[] = {
		{ "Comment", "/** The class to load and create for the named interface */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The class to load and create for the named interface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InterfaceClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedInterfaceDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedInterfaceDef, InterfaceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceName_MetaData), NewProp_InterfaceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName = { "InterfaceClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedInterfaceDef, InterfaceClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceClassName_MetaData), NewProp_InterfaceClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
	nullptr,
	&NewStructOps,
	"NamedInterfaceDef",
	Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers),
	sizeof(FNamedInterfaceDef),
	alignof(FNamedInterfaceDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedInterfaceDef()
{
	if (!Z_Registration_Info_UScriptStruct_NamedInterfaceDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedInterfaceDef.InnerSingleton, Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedInterfaceDef.InnerSingleton;
}
// End ScriptStruct FNamedInterfaceDef

// Begin Class UNamedInterfaces
void UNamedInterfaces::StaticRegisterNativesUNamedInterfaces()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNamedInterfaces);
UClass* Z_Construct_UClass_UNamedInterfaces_NoRegister()
{
	return UNamedInterfaces::StaticClass();
}
struct Z_Construct_UClass_UNamedInterfaces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Named interfaces are a registry of UObjects accessible by an FName key that will persist for the lifetime of the process\n */" },
		{ "IncludePath", "NamedInterfaces.h" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Named interfaces are a registry of UObjects accessible by an FName key that will persist for the lifetime of the process" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedInterfaces_MetaData[] = {
		{ "Comment", "/** Holds the set of registered named interfaces */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds the set of registered named interfaces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedInterfaceDefs_MetaData[] = {
		{ "Comment", "/** The list of named interfaces to automatically create and store */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The list of named interfaces to automatically create and store" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamedInterfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedInterfaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamedInterfaceDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedInterfaceDefs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamedInterfaces>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_Inner = { "NamedInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedInterface, METADATA_PARAMS(0, nullptr) }; // 3212723677
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces = { "NamedInterfaces", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNamedInterfaces, NamedInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedInterfaces_MetaData), NewProp_NamedInterfaces_MetaData) }; // 3212723677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_Inner = { "NamedInterfaceDefs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedInterfaceDef, METADATA_PARAMS(0, nullptr) }; // 152716167
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs = { "NamedInterfaceDefs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNamedInterfaces, NamedInterfaceDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedInterfaceDefs_MetaData), NewProp_NamedInterfaceDefs_MetaData) }; // 152716167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNamedInterfaces_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamedInterfaces_Statics::ClassParams = {
	&UNamedInterfaces::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::Class_MetaDataParams), Z_Construct_UClass_UNamedInterfaces_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNamedInterfaces()
{
	if (!Z_Registration_Info_UClass_UNamedInterfaces.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamedInterfaces.OuterSingleton, Z_Construct_UClass_UNamedInterfaces_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNamedInterfaces.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UClass* StaticClass<UNamedInterfaces>()
{
	return UNamedInterfaces::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedInterfaces);
UNamedInterfaces::~UNamedInterfaces() {}
// End Class UNamedInterfaces

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNamedInterface::StaticStruct, Z_Construct_UScriptStruct_FNamedInterface_Statics::NewStructOps, TEXT("NamedInterface"), &Z_Registration_Info_UScriptStruct_NamedInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedInterface), 3212723677U) },
		{ FNamedInterfaceDef::StaticStruct, Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewStructOps, TEXT("NamedInterfaceDef"), &Z_Registration_Info_UScriptStruct_NamedInterfaceDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedInterfaceDef), 152716167U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNamedInterfaces, UNamedInterfaces::StaticClass, TEXT("UNamedInterfaces"), &Z_Registration_Info_UClass_UNamedInterfaces, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamedInterfaces), 327512616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_1790386184(TEXT("/Script/OnlineSubsystem"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
