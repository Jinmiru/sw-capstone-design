// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SkinnedAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset();
ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USkinnedAsset Function FindSocket
struct Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics
{
	struct SkinnedAsset_eventFindSocket_Parms
	{
		FName InSocketName;
		USkeletalMeshSocket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Find a socket object in this SkeletalMesh by name.\n\x09 * Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAsset.h" },
		{ "ToolTip", "Find a socket object in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedAsset_eventFindSocket_Parms, InSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedAsset_eventFindSocket_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::NewProp_InSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedAsset, nullptr, "FindSocket", nullptr, nullptr, Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::SkinnedAsset_eventFindSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::SkinnedAsset_eventFindSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedAsset_FindSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedAsset::execFindSocket)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName);
	P_NATIVE_END;
}
// End Class USkinnedAsset Function FindSocket

// Begin Class USkinnedAsset Function FindSocketInfo
struct Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics
{
	struct SkinnedAsset_eventFindSocketInfo_Parms
	{
		FName InSocketName;
		FTransform OutTransform;
		int32 OutBoneIndex;
		int32 OutIndex;
		USkeletalMeshSocket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Find a socket object and associated info in this SkeletalMesh by name.\n\x09 * Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09 * Also returns the index for the socket allowing for future fast access via GetSocketByIndex()\n\x09 * Also returns the socket transform and the bone index (if any)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAsset.h" },
		{ "ToolTip", "Find a socket object and associated info in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\nAlso returns the index for the socket allowing for future fast access via GetSocketByIndex()\nAlso returns the socket transform and the bone index (if any)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutBoneIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, InSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutBoneIndex = { "OutBoneIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, OutBoneIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_InSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutBoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedAsset, nullptr, "FindSocketInfo", nullptr, nullptr, Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::SkinnedAsset_eventFindSocketInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::SkinnedAsset_eventFindSocketInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedAsset_FindSocketInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedAsset::execFindSocketInfo)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutBoneIndex);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketInfo(Z_Param_InSocketName,Z_Param_Out_OutTransform,Z_Param_Out_OutBoneIndex,Z_Param_Out_OutIndex);
	P_NATIVE_END;
}
// End Class USkinnedAsset Function FindSocketInfo

// Begin Class USkinnedAsset
void USkinnedAsset::StaticRegisterNativesUSkinnedAsset()
{
	UClass* Class = USkinnedAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindSocket", &USkinnedAsset::execFindSocket },
		{ "FindSocketInfo", &USkinnedAsset::execFindSocketInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinnedAsset);
UClass* Z_Construct_UClass_USkinnedAsset_NoRegister()
{
	return USkinnedAsset::StaticClass();
}
struct Z_Construct_UClass_USkinnedAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/SkinnedAsset.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedAsset_FindSocket, "FindSocket" }, // 2465090583
		{ &Z_Construct_UFunction_USkinnedAsset_FindSocketInfo, "FindSocketInfo" }, // 2652070146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkinnedAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkinnedAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister, (int32)VTABLE_OFFSET(USkinnedAsset, IInterface_AsyncCompilation), false },  // 1385598614
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinnedAsset_Statics::ClassParams = {
	&USkinnedAsset::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USkinnedAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkinnedAsset()
{
	if (!Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton, Z_Construct_UClass_USkinnedAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkinnedAsset>()
{
	return USkinnedAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkinnedAsset);
// End Class USkinnedAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkinnedAsset, USkinnedAsset::StaticClass, TEXT("USkinnedAsset"), &Z_Registration_Info_UClass_USkinnedAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinnedAsset), 1771769258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_112242822(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
