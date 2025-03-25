// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataChannel_Global.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannel_Global() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Global();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Global_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataChannel_Global
void UNiagaraDataChannel_Global::StaticRegisterNativesUNiagaraDataChannel_Global()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannel_Global);
UClass* Z_Construct_UClass_UNiagaraDataChannel_Global_NoRegister()
{
	return UNiagaraDataChannel_Global::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannel_Global_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\nSimple DataChannel handler that makes all data visible globally.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel_Global.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Global.h" },
		{ "PrioritizeCategories", "Data Channel" },
		{ "ToolTip", "Simple DataChannel handler that makes all data visible globally." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannel_Global>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::ClassParams = {
	&UNiagaraDataChannel_Global::StaticClass,
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
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannel_Global()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannel_Global.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannel_Global.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannel_Global.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannel_Global>()
{
	return UNiagaraDataChannel_Global::StaticClass();
}
UNiagaraDataChannel_Global::UNiagaraDataChannel_Global(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannel_Global);
UNiagaraDataChannel_Global::~UNiagaraDataChannel_Global() {}
// End Class UNiagaraDataChannel_Global

// Begin Class UNiagaraDataChannelHandler_Global
void UNiagaraDataChannelHandler_Global::StaticRegisterNativesUNiagaraDataChannelHandler_Global()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelHandler_Global);
UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global_NoRegister()
{
	return UNiagaraDataChannelHandler_Global::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nBasic DataChannel handler that makes all data visible globally.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel_Global.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Global.h" },
		{ "ToolTip", "Basic DataChannel handler that makes all data visible globally." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelHandler_Global>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataChannelHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::ClassParams = {
	&UNiagaraDataChannelHandler_Global::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelHandler_Global>()
{
	return UNiagaraDataChannelHandler_Global::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelHandler_Global);
UNiagaraDataChannelHandler_Global::~UNiagaraDataChannelHandler_Global() {}
// End Class UNiagaraDataChannelHandler_Global

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannel_Global, UNiagaraDataChannel_Global::StaticClass, TEXT("UNiagaraDataChannel_Global"), &Z_Registration_Info_UClass_UNiagaraDataChannel_Global, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannel_Global), 1321698593U) },
		{ Z_Construct_UClass_UNiagaraDataChannelHandler_Global, UNiagaraDataChannelHandler_Global::StaticClass, TEXT("UNiagaraDataChannelHandler_Global"), &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelHandler_Global), 1870086012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_108285825(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
