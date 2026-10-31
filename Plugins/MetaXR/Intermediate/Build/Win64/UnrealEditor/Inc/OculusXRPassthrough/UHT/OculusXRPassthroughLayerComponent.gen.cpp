// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRPassthroughLayerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRPassthroughLayerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder(ETypeConstructPhase);
OCULUSXRHMD_API UFunction* Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRPassthroughLayerBase Function ClearColorMap *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears any color maps previously applied to this layer and sets ColorMapType to \\ref ColorMapType_None value */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears any color maps previously applied to this layer and sets ColorMapType to \\ref ColorMapType_None value" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearColorMap constinit property declarations *************************
// ********** End Function ClearColorMap constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "ClearColorMap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execClearColorMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearColorMap();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function ClearColorMap ***********************

// ********** Begin Class UOculusXRPassthroughLayerBase Function EnableColorMap ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventEnableColorMap_Parms
	{
		bool bInEnableColorMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This method allows to enable or disable the color mapping technique which is configured for this passthrough layer.\n\x09 * @param bInEnableColorMap Specify `true` to enable the color mapping, and `false` to disable it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This method allows to enable or disable the color mapping technique which is configured for this passthrough layer.\n@param bInEnableColorMap Specify `true` to enable the color mapping, and `false` to disable it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableColorMap constinit property declarations ************************
	static void NewProp_bInEnableColorMap_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerBase_eventEnableColorMap_Parms*)Obj)->bInEnableColorMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableColorMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableColorMap constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableColorMap Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableColorMap = { "bInEnableColorMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerBase_eventEnableColorMap_Parms), &UHT_STATICS::NewProp_bInEnableColorMap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableColorMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableColorMap Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "EnableColorMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventEnableColorMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventEnableColorMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execEnableColorMap)
{
	P_GET_UBOOL(Z_Param_bInEnableColorMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableColorMap(Z_Param_bInEnableColorMap);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function EnableColorMap **********************

// ********** Begin Class UOculusXRPassthroughLayerBase Function EnableColorMapCurve ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms
	{
		bool bInEnableColorMapCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable or disables the color map curve used to convert grayscale passthrough to color. This mehtod only has an effect when the color mapping type is set to \\ref ColorMapType_GrayscaleToColor.\n\x09 * See \\ref bUseColorMapCurve for more details.\n\x09 * @param bInEnableColorMapCurve Specify `true` to apply the color map curve.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disables the color map curve used to convert grayscale passthrough to color. This mehtod only has an effect when the color mapping type is set to \\ref ColorMapType_GrayscaleToColor.\nSee \\ref bUseColorMapCurve for more details.\n@param bInEnableColorMapCurve Specify `true` to apply the color map curve." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableColorMapCurve constinit property declarations *******************
	static void NewProp_bInEnableColorMapCurve_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms*)Obj)->bInEnableColorMapCurve = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableColorMapCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableColorMapCurve constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableColorMapCurve Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableColorMapCurve = { "bInEnableColorMapCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms), &UHT_STATICS::NewProp_bInEnableColorMapCurve_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableColorMapCurve,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableColorMapCurve Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "EnableColorMapCurve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execEnableColorMapCurve)
{
	P_GET_UBOOL(Z_Param_bInEnableColorMapCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableColorMapCurve(Z_Param_bInEnableColorMapCurve);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function EnableColorMapCurve *****************

// ********** Begin Class UOculusXRPassthroughLayerBase Function EnableEdgeColor *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms
	{
		bool bInEnableEdgeColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This method allows to enable or disable the edge rendering in this passthrough layer. See \\ref bEnableEdgeColor for more details.\n\x09 * @param bInEnableEdgeColor Specify `true` to enable edge rendering.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This method allows to enable or disable the edge rendering in this passthrough layer. See \\ref bEnableEdgeColor for more details.\n@param bInEnableEdgeColor Specify `true` to enable edge rendering." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableEdgeColor constinit property declarations ***********************
	static void NewProp_bInEnableEdgeColor_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms*)Obj)->bInEnableEdgeColor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableEdgeColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableEdgeColor constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableEdgeColor Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableEdgeColor = { "bInEnableEdgeColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms), &UHT_STATICS::NewProp_bInEnableEdgeColor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableEdgeColor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableEdgeColor Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "EnableEdgeColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execEnableEdgeColor)
{
	P_GET_UBOOL(Z_Param_bInEnableEdgeColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableEdgeColor(Z_Param_bInEnableEdgeColor);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function EnableEdgeColor *********************

// ********** Begin Class UOculusXRPassthroughLayerBase Function RemoveColorLut ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes color grading if any is active */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes color grading if any is active" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveColorLut constinit property declarations ************************
// ********** End Function RemoveColorLut constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "RemoveColorLut", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execRemoveColorLut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveColorLut();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function RemoveColorLut **********************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetBrightnessContrastSaturation ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms
	{
		float InContrast;
		float InBrightness;
		float InSaturation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This method allows to configure brightness and contrast adjustment for Passthrough images. It fails if ColorMapType is not set to ColorMapType_ColorAdjustment.\n\x09 * @param InContrast Contast of passthrough. Valid range: [-1, 1]. A value of 0 means that contrast is left unchanged.\n\x09 * @param InBrightness Brightness of passthrough. Valid range: [-1, 1]. A value of 0 means that brightness is left unchanged.\n\x09 * @param InSaturation Saturation of passthrough. Valid range: [-1, 1]. A value of 0 means that saturation is left unchanged.\n\x09 */" },
#endif
		{ "CPP_Default_InBrightness", "0.000000" },
		{ "CPP_Default_InContrast", "0.000000" },
		{ "CPP_Default_InSaturation", "0.000000" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This method allows to configure brightness and contrast adjustment for Passthrough images. It fails if ColorMapType is not set to ColorMapType_ColorAdjustment.\n@param InContrast Contast of passthrough. Valid range: [-1, 1]. A value of 0 means that contrast is left unchanged.\n@param InBrightness Brightness of passthrough. Valid range: [-1, 1]. A value of 0 means that brightness is left unchanged.\n@param InSaturation Saturation of passthrough. Valid range: [-1, 1]. A value of 0 means that saturation is left unchanged." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetBrightnessContrastSaturation constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InContrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSaturation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBrightnessContrastSaturation constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBrightnessContrastSaturation Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InContrast = { "InContrast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms, InContrast), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InBrightness = { "InBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms, InBrightness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InSaturation = { "InSaturation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms, InSaturation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSaturation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBrightnessContrastSaturation Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetBrightnessContrastSaturation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetBrightnessContrastSaturation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InContrast);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InBrightness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSaturation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrightnessContrastSaturation(Z_Param_InContrast,Z_Param_InBrightness,Z_Param_InSaturation);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetBrightnessContrastSaturation *****

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetColorArray *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetColorArray_Parms
	{
		TArray<FLinearColor> InColorArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set color map array directly instead through a color curve. This method only has an affect when \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set color map array directly instead through a color curve. This method only has an affect when \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorArray constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InColorArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorArray constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorArray Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InColorArray_Inner = { "InColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InColorArray = { "InColorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorArray_Parms, InColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColorArray_MetaData), NewProp_InColorArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorArray Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorArray)
{
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_InColorArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorArray(Z_Param_Out_InColorArray);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetColorArray ***********************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetColorLUTSource *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetColorLUTSource_Parms
	{
		UOculusXRPassthroughColorLut* InColorLUTSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets Color LUT source.\n\x09 * If ColorMapType is `Color LUT`, then source will be blended with passthrough\n\x09 * using folowing formula:\n\x09 * Result = ColorLUTSource * LutWeight + Passthrough * (1 - LutWeight )\n\x09 * If ColorMapType is `Interpolated Color LUT`, then source will be blended with color LUT target\n\x09 * using folowing formula:\n\x09 * Result = ColorLUTSource * (  1 - LutWeight ) + ColorLUTTarget * LutWeight\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Color LUT source.\nIf ColorMapType is `Color LUT`, then source will be blended with passthrough\nusing folowing formula:\nResult = ColorLUTSource * LutWeight + Passthrough * (1 - LutWeight )\nIf ColorMapType is `Interpolated Color LUT`, then source will be blended with color LUT target\nusing folowing formula:\nResult = ColorLUTSource * (  1 - LutWeight ) + ColorLUTTarget * LutWeight" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorLUTSource constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InColorLUTSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorLUTSource constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorLUTSource Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InColorLUTSource = { "InColorLUTSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorLUTSource_Parms, InColorLUTSource), Z_Construct_UClass_UOculusXRPassthroughColorLut, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorLUTSource,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorLUTSource Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorLUTSource", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorLUTSource_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorLUTSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorLUTSource)
{
	P_GET_OBJECT(UOculusXRPassthroughColorLut,Z_Param_InColorLUTSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorLUTSource(Z_Param_InColorLUTSource);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetColorLUTSource *******************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetColorLUTTarget *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetColorLUTTarget_Parms
	{
		UOculusXRPassthroughColorLut* InColorLUTTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets Color LUT target.\n\x09 * If ColorMapType is `Interpolated Color LUT`, then target will be blended with passthrough\n\x09 * using folowing formula:\n\x09 * Result = ColorLUTSource * (  1 - LutWeight ) + ColorLUTTarget * LutWeight\n\x09 * Note: If ColorLUTSource is not specified, Color LUT will be not be applied to the Passthrough layer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Color LUT target.\nIf ColorMapType is `Interpolated Color LUT`, then target will be blended with passthrough\nusing folowing formula:\nResult = ColorLUTSource * (  1 - LutWeight ) + ColorLUTTarget * LutWeight\nNote: If ColorLUTSource is not specified, Color LUT will be not be applied to the Passthrough layer." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorLUTTarget constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InColorLUTTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorLUTTarget constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorLUTTarget Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InColorLUTTarget = { "InColorLUTTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorLUTTarget_Parms, InColorLUTTarget), Z_Construct_UClass_UOculusXRPassthroughColorLut, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorLUTTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorLUTTarget Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorLUTTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorLUTTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorLUTTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorLUTTarget)
{
	P_GET_OBJECT(UOculusXRPassthroughColorLut,Z_Param_InColorLUTTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorLUTTarget(Z_Param_InColorLUTTarget);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetColorLUTTarget *******************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetColorLUTWeight *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetColorLUTWeight_Parms
	{
		float InWeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the color LUT weight. See \\ref LutWeight for more details */" },
#endif
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color LUT weight. See \\ref LutWeight for more details" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorLUTWeight constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorLUTWeight constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorLUTWeight Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorLUTWeight_Parms, InWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWeight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorLUTWeight Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorLUTWeight", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorLUTWeight_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorLUTWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorLUTWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorLUTWeight(Z_Param_InWeight);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetColorLUTWeight *******************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetColorMapControls ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms
	{
		float InContrast;
		float InBrightness;
		float InPosterize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the color map controls for grayscale and grayscale to rgb color mappings. The method fails if ColorMapType is not set to ColorMapType_Grayscale or ColorMapType_GrayscaleToColor.\n\x09 * @param InContrast Contast of passthrough. Valid range: [-1, 1]. A value of 0 means that contrast is left unchanged.\n\x09 * @param InBrightness Brightness of passthrough. Valid range: [-1, 1]. A value of 0 means that brightness is left unchanged.\n\x09 * @param InPosterize Posterize of passthrough. Ranges from 0 to 1, where 0 = no posterization (no effect), 1 = reduce to two colors.\n\x09 */" },
#endif
		{ "CPP_Default_InBrightness", "0.000000" },
		{ "CPP_Default_InContrast", "0.000000" },
		{ "CPP_Default_InPosterize", "0.000000" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color map controls for grayscale and grayscale to rgb color mappings. The method fails if ColorMapType is not set to ColorMapType_Grayscale or ColorMapType_GrayscaleToColor.\n@param InContrast Contast of passthrough. Valid range: [-1, 1]. A value of 0 means that contrast is left unchanged.\n@param InBrightness Brightness of passthrough. Valid range: [-1, 1]. A value of 0 means that brightness is left unchanged.\n@param InPosterize Posterize of passthrough. Ranges from 0 to 1, where 0 = no posterization (no effect), 1 = reduce to two colors." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorMapControls constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InContrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosterize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorMapControls constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorMapControls Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InContrast = { "InContrast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms, InContrast), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InBrightness = { "InBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms, InBrightness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InPosterize = { "InPosterize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms, InPosterize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPosterize,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorMapControls Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorMapControls", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorMapControls)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InContrast);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InBrightness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPosterize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorMapControls(Z_Param_InContrast,Z_Param_InBrightness,Z_Param_InPosterize);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetColorMapControls *****************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetColorMapCurve ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetColorMapCurve_Parms
	{
		UCurveLinearColor* InColorMapCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the color curve that will be added to the color map in grayscale modes --> will be converted into a gradient */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color curve that will be added to the color map in grayscale modes --> will be converted into a gradient" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorMapCurve constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InColorMapCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorMapCurve constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorMapCurve Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InColorMapCurve = { "InColorMapCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapCurve_Parms, InColorMapCurve), Z_Construct_UClass_UCurveLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorMapCurve,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorMapCurve Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorMapCurve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorMapCurve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorMapCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorMapCurve)
{
	P_GET_OBJECT(UCurveLinearColor,Z_Param_InColorMapCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorMapCurve(Z_Param_InColorMapCurve);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetColorMapCurve ********************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetColorMapType *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetColorMapType_Parms
	{
		TEnumAsByte<EOculusXRColorMapType> InColorMapType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the color mapping technique applied to the passthrough texture if \\ref bEnableColorMap is set to `true` */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color mapping technique applied to the passthrough texture if \\ref bEnableColorMap is set to `true`" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorMapType constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InColorMapType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorMapType constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorMapType Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InColorMapType = { "InColorMapType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapType_Parms, InColorMapType), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType, METADATA_PARAMS(0, nullptr) }; // b67f7573e0e48cb614e62aac84f93e9a5af55b38
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorMapType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorMapType Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorMapType", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorMapType_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorMapType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorMapType)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InColorMapType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorMapType(EOculusXRColorMapType(Z_Param_InColorMapType));
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetColorMapType *********************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetColorScaleAndOffset ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms
	{
		FLinearColor InColorScale;
		FLinearColor InColorOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This method allows to configure the color scale and offset values applied to passthrough pixels.\n\x09 * The method only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor.\n\x09 * @param InColorScale Color value that will be multiplied to the pixel color values during compositing. Default is `{1,1,1,1}`\n\x09 * @param InColorOffset Color value that will be added to the pixel color values during compositing. Default is `{0,0,0,0}`.\n\x09 */" },
#endif
		{ "CPP_Default_InColorOffset", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_InColorScale", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This method allows to configure the color scale and offset values applied to passthrough pixels.\nThe method only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor.\n@param InColorScale Color value that will be multiplied to the pixel color values during compositing. Default is `{1,1,1,1}`\n@param InColorOffset Color value that will be added to the pixel color values during compositing. Default is `{0,0,0,0}`." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorScaleAndOffset constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorScaleAndOffset constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorScaleAndOffset Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InColorScale = { "InColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms, InColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InColorOffset = { "InColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms, InColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorScaleAndOffset Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorScaleAndOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorScaleAndOffset)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColorScale);
	P_GET_STRUCT(FLinearColor,Z_Param_InColorOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorScaleAndOffset(Z_Param_InColorScale,Z_Param_InColorOffset);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetColorScaleAndOffset **************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetEdgeRenderingColor *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetEdgeRenderingColor_Parms
	{
		FLinearColor InEdgeColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This method controls the color of the edges when edge rendering is enabled. See \\ref EdgeColor for more details.\n\x09 * @param InEdgeColor Edge rendering color.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This method controls the color of the edges when edge rendering is enabled. See \\ref EdgeColor for more details.\n@param InEdgeColor Edge rendering color." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEdgeRenderingColor constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InEdgeColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEdgeRenderingColor constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEdgeRenderingColor Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InEdgeColor = { "InEdgeColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetEdgeRenderingColor_Parms, InEdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEdgeColor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEdgeRenderingColor Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetEdgeRenderingColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetEdgeRenderingColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetEdgeRenderingColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetEdgeRenderingColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InEdgeColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEdgeRenderingColor(Z_Param_InEdgeColor);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetEdgeRenderingColor ***************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetLayerPlacement *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetLayerPlacement_Parms
	{
		TEnumAsByte<EOculusXRPassthroughLayerOrder> InLayerOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies whether passthrough should appear on top of (\\ref PassthroughLayerOrder_Overlay)\n\x09 * or beneath (\\ref PassthroughLayerOrder_Underlay) the virtual content. The default is `Underlay`.\n\x09 * `Overlay` is deprecated.\n\x09 * See \\ref LayerOrder property for more details */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies whether passthrough should appear on top of (\\ref PassthroughLayerOrder_Overlay)\nor beneath (\\ref PassthroughLayerOrder_Underlay) the virtual content. The default is `Underlay`.\n`Overlay` is deprecated.\nSee \\ref LayerOrder property for more details" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLayerPlacement constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InLayerOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLayerPlacement constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLayerPlacement Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InLayerOrder = { "InLayerOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetLayerPlacement_Parms, InLayerOrder), Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder, METADATA_PARAMS(0, nullptr) }; // c7f1b57188acd6251ccc7640997bc210b2f2fab0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLayerOrder,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLayerPlacement Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetLayerPlacement", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetLayerPlacement_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetLayerPlacement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetLayerPlacement)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InLayerOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayerPlacement(EOculusXRPassthroughLayerOrder(Z_Param_InLayerOrder));
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetLayerPlacement *******************

// ********** Begin Class UOculusXRPassthroughLayerBase Function SetTextureOpacity *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerBase_eventSetTextureOpacity_Parms
	{
		float InOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This method changes the passthrough texture opacity. See \\ref TextureOpacityFactor for more details.\n\x09 * @param InOpacity New value of the passthrough texture opacity.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This method changes the passthrough texture opacity. See \\ref TextureOpacityFactor for more details.\n@param InOpacity New value of the passthrough texture opacity." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetTextureOpacity constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTextureOpacity constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTextureOpacity Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetTextureOpacity_Parms, InOpacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOpacity,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTextureOpacity Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetTextureOpacity", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerBase_eventSetTextureOpacity_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerBase_eventSetTextureOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetTextureOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureOpacity(Z_Param_InOpacity);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerBase Function SetTextureOpacity *******************

// ********** Begin Class UOculusXRPassthroughLayerBase ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Represents a layer used for passthrough.\n *\n * The Passthrough API enables you to show the user's real environment in your mixed reality experiences.\n * It offers several options to customize the appearance of passthrough, such as adjusting opacity,\n * highlight salient edges in the image, or control the color reproduction.\n * For passthrough to be visible, it must be enabled in the Meta XR Plugin\n * via the \\ref UOculusXRHMDRuntimeSettings::bInsightPassthroughEnabled property.\n *\n * @see https://developers.meta.com/horizon/documentation/unreal/unreal-passthrough-overview/ to learn more about passthrough and its features\n * @see https://developers.meta.com/horizon/documentation/unreal/unreal-passthrough-tutorial/ to create a simple app which uses passthrough\n */" },
#endif
		{ "DisplayName", "Passthrough Layer Base" },
		{ "IncludePath", "OculusXRPassthroughLayerComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Represents a layer used for passthrough.\n\nThe Passthrough API enables you to show the user's real environment in your mixed reality experiences.\nIt offers several options to customize the appearance of passthrough, such as adjusting opacity,\nhighlight salient edges in the image, or control the color reproduction.\nFor passthrough to be visible, it must be enabled in the Meta XR Plugin\nvia the \\ref UOculusXRHMDRuntimeSettings::bInsightPassthroughEnabled property.\n\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-passthrough-overview/ to learn more about passthrough and its features\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-passthrough-tutorial/ to create a simple app which uses passthrough" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerOrder_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies whether passthrough should appear on top of (when \\ref LayerOrder is `PassthroughLayerOrder_Overlay`)\n\x09 * or beneath (when \\ref LayerOrder is `PassthroughLayerOrder_Underlay`) the virtual content. The default is `Underlay`.\n\x09 * `Overlay` is deprecated.\n\x09 */" },
#endif
		{ "DisplayName", "Layer Placement" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies whether passthrough should appear on top of (when \\ref LayerOrder is `PassthroughLayerOrder_Overlay`)\nor beneath (when \\ref LayerOrder is `PassthroughLayerOrder_Underlay`) the virtual content. The default is `Underlay`.\n`Overlay` is deprecated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureOpacityFactor_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines the passthrough opacity. It can be used to blend between passthrough and VR when \\ref LayerOrder is set to `Overlay`,\n\x09 * or to dim passthrough when \\ref LayerOrder is set to `Underlay`.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the passthrough opacity. It can be used to blend between passthrough and VR when \\ref LayerOrder is set to `Overlay`,\nor to dim passthrough when \\ref LayerOrder is set to `Underlay`." },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEdgeColor_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables or disables edge rendering.\n\x09 * Use this flag to toggle the edge rendering but retain the previously selected color (including alpha) in the UI when it is disabled.\n\x09 */" },
#endif
		{ "DisplayName", "Enable Edge Rendering" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables edge rendering.\nUse this flag to toggle the edge rendering but retain the previously selected color (including alpha) in the UI when it is disabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeColor_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color for the edge rendering. */" },
#endif
		{ "EditCondition", "bEnableEdgeColor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color for the edge rendering." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableColorMap_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables the color mapping for this layer */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables the color mapping for this layer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMapType_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Represents the color mapping technique applied to this layer. Prefer setting it with \\ref SetColorMapType() method */" },
#endif
		{ "EditCondition", "bEnableColorMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the color mapping technique applied to this layer. Prefer setting it with \\ref SetColorMapType() method" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseColorMapCurve_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls whether to use a color map curve or a gradient. Use it together with \\ref ColorMapCurve property, or set it with \\ref EnableColorMapCurve(). */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType == 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether to use a color map curve or a gradient. Use it together with \\ref ColorMapCurve property, or set it with \\ref EnableColorMapCurve()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMapCurve_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains color mapping gradient which is used to convert grayscale passthrough to color. This property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor. */" },
#endif
		{ "EditCondition", "bEnableColorMap && bUseColorMapCurve && ColorMapType == 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains color mapping gradient which is used to convert grayscale passthrough to color. This property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains contrast setting for color mapping. Ranges from -1 (minimum) to 1 (maximum). This property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_ColorAdjustment, \\ref ColorMapType_Grayscale or \\ref ColorMapType_GrayscaleToColor. */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType > 0 && ColorMapType < 4" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains contrast setting for color mapping. Ranges from -1 (minimum) to 1 (maximum). This property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_ColorAdjustment, \\ref ColorMapType_Grayscale or \\ref ColorMapType_GrayscaleToColor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains brightness setting for color mapping. Ranges from -1 (minimum) to 1 (maximum). This property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_ColorAdjustment, \\ref ColorMapType_Grayscale or \\ref ColorMapType_GrayscaleToColor. */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType > 0 && ColorMapType < 4" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains brightness setting for color mapping. Ranges from -1 (minimum) to 1 (maximum). This property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_ColorAdjustment, \\ref ColorMapType_Grayscale or \\ref ColorMapType_GrayscaleToColor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Posterize_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains posterize setting for grayscale and grayscale to color mappings. Ranges from 0 to 1, where 0 = no posterization (no effect), 1 = reduce to two colors. */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType > 0 && ColorMapType < 3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains posterize setting for grayscale and grayscale to color mappings. Ranges from 0 to 1, where 0 = no posterization (no effect), 1 = reduce to two colors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains saturation for color adjustment mapping. Ranges from -1 (minimum) to 1 (maximum). */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType == 3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains saturation for color adjustment mapping. Ranges from -1 (minimum) to 1 (maximum)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LutWeight_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Controls how \\ref ColorMapType_ColorLut color mapping technique is applied to passthrough.\n\x09 * If the value is 0, then the appearance of Passthrough is unchanged. If it is 1, the colors are fully taken from the LUT. Values between 0 and 1 lead to a linear interpolation\n\x09 * between the original color and the LUT color. If two LUTs are provided LutWeight is used to blend them.\n\x09 * This value can be animated to create smooth transitions.\n\x09 * Default is 0.0 (LUT not applied). Set to 1.0 to fully apply the selected LUT.\n\x09 */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType > 3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls how \\ref ColorMapType_ColorLut color mapping technique is applied to passthrough.\nIf the value is 0, then the appearance of Passthrough is unchanged. If it is 1, the colors are fully taken from the LUT. Values between 0 and 1 lead to a linear interpolation\nbetween the original color and the LUT color. If two LUTs are provided LutWeight is used to blend them.\nThis value can be animated to create smooth transitions.\nDefault is 0.0 (LUT not applied). Set to 1.0 to fully apply the selected LUT." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorLUTSource_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Color LUT properties. If only \\ref ColorLUTSource is provided it will be blended with passthrough layer using following formula:\n\x09 *  Result = ColorLUTSource * LutWeight + Passthrough * ( 1 - LutWeight )\n\x09 */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType > 3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color LUT properties. If only \\ref ColorLUTSource is provided it will be blended with passthrough layer using following formula:\nResult = ColorLUTSource * LutWeight + Passthrough * ( 1 - LutWeight )" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorLUTTarget_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Color LUT properties. If both \\ref ColorLUTSource and \\ref ColorLUTTarget are provided they will be blended using following formula:\n\x09 *  Result = ColorLUTsSource * ( 1 - LutWeight ) + ColorLUTsTarget * LutWeight\n\x09 */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType > 4" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color LUT properties. If both \\ref ColorLUTSource and \\ref ColorLUTTarget are provided they will be blended using following formula:\nResult = ColorLUTsSource * ( 1 - LutWeight ) + ColorLUTsTarget * LutWeight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorScale_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Contains the color value that will be multiplied to the pixel color values during compositing. Default is white = `(1,1,1,1)`.\n\x09 * This property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor.\n\x09 */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType == 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the color value that will be multiplied to the pixel color values during compositing. Default is white = `(1,1,1,1)`.\nThis property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorOffset_MetaData[] = {
		{ "Category", "Passthrough Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Contains the color value that will be added to the pixel color values during compositing. Default is black = `(0,0,0,0)`.\n\x09 * This property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor.\n\x09 */" },
#endif
		{ "EditCondition", "bEnableColorMap && ColorMapType == 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the color value that will be added to the pixel color values during compositing. Default is black = `(0,0,0,0)`.\nThis property only has an effect if \\ref ColorMapType is set to \\ref ColorMapType_GrayscaleToColor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRPassthroughLayerBase constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayerOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureOpacityFactor;
	static void NewProp_bEnableEdgeColor_SetBit(void* Obj)
	{
		((UOculusXRPassthroughLayerBase*)Obj)->bEnableEdgeColor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEdgeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeColor;
	static void NewProp_bEnableColorMap_SetBit(void* Obj)
	{
		((UOculusXRPassthroughLayerBase*)Obj)->bEnableColorMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableColorMap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMapType;
	static void NewProp_bUseColorMapCurve_SetBit(void* Obj)
	{
		((UOculusXRPassthroughLayerBase*)Obj)->bUseColorMapCurve = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseColorMapCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorMapCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Posterize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Saturation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LutWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorLUTSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorLUTTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRPassthroughLayerBase constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearColorMap"), .Pointer = &UOculusXRPassthroughLayerBase::execClearColorMap },
		{ .NameUTF8 = UTF8TEXT("EnableColorMap"), .Pointer = &UOculusXRPassthroughLayerBase::execEnableColorMap },
		{ .NameUTF8 = UTF8TEXT("EnableColorMapCurve"), .Pointer = &UOculusXRPassthroughLayerBase::execEnableColorMapCurve },
		{ .NameUTF8 = UTF8TEXT("EnableEdgeColor"), .Pointer = &UOculusXRPassthroughLayerBase::execEnableEdgeColor },
		{ .NameUTF8 = UTF8TEXT("RemoveColorLut"), .Pointer = &UOculusXRPassthroughLayerBase::execRemoveColorLut },
		{ .NameUTF8 = UTF8TEXT("SetBrightnessContrastSaturation"), .Pointer = &UOculusXRPassthroughLayerBase::execSetBrightnessContrastSaturation },
		{ .NameUTF8 = UTF8TEXT("SetColorArray"), .Pointer = &UOculusXRPassthroughLayerBase::execSetColorArray },
		{ .NameUTF8 = UTF8TEXT("SetColorLUTSource"), .Pointer = &UOculusXRPassthroughLayerBase::execSetColorLUTSource },
		{ .NameUTF8 = UTF8TEXT("SetColorLUTTarget"), .Pointer = &UOculusXRPassthroughLayerBase::execSetColorLUTTarget },
		{ .NameUTF8 = UTF8TEXT("SetColorLUTWeight"), .Pointer = &UOculusXRPassthroughLayerBase::execSetColorLUTWeight },
		{ .NameUTF8 = UTF8TEXT("SetColorMapControls"), .Pointer = &UOculusXRPassthroughLayerBase::execSetColorMapControls },
		{ .NameUTF8 = UTF8TEXT("SetColorMapCurve"), .Pointer = &UOculusXRPassthroughLayerBase::execSetColorMapCurve },
		{ .NameUTF8 = UTF8TEXT("SetColorMapType"), .Pointer = &UOculusXRPassthroughLayerBase::execSetColorMapType },
		{ .NameUTF8 = UTF8TEXT("SetColorScaleAndOffset"), .Pointer = &UOculusXRPassthroughLayerBase::execSetColorScaleAndOffset },
		{ .NameUTF8 = UTF8TEXT("SetEdgeRenderingColor"), .Pointer = &UOculusXRPassthroughLayerBase::execSetEdgeRenderingColor },
		{ .NameUTF8 = UTF8TEXT("SetLayerPlacement"), .Pointer = &UOculusXRPassthroughLayerBase::execSetLayerPlacement },
		{ .NameUTF8 = UTF8TEXT("SetTextureOpacity"), .Pointer = &UOculusXRPassthroughLayerBase::execSetTextureOpacity },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap, "ClearColorMap" }, // 97c9abe22182a63aed488c51df0cae6b82b4be7e
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap, "EnableColorMap" }, // b532d9962a8dda711d0bbd88a473d3210982f2f7
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve, "EnableColorMapCurve" }, // 09b7c9d6813047d52e0a4bea1136dbf4dd0cb148
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor, "EnableEdgeColor" }, // f3a06e41157df1f7a71f04c5aed75fc828b28235
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut, "RemoveColorLut" }, // be0694e172f405204d3bfb7abbde13821fdd6ebf
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation, "SetBrightnessContrastSaturation" }, // 3ffe7844d5d3004c5eac16b854a25e84bcbc7f34
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray, "SetColorArray" }, // b2f1d5f2cd2b57000ee6c05cd2ac8ad375a5b886
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource, "SetColorLUTSource" }, // 0c674ed75b5f6e9a4c1875ee53da2cdc45f99092
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget, "SetColorLUTTarget" }, // 20a7edd2df44a5d563214e6abeaf0582adadfe79
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight, "SetColorLUTWeight" }, // 2d4a1546a4d9bb354128b3a83b51da5d7d937e09
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls, "SetColorMapControls" }, // 3ca4467c44b925ce7df379ec5573bd57bf6ee42d
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve, "SetColorMapCurve" }, // 258e0c065b2858d57fa00d2312472f1c7bec8baa
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType, "SetColorMapType" }, // 203dd6e5625daca79f51f9c1acd351874ede2284
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset, "SetColorScaleAndOffset" }, // 266f8b9c32d5ce8557d0ebfc37db7efb48c41847
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor, "SetEdgeRenderingColor" }, // c5373a9f1375db0b1ac8533374e85f0848c996cf
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement, "SetLayerPlacement" }, // 8e5845055acc1452278409e94c5d5a01586670b9
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity, "SetTextureOpacity" }, // 8cdbba256bb65fd642246d3bff8425cd8faad7d6
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPassthroughLayerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRPassthroughLayerBase Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LayerOrder = { "LayerOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, LayerOrder), Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerOrder_MetaData), NewProp_LayerOrder_MetaData) }; // c7f1b57188acd6251ccc7640997bc210b2f2fab0
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TextureOpacityFactor = { "TextureOpacityFactor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, TextureOpacityFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureOpacityFactor_MetaData), NewProp_TextureOpacityFactor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableEdgeColor = { "bEnableEdgeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPassthroughLayerBase), &UHT_STATICS::NewProp_bEnableEdgeColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableEdgeColor_MetaData), NewProp_bEnableEdgeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeColor = { "EdgeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, EdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeColor_MetaData), NewProp_EdgeColor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableColorMap = { "bEnableColorMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPassthroughLayerBase), &UHT_STATICS::NewProp_bEnableColorMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableColorMap_MetaData), NewProp_bEnableColorMap_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ColorMapType = { "ColorMapType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorMapType), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMapType_MetaData), NewProp_ColorMapType_MetaData) }; // b67f7573e0e48cb614e62aac84f93e9a5af55b38
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseColorMapCurve = { "bUseColorMapCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPassthroughLayerBase), &UHT_STATICS::NewProp_bUseColorMapCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseColorMapCurve_MetaData), NewProp_bUseColorMapCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ColorMapCurve = { "ColorMapCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorMapCurve), Z_Construct_UClass_UCurveLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMapCurve_MetaData), NewProp_ColorMapCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Posterize = { "Posterize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, Posterize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Posterize_MetaData), NewProp_Posterize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, Saturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Saturation_MetaData), NewProp_Saturation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LutWeight = { "LutWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, LutWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LutWeight_MetaData), NewProp_LutWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ColorLUTSource = { "ColorLUTSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorLUTSource), Z_Construct_UClass_UOculusXRPassthroughColorLut, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorLUTSource_MetaData), NewProp_ColorLUTSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ColorLUTTarget = { "ColorLUTTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorLUTTarget), Z_Construct_UClass_UOculusXRPassthroughColorLut, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorLUTTarget_MetaData), NewProp_ColorLUTTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorScale_MetaData), NewProp_ColorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorOffset_MetaData), NewProp_ColorOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureOpacityFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableEdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableColorMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorMapType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseColorMapCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorMapCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Posterize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Saturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LutWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorLUTSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorLUTTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRPassthroughLayerBase Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UStereoLayerShape,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRPassthroughLayerBase,
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
	0x001030A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRPassthroughLayerBase_StaticRegisterNativesUOculusXRPassthroughLayerBase()
{
	UClass* Class = UOculusXRPassthroughLayerBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase;
UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRPassthroughLayerBase;
		if (!Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRPassthroughLayerBase"),
				Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.InnerSingleton,
				UOculusXRPassthroughLayerBase_StaticRegisterNativesUOculusXRPassthroughLayerBase,
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
		return Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRPassthroughLayerBase::UOculusXRPassthroughLayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRPassthroughLayerBase);
UOculusXRPassthroughLayerBase::~UOculusXRPassthroughLayerBase() {}
// ********** End Class UOculusXRPassthroughLayerBase **********************************************

// ********** Begin Class UOculusXRStereoLayerShapeReconstructed ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Represents a passthrough layer which uses automatic environment depth reconstruction to render itself.\n *\n * The Passthrough API enables you to show the user's real environment in your mixed reality experiences.\n * It offers several options to customize the appearance of passthrough, such as adjusting opacity,\n * highlight salient edges in the image, or control the color reproduction.\n * For passthrough to be visible, it must be enabled in the Meta XR Plugin\n * via the \\ref UOculusXRHMDRuntimeSettings::bInsightPassthroughEnabled property.\n *\n * Reconstructed passthrough used via this class vanishes when the current component\n * is destroyed. Consider using Persistent Passthrough Layer instead, which remains active throughout the application's lifetime,\n * including across level transitions. See https://developers.meta.com/horizon/documentation/unreal/unreal-persistent-passthrough/ for more details.\n */" },
#endif
		{ "DisplayName", "Reconstructed Passthrough Layer" },
		{ "IncludePath", "OculusXRPassthroughLayerComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Represents a passthrough layer which uses automatic environment depth reconstruction to render itself.\n\nThe Passthrough API enables you to show the user's real environment in your mixed reality experiences.\nIt offers several options to customize the appearance of passthrough, such as adjusting opacity,\nhighlight salient edges in the image, or control the color reproduction.\nFor passthrough to be visible, it must be enabled in the Meta XR Plugin\nvia the \\ref UOculusXRHMDRuntimeSettings::bInsightPassthroughEnabled property.\n\nReconstructed passthrough used via this class vanishes when the current component\nis destroyed. Consider using Persistent Passthrough Layer instead, which remains active throughout the application's lifetime,\nincluding across level transitions. See https://developers.meta.com/horizon/documentation/unreal/unreal-persistent-passthrough/ for more details." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRStereoLayerShapeReconstructed constinit property declarations ***
// ********** End Class UOculusXRStereoLayerShapeReconstructed constinit property declarations *****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRStereoLayerShapeReconstructed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed;
UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRStereoLayerShapeReconstructed;
		if (!Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRStereoLayerShapeReconstructed"),
				Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRStereoLayerShapeReconstructed::UOculusXRStereoLayerShapeReconstructed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRStereoLayerShapeReconstructed);
UOculusXRStereoLayerShapeReconstructed::~UOculusXRStereoLayerShapeReconstructed() {}
// ********** End Class UOculusXRStereoLayerShapeReconstructed *************************************

// ********** Begin Class UOculusXRStereoLayerShapeUserDefined *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \\deprecated UOculusXRStereoLayerShapeUserDefined is deprecated, use UOculusXRStereoLayerShapeReconstructed instead.\n *\n * @brief Represents a passthrough layer which relies on the geometry and the depth provided by the client to render itself.\n *\n * The Passthrough API enables you to show the user's real environment in your mixed reality experiences.\n * It offers several options to customize the appearance of passthrough, such as adjusting opacity,\n * highlight salient edges in the image, or control the color reproduction.\n * For passthrough to be visible, it must be enabled in the Meta XR Plugin\n * via the \\ref UOculusXRHMDRuntimeSettings::bInsightPassthroughEnabled property.\n *\n * @see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-surface-projected-passthrough/ to learn more about surface projected passthrough.\n */" },
#endif
		{ "DisplayName", "User Defined Passthrough Layer" },
		{ "IncludePath", "OculusXRPassthroughLayerComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\deprecated UOculusXRStereoLayerShapeUserDefined is deprecated, use UOculusXRStereoLayerShapeReconstructed instead.\n\n@brief Represents a passthrough layer which relies on the geometry and the depth provided by the client to render itself.\n\nThe Passthrough API enables you to show the user's real environment in your mixed reality experiences.\nIt offers several options to customize the appearance of passthrough, such as adjusting opacity,\nhighlight salient edges in the image, or control the color reproduction.\nFor passthrough to be visible, it must be enabled in the Meta XR Plugin\nvia the \\ref UOculusXRHMDRuntimeSettings::bInsightPassthroughEnabled property.\n\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-surface-projected-passthrough/ to learn more about surface projected passthrough." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRStereoLayerShapeUserDefined constinit property declarations *****
// ********** End Class UOculusXRStereoLayerShapeUserDefined constinit property declarations *******
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRStereoLayerShapeUserDefined>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined;
UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRStereoLayerShapeUserDefined;
		if (!Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRStereoLayerShapeUserDefined"),
				Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRStereoLayerShapeUserDefined::UOculusXRStereoLayerShapeUserDefined(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRStereoLayerShapeUserDefined);
UOculusXRStereoLayerShapeUserDefined::~UOculusXRStereoLayerShapeUserDefined() {}
// ********** End Class UOculusXRStereoLayerShapeUserDefined ***************************************

// ********** Begin Class UOculusXRPassthroughLayerComponent Function AddProceduralSurfaceGeometry *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms
	{
		UProceduralMeshComponent* ProceduralMeshComponent;
		bool updateTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a procedural geometry onto which the passthrough images will be projected. This only has an effect with the surface projected passthrough layers.\n\x09 * @see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-surface-projected-passthrough/ to learn more about it.\n\x09 *\n\x09 * @param ProceduralMeshComponent Reference to the component that contains the procedural mesh to be added.\n\x09 * @param updateTransform When the value is `true`, corresponding passthrough will update the transform of the surface mesh every frame.\n\x09 * Otherwise only the initial transform is recorded.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a procedural geometry onto which the passthrough images will be projected. This only has an effect with the surface projected passthrough layers.\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-surface-projected-passthrough/ to learn more about it.\n\n@param ProceduralMeshComponent Reference to the component that contains the procedural mesh to be added.\n@param updateTransform When the value is `true`, corresponding passthrough will update the transform of the surface mesh every frame.\nOtherwise only the initial transform is recorded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddProceduralSurfaceGeometry constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
	static void NewProp_updateTransform_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms*)Obj)->updateTransform = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_updateTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddProceduralSurfaceGeometry constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddProceduralSurfaceGeometry Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshComponent_MetaData), NewProp_ProceduralMeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_updateTransform = { "updateTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms), &UHT_STATICS::NewProp_updateTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_updateTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddProceduralSurfaceGeometry Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "AddProceduralSurfaceGeometry", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execAddProceduralSurfaceGeometry)
{
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProceduralMeshComponent);
	P_GET_UBOOL(Z_Param_updateTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddProceduralSurfaceGeometry(Z_Param_ProceduralMeshComponent,Z_Param_updateTransform);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function AddProceduralSurfaceGeometry ***

// ********** Begin Class UOculusXRPassthroughLayerComponent Function AddStaticSurfaceGeometry *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
		bool updateTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a static geometry onto which the passthrough images will be projected. This only has an effect with the surface projected passthrough layers.\n\x09 * @see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-surface-projected-passthrough/ to learn more about it.\n\x09 *\n\x09 * @param StaticMeshComponent Reference to the component that contains the static mesh to be added.\n\x09 * @param updateTransform When the value is `true`, corresponding passthrough layer will update the transform of the surface mesh every frame.\n\x09 * Otherwise only the initial transform is recorded.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a static geometry onto which the passthrough images will be projected. This only has an effect with the surface projected passthrough layers.\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-surface-projected-passthrough/ to learn more about it.\n\n@param StaticMeshComponent Reference to the component that contains the static mesh to be added.\n@param updateTransform When the value is `true`, corresponding passthrough layer will update the transform of the surface mesh every frame.\nOtherwise only the initial transform is recorded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddStaticSurfaceGeometry constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static void NewProp_updateTransform_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms*)Obj)->updateTransform = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_updateTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStaticSurfaceGeometry constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStaticSurfaceGeometry Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_updateTransform = { "updateTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms), &UHT_STATICS::NewProp_updateTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_updateTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddStaticSurfaceGeometry Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "AddStaticSurfaceGeometry", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execAddStaticSurfaceGeometry)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_GET_UBOOL(Z_Param_updateTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStaticSurfaceGeometry(Z_Param_StaticMeshComponent,Z_Param_updateTransform);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function AddStaticSurfaceGeometry *******

// ********** Begin Class UOculusXRPassthroughLayerComponent Function AddSurfaceGeometry ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms
	{
		AStaticMeshActor* StaticMeshActor;
		bool updateTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \\deprecated Adds a static geometry onto which the passthrough images will be projected. This method is deprecated in favour of \\ref AddStaticSurfaceGeometry().\n\x09 *\n\x09 * @param StaticMeshActor The actor containing the static geometry.\n\x09 * @param bUpdateTransform When the value is `true`, current layer will update the transform of the mesh every frame.\n\x09 * Otherwise only the initial transform is recorded.\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use AddStaticSurfaceGeometry instead" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\deprecated Adds a static geometry onto which the passthrough images will be projected. This method is deprecated in favour of \\ref AddStaticSurfaceGeometry().\n\n@param StaticMeshActor The actor containing the static geometry.\n@param bUpdateTransform When the value is `true`, current layer will update the transform of the mesh every frame.\nOtherwise only the initial transform is recorded." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddSurfaceGeometry constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
	static void NewProp_updateTransform_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms*)Obj)->updateTransform = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_updateTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddSurfaceGeometry constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddSurfaceGeometry Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_updateTransform = { "updateTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms), &UHT_STATICS::NewProp_updateTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_updateTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddSurfaceGeometry Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "AddSurfaceGeometry", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execAddSurfaceGeometry)
{
	P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
	P_GET_UBOOL(Z_Param_updateTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSurfaceGeometry(Z_Param_StaticMeshActor,Z_Param_updateTransform);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function AddSurfaceGeometry *************

// ********** Begin Class UOculusXRPassthroughLayerComponent Function IsSurfaceGeometry ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms
	{
		AStaticMeshActor* StaticMeshActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \\deprecated Checks if the actor contains a static geomenty that has been added to the current component. This method is deprecated in favour of \\ref IsSurfaceGeometryComponent().\n\x09 * @param StaticMeshActor The actor for which the check is to be made.\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use IsSurfaceGeometryComponent instead" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\deprecated Checks if the actor contains a static geomenty that has been added to the current component. This method is deprecated in favour of \\ref IsSurfaceGeometryComponent().\n@param StaticMeshActor The actor for which the check is to be made." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsSurfaceGeometry constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSurfaceGeometry constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSurfaceGeometry Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsSurfaceGeometry Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "IsSurfaceGeometry", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execIsSurfaceGeometry)
{
	P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSurfaceGeometry(Z_Param_StaticMeshActor);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function IsSurfaceGeometry **************

// ********** Begin Class UOculusXRPassthroughLayerComponent Function IsSurfaceGeometryComponent ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms
	{
		const UMeshComponent* MeshComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the current component contains the mesh passed as an argument.\n\x09 * @param MeshComponent The component with the mesh for which the check is to be made.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the current component contains the mesh passed as an argument.\n@param MeshComponent The component with the mesh for which the check is to be made." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSurfaceGeometryComponent constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSurfaceGeometryComponent constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSurfaceGeometryComponent Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsSurfaceGeometryComponent Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "IsSurfaceGeometryComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execIsSurfaceGeometryComponent)
{
	P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSurfaceGeometryComponent(Z_Param_MeshComponent);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function IsSurfaceGeometryComponent *****

// ********** Begin Class UOculusXRPassthroughLayerComponent Function MarkPassthroughStyleForUpdate 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|Stereo Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Manually mark the stereo layer passthrough effect for updating.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manually mark the stereo layer passthrough effect for updating." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MarkPassthroughStyleForUpdate constinit property declarations *********
// ********** End Function MarkPassthroughStyleForUpdate constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "MarkPassthroughStyleForUpdate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execMarkPassthroughStyleForUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkPassthroughStyleForUpdate();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function MarkPassthroughStyleForUpdate **

// ********** Begin Class UOculusXRPassthroughLayerComponent Function OnAnyLayerResumedEvent *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_OnAnyLayerResumedEvent_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventOnAnyLayerResumedEvent_Parms
	{
		int32 InLayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calling this method results in broadcasting \\ref OnLayerResumed event if `InLayerId` matches the Id of the current passthrough layer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calling this method results in broadcasting \\ref OnLayerResumed event if `InLayerId` matches the Id of the current passthrough layer." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnAnyLayerResumedEvent constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnAnyLayerResumedEvent constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnAnyLayerResumedEvent Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InLayerId = { "InLayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventOnAnyLayerResumedEvent_Parms, InLayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLayerId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnAnyLayerResumedEvent Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "OnAnyLayerResumedEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventOnAnyLayerResumedEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventOnAnyLayerResumedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_OnAnyLayerResumedEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execOnAnyLayerResumedEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyLayerResumedEvent(Z_Param_InLayerId);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function OnAnyLayerResumedEvent *********

// ********** Begin Class UOculusXRPassthroughLayerComponent Function RemoveProceduralSurfaceGeometry 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventRemoveProceduralSurfaceGeometry_Parms
	{
		UProceduralMeshComponent* ProceduralMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes previously added procedural geometry from the projection surface.\n\x09 * @param ProceduralMeshComponent Reference to the component that contains the procedural mesh to be removed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes previously added procedural geometry from the projection surface.\n@param ProceduralMeshComponent Reference to the component that contains the procedural mesh to be removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveProceduralSurfaceGeometry constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveProceduralSurfaceGeometry constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveProceduralSurfaceGeometry Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventRemoveProceduralSurfaceGeometry_Parms, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshComponent_MetaData), NewProp_ProceduralMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveProceduralSurfaceGeometry Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "RemoveProceduralSurfaceGeometry", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventRemoveProceduralSurfaceGeometry_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventRemoveProceduralSurfaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execRemoveProceduralSurfaceGeometry)
{
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProceduralMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveProceduralSurfaceGeometry(Z_Param_ProceduralMeshComponent);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function RemoveProceduralSurfaceGeometry 

// ********** Begin Class UOculusXRPassthroughLayerComponent Function RemoveStaticSurfaceGeometry **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventRemoveStaticSurfaceGeometry_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes previously added static geometry from the projection surface.\n\x09 * @param StaticMeshComponent Reference to the component that contains the static mesh to be removed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes previously added static geometry from the projection surface.\n@param StaticMeshComponent Reference to the component that contains the static mesh to be removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveStaticSurfaceGeometry constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveStaticSurfaceGeometry constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveStaticSurfaceGeometry Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventRemoveStaticSurfaceGeometry_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveStaticSurfaceGeometry Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "RemoveStaticSurfaceGeometry", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventRemoveStaticSurfaceGeometry_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventRemoveStaticSurfaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execRemoveStaticSurfaceGeometry)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStaticSurfaceGeometry(Z_Param_StaticMeshComponent);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function RemoveStaticSurfaceGeometry ****

// ********** Begin Class UOculusXRPassthroughLayerComponent Function RemoveSurfaceGeometry ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughLayerComponent_eventRemoveSurfaceGeometry_Parms
	{
		AStaticMeshActor* StaticMeshActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \\deprecated Removes previously added static geometry from the projection surface. This method is deprecated in favour of \\ref RemoveStaticSurfaceGeometry().\n\x09 * @param StaticMeshActor The actor with the static geometry to be removed.\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use RemoveStaticSurfaceGeometry instead" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\deprecated Removes previously added static geometry from the projection surface. This method is deprecated in favour of \\ref RemoveStaticSurfaceGeometry().\n@param StaticMeshActor The actor with the static geometry to be removed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveSurfaceGeometry constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveSurfaceGeometry constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveSurfaceGeometry Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventRemoveSurfaceGeometry_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveSurfaceGeometry Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "RemoveSurfaceGeometry", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughLayerComponent_eventRemoveSurfaceGeometry_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughLayerComponent_eventRemoveSurfaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execRemoveSurfaceGeometry)
{
	P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSurfaceGeometry(Z_Param_StaticMeshActor);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughLayerComponent Function RemoveSurfaceGeometry **********

// ********** Begin Class UOculusXRPassthroughLayerComponent ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \\deprecated UOculusXRPassthroughLayerComponent is deprecated, use persistent passthrough instead.\n * See https://developers.meta.com/horizon/documentation/unreal/unreal-persistent-passthrough/ for more details.\n *\n * @brief A component which defines reusable passthrough behavior that can be added to different types of Actors.\n *\n * The Passthrough API enables you to show the user's real environment in your mixed reality experiences.\n * It offers several options to customize the appearance of passthrough, such as adjusting opacity,\n * highlight salient edges in the image, or control the color reproduction.\n *\n * @see https://developers.meta.com/horizon/documentation/unreal/unreal-passthrough-overview/ to learn more about passthrough and its features\n * @see https://developers.meta.com/horizon/documentation/unreal/unreal-passthrough-tutorial/ to create a simple app which uses passthrough\n * @see https://developers.meta.com/horizon/documentation/unreal/unreal-persistent-passthrough to learn more about persistent passthrough\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Trigger PhysicsVolume" },
		{ "IncludePath", "OculusXRPassthroughLayerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\deprecated UOculusXRPassthroughLayerComponent is deprecated, use persistent passthrough instead.\nSee https://developers.meta.com/horizon/documentation/unreal/unreal-persistent-passthrough/ for more details.\n\n@brief A component which defines reusable passthrough behavior that can be added to different types of Actors.\n\nThe Passthrough API enables you to show the user's real environment in your mixed reality experiences.\nIt offers several options to customize the appearance of passthrough, such as adjusting opacity,\nhighlight salient edges in the image, or control the color reproduction.\n\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-passthrough-overview/ to learn more about passthrough and its features\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-passthrough-tutorial/ to create a simple app which uses passthrough\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-persistent-passthrough to learn more about persistent passthrough" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLayerResumed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Occurs when current passthrough layer has been rendered and presented on the HMD screen for the first time after being restarted.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Occurs when current passthrough layer has been rendered and presented on the HMD screen for the first time after being restarted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassthroughComponentMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRPassthroughLayerComponent constinit property declarations *******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLayerResumed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PassthroughComponentMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PassthroughComponentMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PassthroughComponentMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRPassthroughLayerComponent constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddProceduralSurfaceGeometry"), .Pointer = &UOculusXRPassthroughLayerComponent::execAddProceduralSurfaceGeometry },
		{ .NameUTF8 = UTF8TEXT("AddStaticSurfaceGeometry"), .Pointer = &UOculusXRPassthroughLayerComponent::execAddStaticSurfaceGeometry },
		{ .NameUTF8 = UTF8TEXT("AddSurfaceGeometry"), .Pointer = &UOculusXRPassthroughLayerComponent::execAddSurfaceGeometry },
		{ .NameUTF8 = UTF8TEXT("IsSurfaceGeometry"), .Pointer = &UOculusXRPassthroughLayerComponent::execIsSurfaceGeometry },
		{ .NameUTF8 = UTF8TEXT("IsSurfaceGeometryComponent"), .Pointer = &UOculusXRPassthroughLayerComponent::execIsSurfaceGeometryComponent },
		{ .NameUTF8 = UTF8TEXT("MarkPassthroughStyleForUpdate"), .Pointer = &UOculusXRPassthroughLayerComponent::execMarkPassthroughStyleForUpdate },
		{ .NameUTF8 = UTF8TEXT("OnAnyLayerResumedEvent"), .Pointer = &UOculusXRPassthroughLayerComponent::execOnAnyLayerResumedEvent },
		{ .NameUTF8 = UTF8TEXT("RemoveProceduralSurfaceGeometry"), .Pointer = &UOculusXRPassthroughLayerComponent::execRemoveProceduralSurfaceGeometry },
		{ .NameUTF8 = UTF8TEXT("RemoveStaticSurfaceGeometry"), .Pointer = &UOculusXRPassthroughLayerComponent::execRemoveStaticSurfaceGeometry },
		{ .NameUTF8 = UTF8TEXT("RemoveSurfaceGeometry"), .Pointer = &UOculusXRPassthroughLayerComponent::execRemoveSurfaceGeometry },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry, "AddProceduralSurfaceGeometry" }, // 6cf2907fc8a0ea7e48378a3bd9ce23299255b9e7
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry, "AddStaticSurfaceGeometry" }, // 4b22671cdef72cdae0c6173edca5235ce1cebf39
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry, "AddSurfaceGeometry" }, // dbcd5a42f23109d32d8fe58f96004dc0a023fa22
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry, "IsSurfaceGeometry" }, // 02c86e858f989e9eea2738c472f9bf6690ca2485
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent, "IsSurfaceGeometryComponent" }, // 2808bde7da651d2d791803836b2716b7462d52f1
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate, "MarkPassthroughStyleForUpdate" }, // fc0dfb3c5c66e299ff56bae58795b9595215c7a9
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_OnAnyLayerResumedEvent, "OnAnyLayerResumedEvent" }, // c0bf91a20178a77d34bcd644686a80553714c0e4
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry, "RemoveProceduralSurfaceGeometry" }, // 2db16c1d7b3920e5dfefcd3b4212f717cee053fb
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry, "RemoveStaticSurfaceGeometry" }, // 0dffae4b6ea1bb3601e8ec59bc097256896470fd
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry, "RemoveSurfaceGeometry" }, // e76bd9f447b7ec02a68a8a91efea17e9db635861
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPassthroughLayerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRPassthroughLayerComponent Property Definitions ******************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnLayerResumed = { "OnLayerResumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerComponent, OnLayerResumed), Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLayerResumed_MetaData), NewProp_OnLayerResumed_MetaData) }; // 2d7af1979ff280f435e329d892d9a4b12e304593
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PassthroughComponentMap_ValueProp = { "PassthroughComponentMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PassthroughComponentMap_Key_KeyProp = { "PassthroughComponentMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_PassthroughComponentMap = { "PassthroughComponentMap", nullptr, (EPropertyFlags)0x0020088000002008, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerComponent, PassthroughComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassthroughComponentMap_MetaData), NewProp_PassthroughComponentMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnLayerResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PassthroughComponentMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PassthroughComponentMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PassthroughComponentMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRPassthroughLayerComponent Property Definitions ********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UStereoLayerComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRPassthroughLayerComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRPassthroughLayerComponent_StaticRegisterNativesUOculusXRPassthroughLayerComponent()
{
	UClass* Class = UOculusXRPassthroughLayerComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent;
UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRPassthroughLayerComponent;
		if (!Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRPassthroughLayerComponent"),
				Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.InnerSingleton,
				UOculusXRPassthroughLayerComponent_StaticRegisterNativesUOculusXRPassthroughLayerComponent,
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
		return Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRPassthroughLayerComponent);
UOculusXRPassthroughLayerComponent::~UOculusXRPassthroughLayerComponent() {}
// ********** End Class UOculusXRPassthroughLayerComponent *****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h__Script_OculusXRPassthrough_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPassthroughLayerBase, TEXT("UOculusXRPassthroughLayerBase"), &Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPassthroughLayerBase), 1713785558U) },
		{ Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed, TEXT("UOculusXRStereoLayerShapeReconstructed"), &Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRStereoLayerShapeReconstructed), 1092427490U) },
		{ Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined, TEXT("UOculusXRStereoLayerShapeUserDefined"), &Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRStereoLayerShapeUserDefined), 474953445U) },
		{ Z_Construct_UClass_UOculusXRPassthroughLayerComponent, TEXT("UOculusXRPassthroughLayerComponent"), &Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPassthroughLayerComponent), 476869924U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h__Script_OculusXRPassthrough_59b4ef2f06ae5636246a6f33545e61f8b7290dd2{
	TEXT("/Script/OculusXRPassthrough"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
