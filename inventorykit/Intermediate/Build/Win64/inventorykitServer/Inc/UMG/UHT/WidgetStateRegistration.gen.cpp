// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/States/WidgetStateRegistration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStateRegistration() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UMG_API UClass* Z_Construct_UClass_UWidgetBinaryStateRegistration();
UMG_API UClass* Z_Construct_UClass_UWidgetBinaryStateRegistration_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetDisabledStateRegistration();
UMG_API UClass* Z_Construct_UClass_UWidgetDisabledStateRegistration_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetEnumStateRegistration();
UMG_API UClass* Z_Construct_UClass_UWidgetEnumStateRegistration_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetHoveredStateRegistration();
UMG_API UClass* Z_Construct_UClass_UWidgetHoveredStateRegistration_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetPressedStateRegistration();
UMG_API UClass* Z_Construct_UClass_UWidgetPressedStateRegistration_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSelectedStateRegistration();
UMG_API UClass* Z_Construct_UClass_UWidgetSelectedStateRegistration_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UWidgetBinaryStateRegistration
void UWidgetBinaryStateRegistration::StaticRegisterNativesUWidgetBinaryStateRegistration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBinaryStateRegistration);
UClass* Z_Construct_UClass_UWidgetBinaryStateRegistration_NoRegister()
{
	return UWidgetBinaryStateRegistration::StaticClass();
}
struct Z_Construct_UClass_UWidgetBinaryStateRegistration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Derive from to add a new widget binary state\n * \n * Technically these can be created in BP, but for now we don't want to encourage\n * that workflow as it involves requring overrides for the virtuals which is technical.\n */" },
		{ "IncludePath", "Binding/States/WidgetStateRegistration.h" },
		{ "ModuleRelativePath", "Public/Binding/States/WidgetStateRegistration.h" },
		{ "ToolTip", "Derive from to add a new widget binary state\n\nTechnically these can be created in BP, but for now we don't want to encourage\nthat workflow as it involves requring overrides for the virtuals which is technical." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBinaryStateRegistration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetBinaryStateRegistration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBinaryStateRegistration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBinaryStateRegistration_Statics::ClassParams = {
	&UWidgetBinaryStateRegistration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBinaryStateRegistration_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetBinaryStateRegistration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetBinaryStateRegistration()
{
	if (!Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.OuterSingleton, Z_Construct_UClass_UWidgetBinaryStateRegistration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetBinaryStateRegistration>()
{
	return UWidgetBinaryStateRegistration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBinaryStateRegistration);
// End Class UWidgetBinaryStateRegistration

// Begin Class UWidgetHoveredStateRegistration
void UWidgetHoveredStateRegistration::StaticRegisterNativesUWidgetHoveredStateRegistration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetHoveredStateRegistration);
UClass* Z_Construct_UClass_UWidgetHoveredStateRegistration_NoRegister()
{
	return UWidgetHoveredStateRegistration::StaticClass();
}
struct Z_Construct_UClass_UWidgetHoveredStateRegistration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/States/WidgetStateRegistration.h" },
		{ "ModuleRelativePath", "Public/Binding/States/WidgetStateRegistration.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetHoveredStateRegistration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetHoveredStateRegistration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetBinaryStateRegistration,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHoveredStateRegistration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetHoveredStateRegistration_Statics::ClassParams = {
	&UWidgetHoveredStateRegistration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHoveredStateRegistration_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetHoveredStateRegistration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetHoveredStateRegistration()
{
	if (!Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.OuterSingleton, Z_Construct_UClass_UWidgetHoveredStateRegistration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetHoveredStateRegistration>()
{
	return UWidgetHoveredStateRegistration::StaticClass();
}
UWidgetHoveredStateRegistration::UWidgetHoveredStateRegistration() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetHoveredStateRegistration);
UWidgetHoveredStateRegistration::~UWidgetHoveredStateRegistration() {}
// End Class UWidgetHoveredStateRegistration

// Begin Class UWidgetPressedStateRegistration
void UWidgetPressedStateRegistration::StaticRegisterNativesUWidgetPressedStateRegistration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetPressedStateRegistration);
UClass* Z_Construct_UClass_UWidgetPressedStateRegistration_NoRegister()
{
	return UWidgetPressedStateRegistration::StaticClass();
}
struct Z_Construct_UClass_UWidgetPressedStateRegistration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/States/WidgetStateRegistration.h" },
		{ "ModuleRelativePath", "Public/Binding/States/WidgetStateRegistration.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetPressedStateRegistration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetPressedStateRegistration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetBinaryStateRegistration,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPressedStateRegistration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetPressedStateRegistration_Statics::ClassParams = {
	&UWidgetPressedStateRegistration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPressedStateRegistration_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetPressedStateRegistration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetPressedStateRegistration()
{
	if (!Z_Registration_Info_UClass_UWidgetPressedStateRegistration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetPressedStateRegistration.OuterSingleton, Z_Construct_UClass_UWidgetPressedStateRegistration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetPressedStateRegistration.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetPressedStateRegistration>()
{
	return UWidgetPressedStateRegistration::StaticClass();
}
UWidgetPressedStateRegistration::UWidgetPressedStateRegistration() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetPressedStateRegistration);
UWidgetPressedStateRegistration::~UWidgetPressedStateRegistration() {}
// End Class UWidgetPressedStateRegistration

// Begin Class UWidgetDisabledStateRegistration
void UWidgetDisabledStateRegistration::StaticRegisterNativesUWidgetDisabledStateRegistration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetDisabledStateRegistration);
UClass* Z_Construct_UClass_UWidgetDisabledStateRegistration_NoRegister()
{
	return UWidgetDisabledStateRegistration::StaticClass();
}
struct Z_Construct_UClass_UWidgetDisabledStateRegistration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/States/WidgetStateRegistration.h" },
		{ "ModuleRelativePath", "Public/Binding/States/WidgetStateRegistration.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetDisabledStateRegistration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetDisabledStateRegistration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetBinaryStateRegistration,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDisabledStateRegistration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetDisabledStateRegistration_Statics::ClassParams = {
	&UWidgetDisabledStateRegistration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDisabledStateRegistration_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetDisabledStateRegistration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetDisabledStateRegistration()
{
	if (!Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.OuterSingleton, Z_Construct_UClass_UWidgetDisabledStateRegistration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetDisabledStateRegistration>()
{
	return UWidgetDisabledStateRegistration::StaticClass();
}
UWidgetDisabledStateRegistration::UWidgetDisabledStateRegistration() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetDisabledStateRegistration);
UWidgetDisabledStateRegistration::~UWidgetDisabledStateRegistration() {}
// End Class UWidgetDisabledStateRegistration

// Begin Class UWidgetSelectedStateRegistration
void UWidgetSelectedStateRegistration::StaticRegisterNativesUWidgetSelectedStateRegistration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetSelectedStateRegistration);
UClass* Z_Construct_UClass_UWidgetSelectedStateRegistration_NoRegister()
{
	return UWidgetSelectedStateRegistration::StaticClass();
}
struct Z_Construct_UClass_UWidgetSelectedStateRegistration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/States/WidgetStateRegistration.h" },
		{ "ModuleRelativePath", "Public/Binding/States/WidgetStateRegistration.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSelectedStateRegistration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetSelectedStateRegistration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetBinaryStateRegistration,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSelectedStateRegistration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSelectedStateRegistration_Statics::ClassParams = {
	&UWidgetSelectedStateRegistration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSelectedStateRegistration_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetSelectedStateRegistration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetSelectedStateRegistration()
{
	if (!Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.OuterSingleton, Z_Construct_UClass_UWidgetSelectedStateRegistration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetSelectedStateRegistration>()
{
	return UWidgetSelectedStateRegistration::StaticClass();
}
UWidgetSelectedStateRegistration::UWidgetSelectedStateRegistration() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSelectedStateRegistration);
UWidgetSelectedStateRegistration::~UWidgetSelectedStateRegistration() {}
// End Class UWidgetSelectedStateRegistration

// Begin Class UWidgetEnumStateRegistration
void UWidgetEnumStateRegistration::StaticRegisterNativesUWidgetEnumStateRegistration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetEnumStateRegistration);
UClass* Z_Construct_UClass_UWidgetEnumStateRegistration_NoRegister()
{
	return UWidgetEnumStateRegistration::StaticClass();
}
struct Z_Construct_UClass_UWidgetEnumStateRegistration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Derive from to add a new Enum binary state\n */" },
		{ "IncludePath", "Binding/States/WidgetStateRegistration.h" },
		{ "ModuleRelativePath", "Public/Binding/States/WidgetStateRegistration.h" },
		{ "ToolTip", "Derive from to add a new Enum binary state" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetEnumStateRegistration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetEnumStateRegistration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetEnumStateRegistration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetEnumStateRegistration_Statics::ClassParams = {
	&UWidgetEnumStateRegistration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetEnumStateRegistration_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetEnumStateRegistration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetEnumStateRegistration()
{
	if (!Z_Registration_Info_UClass_UWidgetEnumStateRegistration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetEnumStateRegistration.OuterSingleton, Z_Construct_UClass_UWidgetEnumStateRegistration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetEnumStateRegistration.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetEnumStateRegistration>()
{
	return UWidgetEnumStateRegistration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetEnumStateRegistration);
// End Class UWidgetEnumStateRegistration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateRegistration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBinaryStateRegistration, UWidgetBinaryStateRegistration::StaticClass, TEXT("UWidgetBinaryStateRegistration"), &Z_Registration_Info_UClass_UWidgetBinaryStateRegistration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBinaryStateRegistration), 2147701981U) },
		{ Z_Construct_UClass_UWidgetHoveredStateRegistration, UWidgetHoveredStateRegistration::StaticClass, TEXT("UWidgetHoveredStateRegistration"), &Z_Registration_Info_UClass_UWidgetHoveredStateRegistration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetHoveredStateRegistration), 2156870466U) },
		{ Z_Construct_UClass_UWidgetPressedStateRegistration, UWidgetPressedStateRegistration::StaticClass, TEXT("UWidgetPressedStateRegistration"), &Z_Registration_Info_UClass_UWidgetPressedStateRegistration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetPressedStateRegistration), 3062083957U) },
		{ Z_Construct_UClass_UWidgetDisabledStateRegistration, UWidgetDisabledStateRegistration::StaticClass, TEXT("UWidgetDisabledStateRegistration"), &Z_Registration_Info_UClass_UWidgetDisabledStateRegistration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetDisabledStateRegistration), 517114598U) },
		{ Z_Construct_UClass_UWidgetSelectedStateRegistration, UWidgetSelectedStateRegistration::StaticClass, TEXT("UWidgetSelectedStateRegistration"), &Z_Registration_Info_UClass_UWidgetSelectedStateRegistration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetSelectedStateRegistration), 422931342U) },
		{ Z_Construct_UClass_UWidgetEnumStateRegistration, UWidgetEnumStateRegistration::StaticClass, TEXT("UWidgetEnumStateRegistration"), &Z_Registration_Info_UClass_UWidgetEnumStateRegistration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetEnumStateRegistration), 4042136323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateRegistration_h_4090782432(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateRegistration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateRegistration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
