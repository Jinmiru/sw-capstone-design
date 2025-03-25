// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/HeterogeneousVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeterogeneousVolumeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AHeterogeneousVolume();
ENGINE_API UClass* Z_Construct_UClass_AHeterogeneousVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_UHeterogeneousVolumeComponent();
ENGINE_API UClass* Z_Construct_UClass_UHeterogeneousVolumeComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UHeterogeneousVolumeComponent Function Play
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function Play

// Begin Class UHeterogeneousVolumeComponent Function SetEndFrame
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics
{
	struct HeterogeneousVolumeComponent_eventSetEndFrame_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeterogeneousVolumeComponent_eventSetEndFrame_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "SetEndFrame", nullptr, nullptr, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::HeterogeneousVolumeComponent_eventSetEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::HeterogeneousVolumeComponent_eventSetEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execSetEndFrame)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEndFrame(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function SetEndFrame

// Begin Class UHeterogeneousVolumeComponent Function SetFrame
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics
{
	struct HeterogeneousVolumeComponent_eventSetFrame_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeterogeneousVolumeComponent_eventSetFrame_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "SetFrame", nullptr, nullptr, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::HeterogeneousVolumeComponent_eventSetFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::HeterogeneousVolumeComponent_eventSetFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execSetFrame)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrame(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function SetFrame

// Begin Class UHeterogeneousVolumeComponent Function SetFrameRate
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics
{
	struct HeterogeneousVolumeComponent_eventSetFrameRate_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeterogeneousVolumeComponent_eventSetFrameRate_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "SetFrameRate", nullptr, nullptr, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::HeterogeneousVolumeComponent_eventSetFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::HeterogeneousVolumeComponent_eventSetFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execSetFrameRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRate(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function SetFrameRate

// Begin Class UHeterogeneousVolumeComponent Function SetLooping
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics
{
	struct HeterogeneousVolumeComponent_eventSetLooping_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((HeterogeneousVolumeComponent_eventSetLooping_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HeterogeneousVolumeComponent_eventSetLooping_Parms), &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::HeterogeneousVolumeComponent_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::HeterogeneousVolumeComponent_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execSetLooping)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLooping(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function SetLooping

// Begin Class UHeterogeneousVolumeComponent Function SetPlaying
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics
{
	struct HeterogeneousVolumeComponent_eventSetPlaying_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((HeterogeneousVolumeComponent_eventSetPlaying_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HeterogeneousVolumeComponent_eventSetPlaying_Parms), &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "SetPlaying", nullptr, nullptr, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::HeterogeneousVolumeComponent_eventSetPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::HeterogeneousVolumeComponent_eventSetPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execSetPlaying)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaying(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function SetPlaying

// Begin Class UHeterogeneousVolumeComponent Function SetStartFrame
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics
{
	struct HeterogeneousVolumeComponent_eventSetStartFrame_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeterogeneousVolumeComponent_eventSetStartFrame_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "SetStartFrame", nullptr, nullptr, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::HeterogeneousVolumeComponent_eventSetStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::HeterogeneousVolumeComponent_eventSetStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execSetStartFrame)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartFrame(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function SetStartFrame

// Begin Class UHeterogeneousVolumeComponent Function SetStreamingMipBias
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics
{
	struct HeterogeneousVolumeComponent_eventSetStreamingMipBias_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SparseVolumeTextureStreaming" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeterogeneousVolumeComponent_eventSetStreamingMipBias_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "SetStreamingMipBias", nullptr, nullptr, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::HeterogeneousVolumeComponent_eventSetStreamingMipBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::HeterogeneousVolumeComponent_eventSetStreamingMipBias_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execSetStreamingMipBias)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStreamingMipBias(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function SetStreamingMipBias

// Begin Class UHeterogeneousVolumeComponent Function SetVolumeResolution
struct Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics
{
	struct HeterogeneousVolumeComponent_eventSetVolumeResolution_Parms
	{
		FIntVector NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeterogeneousVolumeComponent_eventSetVolumeResolution_Parms, NewValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeterogeneousVolumeComponent, nullptr, "SetVolumeResolution", nullptr, nullptr, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::HeterogeneousVolumeComponent_eventSetVolumeResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::HeterogeneousVolumeComponent_eventSetVolumeResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeterogeneousVolumeComponent::execSetVolumeResolution)
{
	P_GET_STRUCT(FIntVector,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumeResolution(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UHeterogeneousVolumeComponent Function SetVolumeResolution

// Begin Class UHeterogeneousVolumeComponent
void UHeterogeneousVolumeComponent::StaticRegisterNativesUHeterogeneousVolumeComponent()
{
	UClass* Class = UHeterogeneousVolumeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Play", &UHeterogeneousVolumeComponent::execPlay },
		{ "SetEndFrame", &UHeterogeneousVolumeComponent::execSetEndFrame },
		{ "SetFrame", &UHeterogeneousVolumeComponent::execSetFrame },
		{ "SetFrameRate", &UHeterogeneousVolumeComponent::execSetFrameRate },
		{ "SetLooping", &UHeterogeneousVolumeComponent::execSetLooping },
		{ "SetPlaying", &UHeterogeneousVolumeComponent::execSetPlaying },
		{ "SetStartFrame", &UHeterogeneousVolumeComponent::execSetStartFrame },
		{ "SetStreamingMipBias", &UHeterogeneousVolumeComponent::execSetStreamingMipBias },
		{ "SetVolumeResolution", &UHeterogeneousVolumeComponent::execSetVolumeResolution },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeterogeneousVolumeComponent);
UClass* Z_Construct_UClass_UHeterogeneousVolumeComponent_NoRegister()
{
	return UHeterogeneousVolumeComponent::StaticClass();
}
struct Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n * A component that represents a heterogeneous volume.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/HeterogeneousVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
		{ "ToolTip", "A component that represents a heterogeneous volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeResolution_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameTransform_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "bPlaying == false" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingMipBias_MetaData[] = {
		{ "Category", "SparseVolumeTextureStreaming" },
		{ "Comment", "// Bias to apply to the calculated mip level to stream at. This property essentially influences the distance from the\n// volume at which certain mip levels are no longer requested. Higher values result in earlier mip level transitions.\n" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
		{ "ToolTip", "Bias to apply to the calculated mip level to stream at. This property essentially influences the distance from the\nvolume at which certain mip levels are no longer requested. Higher values result in earlier mip level transitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIssueBlockingRequests_MetaData[] = {
		{ "Category", "SparseVolumeTextureStreaming" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPivotAtCentroid_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepFactor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowStepFactor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowBiasFactor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingDownsampleFactor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndFrame;
	static void NewProp_bPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingMipBias;
	static void NewProp_bIssueBlockingRequests_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIssueBlockingRequests;
	static void NewProp_bPivotAtCentroid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotAtCentroid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowStepFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowBiasFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightingDownsampleFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstanceDynamic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_Play, "Play" }, // 554477643
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetEndFrame, "SetEndFrame" }, // 1079773899
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrame, "SetFrame" }, // 1111912412
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetFrameRate, "SetFrameRate" }, // 3518651809
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetLooping, "SetLooping" }, // 538588500
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetPlaying, "SetPlaying" }, // 3487812986
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStartFrame, "SetStartFrame" }, // 3426668788
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetStreamingMipBias, "SetStreamingMipBias" }, // 3454668695
		{ &Z_Construct_UFunction_UHeterogeneousVolumeComponent_SetVolumeResolution, "SetVolumeResolution" }, // 1278297968
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeterogeneousVolumeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_VolumeResolution = { "VolumeResolution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, VolumeResolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeResolution_MetaData), NewProp_VolumeResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_FrameTransform = { "FrameTransform", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, FrameTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameTransform_MetaData), NewProp_FrameTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, Frame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, StartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrame_MetaData), NewProp_StartFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, EndFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrame_MetaData), NewProp_EndFrame_MetaData) };
void Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bPlaying_SetBit(void* Obj)
{
	((UHeterogeneousVolumeComponent*)Obj)->bPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHeterogeneousVolumeComponent), &Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaying_MetaData), NewProp_bPlaying_MetaData) };
void Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UHeterogeneousVolumeComponent*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHeterogeneousVolumeComponent), &Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_StreamingMipBias = { "StreamingMipBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, StreamingMipBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingMipBias_MetaData), NewProp_StreamingMipBias_MetaData) };
void Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bIssueBlockingRequests_SetBit(void* Obj)
{
	((UHeterogeneousVolumeComponent*)Obj)->bIssueBlockingRequests = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bIssueBlockingRequests = { "bIssueBlockingRequests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHeterogeneousVolumeComponent), &Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bIssueBlockingRequests_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIssueBlockingRequests_MetaData), NewProp_bIssueBlockingRequests_MetaData) };
void Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bPivotAtCentroid_SetBit(void* Obj)
{
	((UHeterogeneousVolumeComponent*)Obj)->bPivotAtCentroid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bPivotAtCentroid = { "bPivotAtCentroid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHeterogeneousVolumeComponent), &Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bPivotAtCentroid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPivotAtCentroid_MetaData), NewProp_bPivotAtCentroid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_StepFactor = { "StepFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, StepFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepFactor_MetaData), NewProp_StepFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_ShadowStepFactor = { "ShadowStepFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, ShadowStepFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowStepFactor_MetaData), NewProp_ShadowStepFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_ShadowBiasFactor = { "ShadowBiasFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, ShadowBiasFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowBiasFactor_MetaData), NewProp_ShadowBiasFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_LightingDownsampleFactor = { "LightingDownsampleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, LightingDownsampleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingDownsampleFactor_MetaData), NewProp_LightingDownsampleFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_MaterialInstanceDynamic = { "MaterialInstanceDynamic", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeterogeneousVolumeComponent, MaterialInstanceDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstanceDynamic_MetaData), NewProp_MaterialInstanceDynamic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_VolumeResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_FrameTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_StartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_EndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_StreamingMipBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bIssueBlockingRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_bPivotAtCentroid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_StepFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_ShadowStepFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_ShadowBiasFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_LightingDownsampleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::NewProp_MaterialInstanceDynamic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::ClassParams = {
	&UHeterogeneousVolumeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeterogeneousVolumeComponent()
{
	if (!Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.OuterSingleton, Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHeterogeneousVolumeComponent>()
{
	return UHeterogeneousVolumeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeterogeneousVolumeComponent);
// End Class UHeterogeneousVolumeComponent

// Begin Class AHeterogeneousVolume
void AHeterogeneousVolume::StaticRegisterNativesAHeterogeneousVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeterogeneousVolume);
UClass* Z_Construct_UClass_AHeterogeneousVolume_NoRegister()
{
	return AHeterogeneousVolume::StaticClass();
}
struct Z_Construct_UClass_AHeterogeneousVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n * A placeable actor that represents a heterogeneous volume.\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "Components/HeterogeneousVolumeComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable actor that represents a heterogeneous volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeterogeneousVolumeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/HeterogeneousVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeterogeneousVolumeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeterogeneousVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeterogeneousVolume_Statics::NewProp_HeterogeneousVolumeComponent = { "HeterogeneousVolumeComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeterogeneousVolume, HeterogeneousVolumeComponent), Z_Construct_UClass_UHeterogeneousVolumeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeterogeneousVolumeComponent_MetaData), NewProp_HeterogeneousVolumeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeterogeneousVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeterogeneousVolume_Statics::NewProp_HeterogeneousVolumeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeterogeneousVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeterogeneousVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeterogeneousVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeterogeneousVolume_Statics::ClassParams = {
	&AHeterogeneousVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHeterogeneousVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeterogeneousVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeterogeneousVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeterogeneousVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeterogeneousVolume()
{
	if (!Z_Registration_Info_UClass_AHeterogeneousVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeterogeneousVolume.OuterSingleton, Z_Construct_UClass_AHeterogeneousVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeterogeneousVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AHeterogeneousVolume>()
{
	return AHeterogeneousVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeterogeneousVolume);
AHeterogeneousVolume::~AHeterogeneousVolume() {}
// End Class AHeterogeneousVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeterogeneousVolumeComponent, UHeterogeneousVolumeComponent::StaticClass, TEXT("UHeterogeneousVolumeComponent"), &Z_Registration_Info_UClass_UHeterogeneousVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeterogeneousVolumeComponent), 1306575556U) },
		{ Z_Construct_UClass_AHeterogeneousVolume, AHeterogeneousVolume::StaticClass, TEXT("AHeterogeneousVolume"), &Z_Registration_Info_UClass_AHeterogeneousVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeterogeneousVolume), 514414461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_2423343923(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
