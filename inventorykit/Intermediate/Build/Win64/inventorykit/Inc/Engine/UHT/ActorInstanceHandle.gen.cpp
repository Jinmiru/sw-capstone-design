// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ActorInstanceHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorInstanceHandle() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FActorInstanceHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorInstanceHandle;
class UScriptStruct* FActorInstanceHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorInstanceHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorInstanceHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorInstanceHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorInstanceHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ActorInstanceHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorInstanceHandle>()
{
	return FActorInstanceHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorInstanceHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handle to a unique object. This may specify a full weigh actor or it may only specify the actor instance that represents the same object.\n * \n * @note The handle has game thread constraints related to UObjects and should be used carefully from other threads.\n * \n *\x09""Can only be used on the game thread\n *\x09-\x09""all constructors \n *\x09-\x09""all getters (GetXYZ, FetchActor, IsActorValid, DoesRepresent) *\x09\n *\x09-\x09""comparison operators against live AActor pointer\n *\x09\n *\x09""Can be used on any thread\n *\x09-\x09MakeActorHandleToResolve to create a handle that will be lazily resolved on the game thread\n *\x09\x09since it only stores a weak object ptr without any access to the live object\n *\x09-\x09handle validity and comparison operators against another handle (i.e. IsValid(), operator==|!=(const FActorInstanceHandle& Other))\n */" },
		{ "ModuleRelativePath", "Classes/Engine/ActorInstanceHandle.h" },
		{ "ToolTip", "Handle to a unique object. This may specify a full weigh actor or it may only specify the actor instance that represents the same object.\n\n@note The handle has game thread constraints related to UObjects and should be used carefully from other threads.\n\n    Can only be used on the game thread\n    -       all constructors\n    -       all getters (GetXYZ, FetchActor, IsActorValid, DoesRepresent) *\n    -       comparison operators against live AActor pointer\n\n    Can be used on any thread\n    -       MakeActorHandleToResolve to create a handle that will be lazily resolved on the game thread\n            since it only stores a weak object ptr without any access to the live object\n    -       handle validity and comparison operators against another handle (i.e. IsValid(), operator==|!=(const FActorInstanceHandle& Other))" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceObject_MetaData[] = {
		{ "Comment", "/**\n\x09 * Weak UObject pointer used for two purposes:\n\x09 *  - a resolved handle uses it to store the AActor\n\x09 *  - a handle to be resolved uses it to store the UPrimitiveComponent provided by MakeActorHandleToResolve \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/ActorInstanceHandle.h" },
		{ "ToolTip", "Weak UObject pointer used for two purposes:\n - a resolved handle uses it to store the AActor\n - a handle to be resolved uses it to store the UPrimitiveComponent provided by MakeActorHandleToResolve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ReferenceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorInstanceHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewProp_ReferenceObject = { "ReferenceObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorInstanceHandle, ReferenceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceObject_MetaData), NewProp_ReferenceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewProp_ReferenceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActorInstanceHandle",
	Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::PropPointers),
	sizeof(FActorInstanceHandle),
	alignof(FActorInstanceHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle()
{
	if (!Z_Registration_Info_UScriptStruct_ActorInstanceHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorInstanceHandle.InnerSingleton, Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorInstanceHandle.InnerSingleton;
}
// End ScriptStruct FActorInstanceHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorInstanceHandle::StaticStruct, Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewStructOps, TEXT("ActorInstanceHandle"), &Z_Registration_Info_UScriptStruct_ActorInstanceHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorInstanceHandle), 2065137789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_3039367128(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
