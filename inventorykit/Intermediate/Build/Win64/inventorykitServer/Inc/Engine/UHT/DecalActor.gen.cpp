// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DecalActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ADecalActor();
ENGINE_API UClass* Z_Construct_UClass_ADecalActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ADecalActor Function CreateDynamicMaterialInstance
struct Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics
{
	struct DecalActor_eventCreateDynamicMaterialInstance_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalActor_eventCreateDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADecalActor, nullptr, "CreateDynamicMaterialInstance", nullptr, nullptr, Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::DecalActor_eventCreateDynamicMaterialInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::DecalActor_eventCreateDynamicMaterialInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADecalActor::execCreateDynamicMaterialInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateDynamicMaterialInstance();
	P_NATIVE_END;
}
// End Class ADecalActor Function CreateDynamicMaterialInstance

// Begin Class ADecalActor Function GetDecalMaterial
struct Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics
{
	struct DecalActor_eventGetDecalMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalActor_eventGetDecalMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADecalActor, nullptr, "GetDecalMaterial", nullptr, nullptr, Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::DecalActor_eventGetDecalMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::DecalActor_eventGetDecalMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADecalActor_GetDecalMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADecalActor::execGetDecalMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetDecalMaterial();
	P_NATIVE_END;
}
// End Class ADecalActor Function GetDecalMaterial

// Begin Class ADecalActor Function SetDecalMaterial
struct Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics
{
	struct DecalActor_eventSetDecalMaterial_Parms
	{
		UMaterialInterface* NewDecalMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDecalMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::NewProp_NewDecalMaterial = { "NewDecalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalActor_eventSetDecalMaterial_Parms, NewDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::NewProp_NewDecalMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADecalActor, nullptr, "SetDecalMaterial", nullptr, nullptr, Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::DecalActor_eventSetDecalMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::DecalActor_eventSetDecalMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADecalActor_SetDecalMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADecalActor::execSetDecalMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewDecalMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDecalMaterial(Z_Param_NewDecalMaterial);
	P_NATIVE_END;
}
// End Class ADecalActor Function SetDecalMaterial

// Begin Class ADecalActor
void ADecalActor::StaticRegisterNativesADecalActor()
{
	UClass* Class = ADecalActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDynamicMaterialInstance", &ADecalActor::execCreateDynamicMaterialInstance },
		{ "GetDecalMaterial", &ADecalActor::execGetDecalMaterial },
		{ "SetDecalMaterial", &ADecalActor::execSetDecalMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADecalActor);
UClass* Z_Construct_UClass_ADecalActor_NoRegister()
{
	return ADecalActor::StaticClass();
}
struct Z_Construct_UClass_ADecalActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* DecalActor contains a DecalComponent which can be used to render material modifications on top of existing geometry.\n*\n* @see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n* @see UDecalComponent\n*/" },
		{ "HideCategories", "Collision Attachment Actor Input Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/DecalActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "DecalActor contains a DecalComponent which can be used to render material modifications on top of existing geometry.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n@see UDecalComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Decal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Decal" },
		{ "Comment", "/** The decal component for this decal actor */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Decal,Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "The decal component for this decal actor" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/* Reference to the editor only arrow visualization component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "Reference to the editor only arrow visualization component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/* Reference to the billboard component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "Reference to the billboard component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Comment", "// formerly we used this component to draw a box, now we use the DecalComponentVisualizer\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "formerly we used this component to draw a box, now we use the DecalComponentVisualizer" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Decal;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance, "CreateDynamicMaterialInstance" }, // 3114946567
		{ &Z_Construct_UFunction_ADecalActor_GetDecalMaterial, "GetDecalMaterial" }, // 2645563511
		{ &Z_Construct_UFunction_ADecalActor_SetDecalMaterial, "SetDecalMaterial" }, // 3934618248
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecalActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADecalActor_Statics::NewProp_Decal = { "Decal", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADecalActor, Decal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Decal_MetaData), NewProp_Decal_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADecalActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADecalActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADecalActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADecalActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADecalActor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0144000820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADecalActor, BoxComponent_DEPRECATED), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADecalActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADecalActor_Statics::NewProp_Decal,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADecalActor_Statics::NewProp_ArrowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADecalActor_Statics::NewProp_SpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADecalActor_Statics::NewProp_BoxComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADecalActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADecalActor_Statics::ClassParams = {
	&ADecalActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADecalActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADecalActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADecalActor()
{
	if (!Z_Registration_Info_UClass_ADecalActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADecalActor.OuterSingleton, Z_Construct_UClass_ADecalActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADecalActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ADecalActor>()
{
	return ADecalActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADecalActor);
ADecalActor::~ADecalActor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ADecalActor)
// End Class ADecalActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADecalActor, ADecalActor::StaticClass, TEXT("ADecalActor"), &Z_Registration_Info_UClass_ADecalActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADecalActor), 1730524044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_2383211825(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
