// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/AxisSources.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisSources() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantAxisSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoWorldAxisSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoWorldAxisSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoConstantAxisSource
void UGizmoConstantAxisSource::StaticRegisterNativesUGizmoConstantAxisSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoConstantAxisSource);
UClass* Z_Construct_UClass_UGizmoConstantAxisSource_NoRegister()
{
	return UGizmoConstantAxisSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoConstantAxisSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoConstantAxisSource is an IGizmoAxisSource implementation that\n * internally stores the Origin and Direction constants\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoConstantAxisSource is an IGizmoAxisSource implementation that\ninternally stores the Origin and Direction constants" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoConstantAxisSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoConstantAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoConstantAxisSource, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoConstantAxisSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoConstantAxisSource, IGizmoAxisSource), false },  // 2239720748
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::ClassParams = {
	&UGizmoConstantAxisSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoConstantAxisSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoConstantAxisSource()
{
	if (!Z_Registration_Info_UClass_UGizmoConstantAxisSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoConstantAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoConstantAxisSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoConstantAxisSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoConstantAxisSource>()
{
	return UGizmoConstantAxisSource::StaticClass();
}
UGizmoConstantAxisSource::UGizmoConstantAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoConstantAxisSource);
UGizmoConstantAxisSource::~UGizmoConstantAxisSource() {}
// End Class UGizmoConstantAxisSource

// Begin Class UGizmoConstantFrameAxisSource
void UGizmoConstantFrameAxisSource::StaticRegisterNativesUGizmoConstantFrameAxisSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoConstantFrameAxisSource);
UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister()
{
	return UGizmoConstantFrameAxisSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoConstantFrameAxisSource is an IGizmoAxisSource implementation that\n * internally stores the Origin, Direction, and X/Y Tangent constants.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoConstantFrameAxisSource is an IGizmoAxisSource implementation that\ninternally stores the Origin, Direction, and X/Y Tangent constants." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentY_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoConstantFrameAxisSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentX_MetaData), NewProp_TangentX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY = { "TangentY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, TangentY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentY_MetaData), NewProp_TangentY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoConstantFrameAxisSource, IGizmoAxisSource), false },  // 2239720748
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::ClassParams = {
	&UGizmoConstantFrameAxisSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource()
{
	if (!Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoConstantFrameAxisSource>()
{
	return UGizmoConstantFrameAxisSource::StaticClass();
}
UGizmoConstantFrameAxisSource::UGizmoConstantFrameAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoConstantFrameAxisSource);
UGizmoConstantFrameAxisSource::~UGizmoConstantFrameAxisSource() {}
// End Class UGizmoConstantFrameAxisSource

// Begin Class UGizmoWorldAxisSource
void UGizmoWorldAxisSource::StaticRegisterNativesUGizmoWorldAxisSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoWorldAxisSource);
UClass* Z_Construct_UClass_UGizmoWorldAxisSource_NoRegister()
{
	return UGizmoWorldAxisSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoWorldAxisSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoWorldAxisSource is an IGizmoAxisSource that provides one of the World axes\n * (ie X/Y/Z axes) based on an integer AxisIndex in range [0,2]. The Orgin is\n * internally stored as a FProperty.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoWorldAxisSource is an IGizmoAxisSource that provides one of the World axes\n(ie X/Y/Z axes) based on an integer AxisIndex in range [0,2]. The Orgin is\ninternally stored as a FProperty." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisIndex_MetaData[] = {
		{ "Comment", "/** Clamped internally to 0,1,2 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "Clamped internally to 0,1,2" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AxisIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoWorldAxisSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoWorldAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex = { "AxisIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoWorldAxisSource, AxisIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisIndex_MetaData), NewProp_AxisIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoWorldAxisSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoWorldAxisSource, IGizmoAxisSource), false },  // 2239720748
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::ClassParams = {
	&UGizmoWorldAxisSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoWorldAxisSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoWorldAxisSource()
{
	if (!Z_Registration_Info_UClass_UGizmoWorldAxisSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoWorldAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoWorldAxisSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoWorldAxisSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoWorldAxisSource>()
{
	return UGizmoWorldAxisSource::StaticClass();
}
UGizmoWorldAxisSource::UGizmoWorldAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoWorldAxisSource);
UGizmoWorldAxisSource::~UGizmoWorldAxisSource() {}
// End Class UGizmoWorldAxisSource

// Begin Class UGizmoComponentAxisSource
void UGizmoComponentAxisSource::StaticRegisterNativesUGizmoComponentAxisSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoComponentAxisSource);
UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister()
{
	return UGizmoComponentAxisSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoComponentAxisSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoComponentAxisSource is an IGizmoAxisSource implementation that provides one of the\n * X/Y/Z axes of a Component's local coordinate system, mapped to World, based on an integer AxisIndex in range [0,2].\n * The Axis Origin is the Component's transform origin. Tangent vectors are provided.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoComponentAxisSource is an IGizmoAxisSource implementation that provides one of the\nX/Y/Z axes of a Component's local coordinate system, mapped to World, based on an integer AxisIndex in range [0,2].\nThe Axis Origin is the Component's transform origin. Tangent vectors are provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisIndex_MetaData[] = {
		{ "Comment", "/** Clamped internally to 0,1,2 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "Clamped internally to 0,1,2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalAxes_MetaData[] = {
		{ "Comment", "/** If false, returns World axes */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "If false, returns World axes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AxisIndex;
	static void NewProp_bLocalAxes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalAxes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoComponentAxisSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoComponentAxisSource, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex = { "AxisIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoComponentAxisSource, AxisIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisIndex_MetaData), NewProp_AxisIndex_MetaData) };
void Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_SetBit(void* Obj)
{
	((UGizmoComponentAxisSource*)Obj)->bLocalAxes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes = { "bLocalAxes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoComponentAxisSource), &Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalAxes_MetaData), NewProp_bLocalAxes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoComponentAxisSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoComponentAxisSource, IGizmoAxisSource), false },  // 2239720748
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::ClassParams = {
	&UGizmoComponentAxisSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoComponentAxisSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoComponentAxisSource()
{
	if (!Z_Registration_Info_UClass_UGizmoComponentAxisSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoComponentAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoComponentAxisSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoComponentAxisSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoComponentAxisSource>()
{
	return UGizmoComponentAxisSource::StaticClass();
}
UGizmoComponentAxisSource::UGizmoComponentAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoComponentAxisSource);
UGizmoComponentAxisSource::~UGizmoComponentAxisSource() {}
// End Class UGizmoComponentAxisSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoConstantAxisSource, UGizmoConstantAxisSource::StaticClass, TEXT("UGizmoConstantAxisSource"), &Z_Registration_Info_UClass_UGizmoConstantAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoConstantAxisSource), 431041200U) },
		{ Z_Construct_UClass_UGizmoConstantFrameAxisSource, UGizmoConstantFrameAxisSource::StaticClass, TEXT("UGizmoConstantFrameAxisSource"), &Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoConstantFrameAxisSource), 1102663730U) },
		{ Z_Construct_UClass_UGizmoWorldAxisSource, UGizmoWorldAxisSource::StaticClass, TEXT("UGizmoWorldAxisSource"), &Z_Registration_Info_UClass_UGizmoWorldAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoWorldAxisSource), 3778340089U) },
		{ Z_Construct_UClass_UGizmoComponentAxisSource, UGizmoComponentAxisSource::StaticClass, TEXT("UGizmoComponentAxisSource"), &Z_Registration_Info_UClass_UGizmoComponentAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoComponentAxisSource), 2032089659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_2907452235(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
