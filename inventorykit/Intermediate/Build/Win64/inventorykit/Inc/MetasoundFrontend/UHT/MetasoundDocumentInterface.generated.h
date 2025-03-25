// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundDocumentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METASOUNDFRONTEND_MetasoundDocumentInterface_generated_h
#error "MetasoundDocumentInterface.generated.h already included, missing '#pragma once' in MetasoundDocumentInterface.h"
#endif
#define METASOUNDFRONTEND_MetasoundDocumentInterface_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundDocumentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundDocumentInterface(UMetaSoundDocumentInterface&&); \
	UMetaSoundDocumentInterface(const UMetaSoundDocumentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundDocumentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundDocumentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundDocumentInterface) \
	NO_API virtual ~UMetaSoundDocumentInterface();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaSoundDocumentInterface(); \
	friend struct Z_Construct_UClass_UMetaSoundDocumentInterface_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundDocumentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MetasoundFrontend"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundDocumentInterface)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaSoundDocumentInterface() {} \
public: \
	typedef UMetaSoundDocumentInterface UClassType; \
	typedef IMetaSoundDocumentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDFRONTEND_API UClass* StaticClass<class UMetaSoundDocumentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
