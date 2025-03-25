// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/FoliageType_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_Actor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_Actor();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class UFoliageType_Actor
void UFoliageType_Actor::StaticRegisterNativesUFoliageType_Actor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageType_Actor);
UClass* Z_Construct_UClass_UFoliageType_Actor_NoRegister()
{
	return UFoliageType_Actor::StaticClass();
}
struct Z_Construct_UClass_UFoliageType_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FoliageType_Actor.h" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAttachToBaseComponent_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshOnly_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
		{ "ToolTip", "If enabled, will place an instanced static mesh representation of this actor without placing an actual actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshOnlyComponentClass_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bStaticMeshOnly" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static void NewProp_bShouldAttachToBaseComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAttachToBaseComponent;
	static void NewProp_bStaticMeshOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshOnly;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StaticMeshOnlyComponentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType_Actor, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
void Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_SetBit(void* Obj)
{
	((UFoliageType_Actor*)Obj)->bShouldAttachToBaseComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent = { "bShouldAttachToBaseComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFoliageType_Actor), &Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAttachToBaseComponent_MetaData), NewProp_bShouldAttachToBaseComponent_MetaData) };
void Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly_SetBit(void* Obj)
{
	((UFoliageType_Actor*)Obj)->bStaticMeshOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly = { "bStaticMeshOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFoliageType_Actor), &Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticMeshOnly_MetaData), NewProp_bStaticMeshOnly_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_StaticMeshOnlyComponentClass = { "StaticMeshOnlyComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType_Actor, StaticMeshOnlyComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshOnlyComponentClass_MetaData), NewProp_StaticMeshOnlyComponentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_StaticMeshOnlyComponentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFoliageType_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFoliageType,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_Actor_Statics::ClassParams = {
	&UFoliageType_Actor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_UFoliageType_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFoliageType_Actor()
{
	if (!Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton, Z_Construct_UClass_UFoliageType_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UFoliageType_Actor>()
{
	return UFoliageType_Actor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_Actor);
UFoliageType_Actor::~UFoliageType_Actor() {}
// End Class UFoliageType_Actor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageType_Actor, UFoliageType_Actor::StaticClass, TEXT("UFoliageType_Actor"), &Z_Registration_Info_UClass_UFoliageType_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageType_Actor), 1468072491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_3102184142(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
