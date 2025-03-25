// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavAreaBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavAreaBase_generated_h
#error "NavAreaBase.generated.h already included, missing '#pragma once' in NavAreaBase.h"
#endif
#define ENGINE_NavAreaBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavAreaBase(); \
	friend struct Z_Construct_UClass_UNavAreaBase_Statics; \
public: \
	DECLARE_CLASS(UNavAreaBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavAreaBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavAreaBase(UNavAreaBase&&); \
	UNavAreaBase(const UNavAreaBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavAreaBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAreaBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAreaBase) \
	ENGINE_API virtual ~UNavAreaBase();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavAreaBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
