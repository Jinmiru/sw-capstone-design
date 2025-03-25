// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Dot() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Dot();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestDot();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EEnvTestDot
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestDot;
static UEnum* EEnvTestDot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDot, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestDot"));
	}
	return Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestDot>()
{
	return EEnvTestDot_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestDot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dot2D.DisplayName", "Dot 2D (Heading)" },
		{ "Dot2D.Name", "EEnvTestDot::Dot2D" },
		{ "Dot2D.Tooltip", "Dot Product in the XY-plane, which is equivalent to the cosine of the heading or yaw angle." },
		{ "Dot3D.DisplayName", "Dot (3D)" },
		{ "Dot3D.Name", "EEnvTestDot::Dot3D" },
		{ "Dot3D.Tooltip", "Fully 3D dot-product" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestDot::Dot3D", (int64)EEnvTestDot::Dot3D },
		{ "EEnvTestDot::Dot2D", (int64)EEnvTestDot::Dot2D },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestDot",
	"EEnvTestDot",
	Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestDot()
{
	if (!Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton;
}
// End Enum EEnvTestDot

// Begin Class UEnvQueryTest_Dot
void UEnvQueryTest_Dot::StaticRegisterNativesUEnvQueryTest_Dot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Dot);
UClass* Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister()
{
	return UEnvQueryTest_Dot::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_Dot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineA_MetaData[] = {
		{ "Category", "Dot" },
		{ "Comment", "/** defines direction of first line used by test */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "defines direction of first line used by test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineB_MetaData[] = {
		{ "Category", "Dot" },
		{ "Comment", "/** defines direction of second line used by test */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "defines direction of second line used by test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteValue_MetaData[] = {
		{ "Category", "Dot" },
		{ "Comment", "/** If true, this test uses the absolute value of the dot product rather than the dot product itself.  Useful\n\x09  * when you want to compare \"how lateral\" something is.  I.E. values closer to zero are further to the side, \n\x09  * and values closer to 1 are more in front or behind (without distinguishing forward/backward).\n\x09  */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "If true, this test uses the absolute value of the dot product rather than the dot product itself.  Useful\nwhen you want to compare \"how lateral\" something is.  I.E. values closer to zero are further to the side,\nand values closer to 1 are more in front or behind (without distinguishing forward/backward)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TestMode;
	static void NewProp_bAbsoluteValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Dot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA = { "LineA", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Dot, LineA), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineA_MetaData), NewProp_LineA_MetaData) }; // 2990699813
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB = { "LineB", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Dot, LineB), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineB_MetaData), NewProp_LineB_MetaData) }; // 2990699813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Dot, TestMode), Z_Construct_UEnum_AIModule_EEnvTestDot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMode_MetaData), NewProp_TestMode_MetaData) }; // 1669029732
void Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_SetBit(void* Obj)
{
	((UEnvQueryTest_Dot*)Obj)->bAbsoluteValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue = { "bAbsoluteValue", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_Dot), &Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteValue_MetaData), NewProp_bAbsoluteValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_Dot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::ClassParams = {
	&UEnvQueryTest_Dot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_Dot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_Dot()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Dot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Dot>()
{
	return UEnvQueryTest_Dot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Dot);
UEnvQueryTest_Dot::~UEnvQueryTest_Dot() {}
// End Class UEnvQueryTest_Dot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnvTestDot_StaticEnum, TEXT("EEnvTestDot"), &Z_Registration_Info_UEnum_EEnvTestDot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1669029732U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Dot, UEnvQueryTest_Dot::StaticClass, TEXT("UEnvQueryTest_Dot"), &Z_Registration_Info_UClass_UEnvQueryTest_Dot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Dot), 1840089228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_1757690390(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
