// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/DragDropOperation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDragDropOperation;
struct FPointerEvent;
#ifdef UMG_DragDropOperation_generated_h
#error "DragDropOperation.generated.h already included, missing '#pragma once' in DragDropOperation.h"
#endif
#define UMG_DragDropOperation_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_14_DELEGATE \
UMG_API void FOnDragDropMulticast_DelegateWrapper(const FMulticastScriptDelegate& OnDragDropMulticast, UDragDropOperation* Operation);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_RPC_WRAPPERS \
	UMG_API virtual void Dragged_Implementation(FPointerEvent const& PointerEvent); \
	UMG_API virtual void DragCancelled_Implementation(FPointerEvent const& PointerEvent); \
	UMG_API virtual void Drop_Implementation(FPointerEvent const& PointerEvent); \
	DECLARE_FUNCTION(execDragged); \
	DECLARE_FUNCTION(execDragCancelled); \
	DECLARE_FUNCTION(execDrop);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUDragDropOperation(); \
	friend struct Z_Construct_UClass_UDragDropOperation_Statics; \
public: \
	DECLARE_CLASS(UDragDropOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UDragDropOperation)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UDragDropOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragDropOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UDragDropOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragDropOperation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDragDropOperation(UDragDropOperation&&); \
	UDragDropOperation(const UDragDropOperation&); \
public: \
	UMG_API virtual ~UDragDropOperation();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_40_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UDragDropOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h


#define FOREACH_ENUM_EDRAGPIVOT(op) \
	op(EDragPivot::MouseDown) \
	op(EDragPivot::TopLeft) \
	op(EDragPivot::TopCenter) \
	op(EDragPivot::TopRight) \
	op(EDragPivot::CenterLeft) \
	op(EDragPivot::CenterCenter) \
	op(EDragPivot::CenterRight) \
	op(EDragPivot::BottomLeft) \
	op(EDragPivot::BottomCenter) \
	op(EDragPivot::BottomRight) 

enum class EDragPivot : uint8;
template<> struct TIsUEnumClass<EDragPivot> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EDragPivot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
