// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/RotatingMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class URotatingMovementComponent
void URotatingMovementComponent::StaticRegisterNativesURotatingMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotatingMovementComponent);
UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister()
{
	return URotatingMovementComponent::StaticClass();
}
struct Z_Construct_UClass_URotatingMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/**\n * Performs continuous rotation of a component at a specific rotation rate.\n * Rotation can optionally be offset around a pivot point.\n * Collision testing is not performed during movement.\n */" },
		{ "HideCategories", "Velocity" },
		{ "IncludePath", "GameFramework/RotatingMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
		{ "ToolTip", "Performs continuous rotation of a component at a specific rotation rate.\nRotation can optionally be offset around a pivot point.\nCollision testing is not performed during movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "Comment", "/** How fast to update roll/pitch/yaw of the component we update. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
		{ "ToolTip", "How fast to update roll/pitch/yaw of the component we update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotTranslation_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "Comment", "/**\n\x09 * Translation of pivot point around which we rotate, relative to current rotation.\n\x09 * For instance, with PivotTranslation set to (X=+100, Y=0, Z=0), rotation will occur\n\x09 * around the point +100 units along the local X axis from the center of the object,\n\x09 * rather than around the object's origin (the default).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
		{ "ToolTip", "Translation of pivot point around which we rotate, relative to current rotation.\nFor instance, with PivotTranslation set to (X=+100, Y=0, Z=0), rotation will occur\naround the point +100 units along the local X axis from the center of the object,\nrather than around the object's origin (the default)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotationInLocalSpace_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "Comment", "/** Whether rotation is applied in local or world space. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
		{ "ToolTip", "Whether rotation is applied in local or world space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotTranslation;
	static void NewProp_bRotationInLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationInLocalSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotatingMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotatingMovementComponent, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_PivotTranslation = { "PivotTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotatingMovementComponent, PivotTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotTranslation_MetaData), NewProp_PivotTranslation_MetaData) };
void Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace_SetBit(void* Obj)
{
	((URotatingMovementComponent*)Obj)->bRotationInLocalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace = { "bRotationInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URotatingMovementComponent), &Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotationInLocalSpace_MetaData), NewProp_bRotationInLocalSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotatingMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_PivotTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URotatingMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URotatingMovementComponent_Statics::ClassParams = {
	&URotatingMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URotatingMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URotatingMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URotatingMovementComponent()
{
	if (!Z_Registration_Info_UClass_URotatingMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotatingMovementComponent.OuterSingleton, Z_Construct_UClass_URotatingMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URotatingMovementComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URotatingMovementComponent>()
{
	return URotatingMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URotatingMovementComponent);
URotatingMovementComponent::~URotatingMovementComponent() {}
// End Class URotatingMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URotatingMovementComponent, URotatingMovementComponent::StaticClass, TEXT("URotatingMovementComponent"), &Z_Registration_Info_UClass_URotatingMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotatingMovementComponent), 2185264265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_1486419093(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
