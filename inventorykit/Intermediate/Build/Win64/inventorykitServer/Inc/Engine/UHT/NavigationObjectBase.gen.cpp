// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationObjectBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase();
ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ANavigationObjectBase
void ANavigationObjectBase::StaticRegisterNativesANavigationObjectBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationObjectBase);
UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister()
{
	return ANavigationObjectBase::StaticClass();
}
struct Z_Construct_UClass_ANavigationObjectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Lighting LightColor Force" },
		{ "IncludePath", "Engine/NavigationObjectBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoodSprite_MetaData[] = {
		{ "Comment", "/** Normal editor sprite. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "Normal editor sprite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BadSprite_MetaData[] = {
		{ "Comment", "/** Used to draw bad collision intersection in editor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "Used to draw bad collision intersection in editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPIEPlayerStart_MetaData[] = {
		{ "Comment", "/** True if this nav point was spawned to be a PIE player start. */" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "True if this nav point was spawned to be a PIE player start." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoodSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BadSprite;
	static void NewProp_bIsPIEPlayerStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPIEPlayerStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationObjectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationObjectBase, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComponent_MetaData), NewProp_CapsuleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite = { "GoodSprite", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationObjectBase, GoodSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoodSprite_MetaData), NewProp_GoodSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite = { "BadSprite", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationObjectBase, BadSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BadSprite_MetaData), NewProp_BadSprite_MetaData) };
void Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_SetBit(void* Obj)
{
	((ANavigationObjectBase*)Obj)->bIsPIEPlayerStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart = { "bIsPIEPlayerStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationObjectBase), &Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPIEPlayerStart_MetaData), NewProp_bIsPIEPlayerStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavigationObjectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationObjectBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationObjectBase, INavAgentInterface), false },  // 3971589188
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationObjectBase_Statics::ClassParams = {
	&ANavigationObjectBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigationObjectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigationObjectBase()
{
	if (!Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton, Z_Construct_UClass_ANavigationObjectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ANavigationObjectBase>()
{
	return ANavigationObjectBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationObjectBase);
ANavigationObjectBase::~ANavigationObjectBase() {}
// End Class ANavigationObjectBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationObjectBase, ANavigationObjectBase::StaticClass, TEXT("ANavigationObjectBase"), &Z_Registration_Info_UClass_ANavigationObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationObjectBase), 713332639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_4030175299(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
