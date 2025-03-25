// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Streaming/ServerStreamingLevelsVisibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerStreamingLevelsVisibility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AServerStreamingLevelsVisibility();
ENGINE_API UClass* Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AServerStreamingLevelsVisibility
void AServerStreamingLevelsVisibility::StaticRegisterNativesAServerStreamingLevelsVisibility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AServerStreamingLevelsVisibility);
UClass* Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister()
{
	return AServerStreamingLevelsVisibility::StaticClass();
}
struct Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor used to replicate server's visible level streaming\n */" },
		{ "IncludePath", "Streaming/ServerStreamingLevelsVisibility.h" },
		{ "ModuleRelativePath", "Public/Streaming/ServerStreamingLevelsVisibility.h" },
		{ "ToolTip", "Actor used to replicate server's visible level streaming" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AServerStreamingLevelsVisibility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics::ClassParams = {
	&AServerStreamingLevelsVisibility::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics::Class_MetaDataParams), Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AServerStreamingLevelsVisibility()
{
	if (!Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.OuterSingleton, Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AServerStreamingLevelsVisibility>()
{
	return AServerStreamingLevelsVisibility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AServerStreamingLevelsVisibility);
AServerStreamingLevelsVisibility::~AServerStreamingLevelsVisibility() {}
// End Class AServerStreamingLevelsVisibility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AServerStreamingLevelsVisibility, AServerStreamingLevelsVisibility::StaticClass, TEXT("AServerStreamingLevelsVisibility"), &Z_Registration_Info_UClass_AServerStreamingLevelsVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AServerStreamingLevelsVisibility), 3889066477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_2322744667(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
