// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementDataStorageInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPEDELEMENTFRAMEWORK_TypedElementDataStorageInterface_generated_h
#error "TypedElementDataStorageInterface.generated.h already included, missing '#pragma once' in TypedElementDataStorageInterface.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementDataStorageInterface_generated_h

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FTypedElementDataStorageColumn>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FTypedElementDataStorageTag>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTFRAMEWORK_API UTypedElementDataStorageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypedElementDataStorageInterface(UTypedElementDataStorageInterface&&); \
	UTypedElementDataStorageInterface(const UTypedElementDataStorageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UTypedElementDataStorageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementDataStorageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementDataStorageInterface) \
	TYPEDELEMENTFRAMEWORK_API virtual ~UTypedElementDataStorageInterface();


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_70_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementDataStorageInterface(); \
	friend struct Z_Construct_UClass_UTypedElementDataStorageInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementDataStorageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), TYPEDELEMENTFRAMEWORK_API) \
	DECLARE_SERIALIZER(UTypedElementDataStorageInterface)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_70_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_70_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_70_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_70_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementDataStorageInterface() {} \
public: \
	typedef UTypedElementDataStorageInterface UClassType; \
	typedef ITypedElementDataStorageInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_67_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_70_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<class UTypedElementDataStorageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
