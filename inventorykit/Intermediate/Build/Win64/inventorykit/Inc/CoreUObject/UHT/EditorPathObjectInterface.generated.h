// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/EditorPathObjectInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_EditorPathObjectInterface_generated_h
#error "EditorPathObjectInterface.generated.h already included, missing '#pragma once' in EditorPathObjectInterface.h"
#endif
#define COREUOBJECT_EditorPathObjectInterface_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UEditorPathObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPathObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UEditorPathObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPathObjectInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorPathObjectInterface(UEditorPathObjectInterface&&); \
	UEditorPathObjectInterface(const UEditorPathObjectInterface&); \
public: \
	COREUOBJECT_API virtual ~UEditorPathObjectInterface();


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEditorPathObjectInterface(); \
	friend struct Z_Construct_UClass_UEditorPathObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UEditorPathObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CoreUObject"), COREUOBJECT_API) \
	DECLARE_SERIALIZER(UEditorPathObjectInterface)


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEditorPathObjectInterface() {} \
public: \
	typedef UEditorPathObjectInterface UClassType; \
	typedef IEditorPathObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UEditorPathObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
