// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavCollisionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavCollisionBase_generated_h
#error "NavCollisionBase.generated.h already included, missing '#pragma once' in NavCollisionBase.h"
#endif
#define ENGINE_NavCollisionBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavCollisionBase(); \
	friend struct Z_Construct_UClass_UNavCollisionBase_Statics; \
public: \
	DECLARE_CLASS(UNavCollisionBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavCollisionBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavCollisionBase(UNavCollisionBase&&); \
	UNavCollisionBase(const UNavCollisionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavCollisionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollisionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollisionBase) \
	ENGINE_API virtual ~UNavCollisionBase();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavCollisionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
