// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavRelevantComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavRelevantComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavRelevantComponent Function SetNavigationRelevancy
struct Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics
{
	struct NavRelevantComponent_eventSetNavigationRelevancy_Parms
	{
		bool bRelevant;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavRelevantComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRelevant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelevant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NewProp_bRelevant_SetBit(void* Obj)
{
	((NavRelevantComponent_eventSetNavigationRelevancy_Parms*)Obj)->bRelevant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NewProp_bRelevant = { "bRelevant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavRelevantComponent_eventSetNavigationRelevancy_Parms), &Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NewProp_bRelevant_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NewProp_bRelevant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavRelevantComponent, nullptr, "SetNavigationRelevancy", nullptr, nullptr, Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NavRelevantComponent_eventSetNavigationRelevancy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::NavRelevantComponent_eventSetNavigationRelevancy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavRelevantComponent::execSetNavigationRelevancy)
{
	P_GET_UBOOL(Z_Param_bRelevant);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationRelevancy(Z_Param_bRelevant);
	P_NATIVE_END;
}
// End Class UNavRelevantComponent Function SetNavigationRelevancy

// Begin Class UNavRelevantComponent
void UNavRelevantComponent::StaticRegisterNativesUNavRelevantComponent()
{
	UClass* Class = UNavRelevantComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetNavigationRelevancy", &UNavRelevantComponent::execSetNavigationRelevancy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavRelevantComponent);
UClass* Z_Construct_UClass_UNavRelevantComponent_NoRegister()
{
	return UNavRelevantComponent::StaticClass();
}
struct Z_Construct_UClass_UNavRelevantComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NavRelevantComponent.h" },
		{ "ModuleRelativePath", "Public/NavRelevantComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToOwnersRoot_MetaData[] = {
		{ "Comment", "/** attach navigation data to entry for owner's root component (depends on its relevancy) */" },
		{ "ModuleRelativePath", "Public/NavRelevantComponent.h" },
		{ "ToolTip", "attach navigation data to entry for owner's root component (depends on its relevancy)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedNavParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavRelevantComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAttachToOwnersRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToOwnersRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedNavParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy, "SetNavigationRelevancy" }, // 3750157923
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavRelevantComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot_SetBit(void* Obj)
{
	((UNavRelevantComponent*)Obj)->bAttachToOwnersRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot = { "bAttachToOwnersRoot", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavRelevantComponent), &Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachToOwnersRoot_MetaData), NewProp_bAttachToOwnersRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_CachedNavParent = { "CachedNavParent", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavRelevantComponent, CachedNavParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedNavParent_MetaData), NewProp_CachedNavParent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavRelevantComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_bAttachToOwnersRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavRelevantComponent_Statics::NewProp_CachedNavParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavRelevantComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavRelevantComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavRelevantComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavRelevantComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(UNavRelevantComponent, INavRelevantInterface), false },  // 2600625190
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavRelevantComponent_Statics::ClassParams = {
	&UNavRelevantComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavRelevantComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavRelevantComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavRelevantComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavRelevantComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavRelevantComponent()
{
	if (!Z_Registration_Info_UClass_UNavRelevantComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavRelevantComponent.OuterSingleton, Z_Construct_UClass_UNavRelevantComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavRelevantComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavRelevantComponent>()
{
	return UNavRelevantComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavRelevantComponent);
UNavRelevantComponent::~UNavRelevantComponent() {}
// End Class UNavRelevantComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavRelevantComponent, UNavRelevantComponent::StaticClass, TEXT("UNavRelevantComponent"), &Z_Registration_Info_UClass_UNavRelevantComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavRelevantComponent), 3619090808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_3924801196(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
