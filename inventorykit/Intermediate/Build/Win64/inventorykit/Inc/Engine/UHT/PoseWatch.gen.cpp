// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseWatch() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatch();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchElement();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchElement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchPoseElement();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchPoseElement_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPoseWatchFolder
void UPoseWatchFolder::StaticRegisterNativesUPoseWatchFolder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatchFolder);
UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister()
{
	return UPoseWatchFolder::StaticClass();
}
struct Z_Construct_UClass_UPoseWatchFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bIsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatchFolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchFolder, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchFolder, Parent), Z_Construct_UClass_UPoseWatchFolder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
void Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((UPoseWatchFolder*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatchFolder), &Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
{
	((UPoseWatchFolder*)Obj)->bIsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatchFolder), &Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExpanded_MetaData), NewProp_bIsExpanded_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UPoseWatchFolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatchFolder_Statics::ClassParams = {
	&UPoseWatchFolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseWatchFolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoseWatchFolder()
{
	if (!Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton, Z_Construct_UClass_UPoseWatchFolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPoseWatchFolder>()
{
	return UPoseWatchFolder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatchFolder);
UPoseWatchFolder::~UPoseWatchFolder() {}
// End Class UPoseWatchFolder

// Begin Class UPoseWatchElement
void UPoseWatchElement::StaticRegisterNativesUPoseWatchElement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatchElement);
UClass* Z_Construct_UClass_UPoseWatchElement_NoRegister()
{
	return UPoseWatchElement::StaticClass();
}
struct Z_Construct_UClass_UPoseWatchElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "// If true will draw the node to the view port.\n" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "If true will draw the node to the view port." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bHasColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatchElement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((UPoseWatchElement*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatchElement), &Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor_SetBit(void* Obj)
{
	((UPoseWatchElement*)Obj)->bHasColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor = { "bHasColor", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatchElement), &Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasColor_MetaData), NewProp_bHasColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchElement, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchElement, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchElement, IconName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconName_MetaData), NewProp_IconName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchElement, Parent), Z_Construct_UClass_UPoseWatch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatchElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_IconName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UPoseWatchElement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatchElement_Statics::ClassParams = {
	&UPoseWatchElement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatchElement_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseWatchElement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoseWatchElement()
{
	if (!Z_Registration_Info_UClass_UPoseWatchElement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatchElement.OuterSingleton, Z_Construct_UClass_UPoseWatchElement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoseWatchElement.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPoseWatchElement>()
{
	return UPoseWatchElement::StaticClass();
}
UPoseWatchElement::UPoseWatchElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatchElement);
// End Class UPoseWatchElement

// Begin Class UPoseWatchPoseElement
void UPoseWatchPoseElement::StaticRegisterNativesUPoseWatchPoseElement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatchPoseElement);
UClass* Z_Construct_UClass_UPoseWatchPoseElement_NoRegister()
{
	return UPoseWatchPoseElement::StaticClass();
}
struct Z_Construct_UClass_UPoseWatchPoseElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportMask_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optionally select a Blend Mask to control which bones on the skeleton are rendered. Any non-zero entries are rendered. */" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "Optionally select a Blend Mask to control which bones on the skeleton are rendered. Any non-zero entries are rendered." },
		{ "UseAsBlendMask", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertViewportMask_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Invert which bones are rendered when using a viewport mask */" },
		{ "EditCondition", "ViewportMask != nullptr" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "Invert which bones are rendered when using a viewport mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendScaleThreshold_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The threshold which each bone's blend scale much surpass to be rendered using the viewport mask */" },
		{ "EditCondition", "ViewportMask != nullptr" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "The threshold which each bone's blend scale much surpass to be rendered using the viewport mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportOffset_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Offset the rendering of the bones in the viewport. */" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "Offset the rendering of the bones in the viewport." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportMask;
	static void NewProp_bInvertViewportMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertViewportMask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendScaleThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatchPoseElement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportMask = { "ViewportMask", nullptr, (EPropertyFlags)0x0114000800000041, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchPoseElement, ViewportMask), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportMask_MetaData), NewProp_ViewportMask_MetaData) };
void Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask_SetBit(void* Obj)
{
	((UPoseWatchPoseElement*)Obj)->bInvertViewportMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask = { "bInvertViewportMask", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatchPoseElement), &Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertViewportMask_MetaData), NewProp_bInvertViewportMask_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_BlendScaleThreshold = { "BlendScaleThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchPoseElement, BlendScaleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendScaleThreshold_MetaData), NewProp_BlendScaleThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportOffset = { "ViewportOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatchPoseElement, ViewportOffset), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportOffset_MetaData), NewProp_ViewportOffset_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatchPoseElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_BlendScaleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UPoseWatchPoseElement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPoseWatchElement,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::ClassParams = {
	&UPoseWatchPoseElement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatchPoseElement_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseWatchPoseElement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoseWatchPoseElement()
{
	if (!Z_Registration_Info_UClass_UPoseWatchPoseElement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatchPoseElement.OuterSingleton, Z_Construct_UClass_UPoseWatchPoseElement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoseWatchPoseElement.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPoseWatchPoseElement>()
{
	return UPoseWatchPoseElement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatchPoseElement);
UPoseWatchPoseElement::~UPoseWatchPoseElement() {}
// End Class UPoseWatchPoseElement

// Begin Class UPoseWatch
void UPoseWatch::StaticRegisterNativesUPoseWatch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatch);
UClass* Z_Construct_UClass_UPoseWatch_NoRegister()
{
	return UPoseWatch::StaticClass();
}
struct Z_Construct_UClass_UPoseWatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertViewportMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendScaleThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteOnDeselection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "// If true will draw the pose to the viewport\n" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "If true will draw the pose to the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNodeEnabled_MetaData[] = {
		{ "Comment", "// If true, the node is able to be drawn to the view port.\n" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "If true, the node is able to be drawn to the view port." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportMask;
	static void NewProp_bInvertViewportMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertViewportMask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendScaleThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Elements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
	static void NewProp_bDeleteOnDeselection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteOnDeselection;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bIsNodeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNodeEnabled;
	static void NewProp_bIsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportMask = { "ViewportMask", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, ViewportMask_DEPRECATED), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportMask_MetaData), NewProp_ViewportMask_MetaData) };
