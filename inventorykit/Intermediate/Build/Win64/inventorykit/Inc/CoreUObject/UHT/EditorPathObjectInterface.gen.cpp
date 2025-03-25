// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/Misc/EditorPathObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorPathObjectInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UEditorPathObjectInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UEditorPathObjectInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Interface UEditorPathObjectInterface
void UEditorPathObjectInterface::StaticRegisterNativesUEditorPathObjectInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorPathObjectInterface);
UClass* Z_Construct_UClass_UEditorPathObjectInterface_NoRegister()
{
	return UEditorPathObjectInterface::StaticClass();
}
struct Z_Construct_UClass_UEditorPathObjectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Misc/EditorPathObjectInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEditorPathObjectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditorPathObjectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPathObjectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorPathObjectInterface_Statics::ClassParams = {
	&UEditorPathObjectInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPathObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorPathObjectInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorPathObjectInterface()
{
	if (!Z_Registration_Info_UClass_UEditorPathObjectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorPathObjectInterface.OuterSingleton, Z_Construct_UClass_UEditorPathObjectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorPathObjectInterface.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UEditorPathObjectInterface>()
{
	return UEditorPathObjectInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorPathObjectInterface);
UEditorPathObjectInterface::~UEditorPathObjectInterface() {}
// End Interface UEditorPathObjectInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorPathObjectInterface, UEditorPathObjectInterface::StaticClass, TEXT("UEditorPathObjectInterface"), &Z_Registration_Info_UClass_UEditorPathObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorPathObjectInterface), 3995265237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_2303844962(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
