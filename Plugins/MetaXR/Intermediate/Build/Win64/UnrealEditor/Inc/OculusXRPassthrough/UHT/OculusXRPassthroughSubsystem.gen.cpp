// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRPassthroughSubsystem.h"
#include "Engine/GameInstance.h"
#include "OculusXRPersistentPassthroughInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRPassthroughSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_CubeFace(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_PixelFormat(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_Resolution(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTextureCube(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughSubsystem(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_AnyLayerResumed__DelegateSignature(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LayerResumed_Single__DelegateSignature(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LightingEstimateChanged__DelegateSignature(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughSubsystem(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPersistentPassthroughInstance(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOculusXRPassthrough_AnyLayerResumed **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_AnyLayerResumed__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_OculusXRPassthrough_eventOculusXRPassthrough_AnyLayerResumed_Parms
	{
		int32 LayerID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXRPassthrough_AnyLayerResumed constinit property declarations **
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusXRPassthrough_AnyLayerResumed constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusXRPassthrough_AnyLayerResumed Property Definitions *************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerID = { "LayerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRPassthrough_eventOculusXRPassthrough_AnyLayerResumed_Parms, LayerID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusXRPassthrough_AnyLayerResumed Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough, nullptr, "OculusXRPassthrough_AnyLayerResumed__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_OculusXRPassthrough_eventOculusXRPassthrough_AnyLayerResumed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_OculusXRPassthrough_eventOculusXRPassthrough_AnyLayerResumed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_AnyLayerResumed__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXRPassthrough_AnyLayerResumed ************************************

// ********** Begin Delegate FOculusXRPassthrough_LightingEstimateChanged **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LightingEstimateChanged__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_OculusXRPassthrough_eventOculusXRPassthrough_LightingEstimateChanged_Parms
	{
		bool Directional;
		bool EnvironmentMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// metaxr_redact_ifdef OVR_INTERNAL_CODE // XR_META_lighting_estimation\n// @cond DOXYGEN_WARNINGS\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "metaxr_redact_ifdef OVR_INTERNAL_CODE  XR_META_lighting_estimation\n@cond DOXYGEN_WARNINGS" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXRPassthrough_LightingEstimateChanged constinit property declarations 
	static void NewProp_Directional_SetBit(void* Obj)
	{
		((_Script_OculusXRPassthrough_eventOculusXRPassthrough_LightingEstimateChanged_Parms*)Obj)->Directional = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Directional;
	static void NewProp_EnvironmentMap_SetBit(void* Obj)
	{
		((_Script_OculusXRPassthrough_eventOculusXRPassthrough_LightingEstimateChanged_Parms*)Obj)->EnvironmentMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnvironmentMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusXRPassthrough_LightingEstimateChanged constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusXRPassthrough_LightingEstimateChanged Property Definitions *****
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Directional = { "Directional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRPassthrough_eventOculusXRPassthrough_LightingEstimateChanged_Parms), &UHT_STATICS::NewProp_Directional_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnvironmentMap = { "EnvironmentMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRPassthrough_eventOculusXRPassthrough_LightingEstimateChanged_Parms), &UHT_STATICS::NewProp_EnvironmentMap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Directional,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnvironmentMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusXRPassthrough_LightingEstimateChanged Property Definitions *******
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough, nullptr, "OculusXRPassthrough_LightingEstimateChanged__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_OculusXRPassthrough_eventOculusXRPassthrough_LightingEstimateChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_OculusXRPassthrough_eventOculusXRPassthrough_LightingEstimateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LightingEstimateChanged__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXRPassthrough_LightingEstimateChanged ****************************

// ********** Begin ScriptStruct FLightingEstimation_LightingEstimate ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FLightingEstimation_LightingEstimate>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLightingEstimation_LightingEstimate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdated_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTextureBuilt_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLightingEstimation_LightingEstimate constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastUpdated;
	static void NewProp_bIsTextureBuilt_SetBit(void* Obj)
	{
		((FLightingEstimation_LightingEstimate*)Obj)->bIsTextureBuilt = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTextureBuilt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLightingEstimation_LightingEstimate constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightingEstimation_LightingEstimate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FLightingEstimation_LightingEstimate Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FLightingEstimation_LightingEstimate, Texture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LastUpdated = { "LastUpdated", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLightingEstimation_LightingEstimate, LastUpdated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdated_MetaData), NewProp_LastUpdated_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsTextureBuilt = { "bIsTextureBuilt", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FLightingEstimation_LightingEstimate), &UHT_STATICS::NewProp_bIsTextureBuilt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTextureBuilt_MetaData), NewProp_bIsTextureBuilt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsTextureBuilt,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FLightingEstimation_LightingEstimate Property Definitions ***********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
	nullptr,
	&NewStructOps,
	"LightingEstimation_LightingEstimate",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FLightingEstimation_LightingEstimate>(),
	alignof(FLightingEstimation_LightingEstimate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLightingEstimation_LightingEstimate;
UScriptStruct* Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FLightingEstimation_LightingEstimate.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FLightingEstimation_LightingEstimate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate, (UObject*)Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase::Outer), TEXT("LightingEstimation_LightingEstimate"));
		}
		return Z_Registration_Info_UScriptStruct_FLightingEstimation_LightingEstimate.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FLightingEstimation_LightingEstimate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLightingEstimation_LightingEstimate.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLightingEstimation_LightingEstimate.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FLightingEstimation_LightingEstimate ********************************

// ********** Begin Class UOculusXRPassthroughSubsystem Function DestroyPersistentPassthrough ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_DestroyPersistentPassthrough_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyPersistentPassthrough constinit property declarations **********
// ********** End Function DestroyPersistentPassthrough constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "DestroyPersistentPassthrough", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_DestroyPersistentPassthrough(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execDestroyPersistentPassthrough)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyPersistentPassthrough();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function DestroyPersistentPassthrough ********

// ********** Begin Class UOculusXRPassthroughSubsystem Function GetDirectionalLightingEstimate ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetDirectionalLightingEstimate_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughSubsystem_eventGetDirectionalLightingEstimate_Parms
	{
		FVector OutDirection;
		FLinearColor OutColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDirectionalLightingEstimate constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDirectionalLightingEstimate constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDirectionalLightingEstimate Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetDirectionalLightingEstimate_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetDirectionalLightingEstimate_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutColor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDirectionalLightingEstimate Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "GetDirectionalLightingEstimate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughSubsystem_eventGetDirectionalLightingEstimate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughSubsystem_eventGetDirectionalLightingEstimate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetDirectionalLightingEstimate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execGetDirectionalLightingEstimate)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDirectionalLightingEstimate(Z_Param_Out_OutDirection,Z_Param_Out_OutColor);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function GetDirectionalLightingEstimate ******

// ********** Begin Class UOculusXRPassthroughSubsystem Function GetEnvironmentMap *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetEnvironmentMap_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughSubsystem_eventGetEnvironmentMap_Parms
	{
		bool bApplyRotationCorrection;
		FVector Location;
		FRotator Rotation;
		UTextureCube* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnvironmentMap constinit property declarations *********************
	static void NewProp_bApplyRotationCorrection_SetBit(void* Obj)
	{
		((OculusXRPassthroughSubsystem_eventGetEnvironmentMap_Parms*)Obj)->bApplyRotationCorrection = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRotationCorrection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnvironmentMap constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnvironmentMap Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bApplyRotationCorrection = { "bApplyRotationCorrection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughSubsystem_eventGetEnvironmentMap_Parms), &UHT_STATICS::NewProp_bApplyRotationCorrection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetEnvironmentMap_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetEnvironmentMap_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetEnvironmentMap_Parms, ReturnValue), Z_Construct_UClass_UTextureCube, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bApplyRotationCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEnvironmentMap Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "GetEnvironmentMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughSubsystem_eventGetEnvironmentMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughSubsystem_eventGetEnvironmentMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetEnvironmentMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execGetEnvironmentMap)
{
	P_GET_UBOOL(Z_Param_bApplyRotationCorrection);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureCube**)Z_Param__Result=P_THIS->GetEnvironmentMap(Z_Param_bApplyRotationCorrection,Z_Param_Out_Location,Z_Param_Out_Rotation);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function GetEnvironmentMap *******************

// ********** Begin Class UOculusXRPassthroughSubsystem Function GetEnvironmentMapLightingEstimate *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetEnvironmentMapLightingEstimate_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughSubsystem_eventGetEnvironmentMapLightingEstimate_Parms
	{
		TEnumAsByte<ELightingEstimation_CubeFace> CubeFace;
		FLightingEstimation_LightingEstimate OutLightingEstimate;
		bool bUpdateTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnvironmentMapLightingEstimate constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_CubeFace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLightingEstimate;
	static void NewProp_bUpdateTexture_SetBit(void* Obj)
	{
		((OculusXRPassthroughSubsystem_eventGetEnvironmentMapLightingEstimate_Parms*)Obj)->bUpdateTexture = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnvironmentMapLightingEstimate constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnvironmentMapLightingEstimate Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CubeFace = { "CubeFace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetEnvironmentMapLightingEstimate_Parms, CubeFace), Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_CubeFace, METADATA_PARAMS(0, nullptr) }; // 4ba33aa1ca409081a77e9a3270d230b8addad1be
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutLightingEstimate = { "OutLightingEstimate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetEnvironmentMapLightingEstimate_Parms, OutLightingEstimate), Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate, METADATA_PARAMS(0, nullptr) }; // 7f81bd223b2e6b94fa39134e18d941ecc3683361
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUpdateTexture = { "bUpdateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughSubsystem_eventGetEnvironmentMapLightingEstimate_Parms), &UHT_STATICS::NewProp_bUpdateTexture_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CubeFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutLightingEstimate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUpdateTexture,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEnvironmentMapLightingEstimate Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "GetEnvironmentMapLightingEstimate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughSubsystem_eventGetEnvironmentMapLightingEstimate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughSubsystem_eventGetEnvironmentMapLightingEstimate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetEnvironmentMapLightingEstimate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execGetEnvironmentMapLightingEstimate)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_CubeFace);
	P_GET_STRUCT_REF(FLightingEstimation_LightingEstimate,Z_Param_Out_OutLightingEstimate);
	P_GET_UBOOL(Z_Param_bUpdateTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEnvironmentMapLightingEstimate(ELightingEstimation_CubeFace(Z_Param_CubeFace),Z_Param_Out_OutLightingEstimate,Z_Param_bUpdateTexture);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function GetEnvironmentMapLightingEstimate ***

// ********** Begin Class UOculusXRPassthroughSubsystem Function GetLightingEstimateColorCorrection 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetLightingEstimateColorCorrection_Statics
struct UHT_STATICS
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct OculusXRPassthroughSubsystem_eventGetLightingEstimateColorCorrection_Parms
	{
		FMatrix OutColorCorrectionMatrix;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLightingEstimateColorCorrection constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutColorCorrectionMatrix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLightingEstimateColorCorrection constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLightingEstimateColorCorrection Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutColorCorrectionMatrix = { "OutColorCorrectionMatrix", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetLightingEstimateColorCorrection_Parms, OutColorCorrectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutColorCorrectionMatrix,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLightingEstimateColorCorrection Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "GetLightingEstimateColorCorrection", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughSubsystem_eventGetLightingEstimateColorCorrection_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughSubsystem_eventGetLightingEstimateColorCorrection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetLightingEstimateColorCorrection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execGetLightingEstimateColorCorrection)
{
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_OutColorCorrectionMatrix);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLightingEstimateColorCorrection(Z_Param_Out_OutColorCorrectionMatrix);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function GetLightingEstimateColorCorrection **

// ********** Begin Class UOculusXRPassthroughSubsystem Function GetPersistentPassthrough **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetPersistentPassthrough_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughSubsystem_eventGetPersistentPassthrough_Parms
	{
		UOculusXRPersistentPassthroughInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPersistentPassthrough constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPersistentPassthrough constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPersistentPassthrough Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventGetPersistentPassthrough_Parms, ReturnValue), Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPersistentPassthrough Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "GetPersistentPassthrough", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughSubsystem_eventGetPersistentPassthrough_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughSubsystem_eventGetPersistentPassthrough_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetPersistentPassthrough(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execGetPersistentPassthrough)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRPersistentPassthroughInstance**)Z_Param__Result=P_THIS->GetPersistentPassthrough();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function GetPersistentPassthrough ************

// ********** Begin Class UOculusXRPassthroughSubsystem Function InitializePersistentPassthrough ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_InitializePersistentPassthrough_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughSubsystem_eventInitializePersistentPassthrough_Parms
	{
		FOculusXRPersistentPassthroughParameters Parameters;
		FScriptDelegate LayerResumed;
		UOculusXRPersistentPassthroughInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LayerResumed" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Passthrough|Persistent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a Reconstructed Passthrough layer that stays alive until \"Destroy Persistent Passthrough\" is called.\n\x09 * If used in blueprints, layer's parameters are available in the Details window when selecting the node.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a Reconstructed Passthrough layer that stays alive until \"Destroy Persistent Passthrough\" is called.\nIf used in blueprints, layer's parameters are available in the Details window when selecting the node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerResumed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializePersistentPassthrough constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_LayerResumed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializePersistentPassthrough constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializePersistentPassthrough Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventInitializePersistentPassthrough_Parms, Parameters), Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters, METADATA_PARAMS(0, nullptr) }; // f60dba641b6907809055df15d23ac88321672792
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_LayerResumed = { "LayerResumed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventInitializePersistentPassthrough_Parms, LayerResumed), Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LayerResumed_Single__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerResumed_MetaData), NewProp_LayerResumed_MetaData) }; // 5b0c871b621cd6fbec6da3d4f7d0cd0293fc7063
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventInitializePersistentPassthrough_Parms, ReturnValue), Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializePersistentPassthrough Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "InitializePersistentPassthrough", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughSubsystem_eventInitializePersistentPassthrough_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughSubsystem_eventInitializePersistentPassthrough_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_InitializePersistentPassthrough(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execInitializePersistentPassthrough)
{
	P_GET_STRUCT(FOculusXRPersistentPassthroughParameters,Z_Param_Parameters);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_LayerResumed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRPersistentPassthroughInstance**)Z_Param__Result=P_THIS->InitializePersistentPassthrough(Z_Param_Parameters,FOculusXRPassthrough_LayerResumed_Single(Z_Param_Out_LayerResumed));
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function InitializePersistentPassthrough *****

// ********** Begin Class UOculusXRPassthroughSubsystem Function IsLightingEstimationRunning *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_IsLightingEstimationRunning_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughSubsystem_eventIsLightingEstimationRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// metaxr_redact_ifdef OVR_INTERNAL_CODE // XR_META_lighting_estimation\n// @cond DOXYGEN_WARNINGS\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "metaxr_redact_ifdef OVR_INTERNAL_CODE  XR_META_lighting_estimation\n@cond DOXYGEN_WARNINGS" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsLightingEstimationRunning constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPassthroughSubsystem_eventIsLightingEstimationRunning_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLightingEstimationRunning constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLightingEstimationRunning Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughSubsystem_eventIsLightingEstimationRunning_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsLightingEstimationRunning Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "IsLightingEstimationRunning", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughSubsystem_eventIsLightingEstimationRunning_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughSubsystem_eventIsLightingEstimationRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_IsLightingEstimationRunning(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execIsLightingEstimationRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLightingEstimationRunning();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function IsLightingEstimationRunning *********

// ********** Begin Class UOculusXRPassthroughSubsystem Function StartLightingEstimation ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_StartLightingEstimation_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughSubsystem_eventStartLightingEstimation_Parms
	{
		TEnumAsByte<ELightingEstimation_Resolution> Resolution;
		TEnumAsByte<ELightingEstimation_PixelFormat> PixelFormat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartLightingEstimation constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPassthroughSubsystem_eventStartLightingEstimation_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartLightingEstimation constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartLightingEstimation Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventStartLightingEstimation_Parms, Resolution), Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_Resolution, METADATA_PARAMS(0, nullptr) }; // c6a2f6664df700276272d774ec5452bae40498e7
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughSubsystem_eventStartLightingEstimation_Parms, PixelFormat), Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_PixelFormat, METADATA_PARAMS(0, nullptr) }; // 70ced2eb176c08065c706f96da72306eea22f8bc
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughSubsystem_eventStartLightingEstimation_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PixelFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartLightingEstimation Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "StartLightingEstimation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughSubsystem_eventStartLightingEstimation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughSubsystem_eventStartLightingEstimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_StartLightingEstimation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execStartLightingEstimation)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Resolution);
	P_GET_PROPERTY(FByteProperty,Z_Param_PixelFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartLightingEstimation(ELightingEstimation_Resolution(Z_Param_Resolution),ELightingEstimation_PixelFormat(Z_Param_PixelFormat));
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function StartLightingEstimation *************

// ********** Begin Class UOculusXRPassthroughSubsystem Function StopLightingEstimation ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughSubsystem_StopLightingEstimation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Lighting Estimation" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopLightingEstimation constinit property declarations ****************
// ********** End Function StopLightingEstimation constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughSubsystem, nullptr, "StopLightingEstimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRPassthroughSubsystem_StopLightingEstimation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughSubsystem::execStopLightingEstimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopLightingEstimation();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughSubsystem Function StopLightingEstimation **************

// ********** Begin Class UOculusXRPassthroughSubsystem ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRPassthroughSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// @endcond\n// metaxr_redact_endif // XR_META_lighting_estimation\n" },
#endif
		{ "DisplayName", "Passthrough Subsystem" },
		{ "IncludePath", "OculusXRPassthroughSubsystem.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@endcond\nmetaxr_redact_endif  XR_META_lighting_estimation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyLayerResumed_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLightingEstimateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PPTInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// @endcond\n// metaxr_redact_endif // XR_META_lighting_estimation\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@endcond\nmetaxr_redact_endif  XR_META_lighting_estimation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingEstimation_CubeFaces_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// metaxr_redact_ifdef OVR_INTERNAL_CODE // XR_META_lighting_estimation\n// @cond DOXYGEN_WARNINGS\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "metaxr_redact_ifdef OVR_INTERNAL_CODE  XR_META_lighting_estimation\n@cond DOXYGEN_WARNINGS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRPassthroughSubsystem constinit property declarations ************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyLayerResumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLightingEstimateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PPTInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingEstimation_CubeFaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LightingEstimation_CubeFaces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvironmentMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRPassthroughSubsystem constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DestroyPersistentPassthrough"), .Pointer = &UOculusXRPassthroughSubsystem::execDestroyPersistentPassthrough },
		{ .NameUTF8 = UTF8TEXT("GetDirectionalLightingEstimate"), .Pointer = &UOculusXRPassthroughSubsystem::execGetDirectionalLightingEstimate },
		{ .NameUTF8 = UTF8TEXT("GetEnvironmentMap"), .Pointer = &UOculusXRPassthroughSubsystem::execGetEnvironmentMap },
		{ .NameUTF8 = UTF8TEXT("GetEnvironmentMapLightingEstimate"), .Pointer = &UOculusXRPassthroughSubsystem::execGetEnvironmentMapLightingEstimate },
		{ .NameUTF8 = UTF8TEXT("GetLightingEstimateColorCorrection"), .Pointer = &UOculusXRPassthroughSubsystem::execGetLightingEstimateColorCorrection },
		{ .NameUTF8 = UTF8TEXT("GetPersistentPassthrough"), .Pointer = &UOculusXRPassthroughSubsystem::execGetPersistentPassthrough },
		{ .NameUTF8 = UTF8TEXT("InitializePersistentPassthrough"), .Pointer = &UOculusXRPassthroughSubsystem::execInitializePersistentPassthrough },
		{ .NameUTF8 = UTF8TEXT("IsLightingEstimationRunning"), .Pointer = &UOculusXRPassthroughSubsystem::execIsLightingEstimationRunning },
		{ .NameUTF8 = UTF8TEXT("StartLightingEstimation"), .Pointer = &UOculusXRPassthroughSubsystem::execStartLightingEstimation },
		{ .NameUTF8 = UTF8TEXT("StopLightingEstimation"), .Pointer = &UOculusXRPassthroughSubsystem::execStopLightingEstimation },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_DestroyPersistentPassthrough, "DestroyPersistentPassthrough" }, // 428af68c9691ad6f4d2d6b72fd3989ecb613a739
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetDirectionalLightingEstimate, "GetDirectionalLightingEstimate" }, // bb97d83f244f6b7b0acff4ae174761f962e64593
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetEnvironmentMap, "GetEnvironmentMap" }, // 3d9e881b3a1d7df58c7213a01738930aaacc3a66
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetEnvironmentMapLightingEstimate, "GetEnvironmentMapLightingEstimate" }, // d264bb162a544ca07685032d470e316decf24b02
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetLightingEstimateColorCorrection, "GetLightingEstimateColorCorrection" }, // 3159ea144394acb3a7616ece7f16a4176526d555
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_GetPersistentPassthrough, "GetPersistentPassthrough" }, // 251f7d75f7471aeeb6428987e732c933bc6291a5
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_InitializePersistentPassthrough, "InitializePersistentPassthrough" }, // 18204e9a37afc22783254fa1c9935604293b0fb9
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_IsLightingEstimationRunning, "IsLightingEstimationRunning" }, // 3c42ee2729eff4daf2491e34342d6414e7efc292
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_StartLightingEstimation, "StartLightingEstimation" }, // b278cbf12af7201fbfa9e013305d6b35e5ff4f81
		{ &Z_Construct_UFunction_UOculusXRPassthroughSubsystem_StopLightingEstimation, "StopLightingEstimation" }, // 38108eab32bf5718313e041b5268f048019fa6e0
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPassthroughSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRPassthroughSubsystem Property Definitions ***********************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnAnyLayerResumed = { "OnAnyLayerResumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughSubsystem, OnAnyLayerResumed), Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_AnyLayerResumed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyLayerResumed_MetaData), NewProp_OnAnyLayerResumed_MetaData) }; // 1391ba596d0fb6c8c243ee6e18848d0c9d04fec8
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnLightingEstimateChanged = { "OnLightingEstimateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughSubsystem, OnLightingEstimateChanged), Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LightingEstimateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLightingEstimateChanged_MetaData), NewProp_OnLightingEstimateChanged_MetaData) }; // eb7c6c5b8859d78d3ee199b331d2ecb405080f76
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PPTInstance = { "PPTInstance", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughSubsystem, PPTInstance), Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PPTInstance_MetaData), NewProp_PPTInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LightingEstimation_CubeFaces_Inner = { "LightingEstimation_CubeFaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate, METADATA_PARAMS(0, nullptr) }; // 7f81bd223b2e6b94fa39134e18d941ecc3683361
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LightingEstimation_CubeFaces = { "LightingEstimation_CubeFaces", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughSubsystem, LightingEstimation_CubeFaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingEstimation_CubeFaces_MetaData), NewProp_LightingEstimation_CubeFaces_MetaData) }; // 7f81bd223b2e6b94fa39134e18d941ecc3683361
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EnvironmentMap = { "EnvironmentMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughSubsystem, EnvironmentMap), Z_Construct_UClass_UTextureCube, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentMap_MetaData), NewProp_EnvironmentMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnAnyLayerResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnLightingEstimateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PPTInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LightingEstimation_CubeFaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LightingEstimation_CubeFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnvironmentMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRPassthroughSubsystem Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstanceSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRPassthroughSubsystem,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRPassthroughSubsystem_StaticRegisterNativesUOculusXRPassthroughSubsystem()
{
	UClass* Class = UOculusXRPassthroughSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPassthroughSubsystem;
UClass* Z_Construct_UClass_UOculusXRPassthroughSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRPassthroughSubsystem;
		if (!Z_Registration_Info_UClass_UOculusXRPassthroughSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRPassthroughSubsystem"),
				Z_Registration_Info_UClass_UOculusXRPassthroughSubsystem.InnerSingleton,
				UOculusXRPassthroughSubsystem_StaticRegisterNativesUOculusXRPassthroughSubsystem,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UOculusXRPassthroughSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRPassthroughSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPassthroughSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPassthroughSubsystem.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRPassthroughSubsystem);
UOculusXRPassthroughSubsystem::~UOculusXRPassthroughSubsystem() {}
// ********** End Class UOculusXRPassthroughSubsystem **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h__Script_OculusXRPassthrough_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate, Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate_Statics::NewStructOps, TEXT("LightingEstimation_LightingEstimate"),&Z_Registration_Info_UScriptStruct_FLightingEstimation_LightingEstimate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightingEstimation_LightingEstimate), 2139208994U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPassthroughSubsystem, TEXT("UOculusXRPassthroughSubsystem"), &Z_Registration_Info_UClass_UOculusXRPassthroughSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPassthroughSubsystem), 244587054U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h__Script_OculusXRPassthrough_c51b42ce329f98fd6c8027aa1a57cbcbe87662fb{
	TEXT("/Script/OculusXRPassthrough"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
