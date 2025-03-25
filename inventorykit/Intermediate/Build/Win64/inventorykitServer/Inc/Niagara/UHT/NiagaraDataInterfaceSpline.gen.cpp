// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceSpline.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSpline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpline();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpline_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraDataInterfaceSplineLUT
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceSplineLUT;
class UScriptStruct* FNiagaraDataInterfaceSplineLUT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceSplineLUT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceSplineLUT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataInterfaceSplineLUT"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceSplineLUT.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceSplineLUT>()
{
	return FNiagaraDataInterfaceSplineLUT::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scales_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineLength_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineDistanceStep_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvSplineDistanceStep_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scales_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scales;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineDistanceStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvSplineDistanceStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceSplineLUT>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceSplineLUT, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Scales_Inner = { "Scales", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Scales = { "Scales", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceSplineLUT, Scales), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scales_MetaData), NewProp_Scales_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceSplineLUT, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_SplineLength = { "SplineLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceSplineLUT, SplineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineLength_MetaData), NewProp_SplineLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_SplineDistanceStep = { "SplineDistanceStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceSplineLUT, SplineDistanceStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineDistanceStep_MetaData), NewProp_SplineDistanceStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_InvSplineDistanceStep = { "InvSplineDistanceStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceSplineLUT, InvSplineDistanceStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvSplineDistanceStep_MetaData), NewProp_InvSplineDistanceStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_MaxIndex = { "MaxIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceSplineLUT, MaxIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIndex_MetaData), NewProp_MaxIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Scales_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Scales,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_SplineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_SplineDistanceStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_InvSplineDistanceStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewProp_MaxIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDataInterfaceSplineLUT",
	Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::PropPointers),
	sizeof(FNiagaraDataInterfaceSplineLUT),
	alignof(FNiagaraDataInterfaceSplineLUT),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceSplineLUT.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceSplineLUT.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceSplineLUT.InnerSingleton;
}
// End ScriptStruct FNiagaraDataInterfaceSplineLUT

// Begin Class UNiagaraDataInterfaceSpline
void UNiagaraDataInterfaceSpline::StaticRegisterNativesUNiagaraDataInterfaceSpline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSpline);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpline_NoRegister()
{
	return UNiagaraDataInterfaceSpline::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** Data Interface allowing sampling of in-world spline components. Note that this data interface is very experimental. */" },
		{ "DisplayName", "Spline" },
		{ "IncludePath", "NiagaraDataInterfaceSpline.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
		{ "ToolTip", "Data Interface allowing sampling of in-world spline components. Note that this data interface is very experimental." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceActor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The source actor from which to sample.  Note that this can only be set when used as a user variable on a component in the world.*/" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
		{ "ToolTip", "The source actor from which to sample.  Note that this can only be set when used as a user variable on a component in the world." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineUserParameter_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. This should  be an Object user parameter that is either a USplineComponent or an AActor containing a USplineComponent. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one. This should  be an Object user parameter that is either a USplineComponent or an AActor containing a USplineComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLUT_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLUTSteps_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditCondition", "bUseLuT" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSourceActor;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineUserParameter;
	static void NewProp_bUseLUT_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLUT;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLUTSteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSpline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_SoftSourceActor = { "SoftSourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSpline, SoftSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSourceActor_MetaData), NewProp_SoftSourceActor_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSpline, Source_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_SplineUserParameter = { "SplineUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSpline, SplineUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineUserParameter_MetaData), NewProp_SplineUserParameter_MetaData) }; // 174428838
void Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_bUseLUT_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSpline*)Obj)->bUseLUT = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_bUseLUT = { "bUseLUT", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSpline), &Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_bUseLUT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLUT_MetaData), NewProp_bUseLUT_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_NumLUTSteps = { "NumLUTSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSpline, NumLUTSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLUTSteps_MetaData), NewProp_NumLUTSteps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_SoftSourceActor,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_SplineUserParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_bUseLUT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_NumLUTSteps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::ClassParams = {
	&UNiagaraDataInterfaceSpline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpline()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSpline>()
{
	return UNiagaraDataInterfaceSpline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSpline);
UNiagaraDataInterfaceSpline::~UNiagaraDataInterfaceSpline() {}
// End Class UNiagaraDataInterfaceSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraDataInterfaceSplineLUT::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewStructOps, TEXT("NiagaraDataInterfaceSplineLUT"), &Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceSplineLUT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataInterfaceSplineLUT), 2148454544U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSpline, UNiagaraDataInterfaceSpline::StaticClass, TEXT("UNiagaraDataInterfaceSpline"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSpline), 2727732539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_4021242788(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
