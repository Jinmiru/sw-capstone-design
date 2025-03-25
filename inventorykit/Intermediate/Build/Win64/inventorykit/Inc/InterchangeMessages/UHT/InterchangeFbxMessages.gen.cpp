// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/Public/Fbx/InterchangeFbxMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeFbxMessages() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshError();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshError_Generic();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshError_Generic_NoRegister();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshError_NoRegister();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshWarning();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_Generic();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_NoRegister();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_NoRegister();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_NoRegister();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultTextureWarning();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultTextureWarning_NoRegister();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist();
INTERCHANGEMESSAGES_API UClass* Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeMessages();
// End Cross Module References

// Begin Class UInterchangeResultMeshWarning
void UInterchangeResultMeshWarning::StaticRegisterNativesUInterchangeResultMeshWarning()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultMeshWarning);
UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_NoRegister()
{
	return UInterchangeResultMeshWarning::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultMeshWarning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for FBX parser warnings\n */" },
		{ "IncludePath", "Fbx/InterchangeFbxMessages.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
		{ "ToolTip", "Base class for FBX parser warnings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultMeshWarning>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultMeshWarning, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::NewProp_MeshName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultWarning,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::ClassParams = {
	&UInterchangeResultMeshWarning::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultMeshWarning()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultMeshWarning.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultMeshWarning.OuterSingleton, Z_Construct_UClass_UInterchangeResultMeshWarning_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultMeshWarning.OuterSingleton;
}
template<> INTERCHANGEMESSAGES_API UClass* StaticClass<UInterchangeResultMeshWarning>()
{
	return UInterchangeResultMeshWarning::StaticClass();
}
UInterchangeResultMeshWarning::UInterchangeResultMeshWarning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultMeshWarning);
UInterchangeResultMeshWarning::~UInterchangeResultMeshWarning() {}
// End Class UInterchangeResultMeshWarning

// Begin Class UInterchangeResultTextureWarning
void UInterchangeResultTextureWarning::StaticRegisterNativesUInterchangeResultTextureWarning()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultTextureWarning);
UClass* Z_Construct_UClass_UInterchangeResultTextureWarning_NoRegister()
{
	return UInterchangeResultTextureWarning::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultTextureWarning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for FBX parser warnings\n */" },
		{ "IncludePath", "Fbx/InterchangeFbxMessages.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
		{ "ToolTip", "Base class for FBX parser warnings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextureName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultTextureWarning>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultTextureWarning, TextureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureName_MetaData), NewProp_TextureName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::NewProp_TextureName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultWarning,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::ClassParams = {
	&UInterchangeResultTextureWarning::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultTextureWarning()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultTextureWarning.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultTextureWarning.OuterSingleton, Z_Construct_UClass_UInterchangeResultTextureWarning_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultTextureWarning.OuterSingleton;
}
template<> INTERCHANGEMESSAGES_API UClass* StaticClass<UInterchangeResultTextureWarning>()
{
	return UInterchangeResultTextureWarning::StaticClass();
}
UInterchangeResultTextureWarning::UInterchangeResultTextureWarning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultTextureWarning);
UInterchangeResultTextureWarning::~UInterchangeResultTextureWarning() {}
// End Class UInterchangeResultTextureWarning

// Begin Class UInterchangeResultMeshError
void UInterchangeResultMeshError::StaticRegisterNativesUInterchangeResultMeshError()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultMeshError);
UClass* Z_Construct_UClass_UInterchangeResultMeshError_NoRegister()
{
	return UInterchangeResultMeshError::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultMeshError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for FBX parser errors\n */" },
		{ "IncludePath", "Fbx/InterchangeFbxMessages.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
		{ "ToolTip", "Base class for FBX parser errors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultMeshError>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResultMeshError_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultMeshError, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultMeshError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultMeshError_Statics::NewProp_MeshName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshError_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultMeshError_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultError,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshError_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultMeshError_Statics::ClassParams = {
	&UInterchangeResultMeshError::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultMeshError_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshError_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshError_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultMeshError_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultMeshError()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultMeshError.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultMeshError.OuterSingleton, Z_Construct_UClass_UInterchangeResultMeshError_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultMeshError.OuterSingleton;
}
template<> INTERCHANGEMESSAGES_API UClass* StaticClass<UInterchangeResultMeshError>()
{
	return UInterchangeResultMeshError::StaticClass();
}
UInterchangeResultMeshError::UInterchangeResultMeshError(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultMeshError);
UInterchangeResultMeshError::~UInterchangeResultMeshError() {}
// End Class UInterchangeResultMeshError

// Begin Class UInterchangeResultMeshWarning_Generic
void UInterchangeResultMeshWarning_Generic::StaticRegisterNativesUInterchangeResultMeshWarning_Generic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultMeshWarning_Generic);
UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_NoRegister()
{
	return UInterchangeResultMeshWarning_Generic::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A generic class for FBX parser warnings, with no additional metadata, and where the text is specified by the user\n */" },
		{ "IncludePath", "Fbx/InterchangeFbxMessages.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
		{ "ToolTip", "A generic class for FBX parser warnings, with no additional metadata, and where the text is specified by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultMeshWarning_Generic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultMeshWarning_Generic, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultMeshWarning,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::ClassParams = {
	&UInterchangeResultMeshWarning_Generic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_Generic()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.OuterSingleton, Z_Construct_UClass_UInterchangeResultMeshWarning_Generic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.OuterSingleton;
}
template<> INTERCHANGEMESSAGES_API UClass* StaticClass<UInterchangeResultMeshWarning_Generic>()
{
	return UInterchangeResultMeshWarning_Generic::StaticClass();
}
UInterchangeResultMeshWarning_Generic::UInterchangeResultMeshWarning_Generic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultMeshWarning_Generic);
UInterchangeResultMeshWarning_Generic::~UInterchangeResultMeshWarning_Generic() {}
// End Class UInterchangeResultMeshWarning_Generic

// Begin Class UInterchangeResultMeshError_Generic
void UInterchangeResultMeshError_Generic::StaticRegisterNativesUInterchangeResultMeshError_Generic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultMeshError_Generic);
UClass* Z_Construct_UClass_UInterchangeResultMeshError_Generic_NoRegister()
{
	return UInterchangeResultMeshError_Generic::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A generic class for FBX parser errors, with no additional metadata, and where the text is specified by the user\n */" },
		{ "IncludePath", "Fbx/InterchangeFbxMessages.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
		{ "ToolTip", "A generic class for FBX parser errors, with no additional metadata, and where the text is specified by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultMeshError_Generic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultMeshError_Generic, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultMeshError,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::ClassParams = {
	&UInterchangeResultMeshError_Generic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultMeshError_Generic()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.OuterSingleton, Z_Construct_UClass_UInterchangeResultMeshError_Generic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.OuterSingleton;
}
template<> INTERCHANGEMESSAGES_API UClass* StaticClass<UInterchangeResultMeshError_Generic>()
{
	return UInterchangeResultMeshError_Generic::StaticClass();
}
UInterchangeResultMeshError_Generic::UInterchangeResultMeshError_Generic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultMeshError_Generic);
UInterchangeResultMeshError_Generic::~UInterchangeResultMeshError_Generic() {}
// End Class UInterchangeResultMeshError_Generic

// Begin Class UInterchangeResultMeshWarning_TooManyUVs
void UInterchangeResultMeshWarning_TooManyUVs::StaticRegisterNativesUInterchangeResultMeshWarning_TooManyUVs()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultMeshWarning_TooManyUVs);
UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_NoRegister()
{
	return UInterchangeResultMeshWarning_TooManyUVs::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fbx/InterchangeFbxMessages.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcessUVs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExcessUVs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultMeshWarning_TooManyUVs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::NewProp_ExcessUVs = { "ExcessUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultMeshWarning_TooManyUVs, ExcessUVs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcessUVs_MetaData), NewProp_ExcessUVs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::NewProp_ExcessUVs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultMeshWarning,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::ClassParams = {
	&UInterchangeResultMeshWarning_TooManyUVs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.OuterSingleton, Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.OuterSingleton;
}
template<> INTERCHANGEMESSAGES_API UClass* StaticClass<UInterchangeResultMeshWarning_TooManyUVs>()
{
	return UInterchangeResultMeshWarning_TooManyUVs::StaticClass();
}
UInterchangeResultMeshWarning_TooManyUVs::UInterchangeResultMeshWarning_TooManyUVs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultMeshWarning_TooManyUVs);
UInterchangeResultMeshWarning_TooManyUVs::~UInterchangeResultMeshWarning_TooManyUVs() {}
// End Class UInterchangeResultMeshWarning_TooManyUVs

// Begin Class UInterchangeResultTextureWarning_TextureFileDoNotExist
void UInterchangeResultTextureWarning_TextureFileDoNotExist::StaticRegisterNativesUInterchangeResultTextureWarning_TextureFileDoNotExist()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultTextureWarning_TextureFileDoNotExist);
UClass* Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_NoRegister()
{
	return UInterchangeResultTextureWarning_TextureFileDoNotExist::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A generic class for FBX parser warnings, with no additional metadata, and where the text is specified by the user\n */" },
		{ "IncludePath", "Fbx/InterchangeFbxMessages.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
		{ "ToolTip", "A generic class for FBX parser warnings, with no additional metadata, and where the text is specified by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultTextureWarning_TextureFileDoNotExist>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultTextureWarning_TextureFileDoNotExist, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultTextureWarning_TextureFileDoNotExist, MaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialName_MetaData), NewProp_MaterialName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::NewProp_MaterialName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultTextureWarning,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::ClassParams = {
	&UInterchangeResultTextureWarning_TextureFileDoNotExist::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist.OuterSingleton, Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist.OuterSingleton;
}
template<> INTERCHANGEMESSAGES_API UClass* StaticClass<UInterchangeResultTextureWarning_TextureFileDoNotExist>()
{
	return UInterchangeResultTextureWarning_TextureFileDoNotExist::StaticClass();
}
UInterchangeResultTextureWarning_TextureFileDoNotExist::UInterchangeResultTextureWarning_TextureFileDoNotExist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultTextureWarning_TextureFileDoNotExist);
UInterchangeResultTextureWarning_TextureFileDoNotExist::~UInterchangeResultTextureWarning_TextureFileDoNotExist() {}
// End Class UInterchangeResultTextureWarning_TextureFileDoNotExist

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Messages_Public_Fbx_InterchangeFbxMessages_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeResultMeshWarning, UInterchangeResultMeshWarning::StaticClass, TEXT("UInterchangeResultMeshWarning"), &Z_Registration_Info_UClass_UInterchangeResultMeshWarning, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultMeshWarning), 1178192124U) },
		{ Z_Construct_UClass_UInterchangeResultTextureWarning, UInterchangeResultTextureWarning::StaticClass, TEXT("UInterchangeResultTextureWarning"), &Z_Registration_Info_UClass_UInterchangeResultTextureWarning, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultTextureWarning), 620212452U) },
		{ Z_Construct_UClass_UInterchangeResultMeshError, UInterchangeResultMeshError::StaticClass, TEXT("UInterchangeResultMeshError"), &Z_Registration_Info_UClass_UInterchangeResultMeshError, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultMeshError), 4114289019U) },
		{ Z_Construct_UClass_UInterchangeResultMeshWarning_Generic, UInterchangeResultMeshWarning_Generic::StaticClass, TEXT("UInterchangeResultMeshWarning_Generic"), &Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultMeshWarning_Generic), 1780724263U) },
		{ Z_Construct_UClass_UInterchangeResultMeshError_Generic, UInterchangeResultMeshError_Generic::StaticClass, TEXT("UInterchangeResultMeshError_Generic"), &Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultMeshError_Generic), 589496219U) },
		{ Z_Construct_UClass_UInterchangeResultMeshWarning_TooManyUVs, UInterchangeResultMeshWarning_TooManyUVs::StaticClass, TEXT("UInterchangeResultMeshWarning_TooManyUVs"), &Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultMeshWarning_TooManyUVs), 2244010415U) },
		{ Z_Construct_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist, UInterchangeResultTextureWarning_TextureFileDoNotExist::StaticClass, TEXT("UInterchangeResultTextureWarning_TextureFileDoNotExist"), &Z_Registration_Info_UClass_UInterchangeResultTextureWarning_TextureFileDoNotExist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultTextureWarning_TextureFileDoNotExist), 603155859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Messages_Public_Fbx_InterchangeFbxMessages_h_717940017(TEXT("/Script/InterchangeMessages"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Messages_Public_Fbx_InterchangeFbxMessages_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Messages_Public_Fbx_InterchangeFbxMessages_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
