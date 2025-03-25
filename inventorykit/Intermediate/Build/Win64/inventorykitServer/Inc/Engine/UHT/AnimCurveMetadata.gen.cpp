// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimCurveMetadata.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveMetadata() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveMetaData();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveMetaData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AnimCurveMetaData();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AnimCurveMetaData_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimCurveType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimCurveType;
class UScriptStruct* FAnimCurveType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimCurveType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimCurveType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveType"));
	}
	return Z_Registration_Info_UScriptStruct_AnimCurveType.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimCurveType>()
{
	return FAnimCurveType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimCurveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** in the future if we need more bools, please convert to bitfield \n * These are not saved in asset but per skeleton. \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
		{ "ToolTip", "in the future if we need more bools, please convert to bitfield\nThese are not saved in asset but per skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMorphtarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaterial;
	static void NewProp_bMorphtarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMorphtarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial_SetBit(void* Obj)
{
	((FAnimCurveType*)Obj)->bMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial = { "bMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimCurveType), &Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaterial_MetaData), NewProp_bMaterial_MetaData) };
void Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget_SetBit(void* Obj)
{
	((FAnimCurveType*)Obj)->bMorphtarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget = { "bMorphtarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimCurveType), &Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMorphtarget_MetaData), NewProp_bMorphtarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCurveType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimCurveType",
	Z_Construct_UScriptStruct_FAnimCurveType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::PropPointers),
	sizeof(FAnimCurveType),
	alignof(FAnimCurveType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType()
{
	if (!Z_Registration_Info_UScriptStruct_AnimCurveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimCurveType.InnerSingleton, Z_Construct_UScriptStruct_FAnimCurveType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimCurveType.InnerSingleton;
}
// End ScriptStruct FAnimCurveType

// Begin ScriptStruct FCurveMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveMetaData;
class UScriptStruct* FCurveMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveMetaData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveMetaData>()
{
	return FCurveMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurveMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Curve Meta Data for each name\n * Unfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time\n * We only add this if anything changed, by default, it is attribute curve\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
		{ "ToolTip", "Curve Meta Data for each name\nUnfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time\nWe only add this if anything changed, by default, it is attribute curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedBones_MetaData[] = {
		{ "Comment", "/** connected bones to this meta data */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
		{ "ToolTip", "connected bones to this meta data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLOD_MetaData[] = {
		{ "Comment", "/* max LOD (lowest LOD) to evaluate this. -1 means it will evaluate all the time. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
		{ "ToolTip", "max LOD (lowest LOD) to evaluate this. -1 means it will evaluate all the time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** Curve type flags */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
		{ "ToolTip", "Curve type flags" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedBones;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxLOD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones_Inner = { "LinkedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones = { "LinkedBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveMetaData, LinkedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedBones_MetaData), NewProp_LinkedBones_MetaData) }; // 4218265988
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_MaxLOD = { "MaxLOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveMetaData, MaxLOD), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLOD_MetaData), NewProp_MaxLOD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveMetaData, Type), Z_Construct_UScriptStruct_FAnimCurveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3231761923
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_MaxLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CurveMetaData",
	Z_Construct_UScriptStruct_FCurveMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::PropPointers),
	sizeof(FCurveMetaData),
	alignof(FCurveMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton, Z_Construct_UScriptStruct_FCurveMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton;
}
// End ScriptStruct FCurveMetaData

// Begin Interface UInterface_AnimCurveMetaData
void UInterface_AnimCurveMetaData::StaticRegisterNativesUInterface_AnimCurveMetaData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_AnimCurveMetaData);
UClass* Z_Construct_UClass_UInterface_AnimCurveMetaData_NoRegister()
{
	return UInterface_AnimCurveMetaData::StaticClass();
}
struct Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_AnimCurveMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics::ClassParams = {
	&UInterface_AnimCurveMetaData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_AnimCurveMetaData()
{
	if (!Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.OuterSingleton, Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterface_AnimCurveMetaData>()
{
	return UInterface_AnimCurveMetaData::StaticClass();
}
UInterface_AnimCurveMetaData::UInterface_AnimCurveMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_AnimCurveMetaData);
UInterface_AnimCurveMetaData::~UInterface_AnimCurveMetaData() {}
// End Interface UInterface_AnimCurveMetaData

// Begin Class UAnimCurveMetaData
void UAnimCurveMetaData::StaticRegisterNativesUAnimCurveMetaData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveMetaData);
UClass* Z_Construct_UClass_UAnimCurveMetaData_NoRegister()
{
	return UAnimCurveMetaData::StaticClass();
}
struct Z_Construct_UClass_UAnimCurveMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Asset user data used to supply curve meta data for specific assets */" },
		{ "IncludePath", "Animation/AnimCurveMetadata.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
		{ "ToolTip", "Asset user data used to supply curve meta data for specific assets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveMetaData_MetaData[] = {
		{ "Comment", "/** Map of name -> metadata */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveMetadata.h" },
		{ "ToolTip", "Map of name -> metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurveMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimCurveMetaData_Statics::NewProp_CurveMetaData_ValueProp = { "CurveMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCurveMetaData, METADATA_PARAMS(0, nullptr) }; // 3418953923
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimCurveMetaData_Statics::NewProp_CurveMetaData_Key_KeyProp = { "CurveMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimCurveMetaData_Statics::NewProp_CurveMetaData = { "CurveMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCurveMetaData, CurveMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveMetaData_MetaData), NewProp_CurveMetaData_MetaData) }; // 3418953923
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveMetaData_Statics::NewProp_CurveMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveMetaData_Statics::NewProp_CurveMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveMetaData_Statics::NewProp_CurveMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveMetaData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimCurveMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimCurveMetaData_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AnimCurveMetaData_NoRegister, (int32)VTABLE_OFFSET(UAnimCurveMetaData, IInterface_AnimCurveMetaData), false },  // 3857030805
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveMetaData_Statics::ClassParams = {
	&UAnimCurveMetaData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimCurveMetaData_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveMetaData_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCurveMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCurveMetaData()
{
	if (!Z_Registration_Info_UClass_UAnimCurveMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveMetaData.OuterSingleton, Z_Construct_UClass_UAnimCurveMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCurveMetaData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCurveMetaData>()
{
	return UAnimCurveMetaData::StaticClass();
}
UAnimCurveMetaData::UAnimCurveMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveMetaData);
UAnimCurveMetaData::~UAnimCurveMetaData() {}
// End Class UAnimCurveMetaData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimCurveType::StaticStruct, Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewStructOps, TEXT("AnimCurveType"), &Z_Registration_Info_UScriptStruct_AnimCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimCurveType), 3231761923U) },
		{ FCurveMetaData::StaticStruct, Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewStructOps, TEXT("CurveMetaData"), &Z_Registration_Info_UScriptStruct_CurveMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveMetaData), 3418953923U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_AnimCurveMetaData, UInterface_AnimCurveMetaData::StaticClass, TEXT("UInterface_AnimCurveMetaData"), &Z_Registration_Info_UClass_UInterface_AnimCurveMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_AnimCurveMetaData), 3857030805U) },
		{ Z_Construct_UClass_UAnimCurveMetaData, UAnimCurveMetaData::StaticClass, TEXT("UAnimCurveMetaData"), &Z_Registration_Info_UClass_UAnimCurveMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveMetaData), 2152490598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_2758824773(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
