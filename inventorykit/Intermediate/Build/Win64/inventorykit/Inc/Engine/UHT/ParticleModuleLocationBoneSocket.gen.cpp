// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationBoneSocket.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationBoneSocket() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSource();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ELocationBoneSocketSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocationBoneSocketSource;
static UEnum* ELocationBoneSocketSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocationBoneSocketSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocationBoneSocketSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationBoneSocketSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELocationBoneSocketSource"));
	}
	return Z_Registration_Info_UEnum_ELocationBoneSocketSource.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELocationBoneSocketSource>()
{
	return ELocationBoneSocketSource_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BONESOCKETSOURCE_Bones.Name", "BONESOCKETSOURCE_Bones" },
		{ "BONESOCKETSOURCE_MAX.Name", "BONESOCKETSOURCE_MAX" },
		{ "BONESOCKETSOURCE_Sockets.Name", "BONESOCKETSOURCE_Sockets" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BONESOCKETSOURCE_Bones", (int64)BONESOCKETSOURCE_Bones },
		{ "BONESOCKETSOURCE_Sockets", (int64)BONESOCKETSOURCE_Sockets },
		{ "BONESOCKETSOURCE_MAX", (int64)BONESOCKETSOURCE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELocationBoneSocketSource",
	"ELocationBoneSocketSource",
	Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSource()
{
	if (!Z_Registration_Info_UEnum_ELocationBoneSocketSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocationBoneSocketSource.InnerSingleton, Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocationBoneSocketSource.InnerSingleton;
}
// End Enum ELocationBoneSocketSource

// Begin Enum ELocationBoneSocketSelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod;
static UEnum* ELocationBoneSocketSelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELocationBoneSocketSelectionMethod"));
	}
	return Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELocationBoneSocketSelectionMethod>()
{
	return ELocationBoneSocketSelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BONESOCKETSEL_MAX.Name", "BONESOCKETSEL_MAX" },
		{ "BONESOCKETSEL_Random.Name", "BONESOCKETSEL_Random" },
		{ "BONESOCKETSEL_Sequential.Name", "BONESOCKETSEL_Sequential" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BONESOCKETSEL_Sequential", (int64)BONESOCKETSEL_Sequential },
		{ "BONESOCKETSEL_Random", (int64)BONESOCKETSEL_Random },
		{ "BONESOCKETSEL_MAX", (int64)BONESOCKETSEL_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELocationBoneSocketSelectionMethod",
	"ELocationBoneSocketSelectionMethod",
	Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod()
{
	if (!Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.InnerSingleton, Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.InnerSingleton;
}
// End Enum ELocationBoneSocketSelectionMethod

// Begin ScriptStruct FLocationBoneSocketInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo;
class UScriptStruct* FLocationBoneSocketInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocationBoneSocketInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LocationBoneSocketInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLocationBoneSocketInfo>()
{
	return FLocationBoneSocketInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSocketName_MetaData[] = {
		{ "Category", "LocationBoneSocketInfo" },
		{ "Comment", "/** The name of the bone/socket on the skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name of the bone/socket on the skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "LocationBoneSocketInfo" },
		{ "Comment", "/** The offset from the bone/socket to use */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The offset from the bone/socket to use" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocationBoneSocketInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName = { "BoneSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationBoneSocketInfo, BoneSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSocketName_MetaData), NewProp_BoneSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationBoneSocketInfo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LocationBoneSocketInfo",
	Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers),
	sizeof(FLocationBoneSocketInfo),
	alignof(FLocationBoneSocketInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.InnerSingleton, Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.InnerSingleton;
}
// End ScriptStruct FLocationBoneSocketInfo

// Begin Class UParticleModuleLocationBoneSocket
void UParticleModuleLocationBoneSocket::StaticRegisterNativesUParticleModuleLocationBoneSocket()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationBoneSocket);
UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister()
{
	return UParticleModuleLocationBoneSocket::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Bone/Socket Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/**\n\x09 *\x09Whether the module uses Bones or Sockets for locations.\n\x09 *\n\x09 *\x09""BONESOCKETSOURCE_Bones\x09\x09- Use Bones as the source locations.\n\x09 *\x09""BONESOCKETSOURCE_Sockets\x09- Use Sockets as the source locations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "Whether the module uses Bones or Sockets for locations.\n\nBONESOCKETSOURCE_Bones          - Use Bones as the source locations.\nBONESOCKETSOURCE_Sockets        - Use Sockets as the source locations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniversalOffset_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** An offset to apply to each bone/socket */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "An offset to apply to each bone/socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocations_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** The name(s) of the bone/socket(s) to position at. If this is empty, the module will attempt to spawn from all bones or sockets. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name(s) of the bone/socket(s) to position at. If this is empty, the module will attempt to spawn from all bones or sockets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/**\n\x09 *\x09The method by which to select the bone/socket to spawn at.\n\x09 *\n\x09 *\x09SEL_Sequential\x09\x09\x09- loop through the bone/socket array in order\n\x09 *\x09SEL_Random\x09\x09\x09\x09- randomly select a bone/socket from the array\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The method by which to select the bone/socket to spawn at.\n\nSEL_Sequential                  - loop through the bone/socket array in order\nSEL_Random                              - randomly select a bone/socket from the array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePositionEachFrame_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** If true, update the particle locations each frame with that of the bone/socket */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, update the particle locations each frame with that of the bone/socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientMeshEmitters_MetaData[] = {
		{ "Comment", "/** If true, rotate mesh emitter meshes to orient w/ the socket. Currently does nothing. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, rotate mesh emitter meshes to orient w/ the socket. Currently does nothing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritBoneVelocity_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** If true, particles inherit the associated bone velocity when spawned */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, particles inherit the associated bone velocity when spawned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** A scale on how much of the bone's velocity a particle will inherit. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "A scale on how much of the bone's velocity a particle will inherit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshActorParamName_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/**\n\x09 *\x09The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPreSelectedIndices_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** \n\x09When we have no source locations and we need to track bone velocities due to bInheritBoneVelocity, we pre select a set of bones to use each frame. This property determines how big the list is.\n\x09Too low and the randomness of selection may suffer, too high and memory will be wasted.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "When we have no source locations and we need to track bone velocities due to bInheritBoneVelocity, we pre select a set of bones to use each frame. This property determines how big the list is.\nToo low and the randomness of selection may suffer, too high and memory will be wasted." },
		{ "UIMin", "1" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorSkelMesh_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** The name of the skeletal mesh to use in the editor */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name of the skeletal mesh to use in the editor" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniversalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceLocations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
	static void NewProp_bUpdatePositionEachFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePositionEachFrame;
	static void NewProp_bOrientMeshEmitters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientMeshEmitters;
	static void NewProp_bInheritBoneVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritBoneVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritVelocityScale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SkelMeshActorParamName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPreSelectedIndices;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorSkelMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationBoneSocket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SourceType), Z_Construct_UEnum_Engine_ELocationBoneSocketSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) }; // 4025364343
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset = { "UniversalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, UniversalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniversalOffset_MetaData), NewProp_UniversalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_Inner = { "SourceLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLocationBoneSocketInfo, METADATA_PARAMS(0, nullptr) }; // 3569749972
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations = { "SourceLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SourceLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLocations_MetaData), NewProp_SourceLocations_MetaData) }; // 3569749972
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SelectionMethod), Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMethod_MetaData), NewProp_SelectionMethod_MetaData) }; // 3776102758
void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_SetBit(void* Obj)
{
	((UParticleModuleLocationBoneSocket*)Obj)->bUpdatePositionEachFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame = { "bUpdatePositionEachFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatePositionEachFrame_MetaData), NewProp_bUpdatePositionEachFrame_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_SetBit(void* Obj)
{
	((UParticleModuleLocationBoneSocket*)Obj)->bOrientMeshEmitters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters = { "bOrientMeshEmitters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientMeshEmitters_MetaData), NewProp_bOrientMeshEmitters_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_SetBit(void* Obj)
{
	((UParticleModuleLocationBoneSocket*)Obj)->bInheritBoneVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity = { "bInheritBoneVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritBoneVelocity_MetaData), NewProp_bInheritBoneVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale = { "InheritVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, InheritVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritVelocityScale_MetaData), NewProp_InheritVelocityScale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName = { "SkelMeshActorParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SkelMeshActorParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelMeshActorParamName_MetaData), NewProp_SkelMeshActorParamName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices = { "NumPreSelectedIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, NumPreSelectedIndices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPreSelectedIndices_MetaData), NewProp_NumPreSelectedIndices_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh = { "EditorSkelMesh", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, EditorSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorSkelMesh_MetaData), NewProp_EditorSkelMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::ClassParams = {
	&UParticleModuleLocationBoneSocket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationBoneSocket>()
{
	return UParticleModuleLocationBoneSocket::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationBoneSocket);
UParticleModuleLocationBoneSocket::~UParticleModuleLocationBoneSocket() {}
// End Class UParticleModuleLocationBoneSocket

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocationBoneSocketSource_StaticEnum, TEXT("ELocationBoneSocketSource"), &Z_Registration_Info_UEnum_ELocationBoneSocketSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4025364343U) },
		{ ELocationBoneSocketSelectionMethod_StaticEnum, TEXT("ELocationBoneSocketSelectionMethod"), &Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3776102758U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocationBoneSocketInfo::StaticStruct, Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewStructOps, TEXT("LocationBoneSocketInfo"), &Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocationBoneSocketInfo), 3569749972U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationBoneSocket, UParticleModuleLocationBoneSocket::StaticClass, TEXT("UParticleModuleLocationBoneSocket"), &Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationBoneSocket), 2297845883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_1137990072(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
