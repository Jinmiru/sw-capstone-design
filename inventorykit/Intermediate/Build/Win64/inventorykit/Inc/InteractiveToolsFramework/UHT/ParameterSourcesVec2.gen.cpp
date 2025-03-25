// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesVec2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterSourcesVec2() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin ScriptStruct FGizmoVec2ParameterChange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange;
class UScriptStruct* FGizmoVec2ParameterChange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoVec2ParameterChange"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoVec2ParameterChange>()
{
	return FGizmoVec2ParameterChange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FGizmoVec2ParameterChange represents a change in the value of an IGizmoVec2ParameterSource.\n * IGizmoVec2ParameterSource implementations use this to track changes and emit delta information.\n */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "FGizmoVec2ParameterChange represents a change in the value of an IGizmoVec2ParameterSource.\nIGizmoVec2ParameterSource implementations use this to track changes and emit delta information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoVec2ParameterChange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoVec2ParameterChange, InitialValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialValue_MetaData), NewProp_InitialValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoVec2ParameterChange, CurrentValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentValue_MetaData), NewProp_CurrentValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"GizmoVec2ParameterChange",
	Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers),
	sizeof(FGizmoVec2ParameterChange),
	alignof(FGizmoVec2ParameterChange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.InnerSingleton, Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.InnerSingleton;
}
// End ScriptStruct FGizmoVec2ParameterChange

// Begin Class UGizmoBaseVec2ParameterSource
void UGizmoBaseVec2ParameterSource::StaticRegisterNativesUGizmoBaseVec2ParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoBaseVec2ParameterSource);
UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister()
{
	return UGizmoBaseVec2ParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseVec2ParameterSource is a base implementation of IGizmoVec2ParameterSource,\n * which is not functional but adds an OnParameterChanged delegate for further subclasses.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesVec2.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "UGizmoBaseVec2ParameterSource is a base implementation of IGizmoVec2ParameterSource,\nwhich is not functional but adds an OnParameterChanged delegate for further subclasses." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseVec2ParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoBaseVec2ParameterSource, IGizmoVec2ParameterSource), false },  // 783678321
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::ClassParams = {
	&UGizmoBaseVec2ParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseVec2ParameterSource>()
{
	return UGizmoBaseVec2ParameterSource::StaticClass();
}
UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseVec2ParameterSource);
UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource() {}
// End Class UGizmoBaseVec2ParameterSource

// Begin Class UGizmoLocalVec2ParameterSource
void UGizmoLocalVec2ParameterSource::StaticRegisterNativesUGizmoLocalVec2ParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoLocalVec2ParameterSource);
UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister()
{
	return UGizmoLocalVec2ParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseVec2ParameterSource is an implementation of IGizmoVec2ParameterSource \n * (by way of UGizmoBaseVec2ParameterSource) which locally stores the relevant Parameter\n * and emits update events via the OnParameterChanged delegate.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesVec2.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "UGizmoBaseVec2ParameterSource is an implementation of IGizmoVec2ParameterSource\n(by way of UGizmoBaseVec2ParameterSource) which locally stores the relevant Parameter\nand emits update events via the OnParameterChanged delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLocalVec2ParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLocalVec2ParameterSource, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLocalVec2ParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChange_MetaData), NewProp_LastChange_MetaData) }; // 1789057421
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::ClassParams = {
	&UGizmoLocalVec2ParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLocalVec2ParameterSource>()
{
	return UGizmoLocalVec2ParameterSource::StaticClass();
}
UGizmoLocalVec2ParameterSource::UGizmoLocalVec2ParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLocalVec2ParameterSource);
UGizmoLocalVec2ParameterSource::~UGizmoLocalVec2ParameterSource() {}
// End Class UGizmoLocalVec2ParameterSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGizmoVec2ParameterChange::StaticStruct, Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewStructOps, TEXT("GizmoVec2ParameterChange"), &Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoVec2ParameterChange), 1789057421U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoBaseVec2ParameterSource, UGizmoBaseVec2ParameterSource::StaticClass, TEXT("UGizmoBaseVec2ParameterSource"), &Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoBaseVec2ParameterSource), 2622969986U) },
		{ Z_Construct_UClass_UGizmoLocalVec2ParameterSource, UGizmoLocalVec2ParameterSource::StaticClass, TEXT("UGizmoLocalVec2ParameterSource"), &Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoLocalVec2ParameterSource), 1126939654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_2565195901(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
