// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Tests/Elements/Framework/TypedElementTestColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementTestColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnA();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnB();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnC();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnD();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnE();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnF();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnG();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnA();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnB();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnC();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnD();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTestColumnA
static_assert(std::is_polymorphic<FTestColumnA>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTestColumnA cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnA;
class UScriptStruct* FTestColumnA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnA, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnA"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnA.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnA>()
{
	return FTestColumnA::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnA" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TestColumnA",
	nullptr,
	0,
	sizeof(FTestColumnA),
	alignof(FTestColumnA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnA()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnA.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnA.InnerSingleton;
}
// End ScriptStruct FTestColumnA

// Begin ScriptStruct FTestColumnB
static_assert(std::is_polymorphic<FTestColumnB>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTestColumnB cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnB;
class UScriptStruct* FTestColumnB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnB, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnB"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnB.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnB>()
{
	return FTestColumnB::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnB" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnB>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnB_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TestColumnB",
	nullptr,
	0,
	sizeof(FTestColumnB),
	alignof(FTestColumnB),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnB_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnB()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnB.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnB_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnB.InnerSingleton;
}
// End ScriptStruct FTestColumnB

// Begin ScriptStruct FTestColumnC
static_assert(std::is_polymorphic<FTestColumnC>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTestColumnC cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnC;
class UScriptStruct* FTestColumnC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnC, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnC"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnC.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnC>()
{
	return FTestColumnC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnC" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TestColumnC",
	nullptr,
	0,
	sizeof(FTestColumnC),
	alignof(FTestColumnC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnC()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnC.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnC.InnerSingleton;
}
// End ScriptStruct FTestColumnC

// Begin ScriptStruct FTestColumnD
static_assert(std::is_polymorphic<FTestColumnD>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTestColumnD cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnD;
class UScriptStruct* FTestColumnD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnD, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnD"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnD.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnD>()
{
	return FTestColumnD::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnD" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnD>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnD_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TestColumnD",
	nullptr,
	0,
	sizeof(FTestColumnD),
	alignof(FTestColumnD),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnD_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnD_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnD()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnD.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnD.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnD_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnD.InnerSingleton;
}
// End ScriptStruct FTestColumnD

// Begin ScriptStruct FTestColumnE
static_assert(std::is_polymorphic<FTestColumnE>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTestColumnE cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnE;
class UScriptStruct* FTestColumnE::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnE.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnE.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnE, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnE"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnE.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnE>()
{
	return FTestColumnE::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnE" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnE>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnE_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TestColumnE",
	nullptr,
	0,
	sizeof(FTestColumnE),
	alignof(FTestColumnE),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnE_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnE_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnE()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnE.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnE.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnE_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnE.InnerSingleton;
}
// End ScriptStruct FTestColumnE

// Begin ScriptStruct FTestColumnF
static_assert(std::is_polymorphic<FTestColumnF>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTestColumnF cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnF;
class UScriptStruct* FTestColumnF::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnF.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnF.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnF, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnF"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnF.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnF>()
{
	return FTestColumnF::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnF" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnF>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnF_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TestColumnF",
	nullptr,
	0,
	sizeof(FTestColumnF),
	alignof(FTestColumnF),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnF_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnF_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnF()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnF.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnF.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnF_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnF.InnerSingleton;
}
// End ScriptStruct FTestColumnF

// Begin ScriptStruct FTestColumnG
static_assert(std::is_polymorphic<FTestColumnG>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTestColumnG cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnG;
class UScriptStruct* FTestColumnG::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnG.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnG.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnG, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnG"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnG.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnG>()
{
	return FTestColumnG::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnG" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnG>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnG_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TestColumnG",
	nullptr,
	0,
	sizeof(FTestColumnG),
	alignof(FTestColumnG),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnG_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnG_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnG()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnG.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnG.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnG_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnG.InnerSingleton;
}
// End ScriptStruct FTestColumnG

// Begin ScriptStruct FTestTagColumnA
static_assert(std::is_polymorphic<FTestTagColumnA>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTestTagColumnA cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTagColumnA;
class UScriptStruct* FTestTagColumnA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTagColumnA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTagColumnA, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestTagColumnA"));
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnA.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestTagColumnA>()
{
	return FTestTagColumnA::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestTagColumnA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TagA" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTagColumnA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTagColumnA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"TestTagColumnA",
	nullptr,
	0,
	sizeof(FTestTagColumnA),
	alignof(FTestTagColumnA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTagColumnA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTagColumnA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnA()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTagColumnA.InnerSingleton, Z_Construct_UScriptStruct_FTestTagColumnA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnA.InnerSingleton;
}
// End ScriptStruct FTestTagColumnA

// Begin ScriptStruct FTestTagColumnB
static_assert(std::is_polymorphic<FTestTagColumnB>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTestTagColumnB cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTagColumnB;
class UScriptStruct* FTestTagColumnB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTagColumnB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTagColumnB, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestTagColumnB"));
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnB.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestTagColumnB>()
{
	return FTestTagColumnB::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestTagColumnB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TagB" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTagColumnB>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTagColumnB_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"TestTagColumnB",
	nullptr,
	0,
	sizeof(FTestTagColumnB),
	alignof(FTestTagColumnB),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTagColumnB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTagColumnB_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnB()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTagColumnB.InnerSingleton, Z_Construct_UScriptStruct_FTestTagColumnB_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnB.InnerSingleton;
}
// End ScriptStruct FTestTagColumnB

// Begin ScriptStruct FTestTagColumnC
static_assert(std::is_polymorphic<FTestTagColumnC>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTestTagColumnC cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTagColumnC;
class UScriptStruct* FTestTagColumnC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTagColumnC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTagColumnC, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestTagColumnC"));
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnC.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestTagColumnC>()
{
	return FTestTagColumnC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestTagColumnC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TagC" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTagColumnC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTagColumnC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"TestTagColumnC",
	nullptr,
	0,
	sizeof(FTestTagColumnC),
	alignof(FTestTagColumnC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTagColumnC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTagColumnC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnC()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTagColumnC.InnerSingleton, Z_Construct_UScriptStruct_FTestTagColumnC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnC.InnerSingleton;
}
// End ScriptStruct FTestTagColumnC

// Begin ScriptStruct FTestTagColumnD
static_assert(std::is_polymorphic<FTestTagColumnD>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTestTagColumnD cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTagColumnD;
class UScriptStruct* FTestTagColumnD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTagColumnD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTagColumnD, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestTagColumnD"));
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnD.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestTagColumnD>()
{
	return FTestTagColumnD::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestTagColumnD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TagD" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTagColumnD>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTagColumnD_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"TestTagColumnD",
	nullptr,
	0,
	sizeof(FTestTagColumnD),
	alignof(FTestTagColumnD),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTagColumnD_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTagColumnD_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnD()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnD.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTagColumnD.InnerSingleton, Z_Construct_UScriptStruct_FTestTagColumnD_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnD.InnerSingleton;
}
// End ScriptStruct FTestTagColumnD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTestColumnA::StaticStruct, Z_Construct_UScriptStruct_FTestColumnA_Statics::NewStructOps, TEXT("TestColumnA"), &Z_Registration_Info_UScriptStruct_TestColumnA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnA), 1734940762U) },
		{ FTestColumnB::StaticStruct, Z_Construct_UScriptStruct_FTestColumnB_Statics::NewStructOps, TEXT("TestColumnB"), &Z_Registration_Info_UScriptStruct_TestColumnB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnB), 10056348U) },
		{ FTestColumnC::StaticStruct, Z_Construct_UScriptStruct_FTestColumnC_Statics::NewStructOps, TEXT("TestColumnC"), &Z_Registration_Info_UScriptStruct_TestColumnC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnC), 3429453171U) },
		{ FTestColumnD::StaticStruct, Z_Construct_UScriptStruct_FTestColumnD_Statics::NewStructOps, TEXT("TestColumnD"), &Z_Registration_Info_UScriptStruct_TestColumnD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnD), 1149942687U) },
		{ FTestColumnE::StaticStruct, Z_Construct_UScriptStruct_FTestColumnE_Statics::NewStructOps, TEXT("TestColumnE"), &Z_Registration_Info_UScriptStruct_TestColumnE, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnE), 2996734246U) },
		{ FTestColumnF::StaticStruct, Z_Construct_UScriptStruct_FTestColumnF_Statics::NewStructOps, TEXT("TestColumnF"), &Z_Registration_Info_UScriptStruct_TestColumnF, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnF), 527919548U) },
		{ FTestColumnG::StaticStruct, Z_Construct_UScriptStruct_FTestColumnG_Statics::NewStructOps, TEXT("TestColumnG"), &Z_Registration_Info_UScriptStruct_TestColumnG, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnG), 3793165959U) },
		{ FTestTagColumnA::StaticStruct, Z_Construct_UScriptStruct_FTestTagColumnA_Statics::NewStructOps, TEXT("TestTagColumnA"), &Z_Registration_Info_UScriptStruct_TestTagColumnA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTagColumnA), 597264644U) },
		{ FTestTagColumnB::StaticStruct, Z_Construct_UScriptStruct_FTestTagColumnB_Statics::NewStructOps, TEXT("TestTagColumnB"), &Z_Registration_Info_UScriptStruct_TestTagColumnB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTagColumnB), 1915022095U) },
		{ FTestTagColumnC::StaticStruct, Z_Construct_UScriptStruct_FTestTagColumnC_Statics::NewStructOps, TEXT("TestTagColumnC"), &Z_Registration_Info_UScriptStruct_TestTagColumnC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTagColumnC), 2548005915U) },
		{ FTestTagColumnD::StaticStruct, Z_Construct_UScriptStruct_FTestTagColumnD_Statics::NewStructOps, TEXT("TestTagColumnD"), &Z_Registration_Info_UScriptStruct_TestTagColumnD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTagColumnD), 1275470714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h_3307216687(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
