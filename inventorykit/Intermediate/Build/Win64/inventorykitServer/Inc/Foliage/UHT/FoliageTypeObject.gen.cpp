// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/FoliageTypeObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageTypeObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin ScriptStruct FFoliageTypeObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoliageTypeObject;
class UScriptStruct* FFoliageTypeObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageTypeObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoliageTypeObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageTypeObject, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageTypeObject"));
	}
	return Z_Registration_Info_UScriptStruct_FoliageTypeObject.OuterSingleton;
}
template<> FOLIAGE_API UScriptStruct* StaticStruct<FFoliageTypeObject>()
{
	return FFoliageTypeObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFoliageTypeObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A wrapper struct used to allow the use of either FoliageType assets or FoliageType blueprint classes */" },
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
		{ "ToolTip", "A wrapper struct used to allow the use of either FoliageType assets or FoliageType blueprint classes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageTypeObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Foliage.FoliageType_InstancedStaticMesh,/Script/Foliage.FoliageType_Actor,/Script/Engine.Blueprint" },
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** The foliage type that will be spawned by the procedural foliage simulation */" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
		{ "ThumbnailSize", "X=40 Y=40" },
		{ "ToolTip", "The foliage type that will be spawned by the procedural foliage simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeInstance_MetaData[] = {
		{ "Comment", "/** The actual instance of the foliage type that is used for spawning */" },
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
		{ "ToolTip", "The actual instance of the foliage type that is used for spawning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAsset_MetaData[] = {
		{ "Comment", "/** Whether this contains an asset object (as opposed to a BP class) */" },
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
		{ "ToolTip", "Whether this contains an asset object (as opposed to a BP class)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageTypeObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeInstance;
	static void NewProp_bIsAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAsset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageTypeObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_FoliageTypeObject = { "FoliageTypeObject", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFoliageTypeObject, FoliageTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageTypeObject_MetaData), NewProp_FoliageTypeObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_TypeInstance = { "TypeInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFoliageTypeObject, TypeInstance), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeInstance_MetaData), NewProp_TypeInstance_MetaData) };
void Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset_SetBit(void* Obj)
{
	((FFoliageTypeObject*)Obj)->bIsAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset = { "bIsAsset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFoliageTypeObject), &Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAsset_MetaData), NewProp_bIsAsset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFoliageTypeObject, Type_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_FoliageTypeObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_TypeInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	&NewStructOps,
	"FoliageTypeObject",
	Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::PropPointers),
	sizeof(FFoliageTypeObject),
	alignof(FFoliageTypeObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageTypeObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoliageTypeObject.InnerSingleton, Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FoliageTypeObject.InnerSingleton;
}
// End ScriptStruct FFoliageTypeObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageTypeObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFoliageTypeObject::StaticStruct, Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewStructOps, TEXT("FoliageTypeObject"), &Z_Registration_Info_UScriptStruct_FoliageTypeObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoliageTypeObject), 812349950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageTypeObject_h_932369487(TEXT("/Script/Foliage"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageTypeObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageTypeObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
