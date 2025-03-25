// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MirrorDataTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MirrorDataTable_generated_h
#error "MirrorDataTable.generated.h already included, missing '#pragma once' in MirrorDataTable.h"
#endif
#define ENGINE_MirrorDataTable_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMirrorTableRow_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMirrorTableRow>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMirrorFindReplaceExpression>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMirrorDataTable(); \
	friend struct Z_Construct_UClass_UMirrorDataTable_Statics; \
public: \
	DECLARE_CLASS(UMirrorDataTable, UDataTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMirrorDataTable)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMirrorDataTable(UMirrorDataTable&&); \
	UMirrorDataTable(const UMirrorDataTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMirrorDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMirrorDataTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMirrorDataTable) \
	ENGINE_API virtual ~UMirrorDataTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_100_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMirrorDataTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h


#define FOREACH_ENUM_EMIRRORROWTYPE(op) \
	op(EMirrorRowType::Bone) \
	op(EMirrorRowType::AnimationNotify) \
	op(EMirrorRowType::Curve) \
	op(EMirrorRowType::SyncMarker) \
	op(EMirrorRowType::Custom) 

namespace EMirrorRowType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMirrorRowType::Type>();

#define FOREACH_ENUM_EMIRRORFINDREPLACEMETHOD(op) \
	op(EMirrorFindReplaceMethod::Prefix) \
	op(EMirrorFindReplaceMethod::Suffix) \
	op(EMirrorFindReplaceMethod::RegularExpression) 

namespace EMirrorFindReplaceMethod { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMirrorFindReplaceMethod::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
