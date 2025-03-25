// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandscape;
class ULandscapeLayerInfoObject;
class UMaterialInterface;
class USplineComponent;
class UTexture;
class UTextureRenderTarget2D;
enum class ERuntimeVirtualTextureMainPassType : uint8;
struct FLinearColor;
#ifdef LANDSCAPE_LandscapeProxy_generated_h
#error "LandscapeProxy.generated.h already included, missing '#pragma once' in LandscapeProxy.h"
#endif
#define LANDSCAPE_LandscapeProxy_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeEditorLayerSettings>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeImportLayerInfo>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_337_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeProxyMaterialOverride>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLandscapeExportHeightmapToRenderTarget); \
	DECLARE_FUNCTION(execGetLandscapeActor); \
	DECLARE_FUNCTION(execSetLandscapeMaterialScalarParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialVectorParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialTextureParameterValue); \
	DECLARE_FUNCTION(execEditorApplySpline); \
	DECLARE_FUNCTION(execEditorSetLandscapeMaterial); \
	DECLARE_FUNCTION(execChangeComponentScreenSizeToUseSubSections); \
	DECLARE_FUNCTION(execChangeLODDistanceFactor); \
	DECLARE_FUNCTION(execSetVirtualTextureRenderPassType);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execDeleteUnusedLayers); \
	DECLARE_FUNCTION(execLandscapeExportWeightmapToRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportWeightmapFromRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportHeightmapFromRenderTarget);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALandscapeProxy, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend struct Z_Construct_UClass_ALandscapeProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeProxy, APartitionActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ALandscapeProxy*>(this); }


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandscapeProxy(ALandscapeProxy&&); \
	ALandscapeProxy(const ALandscapeProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_373_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_376_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h


#define FOREACH_ENUM_ELANDSCAPEIMPORTALPHAMAPTYPE(op) \
	op(ELandscapeImportAlphamapType::Additive) \
	op(ELandscapeImportAlphamapType::Layered) 

enum class ELandscapeImportAlphamapType : uint8;
template<> struct TIsUEnumClass<ELandscapeImportAlphamapType> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeImportAlphamapType>();

#define FOREACH_ENUM_ELANDSCAPELAYERPAINTINGRESTRICTION(op) \
	op(ELandscapeLayerPaintingRestriction::None) \
	op(ELandscapeLayerPaintingRestriction::UseMaxLayers) \
	op(ELandscapeLayerPaintingRestriction::ExistingOnly) \
	op(ELandscapeLayerPaintingRestriction::UseComponentAllowList) 

enum class ELandscapeLayerPaintingRestriction : uint8;
template<> struct TIsUEnumClass<ELandscapeLayerPaintingRestriction> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerPaintingRestriction>();

#define FOREACH_ENUM_ELANDSCAPELAYERDISPLAYMODE(op) \
	op(ELandscapeLayerDisplayMode::Default) \
	op(ELandscapeLayerDisplayMode::Alphabetical) \
	op(ELandscapeLayerDisplayMode::UserSpecific) 

enum class ELandscapeLayerDisplayMode : uint8;
template<> struct TIsUEnumClass<ELandscapeLayerDisplayMode> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerDisplayMode>();

#define FOREACH_ENUM_ELANDSCAPEHLODTEXTURESIZEPOLICY(op) \
	op(ELandscapeHLODTextureSizePolicy::AutomaticSize) \
	op(ELandscapeHLODTextureSizePolicy::SpecificSize) 

enum class ELandscapeHLODTextureSizePolicy : uint8;
template<> struct TIsUEnumClass<ELandscapeHLODTextureSizePolicy> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeHLODTextureSizePolicy>();

#define FOREACH_ENUM_ELANDSCAPEHLODMESHSOURCELODPOLICY(op) \
	op(ELandscapeHLODMeshSourceLODPolicy::AutomaticLOD) \
	op(ELandscapeHLODMeshSourceLODPolicy::SpecificLOD) \
	op(ELandscapeHLODMeshSourceLODPolicy::LowestDetailLOD) 

enum class ELandscapeHLODMeshSourceLODPolicy : uint8;
template<> struct TIsUEnumClass<ELandscapeHLODMeshSourceLODPolicy> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeHLODMeshSourceLODPolicy>();

#define FOREACH_ENUM_ELANDSCAPELODFALLOFF(op) \
	op(ELandscapeLODFalloff::Linear) \
	op(ELandscapeLODFalloff::SquareRoot) 

namespace ELandscapeLODFalloff { enum Type : int; }
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLODFalloff::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
