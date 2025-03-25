// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialShared.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialShared_generated_h
#error "MaterialShared.generated.h already included, missing '#pragma once' in MaterialShared.h"
#endif
#define ENGINE_MaterialShared_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MaterialShared_h


#define FOREACH_ENUM_ELWCFUNCTIONKIND(op) \
	op(ELWCFunctionKind::Constructor) \
	op(ELWCFunctionKind::Promote) \
	op(ELWCFunctionKind::Demote) \
	op(ELWCFunctionKind::Add) \
	op(ELWCFunctionKind::Subtract) \
	op(ELWCFunctionKind::Divide) \
	op(ELWCFunctionKind::MultiplyVectorVector) \
	op(ELWCFunctionKind::MultiplyVectorMatrix) \
	op(ELWCFunctionKind::MultiplyMatrixMatrix) \
	op(ELWCFunctionKind::Other) \
	op(ELWCFunctionKind::Max) 

enum class ELWCFunctionKind;
template<> struct TIsUEnumClass<ELWCFunctionKind> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELWCFunctionKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
