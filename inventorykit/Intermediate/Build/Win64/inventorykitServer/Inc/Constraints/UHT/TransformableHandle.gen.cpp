// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Animation/Constraints/Public/TransformableHandle.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformableHandle() {}

// Begin Cross Module References
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableComponentHandle();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableComponentHandle_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle_NoRegister();
CONSTRAINTS_API UEnum* Z_Construct_UEnum_Constraints_EHandleEvent();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References

// Begin Enum EHandleEvent
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandleEvent;
static UEnum* EHandleEvent_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Constraints_EHandleEvent, (UObject*)Z_Construct_UPackage__Script_Constraints(), TEXT("EHandleEvent"));
	}
	return Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton;
}
template<> CONSTRAINTS_API UEnum* StaticEnum<EHandleEvent>()
{
	return EHandleEvent_StaticEnum();
}
struct Z_Construct_UEnum_Constraints_EHandleEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ComponentUpdated.Name", "EHandleEvent::ComponentUpdated" },
		{ "GlobalTransformUpdated.Name", "EHandleEvent::GlobalTransformUpdated" },
		{ "LocalTransformUpdated.Name", "EHandleEvent::LocalTransformUpdated" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EHandleEvent::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "UpperDependencyUpdated.Name", "EHandleEvent::UpperDependencyUpdated" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandleEvent::LocalTransformUpdated", (int64)EHandleEvent::LocalTransformUpdated },
		{ "EHandleEvent::GlobalTransformUpdated", (int64)EHandleEvent::GlobalTransformUpdated },
		{ "EHandleEvent::ComponentUpdated", (int64)EHandleEvent::ComponentUpdated },
		{ "EHandleEvent::UpperDependencyUpdated", (int64)EHandleEvent::UpperDependencyUpdated },
		{ "EHandleEvent::Max", (int64)EHandleEvent::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Constraints_EHandleEvent_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Constraints,
	nullptr,
	"EHandleEvent",
	"EHandleEvent",
	Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Constraints_EHandleEvent()
{
	if (!Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton, Z_Construct_UEnum_Constraints_EHandleEvent_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton;
}
// End Enum EHandleEvent

// Begin Class UTransformableHandle
void UTransformableHandle::StaticRegisterNativesUTransformableHandle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformableHandle);
UClass* Z_Construct_UClass_UTransformableHandle_NoRegister()
{
	return UTransformableHandle::StaticClass();
}
struct Z_Construct_UClass_UTransformableHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UTransformableHandle\n */" },
		{ "IncludePath", "TransformableHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "UTransformableHandle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBindingID_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "//possible bindingID\n" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "possible bindingID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintBindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformableHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformableHandle_Statics::NewProp_ConstraintBindingID = { "ConstraintBindingID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformableHandle, ConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintBindingID_MetaData), NewProp_ConstraintBindingID_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformableHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableHandle_Statics::NewProp_ConstraintBindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableHandle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransformableHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformableHandle_Statics::ClassParams = {
	&UTransformableHandle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransformableHandle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableHandle_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformableHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformableHandle()
{
	if (!Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton, Z_Construct_UClass_UTransformableHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTransformableHandle>()
{
	return UTransformableHandle::StaticClass();
}
UTransformableHandle::UTransformableHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformableHandle);
// End Class UTransformableHandle

// Begin Class UTransformableComponentHandle
void UTransformableComponentHandle::StaticRegisterNativesUTransformableComponentHandle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformableComponentHandle);
UClass* Z_Construct_UClass_UTransformableComponentHandle_NoRegister()
{
	return UTransformableComponentHandle::StaticClass();
}
struct Z_Construct_UClass_UTransformableComponentHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TransformableHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** The Component that this handle is pointing at. */" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "The Component that this handle is pointing at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** Optional socket name on Component. */" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "Optional socket name on Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformableComponentHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformableComponentHandle, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformableComponentHandle, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformableComponentHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableComponentHandle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransformableComponentHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTransformableHandle,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableComponentHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformableComponentHandle_Statics::ClassParams = {
	&UTransformableComponentHandle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransformableComponentHandle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableComponentHandle_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableComponentHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformableComponentHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformableComponentHandle()
{
	if (!Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton, Z_Construct_UClass_UTransformableComponentHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTransformableComponentHandle>()
{
	return UTransformableComponentHandle::StaticClass();
}
UTransformableComponentHandle::UTransformableComponentHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformableComponentHandle);
// End Class UTransformableComponentHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHandleEvent_StaticEnum, TEXT("EHandleEvent"), &Z_Registration_Info_UEnum_EHandleEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 112661443U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransformableHandle, UTransformableHandle::StaticClass, TEXT("UTransformableHandle"), &Z_Registration_Info_UClass_UTransformableHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformableHandle), 494834140U) },
		{ Z_Construct_UClass_UTransformableComponentHandle, UTransformableComponentHandle::StaticClass, TEXT("UTransformableComponentHandle"), &Z_Registration_Info_UClass_UTransformableComponentHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformableComponentHandle), 1315621585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_303326594(TEXT("/Script/Constraints"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
