// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionComment() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionComment
void UMaterialExpressionComment::StaticRegisterNativesUMaterialExpressionComment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionComment);
UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister()
{
	return UMaterialExpressionComment::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionComment.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentColor_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "Comment", "/** Color to style comment with */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Color to style comment with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of the text in the comment box */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Size of the text in the comment box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "Comment", "/** Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance). */" },
		{ "DisplayName", "Show Bubble When Zoomed" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bColorCommentBubble_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "Comment", "/** Whether to use Comment Color to color the background of the comment bubble shown when zoomed out. */" },
		{ "DisplayName", "Color Bubble" },
		{ "EditCondition", "bCommentBubbleVisible_InDetailsPanel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Whether to use Comment Color to color the background of the comment bubble shown when zoomed out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupMode_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "Comment", "/** Whether the comment should move any fully enclosed nodes around when it is moved */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Whether the comment should move any fully enclosed nodes around when it is moved" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
	static void NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible_InDetailsPanel;
	static void NewProp_bColorCommentBubble_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorCommentBubble;
	static void NewProp_bGroupMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionComment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionComment, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionComment, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionComment, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor = { "CommentColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionComment, CommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentColor_MetaData), NewProp_CommentColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionComment, FontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_MetaData), NewProp_FontSize_MetaData) };
void Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit(void* Obj)
{
	((UMaterialExpressionComment*)Obj)->bCommentBubbleVisible_InDetailsPanel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel = { "bCommentBubbleVisible_InDetailsPanel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionComment), &Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData), NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData) };
void Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble_SetBit(void* Obj)
{
	((UMaterialExpressionComment*)Obj)->bColorCommentBubble = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble = { "bColorCommentBubble", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionComment), &Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bColorCommentBubble_MetaData), NewProp_bColorCommentBubble_MetaData) };
void Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode_SetBit(void* Obj)
{
	((UMaterialExpressionComment*)Obj)->bGroupMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode = { "bGroupMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionComment), &Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupMode_MetaData), NewProp_bGroupMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionComment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionComment_Statics::ClassParams = {
	&UMaterialExpressionComment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionComment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionComment()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionComment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionComment.OuterSingleton, Z_Construct_UClass_UMaterialExpressionComment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionComment.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionComment>()
{
	return UMaterialExpressionComment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionComment);
UMaterialExpressionComment::~UMaterialExpressionComment() {}
// End Class UMaterialExpressionComment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionComment, UMaterialExpressionComment::StaticClass, TEXT("UMaterialExpressionComment"), &Z_Registration_Info_UClass_UMaterialExpressionComment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionComment), 875218417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_3855493595(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
