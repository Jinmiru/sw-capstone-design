// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCompress_RemoveEverySecondKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveEverySecondKey() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCompress_RemoveEverySecondKey
void UAnimCompress_RemoveEverySecondKey::StaticRegisterNativesUAnimCompress_RemoveEverySecondKey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_RemoveEverySecondKey);
UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister()
{
	return UAnimCompress_RemoveEverySecondKey::StaticClass();
}
struct Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinKeys_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveEverySecondKey" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Animations with fewer than MinKeys will not lose any keys. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ToolTip", "Animations with fewer than MinKeys will not lose any keys." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartAtSecondKey_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveEverySecondKey" },
		{ "Comment", "/**\n\x09 * If bStartAtSecondKey is true, remove keys 1,3,5,etc.\n\x09 * If bStartAtSecondKey is false, remove keys 0,2,4,etc.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ToolTip", "If bStartAtSecondKey is true, remove keys 1,3,5,etc.\nIf bStartAtSecondKey is false, remove keys 0,2,4,etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinKeys;
	static void NewProp_bStartAtSecondKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAtSecondKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_RemoveEverySecondKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys = { "MinKeys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCompress_RemoveEverySecondKey, MinKeys), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinKeys_MetaData), NewProp_MinKeys_MetaData) };
void Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_SetBit(void* Obj)
{
	((UAnimCompress_RemoveEverySecondKey*)Obj)->bStartAtSecondKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey = { "bStartAtSecondKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimCompress_RemoveEverySecondKey), &Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartAtSecondKey_MetaData), NewProp_bStartAtSecondKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimCompress,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::ClassParams = {
	&UAnimCompress_RemoveEverySecondKey::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey()
{
	if (!Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton, Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCompress_RemoveEverySecondKey>()
{
	return UAnimCompress_RemoveEverySecondKey::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveEverySecondKey);
UAnimCompress_RemoveEverySecondKey::~UAnimCompress_RemoveEverySecondKey() {}
// End Class UAnimCompress_RemoveEverySecondKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey, UAnimCompress_RemoveEverySecondKey::StaticClass, TEXT("UAnimCompress_RemoveEverySecondKey"), &Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_RemoveEverySecondKey), 2779568417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_2904442404(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
