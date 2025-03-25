// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchVisCharacter/Public/ArchVisCharMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchVisCharMovementComponent() {}

// Begin Cross Module References
ARCHVISCHARACTER_API UClass* Z_Construct_UClass_UArchVisCharMovementComponent();
ARCHVISCHARACTER_API UClass* Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
UPackage* Z_Construct_UPackage__Script_ArchVisCharacter();
// End Cross Module References

// Begin Class UArchVisCharMovementComponent
void UArchVisCharMovementComponent::StaticRegisterNativesUArchVisCharMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchVisCharMovementComponent);
UClass* Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister()
{
	return UArchVisCharMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UArchVisCharMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArchVisCharMovementComponent.h" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationalAcceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how fast the character's turn rate accelerates when rotating and looking up/down */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how fast the character's turn rate accelerates when rotating and looking up/down" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationalDeceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how fast the character's turn rate decelerates to 0 when user stops turning */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how fast the character's turn rate decelerates to 0 when user stops turning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotationalVelocity_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Fastest possible turn rate */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Fastest possible turn rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how far down you can look */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how far down you can look" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how far up you can look */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how far up you can look" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingFriction_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls walking deceleration. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls walking deceleration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** How fast the character can walk. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "How fast the character can walk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingAcceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** How fast the character accelerates. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "How fast the character accelerates." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationalAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationalDeceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRotationalVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchVisCharMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration = { "RotationalAcceleration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, RotationalAcceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationalAcceleration_MetaData), NewProp_RotationalAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration = { "RotationalDeceleration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, RotationalDeceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationalDeceleration_MetaData), NewProp_RotationalDeceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity = { "MaxRotationalVelocity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, MaxRotationalVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRotationalVelocity_MetaData), NewProp_MaxRotationalVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, MinPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPitch_MetaData), NewProp_MinPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, MaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitch_MetaData), NewProp_MaxPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction = { "WalkingFriction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingFriction_MetaData), NewProp_WalkingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingSpeed_MetaData), NewProp_WalkingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration = { "WalkingAcceleration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingAcceleration_MetaData), NewProp_WalkingAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArchVisCharMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchVisCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::ClassParams = {
	&UArchVisCharMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchVisCharMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArchVisCharMovementComponent()
{
	if (!Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton, Z_Construct_UClass_UArchVisCharMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton;
}
template<> ARCHVISCHARACTER_API UClass* StaticClass<UArchVisCharMovementComponent>()
{
	return UArchVisCharMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArchVisCharMovementComponent);
UArchVisCharMovementComponent::~UArchVisCharMovementComponent() {}
// End Class UArchVisCharMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchVisCharMovementComponent, UArchVisCharMovementComponent::StaticClass, TEXT("UArchVisCharMovementComponent"), &Z_Registration_Info_UClass_UArchVisCharMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchVisCharMovementComponent), 3202199034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_2795642308(TEXT("/Script/ArchVisCharacter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
