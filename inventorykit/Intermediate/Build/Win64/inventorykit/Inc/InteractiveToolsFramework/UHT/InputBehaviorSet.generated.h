// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputBehaviorSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InputBehaviorSet_generated_h
#error "InputBehaviorSet.generated.h already included, missing '#pragma once' in InputBehaviorSet.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputBehaviorSet_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBehaviorInfo_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FBehaviorInfo>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBehaviorSet(); \
	friend struct Z_Construct_UClass_UInputBehaviorSet_Statics; \
public: \
	DECLARE_CLASS(UInputBehaviorSet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UInputBehaviorSet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputBehaviorSet(UInputBehaviorSet&&); \
	UInputBehaviorSet(const UInputBehaviorSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInputBehaviorSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehaviorSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputBehaviorSet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_57_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInputBehaviorSet>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UInputBehaviorSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputBehaviorSource(UInputBehaviorSource&&); \
	UInputBehaviorSource(const UInputBehaviorSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInputBehaviorSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehaviorSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBehaviorSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInputBehaviorSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_163_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInputBehaviorSource(); \
	friend struct Z_Construct_UClass_UInputBehaviorSource_Statics; \
public: \
	DECLARE_CLASS(UInputBehaviorSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UInputBehaviorSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_163_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_163_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_163_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_163_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInputBehaviorSource() {} \
public: \
	typedef UInputBehaviorSource UClassType; \
	typedef IInputBehaviorSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_160_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_163_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInputBehaviorSource>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_192_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalInputBehaviorSource(); \
	friend struct Z_Construct_UClass_ULocalInputBehaviorSource_Statics; \
public: \
	DECLARE_CLASS(ULocalInputBehaviorSource, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(ULocalInputBehaviorSource) \
	virtual UObject* _getUObject() const override { return const_cast<ULocalInputBehaviorSource*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_192_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API ULocalInputBehaviorSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocalInputBehaviorSource(ULocalInputBehaviorSource&&); \
	ULocalInputBehaviorSource(const ULocalInputBehaviorSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, ULocalInputBehaviorSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalInputBehaviorSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalInputBehaviorSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~ULocalInputBehaviorSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_189_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_192_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_192_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_192_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class ULocalInputBehaviorSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