void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask_SetBit(void* Obj)
{
	((UPoseWatch*)Obj)->bInvertViewportMask_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask = { "bInvertViewportMask", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertViewportMask_MetaData), NewProp_bInvertViewportMask_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_BlendScaleThreshold = { "BlendScaleThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, BlendScaleThreshold_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendScaleThreshold_MetaData), NewProp_BlendScaleThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportOffset = { "ViewportOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, ViewportOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportOffset_MetaData), NewProp_ViewportOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseWatchElement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elements_MetaData), NewProp_Elements_MetaData) };
void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_SetBit(void* Obj)
{
	((UPoseWatch*)Obj)->bDeleteOnDeselection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection = { "bDeleteOnDeselection", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeleteOnDeselection_MetaData), NewProp_bDeleteOnDeselection_MetaData) };
void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((UPoseWatch*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled_SetBit(void* Obj)
{
	((UPoseWatch*)Obj)->bIsNodeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled = { "bIsNodeEnabled", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNodeEnabled_MetaData), NewProp_bIsNodeEnabled_MetaData) };
void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
{
	((UPoseWatch*)Obj)->bIsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExpanded_MetaData), NewProp_bIsExpanded_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, Color_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, IconName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconName_MetaData), NewProp_IconName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseWatch, Parent), Z_Construct_UClass_UPoseWatchFolder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_BlendScaleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_IconName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UPoseWatch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatch_Statics::ClassParams = {
	&UPoseWatch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatch_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoseWatch()
{
	if (!Z_Registration_Info_UClass_UPoseWatch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatch.OuterSingleton, Z_Construct_UClass_UPoseWatch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoseWatch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPoseWatch>()
{
	return UPoseWatch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatch);
UPoseWatch::~UPoseWatch() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseWatch)
#endif // WITH_EDITORONLY_DATA
// End Class UPoseWatch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoseWatchFolder, UPoseWatchFolder::StaticClass, TEXT("UPoseWatchFolder"), &Z_Registration_Info_UClass_UPoseWatchFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatchFolder), 1619393963U) },
		{ Z_Construct_UClass_UPoseWatchElement, UPoseWatchElement::StaticClass, TEXT("UPoseWatchElement"), &Z_Registration_Info_UClass_UPoseWatchElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatchElement), 322177875U) },
		{ Z_Construct_UClass_UPoseWatchPoseElement, UPoseWatchPoseElement::StaticClass, TEXT("UPoseWatchPoseElement"), &Z_Registration_Info_UClass_UPoseWatchPoseElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatchPoseElement), 347088958U) },
		{ Z_Construct_UClass_UPoseWatch, UPoseWatch::StaticClass, TEXT("UPoseWatch"), &Z_Registration_Info_UClass_UPoseWatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatch), 4069692156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_771315045(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
