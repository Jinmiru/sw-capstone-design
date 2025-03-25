// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureEngineConvex.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREENGINE_FractureEngineConvex_generated_h
#error "FractureEngineConvex.generated.h already included, missing '#pragma once' in FractureEngineConvex.h"
#endif
#define FRACTUREENGINE_FractureEngineConvex_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h


#define FOREACH_ENUM_ECONVEXHULLSIMPLIFYMETHOD(op) \
	op(EConvexHullSimplifyMethod::MeshQSlim) \
	op(EConvexHullSimplifyMethod::AngleTolerance) 

enum class EConvexHullSimplifyMethod;
template<> struct TIsUEnumClass<EConvexHullSimplifyMethod> { enum { Value = true }; };
template<> FRACTUREENGINE_API UEnum* StaticEnum<EConvexHullSimplifyMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
