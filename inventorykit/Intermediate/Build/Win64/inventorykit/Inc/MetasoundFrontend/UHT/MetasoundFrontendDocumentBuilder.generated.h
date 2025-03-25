// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundFrontendDocumentBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METASOUNDFRONTEND_MetasoundFrontendDocumentBuilder_generated_h
#error "MetasoundFrontendDocumentBuilder.generated.h already included, missing '#pragma once' in MetasoundFrontendDocumentBuilder.h"
#endif
#define METASOUNDFRONTEND_MetasoundFrontendDocumentBuilder_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundBuilderDocument(); \
	friend struct Z_Construct_UClass_UMetaSoundBuilderDocument_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundBuilderDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundFrontend"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundBuilderDocument) \
	virtual UObject* _getUObject() const override { return const_cast<UMetaSoundBuilderDocument*>(this); }


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundBuilderDocument(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundBuilderDocument(UMetaSoundBuilderDocument&&); \
	UMetaSoundBuilderDocument(const UMetaSoundBuilderDocument&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundBuilderDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundBuilderDocument); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundBuilderDocument) \
	NO_API virtual ~UMetaSoundBuilderDocument();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_92_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDFRONTEND_API UClass* StaticClass<class UMetaSoundBuilderDocument>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<struct FMetaSoundFrontendDocumentBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
