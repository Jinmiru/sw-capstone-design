// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneTimeUnit.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneTimeUnit_generated_h
#error "MovieSceneTimeUnit.generated.h already included, missing '#pragma once' in MovieSceneTimeUnit.h"
#endif
#define MOVIESCENE_MovieSceneTimeUnit_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTimeUnit_h


#define FOREACH_ENUM_EMOVIESCENETIMEUNIT(op) \
	op(EMovieSceneTimeUnit::DisplayRate) \
	op(EMovieSceneTimeUnit::TickResolution) 

enum class EMovieSceneTimeUnit : uint8;
template<> struct TIsUEnumClass<EMovieSceneTimeUnit> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneTimeUnit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
