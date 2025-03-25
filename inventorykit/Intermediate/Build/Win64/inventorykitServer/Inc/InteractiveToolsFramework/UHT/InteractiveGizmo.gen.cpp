// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveGizmo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UInteractiveGizmo
void UInteractiveGizmo::StaticRegisterNativesUInteractiveGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveGizmo);
UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister()
{
	return UInteractiveGizmo::StaticClass();
}
struct Z_Construct_UClass_UInteractiveGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveGizmo is the base class for all Gizmos in the InteractiveToolsFramework.\n *\n * @todo callback/delegate for if/when .InputBehaviors changes\n * @todo callback/delegate for when Gizmo properties change\n */" },
		{ "IncludePath", "InteractiveGizmo.h" },
		{ "ModuleRelativePath", "Public/InteractiveGizmo.h" },
		{ "ToolTip", "UInteractiveGizmo is the base class for all Gizmos in the InteractiveToolsFramework.\n\n@todo callback/delegate for if/when .InputBehaviors changes\n@todo callback/delegate for when Gizmo properties change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBehaviors_MetaData[] = {
		{ "Comment", "/** The current set of InputBehaviors provided by this Gizmo */" },
		{ "ModuleRelativePath", "Public/InteractiveGizmo.h" },
		{ "ToolTip", "The current set of InputBehaviors provided by this Gizmo" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputBehaviors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveGizmo_Statics::NewProp_InputBehaviors = { "InputBehaviors", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveGizmo, InputBehaviors), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBehaviors_MetaData), NewProp_InputBehaviors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmo_Statics::NewProp_InputBehaviors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractiveGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveGizmo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInputBehaviorSource_NoRegister, (int32)VTABLE_OFFSET(UInteractiveGizmo, IInputBehaviorSource), false },  // 1605045832
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveGizmo_Statics::ClassParams = {
	&UInteractiveGizmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractiveGizmo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveGizmo()
{
	if (!Z_Registration_Info_UClass_UInteractiveGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveGizmo.OuterSingleton, Z_Construct_UClass_UInteractiveGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveGizmo>()
{
	return UInteractiveGizmo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveGizmo);
UInteractiveGizmo::~UInteractiveGizmo() {}
// End Class UInteractiveGizmo

// Begin Enum ETransformGizmoSubElements
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformGizmoSubElements;
static UEnum* ETransformGizmoSubElements_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransformGizmoSubElements.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransformGizmoSubElements.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ETransformGizmoSubElements"));
	}
	return Z_Registration_Info_UEnum_ETransformGizmoSubElements.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ETransformGizmoSubElements>()
{
	return ETransformGizmoSubElements_StaticEnum();
}
struct Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * ETransformGizmoSubElements identifies the sub-elements of a standard 3-axis transformation Gizmo.\n * Used by GizmoManager to customize UCombinedTransformGizmo instances.\n */" },
		{ "FullTranslateRotateScale.Name", "ETransformGizmoSubElements::FullTranslateRotateScale" },
		{ "ModuleRelativePath", "Public/InteractiveGizmo.h" },
		{ "None.Name", "ETransformGizmoSubElements::None" },
		{ "RotateAllAxes.Name", "ETransformGizmoSubElements::RotateAllAxes" },
		{ "RotateAxisX.Name", "ETransformGizmoSubElements::RotateAxisX" },
		{ "RotateAxisY.Name", "ETransformGizmoSubElements::RotateAxisY" },
		{ "RotateAxisZ.Name", "ETransformGizmoSubElements::RotateAxisZ" },
		{ "ScaleAllAxes.Name", "ETransformGizmoSubElements::ScaleAllAxes" },
		{ "ScaleAllPlanes.Name", "ETransformGizmoSubElements::ScaleAllPlanes" },
		{ "ScaleAxisX.Name", "ETransformGizmoSubElements::ScaleAxisX" },
		{ "ScaleAxisY.Name", "ETransformGizmoSubElements::ScaleAxisY" },
		{ "ScaleAxisZ.Name", "ETransformGizmoSubElements::ScaleAxisZ" },
		{ "ScalePlaneXY.Name", "ETransformGizmoSubElements::ScalePlaneXY" },
		{ "ScalePlaneXZ.Name", "ETransformGizmoSubElements::ScalePlaneXZ" },
		{ "ScalePlaneYZ.Name", "ETransformGizmoSubElements::ScalePlaneYZ" },
		{ "ScaleUniform.Name", "ETransformGizmoSubElements::ScaleUniform" },
		{ "StandardTranslateRotate.Name", "ETransformGizmoSubElements::StandardTranslateRotate" },
		{ "ToolTip", "ETransformGizmoSubElements identifies the sub-elements of a standard 3-axis transformation Gizmo.\nUsed by GizmoManager to customize UCombinedTransformGizmo instances." },
		{ "TranslateAllAxes.Name", "ETransformGizmoSubElements::TranslateAllAxes" },
		{ "TranslateAllPlanes.Name", "ETransformGizmoSubElements::TranslateAllPlanes" },
		{ "TranslateAxisX.Name", "ETransformGizmoSubElements::TranslateAxisX" },
		{ "TranslateAxisY.Name", "ETransformGizmoSubElements::TranslateAxisY" },
		{ "TranslateAxisZ.Name", "ETransformGizmoSubElements::TranslateAxisZ" },
		{ "TranslatePlaneXY.Name", "ETransformGizmoSubElements::TranslatePlaneXY" },
		{ "TranslatePlaneXZ.Name", "ETransformGizmoSubElements::TranslatePlaneXZ" },
		{ "TranslatePlaneYZ.Name", "ETransformGizmoSubElements::TranslatePlaneYZ" },
		{ "TranslateRotateUniformScale.Name", "ETransformGizmoSubElements::TranslateRotateUniformScale" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransformGizmoSubElements::None", (int64)ETransformGizmoSubElements::None },
		{ "ETransformGizmoSubElements::TranslateAxisX", (int64)ETransformGizmoSubElements::TranslateAxisX },
		{ "ETransformGizmoSubElements::TranslateAxisY", (int64)ETransformGizmoSubElements::TranslateAxisY },
		{ "ETransformGizmoSubElements::TranslateAxisZ", (int64)ETransformGizmoSubElements::TranslateAxisZ },
		{ "ETransformGizmoSubElements::TranslateAllAxes", (int64)ETransformGizmoSubElements::TranslateAllAxes },
		{ "ETransformGizmoSubElements::TranslatePlaneXY", (int64)ETransformGizmoSubElements::TranslatePlaneXY },
		{ "ETransformGizmoSubElements::TranslatePlaneXZ", (int64)ETransformGizmoSubElements::TranslatePlaneXZ },
		{ "ETransformGizmoSubElements::TranslatePlaneYZ", (int64)ETransformGizmoSubElements::TranslatePlaneYZ },
		{ "ETransformGizmoSubElements::TranslateAllPlanes", (int64)ETransformGizmoSubElements::TranslateAllPlanes },
		{ "ETransformGizmoSubElements::RotateAxisX", (int64)ETransformGizmoSubElements::RotateAxisX },
		{ "ETransformGizmoSubElements::RotateAxisY", (int64)ETransformGizmoSubElements::RotateAxisY },
		{ "ETransformGizmoSubElements::RotateAxisZ", (int64)ETransformGizmoSubElements::RotateAxisZ },
		{ "ETransformGizmoSubElements::RotateAllAxes", (int64)ETransformGizmoSubElements::RotateAllAxes },
		{ "ETransformGizmoSubElements::ScaleAxisX", (int64)ETransformGizmoSubElements::ScaleAxisX },
		{ "ETransformGizmoSubElements::ScaleAxisY", (int64)ETransformGizmoSubElements::ScaleAxisY },
		{ "ETransformGizmoSubElements::ScaleAxisZ", (int64)ETransformGizmoSubElements::ScaleAxisZ },
		{ "ETransformGizmoSubElements::ScaleAllAxes", (int64)ETransformGizmoSubElements::ScaleAllAxes },
		{ "ETransformGizmoSubElements::ScalePlaneYZ", (int64)ETransformGizmoSubElements::ScalePlaneYZ },
		{ "ETransformGizmoSubElements::ScalePlaneXZ", (int64)ETransformGizmoSubElements::ScalePlaneXZ },
		{ "ETransformGizmoSubElements::ScalePlaneXY", (int64)ETransformGizmoSubElements::ScalePlaneXY },
		{ "ETransformGizmoSubElements::ScaleAllPlanes", (int64)ETransformGizmoSubElements::ScaleAllPlanes },
		{ "ETransformGizmoSubElements::ScaleUniform", (int64)ETransformGizmoSubElements::ScaleUniform },
		{ "ETransformGizmoSubElements::StandardTranslateRotate", (int64)ETransformGizmoSubElements::StandardTranslateRotate },
		{ "ETransformGizmoSubElements::TranslateRotateUniformScale", (int64)ETransformGizmoSubElements::TranslateRotateUniformScale },
		{ "ETransformGizmoSubElements::FullTranslateRotateScale", (int64)ETransformGizmoSubElements::FullTranslateRotateScale },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	"ETransformGizmoSubElements",
	"ETransformGizmoSubElements",
	Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements()
{
	if (!Z_Registration_Info_UEnum_ETransformGizmoSubElements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformGizmoSubElements.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransformGizmoSubElements.InnerSingleton;
}
// End Enum ETransformGizmoSubElements

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETransformGizmoSubElements_StaticEnum, TEXT("ETransformGizmoSubElements"), &Z_Registration_Info_UEnum_ETransformGizmoSubElements, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2286609166U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveGizmo, UInteractiveGizmo::StaticClass, TEXT("UInteractiveGizmo"), &Z_Registration_Info_UClass_UInteractiveGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveGizmo), 1943952937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_2074211401(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
