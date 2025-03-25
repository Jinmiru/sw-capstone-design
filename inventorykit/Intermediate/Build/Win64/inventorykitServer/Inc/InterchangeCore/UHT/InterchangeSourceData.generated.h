// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSourceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECORE_InterchangeSourceData_generated_h
#error "InterchangeSourceData.generated.h already included, missing '#pragma once' in InterchangeSourceData.h"
#endif
#define INTERCHANGECORE_InterchangeSourceData_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFilename); \
	DECLARE_FUNCTION(execGetFilename);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSourceData(); \
	friend struct Z_Construct_UClass_UInterchangeSourceData_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSourceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeSourceData)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSourceData(UInterchangeSourceData&&); \
	UInterchangeSourceData(const UInterchangeSourceData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeSourceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSourceData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSourceData) \
	INTERCHANGECORE_API virtual ~UInterchangeSourceData();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_21_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeSourceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
