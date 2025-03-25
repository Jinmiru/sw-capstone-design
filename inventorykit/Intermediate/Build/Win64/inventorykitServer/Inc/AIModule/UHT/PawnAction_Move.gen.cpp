// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction_Move.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Move() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Move();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Move_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionMoveMode();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EPawnActionMoveMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPawnActionMoveMode;
static UEnum* EPawnActionMoveMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionMoveMode, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionMoveMode"));
	}
	return Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EPawnActionMoveMode::Type>()
{
	return EPawnActionMoveMode_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "StraightLine.Name", "EPawnActionMoveMode::StraightLine" },
		{ "UsePathfinding.Name", "EPawnActionMoveMode::UsePathfinding" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPawnActionMoveMode::UsePathfinding", (int64)EPawnActionMoveMode::UsePathfinding },
		{ "EPawnActionMoveMode::StraightLine", (int64)EPawnActionMoveMode::StraightLine },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EPawnActionMoveMode",
	"EPawnActionMoveMode::Type",
	Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EPawnActionMoveMode()
{
	if (!Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton, Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton;
}
// End Enum EPawnActionMoveMode

// Begin Class UDEPRECATED_PawnAction_Move
void UDEPRECATED_PawnAction_Move::StaticRegisterNativesUDEPRECATED_PawnAction_Move()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnAction_Move);
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Move_NoRegister()
{
	return UDEPRECATED_PawnAction_Move::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Move.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalActor_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinishOnOverlap_MetaData[] = {
		{ "Comment", "/** if set to true (default) will make action succeed when the pawn's collision component overlaps with goal's collision component */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set to true (default) will make action succeed when the pawn's collision component overlaps with goal's collision component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePathfinding_MetaData[] = {
		{ "Comment", "/** if set, movement will use path finding */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, movement will use path finding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[] = {
		{ "Comment", "/** if set, use incomplete path when goal can't be reached */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalToNavigation_MetaData[] = {
		{ "Comment", "/** if set, GoalLocation will be projected on navigation before using  */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, GoalLocation will be projected on navigation before using" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePathToGoal_MetaData[] = {
		{ "Comment", "/** if set, path to GoalActor will be updated with goal's movement */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, path to GoalActor will be updated with goal's movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbortSubActionOnPathChange_MetaData[] = {
		{ "Comment", "/** if set, other actions with the same priority will be aborted when path is changed */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, other actions with the same priority will be aborted when path is changed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
	static void NewProp_bAllowStrafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe;
	static void NewProp_bFinishOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishOnOverlap;
	static void NewProp_bUsePathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
	static void NewProp_bAllowPartialPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
	static void NewProp_bProjectGoalToNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalToNavigation;
	static void NewProp_bUpdatePathToGoal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePathToGoal;
	static void NewProp_bAbortSubActionOnPathChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbortSubActionOnPathChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnAction_Move>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction_Move, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalActor_MetaData), NewProp_GoalActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction_Move, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalLocation_MetaData), NewProp_GoalLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction_Move, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction_Move, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterClass_MetaData), NewProp_FilterClass_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAllowStrafe_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction_Move*)Obj)->bAllowStrafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAllowStrafe = { "bAllowStrafe", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction_Move), &Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAllowStrafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStrafe_MetaData), NewProp_bAllowStrafe_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bFinishOnOverlap_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction_Move*)Obj)->bFinishOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bFinishOnOverlap = { "bFinishOnOverlap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction_Move), &Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bFinishOnOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinishOnOverlap_MetaData), NewProp_bFinishOnOverlap_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction_Move*)Obj)->bUsePathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction_Move), &Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePathfinding_MetaData), NewProp_bUsePathfinding_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction_Move*)Obj)->bAllowPartialPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction_Move), &Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPartialPath_MetaData), NewProp_bAllowPartialPath_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction_Move*)Obj)->bProjectGoalToNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bProjectGoalToNavigation = { "bProjectGoalToNavigation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction_Move), &Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectGoalToNavigation_MetaData), NewProp_bProjectGoalToNavigation_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bUpdatePathToGoal_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction_Move*)Obj)->bUpdatePathToGoal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bUpdatePathToGoal = { "bUpdatePathToGoal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction_Move), &Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bUpdatePathToGoal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatePathToGoal_MetaData), NewProp_bUpdatePathToGoal_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAbortSubActionOnPathChange_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction_Move*)Obj)->bAbortSubActionOnPathChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAbortSubActionOnPathChange = { "bAbortSubActionOnPathChange", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction_Move), &Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAbortSubActionOnPathChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbortSubActionOnPathChange_MetaData), NewProp_bAbortSubActionOnPathChange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_GoalActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_GoalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_AcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_FilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAllowStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bFinishOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bUsePathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAllowPartialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bProjectGoalToNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bUpdatePathToGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::NewProp_bAbortSubActionOnPathChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDEPRECATED_PawnAction,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::ClassParams = {
	&UDEPRECATED_PawnAction_Move::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::PropPointers),
	0,
	0x028812A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Move()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Move.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Move.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Move.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnAction_Move>()
{
	return UDEPRECATED_PawnAction_Move::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnAction_Move);
UDEPRECATED_PawnAction_Move::~UDEPRECATED_PawnAction_Move() {}
// End Class UDEPRECATED_PawnAction_Move

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPawnActionMoveMode_StaticEnum, TEXT("EPawnActionMoveMode"), &Z_Registration_Info_UEnum_EPawnActionMoveMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3753066860U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnAction_Move, UDEPRECATED_PawnAction_Move::StaticClass, TEXT("UDEPRECATED_PawnAction_Move"), &Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Move, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnAction_Move), 789881168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_1315561516(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
