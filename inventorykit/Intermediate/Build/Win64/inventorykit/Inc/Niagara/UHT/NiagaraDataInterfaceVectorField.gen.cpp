// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceVectorField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVectorField() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceVectorField
void UNiagaraDataInterfaceVectorField::StaticRegisterNativesUNiagaraDataInterfaceVectorField()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceVectorField);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister()
{
	return UNiagaraDataInterfaceVectorField::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Vector Field" },
		{ "DisplayName", "Vector Field" },
		{ "IncludePath", "NiagaraDataInterfaceVectorField.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Vector field to sample from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
		{ "ToolTip", "Vector field to sample from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
	static void NewProp_bTileX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileX;
	static void NewProp_bTileY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileY;
	static void NewProp_bTileZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVectorField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceVectorField, Field), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Field_MetaData), NewProp_Field_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceVectorField*)Obj)->bTileX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX = { "bTileX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileX_MetaData), NewProp_bTileX_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceVectorField*)Obj)->bTileY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY = { "bTileY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileY_MetaData), NewProp_bTileY_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceVectorField*)Obj)->bTileZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ = { "bTileZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileZ_MetaData), NewProp_bTileZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::ClassParams = {
	&UNiagaraDataInterfaceVectorField::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceVectorField>()
{
	return UNiagaraDataInterfaceVectorField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVectorField);
UNiagaraDataInterfaceVectorField::~UNiagaraDataInterfaceVectorField() {}
// End Class UNiagaraDataInterfaceVectorField

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceVectorField, UNiagaraDataInterfaceVectorField::StaticClass, TEXT("UNiagaraDataInterfaceVectorField"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceVectorField), 2030482538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_3731091936(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
