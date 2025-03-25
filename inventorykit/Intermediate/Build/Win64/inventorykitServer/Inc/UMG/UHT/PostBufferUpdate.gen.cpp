// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/PostBufferUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostBufferUpdate() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlatePostRT();
UMG_API UClass* Z_Construct_UClass_UPostBufferUpdate();
UMG_API UClass* Z_Construct_UClass_UPostBufferUpdate_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UPostBufferUpdate
void UPostBufferUpdate::SetbPerformDefaultPostBufferUpdate_WrapperImpl(void* Object, const void* InValue)
{
	UPostBufferUpdate* Obj = (UPostBufferUpdate*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetPerformDefaultPostBufferUpdate(Value);
}
void UPostBufferUpdate::StaticRegisterNativesUPostBufferUpdate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostBufferUpdate);
UClass* Z_Construct_UClass_UPostBufferUpdate_NoRegister()
{
	return UPostBufferUpdate::StaticClass();
}
struct Z_Construct_UClass_UPostBufferUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Widget that when drawn, will trigger the slate post buffer to update. Does not draw anything itself.\n * This allows for you to perform layered UI / sampling effects with the GetSlatePost material functions,\n * by placing this widget after UI you would like to be processed / sampled is drawn.\n *\n * * No Children\n */" },
		{ "IncludePath", "Components/PostBufferUpdate.h" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Widget that when drawn, will trigger the slate post buffer to update. Does not draw anything itself.\nThis allows for you to perform layered UI / sampling effects with the GetSlatePost material functions,\nby placing this widget after UI you would like to be processed / sampled is drawn.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformDefaultPostBufferUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behavior" },
		{ "Comment", "/** \n\x09 * True if we should do the default post buffer update of the scene before any UI.\n\x09 * If any PostBufferUpdate widget has this set as false, be default scene copy / processing will not occur.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "True if we should do the default post buffer update of the scene before any UI.\nIf any PostBufferUpdate widget has this set as false, be default scene copy / processing will not occur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffersToUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Buffers that we should update, all of these buffers will be affected by 'bPerformDefaultPostBufferUpdate' if disabled */" },
		{ "ModuleRelativePath", "Public/Components/PostBufferUpdate.h" },
		{ "ToolTip", "Buffers that we should update, all of these buffers will be affected by 'bPerformDefaultPostBufferUpdate' if disabled" },
	};
#endif // WITH_METADATA
	static void NewProp_bPerformDefaultPostBufferUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformDefaultPostBufferUpdate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuffersToUpdate_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffersToUpdate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffersToUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostBufferUpdate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_bPerformDefaultPostBufferUpdate_SetBit(void* Obj)
{
	((UPostBufferUpdate*)Obj)->bPerformDefaultPostBufferUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_bPerformDefaultPostBufferUpdate = { "bPerformDefaultPostBufferUpdate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UPostBufferUpdate::SetbPerformDefaultPostBufferUpdate_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UPostBufferUpdate), &Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_bPerformDefaultPostBufferUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformDefaultPostBufferUpdate_MetaData), NewProp_bPerformDefaultPostBufferUpdate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate_Inner = { "BuffersToUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SlateCore_ESlatePostRT, METADATA_PARAMS(0, nullptr) }; // 968732184
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate = { "BuffersToUpdate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostBufferUpdate, BuffersToUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffersToUpdate_MetaData), NewProp_BuffersToUpdate_MetaData) }; // 968732184
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostBufferUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_bPerformDefaultPostBufferUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferUpdate_Statics::NewProp_BuffersToUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferUpdate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPostBufferUpdate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferUpdate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostBufferUpdate_Statics::ClassParams = {
	&UPostBufferUpdate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPostBufferUpdate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferUpdate_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferUpdate_Statics::Class_MetaDataParams), Z_Construct_UClass_UPostBufferUpdate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPostBufferUpdate()
{
	if (!Z_Registration_Info_UClass_UPostBufferUpdate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostBufferUpdate.OuterSingleton, Z_Construct_UClass_UPostBufferUpdate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostBufferUpdate.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UPostBufferUpdate>()
{
	return UPostBufferUpdate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPostBufferUpdate);
UPostBufferUpdate::~UPostBufferUpdate() {}
// End Class UPostBufferUpdate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostBufferUpdate, UPostBufferUpdate::StaticClass, TEXT("UPostBufferUpdate"), &Z_Registration_Info_UClass_UPostBufferUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostBufferUpdate), 4065156353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_3689713412(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
