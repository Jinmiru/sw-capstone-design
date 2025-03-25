// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/FunctionalUIScreenshotTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalUIScreenshotTest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase();
FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Enum EWidgetTestAppearLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetTestAppearLocation;
static UEnum* EWidgetTestAppearLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EWidgetTestAppearLocation"));
	}
	return Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EWidgetTestAppearLocation>()
{
	return EWidgetTestAppearLocation_StaticEnum();
}
struct Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
		{ "PlayerScreen.Name", "EWidgetTestAppearLocation::PlayerScreen" },
		{ "Viewport.Name", "EWidgetTestAppearLocation::Viewport" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWidgetTestAppearLocation::Viewport", (int64)EWidgetTestAppearLocation::Viewport },
		{ "EWidgetTestAppearLocation::PlayerScreen", (int64)EWidgetTestAppearLocation::PlayerScreen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	"EWidgetTestAppearLocation",
	"EWidgetTestAppearLocation",
	Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation()
{
	if (!Z_Registration_Info_UEnum_EWidgetTestAppearLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetTestAppearLocation.InnerSingleton, Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWidgetTestAppearLocation.InnerSingleton;
}
// End Enum EWidgetTestAppearLocation

// Begin Class AFunctionalUIScreenshotTest
void AFunctionalUIScreenshotTest::StaticRegisterNativesAFunctionalUIScreenshotTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalUIScreenshotTest);
UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister()
{
	return AFunctionalUIScreenshotTest::StaticClass();
}
struct Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Actor Input Rendering HLOD" },
		{ "IncludePath", "FunctionalUIScreenshotTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetLocation_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotRT_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideDebugCanvas_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WidgetLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenshotRT;
	static void NewProp_bHideDebugCanvas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideDebugCanvas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalUIScreenshotTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalUIScreenshotTest, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_SpawnedWidget = { "SpawnedWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalUIScreenshotTest, SpawnedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedWidget_MetaData), NewProp_SpawnedWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation = { "WidgetLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalUIScreenshotTest, WidgetLocation), Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetLocation_MetaData), NewProp_WidgetLocation_MetaData) }; // 1594776643
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_ScreenshotRT = { "ScreenshotRT", nullptr, (EPropertyFlags)0x0124080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalUIScreenshotTest, ScreenshotRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotRT_MetaData), NewProp_ScreenshotRT_MetaData) };
void Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_bHideDebugCanvas_SetBit(void* Obj)
{
	((AFunctionalUIScreenshotTest*)Obj)->bHideDebugCanvas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_bHideDebugCanvas = { "bHideDebugCanvas", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFunctionalUIScreenshotTest), &Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_bHideDebugCanvas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideDebugCanvas_MetaData), NewProp_bHideDebugCanvas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_SpawnedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_ScreenshotRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_bHideDebugCanvas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AScreenshotFunctionalTestBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::ClassParams = {
	&AFunctionalUIScreenshotTest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest()
{
	if (!Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.OuterSingleton, Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalUIScreenshotTest>()
{
	return AFunctionalUIScreenshotTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalUIScreenshotTest);
AFunctionalUIScreenshotTest::~AFunctionalUIScreenshotTest() {}
// End Class AFunctionalUIScreenshotTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWidgetTestAppearLocation_StaticEnum, TEXT("EWidgetTestAppearLocation"), &Z_Registration_Info_UEnum_EWidgetTestAppearLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1594776643U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFunctionalUIScreenshotTest, AFunctionalUIScreenshotTest::StaticClass, TEXT("AFunctionalUIScreenshotTest"), &Z_Registration_Info_UClass_AFunctionalUIScreenshotTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalUIScreenshotTest), 2738363936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_2572569772(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
