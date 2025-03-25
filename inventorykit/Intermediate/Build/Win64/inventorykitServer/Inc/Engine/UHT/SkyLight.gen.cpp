// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SkyLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyLight() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_ASkyLight();
ENGINE_API UClass* Z_Construct_UClass_ASkyLight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ASkyLight Function OnRep_bEnabled
struct Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyLight, nullptr, "OnRep_bEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASkyLight_OnRep_bEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkyLight::execOnRep_bEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bEnabled();
	P_NATIVE_END;
}
// End Class ASkyLight Function OnRep_bEnabled

// Begin Class ASkyLight
void ASkyLight::StaticRegisterNativesASkyLight()
{
	UClass* Class = ASkyLight::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_bEnabled", &ASkyLight::execOnRep_bEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkyLight);
UClass* Z_Construct_UClass_ASkyLight_NoRegister()
{
	return ASkyLight::StaticClass();
}
struct Z_Construct_UClass_ASkyLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "HideCategories", "Input Collision Replication Info Input Movement Collision Transformation HLOD WorldPartition" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SkyLight.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Light" },
		{ "Comment", "/** @todo document */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Light,Rendering,Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** replicated copy of LightComponent's bEnabled property */" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "replicated copy of LightComponent's bEnabled property" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightComponent;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkyLight_OnRep_bEnabled, "OnRep_bEnabled" }, // 1780970791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkyLight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent = { "LightComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkyLight, LightComponent), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightComponent_MetaData), NewProp_LightComponent_MetaData) };
void Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ASkyLight*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ASkyLight), &Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkyLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASkyLight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkyLight_Statics::ClassParams = {
	&ASkyLight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASkyLight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::Class_MetaDataParams), Z_Construct_UClass_ASkyLight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASkyLight()
{
	if (!Z_Registration_Info_UClass_ASkyLight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkyLight.OuterSingleton, Z_Construct_UClass_ASkyLight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASkyLight.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ASkyLight>()
{
	return ASkyLight::StaticClass();
}
void ASkyLight::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bEnabled(TEXT("bEnabled"));
	const bool bIsValid = true
		&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASkyLight"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASkyLight);
ASkyLight::~ASkyLight() {}
// End Class ASkyLight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASkyLight, ASkyLight::StaticClass, TEXT("ASkyLight"), &Z_Registration_Info_UClass_ASkyLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkyLight), 3977186590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_2739296443(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
