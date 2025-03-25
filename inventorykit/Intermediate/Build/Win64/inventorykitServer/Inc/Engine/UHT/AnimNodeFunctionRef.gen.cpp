// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeFunctionRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeFunctionRef() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeFunctionRef();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNodeFunctionRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef;
class UScriptStruct* FAnimNodeFunctionRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeFunctionRef, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeFunctionRef"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeFunctionRef>()
{
	return FAnimNodeFunctionRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cached function name/ptr that is resolved at init time\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "ToolTip", "Cached function name/ptr that is resolved at init time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "// The name of the class to call the function with. If this is NAME_None, we assume this is a 'thiscall', if it is valid then we assume (and verify) we should call the function on a function library CDO.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "ToolTip", "The name of the class to call the function with. If this is NAME_None, we assume this is a 'thiscall', if it is valid then we assume (and verify) we should call the function on a function library CDO." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Comment", "// The name of the function to call\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "ToolTip", "The name of the function to call" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Comment", "// The class to use to call the function with, recovered by looking for a class of name FunctionName\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The class to use to call the function with, recovered by looking for a class of name FunctionName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Comment", "// The function to call, recovered by looking for a function of name FunctionName\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "ToolTip", "The function to call, recovered by looking for a function of name FunctionName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeFunctionRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeFunctionRef, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeFunctionRef, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeFunctionRef, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeFunctionRef, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Function,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNodeFunctionRef",
	Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::PropPointers),
	sizeof(FAnimNodeFunctionRef),
	alignof(FAnimNodeFunctionRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeFunctionRef()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.InnerSingleton;
}
// End ScriptStruct FAnimNodeFunctionRef

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNodeFunctionRef::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewStructOps, TEXT("AnimNodeFunctionRef"), &Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeFunctionRef), 3355215329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_3395135120(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
