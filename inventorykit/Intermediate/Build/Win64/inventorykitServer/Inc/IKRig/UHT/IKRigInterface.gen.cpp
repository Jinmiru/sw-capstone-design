// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/ActorComponents/IKRigInterface.h"
#include "IKRig/Public/Rig/IKRigDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
IKRIG_API UClass* Z_Construct_UClass_UIKGoalCreatorInterface();
IKRIG_API UClass* Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoal();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Interface UIKGoalCreatorInterface Function AddIKGoals
struct IKGoalCreatorInterface_eventAddIKGoals_Parms
{
	TMap<FName,FIKRigGoal> OutGoals;
};
void IIKGoalCreatorInterface::AddIKGoals(TMap<FName,FIKRigGoal>& OutGoals)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddIKGoals instead.");
}
static FName NAME_UIKGoalCreatorInterface_AddIKGoals = FName(TEXT("AddIKGoals"));
void IIKGoalCreatorInterface::Execute_AddIKGoals(UObject* O, TMap<FName,FIKRigGoal>& OutGoals)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIKGoalCreatorInterface::StaticClass()));
	IKGoalCreatorInterface_eventAddIKGoals_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIKGoalCreatorInterface_AddIKGoals);
	if (Func)
	{
		Parms.OutGoals=OutGoals;
		O->ProcessEvent(Func, &Parms);
		OutGoals=Parms.OutGoals;
	}
	else if (auto I = (IIKGoalCreatorInterface*)(O->GetNativeInterfaceAddress(UIKGoalCreatorInterface::StaticClass())))
	{
		I->AddIKGoals_Implementation(OutGoals);
	}
}
struct Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Add your own goals to the OutGoals map (careful not to remove existing goals in the map!)*/" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigInterface.h" },
		{ "ToolTip", "Add your own goals to the OutGoals map (careful not to remove existing goals in the map!)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGoals_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutGoals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutGoals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals_ValueProp = { "OutGoals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIKRigGoal, METADATA_PARAMS(0, nullptr) }; // 81720564
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals_Key_KeyProp = { "OutGoals_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals = { "OutGoals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKGoalCreatorInterface_eventAddIKGoals_Parms, OutGoals), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 81720564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKGoalCreatorInterface, nullptr, "AddIKGoals", nullptr, nullptr, Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::PropPointers), sizeof(IKGoalCreatorInterface_eventAddIKGoals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::Function_MetaDataParams) };
static_assert(sizeof(IKGoalCreatorInterface_eventAddIKGoals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIKGoalCreatorInterface::execAddIKGoals)
{
	P_GET_TMAP_REF(FName,FIKRigGoal,Z_Param_Out_OutGoals);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIKGoals_Implementation(Z_Param_Out_OutGoals);
	P_NATIVE_END;
}
// End Interface UIKGoalCreatorInterface Function AddIKGoals

// Begin Interface UIKGoalCreatorInterface
void UIKGoalCreatorInterface::StaticRegisterNativesUIKGoalCreatorInterface()
{
	UClass* Class = UIKGoalCreatorInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddIKGoals", &IIKGoalCreatorInterface::execAddIKGoals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKGoalCreatorInterface);
UClass* Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister()
{
	return UIKGoalCreatorInterface::StaticClass();
}
struct Z_Construct_UClass_UIKGoalCreatorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals, "AddIKGoals" }, // 973285169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIKGoalCreatorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIKGoalCreatorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKGoalCreatorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKGoalCreatorInterface_Statics::ClassParams = {
	&UIKGoalCreatorInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKGoalCreatorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKGoalCreatorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKGoalCreatorInterface()
{
	if (!Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton, Z_Construct_UClass_UIKGoalCreatorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKGoalCreatorInterface>()
{
	return UIKGoalCreatorInterface::StaticClass();
}
UIKGoalCreatorInterface::UIKGoalCreatorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKGoalCreatorInterface);
UIKGoalCreatorInterface::~UIKGoalCreatorInterface() {}
// End Interface UIKGoalCreatorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKGoalCreatorInterface, UIKGoalCreatorInterface::StaticClass, TEXT("UIKGoalCreatorInterface"), &Z_Registration_Info_UClass_UIKGoalCreatorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKGoalCreatorInterface), 219931750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_1926670389(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
