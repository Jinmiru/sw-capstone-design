// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimExecutionContext() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimExecutionContext();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInitializationContext();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPoseContext();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAnimExecutionContextConversionResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult;
static UEnum* EAnimExecutionContextConversionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimExecutionContextConversionResult"));
	}
	return Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimExecutionContextConversionResult>()
{
	return EAnimExecutionContextConversionResult_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The result of an anim node context conversion \n" },
		{ "Failed.Name", "EAnimExecutionContextConversionResult::Failed" },
		{ "ModuleRelativePath", "Classes/Animation/AnimExecutionContext.h" },
		{ "Succeeded.Name", "EAnimExecutionContextConversionResult::Succeeded" },
		{ "ToolTip", "The result of an anim node context conversion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimExecutionContextConversionResult::Succeeded", (int64)EAnimExecutionContextConversionResult::Succeeded },
		{ "EAnimExecutionContextConversionResult::Failed", (int64)EAnimExecutionContextConversionResult::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimExecutionContextConversionResult",
	"EAnimExecutionContextConversionResult",
	Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult()
{
	if (!Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.InnerSingleton, Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.InnerSingleton;
}
// End Enum EAnimExecutionContextConversionResult

// Begin ScriptStruct FAnimExecutionContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimExecutionContext;
class UScriptStruct* FAnimExecutionContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimExecutionContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimExecutionContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimExecutionContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimExecutionContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimExecutionContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimExecutionContext>()
{
	return FAnimExecutionContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimExecutionContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Context used to expose anim graph execution to BP function libraries\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimExecutionContext.h" },
		{ "ToolTip", "Context used to expose anim graph execution to BP function libraries" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimExecutionContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimExecutionContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimExecutionContext",
	nullptr,
	0,
	sizeof(FAnimExecutionContext),
	alignof(FAnimExecutionContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimExecutionContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimExecutionContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimExecutionContext()
{
	if (!Z_Registration_Info_UScriptStruct_AnimExecutionContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimExecutionContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimExecutionContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimExecutionContext.InnerSingleton;
}
// End ScriptStruct FAnimExecutionContext

// Begin ScriptStruct FAnimInitializationContext
static_assert(std::is_polymorphic<FAnimInitializationContext>() == std::is_polymorphic<FAnimExecutionContext>(), "USTRUCT FAnimInitializationContext cannot be polymorphic unless super FAnimExecutionContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimInitializationContext;
class UScriptStruct* FAnimInitializationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInitializationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimInitializationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInitializationContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimInitializationContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimInitializationContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimInitializationContext>()
{
	return FAnimInitializationContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimInitializationContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimExecutionContext.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInitializationContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInitializationContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimExecutionContext,
	&NewStructOps,
	"AnimInitializationContext",
	nullptr,
	0,
	sizeof(FAnimInitializationContext),
	alignof(FAnimInitializationContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInitializationContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimInitializationContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimInitializationContext()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInitializationContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimInitializationContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimInitializationContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimInitializationContext.InnerSingleton;
}
// End ScriptStruct FAnimInitializationContext

// Begin ScriptStruct FAnimUpdateContext
static_assert(std::is_polymorphic<FAnimUpdateContext>() == std::is_polymorphic<FAnimExecutionContext>(), "USTRUCT FAnimUpdateContext cannot be polymorphic unless super FAnimExecutionContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimUpdateContext;
class UScriptStruct* FAnimUpdateContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimUpdateContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimUpdateContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimUpdateContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimUpdateContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimUpdateContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimUpdateContext>()
{
	return FAnimUpdateContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimUpdateContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimExecutionContext.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimUpdateContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimUpdateContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimExecutionContext,
	&NewStructOps,
	"AnimUpdateContext",
	nullptr,
	0,
	sizeof(FAnimUpdateContext),
	alignof(FAnimUpdateContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimUpdateContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimUpdateContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext()
{
	if (!Z_Registration_Info_UScriptStruct_AnimUpdateContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimUpdateContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimUpdateContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimUpdateContext.InnerSingleton;
}
// End ScriptStruct FAnimUpdateContext

// Begin ScriptStruct FAnimPoseContext
static_assert(std::is_polymorphic<FAnimPoseContext>() == std::is_polymorphic<FAnimExecutionContext>(), "USTRUCT FAnimPoseContext cannot be polymorphic unless super FAnimExecutionContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPoseContext;
class UScriptStruct* FAnimPoseContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPoseContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPoseContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPoseContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimPoseContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPoseContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimPoseContext>()
{
	return FAnimPoseContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimPoseContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimExecutionContext.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPoseContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPoseContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimExecutionContext,
	&NewStructOps,
	"AnimPoseContext",
	nullptr,
	0,
	sizeof(FAnimPoseContext),
	alignof(FAnimPoseContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimPoseContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimPoseContext()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPoseContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPoseContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimPoseContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimPoseContext.InnerSingleton;
}
// End ScriptStruct FAnimPoseContext

// Begin ScriptStruct FAnimComponentSpacePoseContext
static_assert(std::is_polymorphic<FAnimComponentSpacePoseContext>() == std::is_polymorphic<FAnimExecutionContext>(), "USTRUCT FAnimComponentSpacePoseContext cannot be polymorphic unless super FAnimExecutionContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimComponentSpacePoseContext;
class UScriptStruct* FAnimComponentSpacePoseContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimComponentSpacePoseContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimComponentSpacePoseContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimComponentSpacePoseContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimComponentSpacePoseContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimComponentSpacePoseContext>()
{
	return FAnimComponentSpacePoseContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimExecutionContext.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimComponentSpacePoseContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimExecutionContext,
	&NewStructOps,
	"AnimComponentSpacePoseContext",
	nullptr,
	0,
	sizeof(FAnimComponentSpacePoseContext),
	alignof(FAnimComponentSpacePoseContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext()
{
	if (!Z_Registration_Info_UScriptStruct_AnimComponentSpacePoseContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimComponentSpacePoseContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimComponentSpacePoseContext.InnerSingleton;
}
// End ScriptStruct FAnimComponentSpacePoseContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimExecutionContextConversionResult_StaticEnum, TEXT("EAnimExecutionContextConversionResult"), &Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1828686667U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimExecutionContext::StaticStruct, Z_Construct_UScriptStruct_FAnimExecutionContext_Statics::NewStructOps, TEXT("AnimExecutionContext"), &Z_Registration_Info_UScriptStruct_AnimExecutionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimExecutionContext), 3606231920U) },
		{ FAnimInitializationContext::StaticStruct, Z_Construct_UScriptStruct_FAnimInitializationContext_Statics::NewStructOps, TEXT("AnimInitializationContext"), &Z_Registration_Info_UScriptStruct_AnimInitializationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimInitializationContext), 2940422248U) },
		{ FAnimUpdateContext::StaticStruct, Z_Construct_UScriptStruct_FAnimUpdateContext_Statics::NewStructOps, TEXT("AnimUpdateContext"), &Z_Registration_Info_UScriptStruct_AnimUpdateContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimUpdateContext), 3943655895U) },
		{ FAnimPoseContext::StaticStruct, Z_Construct_UScriptStruct_FAnimPoseContext_Statics::NewStructOps, TEXT("AnimPoseContext"), &Z_Registration_Info_UScriptStruct_AnimPoseContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPoseContext), 3359563372U) },
		{ FAnimComponentSpacePoseContext::StaticStruct, Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics::NewStructOps, TEXT("AnimComponentSpacePoseContext"), &Z_Registration_Info_UScriptStruct_AnimComponentSpacePoseContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimComponentSpacePoseContext), 872267310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_2387252955(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
