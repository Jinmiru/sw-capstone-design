// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavSystemConfigOverride.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavSystemConfigOverride_generated_h
#error "NavSystemConfigOverride.generated.h already included, missing '#pragma once' in NavSystemConfigOverride.h"
#endif
#define NAVIGATIONSYSTEM_NavSystemConfigOverride_generated_h

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execApplyChanges);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavSystemConfigOverride(); \
	friend struct Z_Construct_UClass_ANavSystemConfigOverride_Statics; \
public: \
	DECLARE_CLASS(ANavSystemConfigOverride, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(ANavSystemConfigOverride)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavSystemConfigOverride(ANavSystemConfigOverride&&); \
	ANavSystemConfigOverride(const ANavSystemConfigOverride&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavSystemConfigOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavSystemConfigOverride); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavSystemConfigOverride) \
	NAVIGATIONSYSTEM_API virtual ~ANavSystemConfigOverride();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_25_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavSystemConfigOverride>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h


#define FOREACH_ENUM_ENAVSYSTEMOVERRIDEPOLICY(op) \
	op(ENavSystemOverridePolicy::Override) \
	op(ENavSystemOverridePolicy::Append) \
	op(ENavSystemOverridePolicy::Skip) 

enum class ENavSystemOverridePolicy : uint8;
template<> struct TIsUEnumClass<ENavSystemOverridePolicy> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavSystemOverridePolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
