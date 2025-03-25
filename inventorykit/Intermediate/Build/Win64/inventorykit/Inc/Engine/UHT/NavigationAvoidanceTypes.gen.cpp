// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationAvoidanceTypes() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNavAvoidanceMask
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavAvoidanceMask;
class UScriptStruct* FNavAvoidanceMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavAvoidanceMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavAvoidanceMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAvoidanceMask, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavAvoidanceMask"));
	}
	return Z_Registration_Info_UScriptStruct_NavAvoidanceMask.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavAvoidanceMask>()
{
	return FNavAvoidanceMask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup0_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup1_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup2_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup3_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup4_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup5_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup6_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup7_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup8_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup9_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup10_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup11_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup12_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup13_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup14_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup15_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup16_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup17_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup18_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup19_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup20_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup21_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup22_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup23_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup24_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup25_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup26_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup27_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup28_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup29_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup30_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroup31_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGroup0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup0;
	static void NewProp_bGroup1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup1;
	static void NewProp_bGroup2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup2;
	static void NewProp_bGroup3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup3;
	static void NewProp_bGroup4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup4;
	static void NewProp_bGroup5_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup5;
	static void NewProp_bGroup6_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup6;
	static void NewProp_bGroup7_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup7;
	static void NewProp_bGroup8_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup8;
	static void NewProp_bGroup9_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup9;
	static void NewProp_bGroup10_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup10;
	static void NewProp_bGroup11_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup11;
	static void NewProp_bGroup12_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup12;
	static void NewProp_bGroup13_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup13;
	static void NewProp_bGroup14_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup14;
	static void NewProp_bGroup15_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup15;
	static void NewProp_bGroup16_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup16;
	static void NewProp_bGroup17_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup17;
	static void NewProp_bGroup18_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup18;
	static void NewProp_bGroup19_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup19;
	static void NewProp_bGroup20_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup20;
	static void NewProp_bGroup21_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup21;
	static void NewProp_bGroup22_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup22;
	static void NewProp_bGroup23_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup23;
	static void NewProp_bGroup24_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup24;
	static void NewProp_bGroup25_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup25;
	static void NewProp_bGroup26_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup26;
	static void NewProp_bGroup27_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup27;
	static void NewProp_bGroup28_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup28;
	static void NewProp_bGroup29_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup29;
	static void NewProp_bGroup30_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup30;
	static void NewProp_bGroup31_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroup31;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAvoidanceMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup0_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup0 = { "bGroup0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup0_MetaData), NewProp_bGroup0_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup1_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup1 = { "bGroup1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup1_MetaData), NewProp_bGroup1_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup2_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup2 = { "bGroup2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup2_MetaData), NewProp_bGroup2_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup3_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup3 = { "bGroup3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup3_MetaData), NewProp_bGroup3_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup4_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup4 = { "bGroup4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup4_MetaData), NewProp_bGroup4_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup5_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup5 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup5 = { "bGroup5", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup5_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup5_MetaData), NewProp_bGroup5_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup6_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup6 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup6 = { "bGroup6", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup6_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup6_MetaData), NewProp_bGroup6_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup7_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup7 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup7 = { "bGroup7", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup7_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup7_MetaData), NewProp_bGroup7_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup8_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup8 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup8 = { "bGroup8", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup8_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup8_MetaData), NewProp_bGroup8_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup9_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup9 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup9 = { "bGroup9", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup9_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup9_MetaData), NewProp_bGroup9_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup10_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup10 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup10 = { "bGroup10", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup10_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup10_MetaData), NewProp_bGroup10_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup11_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup11 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup11 = { "bGroup11", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup11_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup11_MetaData), NewProp_bGroup11_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup12_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup12 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup12 = { "bGroup12", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup12_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup12_MetaData), NewProp_bGroup12_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup13_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup13 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup13 = { "bGroup13", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup13_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup13_MetaData), NewProp_bGroup13_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup14_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup14 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup14 = { "bGroup14", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup14_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup14_MetaData), NewProp_bGroup14_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup15_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup15 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup15 = { "bGroup15", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup15_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup15_MetaData), NewProp_bGroup15_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup16_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup16 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup16 = { "bGroup16", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup16_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup16_MetaData), NewProp_bGroup16_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup17_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup17 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup17 = { "bGroup17", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup17_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup17_MetaData), NewProp_bGroup17_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup18_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup18 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup18 = { "bGroup18", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup18_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup18_MetaData), NewProp_bGroup18_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup19_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup19 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup19 = { "bGroup19", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup19_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup19_MetaData), NewProp_bGroup19_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup20_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup20 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup20 = { "bGroup20", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup20_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup20_MetaData), NewProp_bGroup20_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup21_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup21 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup21 = { "bGroup21", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup21_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup21_MetaData), NewProp_bGroup21_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup22_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup22 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup22 = { "bGroup22", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup22_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup22_MetaData), NewProp_bGroup22_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup23_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup23 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup23 = { "bGroup23", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup23_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup23_MetaData), NewProp_bGroup23_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup24_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup24 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup24 = { "bGroup24", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup24_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup24_MetaData), NewProp_bGroup24_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup25_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup25 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup25 = { "bGroup25", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup25_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup25_MetaData), NewProp_bGroup25_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup26_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup26 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup26 = { "bGroup26", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup26_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup26_MetaData), NewProp_bGroup26_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup27_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup27 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup27 = { "bGroup27", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup27_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup27_MetaData), NewProp_bGroup27_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup28_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup28 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup28 = { "bGroup28", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup28_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup28_MetaData), NewProp_bGroup28_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup29_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup29 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup29 = { "bGroup29", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup29_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup29_MetaData), NewProp_bGroup29_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup30_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup30 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup30 = { "bGroup30", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup30_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup30_MetaData), NewProp_bGroup30_MetaData) };
void Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup31_SetBit(void* Obj)
{
	((FNavAvoidanceMask*)Obj)->bGroup31 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup31 = { "bGroup31", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavAvoidanceMask), &Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup31_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroup31_MetaData), NewProp_bGroup31_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup13,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup14,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup15,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup16,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup17,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup18,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup19,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup20,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup21,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup22,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup23,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup24,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup25,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup26,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup27,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup28,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup29,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup30,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewProp_bGroup31,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NavAvoidanceMask",
	Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::PropPointers),
	sizeof(FNavAvoidanceMask),
	alignof(FNavAvoidanceMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask()
{
	if (!Z_Registration_Info_UScriptStruct_NavAvoidanceMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavAvoidanceMask.InnerSingleton, Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavAvoidanceMask.InnerSingleton;
}
// End ScriptStruct FNavAvoidanceMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationAvoidanceTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavAvoidanceMask::StaticStruct, Z_Construct_UScriptStruct_FNavAvoidanceMask_Statics::NewStructOps, TEXT("NavAvoidanceMask"), &Z_Registration_Info_UScriptStruct_NavAvoidanceMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavAvoidanceMask), 2868412061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationAvoidanceTypes_h_1167015466(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationAvoidanceTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationAvoidanceTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
