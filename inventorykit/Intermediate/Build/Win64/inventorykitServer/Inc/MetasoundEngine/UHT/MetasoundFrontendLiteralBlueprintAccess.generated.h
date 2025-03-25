// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundFrontendLiteralBlueprintAccess.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAudioParameter;
struct FMetasoundFrontendLiteral;
#ifdef METASOUNDENGINE_MetasoundFrontendLiteralBlueprintAccess_generated_h
#error "MetasoundFrontendLiteralBlueprintAccess.generated.h already included, missing '#pragma once' in MetasoundFrontendLiteralBlueprintAccess.h"
#endif
#define METASOUNDENGINE_MetasoundFrontendLiteralBlueprintAccess_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromParam); \
	DECLARE_FUNCTION(execCreateStringArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateStringMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolMetaSoundLiteral);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundFrontendLiteralBlueprintAccess(); \
	friend struct Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics; \
public: \
	DECLARE_CLASS(UMetasoundFrontendLiteralBlueprintAccess, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetasoundFrontendLiteralBlueprintAccess)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetasoundFrontendLiteralBlueprintAccess(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetasoundFrontendLiteralBlueprintAccess(UMetasoundFrontendLiteralBlueprintAccess&&); \
	UMetasoundFrontendLiteralBlueprintAccess(const UMetasoundFrontendLiteralBlueprintAccess&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetasoundFrontendLiteralBlueprintAccess); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundFrontendLiteralBlueprintAccess); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundFrontendLiteralBlueprintAccess) \
	NO_API virtual ~UMetasoundFrontendLiteralBlueprintAccess();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetasoundFrontendLiteralBlueprintAccess>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
