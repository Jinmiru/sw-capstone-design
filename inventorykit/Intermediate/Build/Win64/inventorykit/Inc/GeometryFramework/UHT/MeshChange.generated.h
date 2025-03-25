// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Changes/MeshChange.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYFRAMEWORK_MeshChange_generated_h
#error "MeshChange.generated.h already included, missing '#pragma once' in MeshChange.h"
#endif
#define GEOMETRYFRAMEWORK_MeshChange_generated_h

#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UMeshCommandChangeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshCommandChangeTarget(UMeshCommandChangeTarget&&); \
	UMeshCommandChangeTarget(const UMeshCommandChangeTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UMeshCommandChangeTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshCommandChangeTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshCommandChangeTarget) \
	GEOMETRYFRAMEWORK_API virtual ~UMeshCommandChangeTarget();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_67_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshCommandChangeTarget(); \
	friend struct Z_Construct_UClass_UMeshCommandChangeTarget_Statics; \
public: \
	DECLARE_CLASS(UMeshCommandChangeTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GeometryFramework"), GEOMETRYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UMeshCommandChangeTarget)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_67_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_67_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_67_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_67_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshCommandChangeTarget() {} \
public: \
	typedef UMeshCommandChangeTarget UClassType; \
	typedef IMeshCommandChangeTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_64_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_67_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class UMeshCommandChangeTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
