// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementDataStorageCompatibilityInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPEDELEMENTFRAMEWORK_TypedElementDataStorageCompatibilityInterface_generated_h
#error "TypedElementDataStorageCompatibilityInterface.generated.h already included, missing '#pragma once' in TypedElementDataStorageCompatibilityInterface.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementDataStorageCompatibilityInterface_generated_h

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTFRAMEWORK_API UTypedElementDataStorageCompatibilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypedElementDataStorageCompatibilityInterface(UTypedElementDataStorageCompatibilityInterface&&); \
	UTypedElementDataStorageCompatibilityInterface(const UTypedElementDataStorageCompatibilityInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UTypedElementDataStorageCompatibilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementDataStorageCompatibilityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementDataStorageCompatibilityInterface) \
	TYPEDELEMENTFRAMEWORK_API virtual ~UTypedElementDataStorageCompatibilityInterface();


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementDataStorageCompatibilityInterface(); \
	friend struct Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementDataStorageCompatibilityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), TYPEDELEMENTFRAMEWORK_API) \
	DECLARE_SERIALIZER(UTypedElementDataStorageCompatibilityInterface)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementDataStorageCompatibilityInterface() {} \
public: \
	typedef UTypedElementDataStorageCompatibilityInterface UClassType; \
	typedef ITypedElementDataStorageCompatibilityInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_18_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<class UTypedElementDataStorageCompatibilityInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
