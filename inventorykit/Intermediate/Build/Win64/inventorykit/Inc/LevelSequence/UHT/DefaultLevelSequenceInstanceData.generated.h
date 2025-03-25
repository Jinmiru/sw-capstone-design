// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultLevelSequenceInstanceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSEQUENCE_DefaultLevelSequenceInstanceData_generated_h
#error "DefaultLevelSequenceInstanceData.generated.h already included, missing '#pragma once' in DefaultLevelSequenceInstanceData.h"
#endif
#define LEVELSEQUENCE_DefaultLevelSequenceInstanceData_generated_h

#define FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultLevelSequenceInstanceData(); \
	friend struct Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics; \
public: \
	DECLARE_CLASS(UDefaultLevelSequenceInstanceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), LEVELSEQUENCE_API) \
	DECLARE_SERIALIZER(UDefaultLevelSequenceInstanceData) \
	virtual UObject* _getUObject() const override { return const_cast<UDefaultLevelSequenceInstanceData*>(this); }


#define FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDefaultLevelSequenceInstanceData(UDefaultLevelSequenceInstanceData&&); \
	UDefaultLevelSequenceInstanceData(const UDefaultLevelSequenceInstanceData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, UDefaultLevelSequenceInstanceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultLevelSequenceInstanceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultLevelSequenceInstanceData) \
	LEVELSEQUENCE_API virtual ~UDefaultLevelSequenceInstanceData();


#define FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_13_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class UDefaultLevelSequenceInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
