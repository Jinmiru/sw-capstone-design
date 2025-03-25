// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/VoipListenerSynthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoipListenerSynthComponent() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UVoipListenerSynthComponent();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UVoipListenerSynthComponent Function IsIdling
struct Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics
{
	struct VoipListenerSynthComponent_eventIsIdling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Sender" },
		{ "Comment", "/*\n\x09 * Thread safe way to get whether this synth component still has buffered packets of audio to play back.\n\x09 * This function is used by the Voice Engine to clean up voice sounds when they are not playing back audio\n\x09 * to make space for other sounds to be rendered.\n\n\x09 * @returns true if this synth component is out of audio to play. \n\x09 */" },
		{ "ModuleRelativePath", "Public/VoipListenerSynthComponent.h" },
		{ "ToolTip", "* Thread safe way to get whether this synth component still has buffered packets of audio to play back.\n* This function is used by the Voice Engine to clean up voice sounds when they are not playing back audio\n* to make space for other sounds to be rendered.\n\n* @returns true if this synth component is out of audio to play." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoipListenerSynthComponent_eventIsIdling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoipListenerSynthComponent_eventIsIdling_Parms), &Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoipListenerSynthComponent, nullptr, "IsIdling", nullptr, nullptr, Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::VoipListenerSynthComponent_eventIsIdling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::VoipListenerSynthComponent_eventIsIdling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoipListenerSynthComponent::execIsIdling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsIdling();
	P_NATIVE_END;
}
// End Class UVoipListenerSynthComponent Function IsIdling

// Begin Class UVoipListenerSynthComponent
void UVoipListenerSynthComponent::StaticRegisterNativesUVoipListenerSynthComponent()
{
	UClass* Class = UVoipListenerSynthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsIdling", &UVoipListenerSynthComponent::execIsIdling },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoipListenerSynthComponent);
UClass* Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister()
{
	return UVoipListenerSynthComponent::StaticClass();
}
struct Z_Construct_UClass_UVoipListenerSynthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "VoipListenerSynthComponent.h" },
		{ "ModuleRelativePath", "Public/VoipListenerSynthComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling, "IsIdling" }, // 830040324
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoipListenerSynthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoipListenerSynthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoipListenerSynthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoipListenerSynthComponent_Statics::ClassParams = {
	&UVoipListenerSynthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoipListenerSynthComponent()
{
	if (!Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton, Z_Construct_UClass_UVoipListenerSynthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UVoipListenerSynthComponent>()
{
	return UVoipListenerSynthComponent::StaticClass();
}
UVoipListenerSynthComponent::UVoipListenerSynthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoipListenerSynthComponent);
// End Class UVoipListenerSynthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoipListenerSynthComponent, UVoipListenerSynthComponent::StaticClass, TEXT("UVoipListenerSynthComponent"), &Z_Registration_Info_UClass_UVoipListenerSynthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoipListenerSynthComponent), 2653852431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_3646108180(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
