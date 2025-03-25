// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Changes/MeshReplacementChange.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYFRAMEWORK_MeshReplacementChange_generated_h
#error "MeshReplacementChange.generated.h already included, missing '#pragma once' in MeshReplacementChange.h"
#endif
#define GEOMETRYFRAMEWORK_MeshReplacementChange_generated_h

#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UMeshReplacementCommandChangeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshReplacementCommandChangeTarget(UMeshReplacementCommandChangeTarget&&); \
	UMeshReplacementCommandChangeTarget(const UMeshReplacementCommandChangeTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UMeshReplacementCommandChangeTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshReplacementCommandChangeTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshReplacementCommandChangeTarget) \
	GEOMETRYFRAMEWORK_API virtual ~UMeshReplacementCommandChangeTarget();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_58_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshReplacementCommandChangeTarget(); \
	friend struct Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics; \
public: \
	DECLARE_CLASS(UMeshReplacementCommandChangeTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GeometryFramework"), GEOMETRYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UMeshReplacementCommandChangeTarget)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_58_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_58_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_58_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_58_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshReplacementCommandChangeTarget() {} \
public: \
	typedef UMeshReplacementCommandChangeTarget UClassType; \
	typedef IMeshReplacementCommandChangeTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_55_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_58_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class UMeshReplacementCommandChangeTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
