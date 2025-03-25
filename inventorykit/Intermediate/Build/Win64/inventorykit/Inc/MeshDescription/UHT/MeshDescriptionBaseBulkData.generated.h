// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshDescriptionBaseBulkData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHDESCRIPTION_MeshDescriptionBaseBulkData_generated_h
#error "MeshDescriptionBaseBulkData.generated.h already included, missing '#pragma once' in MeshDescriptionBaseBulkData.h"
#endif
#define MESHDESCRIPTION_MeshDescriptionBaseBulkData_generated_h

#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMeshDescriptionBaseBulkData, MESHDESCRIPTION_API)


#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshDescriptionBaseBulkData(); \
	friend struct Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics; \
public: \
	DECLARE_CLASS(UMeshDescriptionBaseBulkData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshDescription"), MESHDESCRIPTION_API) \
	DECLARE_SERIALIZER(UMeshDescriptionBaseBulkData) \
	FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshDescriptionBaseBulkData(UMeshDescriptionBaseBulkData&&); \
	UMeshDescriptionBaseBulkData(const UMeshDescriptionBaseBulkData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHDESCRIPTION_API, UMeshDescriptionBaseBulkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDescriptionBaseBulkData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshDescriptionBaseBulkData) \
	MESHDESCRIPTION_API virtual ~UMeshDescriptionBaseBulkData();


#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_23_PROLOG
#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHDESCRIPTION_API UClass* StaticClass<class UMeshDescriptionBaseBulkData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
