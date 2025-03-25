// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Physics/SimpleCollisionEditorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCollisionEditorTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorToolActionProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class USimpleCollisionEditorToolBuilder
void USimpleCollisionEditorToolBuilder::StaticRegisterNativesUSimpleCollisionEditorToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCollisionEditorToolBuilder);
UClass* Z_Construct_UClass_USimpleCollisionEditorToolBuilder_NoRegister()
{
	return USimpleCollisionEditorToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/SimpleCollisionEditorTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCollisionEditorToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics::ClassParams = {
	&USimpleCollisionEditorToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCollisionEditorToolBuilder()
{
	if (!Z_Registration_Info_UClass_USimpleCollisionEditorToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCollisionEditorToolBuilder.OuterSingleton, Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCollisionEditorToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USimpleCollisionEditorToolBuilder>()
{
	return USimpleCollisionEditorToolBuilder::StaticClass();
}
USimpleCollisionEditorToolBuilder::USimpleCollisionEditorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCollisionEditorToolBuilder);
USimpleCollisionEditorToolBuilder::~USimpleCollisionEditorToolBuilder() {}
// End Class USimpleCollisionEditorToolBuilder

// Begin Enum ESimpleCollisionEditorToolAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleCollisionEditorToolAction;
static UEnum* ESimpleCollisionEditorToolAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimpleCollisionEditorToolAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimpleCollisionEditorToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ESimpleCollisionEditorToolAction"));
	}
	return Z_Registration_Info_UEnum_ESimpleCollisionEditorToolAction.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ESimpleCollisionEditorToolAction>()
{
	return ESimpleCollisionEditorToolAction_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AddBox.Name", "ESimpleCollisionEditorToolAction::AddBox" },
		{ "AddCapsule.Name", "ESimpleCollisionEditorToolAction::AddCapsule" },
		{ "AddSphere.Name", "ESimpleCollisionEditorToolAction::AddSphere" },
		{ "DeleteAll.Name", "ESimpleCollisionEditorToolAction::DeleteAll" },
		{ "DeleteSelected.Name", "ESimpleCollisionEditorToolAction::DeleteSelected" },
		{ "Duplicate.Name", "ESimpleCollisionEditorToolAction::Duplicate" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
		{ "NoAction.Name", "ESimpleCollisionEditorToolAction::NoAction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimpleCollisionEditorToolAction::NoAction", (int64)ESimpleCollisionEditorToolAction::NoAction },
		{ "ESimpleCollisionEditorToolAction::AddSphere", (int64)ESimpleCollisionEditorToolAction::AddSphere },
		{ "ESimpleCollisionEditorToolAction::AddBox", (int64)ESimpleCollisionEditorToolAction::AddBox },
		{ "ESimpleCollisionEditorToolAction::AddCapsule", (int64)ESimpleCollisionEditorToolAction::AddCapsule },
		{ "ESimpleCollisionEditorToolAction::Duplicate", (int64)ESimpleCollisionEditorToolAction::Duplicate },
		{ "ESimpleCollisionEditorToolAction::DeleteSelected", (int64)ESimpleCollisionEditorToolAction::DeleteSelected },
		{ "ESimpleCollisionEditorToolAction::DeleteAll", (int64)ESimpleCollisionEditorToolAction::DeleteAll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ESimpleCollisionEditorToolAction",
	"ESimpleCollisionEditorToolAction",
	Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction()
{
	if (!Z_Registration_Info_UEnum_ESimpleCollisionEditorToolAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleCollisionEditorToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ESimpleCollisionEditorToolAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimpleCollisionEditorToolAction.InnerSingleton;
}
// End Enum ESimpleCollisionEditorToolAction

// Begin Class USimpleCollisionEditorToolActionProperties Function AddBox
struct Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Add Shapes" },
		{ "Comment", "/** Add a new simple box collision shape */" },
		{ "DisplayName", "Add Box" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
		{ "ToolTip", "Add a new simple box collision shape" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCollisionEditorToolActionProperties, nullptr, "AddBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddBox_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCollisionEditorToolActionProperties::execAddBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBox();
	P_NATIVE_END;
}
// End Class USimpleCollisionEditorToolActionProperties Function AddBox

// Begin Class USimpleCollisionEditorToolActionProperties Function AddCapsule
struct Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddCapsule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Add Shapes" },
		{ "Comment", "/** Add a new simple capsule collision shape */" },
		{ "DisplayName", "Add Capsule" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
		{ "ToolTip", "Add a new simple capsule collision shape" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCollisionEditorToolActionProperties, nullptr, "AddCapsule", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddCapsule_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCollisionEditorToolActionProperties::execAddCapsule)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCapsule();
	P_NATIVE_END;
}
// End Class USimpleCollisionEditorToolActionProperties Function AddCapsule

// Begin Class USimpleCollisionEditorToolActionProperties Function AddSphere
struct Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddSphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Add Shapes" },
		{ "Comment", "/** Add a new simple sphere collision shape */" },
		{ "DisplayName", "Add Sphere" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
		{ "ToolTip", "Add a new simple sphere collision shape" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCollisionEditorToolActionProperties, nullptr, "AddSphere", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddSphere_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCollisionEditorToolActionProperties::execAddSphere)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSphere();
	P_NATIVE_END;
}
// End Class USimpleCollisionEditorToolActionProperties Function AddSphere

// Begin Class USimpleCollisionEditorToolActionProperties Function Delete
struct Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Delete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Remove currently selected simple collision shapes from the mesh */" },
		{ "DisplayName", "Delete Selected" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
		{ "ToolTip", "Remove currently selected simple collision shapes from the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCollisionEditorToolActionProperties, nullptr, "Delete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Delete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Delete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Delete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Delete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCollisionEditorToolActionProperties::execDelete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Delete();
	P_NATIVE_END;
}
// End Class USimpleCollisionEditorToolActionProperties Function Delete

// Begin Class USimpleCollisionEditorToolActionProperties Function DeleteAll
struct Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_DeleteAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Remove all current simple collision shapes from the mesh */" },
		{ "DisplayName", "Delete All" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
		{ "ToolTip", "Remove all current simple collision shapes from the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_DeleteAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCollisionEditorToolActionProperties, nullptr, "DeleteAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_DeleteAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_DeleteAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_DeleteAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_DeleteAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCollisionEditorToolActionProperties::execDeleteAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteAll();
	P_NATIVE_END;
}
// End Class USimpleCollisionEditorToolActionProperties Function DeleteAll

// Begin Class USimpleCollisionEditorToolActionProperties Function Duplicate
struct Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Duplicate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Duplicate all selected simple collision shapes */" },
		{ "DisplayName", "Duplicate" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
		{ "ToolTip", "Duplicate all selected simple collision shapes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Duplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCollisionEditorToolActionProperties, nullptr, "Duplicate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Duplicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Duplicate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Duplicate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Duplicate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCollisionEditorToolActionProperties::execDuplicate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Duplicate();
	P_NATIVE_END;
}
// End Class USimpleCollisionEditorToolActionProperties Function Duplicate

// Begin Class USimpleCollisionEditorToolActionProperties
void USimpleCollisionEditorToolActionProperties::StaticRegisterNativesUSimpleCollisionEditorToolActionProperties()
{
	UClass* Class = USimpleCollisionEditorToolActionProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBox", &USimpleCollisionEditorToolActionProperties::execAddBox },
		{ "AddCapsule", &USimpleCollisionEditorToolActionProperties::execAddCapsule },
		{ "AddSphere", &USimpleCollisionEditorToolActionProperties::execAddSphere },
		{ "Delete", &USimpleCollisionEditorToolActionProperties::execDelete },
		{ "DeleteAll", &USimpleCollisionEditorToolActionProperties::execDeleteAll },
		{ "Duplicate", &USimpleCollisionEditorToolActionProperties::execDuplicate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCollisionEditorToolActionProperties);
UClass* Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_NoRegister()
{
	return USimpleCollisionEditorToolActionProperties::StaticClass();
}
struct Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/SimpleCollisionEditorTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddBox, "AddBox" }, // 3832263120
		{ &Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddCapsule, "AddCapsule" }, // 4194102544
		{ &Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_AddSphere, "AddSphere" }, // 980927866
		{ &Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Delete, "Delete" }, // 732882440
		{ &Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_DeleteAll, "DeleteAll" }, // 1357235405
		{ &Z_Construct_UFunction_USimpleCollisionEditorToolActionProperties_Duplicate, "Duplicate" }, // 2513078300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCollisionEditorToolActionProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics::ClassParams = {
	&USimpleCollisionEditorToolActionProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCollisionEditorToolActionProperties()
{
	if (!Z_Registration_Info_UClass_USimpleCollisionEditorToolActionProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCollisionEditorToolActionProperties.OuterSingleton, Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCollisionEditorToolActionProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USimpleCollisionEditorToolActionProperties>()
{
	return USimpleCollisionEditorToolActionProperties::StaticClass();
}
USimpleCollisionEditorToolActionProperties::USimpleCollisionEditorToolActionProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCollisionEditorToolActionProperties);
USimpleCollisionEditorToolActionProperties::~USimpleCollisionEditorToolActionProperties() {}
// End Class USimpleCollisionEditorToolActionProperties

// Begin Class USimpleCollisionEditorTool
void USimpleCollisionEditorTool::StaticRegisterNativesUSimpleCollisionEditorTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCollisionEditorTool);
UClass* Z_Construct_UClass_USimpleCollisionEditorTool_NoRegister()
{
	return USimpleCollisionEditorTool::StaticClass();
}
struct Z_Construct_UClass_USimpleCollisionEditorTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Collision Editing tool for updating the simple collision geometry on meshes\n */" },
		{ "IncludePath", "Physics/SimpleCollisionEditorTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
		{ "ToolTip", "Simple Collision Editing tool for updating the simple collision geometry on meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SimpleCollisionEditorTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCollisionEditorTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleCollisionEditorTool_Statics::NewProp_ActionProperties = { "ActionProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCollisionEditorTool, ActionProperties), Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionProperties_MetaData), NewProp_ActionProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCollisionEditorTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCollisionEditorTool_Statics::NewProp_ActionProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCollisionEditorTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleCollisionEditorTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCollisionEditorTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USimpleCollisionEditorTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(USimpleCollisionEditorTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCollisionEditorTool_Statics::ClassParams = {
	&USimpleCollisionEditorTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleCollisionEditorTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCollisionEditorTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCollisionEditorTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCollisionEditorTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCollisionEditorTool()
{
	if (!Z_Registration_Info_UClass_USimpleCollisionEditorTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCollisionEditorTool.OuterSingleton, Z_Construct_UClass_USimpleCollisionEditorTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCollisionEditorTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USimpleCollisionEditorTool>()
{
	return USimpleCollisionEditorTool::StaticClass();
}
USimpleCollisionEditorTool::USimpleCollisionEditorTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCollisionEditorTool);
USimpleCollisionEditorTool::~USimpleCollisionEditorTool() {}
// End Class USimpleCollisionEditorTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESimpleCollisionEditorToolAction_StaticEnum, TEXT("ESimpleCollisionEditorToolAction"), &Z_Registration_Info_UEnum_ESimpleCollisionEditorToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1419789976U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCollisionEditorToolBuilder, USimpleCollisionEditorToolBuilder::StaticClass, TEXT("USimpleCollisionEditorToolBuilder"), &Z_Registration_Info_UClass_USimpleCollisionEditorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCollisionEditorToolBuilder), 743439902U) },
		{ Z_Construct_UClass_USimpleCollisionEditorToolActionProperties, USimpleCollisionEditorToolActionProperties::StaticClass, TEXT("USimpleCollisionEditorToolActionProperties"), &Z_Registration_Info_UClass_USimpleCollisionEditorToolActionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCollisionEditorToolActionProperties), 317676911U) },
		{ Z_Construct_UClass_USimpleCollisionEditorTool, USimpleCollisionEditorTool::StaticClass, TEXT("USimpleCollisionEditorTool"), &Z_Registration_Info_UClass_USimpleCollisionEditorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCollisionEditorTool), 1270743413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_2559910643(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
