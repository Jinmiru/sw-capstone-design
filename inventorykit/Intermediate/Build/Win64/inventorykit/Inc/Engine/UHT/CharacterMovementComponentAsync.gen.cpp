// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/CharacterMovementComponentAsync.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementComponentAsync() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FFindFloorResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FindFloorResult;
class UScriptStruct* FFindFloorResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FindFloorResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FindFloorResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFindFloorResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FindFloorResult"));
	}
	return Z_Registration_Info_UScriptStruct_FindFloorResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFindFloorResult>()
{
	return FFindFloorResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFindFloorResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data about the floor for walking movement, used by CharacterMovementComponent. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "Data about the floor for walking movement, used by CharacterMovementComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/**\n\x09\x09* True if there was a blocking hit in the floor test that was NOT in initial penetration.\n\x09\x09* The HitResult can give more info about other circumstances.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "True if there was a blocking hit in the floor test that was NOT in initial penetration.\nThe HitResult can give more info about other circumstances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWalkableFloor_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** True if the hit found a valid walkable floor. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "True if the hit found a valid walkable floor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLineTrace_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface). */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorDist_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** The distance to the floor, computed from the swept capsule trace. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "The distance to the floor, computed from the swept capsule trace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineDist_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** The distance to the floor, computed from the trace. Only valid if bLineTrace is true. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "The distance to the floor, computed from the trace. Only valid if bLineTrace is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point." },
	};
#endif // WITH_METADATA
	static void NewProp_bBlockingHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static void NewProp_bWalkableFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkableFloor;
	static void NewProp_bLineTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFindFloorResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
{
	((FFindFloorResult*)Obj)->bBlockingHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFindFloorResult), &Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockingHit_MetaData), NewProp_bBlockingHit_MetaData) };
void Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor_SetBit(void* Obj)
{
	((FFindFloorResult*)Obj)->bWalkableFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor = { "bWalkableFloor", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFindFloorResult), &Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWalkableFloor_MetaData), NewProp_bWalkableFloor_MetaData) };
void Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace_SetBit(void* Obj)
{
	((FFindFloorResult*)Obj)->bLineTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace = { "bLineTrace", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFindFloorResult), &Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLineTrace_MetaData), NewProp_bLineTrace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_FloorDist = { "FloorDist", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFindFloorResult, FloorDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorDist_MetaData), NewProp_FloorDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_LineDist = { "LineDist", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFindFloorResult, LineDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineDist_MetaData), NewProp_LineDist_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFindFloorResult, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFindFloorResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_FloorDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_LineDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"FindFloorResult",
	Z_Construct_UScriptStruct_FFindFloorResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::PropPointers),
	sizeof(FFindFloorResult),
	alignof(FFindFloorResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFindFloorResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult()
{
	if (!Z_Registration_Info_UScriptStruct_FindFloorResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FindFloorResult.InnerSingleton, Z_Construct_UScriptStruct_FFindFloorResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FindFloorResult.InnerSingleton;
}
// End ScriptStruct FFindFloorResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFindFloorResult::StaticStruct, Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewStructOps, TEXT("FindFloorResult"), &Z_Registration_Info_UScriptStruct_FindFloorResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFindFloorResult), 3134433334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_2470378195(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
