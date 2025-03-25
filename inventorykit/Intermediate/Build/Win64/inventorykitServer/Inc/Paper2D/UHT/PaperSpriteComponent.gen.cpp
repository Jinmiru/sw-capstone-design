// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSpriteComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class UPaperSpriteComponent Function GetSprite
struct Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics
{
	struct PaperSpriteComponent_eventGetSprite_Parms
	{
		UPaperSprite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Gets the PaperSprite used by this instance. */" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "Gets the PaperSprite used by this instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperSpriteComponent_eventGetSprite_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperSpriteComponent, nullptr, "GetSprite", nullptr, nullptr, Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PaperSpriteComponent_eventGetSprite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PaperSpriteComponent_eventGetSprite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperSpriteComponent_GetSprite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperSpriteComponent::execGetSprite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperSprite**)Z_Param__Result=P_THIS->GetSprite();
	P_NATIVE_END;
}
// End Class UPaperSpriteComponent Function GetSprite

// Begin Class UPaperSpriteComponent Function SetSprite
struct Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics
{
	struct PaperSpriteComponent_eventSetSprite_Parms
	{
		UPaperSprite* NewSprite;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Change the PaperSprite used by this instance. */" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "Change the PaperSprite used by this instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSprite;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_NewSprite = { "NewSprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperSpriteComponent_eventSetSprite_Parms, NewSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperSpriteComponent_eventSetSprite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperSpriteComponent_eventSetSprite_Parms), &Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_NewSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperSpriteComponent, nullptr, "SetSprite", nullptr, nullptr, Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PaperSpriteComponent_eventSetSprite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PaperSpriteComponent_eventSetSprite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperSpriteComponent_SetSprite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperSpriteComponent::execSetSprite)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_NewSprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSprite(Z_Param_NewSprite);
	P_NATIVE_END;
}
// End Class UPaperSpriteComponent Function SetSprite

// Begin Class UPaperSpriteComponent Function SetSpriteColor
struct Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics
{
	struct PaperSpriteComponent_eventSetSpriteColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Set color of the sprite */" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "Set color of the sprite" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperSpriteComponent_eventSetSpriteColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperSpriteComponent, nullptr, "SetSpriteColor", nullptr, nullptr, Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PaperSpriteComponent_eventSetSpriteColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PaperSpriteComponent_eventSetSpriteColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperSpriteComponent::execSetSpriteColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpriteColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UPaperSpriteComponent Function SetSpriteColor

// Begin Class UPaperSpriteComponent
void UPaperSpriteComponent::StaticRegisterNativesUPaperSpriteComponent()
{
	UClass* Class = UPaperSpriteComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSprite", &UPaperSpriteComponent::execGetSprite },
		{ "SetSprite", &UPaperSpriteComponent::execSetSprite },
		{ "SetSpriteColor", &UPaperSpriteComponent::execSetSpriteColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteComponent);
UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister()
{
	return UPaperSpriteComponent::StaticClass();
}
struct Z_Construct_UClass_UPaperSpriteComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "Comment", "/**\n * A component that handles rendering and collision for a single instance of a UPaperSprite asset.\n *\n * This component is created when you drag a sprite asset from the content browser into a Blueprint, or\n * contained inside of the actor created when you drag one into the level.\n *\n * @see UPrimitiveComponent, UPaperSprite\n */" },
		{ "HideCategories", "Trigger" },
		{ "IncludePath", "PaperSpriteComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "A component that handles rendering and collision for a single instance of a UPaperSprite asset.\n\nThis component is created when you drag a sprite asset from the content browser into a Blueprint, or\ncontained inside of the actor created when you drag one into the level.\n\n@see UPrimitiveComponent, UPaperSprite" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite asset used by this component\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "The sprite asset used by this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Comment", "// DEPRECATED in 4.4: The material override for this sprite component (if any); replaced by the Materials array inherited from UMeshComponent\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "DEPRECATED in 4.4: The material override for this sprite component (if any); replaced by the Materials array inherited from UMeshComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteColor_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The color of the sprite (passed to the sprite material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "The color of the sprite (passed to the sprite material as a vertex color)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperSpriteComponent_GetSprite, "GetSprite" }, // 3821646967
		{ &Z_Construct_UFunction_UPaperSpriteComponent_SetSprite, "SetSprite" }, // 1307933784
		{ &Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor, "SetSpriteColor" }, // 2394319504
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SourceSprite = { "SourceSprite", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteComponent, SourceSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSprite_MetaData), NewProp_SourceSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0124080020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteComponent, MaterialOverride_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SpriteColor = { "SpriteColor", nullptr, (EPropertyFlags)0x0020080200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteComponent, SpriteColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteColor_MetaData), NewProp_SpriteColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperSpriteComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SourceSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_MaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SpriteColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperSpriteComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteComponent_Statics::ClassParams = {
	&UPaperSpriteComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPaperSpriteComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperSpriteComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperSpriteComponent()
{
	if (!Z_Registration_Info_UClass_UPaperSpriteComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteComponent.OuterSingleton, Z_Construct_UClass_UPaperSpriteComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperSpriteComponent.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperSpriteComponent>()
{
	return UPaperSpriteComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteComponent);
UPaperSpriteComponent::~UPaperSpriteComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperSpriteComponent)
// End Class UPaperSpriteComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteComponent, UPaperSpriteComponent::StaticClass, TEXT("UPaperSpriteComponent"), &Z_Registration_Info_UClass_UPaperSpriteComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteComponent), 1516922665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_4195650245(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
