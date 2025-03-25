// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ObjectLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary();
ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UObjectLibrary
void UObjectLibrary::StaticRegisterNativesUObjectLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectLibrary);
UClass* Z_Construct_UClass_UObjectLibrary_NoRegister()
{
	return UObjectLibrary::StaticClass();
}
struct Z_Construct_UClass_UObjectLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Class that holds a library of Objects */" },
		{ "IncludePath", "Engine/ObjectLibrary.h" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "Class that holds a library of Objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBaseClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "ObjectLibrary" },
		{ "Comment", "/** Class that Objects must be of. If ContainsBlueprints is true, this is the native class that the blueprints are instances of and not UClass  */" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "Class that Objects must be of. If ContainsBlueprints is true, this is the native class that the blueprints are instances of and not UClass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[] = {
		{ "Category", "ObjectLibrary" },
		{ "Comment", "/** True if this library holds blueprint classes, false if it holds other objects */" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "True if this library holds blueprint classes, false if it holds other objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "Category", "ObjectLibrary" },
		{ "Comment", "/** List of Objects in library */" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "List of Objects in library" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjects_MetaData[] = {
		{ "Comment", "/** Weak pointers to objects */" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "Weak pointers to objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWeakReferences_MetaData[] = {
		{ "Comment", "/** If this library should use weak pointers */" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "If this library should use weak pointers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFullyLoaded_MetaData[] = {
		{ "Comment", "/** True if we've already fully loaded this library, can't do it twice */" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "True if we've already fully loaded this library, can't do it twice" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectBaseClass;
	static void NewProp_bHasBlueprintClasses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeakObjects;
	static void NewProp_bUseWeakReferences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWeakReferences;
	static void NewProp_bIsFullyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFullyLoaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_ObjectBaseClass = { "ObjectBaseClass", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectLibrary, ObjectBaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBaseClass_MetaData), NewProp_ObjectBaseClass_MetaData) };
void Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses_SetBit(void* Obj)
{
	((UObjectLibrary*)Obj)->bHasBlueprintClasses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses = { "bHasBlueprintClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UObjectLibrary), &Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBlueprintClasses_MetaData), NewProp_bHasBlueprintClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectLibrary, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects_Inner = { "WeakObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects = { "WeakObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectLibrary, WeakObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakObjects_MetaData), NewProp_WeakObjects_MetaData) };
void Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences_SetBit(void* Obj)
{
	((UObjectLibrary*)Obj)->bUseWeakReferences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences = { "bUseWeakReferences", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UObjectLibrary), &Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWeakReferences_MetaData), NewProp_bUseWeakReferences_MetaData) };
void Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded_SetBit(void* Obj)
{
	((UObjectLibrary*)Obj)->bIsFullyLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded = { "bIsFullyLoaded", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UObjectLibrary), &Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFullyLoaded_MetaData), NewProp_bIsFullyLoaded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_ObjectBaseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectLibrary_Statics::ClassParams = {
	&UObjectLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectLibrary()
{
	if (!Z_Registration_Info_UClass_UObjectLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectLibrary.OuterSingleton, Z_Construct_UClass_UObjectLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UObjectLibrary>()
{
	return UObjectLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectLibrary);
UObjectLibrary::~UObjectLibrary() {}
// End Class UObjectLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectLibrary, UObjectLibrary::StaticClass, TEXT("UObjectLibrary"), &Z_Registration_Info_UClass_UObjectLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectLibrary), 852324601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_2742414287(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
