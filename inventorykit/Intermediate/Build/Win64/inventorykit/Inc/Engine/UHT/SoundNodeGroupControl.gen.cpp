// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeGroupControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeGroupControl() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeGroupControl
void USoundNodeGroupControl::StaticRegisterNativesUSoundNodeGroupControl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeGroupControl);
UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister()
{
	return USoundNodeGroupControl::StaticClass();
}
struct Z_Construct_UClass_USoundNodeGroupControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Plays different sounds depending on the number of active sounds\n * Any time a new sound is played, the first group that has an available slot will be chosen\n */" },
		{ "DisplayName", "Group Control" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeGroupControl.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeGroupControl.h" },
		{ "ToolTip", "Plays different sounds depending on the number of active sounds\nAny time a new sound is played, the first group that has an available slot will be chosen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupSizes_MetaData[] = {
		{ "Category", "GroupControl" },
		{ "Comment", "/* How many active sounds are allowed for each group */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeGroupControl.h" },
		{ "ToolTip", "How many active sounds are allowed for each group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupSizes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupSizes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeGroupControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_Inner = { "GroupSizes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes = { "GroupSizes", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeGroupControl, GroupSizes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupSizes_MetaData), NewProp_GroupSizes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeGroupControl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeGroupControl_Statics::ClassParams = {
	&USoundNodeGroupControl::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeGroupControl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeGroupControl()
{
	if (!Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton, Z_Construct_UClass_USoundNodeGroupControl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeGroupControl>()
{
	return USoundNodeGroupControl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeGroupControl);
USoundNodeGroupControl::~USoundNodeGroupControl() {}
// End Class USoundNodeGroupControl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeGroupControl, USoundNodeGroupControl::StaticClass, TEXT("USoundNodeGroupControl"), &Z_Registration_Info_UClass_USoundNodeGroupControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeGroupControl), 2462108903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_2821585553(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
