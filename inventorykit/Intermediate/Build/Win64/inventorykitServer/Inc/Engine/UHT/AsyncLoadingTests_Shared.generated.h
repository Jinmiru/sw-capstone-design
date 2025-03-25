// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Loading/AsyncLoadingTests_Shared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AsyncLoadingTests_Shared_generated_h
#error "AsyncLoadingTests_Shared.generated.h already included, missing '#pragma once' in AsyncLoadingTests_Shared.h"
#endif
#define ENGINE_AsyncLoadingTests_Shared_generated_h

#define FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAsyncLoadingTests_Shared, NO_API)


#define FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoadingTests_Shared(); \
	friend struct Z_Construct_UClass_UAsyncLoadingTests_Shared_Statics; \
public: \
	DECLARE_CLASS(UAsyncLoadingTests_Shared, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncLoadingTests_Shared) \
	FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncLoadingTests_Shared(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncLoadingTests_Shared(UAsyncLoadingTests_Shared&&); \
	UAsyncLoadingTests_Shared(const UAsyncLoadingTests_Shared&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadingTests_Shared); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadingTests_Shared); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncLoadingTests_Shared) \
	NO_API virtual ~UAsyncLoadingTests_Shared();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncLoadingTests_Shared>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
