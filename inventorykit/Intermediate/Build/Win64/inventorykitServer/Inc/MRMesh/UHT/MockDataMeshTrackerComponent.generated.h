// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockDataMeshTrackerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMRMeshComponent;
#ifdef MRMESH_MockDataMeshTrackerComponent_generated_h
#error "MockDataMeshTrackerComponent.generated.h already included, missing '#pragma once' in MockDataMeshTrackerComponent.h"
#endif
#define MRMESH_MockDataMeshTrackerComponent_generated_h

#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_63_DELEGATE \
static MRMESH_API void FOnMockDataMeshTrackerUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMockDataMeshTrackerUpdated, int32 Index, TArray<FVector> const& Vertices, TArray<int32> const& Triangles, TArray<FVector> const& Normals, TArray<float> const& Confidence);


#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDisconnectMRMesh); \
	DECLARE_FUNCTION(execConnectMRMesh);


#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMockDataMeshTrackerComponent(); \
	friend struct Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UMockDataMeshTrackerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), MRMESH_API) \
	DECLARE_SERIALIZER(UMockDataMeshTrackerComponent)


#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MRMESH_API UMockDataMeshTrackerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockDataMeshTrackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MRMESH_API, UMockDataMeshTrackerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockDataMeshTrackerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMockDataMeshTrackerComponent(UMockDataMeshTrackerComponent&&); \
	UMockDataMeshTrackerComponent(const UMockDataMeshTrackerComponent&); \
public:


#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_31_PROLOG
#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_INCLASS \
	FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRMESH_API UClass* StaticClass<class UMockDataMeshTrackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h


#define FOREACH_ENUM_EMESHTRACKERVERTEXCOLORMODE(op) \
	op(EMeshTrackerVertexColorMode::None) \
	op(EMeshTrackerVertexColorMode::Confidence) \
	op(EMeshTrackerVertexColorMode::Block) 

enum class EMeshTrackerVertexColorMode : uint8;
template<> struct TIsUEnumClass<EMeshTrackerVertexColorMode> { enum { Value = true }; };
template<> MRMESH_API UEnum* StaticEnum<EMeshTrackerVertexColorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
