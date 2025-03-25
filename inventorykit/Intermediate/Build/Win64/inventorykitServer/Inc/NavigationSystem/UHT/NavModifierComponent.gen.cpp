// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavModifierComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavModifierComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationDataResolution();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavModifierComponent Function SetAreaClass
struct Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics
{
	struct NavModifierComponent_eventSetAreaClass_Parms
	{
		TSubclassOf<UNavArea> NewAreaClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAreaClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NewProp_NewAreaClass = { "NewAreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavModifierComponent_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NewProp_NewAreaClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavModifierComponent, nullptr, "SetAreaClass", nullptr, nullptr, Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NavModifierComponent_eventSetAreaClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NavModifierComponent_eventSetAreaClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavModifierComponent_SetAreaClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavModifierComponent::execSetAreaClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewAreaClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAreaClass(Z_Param_NewAreaClass);
	P_NATIVE_END;
}
// End Class UNavModifierComponent Function SetAreaClass

// Begin Class UNavModifierComponent
void UNavModifierComponent::StaticRegisterNativesUNavModifierComponent()
{
	UClass* Class = UNavModifierComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAreaClass", &UNavModifierComponent::execSetAreaClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavModifierComponent);
UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister()
{
	return UNavModifierComponent::StaticClass();
}
struct Z_Construct_UClass_UNavModifierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Activation" },
		{ "IncludePath", "NavModifierComponent.h" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailsafeExtent_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** box extent used ONLY when owning actor doesn't have collision component */" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
		{ "ToolTip", "box extent used ONLY when owning actor doesn't have collision component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshResolution_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Experimental: Indicates which navmesh resolution should be used around the actor. */" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
		{ "ToolTip", "Experimental: Indicates which navmesh resolution should be used around the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeAgentHeight_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Setting to 'true' will result in expanding lower bounding box of the nav \n\x09 *\x09modifier by agent's height, before applying to navmesh */" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
		{ "ToolTip", "Setting to 'true' will result in expanding lower bounding box of the nav\n    modifier by agent's height, before applying to navmesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailsafeExtent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NavMeshResolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NavMeshResolution;
	static void NewProp_bIncludeAgentHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAgentHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavModifierComponent_SetAreaClass, "SetAreaClass" }, // 1119330964
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavModifierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavModifierComponent, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClass_MetaData), NewProp_AreaClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent = { "FailsafeExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavModifierComponent, FailsafeExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailsafeExtent_MetaData), NewProp_FailsafeExtent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_NavMeshResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_NavMeshResolution = { "NavMeshResolution", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavModifierComponent, NavMeshResolution), Z_Construct_UEnum_Engine_ENavigationDataResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshResolution_MetaData), NewProp_NavMeshResolution_MetaData) }; // 3038167996
void Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_SetBit(void* Obj)
{
	((UNavModifierComponent*)Obj)->bIncludeAgentHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight = { "bIncludeAgentHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavModifierComponent), &Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeAgentHeight_MetaData), NewProp_bIncludeAgentHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_NavMeshResolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_NavMeshResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavModifierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavRelevantComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavModifierComponent_Statics::ClassParams = {
	&UNavModifierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers),
	0,
	0x00A800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavModifierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavModifierComponent()
{
	if (!Z_Registration_Info_UClass_UNavModifierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavModifierComponent.OuterSingleton, Z_Construct_UClass_UNavModifierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavModifierComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavModifierComponent>()
{
	return UNavModifierComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavModifierComponent);
UNavModifierComponent::~UNavModifierComponent() {}
// End Class UNavModifierComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavModifierComponent, UNavModifierComponent::StaticClass, TEXT("UNavModifierComponent"), &Z_Registration_Info_UClass_UNavModifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavModifierComponent), 3422263259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_1467905487(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
