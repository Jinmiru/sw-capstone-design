// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISystemBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
ENGINE_API UClass* Z_Construct_UClass_UAISystemBase();
ENGINE_API UClass* Z_Construct_UClass_UAISystemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAISystemBase
void UAISystemBase::StaticRegisterNativesUAISystemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISystemBase);
UClass* Z_Construct_UClass_UAISystemBase_NoRegister()
{
	return UAISystemBase::StaticClass();
}
struct Z_Construct_UClass_UAISystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AISystemBase.h" },
		{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISystemClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** List of specific AI system class to create, can be game-specific */" },
		{ "DisplayName", "AISystem Class" },
		{ "MetaClass", "/Script/AIModule.AISystem" },
		{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
		{ "ToolTip", "List of specific AI system class to create, can be game-specific" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISystemModuleName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** Name of a module used to spawn the AI system. If not empty, this module has to implement IAISystemModule */" },
		{ "DisplayName", "AISystem Module" },
		{ "MetaClass", "/Script/AIModule.AISystem" },
		{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
		{ "ToolTip", "Name of a module used to spawn the AI system. If not empty, this module has to implement IAISystemModule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInstantiateAISystemOnClient_MetaData[] = {
		{ "Comment", "/** Whether the AI system class should be spawned when connecting as a client */" },
		{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
		{ "ToolTip", "Whether the AI system class should be spawned when connecting as a client" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AISystemClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AISystemModuleName;
	static void NewProp_bInstantiateAISystemOnClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantiateAISystemOnClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemClassName = { "AISystemClassName", nullptr, (EPropertyFlags)0x0040000002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystemBase, AISystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISystemClassName_MetaData), NewProp_AISystemClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemModuleName = { "AISystemModuleName", nullptr, (EPropertyFlags)0x0040000002044001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystemBase, AISystemModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISystemModuleName_MetaData), NewProp_AISystemModuleName_MetaData) };
void Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient_SetBit(void* Obj)
{
	((UAISystemBase*)Obj)->bInstantiateAISystemOnClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient = { "bInstantiateAISystemOnClient", nullptr, (EPropertyFlags)0x0040000002044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystemBase), &Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInstantiateAISystemOnClient_MetaData), NewProp_bInstantiateAISystemOnClient_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISystemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemModuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISystemBase_Statics::ClassParams = {
	&UAISystemBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISystemBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::PropPointers),
	0,
	0x000800A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISystemBase()
{
	if (!Z_Registration_Info_UClass_UAISystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISystemBase.OuterSingleton, Z_Construct_UClass_UAISystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISystemBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAISystemBase>()
{
	return UAISystemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISystemBase);
// End Class UAISystemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISystemBase, UAISystemBase::StaticClass, TEXT("UAISystemBase"), &Z_Registration_Info_UClass_UAISystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISystemBase), 3490540627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_314081013(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
