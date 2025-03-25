// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metasound.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METASOUNDENGINE_Metasound_generated_h
#error "Metasound.generated.h already included, missing '#pragma once' in Metasound.h"
#endif
#define METASOUNDENGINE_Metasound_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphBase(); \
	friend struct Z_Construct_UClass_UMetasoundEditorGraphBase_Statics; \
public: \
	DECLARE_CLASS(UMetasoundEditorGraphBase, UEdGraph, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphBase)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetasoundEditorGraphBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphBase(UMetasoundEditorGraphBase&&); \
	UMetasoundEditorGraphBase(const UMetasoundEditorGraphBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetasoundEditorGraphBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphBase) \
	NO_API virtual ~UMetasoundEditorGraphBase();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetasoundEditorGraphBase>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_59_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaSoundPatch, NO_API)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundPatch(); \
	friend struct Z_Construct_UClass_UMetaSoundPatch_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundPatch, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundPatch) \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_59_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMetaSoundPatch*>(this); }


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundPatch(UMetaSoundPatch&&); \
	UMetaSoundPatch(const UMetaSoundPatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundPatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundPatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundPatch) \
	NO_API virtual ~UMetaSoundPatch();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundPatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
