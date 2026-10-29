// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRFaceTrackingComponent.h"
#include "OculusXRMovementTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRFaceTrackingComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRFaceTrackingComponent(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRFaceTrackingComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRFaceTrackingComponent Function ClearExpressionValues ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFaceTrackingComponent_ClearExpressionValues_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|OculusXRFaceTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clears all face expression values.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all face expression values." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearExpressionValues constinit property declarations *****************
// ********** End Function ClearExpressionValues constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFaceTrackingComponent, nullptr, "ClearExpressionValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRFaceTrackingComponent_ClearExpressionValues(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFaceTrackingComponent::execClearExpressionValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearExpressionValues();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFaceTrackingComponent Function ClearExpressionValues **************

// ********** Begin Class UOculusXRFaceTrackingComponent Function GetExpressionValue ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFaceTrackingComponent_GetExpressionValue_Statics
struct UHT_STATICS
{
	struct OculusXRFaceTrackingComponent_eventGetExpressionValue_Parms
	{
		EOculusXRFaceExpression Expression;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|OculusXRFaceTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a face expression value given an expression key.\n\x09 *\n\x09 * @param Expression : The expression key that will be queried.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a face expression value given an expression key.\n\n@param Expression : The expression key that will be queried." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetExpressionValue constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Expression_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExpressionValue constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExpressionValue Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Expression_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFaceTrackingComponent_eventGetExpressionValue_Parms, Expression), Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, METADATA_PARAMS(0, nullptr) }; // c38b43502d2c5b7fa15270355e81daf3b92ca456
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFaceTrackingComponent_eventGetExpressionValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Expression_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Expression,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetExpressionValue Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFaceTrackingComponent, nullptr, "GetExpressionValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFaceTrackingComponent_eventGetExpressionValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFaceTrackingComponent_eventGetExpressionValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFaceTrackingComponent_GetExpressionValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFaceTrackingComponent::execGetExpressionValue)
{
	P_GET_ENUM(EOculusXRFaceExpression,Z_Param_Expression);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExpressionValue(EOculusXRFaceExpression(Z_Param_Expression));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFaceTrackingComponent Function GetExpressionValue *****************

// ********** Begin Class UOculusXRFaceTrackingComponent Function SetExpressionValue ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFaceTrackingComponent_SetExpressionValue_Statics
struct UHT_STATICS
{
	struct OculusXRFaceTrackingComponent_eventSetExpressionValue_Parms
	{
		EOculusXRFaceExpression Expression;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Components|OculusXRFaceTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set face expression value with expression key and value(0-1).\n\x09 *\n\x09 * @param Expression : The expression key that will be modified.\n\x09 * @param Value : The new value to assign to the expression, 0 will remove all changes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set face expression value with expression key and value(0-1).\n\n@param Expression : The expression key that will be modified.\n@param Value : The new value to assign to the expression, 0 will remove all changes." },
#endif
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExpressionValue constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Expression_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExpressionValue constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExpressionValue Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Expression_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFaceTrackingComponent_eventSetExpressionValue_Parms, Expression), Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, METADATA_PARAMS(0, nullptr) }; // c38b43502d2c5b7fa15270355e81daf3b92ca456
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFaceTrackingComponent_eventSetExpressionValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Expression_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Expression,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetExpressionValue Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFaceTrackingComponent, nullptr, "SetExpressionValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFaceTrackingComponent_eventSetExpressionValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFaceTrackingComponent_eventSetExpressionValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFaceTrackingComponent_SetExpressionValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFaceTrackingComponent::execSetExpressionValue)
{
	P_GET_ENUM(EOculusXRFaceExpression,Z_Param_Expression);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExpressionValue(EOculusXRFaceExpression(Z_Param_Expression),Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFaceTrackingComponent Function SetExpressionValue *****************

// ********** Begin Class UOculusXRFaceTrackingComponent *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRFaceTrackingComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
		{ "DisplayName", "OculusXR Face Tracking Component" },
		{ "IncludePath", "OculusXRFaceTrackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponentName_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The name of the skinned mesh component that this component targets for facial expression.\n\x09 * This must be the name of a component on this actor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the skinned mesh component that this component targets for facial expression.\nThis must be the name of a component on this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidFaceDataResetTime_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the face data is invalid for at least this or longer than this time then all face blendshapes/morph targets are reset to zero.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the face data is invalid for at least this or longer than this time then all face blendshapes/morph targets are reset to zero." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNames_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The list of expressions that this component supports.\n\x09 * Names are validated on startup so only valid morph targets on the skeletal mesh will be targeted.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of expressions that this component supports.\nNames are validated on startup so only valid morph targets on the skeletal mesh will be targeted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionModifiers_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * An array of optional expression modifiers that can be applied.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of optional expression modifiers that can be applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateFace_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This flag determines if the face should be updated or not during the components tick.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This flag determines if the face should be updated or not during the components tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseModifiers_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This flag determines if the face should be modified with Expression Modifiers or not during the components tick.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This flag determines if the face should be modified with Expression Modifiers or not during the components tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The mesh component targeted for expressions\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh component targeted for expressions" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRFaceTrackingComponent constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshComponentName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvalidFaceDataResetTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExpressionNames_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExpressionNames_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExpressionNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExpressionNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpressionModifiers;
	static void NewProp_bUpdateFace_SetBit(void* Obj)
	{
		((UOculusXRFaceTrackingComponent*)Obj)->bUpdateFace = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateFace;
	static void NewProp_bUseModifiers_SetBit(void* Obj)
	{
		((UOculusXRFaceTrackingComponent*)Obj)->bUseModifiers = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseModifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRFaceTrackingComponent constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearExpressionValues"), .Pointer = &UOculusXRFaceTrackingComponent::execClearExpressionValues },
		{ .NameUTF8 = UTF8TEXT("GetExpressionValue"), .Pointer = &UOculusXRFaceTrackingComponent::execGetExpressionValue },
		{ .NameUTF8 = UTF8TEXT("SetExpressionValue"), .Pointer = &UOculusXRFaceTrackingComponent::execSetExpressionValue },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRFaceTrackingComponent_ClearExpressionValues, "ClearExpressionValues" }, // 28e0d112750bf542e582ac88a4866e4e006139a2
		{ &Z_Construct_UFunction_UOculusXRFaceTrackingComponent_GetExpressionValue, "GetExpressionValue" }, // 4806cbe0d43821f922615128789c05765c99f9c1
		{ &Z_Construct_UFunction_UOculusXRFaceTrackingComponent_SetExpressionValue, "SetExpressionValue" }, // 35fa76687b42530cc79f1841bcf89d2837591cc4
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRFaceTrackingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRFaceTrackingComponent Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetMeshComponentName = { "TargetMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRFaceTrackingComponent, TargetMeshComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshComponentName_MetaData), NewProp_TargetMeshComponentName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InvalidFaceDataResetTime = { "InvalidFaceDataResetTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRFaceTrackingComponent, InvalidFaceDataResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidFaceDataResetTime_MetaData), NewProp_InvalidFaceDataResetTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ExpressionNames_ValueProp = { "ExpressionNames", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ExpressionNames_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ExpressionNames_Key_KeyProp = { "ExpressionNames_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, METADATA_PARAMS(0, nullptr) }; // c38b43502d2c5b7fa15270355e81daf3b92ca456
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ExpressionNames = { "ExpressionNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRFaceTrackingComponent, ExpressionNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNames_MetaData), NewProp_ExpressionNames_MetaData) }; // c38b43502d2c5b7fa15270355e81daf3b92ca456
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ExpressionModifiers_Inner = { "ExpressionModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier, METADATA_PARAMS(0, nullptr) }; // 4bf2eeea3e07b412f802269bd8b98614741b1c05
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExpressionModifiers = { "ExpressionModifiers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRFaceTrackingComponent, ExpressionModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionModifiers_MetaData), NewProp_ExpressionModifiers_MetaData) }; // 4bf2eeea3e07b412f802269bd8b98614741b1c05
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUpdateFace = { "bUpdateFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRFaceTrackingComponent), &UHT_STATICS::NewProp_bUpdateFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateFace_MetaData), NewProp_bUpdateFace_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseModifiers = { "bUseModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRFaceTrackingComponent), &UHT_STATICS::NewProp_bUseModifiers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseModifiers_MetaData), NewProp_bUseModifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMeshComponent = { "TargetMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRFaceTrackingComponent, TargetMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshComponent_MetaData), NewProp_TargetMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InvalidFaceDataResetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionNames_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUpdateFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRFaceTrackingComponent Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRFaceTrackingComponent,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRFaceTrackingComponent_StaticRegisterNativesUOculusXRFaceTrackingComponent()
{
	UClass* Class = UOculusXRFaceTrackingComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRFaceTrackingComponent;
UClass* Z_Construct_UClass_UOculusXRFaceTrackingComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRFaceTrackingComponent;
		if (!Z_Registration_Info_UClass_UOculusXRFaceTrackingComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRFaceTrackingComponent"),
				Z_Registration_Info_UClass_UOculusXRFaceTrackingComponent.InnerSingleton,
				UOculusXRFaceTrackingComponent_StaticRegisterNativesUOculusXRFaceTrackingComponent,
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
		return Z_Registration_Info_UClass_UOculusXRFaceTrackingComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRFaceTrackingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRFaceTrackingComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRFaceTrackingComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRFaceTrackingComponent);
UOculusXRFaceTrackingComponent::~UOculusXRFaceTrackingComponent() {}
// ********** End Class UOculusXRFaceTrackingComponent *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h__Script_OculusXRMovement_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRFaceTrackingComponent, TEXT("UOculusXRFaceTrackingComponent"), &Z_Registration_Info_UClass_UOculusXRFaceTrackingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRFaceTrackingComponent), 2941649383U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h__Script_OculusXRMovement_0f7ba6cdace60aae6cc6e20c95896c7ad9df6889{
	TEXT("/Script/OculusXRMovement"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
