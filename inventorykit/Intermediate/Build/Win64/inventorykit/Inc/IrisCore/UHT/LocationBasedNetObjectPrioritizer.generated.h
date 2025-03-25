// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Prioritization/LocationBasedNetObjectPrioritizer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_LocationBasedNetObjectPrioritizer_generated_h
#error "LocationBasedNetObjectPrioritizer.generated.h already included, missing '#pragma once' in LocationBasedNetObjectPrioritizer.h"
#endif
#define IRISCORE_LocationBasedNetObjectPrioritizer_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocationBasedNetObjectPrioritizer(); \
	friend struct Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics; \
public: \
	DECLARE_CLASS(ULocationBasedNetObjectPrioritizer, UNetObjectPrioritizer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(ULocationBasedNetObjectPrioritizer)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocationBasedNetObjectPrioritizer(ULocationBasedNetObjectPrioritizer&&); \
	ULocationBasedNetObjectPrioritizer(const ULocationBasedNetObjectPrioritizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, ULocationBasedNetObjectPrioritizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationBasedNetObjectPrioritizer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULocationBasedNetObjectPrioritizer) \
	IRISCORE_API virtual ~ULocationBasedNetObjectPrioritizer();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_16_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class ULocationBasedNetObjectPrioritizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
