// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimSubsystem_PropertyAccess.h"
#include "Runtime/Engine/Public/PropertyAccess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_PropertyAccess() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessLibrary();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAnimPropertyAccessCallSite
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite;
static UEnum* EAnimPropertyAccessCallSite_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimPropertyAccessCallSite"));
	}
	return Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimPropertyAccessCallSite>()
{
	return EAnimPropertyAccessCallSite_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// The various call sites we can call into the property access library\n" },
		{ "GameThread_Batched_PostEventGraph.Comment", "// Access is made on the game thread after the event graph (and NativeUpdateAnimation) is run\n" },
		{ "GameThread_Batched_PostEventGraph.DisplayName", "Post-Event Graph" },
		{ "GameThread_Batched_PostEventGraph.Name", "EAnimPropertyAccessCallSite::GameThread_Batched_PostEventGraph" },
		{ "GameThread_Batched_PostEventGraph.ToolTip", "Access is made on the game thread after the event graph (and NativeUpdateAnimation) is run" },
		{ "GameThread_Batched_PreEventGraph.Comment", "// Access is made on the game thread before the event graph (and NativeUpdateAnimation) is run\n" },
		{ "GameThread_Batched_PreEventGraph.DisplayName", "Pre-Event Graph" },
		{ "GameThread_Batched_PreEventGraph.Name", "EAnimPropertyAccessCallSite::GameThread_Batched_PreEventGraph" },
		{ "GameThread_Batched_PreEventGraph.ToolTip", "Access is made on the game thread before the event graph (and NativeUpdateAnimation) is run" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_PropertyAccess.h" },
		{ "ToolTip", "The various call sites we can call into the property access library" },
		{ "WorkerThread_Batched_PostEventGraph.Comment", "// Access is made on a worker thread after BlueprintThreadSafeUpdateAnimation is run\n" },
		{ "WorkerThread_Batched_PostEventGraph.DisplayName", "Post-Thread Safe Update Animation" },
		{ "WorkerThread_Batched_PostEventGraph.Name", "EAnimPropertyAccessCallSite::WorkerThread_Batched_PostEventGraph" },
		{ "WorkerThread_Batched_PostEventGraph.ToolTip", "Access is made on a worker thread after BlueprintThreadSafeUpdateAnimation is run" },
		{ "WorkerThread_Batched_PreEventGraph.Comment", "// Access is made on a worker thread before BlueprintThreadSafeUpdateAnimation is run\n" },
		{ "WorkerThread_Batched_PreEventGraph.DisplayName", "Pre-Thread Safe Update Animation" },
		{ "WorkerThread_Batched_PreEventGraph.Name", "EAnimPropertyAccessCallSite::WorkerThread_Batched_PreEventGraph" },
		{ "WorkerThread_Batched_PreEventGraph.ToolTip", "Access is made on a worker thread before BlueprintThreadSafeUpdateAnimation is run" },
		{ "WorkerThread_Unbatched.Comment", "// Access is made on a worker thread in the anim graph or in a BP function\n" },
		{ "WorkerThread_Unbatched.DisplayName", "Thread Safe" },
		{ "WorkerThread_Unbatched.Name", "EAnimPropertyAccessCallSite::WorkerThread_Unbatched" },
		{ "WorkerThread_Unbatched.ToolTip", "Access is made on a worker thread in the anim graph or in a BP function" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimPropertyAccessCallSite::WorkerThread_Unbatched", (int64)EAnimPropertyAccessCallSite::WorkerThread_Unbatched },
		{ "EAnimPropertyAccessCallSite::WorkerThread_Batched_PreEventGraph", (int64)EAnimPropertyAccessCallSite::WorkerThread_Batched_PreEventGraph },
		{ "EAnimPropertyAccessCallSite::WorkerThread_Batched_PostEventGraph", (int64)EAnimPropertyAccessCallSite::WorkerThread_Batched_PostEventGraph },
		{ "EAnimPropertyAccessCallSite::GameThread_Batched_PreEventGraph", (int64)EAnimPropertyAccessCallSite::GameThread_Batched_PreEventGraph },
		{ "EAnimPropertyAccessCallSite::GameThread_Batched_PostEventGraph", (int64)EAnimPropertyAccessCallSite::GameThread_Batched_PostEventGraph },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimPropertyAccessCallSite",
	"EAnimPropertyAccessCallSite",
	Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite()
{
	if (!Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.InnerSingleton, Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.InnerSingleton;
}
// End Enum EAnimPropertyAccessCallSite

// Begin ScriptStruct FAnimSubsystem_PropertyAccess
static_assert(std::is_polymorphic<FAnimSubsystem_PropertyAccess>() == std::is_polymorphic<FAnimSubsystem>(), "USTRUCT FAnimSubsystem_PropertyAccess cannot be polymorphic unless super FAnimSubsystem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystem_PropertyAccess;
class UScriptStruct* FAnimSubsystem_PropertyAccess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_PropertyAccess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystem_PropertyAccess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystem_PropertyAccess"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_PropertyAccess.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystem_PropertyAccess>()
{
	return FAnimSubsystem_PropertyAccess::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_PropertyAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_PropertyAccess.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Library;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystem_PropertyAccess>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSubsystem_PropertyAccess, Library), Z_Construct_UScriptStruct_FPropertyAccessLibrary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Library_MetaData), NewProp_Library_MetaData) }; // 3494736257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::NewProp_Library,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimSubsystem,
	&NewStructOps,
	"AnimSubsystem_PropertyAccess",
	Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::PropPointers),
	sizeof(FAnimSubsystem_PropertyAccess),
	alignof(FAnimSubsystem_PropertyAccess),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_PropertyAccess.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystem_PropertyAccess.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_PropertyAccess.InnerSingleton;
}
// End ScriptStruct FAnimSubsystem_PropertyAccess

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimPropertyAccessCallSite_StaticEnum, TEXT("EAnimPropertyAccessCallSite"), &Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1709854045U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimSubsystem_PropertyAccess::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::NewStructOps, TEXT("AnimSubsystem_PropertyAccess"), &Z_Registration_Info_UScriptStruct_AnimSubsystem_PropertyAccess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystem_PropertyAccess), 2858681116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h_2449555028(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
