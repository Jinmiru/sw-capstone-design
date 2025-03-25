// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetNavigation() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetNavigation();
UMG_API UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetNavigationData();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FCustomWidgetNavigationDelegate
struct Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics
{
	struct _Script_UMG_eventCustomWidgetNavigationDelegate_Parms
	{
		EUINavigation Navigation;
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Navigation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Navigation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation = { "Navigation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventCustomWidgetNavigationDelegate_Parms, Navigation), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 2993106650
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventCustomWidgetNavigationDelegate_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "CustomWidgetNavigationDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::_Script_UMG_eventCustomWidgetNavigationDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::_Script_UMG_eventCustomWidgetNavigationDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
UWidget* FCustomWidgetNavigationDelegate_DelegateWrapper(const FScriptDelegate& CustomWidgetNavigationDelegate, EUINavigation Navigation)
{
	struct _Script_UMG_eventCustomWidgetNavigationDelegate_Parms
	{
		EUINavigation Navigation;
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_UMG_eventCustomWidgetNavigationDelegate_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	_Script_UMG_eventCustomWidgetNavigationDelegate_Parms Parms;
	Parms.Navigation=Navigation;
	CustomWidgetNavigationDelegate.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FCustomWidgetNavigationDelegate

// Begin ScriptStruct FWidgetNavigationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetNavigationData;
class UScriptStruct* FWidgetNavigationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetNavigationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetNavigationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetNavigationData, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetNavigationData"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetNavigationData.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetNavigationData>()
{
	return FWidgetNavigationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetNavigationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rule_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToFocus_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** This either the widget to focus, OR the name of the function to call. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "This either the widget to focus, OR the name of the function to call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rule;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetToFocus;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_CustomDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetNavigationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetNavigationData, Rule), Z_Construct_UEnum_SlateCore_EUINavigationRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rule_MetaData), NewProp_Rule_MetaData) }; // 3695984133
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus = { "WidgetToFocus", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetNavigationData, WidgetToFocus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetToFocus_MetaData), NewProp_WidgetToFocus_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetNavigationData, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate = { "CustomDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetNavigationData, CustomDelegate), Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDelegate_MetaData), NewProp_CustomDelegate_MetaData) }; // 481314445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"WidgetNavigationData",
	Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers),
	sizeof(FWidgetNavigationData),
	alignof(FWidgetNavigationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetNavigationData()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetNavigationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetNavigationData.InnerSingleton, Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetNavigationData.InnerSingleton;
}
// End ScriptStruct FWidgetNavigationData

// Begin Class UWidgetNavigation
void UWidgetNavigation::StaticRegisterNativesUWidgetNavigation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetNavigation);
UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister()
{
	return UWidgetNavigation::StaticClass();
}
struct Z_Construct_UClass_UWidgetNavigation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprint/WidgetNavigation.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses up arrow, joystick, d-pad. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses up arrow, joystick, d-pad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses down arrow, joystick, d-pad. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses down arrow, joystick, d-pad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses left arrow, joystick, d-pad. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses left arrow, joystick, d-pad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses right arrow, joystick, d-pad. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses right arrow, joystick, d-pad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses Tab. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses Tab." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses Shift+Tab. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses Shift+Tab." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Down;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Next;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Previous;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetNavigation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetNavigation, Up), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Up_MetaData), NewProp_Up_MetaData) }; // 1352833054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down = { "Down", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetNavigation, Down), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Down_MetaData), NewProp_Down_MetaData) }; // 1352833054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetNavigation, Left), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) }; // 1352833054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetNavigation, Right), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) }; // 1352833054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetNavigation, Next), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Next_MetaData), NewProp_Next_MetaData) }; // 1352833054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous = { "Previous", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetNavigation, Previous), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Previous_MetaData), NewProp_Previous_MetaData) }; // 1352833054
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetNavigation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetNavigation_Statics::ClassParams = {
	&UWidgetNavigation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetNavigation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetNavigation()
{
	if (!Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton, Z_Construct_UClass_UWidgetNavigation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetNavigation>()
{
	return UWidgetNavigation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetNavigation);
UWidgetNavigation::~UWidgetNavigation() {}
// End Class UWidgetNavigation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetNavigationData::StaticStruct, Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewStructOps, TEXT("WidgetNavigationData"), &Z_Registration_Info_UScriptStruct_WidgetNavigationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetNavigationData), 1352833054U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetNavigation, UWidgetNavigation::StaticClass, TEXT("UWidgetNavigation"), &Z_Registration_Info_UClass_UWidgetNavigation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetNavigation), 272333824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_2853484889(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
