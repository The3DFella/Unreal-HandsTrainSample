// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRPassthroughColorLut.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRPassthroughColorLut() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UEnum* Z_Construct_UEnum_OculusXRPassthrough_EColorLutType(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FLutTextureData(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FLutTextureData ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FLutTextureData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FLutTextureData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLutTextureData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLutTextureData constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLutTextureData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLutTextureData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FLutTextureData Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FLutTextureData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FLutTextureData, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Resolution,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FLutTextureData Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
	nullptr,
	&NewStructOps,
	"LutTextureData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FLutTextureData>(),
	alignof(FLutTextureData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLutTextureData;
UScriptStruct* Z_Construct_UScriptStruct_FLutTextureData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FLutTextureData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FLutTextureData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLutTextureData, (UObject*)Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase::Outer), TEXT("LutTextureData"));
		}
		return Z_Registration_Info_UScriptStruct_FLutTextureData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FLutTextureData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLutTextureData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLutTextureData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FLutTextureData *****************************************************

// ********** Begin Enum EColorLutType *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics
template<> OCULUSXRPASSTHROUGH_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorLutType>()
{
	return Z_Construct_UEnum_OculusXRPassthrough_EColorLutType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Array.Hidden", "" },
		{ "Array.Name", "EColorLutType::Array" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EColorLutType::None" },
		{ "TextureLUT.DisplayName", "Texture" },
		{ "TextureLUT.Name", "EColorLutType::TextureLUT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EColorLutType::None", (int64)EColorLutType::None },
		{ "EColorLutType::TextureLUT", (int64)EColorLutType::TextureLUT },
		{ "EColorLutType::Array", (int64)EColorLutType::Array },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
	nullptr,
	"EColorLutType",
	"EColorLutType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EColorLutType;
UEnum* Z_Construct_UEnum_OculusXRPassthrough_EColorLutType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EColorLutType.OuterSingleton)
		{
			ZRIE_EColorLutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRPassthrough_EColorLutType, (UObject*)Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase::Outer), TEXT("EColorLutType"));
		}
		return ZRIE_EColorLutType.OuterSingleton;
	}
	if (!ZRIE_EColorLutType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EColorLutType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EColorLutType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EColorLutType ***************************************************************

// ********** Begin Class UOculusXRPassthroughColorLut Function SetLutFromArray ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics
struct UHT_STATICS
{
	struct OculusXRPassthroughColorLut_eventSetLutFromArray_Parms
	{
		TArray<FColor> InColorArray;
		bool InIgnoreAlphaChannel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Passthrough Color LUT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generate color LUT from array. Array should have format of exploded cube. Its size should be power of 2. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate color LUT from array. Array should have format of exploded cube. Its size should be power of 2." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLutFromArray constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InColorArray;
	static void NewProp_InIgnoreAlphaChannel_SetBit(void* Obj)
	{
		((OculusXRPassthroughColorLut_eventSetLutFromArray_Parms*)Obj)->InIgnoreAlphaChannel = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InIgnoreAlphaChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLutFromArray constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLutFromArray Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InColorArray_Inner = { "InColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InColorArray = { "InColorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughColorLut_eventSetLutFromArray_Parms, InColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColorArray_MetaData), NewProp_InColorArray_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_InIgnoreAlphaChannel = { "InIgnoreAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughColorLut_eventSetLutFromArray_Parms), &UHT_STATICS::NewProp_InIgnoreAlphaChannel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InIgnoreAlphaChannel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLutFromArray Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPassthroughColorLut, nullptr, "SetLutFromArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPassthroughColorLut_eventSetLutFromArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPassthroughColorLut_eventSetLutFromArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPassthroughColorLut::execSetLutFromArray)
{
	P_GET_TARRAY_REF(FColor,Z_Param_Out_InColorArray);
	P_GET_UBOOL(Z_Param_InIgnoreAlphaChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLutFromArray(Z_Param_Out_InColorArray,Z_Param_InIgnoreAlphaChannel);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPassthroughColorLut Function SetLutFromArray **********************

// ********** Begin Class UOculusXRPassthroughColorLut *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief This class represents a color look-up table (LUT) that can be applied to an \\ref UOculusXRPassthroughLayerBase\n * in order to change the color reproduction of that passthrough layer.\n *\n * Color LUTs map each RGB input color to a new RGB(A) color. It unlocks a number of effects:\n * - Color grading and color correction\n * - Stylizations, such as posterization or hue rotation\n * - Color filtering and chroma keying.\n *\n * To apply a color LUT to a Passthrough layer, create a new instance of `UOculusXRPassthroughLayerComponent`\n * and call \\ref UOculusXRPassthroughLayerBase::SetColorLUTSource()\"/>.\n *\n * @see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-color-mapping/ to learn more about passthrough and color LUTs.\n */" },
#endif
		{ "DisplayName", "Passthrough Color LUT" },
		{ "IncludePath", "OculusXRPassthroughColorLut.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief This class represents a color look-up table (LUT) that can be applied to an \\ref UOculusXRPassthroughLayerBase\nin order to change the color reproduction of that passthrough layer.\n\nColor LUTs map each RGB input color to a new RGB(A) color. It unlocks a number of effects:\n- Color grading and color correction\n- Stylizations, such as posterization or hue rotation\n- Color filtering and chroma keying.\n\nTo apply a color LUT to a Passthrough layer, create a new instance of `UOculusXRPassthroughLayerComponent`\nand call \\ref UOculusXRPassthroughLayerBase::SetColorLUTSource()\"/>.\n\n@see https://developers.meta.com/horizon/documentation/unreal/unreal-customize-passthrough-color-mapping/ to learn more about passthrough and color LUTs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorLutType_MetaData[] = {
		{ "Category", "Passthrough Color LUT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keeps the information of the source of the current LUT instance. The source can be an array, another LUT texture, or None. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps the information of the source of the current LUT instance. The source can be an array, another LUT texture, or None." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LutTexture_MetaData[] = {
		{ "Category", "Passthrough Color LUT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color LUT texture. */" },
#endif
		{ "EditCondition", "ColorLutType == EColorLutType::TextureLUT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color LUT texture." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreAlphaChannel_MetaData[] = {
		{ "Category", "Passthrough Color LUT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Informs if the alpha channel of LUT should be ignored. */" },
#endif
		{ "EditCondition", "ColorLutType == EColorLutType::TextureLUT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Informs if the alpha channel of LUT should be ignored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredTextureData_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRPassthroughColorLut constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorLutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorLutType;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LutTexture;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_IgnoreAlphaChannel_SetBit(void* Obj)
	{
		((UOculusXRPassthroughColorLut*)Obj)->IgnoreAlphaChannel = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreAlphaChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoredTextureData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRPassthroughColorLut constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetLutFromArray"), .Pointer = &UOculusXRPassthroughColorLut::execSetLutFromArray },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray, "SetLutFromArray" }, // 60db52c0fe417f6e9d77950e94ffb8e9dd3ccac1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPassthroughColorLut>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRPassthroughColorLut Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ColorLutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ColorLutType = { "ColorLutType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughColorLut, ColorLutType), Z_Construct_UEnum_OculusXRPassthrough_EColorLutType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorLutType_MetaData), NewProp_ColorLutType_MetaData) }; // e56dbcb4068f9fff0ec02d75ae40ca91cfcf0bd7
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LutTexture = { "LutTexture", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughColorLut, LutTexture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LutTexture_MetaData), NewProp_LutTexture_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_IgnoreAlphaChannel = { "IgnoreAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPassthroughColorLut), &UHT_STATICS::NewProp_IgnoreAlphaChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreAlphaChannel_MetaData), NewProp_IgnoreAlphaChannel_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StoredTextureData = { "StoredTextureData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughColorLut, StoredTextureData), Z_Construct_UScriptStruct_FLutTextureData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredTextureData_MetaData), NewProp_StoredTextureData_MetaData) }; // 7ef5a941416344afbe1dcfac93f80423c93627b3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorLutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorLutType,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LutTexture,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IgnoreAlphaChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StoredTextureData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRPassthroughColorLut Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRPassthrough,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRPassthroughColorLut,
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
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRPassthroughColorLut_StaticRegisterNativesUOculusXRPassthroughColorLut()
{
	UClass* Class = UOculusXRPassthroughColorLut::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPassthroughColorLut;
UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRPassthroughColorLut;
		if (!Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRPassthroughColorLut"),
				Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.InnerSingleton,
				UOculusXRPassthroughColorLut_StaticRegisterNativesUOculusXRPassthroughColorLut,
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
		return Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRPassthroughColorLut::UOculusXRPassthroughColorLut(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRPassthroughColorLut);
UOculusXRPassthroughColorLut::~UOculusXRPassthroughColorLut() {}
// ********** End Class UOculusXRPassthroughColorLut ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h__Script_OculusXRPassthrough_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRPassthrough_EColorLutType, TEXT("EColorLutType"), &ZRIE_EColorLutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3849174196U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FLutTextureData, Z_Construct_UScriptStruct_FLutTextureData_Statics::NewStructOps, TEXT("LutTextureData"),&Z_Registration_Info_UScriptStruct_FLutTextureData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLutTextureData), 2130028865U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPassthroughColorLut, TEXT("UOculusXRPassthroughColorLut"), &Z_Registration_Info_UClass_UOculusXRPassthroughColorLut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPassthroughColorLut), 3114414827U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h__Script_OculusXRPassthrough_ad1e18744fc721fbad85db7a15e2fb5a17d5fc40{
	TEXT("/Script/OculusXRPassthrough"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
