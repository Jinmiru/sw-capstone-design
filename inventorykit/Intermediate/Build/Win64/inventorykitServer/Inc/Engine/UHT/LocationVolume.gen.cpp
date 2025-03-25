// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LocationVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationVolume() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_ALocationVolume();
ENGINE_API UClass* Z_Construct_UClass_ALocationVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALocationVolume Function IsLoaded
struct Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics
{
	struct LocationVolume_eventIsLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Return if this location volume is loaded */" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
		{ "ToolTip", "Return if this location volume is loaded" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocationVolume_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocationVolume_eventIsLoaded_Parms), &Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocationVolume, nullptr, "IsLoaded", nullptr, nullptr, Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::LocationVolume_eventIsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::LocationVolume_eventIsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALocationVolume_IsLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALocationVolume::execIsLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoaded();
	P_NATIVE_END;
}
// End Class ALocationVolume Function IsLoaded

// Begin Class ALocationVolume Function Load
struct Z_Construct_UFunction_ALocationVolume_Load_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Load this location volume */" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
		{ "ToolTip", "Load this location volume" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocationVolume_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocationVolume, nullptr, "Load", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_Load_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALocationVolume_Load_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALocationVolume_Load()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALocationVolume_Load_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALocationVolume::execLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Load();
	P_NATIVE_END;
}
// End Class ALocationVolume Function Load

// Begin Class ALocationVolume Function Unload
struct Z_Construct_UFunction_ALocationVolume_Unload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Unload this location volume */" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
		{ "ToolTip", "Unload this location volume" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocationVolume_Unload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocationVolume, nullptr, "Unload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_Unload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALocationVolume_Unload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALocationVolume_Unload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALocationVolume_Unload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALocationVolume::execUnload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unload();
	P_NATIVE_END;
}
// End Class ALocationVolume Function Unload

// Begin Class ALocationVolume
void ALocationVolume::StaticRegisterNativesALocationVolume()
{
	UClass* Class = ALocationVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsLoaded", &ALocationVolume::execIsLoaded },
		{ "Load", &ALocationVolume::execLoad },
		{ "Unload", &ALocationVolume::execUnload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALocationVolume);
UClass* Z_Construct_UClass_ALocationVolume_NoRegister()
{
	return ALocationVolume::StaticClass();
}
struct Z_Construct_UClass_ALocationVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A volume representing a location in the world. Used for World Partition loading regions.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "LocationVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A volume representing a location in the world. Used for World Partition loading regions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "LocationVolume" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALocationVolume_IsLoaded, "IsLoaded" }, // 2076712603
		{ &Z_Construct_UFunction_ALocationVolume_Load, "Load" }, // 498991007
		{ &Z_Construct_UFunction_ALocationVolume_Unload, "Unload" }, // 741516059
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocationVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALocationVolume_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocationVolume, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALocationVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocationVolume_Statics::NewProp_DebugColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocationVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALocationVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocationVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALocationVolume_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister, (int32)VTABLE_OFFSET(ALocationVolume, IWorldPartitionActorLoaderInterface), false },  // 3483619770
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALocationVolume_Statics::ClassParams = {
	&ALocationVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALocationVolume_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALocationVolume_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALocationVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ALocationVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALocationVolume()
{
	if (!Z_Registration_Info_UClass_ALocationVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALocationVolume.OuterSingleton, Z_Construct_UClass_ALocationVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALocationVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALocationVolume>()
{
	return ALocationVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALocationVolume);
ALocationVolume::~ALocationVolume() {}
// End Class ALocationVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALocationVolume, ALocationVolume::StaticClass, TEXT("ALocationVolume"), &Z_Registration_Info_UClass_ALocationVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALocationVolume), 866243841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_4016912542(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
