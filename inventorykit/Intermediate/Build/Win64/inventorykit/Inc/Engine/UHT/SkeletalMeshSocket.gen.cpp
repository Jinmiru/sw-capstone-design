// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSocket() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USkeletalMeshSocket Function GetSocketLocation
struct Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics
{
	struct SkeletalMeshSocket_eventGetSocketLocation_Parms
	{
		const USkeletalMeshComponent* SkelComp;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp = { "SkelComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventGetSocketLocation_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelComp_MetaData), NewProp_SkelComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventGetSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSocket, nullptr, "GetSocketLocation", nullptr, nullptr, Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::SkeletalMeshSocket_eventGetSocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::SkeletalMeshSocket_eventGetSocketLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMeshSocket::execGetSocketLocation)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSocketLocation(Z_Param_SkelComp);
	P_NATIVE_END;
}
// End Class USkeletalMeshSocket Function GetSocketLocation

// Begin Class USkeletalMeshSocket Function InitializeSocketFromLocation
struct Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics
{
	struct SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms
	{
		const USkeletalMeshComponent* SkelComp;
		FVector WorldLocation;
		FVector WorldNormal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** Sets BoneName, RelativeLocation and RelativeRotation based on closest bone to WorldLocation and WorldNormal */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "Sets BoneName, RelativeLocation and RelativeRotation based on closest bone to WorldLocation and WorldNormal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp = { "SkelComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelComp_MetaData), NewProp_SkelComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldNormal = { "WorldNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, WorldNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSocket, nullptr, "InitializeSocketFromLocation", nullptr, nullptr, Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMeshSocket::execInitializeSocketFromLocation)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_STRUCT(FVector,Z_Param_WorldNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeSocketFromLocation(Z_Param_SkelComp,Z_Param_WorldLocation,Z_Param_WorldNormal);
	P_NATIVE_END;
}
// End Class USkeletalMeshSocket Function InitializeSocketFromLocation

// Begin Class USkeletalMeshSocket
void USkeletalMeshSocket::StaticRegisterNativesUSkeletalMeshSocket()
{
	UClass* Class = USkeletalMeshSocket::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSocketLocation", &USkeletalMeshSocket::execGetSocketLocation },
		{ "InitializeSocketFromLocation", &USkeletalMeshSocket::execInitializeSocketFromLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshSocket);
UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister()
{
	return USkeletalMeshSocket::StaticClass();
}
struct Z_Construct_UClass_USkeletalMeshSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Actor" },
		{ "IncludePath", "Engine/SkeletalMeshSocket.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "Comment", "/** \n\x09 *\x09""Defines a named attachment location on the USkeletalMesh. \n\x09 *\x09These are set up in editor and used as a shortcut instead of specifying \n\x09 *\x09""everything explicitly to AttachComponent in the SkeletalMeshComponent.\n\x09 *\x09The Outer of a SkeletalMeshSocket should always be the USkeletalMesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "Defines a named attachment location on the USkeletalMesh.\nThese are set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent.\nThe Outer of a SkeletalMeshSocket should always be the USkeletalMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceAlwaysAnimated_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "Comment", "/** If true then the hierarchy of bones this socket is attached to will always be \n\x09    evaluated, even if it had previously been removed due to the current lod setting */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "If true then the hierarchy of bones this socket is attached to will always be\n          evaluated, even if it had previously been removed due to the current lod setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
	static void NewProp_bForceAlwaysAnimated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceAlwaysAnimated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation, "GetSocketLocation" }, // 92813216
		{ &Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation, "InitializeSocketFromLocation" }, // 2730928577
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshSocket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshSocket, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshSocket, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshSocket, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeLocation_MetaData), NewProp_RelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshSocket, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeRotation_MetaData), NewProp_RelativeRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshSocket, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeScale_MetaData), NewProp_RelativeScale_MetaData) };
void Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_SetBit(void* Obj)
{
	((USkeletalMeshSocket*)Obj)->bForceAlwaysAnimated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated = { "bForceAlwaysAnimated", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkeletalMeshSocket), &Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceAlwaysAnimated_MetaData), NewProp_bForceAlwaysAnimated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkeletalMeshSocket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshSocket_Statics::ClassParams = {
	&USkeletalMeshSocket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshSocket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalMeshSocket()
{
	if (!Z_Registration_Info_UClass_USkeletalMeshSocket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshSocket.OuterSingleton, Z_Construct_UClass_USkeletalMeshSocket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalMeshSocket.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkeletalMeshSocket>()
{
	return USkeletalMeshSocket::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshSocket);
USkeletalMeshSocket::~USkeletalMeshSocket() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshSocket)
// End Class USkeletalMeshSocket

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshSocket, USkeletalMeshSocket::StaticClass, TEXT("USkeletalMeshSocket"), &Z_Registration_Info_UClass_USkeletalMeshSocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshSocket), 2820229577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_1317005948(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
