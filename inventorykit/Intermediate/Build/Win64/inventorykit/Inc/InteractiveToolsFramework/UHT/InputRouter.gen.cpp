// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InputRouter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputRouter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UInputRouter
void UInputRouter::StaticRegisterNativesUInputRouter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputRouter);
UClass* Z_Construct_UClass_UInputRouter_NoRegister()
{
	return UInputRouter::StaticClass();
}
struct Z_Construct_UClass_UInputRouter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInputRouter mediates between a higher-level input event source (eg like an FEdMode)\n * and a set of InputBehaviors that respond to those events. Sets of InputBehaviors are\n * registered, and then PostInputEvent() is called for each event. \n *\n * Internally one of the active Behaviors may \"capture\" the event stream.\n * Separate \"Left\" and \"Right\" captures are supported, which means that (eg)\n * an independent capture can be tracked for each VR controller.\n *\n * If the input device supports \"hover\",  PostHoverInputEvent() will forward\n * hover events to InputBehaviors that also support it.\n *\n */" },
		{ "IncludePath", "InputRouter.h" },
		{ "ModuleRelativePath", "Public/InputRouter.h" },
		{ "ToolTip", "UInputRouter mediates between a higher-level input event source (eg like an FEdMode)\nand a set of InputBehaviors that respond to those events. Sets of InputBehaviors are\nregistered, and then PostInputEvent() is called for each event.\n\nInternally one of the active Behaviors may \"capture\" the event stream.\nSeparate \"Left\" and \"Right\" captures are supported, which means that (eg)\nan independent capture can be tracked for each VR controller.\n\nIf the input device supports \"hover\",  PostHoverInputEvent() will forward\nhover events to InputBehaviors that also support it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInvalidateOnHover_MetaData[] = {
		{ "Comment", "/** If true, then we post an Invalidation (ie redraw) request if any active InputBehavior responds to Hover events (default false) */" },
		{ "ModuleRelativePath", "Public/InputRouter.h" },
		{ "ToolTip", "If true, then we post an Invalidation (ie redraw) request if any active InputBehavior responds to Hover events (default false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInvalidateOnCapture_MetaData[] = {
		{ "Comment", "/** If true, then we post an Invalidation (ie redraw) request on every captured input event (default false) */" },
		{ "ModuleRelativePath", "Public/InputRouter.h" },
		{ "ToolTip", "If true, then we post an Invalidation (ie redraw) request on every captured input event (default false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveInputBehaviors_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRouter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoInvalidateOnHover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInvalidateOnHover;
	static void NewProp_bAutoInvalidateOnCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInvalidateOnCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveInputBehaviors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputRouter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover_SetBit(void* Obj)
{
	((UInputRouter*)Obj)->bAutoInvalidateOnHover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover = { "bAutoInvalidateOnHover", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputRouter), &Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoInvalidateOnHover_MetaData), NewProp_bAutoInvalidateOnHover_MetaData) };
void Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture_SetBit(void* Obj)
{
	((UInputRouter*)Obj)->bAutoInvalidateOnCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture = { "bAutoInvalidateOnCapture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputRouter), &Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoInvalidateOnCapture_MetaData), NewProp_bAutoInvalidateOnCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputRouter_Statics::NewProp_ActiveInputBehaviors = { "ActiveInputBehaviors", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputRouter, ActiveInputBehaviors), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveInputBehaviors_MetaData), NewProp_ActiveInputBehaviors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputRouter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputRouter_Statics::NewProp_ActiveInputBehaviors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputRouter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputRouter_Statics::ClassParams = {
	&UInputRouter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputRouter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputRouter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputRouter()
{
	if (!Z_Registration_Info_UClass_UInputRouter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputRouter.OuterSingleton, Z_Construct_UClass_UInputRouter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputRouter.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInputRouter>()
{
	return UInputRouter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputRouter);
UInputRouter::~UInputRouter() {}
// End Class UInputRouter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputRouter, UInputRouter::StaticClass, TEXT("UInputRouter"), &Z_Registration_Info_UClass_UInputRouter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputRouter), 4286106191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_797557904(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
