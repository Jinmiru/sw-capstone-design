// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTranslatorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECORE_InterchangeTranslatorBase_generated_h
#error "InterchangeTranslatorBase.generated.h already included, missing '#pragma once' in InterchangeTranslatorBase.h"
#endif
#define INTERCHANGECORE_InterchangeTranslatorBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTranslatorSettings(); \
	friend struct Z_Construct_UClass_UInterchangeTranslatorSettings_Statics; \
public: \
	DECLARE_CLASS(UInterchangeTranslatorSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeTranslatorSettings)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeTranslatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeTranslatorSettings(UInterchangeTranslatorSettings&&); \
	UInterchangeTranslatorSettings(const UInterchangeTranslatorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeTranslatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTranslatorSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTranslatorSettings) \
	INTERCHANGECORE_API virtual ~UInterchangeTranslatorSettings();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_26_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeTranslatorSettings>();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTranslatorBase(); \
	friend struct Z_Construct_UClass_UInterchangeTranslatorBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangeTranslatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeTranslatorBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeTranslatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeTranslatorBase(UInterchangeTranslatorBase&&); \
	UInterchangeTranslatorBase(const UInterchangeTranslatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeTranslatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTranslatorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTranslatorBase) \
	INTERCHANGECORE_API virtual ~UInterchangeTranslatorBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_57_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeTranslatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h


#define FOREACH_ENUM_EINTERCHANGETRANSLATORTYPE(op) \
	op(EInterchangeTranslatorType::Invalid) \
	op(EInterchangeTranslatorType::Assets) \
	op(EInterchangeTranslatorType::Actors) \
	op(EInterchangeTranslatorType::Scenes) 

enum class EInterchangeTranslatorType : uint8;
template<> struct TIsUEnumClass<EInterchangeTranslatorType> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeTranslatorType>();

#define FOREACH_ENUM_EINTERCHANGETRANSLATORASSETTYPE(op) \
	op(EInterchangeTranslatorAssetType::None) \
	op(EInterchangeTranslatorAssetType::Textures) \
	op(EInterchangeTranslatorAssetType::Materials) \
	op(EInterchangeTranslatorAssetType::Meshes) \
	op(EInterchangeTranslatorAssetType::Animations) 

enum class EInterchangeTranslatorAssetType : uint8;
template<> struct TIsUEnumClass<EInterchangeTranslatorAssetType> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeTranslatorAssetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
