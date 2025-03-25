// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/EditableTextBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETextOverflowPolicy : uint8;
struct FLinearColor;
#ifdef UMG_EditableTextBox_generated_h
#error "EditableTextBox.generated.h already included, missing '#pragma once' in EditableTextBox.h"
#endif
#define UMG_EditableTextBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_32_DELEGATE \
static UMG_API void FOnEditableTextBoxChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextBoxChangedEvent, FText const& Text);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_33_DELEGATE \
static UMG_API void FOnEditableTextBoxCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextBoxCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execSetTextOverflowPolicy); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execClearError); \
	DECLARE_FUNCTION(execSetIsPassword); \
	DECLARE_FUNCTION(execSetIsReadOnly); \
	DECLARE_FUNCTION(execSetError); \
	DECLARE_FUNCTION(execSetHintText); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_ACCESSORS \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void SetText_WrapperImpl(void* Object, const void* InValue); \
static void GetHintText_WrapperImpl(const void* Object, void* OutValue); \
static void SetHintText_WrapperImpl(void* Object, const void* InValue); \
static void GetIsReadOnly_WrapperImpl(const void* Object, void* OutValue); \
static void SetIsReadOnly_WrapperImpl(void* Object, const void* InValue); \
static void GetIsPassword_WrapperImpl(const void* Object, void* OutValue); \
static void SetIsPassword_WrapperImpl(void* Object, const void* InValue); \
static void GetMinimumDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinimumDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetIsCaretMovedWhenGainFocus_WrapperImpl(const void* Object, void* OutValue); \
static void SetIsCaretMovedWhenGainFocus_WrapperImpl(void* Object, const void* InValue); \
static void GetSelectAllTextWhenFocused_WrapperImpl(const void* Object, void* OutValue); \
static void SetSelectAllTextWhenFocused_WrapperImpl(void* Object, const void* InValue); \
static void GetRevertTextOnEscape_WrapperImpl(const void* Object, void* OutValue); \
static void SetRevertTextOnEscape_WrapperImpl(void* Object, const void* InValue); \
static void GetClearKeyboardFocusOnCommit_WrapperImpl(const void* Object, void* OutValue); \
static void SetClearKeyboardFocusOnCommit_WrapperImpl(void* Object, const void* InValue); \
static void GetSelectAllTextOnCommit_WrapperImpl(const void* Object, void* OutValue); \
static void SetSelectAllTextOnCommit_WrapperImpl(void* Object, const void* InValue); \
static void GetJustification_WrapperImpl(const void* Object, void* OutValue); \
static void SetJustification_WrapperImpl(void* Object, const void* InValue); \
static void GetOverflowPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetOverflowPolicy_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEditableTextBox, UMG_API)


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUEditableTextBox(); \
	friend struct Z_Construct_UClass_UEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(UEditableTextBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UEditableTextBox) \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableTextBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UEditableTextBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableTextBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditableTextBox(UEditableTextBox&&); \
	UEditableTextBox(const UEditableTextBox&); \
public: \
	UMG_API virtual ~UEditableTextBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Text) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(Text) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_25_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UEditableTextBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
