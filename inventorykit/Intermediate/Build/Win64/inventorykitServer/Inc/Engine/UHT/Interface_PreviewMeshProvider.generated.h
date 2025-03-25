// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interface_PreviewMeshProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_PreviewMeshProvider_generated_h
#error "Interface_PreviewMeshProvider.generated.h already included, missing '#pragma once' in Interface_PreviewMeshProvider.h"
#endif
#define ENGINE_Interface_PreviewMeshProvider_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_PreviewMeshProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PreviewMeshProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_PreviewMeshProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PreviewMeshProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterface_PreviewMeshProvider(UInterface_PreviewMeshProvider&&); \
	UInterface_PreviewMeshProvider(const UInterface_PreviewMeshProvider&); \
public: \
	ENGINE_API virtual ~UInterface_PreviewMeshProvider();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_PreviewMeshProvider(); \
	friend struct Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics; \
public: \
	DECLARE_CLASS(UInterface_PreviewMeshProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterface_PreviewMeshProvider)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_PreviewMeshProvider() {} \
public: \
	typedef UInterface_PreviewMeshProvider UClassType; \
	typedef IInterface_PreviewMeshProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterface_PreviewMeshProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
