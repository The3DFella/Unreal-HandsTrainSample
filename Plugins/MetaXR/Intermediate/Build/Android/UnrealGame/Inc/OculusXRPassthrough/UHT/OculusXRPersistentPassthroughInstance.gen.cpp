// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRPersistentPassthroughInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRPersistentPassthroughInstance() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder(ETypeConstructPhase);
OCULUSXRHMD_API UFunction* Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LayerResumed_Single__DelegateSignature(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPersistentPassthroughInstance(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPersistentPassthroughInstance(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOculusXRPassthrough_LayerResumed_Single ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LayerResumed_Single__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXRPassthrough_LayerResumed_Single constinit property declarations 
// ********** End Delegate FOculusXRPassthrough_LayerResumed_Single constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough, nullptr, "OculusXRPassthrough_LayerResumed_Single__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LayerResumed_Single__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXRPassthrough_LayerResumed_Single ********************************

// ********** Begin ScriptStruct FOculusXRPersistentPassthroughParameters **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRPersistentPassthroughParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRPersistentPassthroughParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DisableSplitPin", "" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_LayerOrder_MetaData[] = {
		{ "Comment", "// These properties are all the ones from UOculusXRStereoLayerShapeReconstructed.\n" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
		{ "ToolTip", "These properties are all the ones from UOculusXRStereoLayerShapeReconstructed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_TextureOpacityFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_bEnableEdgeColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_EdgeColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_bEnableColorMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_ColorMapType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_bUseColorMapCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_ColorMapCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_Contrast_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_Brightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_Posterize_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_Saturation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_LutWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_ColorLUTSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_ColorLUTTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_ColorScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempShape_ColorOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRPersistentPassthroughParameters constinit property declarations 
	static void NewProp_bVisible_SetBit(void* Obj)
	{
		((FOculusXRPersistentPassthroughParameters*)Obj)->bVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TempShape_LayerOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TempShape_TextureOpacityFactor;
	static void NewProp_TempShape_bEnableEdgeColor_SetBit(void* Obj)
	{
		((FOculusXRPersistentPassthroughParameters*)Obj)->TempShape_bEnableEdgeColor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TempShape_bEnableEdgeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TempShape_EdgeColor;
	static void NewProp_TempShape_bEnableColorMap_SetBit(void* Obj)
	{
		((FOculusXRPersistentPassthroughParameters*)Obj)->TempShape_bEnableColorMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TempShape_bEnableColorMap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TempShape_ColorMapType;
	static void NewProp_TempShape_bUseColorMapCurve_SetBit(void* Obj)
	{
		((FOculusXRPersistentPassthroughParameters*)Obj)->TempShape_bUseColorMapCurve = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TempShape_bUseColorMapCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TempShape_ColorMapCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TempShape_Contrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TempShape_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TempShape_Posterize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TempShape_Saturation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TempShape_LutWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TempShape_ColorLUTSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TempShape_ColorLUTTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TempShape_ColorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TempShape_ColorOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRPersistentPassthroughParameters constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRPersistentPassthroughParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRPersistentPassthroughParameters Property Definitions *****
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRPersistentPassthroughParameters), &UHT_STATICS::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x011600000208001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, Shape), Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TempShape_LayerOrder = { "TempShape_LayerOrder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_LayerOrder), Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_LayerOrder_MetaData), NewProp_TempShape_LayerOrder_MetaData) }; // c7f1b57188acd6251ccc7640997bc210b2f2fab0
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TempShape_TextureOpacityFactor = { "TempShape_TextureOpacityFactor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_TextureOpacityFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_TextureOpacityFactor_MetaData), NewProp_TempShape_TextureOpacityFactor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_TempShape_bEnableEdgeColor = { "TempShape_bEnableEdgeColor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRPersistentPassthroughParameters), &UHT_STATICS::NewProp_TempShape_bEnableEdgeColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_bEnableEdgeColor_MetaData), NewProp_TempShape_bEnableEdgeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TempShape_EdgeColor = { "TempShape_EdgeColor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_EdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_EdgeColor_MetaData), NewProp_TempShape_EdgeColor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_TempShape_bEnableColorMap = { "TempShape_bEnableColorMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRPersistentPassthroughParameters), &UHT_STATICS::NewProp_TempShape_bEnableColorMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_bEnableColorMap_MetaData), NewProp_TempShape_bEnableColorMap_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TempShape_ColorMapType = { "TempShape_ColorMapType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_ColorMapType), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_ColorMapType_MetaData), NewProp_TempShape_ColorMapType_MetaData) }; // 82c23f8e672fd79b0b621c686c025efde8589673
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_TempShape_bUseColorMapCurve = { "TempShape_bUseColorMapCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRPersistentPassthroughParameters), &UHT_STATICS::NewProp_TempShape_bUseColorMapCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_bUseColorMapCurve_MetaData), NewProp_TempShape_bUseColorMapCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TempShape_ColorMapCurve = { "TempShape_ColorMapCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_ColorMapCurve), Z_Construct_UClass_UCurveLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_ColorMapCurve_MetaData), NewProp_TempShape_ColorMapCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TempShape_Contrast = { "TempShape_Contrast", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_Contrast_MetaData), NewProp_TempShape_Contrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TempShape_Brightness = { "TempShape_Brightness", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_Brightness_MetaData), NewProp_TempShape_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TempShape_Posterize = { "TempShape_Posterize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_Posterize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_Posterize_MetaData), NewProp_TempShape_Posterize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TempShape_Saturation = { "TempShape_Saturation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_Saturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_Saturation_MetaData), NewProp_TempShape_Saturation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TempShape_LutWeight = { "TempShape_LutWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_LutWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_LutWeight_MetaData), NewProp_TempShape_LutWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TempShape_ColorLUTSource = { "TempShape_ColorLUTSource", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_ColorLUTSource), Z_Construct_UClass_UOculusXRPassthroughColorLut, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_ColorLUTSource_MetaData), NewProp_TempShape_ColorLUTSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TempShape_ColorLUTTarget = { "TempShape_ColorLUTTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_ColorLUTTarget), Z_Construct_UClass_UOculusXRPassthroughColorLut, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_ColorLUTTarget_MetaData), NewProp_TempShape_ColorLUTTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TempShape_ColorScale = { "TempShape_ColorScale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_ColorScale_MetaData), NewProp_TempShape_ColorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TempShape_ColorOffset = { "TempShape_ColorOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPersistentPassthroughParameters, TempShape_ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempShape_ColorOffset_MetaData), NewProp_TempShape_ColorOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_LayerOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_TextureOpacityFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_bEnableEdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_EdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_bEnableColorMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_ColorMapType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_bUseColorMapCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_ColorMapCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_Posterize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_Saturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_LutWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_ColorLUTSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_ColorLUTTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_ColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempShape_ColorOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRPersistentPassthroughParameters Property Definitions *******
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
	nullptr,
	&NewStructOps,
	"OculusXRPersistentPassthroughParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRPersistentPassthroughParameters>(),
	alignof(FOculusXRPersistentPassthroughParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRPersistentPassthroughParameters;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRPersistentPassthroughParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRPersistentPassthroughParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters, (UObject*)Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase::Outer), TEXT("OculusXRPersistentPassthroughParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRPersistentPassthroughParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRPersistentPassthroughParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRPersistentPassthroughParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRPersistentPassthroughParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRPersistentPassthroughParameters ****************************

// ********** Begin Class UOculusXRPersistentPassthroughInstance Function GetPriority **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_GetPriority_Statics
struct UHT_STATICS
{
	struct OculusXRPersistentPassthroughInstance_eventGetPriority_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPriority constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPriority constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPriority Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPersistentPassthroughInstance_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPriority Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, nullptr, "GetPriority", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPersistentPassthroughInstance_eventGetPriority_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPersistentPassthroughInstance_eventGetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_GetPriority(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPersistentPassthroughInstance::execGetPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPriority();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPersistentPassthroughInstance Function GetPriority ****************

// ********** Begin Class UOculusXRPersistentPassthroughInstance Function GetShape *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_GetShape_Statics
struct UHT_STATICS
{
	struct OculusXRPersistentPassthroughInstance_eventGetShape_Parms
	{
		UOculusXRStereoLayerShapeReconstructed* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetShape constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetShape constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetShape Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPersistentPassthroughInstance_eventGetShape_Parms, ReturnValue), Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetShape Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, nullptr, "GetShape", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPersistentPassthroughInstance_eventGetShape_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPersistentPassthroughInstance_eventGetShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_GetShape(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPersistentPassthroughInstance::execGetShape)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRStereoLayerShapeReconstructed**)Z_Param__Result=P_THIS->GetShape();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPersistentPassthroughInstance Function GetShape *******************

// ********** Begin Class UOculusXRPersistentPassthroughInstance Function IsVisible ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_IsVisible_Statics
struct UHT_STATICS
{
	struct OculusXRPersistentPassthroughInstance_eventIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsVisible constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPersistentPassthroughInstance_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsVisible constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsVisible Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPersistentPassthroughInstance_eventIsVisible_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsVisible Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, nullptr, "IsVisible", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPersistentPassthroughInstance_eventIsVisible_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPersistentPassthroughInstance_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_IsVisible(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPersistentPassthroughInstance::execIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible();
	P_NATIVE_END;
}
// ********** End Class UOculusXRPersistentPassthroughInstance Function IsVisible ******************

// ********** Begin Class UOculusXRPersistentPassthroughInstance Function OnAnyLayerResumedEvent ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_OnAnyLayerResumedEvent_Statics
struct UHT_STATICS
{
	struct OculusXRPersistentPassthroughInstance_eventOnAnyLayerResumedEvent_Parms
	{
		int32 InLayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnAnyLayerResumedEvent constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnAnyLayerResumedEvent constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnAnyLayerResumedEvent Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InLayerId = { "InLayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPersistentPassthroughInstance_eventOnAnyLayerResumedEvent_Parms, InLayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLayerId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnAnyLayerResumedEvent Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, nullptr, "OnAnyLayerResumedEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPersistentPassthroughInstance_eventOnAnyLayerResumedEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPersistentPassthroughInstance_eventOnAnyLayerResumedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_OnAnyLayerResumedEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPersistentPassthroughInstance::execOnAnyLayerResumedEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyLayerResumedEvent(Z_Param_InLayerId);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPersistentPassthroughInstance Function OnAnyLayerResumedEvent *****

// ********** Begin Class UOculusXRPersistentPassthroughInstance Function SetPriority **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_SetPriority_Statics
struct UHT_STATICS
{
	struct OculusXRPersistentPassthroughInstance_eventSetPriority_Parms
	{
		int32 InPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPriority constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPriority constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPriority Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPersistentPassthroughInstance_eventSetPriority_Parms, InPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPriority,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPriority Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, nullptr, "SetPriority", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPersistentPassthroughInstance_eventSetPriority_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPersistentPassthroughInstance_eventSetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_SetPriority(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPersistentPassthroughInstance::execSetPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPriority(Z_Param_InPriority);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPersistentPassthroughInstance Function SetPriority ****************

// ********** Begin Class UOculusXRPersistentPassthroughInstance Function SetVisible ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_SetVisible_Statics
struct UHT_STATICS
{
	struct OculusXRPersistentPassthroughInstance_eventSetVisible_Parms
	{
		bool InVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough|Persistent" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVisible constinit property declarations ****************************
	static void NewProp_InVisible_SetBit(void* Obj)
	{
		((OculusXRPersistentPassthroughInstance_eventSetVisible_Parms*)Obj)->InVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVisible constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVisible Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPersistentPassthroughInstance_eventSetVisible_Parms), &UHT_STATICS::NewProp_InVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InVisible,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetVisible Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, nullptr, "SetVisible", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPersistentPassthroughInstance_eventSetVisible_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPersistentPassthroughInstance_eventSetVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_SetVisible(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPersistentPassthroughInstance::execSetVisible)
{
	P_GET_UBOOL(Z_Param_InVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisible(Z_Param_InVisible);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPersistentPassthroughInstance Function SetVisible *****************

// ********** Begin Class UOculusXRPersistentPassthroughInstance ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRPersistentPassthroughInstance_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRPersistentPassthroughInstance.h" },
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLayerResumed_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPersistentPassthroughInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRPersistentPassthroughInstance constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLayerResumed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRPersistentPassthroughInstance constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPriority"), .Pointer = &UOculusXRPersistentPassthroughInstance::execGetPriority },
		{ .NameUTF8 = UTF8TEXT("GetShape"), .Pointer = &UOculusXRPersistentPassthroughInstance::execGetShape },
		{ .NameUTF8 = UTF8TEXT("IsVisible"), .Pointer = &UOculusXRPersistentPassthroughInstance::execIsVisible },
		{ .NameUTF8 = UTF8TEXT("OnAnyLayerResumedEvent"), .Pointer = &UOculusXRPersistentPassthroughInstance::execOnAnyLayerResumedEvent },
		{ .NameUTF8 = UTF8TEXT("SetPriority"), .Pointer = &UOculusXRPersistentPassthroughInstance::execSetPriority },
		{ .NameUTF8 = UTF8TEXT("SetVisible"), .Pointer = &UOculusXRPersistentPassthroughInstance::execSetVisible },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_GetPriority, "GetPriority" }, // 526ee556fee757d760d9fd823ce2d19e0e59f23b
		{ &Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_GetShape, "GetShape" }, // eebadc83adc32e57d6557efd504dc7e9692022e8
		{ &Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_IsVisible, "IsVisible" }, // b4dbb2d743ac9478bb6aa9e33d7ee54c698adcd9
		{ &Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_OnAnyLayerResumedEvent, "OnAnyLayerResumedEvent" }, // 211d8cf1f46c48a25c2d48f5bfeee8496268d526
		{ &Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_SetPriority, "SetPriority" }, // 43f268335e4d37dda458fcfdedb1674b894bfca2
		{ &Z_Construct_UFunction_UOculusXRPersistentPassthroughInstance_SetVisible, "SetVisible" }, // 3e61d5ffb157afabf36bd23577f09ca358c7de30
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPersistentPassthroughInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRPersistentPassthroughInstance Property Definitions **************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPersistentPassthroughInstance, Parameters), Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // b5649aea41103dd7e4fc54d1598dc2a247a61a3e
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnLayerResumed = { "OnLayerResumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPersistentPassthroughInstance, OnLayerResumed), Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLayerResumed_MetaData), NewProp_OnLayerResumed_MetaData) }; // 2d7af1979ff280f435e329d892d9a4b12e304593
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnLayerResumed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRPersistentPassthroughInstance Property Definitions ****************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRPersistentPassthroughInstance,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRPersistentPassthroughInstance_StaticRegisterNativesUOculusXRPersistentPassthroughInstance()
{
	UClass* Class = UOculusXRPersistentPassthroughInstance::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPersistentPassthroughInstance;
UClass* Z_Construct_UClass_UOculusXRPersistentPassthroughInstance(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRPersistentPassthroughInstance;
		if (!Z_Registration_Info_UClass_UOculusXRPersistentPassthroughInstance.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRPersistentPassthroughInstance"),
				Z_Registration_Info_UClass_UOculusXRPersistentPassthroughInstance.InnerSingleton,
				UOculusXRPersistentPassthroughInstance_StaticRegisterNativesUOculusXRPersistentPassthroughInstance,
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
		return Z_Registration_Info_UClass_UOculusXRPersistentPassthroughInstance.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRPersistentPassthroughInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPersistentPassthroughInstance.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPersistentPassthroughInstance.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRPersistentPassthroughInstance);
UOculusXRPersistentPassthroughInstance::~UOculusXRPersistentPassthroughInstance() {}
// ********** End Class UOculusXRPersistentPassthroughInstance *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h__Script_OculusXRPassthrough_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters, Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters_Statics::NewStructOps, TEXT("OculusXRPersistentPassthroughParameters"),&Z_Registration_Info_UScriptStruct_FOculusXRPersistentPassthroughParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRPersistentPassthroughParameters), 3043269354U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPersistentPassthroughInstance, TEXT("UOculusXRPersistentPassthroughInstance"), &Z_Registration_Info_UClass_UOculusXRPersistentPassthroughInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPersistentPassthroughInstance), 2932453127U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h__Script_OculusXRPassthrough_406797cb794e697f3ff8c745ca313dc01b0257b6{
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
