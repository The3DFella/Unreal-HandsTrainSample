// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRPassthroughLayerShapes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRPassthroughLayerShapes() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder(ETypeConstructPhase);
OCULUSXRHMD_API UFunction* Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOculusXRPassthrough_LayerResumed *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerShapes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXRPassthrough_LayerResumed constinit property declarations *****
// ********** End Delegate FOculusXRPassthrough_LayerResumed constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD, nullptr, "OculusXRPassthrough_LayerResumed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXRPassthrough_LayerResumed ***************************************

// ********** Begin Enum EOculusXRColorMapType *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRColorMapType>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ColorMapType_ColorAdjustment.Comment", "/** Adjust brightness and contrast */" },
		{ "ColorMapType_ColorAdjustment.DisplayName", "Color Adjustment" },
		{ "ColorMapType_ColorAdjustment.Name", "ColorMapType_ColorAdjustment" },
		{ "ColorMapType_ColorAdjustment.ToolTip", "Adjust brightness and contrast" },
		{ "ColorMapType_ColorLut.Comment", "/** Apply a color look-up table (LUT), which maps each RGB input color into an arbitrary RGB(A) in the passthrough image stream */" },
		{ "ColorMapType_ColorLut.DisplayName", "Color LUT" },
		{ "ColorMapType_ColorLut.Name", "ColorMapType_ColorLut" },
		{ "ColorMapType_ColorLut.ToolTip", "Apply a color look-up table (LUT), which maps each RGB input color into an arbitrary RGB(A) in the passthrough image stream" },
		{ "ColorMapType_ColorLut_Interpolated.Comment", "/** Apply the blend between two color LUTs to the passthrough image stream. */" },
		{ "ColorMapType_ColorLut_Interpolated.DisplayName", "Interpolated Color LUT" },
		{ "ColorMapType_ColorLut_Interpolated.Name", "ColorMapType_ColorLut_Interpolated" },
		{ "ColorMapType_ColorLut_Interpolated.ToolTip", "Apply the blend between two color LUTs to the passthrough image stream." },
		{ "ColorMapType_Grayscale.Comment", "/** Map input color to a grayscale color, optionally with brightness/constrast adjustment or posterization applied */" },
		{ "ColorMapType_Grayscale.DisplayName", "Grayscale" },
		{ "ColorMapType_Grayscale.Name", "ColorMapType_Grayscale" },
		{ "ColorMapType_Grayscale.ToolTip", "Map input color to a grayscale color, optionally with brightness/constrast adjustment or posterization applied" },
		{ "ColorMapType_GrayscaleToColor.Comment", "/** Map input color to an RGB color, optionally with brightness/constrast adjustment or posterization applied */" },
		{ "ColorMapType_GrayscaleToColor.DisplayName", "Grayscale To Color" },
		{ "ColorMapType_GrayscaleToColor.Name", "ColorMapType_GrayscaleToColor" },
		{ "ColorMapType_GrayscaleToColor.ToolTip", "Map input color to an RGB color, optionally with brightness/constrast adjustment or posterization applied" },
		{ "ColorMapType_MAX.Name", "ColorMapType_MAX" },
		{ "ColorMapType_None.Comment", "/** No color map is applied */" },
		{ "ColorMapType_None.DisplayName", "None" },
		{ "ColorMapType_None.Name", "ColorMapType_None" },
		{ "ColorMapType_None.ToolTip", "No color map is applied" },
		{ "Comment", "/**\n * The color mapping technique which can be applied to a passthrough layer.\n * @see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-color-mapping/ for more details.\n */" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerShapes.h" },
		{ "ToolTip", "The color mapping technique which can be applied to a passthrough layer.\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-color-mapping/ for more details." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ColorMapType_None", (int64)ColorMapType_None },
		{ "ColorMapType_GrayscaleToColor", (int64)ColorMapType_GrayscaleToColor },
		{ "ColorMapType_Grayscale", (int64)ColorMapType_Grayscale },
		{ "ColorMapType_ColorAdjustment", (int64)ColorMapType_ColorAdjustment },
		{ "ColorMapType_ColorLut", (int64)ColorMapType_ColorLut },
		{ "ColorMapType_ColorLut_Interpolated", (int64)ColorMapType_ColorLut_Interpolated },
		{ "ColorMapType_MAX", (int64)ColorMapType_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRColorMapType",
	"EOculusXRColorMapType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRColorMapType;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRColorMapType.OuterSingleton)
		{
			ZRIE_EOculusXRColorMapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRColorMapType"));
		}
		return ZRIE_EOculusXRColorMapType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRColorMapType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRColorMapType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRColorMapType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRColorMapType *******************************************************

// ********** Begin Enum EOculusXRPassthroughLayerOrder ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRPassthroughLayerOrder>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerShapes.h" },
		{ "PassthroughLayerOrder_MAX.Name", "PassthroughLayerOrder_MAX" },
		{ "PassthroughLayerOrder_Overlay.Comment", "/** Layer is rendered on top of scene */" },
		{ "PassthroughLayerOrder_Overlay.DisplayName", "Overlay" },
		{ "PassthroughLayerOrder_Overlay.Name", "PassthroughLayerOrder_Overlay" },
		{ "PassthroughLayerOrder_Overlay.ToolTip", "Layer is rendered on top of scene" },
		{ "PassthroughLayerOrder_Underlay.Comment", "/** Layer is rendered under scene */" },
		{ "PassthroughLayerOrder_Underlay.DisplayName", "Underlay" },
		{ "PassthroughLayerOrder_Underlay.Name", "PassthroughLayerOrder_Underlay" },
		{ "PassthroughLayerOrder_Underlay.ToolTip", "Layer is rendered under scene" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PassthroughLayerOrder_Overlay", (int64)PassthroughLayerOrder_Overlay },
		{ "PassthroughLayerOrder_Underlay", (int64)PassthroughLayerOrder_Underlay },
		{ "PassthroughLayerOrder_MAX", (int64)PassthroughLayerOrder_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRPassthroughLayerOrder",
	"EOculusXRPassthroughLayerOrder",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRPassthroughLayerOrder;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRPassthroughLayerOrder.OuterSingleton)
		{
			ZRIE_EOculusXRPassthroughLayerOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRPassthroughLayerOrder"));
		}
		return ZRIE_EOculusXRPassthroughLayerOrder.OuterSingleton;
	}
	if (!ZRIE_EOculusXRPassthroughLayerOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRPassthroughLayerOrder.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRPassthroughLayerOrder.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRPassthroughLayerOrder **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h__Script_OculusXRHMD_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType, TEXT("EOculusXRColorMapType"), &ZRIE_EOculusXRColorMapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2193768334U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder, TEXT("EOculusXRPassthroughLayerOrder"), &ZRIE_EOculusXRPassthroughLayerOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3354506609U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h__Script_OculusXRHMD_f6525e566ce09ce61adc7c32ada50f5028f03f59{
	TEXT("/Script/OculusXRHMD"),
	nullptr, 0,
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
