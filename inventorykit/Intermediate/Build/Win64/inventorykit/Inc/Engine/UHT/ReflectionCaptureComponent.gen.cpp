// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/ReflectionCaptureComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCaptureComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EReflectionSourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectionSourceType;
static UEnum* EReflectionSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReflectionSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReflectionSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectionSourceType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EReflectionSourceType"));
	}
	return Z_Registration_Info_UEnum_EReflectionSourceType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EReflectionSourceType>()
{
	return EReflectionSourceType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EReflectionSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CapturedScene.Comment", "/** Construct the reflection source from the captured scene*/" },
		{ "CapturedScene.Name", "EReflectionSourceType::CapturedScene" },
		{ "CapturedScene.ToolTip", "Construct the reflection source from the captured scene" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "SpecifiedCubemap.Comment", "/** Construct the reflection source from the specified cubemap. */" },
		{ "SpecifiedCubemap.Name", "EReflectionSourceType::SpecifiedCubemap" },
		{ "SpecifiedCubemap.ToolTip", "Construct the reflection source from the specified cubemap." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReflectionSourceType::CapturedScene", (int64)EReflectionSourceType::CapturedScene },
		{ "EReflectionSourceType::SpecifiedCubemap", (int64)EReflectionSourceType::SpecifiedCubemap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EReflectionSourceType",
	"EReflectionSourceType",
	Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType()
{
	if (!Z_Registration_Info_UEnum_EReflectionSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectionSourceType.InnerSingleton, Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReflectionSourceType.InnerSingleton;
}
// End Enum EReflectionSourceType

// Begin Class UReflectionCaptureComponent
void UReflectionCaptureComponent::StaticRegisterNativesUReflectionCaptureComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReflectionCaptureComponent);
UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister()
{
	return UReflectionCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UReflectionCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOffsetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionSourceType_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Indicates where to get the reflection source from. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Indicates where to get the reflection source from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** A brightness control to scale the captured scene's reflection intensity. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "A brightness control to scale the captured scene's reflection intensity." },
		{ "UIMax", "4" },
		{ "UIMin", ".5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOffset_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** World space offset to apply before capturing. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "World space offset to apply before capturing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataId_MetaData[] = {
		{ "Comment", "/** Guid for map build data */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Guid for map build data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureOffsetComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionSourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReflectionSourceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapBuildDataId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReflectionCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent = { "CaptureOffsetComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffsetComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureOffsetComponent_MetaData), NewProp_CaptureOffsetComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType = { "ReflectionSourceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReflectionCaptureComponent, ReflectionSourceType), Z_Construct_UEnum_Engine_EReflectionSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionSourceType_MetaData), NewProp_ReflectionSourceType_MetaData) }; // 2894035280
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReflectionCaptureComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cubemap_MetaData), NewProp_Cubemap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle = { "SourceCubemapAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReflectionCaptureComponent, SourceCubemapAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCubemapAngle_MetaData), NewProp_SourceCubemapAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReflectionCaptureComponent, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset = { "CaptureOffset", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureOffset_MetaData), NewProp_CaptureOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId = { "MapBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReflectionCaptureComponent, MapBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapBuildDataId_MetaData), NewProp_MapBuildDataId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReflectionCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::ClassParams = {
	&UReflectionCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers),
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReflectionCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UReflectionCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReflectionCaptureComponent.OuterSingleton, Z_Construct_UClass_UReflectionCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReflectionCaptureComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UReflectionCaptureComponent>()
{
	return UReflectionCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReflectionCaptureComponent);
UReflectionCaptureComponent::~UReflectionCaptureComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReflectionCaptureComponent)
// End Class UReflectionCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReflectionSourceType_StaticEnum, TEXT("EReflectionSourceType"), &Z_Registration_Info_UEnum_EReflectionSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2894035280U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReflectionCaptureComponent, UReflectionCaptureComponent::StaticClass, TEXT("UReflectionCaptureComponent"), &Z_Registration_Info_UClass_UReflectionCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReflectionCaptureComponent), 2211770684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_313139472(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
