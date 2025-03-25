// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction_Wait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Wait() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Wait();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UDEPRECATED_PawnAction_Wait
void UDEPRECATED_PawnAction_Wait::StaticRegisterNativesUDEPRECATED_PawnAction_Wait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnAction_Wait);
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_NoRegister()
{
	return UDEPRECATED_PawnAction_Wait::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** uses system timers rather then ticking */" },
		{ "IncludePath", "Actions/PawnAction_Wait.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Wait.h" },
		{ "ToolTip", "uses system timers rather then ticking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToWait_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Wait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToWait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnAction_Wait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::NewProp_TimeToWait = { "TimeToWait", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction_Wait, TimeToWait), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToWait_MetaData), NewProp_TimeToWait_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::NewProp_TimeToWait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDEPRECATED_PawnAction,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::ClassParams = {
	&UDEPRECATED_PawnAction_Wait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::PropPointers),
	0,
	0x028812A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Wait()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Wait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Wait.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Wait.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnAction_Wait>()
{
	return UDEPRECATED_PawnAction_Wait::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnAction_Wait);
UDEPRECATED_PawnAction_Wait::~UDEPRECATED_PawnAction_Wait() {}
// End Class UDEPRECATED_PawnAction_Wait

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnAction_Wait, UDEPRECATED_PawnAction_Wait::StaticClass, TEXT("UDEPRECATED_PawnAction_Wait"), &Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Wait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnAction_Wait), 1722261459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_2321645236(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
