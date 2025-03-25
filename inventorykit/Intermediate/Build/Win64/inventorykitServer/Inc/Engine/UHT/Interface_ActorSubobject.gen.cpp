// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_ActorSubobject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_ActorSubobject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UInterface_ActorSubobject();
ENGINE_API UClass* Z_Construct_UClass_UInterface_ActorSubobject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UInterface_ActorSubobject
void UInterface_ActorSubobject::StaticRegisterNativesUInterface_ActorSubobject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_ActorSubobject);
UClass* Z_Construct_UClass_UInterface_ActorSubobject_NoRegister()
{
	return UInterface_ActorSubobject::StaticClass();
}
struct Z_Construct_UClass_UInterface_ActorSubobject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_ActorSubobject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_ActorSubobject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_ActorSubobject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_ActorSubobject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_ActorSubobject_Statics::ClassParams = {
	&UInterface_ActorSubobject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_ActorSubobject_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_ActorSubobject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_ActorSubobject()
{
	if (!Z_Registration_Info_UClass_UInterface_ActorSubobject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_ActorSubobject.OuterSingleton, Z_Construct_UClass_UInterface_ActorSubobject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_ActorSubobject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterface_ActorSubobject>()
{
	return UInterface_ActorSubobject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_ActorSubobject);
UInterface_ActorSubobject::~UInterface_ActorSubobject() {}
// End Interface UInterface_ActorSubobject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_ActorSubobject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_ActorSubobject, UInterface_ActorSubobject::StaticClass, TEXT("UInterface_ActorSubobject"), &Z_Registration_Info_UClass_UInterface_ActorSubobject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_ActorSubobject), 1158831750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_ActorSubobject_h_512987271(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_ActorSubobject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_ActorSubobject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
