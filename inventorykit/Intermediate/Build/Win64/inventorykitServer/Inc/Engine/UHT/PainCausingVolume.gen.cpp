// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/PainCausingVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePainCausingVolume() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume();
ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APainCausingVolume
void APainCausingVolume::StaticRegisterNativesAPainCausingVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APainCausingVolume);
UClass* Z_Construct_UClass_APainCausingVolume_NoRegister()
{
	return APainCausingVolume::StaticClass();
}
struct Z_Construct_UClass_APainCausingVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Volume that causes damage over time to any Actor that overlaps its collision.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/PainCausingVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Volume that causes damage over time to any Actor that overlaps its collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPainCausing_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** Whether volume currently causes damage. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Whether volume currently causes damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerSec_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** Damage done per second to actors in this volume when bPainCausing=true */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Damage done per second to actors in this volume when bPainCausing=true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** Type of damage done */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Type of damage done" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PainInterval_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** If pain causing, time between damage applications. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "If pain causing, time between damage applications." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEntryPain_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** if bPainCausing, cause pain when something enters the volume in addition to damage each second */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "if bPainCausing, cause pain when something enters the volume in addition to damage each second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BACKUP_bPainCausing_MetaData[] = {
		{ "Comment", "/** Checkpointed bPainCausing value */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Checkpointed bPainCausing value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInstigator_MetaData[] = {
		{ "Comment", "/** Controller that gets credit for any damage caused by this volume */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Controller that gets credit for any damage caused by this volume" },
	};
#endif // WITH_METADATA
	static void NewProp_bPainCausing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPainCausing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerSec;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PainInterval;
	static void NewProp_bEntryPain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEntryPain;
	static void NewProp_BACKUP_bPainCausing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BACKUP_bPainCausing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APainCausingVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_SetBit(void* Obj)
{
	((APainCausingVolume*)Obj)->bPainCausing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing = { "bPainCausing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPainCausing_MetaData), NewProp_bPainCausing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec = { "DamagePerSec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APainCausingVolume, DamagePerSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerSec_MetaData), NewProp_DamagePerSec_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APainCausingVolume, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval = { "PainInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APainCausingVolume, PainInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PainInterval_MetaData), NewProp_PainInterval_MetaData) };
void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_SetBit(void* Obj)
{
	((APainCausingVolume*)Obj)->bEntryPain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain = { "bEntryPain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEntryPain_MetaData), NewProp_bEntryPain_MetaData) };
void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_SetBit(void* Obj)
{
	((APainCausingVolume*)Obj)->BACKUP_bPainCausing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing = { "BACKUP_bPainCausing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BACKUP_bPainCausing_MetaData), NewProp_BACKUP_bPainCausing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator = { "DamageInstigator", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APainCausingVolume, DamageInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInstigator_MetaData), NewProp_DamageInstigator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APainCausingVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APainCausingVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APainCausingVolume_Statics::ClassParams = {
	&APainCausingVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APainCausingVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_APainCausingVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APainCausingVolume()
{
	if (!Z_Registration_Info_UClass_APainCausingVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APainCausingVolume.OuterSingleton, Z_Construct_UClass_APainCausingVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APainCausingVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APainCausingVolume>()
{
	return APainCausingVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APainCausingVolume);
APainCausingVolume::~APainCausingVolume() {}
// End Class APainCausingVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APainCausingVolume, APainCausingVolume::StaticClass, TEXT("APainCausingVolume"), &Z_Registration_Info_UClass_APainCausingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APainCausingVolume), 1240372113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_2789912452(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
