// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeMeshProxyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshProxyComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeMeshProxyComponent
void ULandscapeMeshProxyComponent::StaticRegisterNativesULandscapeMeshProxyComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeMeshProxyComponent);
UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister()
{
	return ULandscapeMeshProxyComponent::StaticClass();
}
struct Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "LandscapeMeshProxyComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[] = {
		{ "Comment", "/* The landscape this proxy was generated for */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "The landscape this proxy was generated for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyComponentBases_MetaData[] = {
		{ "Comment", "/* The section coordinates of the landscape components that this proxy was generated for.  Used to register with LandscapeRender when LODGroupKey == 0 */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "The section coordinates of the landscape components that this proxy was generated for.  Used to register with LandscapeRender when LODGroupKey == 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyComponentCentersObjectSpace_MetaData[] = {
		{ "Comment", "/* The center of the landscape components that this proxy was generated for, in local component space.  Used to register with LandscapeRender when LODGroupKey != 0 */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "The center of the landscape components that this proxy was generated for, in local component space.  Used to register with LandscapeRender when LODGroupKey != 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentXVectorObjectSpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentYVectorObjectSpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentResolution_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyLOD_MetaData[] = {
		{ "Comment", "/* LOD level this proxy was generated for */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "LOD level this proxy was generated for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODGroupKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyComponentBases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProxyComponentBases;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyComponentCentersObjectSpace_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProxyComponentCentersObjectSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentXVectorObjectSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentYVectorObjectSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentResolution;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ProxyLOD;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LODGroupKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMeshProxyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeGuid_MetaData), NewProp_LandscapeGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_Inner = { "ProxyComponentBases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases = { "ProxyComponentBases", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyComponentBases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyComponentBases_MetaData), NewProp_ProxyComponentBases_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentCentersObjectSpace_Inner = { "ProxyComponentCentersObjectSpace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentCentersObjectSpace = { "ProxyComponentCentersObjectSpace", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyComponentCentersObjectSpace), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyComponentCentersObjectSpace_MetaData), NewProp_ProxyComponentCentersObjectSpace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ComponentXVectorObjectSpace = { "ComponentXVectorObjectSpace", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ComponentXVectorObjectSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentXVectorObjectSpace_MetaData), NewProp_ComponentXVectorObjectSpace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ComponentYVectorObjectSpace = { "ComponentYVectorObjectSpace", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ComponentYVectorObjectSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentYVectorObjectSpace_MetaData), NewProp_ComponentYVectorObjectSpace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ComponentResolution = { "ComponentResolution", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ComponentResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentResolution_MetaData), NewProp_ComponentResolution_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD = { "ProxyLOD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyLOD_MetaData), NewProp_ProxyLOD_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LODGroupKey = { "LODGroupKey", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, LODGroupKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODGroupKey_MetaData), NewProp_LODGroupKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentCentersObjectSpace_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentCentersObjectSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ComponentXVectorObjectSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ComponentYVectorObjectSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ComponentResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LODGroupKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::ClassParams = {
	&ULandscapeMeshProxyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent()
{
	if (!Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.OuterSingleton, Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMeshProxyComponent>()
{
	return ULandscapeMeshProxyComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMeshProxyComponent);
ULandscapeMeshProxyComponent::~ULandscapeMeshProxyComponent() {}
// End Class ULandscapeMeshProxyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeMeshProxyComponent, ULandscapeMeshProxyComponent::StaticClass, TEXT("ULandscapeMeshProxyComponent"), &Z_Registration_Info_UClass_ULandscapeMeshProxyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeMeshProxyComponent), 3706961904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_2080599737(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
