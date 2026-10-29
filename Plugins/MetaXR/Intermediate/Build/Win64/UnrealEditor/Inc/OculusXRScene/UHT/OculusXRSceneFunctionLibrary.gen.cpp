// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSceneFunctionLibrary.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase);
OCULUSXRSCENE_API UEnum* Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRSceneFunctionLibrary Function GetBoundaryVisibility *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetBoundaryVisibility_Statics
struct UHT_STATICS
{
	struct OculusXRSceneFunctionLibrary_eventGetBoundaryVisibility_Parms
	{
		const UObject* WorldContext;
		EOculusXRBoundaryVisibility OutVisibility;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current boundary visibility\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRSceneFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current boundary visibility" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoundaryVisibility constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutVisibility;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSceneFunctionLibrary_eventGetBoundaryVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoundaryVisibility constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoundaryVisibility Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetBoundaryVisibility_Parms, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutVisibility = { "OutVisibility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetBoundaryVisibility_Parms, OutVisibility), Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility, METADATA_PARAMS(0, nullptr) }; // be99088bfb3fccc8ba6c49837e47a16096d2fcd0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSceneFunctionLibrary_eventGetBoundaryVisibility_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBoundaryVisibility Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRSceneFunctionLibrary, nullptr, "GetBoundaryVisibility", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneFunctionLibrary_eventGetBoundaryVisibility_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneFunctionLibrary_eventGetBoundaryVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetBoundaryVisibility(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRSceneFunctionLibrary::execGetBoundaryVisibility)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_ENUM_REF(EOculusXRBoundaryVisibility,Z_Param_Out_OutVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRSceneFunctionLibrary::GetBoundaryVisibility(Z_Param_WorldContext,(EOculusXRBoundaryVisibility&)(Z_Param_Out_OutVisibility));
	P_NATIVE_END;
}
// ********** End Class UOculusXRSceneFunctionLibrary Function GetBoundaryVisibility ***************

// ********** Begin Class UOculusXRSceneFunctionLibrary Function GetRequestedBoundaryVisibility ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRequestedBoundaryVisibility_Statics
struct UHT_STATICS
{
	struct OculusXRSceneFunctionLibrary_eventGetRequestedBoundaryVisibility_Parms
	{
		const UObject* WorldContext;
		EOculusXRBoundaryVisibility OutVisibility;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the requested boundary visibility state\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRSceneFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the requested boundary visibility state" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRequestedBoundaryVisibility constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutVisibility;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSceneFunctionLibrary_eventGetRequestedBoundaryVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRequestedBoundaryVisibility constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRequestedBoundaryVisibility Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetRequestedBoundaryVisibility_Parms, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutVisibility = { "OutVisibility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetRequestedBoundaryVisibility_Parms, OutVisibility), Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility, METADATA_PARAMS(0, nullptr) }; // be99088bfb3fccc8ba6c49837e47a16096d2fcd0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSceneFunctionLibrary_eventGetRequestedBoundaryVisibility_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRequestedBoundaryVisibility Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRSceneFunctionLibrary, nullptr, "GetRequestedBoundaryVisibility", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneFunctionLibrary_eventGetRequestedBoundaryVisibility_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneFunctionLibrary_eventGetRequestedBoundaryVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRequestedBoundaryVisibility(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRSceneFunctionLibrary::execGetRequestedBoundaryVisibility)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_ENUM_REF(EOculusXRBoundaryVisibility,Z_Param_Out_OutVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRSceneFunctionLibrary::GetRequestedBoundaryVisibility(Z_Param_WorldContext,(EOculusXRBoundaryVisibility&)(Z_Param_Out_OutVisibility));
	P_NATIVE_END;
}
// ********** End Class UOculusXRSceneFunctionLibrary Function GetRequestedBoundaryVisibility ******

