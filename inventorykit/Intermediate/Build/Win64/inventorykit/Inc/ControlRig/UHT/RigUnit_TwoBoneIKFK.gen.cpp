// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_TwoBoneIKFK() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_TwoBoneIKFK
static_assert(std::is_polymorphic<FRigUnit_TwoBoneIKFK>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_TwoBoneIKFK cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK;
class UScriptStruct* FRigUnit_TwoBoneIKFK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwoBoneIKFK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TwoBoneIKFK_Execute;
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("StartJoint"), TEXT("FName"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("EndJoint"), TEXT("FName"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("PoleTarget"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("Spin"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("EndEffector"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("IKBlend"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("StartJointFKTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("MidJointFKTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("EndJointFKTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("PreviousFKIKBlend"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("StartJointIKTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("MidJointIKTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("EndJointIKTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("StartJointIndex"), TEXT("int32"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("MidJointIndex"), TEXT("int32"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("EndJointIndex"), TEXT("int32"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("UpperLimbLength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("LowerLimbLength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKFK_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TwoBoneIKFK::Execute"), &FRigUnit_TwoBoneIKFK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK.OuterSingleton, Arguments_FRigUnit_TwoBoneIKFK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwoBoneIKFK>()
{
	return FRigUnit_TwoBoneIKFK::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "TwoBoneIK/FK" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartJoint_MetaData[] = {
		{ "Category", "TwoBoneIKFK" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndJoint_MetaData[] = {
		{ "Category", "TwoBoneIKFK" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleTarget_MetaData[] = {
		{ "Category", "TwoBoneIKFK" },
		{ "Comment", "// # Transform to use as the pole target(specifies the plane of solution)\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
		{ "ToolTip", "# Transform to use as the pole target(specifies the plane of solution)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spin_MetaData[] = {
		{ "Category", "TwoBoneIKFK" },
		{ "Comment", "// Float: Spin(Default : 0.0) # Amount of twist to apply to the solution plane(Additive after application of Pole Target motion)\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
		{ "ToolTip", "Float: Spin(Default : 0.0) # Amount of twist to apply to the solution plane(Additive after application of Pole Target motion)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndEffector_MetaData[] = {
		{ "AllowSourceAccess", "" },
		{ "Category", "TwoBoneIKFK" },
		{ "Comment", "//# Transform to use as the end effector of the IK system\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
		{ "ToolTip", "# Transform to use as the end effector of the IK system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKBlend_MetaData[] = {
		{ "AllowSourceAccess", "" },
		{ "Category", "TwoBoneIKFK" },
		{ "ClampMin", "0" },
		{ "Comment", "//Float : IKBlend(Default : 0.0)             # Blend between 0.0 (FK) and 1.0 (IK)solutions\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
		{ "ToolTip", "Float : IKBlend(Default : 0.0)             # Blend between 0.0 (FK) and 1.0 (IK)solutions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartJointFKTransform_MetaData[] = {
		{ "AllowSourceAccess", "" },
		{ "Category", "TwoBoneIKFK" },
		{ "Comment", "// Transform : Start Joint FK Transform         # Transform for the Start Joint when in FK mode\n// Transform: Mid Joint FK Transform           # Transform for the Mid Joint when in FK mode\n// Transform : End Joint FK Transform          # Transform for the End Joint when in FK mode\n" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
		{ "ToolTip", "Transform : Start Joint FK Transform         # Transform for the Start Joint when in FK mode\nTransform: Mid Joint FK Transform           # Transform for the Mid Joint when in FK mode\nTransform : End Joint FK Transform          # Transform for the End Joint when in FK mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidJointFKTransform_MetaData[] = {
		{ "AllowSourceAccess", "" },
		{ "Category", "TwoBoneIKFK" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndJointFKTransform_MetaData[] = {
		{ "AllowSourceAccess", "" },
		{ "Category", "TwoBoneIKFK" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousFKIKBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartJointIKTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidJointIKTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndJointIKTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartJointIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidJointIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndJointIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperLimbLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerLimbLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartJoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndJoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoleTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndEffector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IKBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartJointFKTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MidJointFKTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndJointFKTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousFKIKBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartJointIKTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MidJointIKTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndJointIKTransform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartJointIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MidJointIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndJointIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperLimbLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerLimbLength;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwoBoneIKFK>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_StartJoint = { "StartJoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, StartJoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartJoint_MetaData), NewProp_StartJoint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndJoint = { "EndJoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, EndJoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndJoint_MetaData), NewProp_EndJoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_PoleTarget = { "PoleTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, PoleTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleTarget_MetaData), NewProp_PoleTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_Spin = { "Spin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, Spin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spin_MetaData), NewProp_Spin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndEffector = { "EndEffector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, EndEffector), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndEffector_MetaData), NewProp_EndEffector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_IKBlend = { "IKBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, IKBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKBlend_MetaData), NewProp_IKBlend_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_StartJointFKTransform = { "StartJointFKTransform", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, StartJointFKTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartJointFKTransform_MetaData), NewProp_StartJointFKTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_MidJointFKTransform = { "MidJointFKTransform", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, MidJointFKTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidJointFKTransform_MetaData), NewProp_MidJointFKTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndJointFKTransform = { "EndJointFKTransform", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, EndJointFKTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndJointFKTransform_MetaData), NewProp_EndJointFKTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_PreviousFKIKBlend = { "PreviousFKIKBlend", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, PreviousFKIKBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousFKIKBlend_MetaData), NewProp_PreviousFKIKBlend_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_StartJointIKTransform = { "StartJointIKTransform", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, StartJointIKTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartJointIKTransform_MetaData), NewProp_StartJointIKTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_MidJointIKTransform = { "MidJointIKTransform", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, MidJointIKTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidJointIKTransform_MetaData), NewProp_MidJointIKTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndJointIKTransform = { "EndJointIKTransform", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, EndJointIKTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndJointIKTransform_MetaData), NewProp_EndJointIKTransform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_StartJointIndex = { "StartJointIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, StartJointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartJointIndex_MetaData), NewProp_StartJointIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_MidJointIndex = { "MidJointIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, MidJointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidJointIndex_MetaData), NewProp_MidJointIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndJointIndex = { "EndJointIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, EndJointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndJointIndex_MetaData), NewProp_EndJointIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_UpperLimbLength = { "UpperLimbLength", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, UpperLimbLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperLimbLength_MetaData), NewProp_UpperLimbLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_LowerLimbLength = { "LowerLimbLength", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TwoBoneIKFK, LowerLimbLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerLimbLength_MetaData), NewProp_LowerLimbLength_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((FRigUnit_TwoBoneIKFK*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_TwoBoneIKFK), &Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_StartJoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndJoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_PoleTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_Spin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndEffector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_IKBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_StartJointFKTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_MidJointFKTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndJointFKTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_PreviousFKIKBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_StartJointIKTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_MidJointIKTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndJointIKTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_StartJointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_MidJointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_EndJointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_UpperLimbLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_LowerLimbLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewProp_bIsInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_TwoBoneIKFK",
	Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::PropPointers),
	sizeof(FRigUnit_TwoBoneIKFK),
	alignof(FRigUnit_TwoBoneIKFK),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK.InnerSingleton;
}
void FRigUnit_TwoBoneIKFK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_TwoBoneIKFK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		StartJoint,
		EndJoint,
		PoleTarget,
		Spin,
		EndEffector,
		IKBlend,
		StartJointFKTransform,
		MidJointFKTransform,
		EndJointFKTransform,
		PreviousFKIKBlend,
		StartJointIKTransform,
		MidJointIKTransform,
		EndJointIKTransform,
		StartJointIndex,
		MidJointIndex,
		EndJointIndex,
		UpperLimbLength,
		LowerLimbLength,
		bIsInitialized
	);
}
// End ScriptStruct FRigUnit_TwoBoneIKFK

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_TwoBoneIKFK_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_TwoBoneIKFK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::NewStructOps, TEXT("RigUnit_TwoBoneIKFK"), &Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKFK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwoBoneIKFK), 2615771466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_TwoBoneIKFK_h_930241726(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_TwoBoneIKFK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_TwoBoneIKFK_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
