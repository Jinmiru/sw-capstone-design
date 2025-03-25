// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationBoneSocket.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationBoneSocket_generated_h
#error "ParticleModuleLocationBoneSocket.generated.h already included, missing '#pragma once' in ParticleModuleLocationBoneSocket.h"
#endif
#define ENGINE_ParticleModuleLocationBoneSocket_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLocationBoneSocketInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationBoneSocket(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationBoneSocket, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationBoneSocket)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationBoneSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationBoneSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationBoneSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationBoneSocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleLocationBoneSocket(UParticleModuleLocationBoneSocket&&); \
	UParticleModuleLocationBoneSocket(const UParticleModuleLocationBoneSocket&); \
public: \
	ENGINE_API virtual ~UParticleModuleLocationBoneSocket();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_63_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocationBoneSocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h


#define FOREACH_ENUM_ELOCATIONBONESOCKETSOURCE(op) \
	op(BONESOCKETSOURCE_Bones) \
	op(BONESOCKETSOURCE_Sockets) 

enum ELocationBoneSocketSource : int;
template<> ENGINE_API UEnum* StaticEnum<ELocationBoneSocketSource>();

#define FOREACH_ENUM_ELOCATIONBONESOCKETSELECTIONMETHOD(op) \
	op(BONESOCKETSEL_Sequential) \
	op(BONESOCKETSEL_Random) 

enum ELocationBoneSocketSelectionMethod : int;
template<> ENGINE_API UEnum* StaticEnum<ELocationBoneSocketSelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
