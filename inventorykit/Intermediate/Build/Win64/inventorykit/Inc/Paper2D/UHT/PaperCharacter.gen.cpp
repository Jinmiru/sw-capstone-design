// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class APaperCharacter
void APaperCharacter::StaticRegisterNativesAPaperCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperCharacter);
UClass* Z_Construct_UClass_APaperCharacter_NoRegister()
{
	return APaperCharacter::StaticClass();
}
struct Z_Construct_UClass_APaperCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// APaperCharacter behaves like ACharacter, but uses a UPaperFlipbookComponent instead of a USkeletalMeshComponent as a visual representation\n// Note: The variable named Mesh will not be set up on this actor!\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PaperCharacter.h" },
		{ "ModuleRelativePath", "Classes/PaperCharacter.h" },
		{ "ToolTip", "APaperCharacter behaves like ACharacter, but uses a UPaperFlipbookComponent instead of a USkeletalMeshComponent as a visual representation\nNote: The variable named Mesh will not be set up on this actor!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The main skeletal mesh associated with this Character (optional sub-object). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperCharacter.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperCharacter, Sprite), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprite_MetaData), NewProp_Sprite_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaperCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperCharacter_Statics::ClassParams = {
	&APaperCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APaperCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APaperCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaperCharacter()
{
	if (!Z_Registration_Info_UClass_APaperCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperCharacter.OuterSingleton, Z_Construct_UClass_APaperCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaperCharacter.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<APaperCharacter>()
{
	return APaperCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaperCharacter);
APaperCharacter::~APaperCharacter() {}
// End Class APaperCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaperCharacter, APaperCharacter::StaticClass, TEXT("APaperCharacter"), &Z_Registration_Info_UClass_APaperCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperCharacter), 1407680375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_1697830418(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
