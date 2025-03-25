// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h"
#include "Niagara/Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelRead() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelCompiledData();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDIDataChannelSpawnMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode;
static UEnum* ENDIDataChannelSpawnMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIDataChannelSpawnMode"));
	}
	return Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDIDataChannelSpawnMode>()
{
	return ENDIDataChannelSpawnMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Accumulate.Comment", "/** This mode will accumulate spawn counts with other spawns. */" },
		{ "Accumulate.Name", "ENDIDataChannelSpawnMode::Accumulate" },
		{ "Accumulate.ToolTip", "This mode will accumulate spawn counts with other spawns." },
		{ "Comment", "/** Mode controlling the behavior of the Spawn function for Niagara's Data Channel Read Data Interface.*/" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ENDIDataChannelSpawnMode::Max" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "None.Comment", "/** Does nothing. This mode is useful for dynamically skipping spawning based on script logic. */" },
		{ "None.Name", "ENDIDataChannelSpawnMode::None" },
		{ "None.ToolTip", "Does nothing. This mode is useful for dynamically skipping spawning based on script logic." },
		{ "Override.Comment", "/** This mode will override any previous spawn counts set or accumulated this tick. */" },
		{ "Override.Name", "ENDIDataChannelSpawnMode::Override" },
		{ "Override.ToolTip", "This mode will override any previous spawn counts set or accumulated this tick." },
		{ "ToolTip", "Mode controlling the behavior of the Spawn function for Niagara's Data Channel Read Data Interface." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDIDataChannelSpawnMode::Override", (int64)ENDIDataChannelSpawnMode::Override },
		{ "ENDIDataChannelSpawnMode::Accumulate", (int64)ENDIDataChannelSpawnMode::Accumulate },
		{ "ENDIDataChannelSpawnMode::None", (int64)ENDIDataChannelSpawnMode::None },
		{ "ENDIDataChannelSpawnMode::Max", (int64)ENDIDataChannelSpawnMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDIDataChannelSpawnMode",
	"ENDIDataChannelSpawnMode",
	Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode()
{
	if (!Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton;
}
// End Enum ENDIDataChannelSpawnMode

// Begin Class UNiagaraDataInterfaceDataChannelRead
void UNiagaraDataInterfaceDataChannelRead::StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDataChannelRead);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister()
{
	return UNiagaraDataInterfaceDataChannelRead::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Data Channels" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Data Channel Reader" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** The data channel to access and read from. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "The data channel to access and read from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReadCurrentFrame_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** True if this reader will read the current frame's data. If false, we read the previous frame.\n\x09* Reading the current frame introduces a tick order dependency but allows for zero latency reads. Any data channel elements that are generated after this reader is used are missed.\n\x09* Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "True if this reader will read the current frame's data. If false, we read the previous frame.\nReading the current frame introduces a tick order dependency but allows for zero latency reads. Any data channel elements that are generated after this reader is used are missed.\nReading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSourceDataEveryTick_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/**\n\x09Whether this DI should request updated source data from the Data Channel each tick.\n\x09Some Data Channels have multiple separate source data elements for things such as spatial subdivision. \n\x09""Each DI will request the correct one for it's owning system instance from the data channel. \n\x09""Depending on the data channel this could be an expensive search so we should avoid doing this every tick if possible.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "Whether this DI should request updated source data from the Data Channel each tick.\nSome Data Channels have multiple separate source data elements for things such as spatial subdivision.\nEach DI will request the correct one for it's owning system instance from the data channel.\nDepending on the data channel this could be an expensive search so we should avoid doing this every tick if possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/**\n\x09When true, Emitter.Spawn group for any spawned particles will be overridden to the index of the data channel element that generated that spawn.\n\x09""Doing this will submit all NDC spawns individually and will be less performant.\n\x09However it will allow particles to access the NDC data that generated then via the SpawnGroup value.\n\x09It will also mean that Exec Index will be correct on a per NDC Entry level. \n\x09Without this settings ExecIndex will be 0...TotalSpawnCount-1. With this it will be 0...SpawnCount for each NDC item individually.\n\x09Unless absolutely needed this is discouraged as it comes at significant performance cost when spawning and GPU emitters can currently only handle 8 individual spawns per frame.\n\x09""Calling GetNDCSpawnInfo() in the particle spawn script to get the spawning NDC Index is prefered.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "When true, Emitter.Spawn group for any spawned particles will be overridden to the index of the data channel element that generated that spawn.\nDoing this will submit all NDC spawns individually and will be less performant.\nHowever it will allow particles to access the NDC data that generated then via the SpawnGroup value.\nIt will also mean that Exec Index will be correct on a per NDC Entry level.\nWithout this settings ExecIndex will be 0...TotalSpawnCount-1. With this it will be 0...SpawnCount for each NDC item individually.\nUnless absolutely needed this is discouraged as it comes at significant performance cost when spawning and GPU emitters can currently only handle 8 individual spawns per frame.\nCalling GetNDCSpawnInfo() in the particle spawn script to get the spawning NDC Index is prefered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
	static void NewProp_bReadCurrentFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadCurrentFrame;
	static void NewProp_bUpdateSourceDataEveryTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSourceDataEveryTick;
	static void NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnGroupToDataChannelIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDataChannelRead>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelRead, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDataChannelRead*)Obj)->bReadCurrentFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame = { "bReadCurrentFrame", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelRead), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadCurrentFrame_MetaData), NewProp_bReadCurrentFrame_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDataChannelRead*)Obj)->bUpdateSourceDataEveryTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick = { "bUpdateSourceDataEveryTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelRead), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateSourceDataEveryTick_MetaData), NewProp_bUpdateSourceDataEveryTick_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDataChannelRead*)Obj)->bOverrideSpawnGroupToDataChannelIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex = { "bOverrideSpawnGroupToDataChannelIndex", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelRead), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData), NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelRead, CompiledData), Z_Construct_UScriptStruct_FNDIDataChannelCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledData_MetaData), NewProp_CompiledData_MetaData) }; // 3473991821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::ClassParams = {
	&UNiagaraDataInterfaceDataChannelRead::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDataChannelRead>()
{
	return UNiagaraDataInterfaceDataChannelRead::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDataChannelRead);
UNiagaraDataInterfaceDataChannelRead::~UNiagaraDataInterfaceDataChannelRead() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceDataChannelRead)
// End Class UNiagaraDataInterfaceDataChannelRead

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDIDataChannelSpawnMode_StaticEnum, TEXT("ENDIDataChannelSpawnMode"), &Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2091475255U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead, UNiagaraDataInterfaceDataChannelRead::StaticClass, TEXT("UNiagaraDataInterfaceDataChannelRead"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDataChannelRead), 1980498960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_1290521580(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
