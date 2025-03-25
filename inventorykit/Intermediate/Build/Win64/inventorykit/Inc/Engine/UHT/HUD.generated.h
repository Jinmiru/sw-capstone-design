// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/HUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class APlayerController;
class UFont;
class UMaterialInterface;
class UTexture;
struct FColor;
struct FLinearColor;
#ifdef ENGINE_HUD_generated_h
#error "HUD.generated.h already included, missing '#pragma once' in HUD.h"
#endif
#define ENGINE_HUD_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_RPC_WRAPPERS \
	ENGINE_API void RemoveDebugText_Implementation(AActor* SrcActor, bool bLeaveDurationText); \
	ENGINE_API void RemoveAllDebugStrings_Implementation(); \
	ENGINE_API void AddDebugText_Implementation(const FString& DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow); \
	DECLARE_FUNCTION(execPreviousDebugTarget); \
	DECLARE_FUNCTION(execNextDebugTarget); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetOwningPlayerController); \
	DECLARE_FUNCTION(execAddHitBox); \
	DECLARE_FUNCTION(execGetActorsInSelectionRectangle); \
	DECLARE_FUNCTION(execDeproject); \
	DECLARE_FUNCTION(execProject); \
	DECLARE_FUNCTION(execDrawMaterialTriangle); \
	DECLARE_FUNCTION(execDrawMaterialSimple); \
	DECLARE_FUNCTION(execDrawMaterial); \
	DECLARE_FUNCTION(execDrawTextureSimple); \
	DECLARE_FUNCTION(execDrawTexture); \
	DECLARE_FUNCTION(execDrawRect); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawText); \
	DECLARE_FUNCTION(execGetTextSize); \
	DECLARE_FUNCTION(execRemoveDebugText); \
	DECLARE_FUNCTION(execRemoveAllDebugStrings); \
	DECLARE_FUNCTION(execAddDebugText); \
	DECLARE_FUNCTION(execShowDebugForReticleTargetToggle); \
	DECLARE_FUNCTION(execShowDebugToggleSubCategory); \
	DECLARE_FUNCTION(execShowDebug); \
	DECLARE_FUNCTION(execShowHUD);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAHUD(); \
	friend struct Z_Construct_UClass_AHUD_Statics; \
public: \
	DECLARE_CLASS(AHUD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AHUD) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHUD(AHUD&&); \
	AHUD(const AHUD&); \
public: \
	ENGINE_API virtual ~AHUD();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_35_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
