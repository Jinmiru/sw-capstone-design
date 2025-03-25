// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundGroups() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundGroups();
ENGINE_API UClass* Z_Construct_UClass_USoundGroups_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundGroup();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESoundGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundGroup;
static UEnum* ESoundGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundGroup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESoundGroup"));
	}
	return Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESoundGroup>()
{
	return ESoundGroup_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESoundGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "SOUNDGROUP_Default.DisplayName", "Default" },
		{ "SOUNDGROUP_Default.Name", "SOUNDGROUP_Default" },
		{ "SOUNDGROUP_Effects.DisplayName", "Effects" },
		{ "SOUNDGROUP_Effects.Name", "SOUNDGROUP_Effects" },
		{ "SOUNDGROUP_GameSoundGroup1.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup1.Name", "SOUNDGROUP_GameSoundGroup1" },
		{ "SOUNDGROUP_GameSoundGroup10.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup10.Name", "SOUNDGROUP_GameSoundGroup10" },
		{ "SOUNDGROUP_GameSoundGroup11.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup11.Name", "SOUNDGROUP_GameSoundGroup11" },
		{ "SOUNDGROUP_GameSoundGroup12.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup12.Name", "SOUNDGROUP_GameSoundGroup12" },
		{ "SOUNDGROUP_GameSoundGroup13.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup13.Name", "SOUNDGROUP_GameSoundGroup13" },
		{ "SOUNDGROUP_GameSoundGroup14.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup14.Name", "SOUNDGROUP_GameSoundGroup14" },
		{ "SOUNDGROUP_GameSoundGroup15.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup15.Name", "SOUNDGROUP_GameSoundGroup15" },
		{ "SOUNDGROUP_GameSoundGroup16.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup16.Name", "SOUNDGROUP_GameSoundGroup16" },
		{ "SOUNDGROUP_GameSoundGroup17.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup17.Name", "SOUNDGROUP_GameSoundGroup17" },
		{ "SOUNDGROUP_GameSoundGroup18.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup18.Name", "SOUNDGROUP_GameSoundGroup18" },
		{ "SOUNDGROUP_GameSoundGroup19.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup19.Name", "SOUNDGROUP_GameSoundGroup19" },
		{ "SOUNDGROUP_GameSoundGroup2.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup2.Name", "SOUNDGROUP_GameSoundGroup2" },
		{ "SOUNDGROUP_GameSoundGroup20.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup20.Name", "SOUNDGROUP_GameSoundGroup20" },
		{ "SOUNDGROUP_GameSoundGroup3.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup3.Name", "SOUNDGROUP_GameSoundGroup3" },
		{ "SOUNDGROUP_GameSoundGroup4.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup4.Name", "SOUNDGROUP_GameSoundGroup4" },
		{ "SOUNDGROUP_GameSoundGroup5.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup5.Name", "SOUNDGROUP_GameSoundGroup5" },
		{ "SOUNDGROUP_GameSoundGroup6.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup6.Name", "SOUNDGROUP_GameSoundGroup6" },
		{ "SOUNDGROUP_GameSoundGroup7.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup7.Name", "SOUNDGROUP_GameSoundGroup7" },
		{ "SOUNDGROUP_GameSoundGroup8.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup8.Name", "SOUNDGROUP_GameSoundGroup8" },
		{ "SOUNDGROUP_GameSoundGroup9.Hidden", "" },
		{ "SOUNDGROUP_GameSoundGroup9.Name", "SOUNDGROUP_GameSoundGroup9" },
		{ "SOUNDGROUP_Music.DisplayName", "Music" },
		{ "SOUNDGROUP_Music.Name", "SOUNDGROUP_Music" },
		{ "SOUNDGROUP_UI.DisplayName", "UI" },
		{ "SOUNDGROUP_UI.Name", "SOUNDGROUP_UI" },
		{ "SOUNDGROUP_Voice.DisplayName", "Voice" },
		{ "SOUNDGROUP_Voice.Name", "SOUNDGROUP_Voice" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SOUNDGROUP_Default", (int64)SOUNDGROUP_Default },
		{ "SOUNDGROUP_Effects", (int64)SOUNDGROUP_Effects },
		{ "SOUNDGROUP_UI", (int64)SOUNDGROUP_UI },
		{ "SOUNDGROUP_Music", (int64)SOUNDGROUP_Music },
		{ "SOUNDGROUP_Voice", (int64)SOUNDGROUP_Voice },
		{ "SOUNDGROUP_GameSoundGroup1", (int64)SOUNDGROUP_GameSoundGroup1 },
		{ "SOUNDGROUP_GameSoundGroup2", (int64)SOUNDGROUP_GameSoundGroup2 },
		{ "SOUNDGROUP_GameSoundGroup3", (int64)SOUNDGROUP_GameSoundGroup3 },
		{ "SOUNDGROUP_GameSoundGroup4", (int64)SOUNDGROUP_GameSoundGroup4 },
		{ "SOUNDGROUP_GameSoundGroup5", (int64)SOUNDGROUP_GameSoundGroup5 },
		{ "SOUNDGROUP_GameSoundGroup6", (int64)SOUNDGROUP_GameSoundGroup6 },
		{ "SOUNDGROUP_GameSoundGroup7", (int64)SOUNDGROUP_GameSoundGroup7 },
		{ "SOUNDGROUP_GameSoundGroup8", (int64)SOUNDGROUP_GameSoundGroup8 },
		{ "SOUNDGROUP_GameSoundGroup9", (int64)SOUNDGROUP_GameSoundGroup9 },
		{ "SOUNDGROUP_GameSoundGroup10", (int64)SOUNDGROUP_GameSoundGroup10 },
		{ "SOUNDGROUP_GameSoundGroup11", (int64)SOUNDGROUP_GameSoundGroup11 },
		{ "SOUNDGROUP_GameSoundGroup12", (int64)SOUNDGROUP_GameSoundGroup12 },
		{ "SOUNDGROUP_GameSoundGroup13", (int64)SOUNDGROUP_GameSoundGroup13 },
		{ "SOUNDGROUP_GameSoundGroup14", (int64)SOUNDGROUP_GameSoundGroup14 },
		{ "SOUNDGROUP_GameSoundGroup15", (int64)SOUNDGROUP_GameSoundGroup15 },
		{ "SOUNDGROUP_GameSoundGroup16", (int64)SOUNDGROUP_GameSoundGroup16 },
		{ "SOUNDGROUP_GameSoundGroup17", (int64)SOUNDGROUP_GameSoundGroup17 },
		{ "SOUNDGROUP_GameSoundGroup18", (int64)SOUNDGROUP_GameSoundGroup18 },
		{ "SOUNDGROUP_GameSoundGroup19", (int64)SOUNDGROUP_GameSoundGroup19 },
		{ "SOUNDGROUP_GameSoundGroup20", (int64)SOUNDGROUP_GameSoundGroup20 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESoundGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESoundGroup",
	"ESoundGroup",
	Z_Construct_UEnum_Engine_ESoundGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESoundGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESoundGroup()
{
	if (!Z_Registration_Info_UEnum_ESoundGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundGroup.InnerSingleton, Z_Construct_UEnum_Engine_ESoundGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundGroup.InnerSingleton;
}
// End Enum ESoundGroup

// Begin ScriptStruct FSoundGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundGroup;
class UScriptStruct* FSoundGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundGroup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundGroup"));
	}
	return Z_Registration_Info_UScriptStruct_SoundGroup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundGroup>()
{
	return FSoundGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[] = {
		{ "Comment", "// The sound group enumeration we are setting values for\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "The sound group enumeration we are setting values for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Comment", "// An override display name for custom game sound groups\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "An override display name for custom game sound groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysDecompressOnLoad_MetaData[] = {
		{ "Comment", "// Whether sounds in this group should always decompress on load\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "Whether sounds in this group should always decompress on load" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecompressedDuration_MetaData[] = {
		{ "Comment", "/**\n\x09 * Sound duration in seconds below which sounds are entirely expanded to PCM at load time\n\x09 * Disregarded if bAlwaysDecompressOnLoad is true\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "Sound duration in seconds below which sounds are entirely expanded to PCM at load time\nDisregarded if bAlwaysDecompressOnLoad is true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoundGroup;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static void NewProp_bAlwaysDecompressOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysDecompressOnLoad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecompressedDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_SoundGroup = { "SoundGroup", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundGroup, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundGroup_MetaData), NewProp_SoundGroup_MetaData) }; // 2669277182
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundGroup, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
void Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad_SetBit(void* Obj)
{
	((FSoundGroup*)Obj)->bAlwaysDecompressOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad = { "bAlwaysDecompressOnLoad", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundGroup), &Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysDecompressOnLoad_MetaData), NewProp_bAlwaysDecompressOnLoad_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DecompressedDuration = { "DecompressedDuration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundGroup, DecompressedDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecompressedDuration_MetaData), NewProp_DecompressedDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_SoundGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DecompressedDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundGroup",
	Z_Construct_UScriptStruct_FSoundGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::PropPointers),
	sizeof(FSoundGroup),
	alignof(FSoundGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundGroup()
{
	if (!Z_Registration_Info_UScriptStruct_SoundGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundGroup.InnerSingleton, Z_Construct_UScriptStruct_FSoundGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundGroup.InnerSingleton;
}
// End ScriptStruct FSoundGroup

// Begin Class USoundGroups
void USoundGroups::StaticRegisterNativesUSoundGroups()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundGroups);
UClass* Z_Construct_UClass_USoundGroups_NoRegister()
{
	return USoundGroups::StaticClass();
}
struct Z_Construct_UClass_USoundGroups_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// This class is a singleton initialized from the ini\n" },
		{ "IncludePath", "Sound/SoundGroups.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "This class is a singleton initialized from the ini" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundGroupProfiles_MetaData[] = {
		{ "Comment", "// The ini editable array of profiles\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "The ini editable array of profiles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundGroupProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundGroupProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundGroups>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles_Inner = { "SoundGroupProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundGroup, METADATA_PARAMS(0, nullptr) }; // 2598463155
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles = { "SoundGroupProfiles", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundGroups, SoundGroupProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundGroupProfiles_MetaData), NewProp_SoundGroupProfiles_MetaData) }; // 2598463155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundGroups_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundGroups_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundGroups_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundGroups_Statics::ClassParams = {
	&USoundGroups::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundGroups_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundGroups_Statics::PropPointers),
	0,
	0x000800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundGroups_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundGroups_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundGroups()
{
	if (!Z_Registration_Info_UClass_USoundGroups.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundGroups.OuterSingleton, Z_Construct_UClass_USoundGroups_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundGroups.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundGroups>()
{
	return USoundGroups::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundGroups);
USoundGroups::~USoundGroups() {}
// End Class USoundGroups

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESoundGroup_StaticEnum, TEXT("ESoundGroup"), &Z_Registration_Info_UEnum_ESoundGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2669277182U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundGroup::StaticStruct, Z_Construct_UScriptStruct_FSoundGroup_Statics::NewStructOps, TEXT("SoundGroup"), &Z_Registration_Info_UScriptStruct_SoundGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundGroup), 2598463155U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundGroups, USoundGroups::StaticClass, TEXT("USoundGroups"), &Z_Registration_Info_UClass_USoundGroups, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundGroups), 295734678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_716013962(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
