// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionConversionNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionConversionNodes_generated_h
#error "GeometryCollectionConversionNodes.generated.h already included, missing '#pragma once' in GeometryCollectionConversionNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionConversionNodes_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FVectorToStringDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FFloatToStringDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FIntToStringDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FBoolToStringDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FIntToFloatDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FIntToDoubleDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FFloatToDoubleDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FFloatToIntDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FIntToBoolDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_295_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FBoolToIntDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h


#define FOREACH_ENUM_EFLOATTOINTFUNCTIONENUM(op) \
	op(EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Floor) \
	op(EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Ceil) \
	op(EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Round) \
	op(EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Truncate) \
	op(EFloatToIntFunctionEnum::Dataflow_Max) 

enum class EFloatToIntFunctionEnum : uint8;
template<> struct TIsUEnumClass<EFloatToIntFunctionEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EFloatToIntFunctionEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
