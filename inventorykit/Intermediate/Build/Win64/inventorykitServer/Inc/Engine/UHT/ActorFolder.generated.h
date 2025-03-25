// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFolder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorFolder_generated_h
#error "ActorFolder.generated.h already included, missing '#pragma once' in ActorFolder.h"
#endif
#define ENGINE_ActorFolder_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorFolder(); \
	friend struct Z_Construct_UClass_UActorFolder_Statics; \
public: \
	DECLARE_CLASS(UActorFolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UActorFolder) \
	DECLARE_WITHIN(ULevel)


#define FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFolder(UActorFolder&&); \
	UActorFolder(const UActorFolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFolder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFolder) \
	ENGINE_API virtual ~UActorFolder();


#define FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorFolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
