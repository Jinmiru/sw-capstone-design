// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "INodeAndChannelMappings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_INodeAndChannelMappings_generated_h
#error "INodeAndChannelMappings.generated.h already included, missing '#pragma once' in INodeAndChannelMappings.h"
#endif
#define MOVIESCENE_INodeAndChannelMappings_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UNodeAndChannelMappings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeAndChannelMappings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UNodeAndChannelMappings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeAndChannelMappings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNodeAndChannelMappings(UNodeAndChannelMappings&&); \
	UNodeAndChannelMappings(const UNodeAndChannelMappings&); \
public: \
	MOVIESCENE_API virtual ~UNodeAndChannelMappings();


#define FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_105_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNodeAndChannelMappings(); \
	friend struct Z_Construct_UClass_UNodeAndChannelMappings_Statics; \
public: \
	DECLARE_CLASS(UNodeAndChannelMappings, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UNodeAndChannelMappings)


#define FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_105_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_105_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_105_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_105_INCLASS_IINTERFACE \
protected: \
	virtual ~INodeAndChannelMappings() {} \
public: \
	typedef UNodeAndChannelMappings UClassType; \
	typedef INodeAndChannelMappings ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_102_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_105_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UNodeAndChannelMappings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
