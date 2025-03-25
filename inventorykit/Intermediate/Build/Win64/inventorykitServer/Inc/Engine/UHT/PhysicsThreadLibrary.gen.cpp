// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Physics/Experimental/PhysicsThreadLibrary.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsThreadLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsThreadLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsThreadLibrary_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPhysicsThreadLibrary Function AddForce
struct Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics
{
	struct PhysicsThreadLibrary_eventAddForce_Parms
	{
		FBodyInstanceAsyncPhysicsTickHandle Handle;
		FVector Force;
		bool bAccelChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09 *\x09""Add a force to a single rigid body.\n\x09 *  This is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.\n\x09 *\n\x09 *\x09@param\x09""Force\x09\x09 Force vector to apply. Magnitude indicates strength of force.\n\x09 *  @param  bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no effect).\n\x09 */" },
		{ "CPP_Default_bAccelChange", "false" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/PhysicsThreadLibrary.h" },
		{ "ToolTip", "Add a force to a single rigid body.\nThis is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.\n\n@param  Force            Force vector to apply. Magnitude indicates strength of force.\n@param  bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no effect)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static void NewProp_bAccelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsThreadLibrary_eventAddForce_Parms, Handle), Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle, METADATA_PARAMS(0, nullptr) }; // 3408086406
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsThreadLibrary_eventAddForce_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::NewProp_bAccelChange_SetBit(void* Obj)
{
	((PhysicsThreadLibrary_eventAddForce_Parms*)Obj)->bAccelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsThreadLibrary_eventAddForce_Parms), &Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::NewProp_bAccelChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsThreadLibrary, nullptr, "AddForce", nullptr, nullptr, Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::PhysicsThreadLibrary_eventAddForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::PhysicsThreadLibrary_eventAddForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsThreadLibrary::execAddForce)
{
	P_GET_STRUCT(FBodyInstanceAsyncPhysicsTickHandle,Z_Param_Handle);
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_GET_UBOOL(Z_Param_bAccelChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPhysicsThreadLibrary::AddForce(Z_Param_Handle,Z_Param_Force,Z_Param_bAccelChange);
	P_NATIVE_END;
}
// End Class UPhysicsThreadLibrary Function AddForce

// Begin Class UPhysicsThreadLibrary
void UPhysicsThreadLibrary::StaticRegisterNativesUPhysicsThreadLibrary()
{
	UClass* Class = UPhysicsThreadLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddForce", &UPhysicsThreadLibrary::execAddForce },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsThreadLibrary);
UClass* Z_Construct_UClass_UPhysicsThreadLibrary_NoRegister()
{
	return UPhysicsThreadLibrary::StaticClass();
}
struct Z_Construct_UClass_UPhysicsThreadLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/Experimental/PhysicsThreadLibrary.h" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/PhysicsThreadLibrary.h" },
		{ "ScriptName", "PhysicsThreadLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsThreadLibrary_AddForce, "AddForce" }, // 69864256
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsThreadLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPhysicsThreadLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsThreadLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsThreadLibrary_Statics::ClassParams = {
	&UPhysicsThreadLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsThreadLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsThreadLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsThreadLibrary()
{
	if (!Z_Registration_Info_UClass_UPhysicsThreadLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsThreadLibrary.OuterSingleton, Z_Construct_UClass_UPhysicsThreadLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsThreadLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsThreadLibrary>()
{
	return UPhysicsThreadLibrary::StaticClass();
}
UPhysicsThreadLibrary::UPhysicsThreadLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsThreadLibrary);
UPhysicsThreadLibrary::~UPhysicsThreadLibrary() {}
// End Class UPhysicsThreadLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsThreadLibrary, UPhysicsThreadLibrary::StaticClass, TEXT("UPhysicsThreadLibrary"), &Z_Registration_Info_UClass_UPhysicsThreadLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsThreadLibrary), 3770677060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_555179191(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
