// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsAtLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_FAIDistanceType();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_IsAtLocation
void UBTDecorator_IsAtLocation::StaticRegisterNativesUBTDecorator_IsAtLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_IsAtLocation);
UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister()
{
	return UBTDecorator_IsAtLocation::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Is At Location decorator node.\n * A decorator node that checks if AI controlled pawn is at given location.\n */" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ToolTip", "Is At Location decorator node.\nA decorator node that checks if AI controlled pawn is at given location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "Condition" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** distance threshold to accept as being at location */" },
		{ "EditCondition", "!bUseParametrizedRadius" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ToolTip", "distance threshold to accept as being at location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParametrizedAcceptableRadius_MetaData[] = {
		{ "Category", "Condition" },
		{ "EditCondition", "bUseParametrizedRadius" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometricDistanceType_MetaData[] = {
		{ "Category", "Condition" },
		{ "EditCondition", "!bPathFindingBasedTest" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseParametrizedRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNavAgentGoalLocation_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** if moving to an actor and this actor is a nav agent, then we will move to their nav agent location */" },
		{ "EditCondition", "bPathFindingBasedTest" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ToolTip", "if moving to an actor and this actor is a nav agent, then we will move to their nav agent location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPathFindingBasedTest_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** If true the result will be consistent with tests done while following paths.\n\x09 *\x09Set to false to use geometric distance as configured with DistanceType */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ToolTip", "If true the result will be consistent with tests done while following paths.\n    Set to false to use geometric distance as configured with DistanceType" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParametrizedAcceptableRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GeometricDistanceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GeometricDistanceType;
	static void NewProp_bUseParametrizedRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParametrizedRadius;
	static void NewProp_bUseNavAgentGoalLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNavAgentGoalLocation;
	static void NewProp_bPathFindingBasedTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathFindingBasedTest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsAtLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_IsAtLocation, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_ParametrizedAcceptableRadius = { "ParametrizedAcceptableRadius", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParametrizedAcceptableRadius_MetaData), NewProp_ParametrizedAcceptableRadius_MetaData) }; // 1384630506
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType = { "GeometricDistanceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_IsAtLocation, GeometricDistanceType), Z_Construct_UEnum_AIModule_FAIDistanceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometricDistanceType_MetaData), NewProp_GeometricDistanceType_MetaData) }; // 487886732
void Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius_SetBit(void* Obj)
{
	((UBTDecorator_IsAtLocation*)Obj)->bUseParametrizedRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius = { "bUseParametrizedRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTDecorator_IsAtLocation), &Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseParametrizedRadius_MetaData), NewProp_bUseParametrizedRadius_MetaData) };
void Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation_SetBit(void* Obj)
{
	((UBTDecorator_IsAtLocation*)Obj)->bUseNavAgentGoalLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation = { "bUseNavAgentGoalLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTDecorator_IsAtLocation), &Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNavAgentGoalLocation_MetaData), NewProp_bUseNavAgentGoalLocation_MetaData) };
void Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest_SetBit(void* Obj)
{
	((UBTDecorator_IsAtLocation*)Obj)->bPathFindingBasedTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest = { "bPathFindingBasedTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTDecorator_IsAtLocation), &Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPathFindingBasedTest_MetaData), NewProp_bPathFindingBasedTest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_AcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_ParametrizedAcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::ClassParams = {
	&UBTDecorator_IsAtLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.OuterSingleton, Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_IsAtLocation>()
{
	return UBTDecorator_IsAtLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsAtLocation);
UBTDecorator_IsAtLocation::~UBTDecorator_IsAtLocation() {}
// End Class UBTDecorator_IsAtLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_IsAtLocation, UBTDecorator_IsAtLocation::StaticClass, TEXT("UBTDecorator_IsAtLocation"), &Z_Registration_Info_UClass_UBTDecorator_IsAtLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_IsAtLocation), 4111403696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_3137216294(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