// ********** Begin Class UOculusXRSceneFunctionLibrary Function GetRoomLabel **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRoomLabel_Statics
struct UHT_STATICS
{
	struct OculusXRSceneFunctionLibrary_eventGetRoomLabel_Parms
	{
		FOculusXRUInt64 AnchorHandle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// metaxr_redact_ifdef OVR_INTERNAL_CODE // XR_META_room_entity_info\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRSceneFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "metaxr_redact_ifdef OVR_INTERNAL_CODE  XR_META_room_entity_info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomLabel constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomLabel constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomLabel Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AnchorHandle = { "AnchorHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetRoomLabel_Parms, AnchorHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorHandle_MetaData), NewProp_AnchorHandle_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetRoomLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoomLabel Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRSceneFunctionLibrary, nullptr, "GetRoomLabel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneFunctionLibrary_eventGetRoomLabel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneFunctionLibrary_eventGetRoomLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRoomLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRSceneFunctionLibrary::execGetRoomLabel)
{
	P_GET_STRUCT_REF(FOculusXRUInt64,Z_Param_Out_AnchorHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOculusXRSceneFunctionLibrary::GetRoomLabel(Z_Param_Out_AnchorHandle);
	P_NATIVE_END;
}
// ********** End Class UOculusXRSceneFunctionLibrary Function GetRoomLabel ************************

// ********** Begin Class UOculusXRSceneFunctionLibrary Function GetRoomLayout *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRoomLayout_Statics
struct UHT_STATICS
{
	struct OculusXRSceneFunctionLibrary_eventGetRoomLayout_Parms
	{
		FOculusXRUInt64 AnchorHandle;
		FOculusXRRoomLayout RoomLayoutOut;
		int32 MaxWallsCapacity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room layout for the specified anchor handle that contains a RoomLayout component\n" },
#endif
		{ "CPP_Default_MaxWallsCapacity", "64" },
		{ "ModuleRelativePath", "Public/OculusXRSceneFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room layout for the specified anchor handle that contains a RoomLayout component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomLayout constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayoutOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWallsCapacity;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSceneFunctionLibrary_eventGetRoomLayout_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomLayout constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomLayout Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AnchorHandle = { "AnchorHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetRoomLayout_Parms, AnchorHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomLayoutOut = { "RoomLayoutOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetRoomLayout_Parms, RoomLayoutOut), Z_Construct_UScriptStruct_FOculusXRRoomLayout, METADATA_PARAMS(0, nullptr) }; // 14f9f9ea3873ab538f6a0cceac92dfa0949fc1d4
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxWallsCapacity = { "MaxWallsCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventGetRoomLayout_Parms, MaxWallsCapacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSceneFunctionLibrary_eventGetRoomLayout_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayoutOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxWallsCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoomLayout Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRSceneFunctionLibrary, nullptr, "GetRoomLayout", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneFunctionLibrary_eventGetRoomLayout_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneFunctionLibrary_eventGetRoomLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRoomLayout(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRSceneFunctionLibrary::execGetRoomLayout)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_AnchorHandle);
	P_GET_STRUCT_REF(FOculusXRRoomLayout,Z_Param_Out_RoomLayoutOut);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxWallsCapacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRSceneFunctionLibrary::GetRoomLayout(Z_Param_AnchorHandle,Z_Param_Out_RoomLayoutOut,Z_Param_MaxWallsCapacity);
	P_NATIVE_END;
}
// ********** End Class UOculusXRSceneFunctionLibrary Function GetRoomLayout ***********************

// ********** Begin Class UOculusXRSceneFunctionLibrary Function RequestBoundaryVisibility *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_RequestBoundaryVisibility_Statics
struct UHT_STATICS
{
	struct OculusXRSceneFunctionLibrary_eventRequestBoundaryVisibility_Parms
	{
		const UObject* WorldContext;
		EOculusXRBoundaryVisibility NewVisibilityRequest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requests to change the current boundary visibility\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRSceneFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests to change the current boundary visibility" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestBoundaryVisibility constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewVisibilityRequest_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewVisibilityRequest;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSceneFunctionLibrary_eventRequestBoundaryVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestBoundaryVisibility constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestBoundaryVisibility Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventRequestBoundaryVisibility_Parms, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewVisibilityRequest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewVisibilityRequest = { "NewVisibilityRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneFunctionLibrary_eventRequestBoundaryVisibility_Parms, NewVisibilityRequest), Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility, METADATA_PARAMS(0, nullptr) }; // be99088bfb3fccc8ba6c49837e47a16096d2fcd0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSceneFunctionLibrary_eventRequestBoundaryVisibility_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewVisibilityRequest_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewVisibilityRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RequestBoundaryVisibility Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRSceneFunctionLibrary, nullptr, "RequestBoundaryVisibility", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneFunctionLibrary_eventRequestBoundaryVisibility_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneFunctionLibrary_eventRequestBoundaryVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_RequestBoundaryVisibility(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRSceneFunctionLibrary::execRequestBoundaryVisibility)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_ENUM(EOculusXRBoundaryVisibility,Z_Param_NewVisibilityRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRSceneFunctionLibrary::RequestBoundaryVisibility(Z_Param_WorldContext,EOculusXRBoundaryVisibility(Z_Param_NewVisibilityRequest));
	P_NATIVE_END;
}
// ********** End Class UOculusXRSceneFunctionLibrary Function RequestBoundaryVisibility ***********

// ********** Begin Class UOculusXRSceneFunctionLibrary ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "OculusXRSceneFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSceneFunctionLibrary constinit property declarations ************
// ********** End Class UOculusXRSceneFunctionLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBoundaryVisibility"), .Pointer = &UOculusXRSceneFunctionLibrary::execGetBoundaryVisibility },
		{ .NameUTF8 = UTF8TEXT("GetRequestedBoundaryVisibility"), .Pointer = &UOculusXRSceneFunctionLibrary::execGetRequestedBoundaryVisibility },
		{ .NameUTF8 = UTF8TEXT("GetRoomLabel"), .Pointer = &UOculusXRSceneFunctionLibrary::execGetRoomLabel },
		{ .NameUTF8 = UTF8TEXT("GetRoomLayout"), .Pointer = &UOculusXRSceneFunctionLibrary::execGetRoomLayout },
		{ .NameUTF8 = UTF8TEXT("RequestBoundaryVisibility"), .Pointer = &UOculusXRSceneFunctionLibrary::execRequestBoundaryVisibility },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetBoundaryVisibility, "GetBoundaryVisibility" }, // 3f40991285743a6892e98c65460f29238c90a590
		{ &Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRequestedBoundaryVisibility, "GetRequestedBoundaryVisibility" }, // eba95cfe74ec0c2d43dc3c51adc9640e525fc6b5
		{ &Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRoomLabel, "GetRoomLabel" }, // 3b95753bb4df6d49137e7da4403518ed8bd2940c
		{ &Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_GetRoomLayout, "GetRoomLayout" }, // e8c9b834a793e16334dd7e5c805ef7d4568a35df
		{ &Z_Construct_UFunction_UOculusXRSceneFunctionLibrary_RequestBoundaryVisibility, "RequestBoundaryVisibility" }, // 62a48c0515395997d42de57064fa66fc9bd26977
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSceneFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRSceneFunctionLibrary,
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
static void UOculusXRSceneFunctionLibrary_StaticRegisterNativesUOculusXRSceneFunctionLibrary()
{
	UClass* Class = UOculusXRSceneFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary;
UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRSceneFunctionLibrary;
		if (!Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRSceneFunctionLibrary"),
				Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.InnerSingleton,
				UOculusXRSceneFunctionLibrary_StaticRegisterNativesUOculusXRSceneFunctionLibrary,
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
		return Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRSceneFunctionLibrary::UOculusXRSceneFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSceneFunctionLibrary);
UOculusXRSceneFunctionLibrary::~UOculusXRSceneFunctionLibrary() {}
// ********** End Class UOculusXRSceneFunctionLibrary **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h__Script_OculusXRScene_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSceneFunctionLibrary, TEXT("UOculusXRSceneFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSceneFunctionLibrary), 1372281453U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h__Script_OculusXRScene_42490c0330eca1fb7559055f7923558a96c71ba6{
	TEXT("/Script/OculusXRScene"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
