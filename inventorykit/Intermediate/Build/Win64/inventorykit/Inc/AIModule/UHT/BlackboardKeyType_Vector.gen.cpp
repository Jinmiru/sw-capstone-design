// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Vector() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Vector();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Vector_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBlackboardKeyType_Vector
void UBlackboardKeyType_Vector::StaticRegisterNativesUBlackboardKeyType_Vector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType_Vector);
UClass* Z_Construct_UClass_UBlackboardKeyType_Vector_NoRegister()
{
	return UBlackboardKeyType_Vector::StaticClass();
}
struct Z_Construct_UClass_UBlackboardKeyType_Vector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Vector" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Vector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "// If not set, will default to  FAISystem::InvalidLocation\n" },
		{ "EditCondition", "bUseDefaultValue" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Vector.h" },
		{ "ToolTip", "If not set, will default to  FAISystem::InvalidLocation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Vector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static void NewProp_bUseDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_Vector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardKeyType_Vector, DefaultValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::NewProp_bUseDefaultValue_SetBit(void* Obj)
{
	((UBlackboardKeyType_Vector*)Obj)->bUseDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::NewProp_bUseDefaultValue = { "bUseDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlackboardKeyType_Vector), &Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::NewProp_bUseDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultValue_MetaData), NewProp_bUseDefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::NewProp_bUseDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::ClassParams = {
	&UBlackboardKeyType_Vector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlackboardKeyType_Vector()
{
	if (!Z_Registration_Info_UClass_UBlackboardKeyType_Vector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType_Vector.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_Vector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlackboardKeyType_Vector.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType_Vector>()
{
	return UBlackboardKeyType_Vector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Vector);
UBlackboardKeyType_Vector::~UBlackboardKeyType_Vector() {}
// End Class UBlackboardKeyType_Vector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Vector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType_Vector, UBlackboardKeyType_Vector::StaticClass, TEXT("UBlackboardKeyType_Vector"), &Z_Registration_Info_UClass_UBlackboardKeyType_Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType_Vector), 1791365609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Vector_h_674779561(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Vector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Vector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
