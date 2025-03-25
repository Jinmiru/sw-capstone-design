// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveToolQueryInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolQueryInterfaces() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolEditorGizmoAPI();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Interface UInteractiveToolCameraFocusAPI
void UInteractiveToolCameraFocusAPI::StaticRegisterNativesUInteractiveToolCameraFocusAPI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolCameraFocusAPI);
UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister()
{
	return UInteractiveToolCameraFocusAPI::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolQueryInterfaces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveToolCameraFocusAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::ClassParams = {
	&UInteractiveToolCameraFocusAPI::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.OuterSingleton, Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolCameraFocusAPI>()
{
	return UInteractiveToolCameraFocusAPI::StaticClass();
}
UInteractiveToolCameraFocusAPI::UInteractiveToolCameraFocusAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolCameraFocusAPI);
UInteractiveToolCameraFocusAPI::~UInteractiveToolCameraFocusAPI() {}
// End Interface UInteractiveToolCameraFocusAPI

// Begin Interface UInteractiveToolNestedAcceptCancelAPI
void UInteractiveToolNestedAcceptCancelAPI::StaticRegisterNativesUInteractiveToolNestedAcceptCancelAPI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolNestedAcceptCancelAPI);
UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister()
{
	return UInteractiveToolNestedAcceptCancelAPI::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolQueryInterfaces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveToolNestedAcceptCancelAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::ClassParams = {
	&UInteractiveToolNestedAcceptCancelAPI::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.OuterSingleton, Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolNestedAcceptCancelAPI>()
{
	return UInteractiveToolNestedAcceptCancelAPI::StaticClass();
}
UInteractiveToolNestedAcceptCancelAPI::UInteractiveToolNestedAcceptCancelAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolNestedAcceptCancelAPI);
UInteractiveToolNestedAcceptCancelAPI::~UInteractiveToolNestedAcceptCancelAPI() {}
// End Interface UInteractiveToolNestedAcceptCancelAPI

// Begin Interface UInteractiveToolExclusiveToolAPI
void UInteractiveToolExclusiveToolAPI::StaticRegisterNativesUInteractiveToolExclusiveToolAPI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolExclusiveToolAPI);
UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister()
{
	return UInteractiveToolExclusiveToolAPI::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolQueryInterfaces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveToolExclusiveToolAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::ClassParams = {
	&UInteractiveToolExclusiveToolAPI::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.OuterSingleton, Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolExclusiveToolAPI>()
{
	return UInteractiveToolExclusiveToolAPI::StaticClass();
}
UInteractiveToolExclusiveToolAPI::UInteractiveToolExclusiveToolAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolExclusiveToolAPI);
UInteractiveToolExclusiveToolAPI::~UInteractiveToolExclusiveToolAPI() {}
// End Interface UInteractiveToolExclusiveToolAPI

// Begin Interface UInteractiveToolEditorGizmoAPI
void UInteractiveToolEditorGizmoAPI::StaticRegisterNativesUInteractiveToolEditorGizmoAPI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolEditorGizmoAPI);
UClass* Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_NoRegister()
{
	return UInteractiveToolEditorGizmoAPI::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolQueryInterfaces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveToolEditorGizmoAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_Statics::ClassParams = {
	&UInteractiveToolEditorGizmoAPI::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolEditorGizmoAPI()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.OuterSingleton, Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolEditorGizmoAPI>()
{
	return UInteractiveToolEditorGizmoAPI::StaticClass();
}
UInteractiveToolEditorGizmoAPI::UInteractiveToolEditorGizmoAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolEditorGizmoAPI);
UInteractiveToolEditorGizmoAPI::~UInteractiveToolEditorGizmoAPI() {}
// End Interface UInteractiveToolEditorGizmoAPI

// Begin Interface UInteractiveToolManageGeometrySelectionAPI
void UInteractiveToolManageGeometrySelectionAPI::StaticRegisterNativesUInteractiveToolManageGeometrySelectionAPI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolManageGeometrySelectionAPI);
UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister()
{
	return UInteractiveToolManageGeometrySelectionAPI::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolQueryInterfaces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveToolManageGeometrySelectionAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_Statics::ClassParams = {
	&UInteractiveToolManageGeometrySelectionAPI::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.OuterSingleton, Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolManageGeometrySelectionAPI>()
{
	return UInteractiveToolManageGeometrySelectionAPI::StaticClass();
}
UInteractiveToolManageGeometrySelectionAPI::UInteractiveToolManageGeometrySelectionAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolManageGeometrySelectionAPI);
UInteractiveToolManageGeometrySelectionAPI::~UInteractiveToolManageGeometrySelectionAPI() {}
// End Interface UInteractiveToolManageGeometrySelectionAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolCameraFocusAPI, UInteractiveToolCameraFocusAPI::StaticClass, TEXT("UInteractiveToolCameraFocusAPI"), &Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolCameraFocusAPI), 2792920601U) },
		{ Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI, UInteractiveToolNestedAcceptCancelAPI::StaticClass, TEXT("UInteractiveToolNestedAcceptCancelAPI"), &Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolNestedAcceptCancelAPI), 2931093765U) },
		{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI, UInteractiveToolExclusiveToolAPI::StaticClass, TEXT("UInteractiveToolExclusiveToolAPI"), &Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolExclusiveToolAPI), 3683580694U) },
		{ Z_Construct_UClass_UInteractiveToolEditorGizmoAPI, UInteractiveToolEditorGizmoAPI::StaticClass, TEXT("UInteractiveToolEditorGizmoAPI"), &Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolEditorGizmoAPI), 146736287U) },
		{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI, UInteractiveToolManageGeometrySelectionAPI::StaticClass, TEXT("UInteractiveToolManageGeometrySelectionAPI"), &Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolManageGeometrySelectionAPI), 148893895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_4146293999(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
