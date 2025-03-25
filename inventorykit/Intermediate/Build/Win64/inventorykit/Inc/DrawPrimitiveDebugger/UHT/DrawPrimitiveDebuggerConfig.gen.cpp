// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/DrawPrimitiveDebugger/Public/DrawPrimitiveDebuggerConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawPrimitiveDebuggerConfig() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DRAWPRIMITIVEDEBUGGER_API UClass* Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings();
DRAWPRIMITIVEDEBUGGER_API UClass* Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DrawPrimitiveDebugger();
// End Cross Module References

// Begin Class UDrawPrimitiveDebuggerUserSettings
void UDrawPrimitiveDebuggerUserSettings::StaticRegisterNativesUDrawPrimitiveDebuggerUserSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPrimitiveDebuggerUserSettings);
UClass* Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_NoRegister()
{
	return UDrawPrimitiveDebuggerUserSettings::StaticClass();
}
struct Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Draw Primitive Debugger" },
		{ "IncludePath", "DrawPrimitiveDebuggerConfig.h" },
		{ "ModuleRelativePath", "Public/DrawPrimitiveDebuggerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
		{ "Category", "DrawPrimitiveDebugger" },
		{ "Comment", "/** Font Size used by Draw Primitive Debugger */" },
		{ "ModuleRelativePath", "Public/DrawPrimitiveDebuggerConfig.h" },
		{ "ToolTip", "Font Size used by Draw Primitive Debugger" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPrimitiveDebuggerUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPrimitiveDebuggerUserSettings, FontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_MetaData), NewProp_FontSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::NewProp_FontSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DrawPrimitiveDebugger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::ClassParams = {
	&UDrawPrimitiveDebuggerUserSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings()
{
	if (!Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.OuterSingleton, Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.OuterSingleton;
}
template<> DRAWPRIMITIVEDEBUGGER_API UClass* StaticClass<UDrawPrimitiveDebuggerUserSettings>()
{
	return UDrawPrimitiveDebuggerUserSettings::StaticClass();
}
UDrawPrimitiveDebuggerUserSettings::UDrawPrimitiveDebuggerUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPrimitiveDebuggerUserSettings);
UDrawPrimitiveDebuggerUserSettings::~UDrawPrimitiveDebuggerUserSettings() {}
// End Class UDrawPrimitiveDebuggerUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings, UDrawPrimitiveDebuggerUserSettings::StaticClass, TEXT("UDrawPrimitiveDebuggerUserSettings"), &Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPrimitiveDebuggerUserSettings), 1916607526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_4186514733(TEXT("/Script/DrawPrimitiveDebugger"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
