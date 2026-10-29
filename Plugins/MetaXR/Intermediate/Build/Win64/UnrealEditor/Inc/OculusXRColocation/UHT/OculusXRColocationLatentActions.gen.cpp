// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocationLatentActions.h"
#include "OculusXRColocationSession.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRColocationLatentActions() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRColocation(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRColocationSession(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
		TArray<FOculusXRColocationSession> FoundSessions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundSessions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete constinit property declarations 
	static void NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoundSessions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundSessions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete Property Definitions 
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms, Session), Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // e0a36d59f2e401b0d26efcfd0831602f57e8ffb0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FoundSessions_Inner = { "FoundSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(0, nullptr) }; // e0a36d59f2e401b0d26efcfd0831602f57e8ffb0
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FoundSessions = { "FoundSessions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms, FoundSessions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundSessions_MetaData), NewProp_FoundSessions_MetaData) }; // e0a36d59f2e401b0d26efcfd0831602f57e8ffb0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Session,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FoundSessions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FoundSessions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete Property Definitions *
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation, nullptr, "OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete **********************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationSessionFound *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
		TArray<FOculusXRColocationSession> FoundSessions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundSessions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXR_LatentAction_ColocationSessionFound constinit property declarations 
	static void NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoundSessions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundSessions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusXR_LatentAction_ColocationSessionFound constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusXR_LatentAction_ColocationSessionFound Property Definitions ****
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms, Session), Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // e0a36d59f2e401b0d26efcfd0831602f57e8ffb0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FoundSessions_Inner = { "FoundSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(0, nullptr) }; // e0a36d59f2e401b0d26efcfd0831602f57e8ffb0
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FoundSessions = { "FoundSessions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms, FoundSessions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundSessions_MetaData), NewProp_FoundSessions_MetaData) }; // e0a36d59f2e401b0d26efcfd0831602f57e8ffb0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Session,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FoundSessions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FoundSessions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusXR_LatentAction_ColocationSessionFound Property Definitions ******
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation, nullptr, "OculusXR_LatentAction_ColocationSessionFound__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXR_LatentAction_ColocationSessionFound ***************************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted constinit property declarations 
	static void NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted Property Definitions 
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms, Session), Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // e0a36d59f2e401b0d26efcfd0831602f57e8ffb0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Session,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted Property Definitions 
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation, nullptr, "OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted *******************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms
	{
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped constinit property declarations 
	static void NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped Property Definitions 
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped Property Definitions 
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation, nullptr, "OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped *******************

// ********** Begin Class UOculusXRAsyncAction_DiscoverColocationSessions Function OculusXRAsyncDiscoverColocationSessions 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics
struct UHT_STATICS
{
	struct OculusXRAsyncAction_DiscoverColocationSessions_eventOculusXRAsyncDiscoverColocationSessions_Parms
	{
		UOculusXRAsyncAction_DiscoverColocationSessions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OculusXRAsyncDiscoverColocationSessions constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OculusXRAsyncDiscoverColocationSessions constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OculusXRAsyncDiscoverColocationSessions Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_DiscoverColocationSessions_eventOculusXRAsyncDiscoverColocationSessions_Parms, ReturnValue), Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OculusXRAsyncDiscoverColocationSessions Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions, nullptr, "OculusXRAsyncDiscoverColocationSessions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAsyncAction_DiscoverColocationSessions_eventOculusXRAsyncDiscoverColocationSessions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAsyncAction_DiscoverColocationSessions_eventOculusXRAsyncDiscoverColocationSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAsyncAction_DiscoverColocationSessions::execOculusXRAsyncDiscoverColocationSessions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRAsyncAction_DiscoverColocationSessions**)Z_Param__Result=UOculusXRAsyncAction_DiscoverColocationSessions::OculusXRAsyncDiscoverColocationSessions();
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_DiscoverColocationSessions Function OculusXRAsyncDiscoverColocationSessions 

// ********** Begin Class UOculusXRAsyncAction_DiscoverColocationSessions **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// Find sessions\n//\n" },
#endif
		{ "IncludePath", "OculusXRColocationLatentActions.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find sessions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionFound_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRAsyncAction_DiscoverColocationSessions constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionFound;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRAsyncAction_DiscoverColocationSessions constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OculusXRAsyncDiscoverColocationSessions"), .Pointer = &UOculusXRAsyncAction_DiscoverColocationSessions::execOculusXRAsyncDiscoverColocationSessions },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions, "OculusXRAsyncDiscoverColocationSessions" }, // e85e88727fe02540d24bf6110d69ff3cd4058dc6
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncAction_DiscoverColocationSessions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRAsyncAction_DiscoverColocationSessions Property Definitions *****
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_SessionFound = { "SessionFound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_DiscoverColocationSessions, SessionFound), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionFound_MetaData), NewProp_SessionFound_MetaData) }; // da5eb98ae5492372d47c36291edd6223c083fe94
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_DiscoverColocationSessions, OnComplete), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 78f0001aa7d8e601e44128b7ae5edce1c1d26266
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRAsyncAction_DiscoverColocationSessions Property Definitions *******
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions,
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
static void UOculusXRAsyncAction_DiscoverColocationSessions_StaticRegisterNativesUOculusXRAsyncAction_DiscoverColocationSessions()
{
	UClass* Class = UOculusXRAsyncAction_DiscoverColocationSessions::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions;
UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRAsyncAction_DiscoverColocationSessions;
		if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRAsyncAction_DiscoverColocationSessions"),
				Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.InnerSingleton,
				UOculusXRAsyncAction_DiscoverColocationSessions_StaticRegisterNativesUOculusXRAsyncAction_DiscoverColocationSessions,
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
		return Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRAsyncAction_DiscoverColocationSessions::UOculusXRAsyncAction_DiscoverColocationSessions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRAsyncAction_DiscoverColocationSessions);
