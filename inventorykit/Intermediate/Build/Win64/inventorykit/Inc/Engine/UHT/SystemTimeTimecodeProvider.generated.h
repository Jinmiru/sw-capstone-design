// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SystemTimeTimecodeProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SystemTimeTimecodeProvider_generated_h
#error "SystemTimeTimecodeProvider.generated.h already included, missing '#pragma once' in SystemTimeTimecodeProvider.h"
#endif
#define ENGINE_SystemTimeTimecodeProvider_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSystemTimeTimecodeProvider(); \
	friend struct Z_Construct_UClass_USystemTimeTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(USystemTimeTimecodeProvider, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USystemTimeTimecodeProvider) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USystemTimeTimecodeProvider(USystemTimeTimecodeProvider&&); \
	USystemTimeTimecodeProvider(const USystemTimeTimecodeProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USystemTimeTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USystemTimeTimecodeProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USystemTimeTimecodeProvider) \
	ENGINE_API virtual ~USystemTimeTimecodeProvider();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USystemTimeTimecodeProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
