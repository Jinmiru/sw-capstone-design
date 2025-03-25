// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "INotifyFieldValueChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFieldNotificationId;
#ifdef FIELDNOTIFICATION_INotifyFieldValueChanged_generated_h
#error "INotifyFieldValueChanged.generated.h already included, missing '#pragma once' in INotifyFieldValueChanged.h"
#endif
#define FIELDNOTIFICATION_INotifyFieldValueChanged_generated_h

#define FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_12_DELEGATE \
FIELDNOTIFICATION_API void FFieldValueChangedDynamicDelegate_DelegateWrapper(const FScriptDelegate& FieldValueChangedDynamicDelegate, UObject* Object, FFieldNotificationId Field);


#define FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIELDNOTIFICATION_API UNotifyFieldValueChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNotifyFieldValueChanged(UNotifyFieldValueChanged&&); \
	UNotifyFieldValueChanged(const UNotifyFieldValueChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIELDNOTIFICATION_API, UNotifyFieldValueChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotifyFieldValueChanged); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotifyFieldValueChanged) \
	FIELDNOTIFICATION_API virtual ~UNotifyFieldValueChanged();


#define FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNotifyFieldValueChanged(); \
	friend struct Z_Construct_UClass_UNotifyFieldValueChanged_Statics; \
public: \
	DECLARE_CLASS(UNotifyFieldValueChanged, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FieldNotification"), FIELDNOTIFICATION_API) \
	DECLARE_SERIALIZER(UNotifyFieldValueChanged)


#define FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INotifyFieldValueChanged() {} \
public: \
	typedef UNotifyFieldValueChanged UClassType; \
	typedef INotifyFieldValueChanged ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_15_PROLOG
#define FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDNOTIFICATION_API UClass* StaticClass<class UNotifyFieldValueChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
