// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAnchorBPFunctionLibrary.h"
#include "OculusXRAnchorTypes.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorBPFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APawn(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function AnchorHandleToString ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms
	{
		FOculusXRUInt64 Value;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "FOculusXRUInt64 To String" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AnchorHandleToString constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AnchorHandleToString constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AnchorHandleToString Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms, Value), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AnchorHandleToString Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "AnchorHandleToString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execAnchorHandleToString)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::AnchorHandleToString(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function AnchorHandleToString *************

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function AnchorUUIDToString *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms
	{
		FOculusXRUUID Value;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "FOculusXRUUID To String" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AnchorUUIDToString constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AnchorUUIDToString constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AnchorUUIDToString Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms, Value), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AnchorUUIDToString Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "AnchorUUIDToString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execAnchorUUIDToString)
{
	P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::AnchorUUIDToString(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function AnchorUUIDToString ***************

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function GetAnchorComponent *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms
	{
		FOculusXRSpaceQueryResult QueryResult;
		EOculusXRSpaceComponentType ComponentType;
		UObject* Outer;
		const UOculusXRBaseAnchorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAnchorComponent constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAnchorComponent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAnchorComponent Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_QueryResult = { "QueryResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms, QueryResult), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryResult_MetaData), NewProp_QueryResult_MetaData) }; // 47853c1019241d7af73b7ae23b9a2f320ca2a473
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms, ComponentType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 6d84567b9d77c8d30b7001f875ec87f709dae647
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms, Outer), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms, ReturnValue), Z_Construct_UClass_UOculusXRBaseAnchorComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QueryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAnchorComponent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "GetAnchorComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execGetAnchorComponent)
{
	P_GET_STRUCT_REF(FOculusXRSpaceQueryResult,Z_Param_Out_QueryResult);
	P_GET_ENUM(EOculusXRSpaceComponentType,Z_Param_ComponentType);
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UOculusXRBaseAnchorComponent**)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::GetAnchorComponent(Z_Param_Out_QueryResult,EOculusXRSpaceComponentType(Z_Param_ComponentType),Z_Param_Outer);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function GetAnchorComponent ***************

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function GetAnchorComponentStatus *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms
	{
		AActor* TargetActor;
		EOculusXRSpaceComponentType ComponentType;
		bool bIsEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAnchorComponentStatus constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
	static void NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms*)Obj)->bIsEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAnchorComponentStatus constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAnchorComponentStatus Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms, TargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms, ComponentType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 6d84567b9d77c8d30b7001f875ec87f709dae647
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms), &UHT_STATICS::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAnchorComponentStatus Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "GetAnchorComponentStatus", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execGetAnchorComponentStatus)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_ENUM(EOculusXRSpaceComponentType,Z_Param_ComponentType);
	P_GET_UBOOL_REF(Z_Param_Out_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::GetAnchorComponentStatus(Z_Param_TargetActor,EOculusXRSpaceComponentType(Z_Param_ComponentType),Z_Param_Out_bIsEnabled);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function GetAnchorComponentStatus *********

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function GetAnchorTransformByHandle *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms
	{
		FOculusXRUInt64 Handle;
		FTransform OutTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAnchorTransformByHandle constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAnchorTransformByHandle constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAnchorTransformByHandle Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms, Handle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAnchorTransformByHandle Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "GetAnchorTransformByHandle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execGetAnchorTransformByHandle)
{
	P_GET_STRUCT_REF(FOculusXRUInt64,Z_Param_Out_Handle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::GetAnchorTransformByHandle(Z_Param_Out_Handle,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function GetAnchorTransformByHandle *******

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function IsAnchorResultSuccess **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms
	{
		TEnumAsByte<EOculusXRAnchorResult::Type> result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsAnchorResultSuccess constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_result;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsAnchorResultSuccess constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsAnchorResultSuccess Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms, result), Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult, METADATA_PARAMS(0, nullptr) }; // 2491d4b0c2d60dd2d9c8f21a4263df55536abdbf
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsAnchorResultSuccess Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "IsAnchorResultSuccess", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execIsAnchorResultSuccess)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(EOculusXRAnchorResult::Type(Z_Param_result));
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function IsAnchorResultSuccess ************

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function IsEqual_FOculusXRUInt64 ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms
	{
		FOculusXRUInt64 Left;
		FOculusXRUInt64 Right;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "FOculusXRUInt64 equal" },
		{ "Keywords", "equal" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEqual_FOculusXRUInt64 constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEqual_FOculusXRUInt64 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEqual_FOculusXRUInt64 Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms, Left), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms, Right), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsEqual_FOculusXRUInt64 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "IsEqual_FOculusXRUInt64", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execIsEqual_FOculusXRUInt64)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Left);
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::IsEqual_FOculusXRUInt64(Z_Param_Left,Z_Param_Right);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function IsEqual_FOculusXRUInt64 **********

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function IsEqual_FOculusXRUUID **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms
	{
		FOculusXRUUID Left;
		FOculusXRUUID Right;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "FOculusXRUUID equal" },
		{ "Keywords", "equal" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEqual_FOculusXRUUID constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEqual_FOculusXRUUID constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEqual_FOculusXRUUID Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms, Left), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms, Right), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsEqual_FOculusXRUUID Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "IsEqual_FOculusXRUUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execIsEqual_FOculusXRUUID)
{
	P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_Left);
	P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::IsEqual_FOculusXRUUID(Z_Param_Out_Left,Z_Param_Out_Right);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function IsEqual_FOculusXRUUID ************

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function SpawnActorWithAnchorHandle *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms
	{
		UObject* WorldContextObject;
		FOculusXRUInt64 Handle;
		FOculusXRUUID UUID;
		EOculusXRSpaceStorageLocation AnchorLocation;
		UClass* ActorClass;
		AActor* Owner;
		APawn* Instigator;
		ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "DisplayName", "Spawn Oculus Anchor Actor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnActorWithAnchorHandle constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnchorLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnchorLocation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnActorWithAnchorHandle constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnActorWithAnchorHandle Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, Handle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, UUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AnchorLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AnchorLocation = { "AnchorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, AnchorLocation), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(0, nullptr) }; // 920cba6c998c206f10bef9da516f98d1e7e6f8f4
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, Owner), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, Instigator), Z_Construct_UClass_APawn, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CollisionHandlingMethod = { "CollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, CollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 303fe92b4ce98d7392b1a3e3d5888de1426ebbd4
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionHandlingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionHandlingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnActorWithAnchorHandle Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "SpawnActorWithAnchorHandle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execSpawnActorWithAnchorHandle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Handle);
	P_GET_STRUCT(FOculusXRUUID,Z_Param_UUID);
	P_GET_ENUM(EOculusXRSpaceStorageLocation,Z_Param_AnchorLocation);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(APawn,Z_Param_Instigator);
	P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::SpawnActorWithAnchorHandle(Z_Param_WorldContextObject,Z_Param_Handle,Z_Param_UUID,EOculusXRSpaceStorageLocation(Z_Param_AnchorLocation),Z_Param_ActorClass,Z_Param_Owner,Z_Param_Instigator,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingMethod));
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function SpawnActorWithAnchorHandle *******

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function SpawnActorWithAnchorQueryResults 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms
	{
		UObject* WorldContextObject;
		FOculusXRSpaceQueryResult QueryResult;
		UClass* ActorClass;
		AActor* Owner;
		APawn* Instigator;
		ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "DisplayName", "Spawn Oculus Anchor Actor From Query" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnActorWithAnchorQueryResults constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryResult;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnActorWithAnchorQueryResults constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnActorWithAnchorQueryResults Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_QueryResult = { "QueryResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, QueryResult), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryResult_MetaData), NewProp_QueryResult_MetaData) }; // 47853c1019241d7af73b7ae23b9a2f320ca2a473
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, Owner), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, Instigator), Z_Construct_UClass_APawn, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CollisionHandlingMethod = { "CollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, CollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 303fe92b4ce98d7392b1a3e3d5888de1426ebbd4
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QueryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionHandlingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionHandlingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnActorWithAnchorQueryResults Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "SpawnActorWithAnchorQueryResults", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execSpawnActorWithAnchorQueryResults)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FOculusXRSpaceQueryResult,Z_Param_Out_QueryResult);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(APawn,Z_Param_Instigator);
	P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::SpawnActorWithAnchorQueryResults(Z_Param_WorldContextObject,Z_Param_Out_QueryResult,Z_Param_ActorClass,Z_Param_Owner,Z_Param_Instigator,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingMethod));
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function SpawnActorWithAnchorQueryResults *

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function StringToAnchorUUID *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms
	{
		FString Value;
		FOculusXRUUID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StringToAnchorUUID constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StringToAnchorUUID constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StringToAnchorUUID Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StringToAnchorUUID Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "StringToAnchorUUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execStringToAnchorUUID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOculusXRUUID*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::StringToAnchorUUID(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function StringToAnchorUUID ***************

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary Function TryGetAnchorTransformByHandle **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_TryGetAnchorTransformByHandle_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms
	{
		FOculusXRUInt64 Handle;
		FTransform OutTransform;
		FOculusXRAnchorLocationFlags OutLocationFlags;
		EOculusXRAnchorSpace Space;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try to get the anchors transform. The transform may not always be a available.\n\x09 *\n\x09 * @param Handle The Anchor handle.\n\x09 * @param OutTransform (out) The anchors transform.\n\x09 * @param OutLocationFlags (out) The location flags.\n\x09 * @param Space The space in which this transform should be returned.\n\x09 *\n\x09 * @return Whether or not the transform could be retrieved.\n\x09 */" },
#endif
		{ "CPP_Default_Space", "World" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to get the anchors transform. The transform may not always be a available.\n\n@param Handle The Anchor handle.\n@param OutTransform (out) The anchors transform.\n@param OutLocationFlags (out) The location flags.\n@param Space The space in which this transform should be returned.\n\n@return Whether or not the transform could be retrieved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetAnchorTransformByHandle constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocationFlags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetAnchorTransformByHandle constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetAnchorTransformByHandle Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms, Handle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutLocationFlags = { "OutLocationFlags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms, OutLocationFlags), Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags, METADATA_PARAMS(0, nullptr) }; // 0a5bfd932a7b8235dda0a692139d8d27ee188aba
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms, Space), Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace, METADATA_PARAMS(0, nullptr) }; // c46105f3f87e047aa5a8b0c38d955fede7c91384
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutLocationFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetAnchorTransformByHandle Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "TryGetAnchorTransformByHandle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorBPFunctionLibrary_eventTryGetAnchorTransformByHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_TryGetAnchorTransformByHandle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execTryGetAnchorTransformByHandle)
{
	P_GET_STRUCT_REF(FOculusXRUInt64,Z_Param_Out_Handle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_GET_STRUCT_REF(FOculusXRAnchorLocationFlags,Z_Param_Out_OutLocationFlags);
	P_GET_ENUM(EOculusXRAnchorSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::TryGetAnchorTransformByHandle(Z_Param_Out_Handle,Z_Param_Out_OutTransform,Z_Param_Out_OutLocationFlags,EOculusXRAnchorSpace(Z_Param_Space));
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorBPFunctionLibrary Function TryGetAnchorTransformByHandle ****

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper\n" },
#endif
		{ "IncludePath", "OculusXRAnchorBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRAnchorBPFunctionLibrary constinit property declarations *********
// ********** End Class UOculusXRAnchorBPFunctionLibrary constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AnchorHandleToString"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execAnchorHandleToString },
		{ .NameUTF8 = UTF8TEXT("AnchorUUIDToString"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execAnchorUUIDToString },
		{ .NameUTF8 = UTF8TEXT("GetAnchorComponent"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execGetAnchorComponent },
		{ .NameUTF8 = UTF8TEXT("GetAnchorComponentStatus"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execGetAnchorComponentStatus },
		{ .NameUTF8 = UTF8TEXT("GetAnchorTransformByHandle"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execGetAnchorTransformByHandle },
		{ .NameUTF8 = UTF8TEXT("IsAnchorResultSuccess"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execIsAnchorResultSuccess },
		{ .NameUTF8 = UTF8TEXT("IsEqual_FOculusXRUInt64"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execIsEqual_FOculusXRUInt64 },
		{ .NameUTF8 = UTF8TEXT("IsEqual_FOculusXRUUID"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execIsEqual_FOculusXRUUID },
		{ .NameUTF8 = UTF8TEXT("SpawnActorWithAnchorHandle"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execSpawnActorWithAnchorHandle },
		{ .NameUTF8 = UTF8TEXT("SpawnActorWithAnchorQueryResults"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execSpawnActorWithAnchorQueryResults },
		{ .NameUTF8 = UTF8TEXT("StringToAnchorUUID"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execStringToAnchorUUID },
		{ .NameUTF8 = UTF8TEXT("TryGetAnchorTransformByHandle"), .Pointer = &UOculusXRAnchorBPFunctionLibrary::execTryGetAnchorTransformByHandle },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString, "AnchorHandleToString" }, // 1831bcd0e2721e58790cf7376604d733ef800767
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString, "AnchorUUIDToString" }, // 102b97a416fd245d4c0036ea26981e68d894f82b
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent, "GetAnchorComponent" }, // 3a1ecc010c0e7c1ddc1d21288a11c82e31ed615a
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus, "GetAnchorComponentStatus" }, // ebf9d624949d70cb096ee4be2878f8448c0a2ee0
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle, "GetAnchorTransformByHandle" }, // 39ef2fd740a7d7949bfabd5199c5bda6e4ff2704
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess, "IsAnchorResultSuccess" }, // fd3b208febc98f1e860d360ab149c46847e8b67a
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64, "IsEqual_FOculusXRUInt64" }, // 467ae91f6fea9f17e1d15df4f2ab001f26dcdd67
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID, "IsEqual_FOculusXRUUID" }, // acc86673f1c41ab35cbe5c4045737b8313e7371d
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle, "SpawnActorWithAnchorHandle" }, // bb68d599f124d9c362689c5e906ddba20a6b7528
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults, "SpawnActorWithAnchorQueryResults" }, // 32f4655c8120762f8b4ddec03462aa1cf2a9ed07
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID, "StringToAnchorUUID" }, // 08a39c4b9092402017b42a98b95aa49f369ec7b7
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_TryGetAnchorTransformByHandle, "TryGetAnchorTransformByHandle" }, // 95049d99c3cab82f3b0bca15ac7c576989383bb6
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAnchorBPFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRAnchorBPFunctionLibrary_StaticRegisterNativesUOculusXRAnchorBPFunctionLibrary()
{
	UClass* Class = UOculusXRAnchorBPFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary;
UClass* Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRAnchorBPFunctionLibrary;
		if (!Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRAnchorBPFunctionLibrary"),
				Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.InnerSingleton,
				UOculusXRAnchorBPFunctionLibrary_StaticRegisterNativesUOculusXRAnchorBPFunctionLibrary,
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
		return Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRAnchorBPFunctionLibrary::UOculusXRAnchorBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRAnchorBPFunctionLibrary);
UOculusXRAnchorBPFunctionLibrary::~UOculusXRAnchorBPFunctionLibrary() {}
// ********** End Class UOculusXRAnchorBPFunctionLibrary *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorBPFunctionLibrary_h__Script_OculusXRAnchors_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, TEXT("UOculusXRAnchorBPFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAnchorBPFunctionLibrary), 2852115122U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorBPFunctionLibrary_h__Script_OculusXRAnchors_2f55dfe0a04378fff67b98bf524ef498c6e860da{
	TEXT("/Script/OculusXRAnchors"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
