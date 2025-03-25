// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BlendableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendableInterface_generated_h
#error "BlendableInterface.generated.h already included, missing '#pragma once' in BlendableInterface.h"
#endif
#define ENGINE_BlendableInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlendableInterface(UBlendableInterface&&); \
	UBlendableInterface(const UBlendableInterface&); \
public: \
	ENGINE_API virtual ~UBlendableInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBlendableInterface(); \
	friend struct Z_Construct_UClass_UBlendableInterface_Statics; \
public: \
	DECLARE_CLASS(UBlendableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendableInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_INCLASS_IINTERFACE \
protected: \
	virtual ~IBlendableInterface() {} \
public: \
	typedef UBlendableInterface UClassType; \
	typedef IBlendableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_86_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlendableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h


#define FOREACH_ENUM_EBLENDABLELOCATION(op) \
	op(BL_SceneColorBeforeDOF) \
	op(BL_SceneColorAfterDOF) \
	op(BL_TranslucencyAfterDOF) \
	op(BL_SSRInput) \
	op(BL_SceneColorBeforeBloom) \
	op(BL_ReplacingTonemapper) \
	op(BL_SceneColorAfterTonemapping) \
	op(BL_BeforeTranslucency) \
	op(BL_BeforeTonemapping) \
	op(BL_AfterTonemapping) 

enum EBlendableLocation : int;
template<> ENGINE_API UEnum* StaticEnum<EBlendableLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
