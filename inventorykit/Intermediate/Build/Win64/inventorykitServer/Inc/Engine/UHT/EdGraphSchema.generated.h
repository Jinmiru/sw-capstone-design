// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphSchema_generated_h
#error "EdGraphSchema.generated.h already included, missing '#pragma once' in EdGraphSchema.h"
#endif
#define ENGINE_EdGraphSchema_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphSchemaAction>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphSchemaAction_NewNode>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_689_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema(); \
	friend struct Z_Construct_UClass_UEdGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UEdGraphSchema, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraphSchema)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_689_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEdGraphSchema(UEdGraphSchema&&); \
	UEdGraphSchema(const UEdGraphSchema&); \
public: \
	ENGINE_API virtual ~UEdGraphSchema();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_686_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_689_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_689_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_689_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h


#define FOREACH_ENUM_EGRAPHTYPE(op) \
	op(GT_Function) \
	op(GT_Ubergraph) \
	op(GT_Macro) \
	op(GT_Animation) \
	op(GT_StateMachine) 

enum EGraphType : int;
template<> ENGINE_API UEnum* StaticEnum<EGraphType>();

#define FOREACH_ENUM_ECANCREATECONNECTIONRESPONSE(op) \
	op(CONNECT_RESPONSE_MAKE) \
	op(CONNECT_RESPONSE_DISALLOW) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_A) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_B) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_AB) \
	op(CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE) \
	op(CONNECT_RESPONSE_MAKE_WITH_PROMOTION) 

enum ECanCreateConnectionResponse : int;
template<> ENGINE_API UEnum* StaticEnum<ECanCreateConnectionResponse>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
