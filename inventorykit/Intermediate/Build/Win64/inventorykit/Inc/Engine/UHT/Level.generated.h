// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Level.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Level_generated_h
#error "Level.generated.h already included, missing '#pragma once' in Level.h"
#endif
#define ENGINE_Level_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorContainer(); \
	friend struct Z_Construct_UClass_UActorContainer_Statics; \
public: \
	DECLARE_CLASS(UActorContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorContainer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorContainer(UActorContainer&&); \
	UActorContainer(const UActorContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorContainer) \
	NO_API virtual ~UActorContainer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorContainer>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorFolderSet_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorFolderSet>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStreamableTextureInstance>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FStreamableTextureInstance Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDynamicTextureInstance>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_321_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLevelSimplificationDetails>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_366_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FReplicatedStaticActorDestructionInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_403_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevel, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_403_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevel(); \
	friend struct Z_Construct_UClass_ULevel_Statics; \
public: \
	DECLARE_CLASS(ULevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_ULevel, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_403_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULevel*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_403_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevel(ULevel&&); \
	ULevel(const ULevel&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_400_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_403_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_403_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_403_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h


#define FOREACH_ENUM_EACTORPACKAGINGSCHEME(op) \
	op(EActorPackagingScheme::Original) \
	op(EActorPackagingScheme::Reduced) 

enum class EActorPackagingScheme : uint8;
template<> struct TIsUEnumClass<EActorPackagingScheme> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EActorPackagingScheme>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
