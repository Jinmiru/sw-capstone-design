// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementPrimitiveCustomDataInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScriptTypedElementHandle;
#ifdef TYPEDELEMENTRUNTIME_TypedElementPrimitiveCustomDataInterface_generated_h
#error "TypedElementPrimitiveCustomDataInterface.generated.h already included, missing '#pragma once' in TypedElementPrimitiveCustomDataInterface.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementPrimitiveCustomDataInterface_generated_h

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomDataValue); \
	DECLARE_FUNCTION(execSetCustomData);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementPrimitiveCustomDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypedElementPrimitiveCustomDataInterface(UTypedElementPrimitiveCustomDataInterface&&); \
	UTypedElementPrimitiveCustomDataInterface(const UTypedElementPrimitiveCustomDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementPrimitiveCustomDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementPrimitiveCustomDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementPrimitiveCustomDataInterface) \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementPrimitiveCustomDataInterface();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementPrimitiveCustomDataInterface(); \
	friend struct Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementPrimitiveCustomDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), TYPEDELEMENTRUNTIME_API) \
	DECLARE_SERIALIZER(UTypedElementPrimitiveCustomDataInterface)


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementPrimitiveCustomDataInterface() {} \
public: \
	typedef UTypedElementPrimitiveCustomDataInterface UClassType; \
	typedef ITypedElementPrimitiveCustomDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<class UTypedElementPrimitiveCustomDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
