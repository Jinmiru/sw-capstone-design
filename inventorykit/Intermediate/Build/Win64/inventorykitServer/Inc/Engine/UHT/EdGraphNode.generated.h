// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphNode_generated_h
#error "EdGraphNode.generated.h already included, missing '#pragma once' in EdGraphNode.h"
#endif
#define ENGINE_EdGraphNode_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphTerminalType>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphNodeContextMenuContext(); \
	friend struct Z_Construct_UClass_UGraphNodeContextMenuContext_Statics; \
public: \
	DECLARE_CLASS(UGraphNodeContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UGraphNodeContextMenuContext)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGraphNodeContextMenuContext(UGraphNodeContextMenuContext&&); \
	UGraphNodeContextMenuContext(const UGraphNodeContextMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGraphNodeContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphNodeContextMenuContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraphNodeContextMenuContext) \
	ENGINE_API virtual ~UGraphNodeContextMenuContext();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_211_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGraphNodeContextMenuContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_288_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEdGraphNode, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_288_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraphNode) \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_288_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_288_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEdGraphNode(UEdGraphNode&&); \
	UEdGraphNode(const UEdGraphNode&); \
public: \
	ENGINE_API virtual ~UEdGraphNode();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_285_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_288_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_288_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_288_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h


#define FOREACH_ENUM_EEDGRAPHPINDIRECTION(op) \
	op(EGPD_Input) \
	op(EGPD_Output) 

enum EEdGraphPinDirection : int;
template<> ENGINE_API UEnum* StaticEnum<EEdGraphPinDirection>();

#define FOREACH_ENUM_EPINCONTAINERTYPE(op) \
	op(EPinContainerType::None) \
	op(EPinContainerType::Array) \
	op(EPinContainerType::Set) \
	op(EPinContainerType::Map) 

enum class EPinContainerType : uint8;
template<> struct TIsUEnumClass<EPinContainerType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPinContainerType>();

#define FOREACH_ENUM_ENODETITLETYPE(op) \
	op(ENodeTitleType::FullTitle) \
	op(ENodeTitleType::ListView) \
	op(ENodeTitleType::EditableTitle) \
	op(ENodeTitleType::MenuTitle) \
	op(ENodeTitleType::MAX_TitleTypes) 

namespace ENodeTitleType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENodeTitleType::Type>();

#define FOREACH_ENUM_ENODEADVANCEDPINS(op) \
	op(ENodeAdvancedPins::NoPins) \
	op(ENodeAdvancedPins::Shown) \
	op(ENodeAdvancedPins::Hidden) 

namespace ENodeAdvancedPins { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENodeAdvancedPins::Type>();

#define FOREACH_ENUM_ENODEENABLEDSTATE(op) \
	op(ENodeEnabledState::Enabled) \
	op(ENodeEnabledState::Disabled) \
	op(ENodeEnabledState::DevelopmentOnly) 

enum class ENodeEnabledState : uint8;
template<> struct TIsUEnumClass<ENodeEnabledState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENodeEnabledState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