UOculusXRAsyncAction_DiscoverColocationSessions::~UOculusXRAsyncAction_DiscoverColocationSessions() {}
// ********** End Class UOculusXRAsyncAction_DiscoverColocationSessions ****************************

// ********** Begin Class UOculusXRAsyncAction_StartColocationSessionAdvertisement Function OculusXRAsyncStartColocationSessionAdvertisement 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics
struct UHT_STATICS
{
	struct OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms
	{
		TArray<uint8> SessionData;
		UOculusXRAsyncAction_StartColocationSessionAdvertisement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OculusXRAsyncStartColocationSessionAdvertisement constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OculusXRAsyncStartColocationSessionAdvertisement constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OculusXRAsyncStartColocationSessionAdvertisement Property Definitions *
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SessionData_Inner = { "SessionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SessionData = { "SessionData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms, SessionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionData_MetaData), NewProp_SessionData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms, ReturnValue), Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OculusXRAsyncStartColocationSessionAdvertisement Property Definitions ***
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement, nullptr, "OculusXRAsyncStartColocationSessionAdvertisement", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAsyncAction_StartColocationSessionAdvertisement::execOculusXRAsyncStartColocationSessionAdvertisement)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_SessionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRAsyncAction_StartColocationSessionAdvertisement**)Z_Param__Result=UOculusXRAsyncAction_StartColocationSessionAdvertisement::OculusXRAsyncStartColocationSessionAdvertisement(Z_Param_Out_SessionData);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_StartColocationSessionAdvertisement Function OculusXRAsyncStartColocationSessionAdvertisement 

// ********** Begin Class UOculusXRAsyncAction_StartColocationSessionAdvertisement *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// Start advertisement\n//\n" },
#endif
		{ "IncludePath", "OculusXRColocationLatentActions.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start advertisement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRAsyncAction_StartColocationSessionAdvertisement constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRAsyncAction_StartColocationSessionAdvertisement constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OculusXRAsyncStartColocationSessionAdvertisement"), .Pointer = &UOculusXRAsyncAction_StartColocationSessionAdvertisement::execOculusXRAsyncStartColocationSessionAdvertisement },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement, "OculusXRAsyncStartColocationSessionAdvertisement" }, // 924857e21eafb85854c220749adff29c4336a6ef
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncAction_StartColocationSessionAdvertisement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRAsyncAction_StartColocationSessionAdvertisement Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_StartColocationSessionAdvertisement, OnComplete), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 4abb1358edb212fc75d9d415c981715ab077001c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRAsyncAction_StartColocationSessionAdvertisement Property Definitions 
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement,
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
static void UOculusXRAsyncAction_StartColocationSessionAdvertisement_StaticRegisterNativesUOculusXRAsyncAction_StartColocationSessionAdvertisement()
{
	UClass* Class = UOculusXRAsyncAction_StartColocationSessionAdvertisement::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement;
UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRAsyncAction_StartColocationSessionAdvertisement;
		if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRAsyncAction_StartColocationSessionAdvertisement"),
				Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.InnerSingleton,
				UOculusXRAsyncAction_StartColocationSessionAdvertisement_StaticRegisterNativesUOculusXRAsyncAction_StartColocationSessionAdvertisement,
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
		return Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRAsyncAction_StartColocationSessionAdvertisement::UOculusXRAsyncAction_StartColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRAsyncAction_StartColocationSessionAdvertisement);
