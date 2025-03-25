// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavSystemConfigOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavSystemConfigOverride() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister();
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Enum ENavSystemOverridePolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavSystemOverridePolicy;
static UEnum* ENavSystemOverridePolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavSystemOverridePolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavSystemOverridePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ENavSystemOverridePolicy"));
	}
	return Z_Registration_Info_UEnum_ENavSystemOverridePolicy.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavSystemOverridePolicy>()
{
	return ENavSystemOverridePolicy_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Append.Comment", "// the pre-existing nav system instance will be destroyed.\n" },
		{ "Append.Name", "ENavSystemOverridePolicy::Append" },
		{ "Append.ToolTip", "the pre-existing nav system instance will be destroyed." },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "Override.Name", "ENavSystemOverridePolicy::Override" },
		{ "Skip.Comment", "// config information will be added to pre-existing nav system instance\n" },
		{ "Skip.Name", "ENavSystemOverridePolicy::Skip" },
		{ "Skip.ToolTip", "config information will be added to pre-existing nav system instance" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavSystemOverridePolicy::Override", (int64)ENavSystemOverridePolicy::Override },
		{ "ENavSystemOverridePolicy::Append", (int64)ENavSystemOverridePolicy::Append },
		{ "ENavSystemOverridePolicy::Skip", (int64)ENavSystemOverridePolicy::Skip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"ENavSystemOverridePolicy",
	"ENavSystemOverridePolicy",
	Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy()
{
	if (!Z_Registration_Info_UEnum_ENavSystemOverridePolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavSystemOverridePolicy.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavSystemOverridePolicy.InnerSingleton;
}
// End Enum ENavSystemOverridePolicy

// Begin Class ANavSystemConfigOverride Function ApplyChanges
#if WITH_EDITOR
struct Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Navigation" },
		{ "Comment", "/** made an explicit function since rebuilding navigation system can be expensive */" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ToolTip", "made an explicit function since rebuilding navigation system can be expensive" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavSystemConfigOverride, nullptr, "ApplyChanges", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ANavSystemConfigOverride::execApplyChanges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyChanges();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ANavSystemConfigOverride Function ApplyChanges

// Begin Class ANavSystemConfigOverride
void ANavSystemConfigOverride::StaticRegisterNativesANavSystemConfigOverride()
{
#if WITH_EDITOR
	UClass* Class = ANavSystemConfigOverride::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyChanges", &ANavSystemConfigOverride::execApplyChanges },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavSystemConfigOverride);
UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister()
{
	return ANavSystemConfigOverride::StaticClass();
}
struct Z_Construct_UClass_ANavSystemConfigOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering Actor LOD Cooking" },
		{ "IncludePath", "NavSystemConfigOverride.h" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfig_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridePolicy_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If there's already a NavigationSystem instance in the world how should this nav override behave */" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ToolTip", "If there's already a NavigationSystem instance in the world how should this nav override behave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadOnClient_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationSystemConfig;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverridePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverridePolicy;
	static void NewProp_bLoadOnClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadOnClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges, "ApplyChanges" }, // 2599499854
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavSystemConfigOverride>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavSystemConfigOverride, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig = { "NavigationSystemConfig", nullptr, (EPropertyFlags)0x012608000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavSystemConfigOverride, NavigationSystemConfig), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationSystemConfig_MetaData), NewProp_NavigationSystemConfig_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy = { "OverridePolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavSystemConfigOverride, OverridePolicy), Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridePolicy_MetaData), NewProp_OverridePolicy_MetaData) }; // 3643441183
void Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_SetBit(void* Obj)
{
	((ANavSystemConfigOverride*)Obj)->bLoadOnClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient = { "bLoadOnClient", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavSystemConfigOverride), &Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadOnClient_MetaData), NewProp_bLoadOnClient_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavSystemConfigOverride_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::ClassParams = {
	&ANavSystemConfigOverride::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavSystemConfigOverride()
{
	if (!Z_Registration_Info_UClass_ANavSystemConfigOverride.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavSystemConfigOverride.OuterSingleton, Z_Construct_UClass_ANavSystemConfigOverride_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavSystemConfigOverride.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavSystemConfigOverride>()
{
	return ANavSystemConfigOverride::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavSystemConfigOverride);
ANavSystemConfigOverride::~ANavSystemConfigOverride() {}
// End Class ANavSystemConfigOverride

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENavSystemOverridePolicy_StaticEnum, TEXT("ENavSystemOverridePolicy"), &Z_Registration_Info_UEnum_ENavSystemOverridePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3643441183U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavSystemConfigOverride, ANavSystemConfigOverride::StaticClass, TEXT("ANavSystemConfigOverride"), &Z_Registration_Info_UClass_ANavSystemConfigOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavSystemConfigOverride), 268225235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_3388905563(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
