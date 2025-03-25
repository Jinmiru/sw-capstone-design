// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterSourcesFloat() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoFloatParameterChange();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin ScriptStruct FGizmoFloatParameterChange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange;
class UScriptStruct* FGizmoFloatParameterChange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoFloatParameterChange, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoFloatParameterChange"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoFloatParameterChange>()
{
	return FGizmoFloatParameterChange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FGizmoVec2ParameterChange represents a change in the value of an IGizmoFloatParameterSource.\n * IGizmoFloatParameterSource implementations use this to track changes and emit delta information.\n */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "FGizmoVec2ParameterChange represents a change in the value of an IGizmoFloatParameterSource.\nIGizmoFloatParameterSource implementations use this to track changes and emit delta information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoFloatParameterChange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoFloatParameterChange, InitialValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialValue_MetaData), NewProp_InitialValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoFloatParameterChange, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentValue_MetaData), NewProp_CurrentValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"GizmoFloatParameterChange",
	Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers),
	sizeof(FGizmoFloatParameterChange),
	alignof(FGizmoFloatParameterChange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGizmoFloatParameterChange()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.InnerSingleton, Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.InnerSingleton;
}
// End ScriptStruct FGizmoFloatParameterChange

// Begin Class UGizmoBaseFloatParameterSource
void UGizmoBaseFloatParameterSource::StaticRegisterNativesUGizmoBaseFloatParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoBaseFloatParameterSource);
UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister()
{
	return UGizmoBaseFloatParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseFloatParameterSource is a base implementation of IGizmoFloatParameterSource,\n * which is not functional but adds an OnParameterChanged delegate for further subclasses.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesFloat.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "UGizmoBaseFloatParameterSource is a base implementation of IGizmoFloatParameterSource,\nwhich is not functional but adds an OnParameterChanged delegate for further subclasses." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseFloatParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoBaseFloatParameterSource, IGizmoFloatParameterSource), false },  // 198941257
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::ClassParams = {
	&UGizmoBaseFloatParameterSource::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseFloatParameterSource>()
{
	return UGizmoBaseFloatParameterSource::StaticClass();
}
UGizmoBaseFloatParameterSource::UGizmoBaseFloatParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseFloatParameterSource);
UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource() {}
// End Class UGizmoBaseFloatParameterSource

// Begin Class UGizmoLocalFloatParameterSource
void UGizmoLocalFloatParameterSource::StaticRegisterNativesUGizmoLocalFloatParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoLocalFloatParameterSource);
UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister()
{
	return UGizmoLocalFloatParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoLocalFloatParameterSource is an implementation of IGizmoFloatParameterSource\n * (by way of UGizmoBaseFloatParameterSource) which locally stores the relevant Parameter\n * and emits update events via the OnParameterChanged delegate.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesFloat.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "UGizmoLocalFloatParameterSource is an implementation of IGizmoFloatParameterSource\n(by way of UGizmoBaseFloatParameterSource) which locally stores the relevant Parameter\nand emits update events via the OnParameterChanged delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLocalFloatParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLocalFloatParameterSource, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLocalFloatParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChange_MetaData), NewProp_LastChange_MetaData) }; // 2847661089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::ClassParams = {
	&UGizmoLocalFloatParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLocalFloatParameterSource>()
{
	return UGizmoLocalFloatParameterSource::StaticClass();
}
UGizmoLocalFloatParameterSource::UGizmoLocalFloatParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLocalFloatParameterSource);
UGizmoLocalFloatParameterSource::~UGizmoLocalFloatParameterSource() {}
// End Class UGizmoLocalFloatParameterSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGizmoFloatParameterChange::StaticStruct, Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewStructOps, TEXT("GizmoFloatParameterChange"), &Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoFloatParameterChange), 2847661089U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoBaseFloatParameterSource, UGizmoBaseFloatParameterSource::StaticClass, TEXT("UGizmoBaseFloatParameterSource"), &Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoBaseFloatParameterSource), 4142431465U) },
		{ Z_Construct_UClass_UGizmoLocalFloatParameterSource, UGizmoLocalFloatParameterSource::StaticClass, TEXT("UGizmoLocalFloatParameterSource"), &Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoLocalFloatParameterSource), 3049493395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_3473533882(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
