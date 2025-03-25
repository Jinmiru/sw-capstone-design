// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/SequencerAnimationOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerAnimationOverride() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationOverride();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationOverride_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Interface USequencerAnimationOverride Function AllowsCinematicOverride
struct SequencerAnimationOverride_eventAllowsCinematicOverride_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SequencerAnimationOverride_eventAllowsCinematicOverride_Parms()
		: ReturnValue(false)
	{
	}
};
bool ISequencerAnimationOverride::AllowsCinematicOverride() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AllowsCinematicOverride instead.");
	SequencerAnimationOverride_eventAllowsCinematicOverride_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USequencerAnimationOverride_AllowsCinematicOverride = FName(TEXT("AllowsCinematicOverride"));
bool ISequencerAnimationOverride::Execute_AllowsCinematicOverride(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USequencerAnimationOverride::StaticClass()));
	SequencerAnimationOverride_eventAllowsCinematicOverride_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USequencerAnimationOverride_AllowsCinematicOverride);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISequencerAnimationOverride*)(O->GetNativeInterfaceAddress(USequencerAnimationOverride::StaticClass())))
	{
		Parms.ReturnValue = I->AllowsCinematicOverride_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer" },
		{ "Comment", "// Whether this animation blueprint allows Sequencer to nuke this anim instance and replace it during Sequencer playback.\n" },
		{ "ModuleRelativePath", "Public/SequencerAnimationOverride.h" },
		{ "ToolTip", "Whether this animation blueprint allows Sequencer to nuke this anim instance and replace it during Sequencer playback." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SequencerAnimationOverride_eventAllowsCinematicOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SequencerAnimationOverride_eventAllowsCinematicOverride_Parms), &Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerAnimationOverride, nullptr, "AllowsCinematicOverride", nullptr, nullptr, Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::PropPointers), sizeof(SequencerAnimationOverride_eventAllowsCinematicOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(SequencerAnimationOverride_eventAllowsCinematicOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISequencerAnimationOverride::execAllowsCinematicOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AllowsCinematicOverride_Implementation();
	P_NATIVE_END;
}
// End Interface USequencerAnimationOverride Function AllowsCinematicOverride

// Begin Interface USequencerAnimationOverride Function GetSequencerAnimSlotNames
struct SequencerAnimationOverride_eventGetSequencerAnimSlotNames_Parms
{
	TArray<FName> ReturnValue;
};
TArray<FName> ISequencerAnimationOverride::GetSequencerAnimSlotNames() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSequencerAnimSlotNames instead.");
	SequencerAnimationOverride_eventGetSequencerAnimSlotNames_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USequencerAnimationOverride_GetSequencerAnimSlotNames = FName(TEXT("GetSequencerAnimSlotNames"));
TArray<FName> ISequencerAnimationOverride::Execute_GetSequencerAnimSlotNames(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USequencerAnimationOverride::StaticClass()));
	SequencerAnimationOverride_eventGetSequencerAnimSlotNames_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USequencerAnimationOverride_GetSequencerAnimSlotNames);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISequencerAnimationOverride*)(O->GetNativeInterfaceAddress(USequencerAnimationOverride::StaticClass())))
	{
		Parms.ReturnValue = I->GetSequencerAnimSlotNames_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer" },
		{ "Comment", "// Should return a list of valid slot names for Sequencer to output to in the case that Sequencer is not permitted to nuke the anim instance.\n// Will be chosen by the user in drop down on the skeletal animation section properties. Should be named descriptively, as in some contexts (UEFN), the user\n// will not be able to view the animation blueprint itself to determine the mixing behavior of the slot.\n" },
		{ "ModuleRelativePath", "Public/SequencerAnimationOverride.h" },
		{ "ToolTip", "Should return a list of valid slot names for Sequencer to output to in the case that Sequencer is not permitted to nuke the anim instance.\nWill be chosen by the user in drop down on the skeletal animation section properties. Should be named descriptively, as in some contexts (UEFN), the user\nwill not be able to view the animation blueprint itself to determine the mixing behavior of the slot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerAnimationOverride_eventGetSequencerAnimSlotNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerAnimationOverride, nullptr, "GetSequencerAnimSlotNames", nullptr, nullptr, Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::PropPointers), sizeof(SequencerAnimationOverride_eventGetSequencerAnimSlotNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(SequencerAnimationOverride_eventGetSequencerAnimSlotNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISequencerAnimationOverride::execGetSequencerAnimSlotNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetSequencerAnimSlotNames_Implementation();
	P_NATIVE_END;
}
// End Interface USequencerAnimationOverride Function GetSequencerAnimSlotNames

// Begin Interface USequencerAnimationOverride
void USequencerAnimationOverride::StaticRegisterNativesUSequencerAnimationOverride()
{
	UClass* Class = USequencerAnimationOverride::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AllowsCinematicOverride", &ISequencerAnimationOverride::execAllowsCinematicOverride },
		{ "GetSequencerAnimSlotNames", &ISequencerAnimationOverride::execGetSequencerAnimSlotNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerAnimationOverride);
UClass* Z_Construct_UClass_USequencerAnimationOverride_NoRegister()
{
	return USequencerAnimationOverride::StaticClass();
}
struct Z_Construct_UClass_USequencerAnimationOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SequencerAnimationOverride.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USequencerAnimationOverride_AllowsCinematicOverride, "AllowsCinematicOverride" }, // 4011802979
		{ &Z_Construct_UFunction_USequencerAnimationOverride_GetSequencerAnimSlotNames, "GetSequencerAnimSlotNames" }, // 2619392226
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISequencerAnimationOverride>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USequencerAnimationOverride_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerAnimationOverride_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerAnimationOverride_Statics::ClassParams = {
	&USequencerAnimationOverride::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerAnimationOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_USequencerAnimationOverride_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequencerAnimationOverride()
{
	if (!Z_Registration_Info_UClass_USequencerAnimationOverride.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerAnimationOverride.OuterSingleton, Z_Construct_UClass_USequencerAnimationOverride_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequencerAnimationOverride.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<USequencerAnimationOverride>()
{
	return USequencerAnimationOverride::StaticClass();
}
USequencerAnimationOverride::USequencerAnimationOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerAnimationOverride);
USequencerAnimationOverride::~USequencerAnimationOverride() {}
// End Interface USequencerAnimationOverride

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequencerAnimationOverride, USequencerAnimationOverride::StaticClass, TEXT("USequencerAnimationOverride"), &Z_Registration_Info_UClass_USequencerAnimationOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerAnimationOverride), 3195878124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_1996694016(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
