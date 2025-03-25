// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/ExposedValueHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExposedValueHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPostCopyOperation();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueCopyRecord();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EPostCopyOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPostCopyOperation;
static UEnum* EPostCopyOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPostCopyOperation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPostCopyOperation"));
	}
	return Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPostCopyOperation>()
{
	return EPostCopyOperation_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPostCopyOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LogicalNegateBool.Name", "EPostCopyOperation::LogicalNegateBool" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "None.Name", "EPostCopyOperation::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPostCopyOperation::None", (int64)EPostCopyOperation::None },
		{ "EPostCopyOperation::LogicalNegateBool", (int64)EPostCopyOperation::LogicalNegateBool },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPostCopyOperation",
	"EPostCopyOperation",
	Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPostCopyOperation()
{
	if (!Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton, Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton;
}
// End Enum EPostCopyOperation

// Begin ScriptStruct FExposedValueCopyRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord;
class UScriptStruct* FExposedValueCopyRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposedValueCopyRecord, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExposedValueCopyRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExposedValueCopyRecord>()
{
	return FExposedValueCopyRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostCopyOperation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyUpdateWhenActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CopyIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostCopyOperation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PostCopyOperation;
	static void NewProp_bOnlyUpdateWhenActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUpdateWhenActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposedValueCopyRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_CopyIndex = { "CopyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExposedValueCopyRecord, CopyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyIndex_MetaData), NewProp_CopyIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation = { "PostCopyOperation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExposedValueCopyRecord, PostCopyOperation), Z_Construct_UEnum_Engine_EPostCopyOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostCopyOperation_MetaData), NewProp_PostCopyOperation_MetaData) }; // 3678029445
void Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_bOnlyUpdateWhenActive_SetBit(void* Obj)
{
	((FExposedValueCopyRecord*)Obj)->bOnlyUpdateWhenActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_bOnlyUpdateWhenActive = { "bOnlyUpdateWhenActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FExposedValueCopyRecord), &Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_bOnlyUpdateWhenActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyUpdateWhenActive_MetaData), NewProp_bOnlyUpdateWhenActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_CopyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_bOnlyUpdateWhenActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ExposedValueCopyRecord",
	Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::PropPointers),
	sizeof(FExposedValueCopyRecord),
	alignof(FExposedValueCopyRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExposedValueCopyRecord()
{
	if (!Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.InnerSingleton, Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.InnerSingleton;
}
// End ScriptStruct FExposedValueCopyRecord

// Begin ScriptStruct FExposedValueHandler
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExposedValueHandler;
class UScriptStruct* FExposedValueHandler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExposedValueHandler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExposedValueHandler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposedValueHandler, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExposedValueHandler"));
	}
	return Z_Registration_Info_UScriptStruct_ExposedValueHandler.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExposedValueHandler>()
{
	return FExposedValueHandler::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExposedValueHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// An exposed value updater\n" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "ToolTip", "An exposed value updater" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposedValueHandler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExposedValueHandler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ExposedValueHandler",
	nullptr,
	0,
	sizeof(FExposedValueHandler),
	alignof(FExposedValueHandler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExposedValueHandler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler()
{
	if (!Z_Registration_Info_UScriptStruct_ExposedValueHandler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExposedValueHandler.InnerSingleton, Z_Construct_UScriptStruct_FExposedValueHandler_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExposedValueHandler.InnerSingleton;
}
// End ScriptStruct FExposedValueHandler

// Begin ScriptStruct FAnimNodeExposedValueHandler
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler;
class UScriptStruct* FAnimNodeExposedValueHandler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeExposedValueHandler"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeExposedValueHandler>()
{
	return FAnimNodeExposedValueHandler::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeExposedValueHandler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNodeExposedValueHandler",
	nullptr,
	0,
	sizeof(FAnimNodeExposedValueHandler),
	alignof(FAnimNodeExposedValueHandler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler.InnerSingleton;
}
// End ScriptStruct FAnimNodeExposedValueHandler

// Begin ScriptStruct FAnimNodeExposedValueHandler_Base
static_assert(std::is_polymorphic<FAnimNodeExposedValueHandler_Base>() == std::is_polymorphic<FAnimNodeExposedValueHandler>(), "USTRUCT FAnimNodeExposedValueHandler_Base cannot be polymorphic unless super FAnimNodeExposedValueHandler is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_Base;
class UScriptStruct* FAnimNodeExposedValueHandler_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeExposedValueHandler_Base"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_Base.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeExposedValueHandler_Base>()
{
	return FAnimNodeExposedValueHandler_Base::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Comment", "// function pointer if BoundFunction != NAME_None\n" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "ToolTip", "function pointer if BoundFunction != NAME_None" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundFunction_MetaData[] = {
		{ "Comment", "// The function to call to update associated properties (can be NAME_None)\n" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "ToolTip", "The function to call to update associated properties (can be NAME_None)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeExposedValueHandler_Base>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeExposedValueHandler_Base, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::NewProp_BoundFunction = { "BoundFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeExposedValueHandler_Base, BoundFunction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundFunction_MetaData), NewProp_BoundFunction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::NewProp_BoundFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler,
	&NewStructOps,
	"AnimNodeExposedValueHandler_Base",
	Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::PropPointers),
	sizeof(FAnimNodeExposedValueHandler_Base),
	alignof(FAnimNodeExposedValueHandler_Base),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_Base.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_Base.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_Base.InnerSingleton;
}
// End ScriptStruct FAnimNodeExposedValueHandler_Base

// Begin ScriptStruct FAnimNodeExposedValueHandler_PropertyAccess
static_assert(std::is_polymorphic<FAnimNodeExposedValueHandler_PropertyAccess>() == std::is_polymorphic<FAnimNodeExposedValueHandler_Base>(), "USTRUCT FAnimNodeExposedValueHandler_PropertyAccess cannot be polymorphic unless super FAnimNodeExposedValueHandler_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_PropertyAccess;
class UScriptStruct* FAnimNodeExposedValueHandler_PropertyAccess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_PropertyAccess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_PropertyAccess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeExposedValueHandler_PropertyAccess"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_PropertyAccess.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeExposedValueHandler_PropertyAccess>()
{
	return FAnimNodeExposedValueHandler_PropertyAccess::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyRecords_MetaData[] = {
		{ "Comment", "// Direct data access to property in anim instance\n" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "ToolTip", "Direct data access to property in anim instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CopyRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyRecords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeExposedValueHandler_PropertyAccess>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::NewProp_CopyRecords_Inner = { "CopyRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExposedValueCopyRecord, METADATA_PARAMS(0, nullptr) }; // 3559951952
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::NewProp_CopyRecords = { "CopyRecords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeExposedValueHandler_PropertyAccess, CopyRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyRecords_MetaData), NewProp_CopyRecords_MetaData) }; // 3559951952
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::NewProp_CopyRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::NewProp_CopyRecords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base,
	&NewStructOps,
	"AnimNodeExposedValueHandler_PropertyAccess",
	Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::PropPointers),
	sizeof(FAnimNodeExposedValueHandler_PropertyAccess),
	alignof(FAnimNodeExposedValueHandler_PropertyAccess),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_PropertyAccess.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_PropertyAccess.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_PropertyAccess.InnerSingleton;
}
// End ScriptStruct FAnimNodeExposedValueHandler_PropertyAccess

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPostCopyOperation_StaticEnum, TEXT("EPostCopyOperation"), &Z_Registration_Info_UEnum_EPostCopyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3678029445U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExposedValueCopyRecord::StaticStruct, Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewStructOps, TEXT("ExposedValueCopyRecord"), &Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExposedValueCopyRecord), 3559951952U) },
		{ FExposedValueHandler::StaticStruct, Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewStructOps, TEXT("ExposedValueHandler"), &Z_Registration_Info_UScriptStruct_ExposedValueHandler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExposedValueHandler), 592776064U) },
		{ FAnimNodeExposedValueHandler::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics::NewStructOps, TEXT("AnimNodeExposedValueHandler"), &Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeExposedValueHandler), 1527531310U) },
		{ FAnimNodeExposedValueHandler_Base::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::NewStructOps, TEXT("AnimNodeExposedValueHandler_Base"), &Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeExposedValueHandler_Base), 2237168127U) },
		{ FAnimNodeExposedValueHandler_PropertyAccess::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::NewStructOps, TEXT("AnimNodeExposedValueHandler_PropertyAccess"), &Z_Registration_Info_UScriptStruct_AnimNodeExposedValueHandler_PropertyAccess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeExposedValueHandler_PropertyAccess), 1627902810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_3093131667(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
