// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/GLTFExporter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGLTFExportOptions;
class UObject;
struct FGLTFExportMessages;
#ifdef GLTFEXPORTER_GLTFExporter_generated_h
#error "GLTFExporter.generated.h already included, missing '#pragma once' in GLTFExporter.h"
#endif
#define GLTFEXPORTER_GLTFExporter_generated_h

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLTFExportMessages_Statics; \
	GLTFEXPORTER_API static class UScriptStruct* StaticStruct();


template<> GLTFEXPORTER_API UScriptStruct* StaticStruct<struct FGLTFExportMessages>();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportToGLTF);


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLTFExporter(); \
	friend struct Z_Construct_UClass_UGLTFExporter_Statics; \
public: \
	DECLARE_CLASS(UGLTFExporter, UExporter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GLTFExporter"), NO_API) \
	DECLARE_SERIALIZER(UGLTFExporter)


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLTFExporter(UGLTFExporter&&); \
	UGLTFExporter(const UGLTFExporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLTFExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFExporter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFExporter) \
	NO_API virtual ~UGLTFExporter();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_27_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFEXPORTER_API UClass* StaticClass<class UGLTFExporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
