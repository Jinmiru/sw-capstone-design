// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/DataValidation.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_DataValidation_generated_h
#error "DataValidation.generated.h already included, missing '#pragma once' in DataValidation.h"
#endif
#define COREUOBJECT_DataValidation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_Misc_DataValidation_h


#define FOREACH_ENUM_EDATAVALIDATIONUSECASE(op) \
	op(EDataValidationUsecase::None) \
	op(EDataValidationUsecase::Manual) \
	op(EDataValidationUsecase::Commandlet) \
	op(EDataValidationUsecase::Save) \
	op(EDataValidationUsecase::PreSubmit) \
	op(EDataValidationUsecase::Script) 

enum class EDataValidationUsecase : uint8;
template<> struct TIsUEnumClass<EDataValidationUsecase> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EDataValidationUsecase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
