// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/DynamicEntryBoxBase.h"
#include "Runtime/UMG/Public/Blueprint/UserWidgetPool.h"
#include "Runtime/UMG/Public/Components/RadialBoxSettings.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicEntryBoxBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_EDynamicBoxType();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRadialBoxSettings();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Enum EDynamicBoxType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicBoxType;
static UEnum* EDynamicBoxType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDynamicBoxType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDynamicBoxType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EDynamicBoxType, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EDynamicBoxType"));
	}
	return Z_Registration_Info_UEnum_EDynamicBoxType.OuterSingleton;
}
template<> UMG_API UEnum* StaticEnum<EDynamicBoxType>()
{
	return EDynamicBoxType_StaticEnum();
}
struct Z_Construct_UEnum_UMG_EDynamicBoxType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Horizontal.Name", "EDynamicBoxType::Horizontal" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "Overlay.Name", "EDynamicBoxType::Overlay" },
		{ "Radial.Name", "EDynamicBoxType::Radial" },
		{ "Vertical.Name", "EDynamicBoxType::Vertical" },
		{ "VerticalWrap.Name", "EDynamicBoxType::VerticalWrap" },
		{ "Wrap.Name", "EDynamicBoxType::Wrap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDynamicBoxType::Horizontal", (int64)EDynamicBoxType::Horizontal },
		{ "EDynamicBoxType::Vertical", (int64)EDynamicBoxType::Vertical },
		{ "EDynamicBoxType::Wrap", (int64)EDynamicBoxType::Wrap },
		{ "EDynamicBoxType::VerticalWrap", (int64)EDynamicBoxType::VerticalWrap },
		{ "EDynamicBoxType::Radial", (int64)EDynamicBoxType::Radial },
		{ "EDynamicBoxType::Overlay", (int64)EDynamicBoxType::Overlay },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	"EDynamicBoxType",
	"EDynamicBoxType",
	Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UMG_EDynamicBoxType()
{
	if (!Z_Registration_Info_UEnum_EDynamicBoxType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicBoxType.InnerSingleton, Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDynamicBoxType.InnerSingleton;
}
// End Enum EDynamicBoxType

// Begin Class UDynamicEntryBoxBase Function GetAllEntries
struct Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics
{
	struct DynamicEntryBoxBase_eventGetAllEntries_Parms
	{
		TArray<UUserWidget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicEntryBoxBase_eventGetAllEntries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "GetAllEntries", nullptr, nullptr, Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::DynamicEntryBoxBase_eventGetAllEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::DynamicEntryBoxBase_eventGetAllEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicEntryBoxBase::execGetAllEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UUserWidget*>*)Z_Param__Result=P_THIS->GetAllEntries();
	P_NATIVE_END;
}
// End Class UDynamicEntryBoxBase Function GetAllEntries

// Begin Class UDynamicEntryBoxBase Function GetNumEntries
struct Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics
{
	struct DynamicEntryBoxBase_eventGetNumEntries_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicEntryBoxBase_eventGetNumEntries_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "GetNumEntries", nullptr, nullptr, Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::DynamicEntryBoxBase_eventGetNumEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::DynamicEntryBoxBase_eventGetNumEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicEntryBoxBase::execGetNumEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumEntries();
	P_NATIVE_END;
}
// End Class UDynamicEntryBoxBase Function GetNumEntries

// Begin Class UDynamicEntryBoxBase Function SetEntrySpacing
struct Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics
{
	struct DynamicEntryBoxBase_eventSetEntrySpacing_Parms
	{
		FVector2D InEntrySpacing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEntrySpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InEntrySpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing = { "InEntrySpacing", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicEntryBoxBase_eventSetEntrySpacing_Parms, InEntrySpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEntrySpacing_MetaData), NewProp_InEntrySpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "SetEntrySpacing", nullptr, nullptr, Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::DynamicEntryBoxBase_eventSetEntrySpacing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::DynamicEntryBoxBase_eventSetEntrySpacing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicEntryBoxBase::execSetEntrySpacing)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InEntrySpacing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEntrySpacing(Z_Param_Out_InEntrySpacing);
	P_NATIVE_END;
}
// End Class UDynamicEntryBoxBase Function SetEntrySpacing

// Begin Class UDynamicEntryBoxBase Function SetRadialSettings
struct Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics
{
	struct DynamicEntryBoxBase_eventSetRadialSettings_Parms
	{
		FRadialBoxSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicEntryBoxBase_eventSetRadialSettings_Parms, InSettings), Z_Construct_UScriptStruct_FRadialBoxSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 3197049818
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "SetRadialSettings", nullptr, nullptr, Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::DynamicEntryBoxBase_eventSetRadialSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::DynamicEntryBoxBase_eventSetRadialSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicEntryBoxBase::execSetRadialSettings)
{
	P_GET_STRUCT_REF(FRadialBoxSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRadialSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class UDynamicEntryBoxBase Function SetRadialSettings

// Begin Class UDynamicEntryBoxBase
void UDynamicEntryBoxBase::GetEntrySpacing_WrapperImpl(const void* Object, void* OutValue)
{
	const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
	FVector2D& Result = *(FVector2D*)OutValue;
	Result = (FVector2D)Obj->GetEntrySpacing();
}
void UDynamicEntryBoxBase::SetEntrySpacing_WrapperImpl(void* Object, const void* InValue)
{
	UDynamicEntryBoxBase* Obj = (UDynamicEntryBoxBase*)Object;
	FVector2D& Value = *(FVector2D*)InValue;
	Obj->SetEntrySpacing(Value);
}
void UDynamicEntryBoxBase::GetEntryBoxType_WrapperImpl(const void* Object, void* OutValue)
{
	const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
	EDynamicBoxType& Result = *(EDynamicBoxType*)OutValue;
	Result = (EDynamicBoxType)Obj->GetBoxType();
}
void UDynamicEntryBoxBase::GetEntrySizeRule_WrapperImpl(const void* Object, void* OutValue)
{
	const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
	FSlateChildSize& Result = *(FSlateChildSize*)OutValue;
	Result = (FSlateChildSize)Obj->GetEntrySizeRule();
}
void UDynamicEntryBoxBase::GetEntryHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue)
{
	const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetEntryHorizontalAlignment();
}
void UDynamicEntryBoxBase::GetEntryVerticalAlignment_WrapperImpl(const void* Object, void* OutValue)
{
	const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetEntryVerticalAlignment();
}
void UDynamicEntryBoxBase::GetMaxElementSize_WrapperImpl(const void* Object, void* OutValue)
{
	const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetMaxElementSize();
}
void UDynamicEntryBoxBase::GetRadialBoxSettings_WrapperImpl(const void* Object, void* OutValue)
{
	const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
	FRadialBoxSettings& Result = *(FRadialBoxSettings*)OutValue;
	Result = (FRadialBoxSettings)Obj->GetRadialBoxSettings();
}
void UDynamicEntryBoxBase::SetRadialBoxSettings_WrapperImpl(void* Object, const void* InValue)
{
	UDynamicEntryBoxBase* Obj = (UDynamicEntryBoxBase*)Object;
	FRadialBoxSettings& Value = *(FRadialBoxSettings*)InValue;
	Obj->SetRadialSettings(Value);
}
void UDynamicEntryBoxBase::StaticRegisterNativesUDynamicEntryBoxBase()
{
	UClass* Class = UDynamicEntryBoxBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllEntries", &UDynamicEntryBoxBase::execGetAllEntries },
		{ "GetNumEntries", &UDynamicEntryBoxBase::execGetNumEntries },
		{ "SetEntrySpacing", &UDynamicEntryBoxBase::execSetEntrySpacing },
		{ "SetRadialSettings", &UDynamicEntryBoxBase::execSetRadialSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicEntryBoxBase);
UClass* Z_Construct_UClass_UDynamicEntryBoxBase_NoRegister()
{
	return UDynamicEntryBoxBase::StaticClass();
}
struct Z_Construct_UClass_UDynamicEntryBoxBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for widgets that support a dynamic number of auto-generated entries at both design- and run-time.\n * Contains all functionality needed to create, construct, and cache an arbitrary number of entry widgets, but exposes no means of entry creation or removal\n * It's up to child classes to decide how they want to perform the population (some may do so entirely on their own without exposing a thing)\n *\n * @see UDynamicEntryBox for a ready-to-use version\n */" },
		{ "IncludePath", "Components/DynamicEntryBoxBase.h" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base for widgets that support a dynamic number of auto-generated entries at both design- and run-time.\nContains all functionality needed to create, construct, and cache an arbitrary number of entry widgets, but exposes no means of entry creation or removal\nIt's up to child classes to decide how they want to perform the population (some may do so entirely on their own without exposing a thing)\n\n@see UDynamicEntryBox for a ready-to-use version" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntrySpacing_MetaData[] = {
		{ "BlueprintSetter", "SetEntrySpacing" },
		{ "Category", "EntryLayout" },
		{ "Comment", "/**\n\x09 * The padding to apply between entries in the box.\n\x09 * Note horizontal boxes only use the X and vertical boxes only use Y. Value is also ignored for the first entry in the box.\n\x09 * Wrap and Overlay types use both X and Y for spacing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The padding to apply between entries in the box.\nNote horizontal boxes only use the X and vertical boxes only use Y. Value is also ignored for the first entry in the box.\nWrap and Overlay types use both X and Y for spacing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingPattern_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** The looping sequence of entry paddings to apply as entries are created. Overlay boxes only. Ignores EntrySpacing if not empty. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The looping sequence of entry paddings to apply as entries are created. Overlay boxes only. Ignores EntrySpacing if not empty." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryBoxType_MetaData[] = {
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** The type of box panel into which created entries are added. Some differences in functionality exist between each type. */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The type of box panel into which created entries are added. Some differences in functionality exist between each type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntrySizeRule_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Sizing rule to apply to generated entries. Horizontal/Vertical boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Sizing rule to apply to generated entries. Horizontal/Vertical boxes only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryHorizontalAlignment_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Horizontal alignment of generated entries. Horizontal/Vertical/Wrap boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Horizontal alignment of generated entries. Horizontal/Vertical/Wrap boxes only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryVerticalAlignment_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Vertical alignment of generated entries. Horizontal/Vertical/Wrap boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Vertical alignment of generated entries. Horizontal/Vertical/Wrap boxes only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxElementSize_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** The maximum size of each entry in the dominant axis of the box. Vertical/Horizontal boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The maximum size of each entry in the dominant axis of the box. Vertical/Horizontal boxes only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialBoxSettings_MetaData[] = {
		{ "BlueprintSetter", "SetRadialSettings" },
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Settings only relevant to RadialBox */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Settings only relevant to RadialBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntrySpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpacingPattern_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpacingPattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EntryBoxType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EntryBoxType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntrySizeRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EntryHorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EntryVerticalAlignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxElementSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadialBoxSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryWidgetPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries, "GetAllEntries" }, // 493009319
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries, "GetNumEntries" }, // 989462660
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing, "SetEntrySpacing" }, // 1388400026
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings, "SetRadialSettings" }, // 867181864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicEntryBoxBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing = { "EntrySpacing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UDynamicEntryBoxBase::SetEntrySpacing_WrapperImpl, &UDynamicEntryBoxBase::GetEntrySpacing_WrapperImpl, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntrySpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntrySpacing_MetaData), NewProp_EntrySpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_Inner = { "SpacingPattern", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern = { "SpacingPattern", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, SpacingPattern), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingPattern_MetaData), NewProp_SpacingPattern_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType = { "EntryBoxType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UDynamicEntryBoxBase::GetEntryBoxType_WrapperImpl, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryBoxType), Z_Construct_UEnum_UMG_EDynamicBoxType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryBoxType_MetaData), NewProp_EntryBoxType_MetaData) }; // 4083902173
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule = { "EntrySizeRule", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UDynamicEntryBoxBase::GetEntrySizeRule_WrapperImpl, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntrySizeRule), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntrySizeRule_MetaData), NewProp_EntrySizeRule_MetaData) }; // 1279028364
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment = { "EntryHorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UDynamicEntryBoxBase::GetEntryHorizontalAlignment_WrapperImpl, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryHorizontalAlignment_MetaData), NewProp_EntryHorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment = { "EntryVerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UDynamicEntryBoxBase::GetEntryVerticalAlignment_WrapperImpl, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryVerticalAlignment_MetaData), NewProp_EntryVerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize = { "MaxElementSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UDynamicEntryBoxBase::GetMaxElementSize_WrapperImpl, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, MaxElementSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxElementSize_MetaData), NewProp_MaxElementSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_RadialBoxSettings = { "RadialBoxSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UDynamicEntryBoxBase::SetRadialBoxSettings_WrapperImpl, &UDynamicEntryBoxBase::GetRadialBoxSettings_WrapperImpl, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, RadialBoxSettings), Z_Construct_UScriptStruct_FRadialBoxSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialBoxSettings_MetaData), NewProp_RadialBoxSettings_MetaData) }; // 3197049818
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool = { "EntryWidgetPool", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryWidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidgetPool_MetaData), NewProp_EntryWidgetPool_MetaData) }; // 871085244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_RadialBoxSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDynamicEntryBoxBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::ClassParams = {
	&UDynamicEntryBoxBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers),
	0,
	0x00A800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicEntryBoxBase()
{
	if (!Z_Registration_Info_UClass_UDynamicEntryBoxBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicEntryBoxBase.OuterSingleton, Z_Construct_UClass_UDynamicEntryBoxBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicEntryBoxBase.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UDynamicEntryBoxBase>()
{
	return UDynamicEntryBoxBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicEntryBoxBase);
UDynamicEntryBoxBase::~UDynamicEntryBoxBase() {}
// End Class UDynamicEntryBoxBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDynamicBoxType_StaticEnum, TEXT("EDynamicBoxType"), &Z_Registration_Info_UEnum_EDynamicBoxType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4083902173U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicEntryBoxBase, UDynamicEntryBoxBase::StaticClass, TEXT("UDynamicEntryBoxBase"), &Z_Registration_Info_UClass_UDynamicEntryBoxBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicEntryBoxBase), 310326912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_2313851800(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
