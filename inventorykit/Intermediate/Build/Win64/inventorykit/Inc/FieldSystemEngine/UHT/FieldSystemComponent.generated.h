// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Field/FieldSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFieldNodeBase;
class UFieldSystemMetaData;
#ifdef FIELDSYSTEMENGINE_FieldSystemComponent_generated_h
#error "FieldSystemComponent.generated.h already included, missing '#pragma once' in FieldSystemComponent.h"
#endif
#define FIELDSYSTEMENGINE_FieldSystemComponent_generated_h

#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetFieldSystem); \
	DECLARE_FUNCTION(execAddFieldCommand); \
	DECLARE_FUNCTION(execRemovePersistentFields); \
	DECLARE_FUNCTION(execAddPersistentField); \
	DECLARE_FUNCTION(execApplyPhysicsField); \
	DECLARE_FUNCTION(execApplyStrainField); \
	DECLARE_FUNCTION(execApplyUniformVectorFalloffForce); \
	DECLARE_FUNCTION(execApplyRadialVectorFalloffForce); \
	DECLARE_FUNCTION(execApplyRadialForce); \
	DECLARE_FUNCTION(execApplyStayDynamicField); \
	DECLARE_FUNCTION(execApplyLinearForce);


#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUFieldSystemComponent(); \
	friend struct Z_Construct_UClass_UFieldSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), FIELDSYSTEMENGINE_API) \
	DECLARE_SERIALIZER(UFieldSystemComponent)


#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIELDSYSTEMENGINE_API UFieldSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIELDSYSTEMENGINE_API, UFieldSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFieldSystemComponent(UFieldSystemComponent&&); \
	UFieldSystemComponent(const UFieldSystemComponent&); \
public: \
	FIELDSYSTEMENGINE_API virtual ~UFieldSystemComponent();


#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_36_PROLOG
#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_39_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_39_INCLASS \
	FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
