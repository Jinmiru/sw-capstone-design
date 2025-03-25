// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransformableHandle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONSTRAINTS_TransformableHandle_generated_h
#error "TransformableHandle.generated.h already included, missing '#pragma once' in TransformableHandle.h"
#endif
#define CONSTRAINTS_TransformableHandle_generated_h

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformableHandle(); \
	friend struct Z_Construct_UClass_UTransformableHandle_Statics; \
public: \
	DECLARE_CLASS(UTransformableHandle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Constraints"), CONSTRAINTS_API) \
	DECLARE_SERIALIZER(UTransformableHandle)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONSTRAINTS_API UTransformableHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransformableHandle(UTransformableHandle&&); \
	UTransformableHandle(const UTransformableHandle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UTransformableHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformableHandle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformableHandle)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_39_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRAINTS_API UClass* StaticClass<class UTransformableHandle>();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformableComponentHandle(); \
	friend struct Z_Construct_UClass_UTransformableComponentHandle_Statics; \
public: \
	DECLARE_CLASS(UTransformableComponentHandle, UTransformableHandle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), CONSTRAINTS_API) \
	DECLARE_SERIALIZER(UTransformableComponentHandle)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONSTRAINTS_API UTransformableComponentHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransformableComponentHandle(UTransformableComponentHandle&&); \
	UTransformableComponentHandle(const UTransformableComponentHandle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UTransformableComponentHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformableComponentHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformableComponentHandle)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_151_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRAINTS_API UClass* StaticClass<class UTransformableComponentHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h


#define FOREACH_ENUM_EHANDLEEVENT(op) \
	op(EHandleEvent::LocalTransformUpdated) \
	op(EHandleEvent::GlobalTransformUpdated) \
	op(EHandleEvent::ComponentUpdated) \
	op(EHandleEvent::UpperDependencyUpdated) \
	op(EHandleEvent::Max) 

enum class EHandleEvent : uint8;
template<> struct TIsUEnumClass<EHandleEvent> { enum { Value = true }; };
template<> CONSTRAINTS_API UEnum* StaticEnum<EHandleEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