UOculusXRAsyncAction_StartColocationSessionAdvertisement::~UOculusXRAsyncAction_StartColocationSessionAdvertisement() {}
// ********** End Class UOculusXRAsyncAction_StartColocationSessionAdvertisement *******************

// ********** Begin Class UOculusXRAsyncAction_StopColocationSessionAdvertisement Function OculusXRAsyncStopColocationSessionAdvertisement 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics
struct UHT_STATICS
{
	struct OculusXRAsyncAction_StopColocationSessionAdvertisement_eventOculusXRAsyncStopColocationSessionAdvertisement_Parms
	{
		UOculusXRAsyncAction_StopColocationSessionAdvertisement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OculusXRAsyncStopColocationSessionAdvertisement constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OculusXRAsyncStopColocationSessionAdvertisement constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OculusXRAsyncStopColocationSessionAdvertisement Property Definitions **
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_StopColocationSessionAdvertisement_eventOculusXRAsyncStopColocationSessionAdvertisement_Parms, ReturnValue), Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OculusXRAsyncStopColocationSessionAdvertisement Property Definitions ****
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement, nullptr, "OculusXRAsyncStopColocationSessionAdvertisement", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAsyncAction_StopColocationSessionAdvertisement_eventOculusXRAsyncStopColocationSessionAdvertisement_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAsyncAction_StopColocationSessionAdvertisement_eventOculusXRAsyncStopColocationSessionAdvertisement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAsyncAction_StopColocationSessionAdvertisement::execOculusXRAsyncStopColocationSessionAdvertisement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRAsyncAction_StopColocationSessionAdvertisement**)Z_Param__Result=UOculusXRAsyncAction_StopColocationSessionAdvertisement::OculusXRAsyncStopColocationSessionAdvertisement();
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_StopColocationSessionAdvertisement Function OculusXRAsyncStopColocationSessionAdvertisement 

// ********** Begin Class UOculusXRAsyncAction_StopColocationSessionAdvertisement ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// Stop advertisement\n//\n" },
#endif
		{ "IncludePath", "OculusXRColocationLatentActions.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop advertisement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRAsyncAction_StopColocationSessionAdvertisement constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRAsyncAction_StopColocationSessionAdvertisement constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OculusXRAsyncStopColocationSessionAdvertisement"), .Pointer = &UOculusXRAsyncAction_StopColocationSessionAdvertisement::execOculusXRAsyncStopColocationSessionAdvertisement },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement, "OculusXRAsyncStopColocationSessionAdvertisement" }, // dc980b5001d7596dc3020600011dc27139d2429b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncAction_StopColocationSessionAdvertisement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRAsyncAction_StopColocationSessionAdvertisement Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_StopColocationSessionAdvertisement, OnComplete), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 6aa4cf9d4ed093aa57194cbc6193b70b6f431be8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRAsyncAction_StopColocationSessionAdvertisement Property Definitions 
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement,
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
static void UOculusXRAsyncAction_StopColocationSessionAdvertisement_StaticRegisterNativesUOculusXRAsyncAction_StopColocationSessionAdvertisement()
{
	UClass* Class = UOculusXRAsyncAction_StopColocationSessionAdvertisement::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement;
UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRAsyncAction_StopColocationSessionAdvertisement;
		if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRAsyncAction_StopColocationSessionAdvertisement"),
				Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.InnerSingleton,
				UOculusXRAsyncAction_StopColocationSessionAdvertisement_StaticRegisterNativesUOculusXRAsyncAction_StopColocationSessionAdvertisement,
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
		return Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRAsyncAction_StopColocationSessionAdvertisement::UOculusXRAsyncAction_StopColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRAsyncAction_StopColocationSessionAdvertisement);
UOculusXRAsyncAction_StopColocationSessionAdvertisement::~UOculusXRAsyncAction_StopColocationSessionAdvertisement() {}
// ********** End Class UOculusXRAsyncAction_StopColocationSessionAdvertisement ********************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h__Script_OculusXRColocation_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions, TEXT("UOculusXRAsyncAction_DiscoverColocationSessions"), &Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncAction_DiscoverColocationSessions), 2483204700U) },
		{ Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement, TEXT("UOculusXRAsyncAction_StartColocationSessionAdvertisement"), &Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncAction_StartColocationSessionAdvertisement), 4029406598U) },
		{ Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement, TEXT("UOculusXRAsyncAction_StopColocationSessionAdvertisement"), &Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncAction_StopColocationSessionAdvertisement), 2524886612U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h__Script_OculusXRColocation_70261f49adb72138104d6ea8e852dfa1948895b5{
	TEXT("/Script/OculusXRColocation"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
