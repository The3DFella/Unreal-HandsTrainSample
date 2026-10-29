// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitSubsystem.h"
#include "Engine/GameInstance.h"
#include "MRUtilityKit.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycasterStatus(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSubsystem(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTrackableKey(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTrackerConfiguration(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomsShared__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableAdded__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableRemoved__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableUpdated__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackablesConfigured__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSubsystem(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKTrackable(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnLoaded *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnLoaded_Parms
	{
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLoaded constinit property declarations *****************************
	static void NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventOnLoaded_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLoaded constinit property declarations *******************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLoaded Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventOnLoaded_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnLoaded Property Definitions ******************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnLoaded__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnLoaded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnLoaded ***************************************************************

// ********** Begin Delegate FOnCaptureComplete ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnCaptureComplete_Parms
	{
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCaptureComplete constinit property declarations ********************
	static void NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventOnCaptureComplete_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCaptureComplete constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCaptureComplete Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventOnCaptureComplete_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnCaptureComplete Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnCaptureComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnCaptureComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnCaptureComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnCaptureComplete ******************************************************

// ********** Begin Delegate FOnRoomCreated ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnRoomCreated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRoomCreated constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRoomCreated constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRoomCreated Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnRoomCreated_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnRoomCreated Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnRoomCreated__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnRoomCreated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnRoomCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnRoomCreated **********************************************************

// ********** Begin Delegate FOnRoomUpdated ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnRoomUpdated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRoomUpdated constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRoomUpdated constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRoomUpdated Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnRoomUpdated_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnRoomUpdated Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnRoomUpdated__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnRoomUpdated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnRoomUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnRoomUpdated **********************************************************

// ********** Begin Delegate FOnRoomRemoved ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnRoomRemoved_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRoomRemoved constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRoomRemoved constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRoomRemoved Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnRoomRemoved_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnRoomRemoved Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnRoomRemoved__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnRoomRemoved_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnRoomRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnRoomRemoved **********************************************************

// ********** Begin Delegate FOnTrackablesConfigured ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackablesConfigured__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnTrackablesConfigured_Parms
	{
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTrackablesConfigured constinit property declarations ***************
	static void NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventOnTrackablesConfigured_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTrackablesConfigured constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTrackablesConfigured Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventOnTrackablesConfigured_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnTrackablesConfigured Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnTrackablesConfigured__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnTrackablesConfigured_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnTrackablesConfigured_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackablesConfigured__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnTrackablesConfigured *************************************************

// ********** Begin Delegate FOnTrackableAdded *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableAdded__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnTrackableAdded_Parms
	{
		AMRUKTrackable* Trackable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTrackableAdded constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trackable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTrackableAdded constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTrackableAdded Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Trackable = { "Trackable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnTrackableAdded_Parms, Trackable), Z_Construct_UClass_AMRUKTrackable, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Trackable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnTrackableAdded Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnTrackableAdded__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnTrackableAdded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnTrackableAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableAdded__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnTrackableAdded *******************************************************

// ********** Begin Delegate FOnTrackableUpdated ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableUpdated__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnTrackableUpdated_Parms
	{
		AMRUKTrackable* Trackable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTrackableUpdated constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trackable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTrackableUpdated constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTrackableUpdated Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Trackable = { "Trackable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnTrackableUpdated_Parms, Trackable), Z_Construct_UClass_AMRUKTrackable, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Trackable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnTrackableUpdated Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnTrackableUpdated__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnTrackableUpdated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnTrackableUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableUpdated__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnTrackableUpdated *****************************************************

// ********** Begin Delegate FOnTrackableRemoved ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableRemoved__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnTrackableRemoved_Parms
	{
		AMRUKTrackable* Trackable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTrackableRemoved constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trackable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTrackableRemoved constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTrackableRemoved Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Trackable = { "Trackable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnTrackableRemoved_Parms, Trackable), Z_Construct_UClass_AMRUKTrackable, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Trackable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnTrackableRemoved Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnTrackableRemoved__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnTrackableRemoved_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnTrackableRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableRemoved__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnTrackableRemoved *****************************************************

// ********** Begin Delegate FOnRoomsShared ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomsShared__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventOnRoomsShared_Parms
	{
		TEnumAsByte<EOculusXRAnchorResult::Type> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// metaxr_redact_ifdef OVR_PARTNER_CODE // XR_META_spatial_entity_room_sharing\n" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "metaxr_redact_ifdef OVR_PARTNER_CODE  XR_META_spatial_entity_room_sharing" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRoomsShared constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRoomsShared constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRoomsShared Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnRoomsShared_Parms, Result), Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult, METADATA_PARAMS(0, nullptr) }; // 2491d4b0c2d60dd2d9c8f21a4263df55536abdbf
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnRoomsShared Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnRoomsShared__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventOnRoomsShared_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventOnRoomsShared_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomsShared__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnRoomsShared **********************************************************

// ********** Begin Class UMRUKSubsystem Function ClearScene ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_ClearScene_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Removes and clears every room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Removes and clears every room." },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearScene constinit property declarations ****************************
// ********** End Function ClearScene constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "ClearScene", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKSubsystem_ClearScene(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execClearScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearScene();
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function ClearScene *****************************************

// ********** Begin Class UMRUKSubsystem Function ConfigureTrackers ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_ConfigureTrackers_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventConfigureTrackers_Parms
	{
		FMRUKTrackerConfiguration Configuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Configure which types of trackables to track. This enables or disables keyboard and QR code tracking.\n\x09 * @param Configuration The tracker configuration specifying which types of trackables to enable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Configure which types of trackables to track. This enables or disables keyboard and QR code tracking.\n@param Configuration The tracker configuration specifying which types of trackables to enable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConfigureTrackers constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConfigureTrackers constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConfigureTrackers Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventConfigureTrackers_Parms, Configuration), Z_Construct_UScriptStruct_FMRUKTrackerConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configuration_MetaData), NewProp_Configuration_MetaData) }; // 20bbcc5de4a03cbe1cf8a3671ac45a8790dc3fd1
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Configuration,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConfigureTrackers Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "ConfigureTrackers", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventConfigureTrackers_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventConfigureTrackers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_ConfigureTrackers(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execConfigureTrackers)
{
	P_GET_STRUCT_REF(FMRUKTrackerConfiguration,Z_Param_Out_Configuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureTrackers(Z_Param_Out_Configuration);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function ConfigureTrackers **********************************

// ********** Begin Class UMRUKSubsystem Function CreateEnvironmentRaycaster ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_CreateEnvironmentRaycaster_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * This function creates an environment raycaster, which is used to perform raycasting operations\n\x09 * against the device depth. Unlike Raycast() and RaycastAll(), no space setup is required for\n\x09 * performing these raycasts. It initializes the necessary components and resources required for\n\x09 * the raycasting process. The environment raycaster may take a few frames to initialize. During\n\x09 * this time, its status can be checked using the EnvironmentRaycasterStatus() function. Alternatively,\n\x09 * you can directly call RaycastEnvironment(), which will return a status of NotReady if the\n\x09 * raycaster is not yet ready.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "This function creates an environment raycaster, which is used to perform raycasting operations\nagainst the device depth. Unlike Raycast() and RaycastAll(), no space setup is required for\nperforming these raycasts. It initializes the necessary components and resources required for\nthe raycasting process. The environment raycaster may take a few frames to initialize. During\nthis time, its status can be checked using the EnvironmentRaycasterStatus() function. Alternatively,\nyou can directly call RaycastEnvironment(), which will return a status of NotReady if the\nraycaster is not yet ready." },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateEnvironmentRaycaster constinit property declarations ************
// ********** End Function CreateEnvironmentRaycaster constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "CreateEnvironmentRaycaster", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKSubsystem_CreateEnvironmentRaycaster(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execCreateEnvironmentRaycaster)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateEnvironmentRaycaster();
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function CreateEnvironmentRaycaster *************************

// ********** Begin Class UMRUKSubsystem Function DestroyEnvironmentRaycaster **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_DestroyEnvironmentRaycaster_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Destroy the environment raycaster.\n\x09 * This function is responsible for cleaning up and releasing any resources\n\x09 * associated with the environment raycaster. It should be called when the\n\x09 * raycaster is no longer needed to ensure proper resource management and\n\x09 * avoid memory leaks.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Destroy the environment raycaster.\nThis function is responsible for cleaning up and releasing any resources\nassociated with the environment raycaster. It should be called when the\nraycaster is no longer needed to ensure proper resource management and\navoid memory leaks." },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyEnvironmentRaycaster constinit property declarations ***********
// ********** End Function DestroyEnvironmentRaycaster constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "DestroyEnvironmentRaycaster", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKSubsystem_DestroyEnvironmentRaycaster(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execDestroyEnvironmentRaycaster)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyEnvironmentRaycaster();
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function DestroyEnvironmentRaycaster ************************

// ********** Begin Class UMRUKSubsystem Function DisableTrackers **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_DisableTrackers_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Disables and stops all trackers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Disables and stops all trackers." },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableTrackers constinit property declarations ***********************
// ********** End Function DisableTrackers constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "DisableTrackers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKSubsystem_DisableTrackers(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execDisableTrackers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableTrackers();
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function DisableTrackers ************************************

// ********** Begin Class UMRUKSubsystem Function EnvironmentRaycasterStatus ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_EnvironmentRaycasterStatus_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventEnvironmentRaycasterStatus_Parms
	{
		EMRUKEnvironmentRaycasterStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Get the status of the environment raycaster.\n\x09 * This function returns the current status of the environment raycaster,\n\x09 * which indicates whether the raycaster is ready to perform raycasting operations,\n\x09 * is still initializing, or has encountered an error.\n\x09 * @return The current status of the environment raycaster.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Get the status of the environment raycaster.\nThis function returns the current status of the environment raycaster,\nwhich indicates whether the raycaster is ready to perform raycasting operations,\nis still initializing, or has encountered an error.\n@return The current status of the environment raycaster." },
	};
#endif // WITH_METADATA

// ********** Begin Function EnvironmentRaycasterStatus constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnvironmentRaycasterStatus constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnvironmentRaycasterStatus Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventEnvironmentRaycasterStatus_Parms, ReturnValue), Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycasterStatus, METADATA_PARAMS(0, nullptr) }; // d32fae40b35fac393d069d5421be022c87483fac
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnvironmentRaycasterStatus Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "EnvironmentRaycasterStatus", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventEnvironmentRaycasterStatus_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventEnvironmentRaycasterStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_EnvironmentRaycasterStatus(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execEnvironmentRaycasterStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMRUKEnvironmentRaycasterStatus*)Z_Param__Result=P_THIS->EnvironmentRaycasterStatus();
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function EnvironmentRaycasterStatus *************************

// ********** Begin Class UMRUKSubsystem Function GetBestPoseFromRaycast ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_GetBestPoseFromRaycast_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventGetBestPoseFromRaycast_Parms
	{
		FVector RayOrigin;
		FVector RayDirection;
		double MaxDist;
		FMRUKLabelFilter LabelFilter;
		FTransform OutPose;
		EMRUKPositioningMethod PositioningMethod;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Get a suggested pose (position & rotation) from a raycast to place objects on surfaces in the scene.\n\x09 * There are different positioning modes available. Default just uses the position where the raycast\n\x09 * hit the object. Edge snaps the position to the edge that is nearest to the user and Center simply\n\x09 * centers the position on top of the surface.\n\x09 * @param RayOrigin         The origin of the ray.\n\x09 * @param RayDirection      The direction of the ray.\n\x09 * @param MaxDist           The maximum distance the ray should travel.\n\x09 * @param LabelFilter       The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutPose           The calculated pose.\n\x09 * @param PositioningMethod The method that should be used for determining the position on the surface.\n\x09 * @return                  The anchor that was hit by the ray if any. Otherwise a null pointer.\n\x09 */" },
		{ "CPP_Default_PositioningMethod", "Default" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Get a suggested pose (position & rotation) from a raycast to place objects on surfaces in the scene.\nThere are different positioning modes available. Default just uses the position where the raycast\nhit the object. Edge snaps the position to the edge that is nearest to the user and Center simply\ncenters the position on top of the surface.\n@param RayOrigin         The origin of the ray.\n@param RayDirection      The direction of the ray.\n@param MaxDist           The maximum distance the ray should travel.\n@param LabelFilter       The label filter can be used to include/exclude certain labels from the search.\n@param OutPose           The calculated pose.\n@param PositioningMethod The method that should be used for determining the position on the surface.\n@return                  The anchor that was hit by the ray if any. Otherwise a null pointer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBestPoseFromRaycast constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPose;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositioningMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositioningMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBestPoseFromRaycast constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBestPoseFromRaycast Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetBestPoseFromRaycast_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayOrigin_MetaData), NewProp_RayOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetBestPoseFromRaycast_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayDirection_MetaData), NewProp_RayDirection_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetBestPoseFromRaycast_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetBestPoseFromRaycast_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 3e35ac6f915202ca4c74cb538f49941f8aea8503
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPose = { "OutPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetBestPoseFromRaycast_Parms, OutPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PositioningMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PositioningMethod = { "PositioningMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetBestPoseFromRaycast_Parms, PositioningMethod), Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod, METADATA_PARAMS(0, nullptr) }; // 923a97a7b86e7aeacb783ca8f2d0009349c7a699
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetBestPoseFromRaycast_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RayOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RayDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PositioningMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PositioningMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBestPoseFromRaycast Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "GetBestPoseFromRaycast", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventGetBestPoseFromRaycast_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventGetBestPoseFromRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_GetBestPoseFromRaycast(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execGetBestPoseFromRaycast)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RayOrigin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RayDirection);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxDist);
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutPose);
	P_GET_ENUM(EMRUKPositioningMethod,Z_Param_PositioningMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetBestPoseFromRaycast(Z_Param_Out_RayOrigin,Z_Param_Out_RayDirection,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutPose,EMRUKPositioningMethod(Z_Param_PositioningMethod));
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function GetBestPoseFromRaycast *****************************

// ********** Begin Class UMRUKSubsystem Function GetCurrentRoom ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventGetCurrentRoom_Parms
	{
		AMRUKRoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Return the room that the headset is currently in. If the headset is not in any given room\n\x09 * then it will return the room the headset was last in when this function was called.\n\x09 * If the headset hasn't been in a valid room yet then return the first room in the list.\n\x09 * If no rooms have been loaded yet then return null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Return the room that the headset is currently in. If the headset is not in any given room\nthen it will return the room the headset was last in when this function was called.\nIf the headset hasn't been in a valid room yet then return the first room in the list.\nIf no rooms have been loaded yet then return null." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentRoom constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentRoom constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentRoom Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetCurrentRoom_Parms, ReturnValue), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentRoom Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "GetCurrentRoom", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventGetCurrentRoom_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventGetCurrentRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execGetCurrentRoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKRoom**)Z_Param__Result=P_THIS->GetCurrentRoom();
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function GetCurrentRoom *************************************

// ********** Begin Class UMRUKSubsystem Function GetKeyWall ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_GetKeyWall_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventGetKeyWall_Parms
	{
		double Tolerance;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Return the longest wall in the current room that has no other walls behind it.\n\x09 * @param Tolerance The tolerance to use when determining wall that are behind.\n\x09 * @return          The wall anchor that is the key wall in the room.\n\x09 */" },
		{ "CPP_Default_Tolerance", "0.100000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Return the longest wall in the current room that has no other walls behind it.\n@param Tolerance The tolerance to use when determining wall that are behind.\n@return          The wall anchor that is the key wall in the room." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetKeyWall constinit property declarations ****************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetKeyWall constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetKeyWall Property Definitions ***************************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetKeyWall_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetKeyWall_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetKeyWall Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "GetKeyWall", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventGetKeyWall_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventGetKeyWall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_GetKeyWall(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execGetKeyWall)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetKeyWall(Z_Param_Tolerance);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function GetKeyWall *****************************************

// ********** Begin Class UMRUKSubsystem Function GetLargestSurface ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_GetLargestSurface_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventGetLargestSurface_Parms
	{
		FString Label;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Return the largest surface for a given label in the current room.\n\x09 * @param Label The label of the surfaces to search in.\n\x09 * @return      The anchor that has the largest surface if any. Otherwise, a null pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Return the largest surface for a given label in the current room.\n@param Label The label of the surfaces to search in.\n@return      The anchor that has the largest surface if any. Otherwise, a null pointer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLargestSurface constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLargestSurface constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLargestSurface Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetLargestSurface_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetLargestSurface_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLargestSurface Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "GetLargestSurface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventGetLargestSurface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventGetLargestSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_GetLargestSurface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execGetLargestSurface)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetLargestSurface(Z_Param_Label);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function GetLargestSurface **********************************

// ********** Begin Class UMRUKSubsystem Function IsPositionInSceneVolume **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventIsPositionInSceneVolume_Parms
	{
		FVector WorldPosition;
		bool TestVerticalBounds;
		double Tolerance;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Checks if the given position is on or inside of any scene volume in the rooms.\n\x09 * All rooms will be checked and the first anchors scene volume that has the point on or inside it will be returned.\n\x09 * @param WorldPosition      The position in world space to check\n\x09 * @param TestVerticalBounds Whether the vertical bounds should be checked or not\n\x09 * @param Tolerance          Tolerance\n\x09 * @return\x09\x09\x09\x09\x09 The anchor the WorldPosition is in. A null pointer otherwise.\n\x09 */" },
		{ "CPP_Default_TestVerticalBounds", "true" },
		{ "CPP_Default_Tolerance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Checks if the given position is on or inside of any scene volume in the rooms.\nAll rooms will be checked and the first anchors scene volume that has the point on or inside it will be returned.\n@param WorldPosition      The position in world space to check\n@param TestVerticalBounds Whether the vertical bounds should be checked or not\n@param Tolerance          Tolerance\n@return                                       The anchor the WorldPosition is in. A null pointer otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPositionInSceneVolume constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static void NewProp_TestVerticalBounds_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventIsPositionInSceneVolume_Parms*)Obj)->TestVerticalBounds = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TestVerticalBounds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPositionInSceneVolume constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPositionInSceneVolume Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventIsPositionInSceneVolume_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_TestVerticalBounds = { "TestVerticalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventIsPositionInSceneVolume_Parms), &UHT_STATICS::NewProp_TestVerticalBounds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventIsPositionInSceneVolume_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventIsPositionInSceneVolume_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestVerticalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPositionInSceneVolume Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "IsPositionInSceneVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventIsPositionInSceneVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventIsPositionInSceneVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execIsPositionInSceneVolume)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_UBOOL(Z_Param_TestVerticalBounds);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->IsPositionInSceneVolume(Z_Param_Out_WorldPosition,Z_Param_TestVerticalBounds,Z_Param_Tolerance);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function IsPositionInSceneVolume ****************************

// ********** Begin Class UMRUKSubsystem Function LaunchSceneCapture *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventLaunchSceneCapture_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Launch the scene capture. After a successful capture the scene should be updated.\n\x09 * @return Whether the capture was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Launch the scene capture. After a successful capture the scene should be updated.\n@return Whether the capture was successful." },
	};
#endif // WITH_METADATA

// ********** Begin Function LaunchSceneCapture constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventLaunchSceneCapture_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LaunchSceneCapture constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LaunchSceneCapture Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventLaunchSceneCapture_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LaunchSceneCapture Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "LaunchSceneCapture", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventLaunchSceneCapture_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventLaunchSceneCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execLaunchSceneCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LaunchSceneCapture();
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function LaunchSceneCapture *********************************

// ********** Begin Class UMRUKSubsystem Function LoadSceneFromDevice ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventLoadSceneFromDevice_Parms
	{
		EMRUKSceneModel SceneModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load rooms and anchors from the device.\n\x09 * If the scene is already loaded the scene will be updated with the changes.\n\x09 */" },
		{ "CPP_Default_SceneModel", "V1" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Load rooms and anchors from the device.\nIf the scene is already loaded the scene will be updated with the changes." },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadSceneFromDevice constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadSceneFromDevice constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadSceneFromDevice Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SceneModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SceneModel = { "SceneModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventLoadSceneFromDevice_Parms, SceneModel), Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel, METADATA_PARAMS(0, nullptr) }; // c8ae42e2a545d7ec4f98bf31f76b7eea67fdd930
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadSceneFromDevice Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "LoadSceneFromDevice", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventLoadSceneFromDevice_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventLoadSceneFromDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execLoadSceneFromDevice)
{
	P_GET_ENUM(EMRUKSceneModel,Z_Param_SceneModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSceneFromDevice(EMRUKSceneModel(Z_Param_SceneModel));
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function LoadSceneFromDevice ********************************

// ********** Begin Class UMRUKSubsystem Function LoadSceneFromJsonString **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventLoadSceneFromJsonString_Parms
	{
		FString String;
		EMRUKSceneModel SceneModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load rooms and anchors from a JSON representation.\n\x09 * If the scene is already loaded the scene will be updated with the changes.\n\x09 */" },
		{ "CPP_Default_SceneModel", "V1" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Load rooms and anchors from a JSON representation.\nIf the scene is already loaded the scene will be updated with the changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadSceneFromJsonString constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadSceneFromJsonString constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadSceneFromJsonString Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventLoadSceneFromJsonString_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SceneModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SceneModel = { "SceneModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventLoadSceneFromJsonString_Parms, SceneModel), Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel, METADATA_PARAMS(0, nullptr) }; // c8ae42e2a545d7ec4f98bf31f76b7eea67fdd930
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadSceneFromJsonString Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "LoadSceneFromJsonString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventLoadSceneFromJsonString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventLoadSceneFromJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execLoadSceneFromJsonString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_GET_ENUM(EMRUKSceneModel,Z_Param_SceneModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSceneFromJsonString(Z_Param_String,EMRUKSceneModel(Z_Param_SceneModel));
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function LoadSceneFromJsonString ****************************

// ********** Begin Class UMRUKSubsystem Function LoadSharedSceneFromGroup *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_LoadSharedSceneFromGroup_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventLoadSharedSceneFromGroup_Parms
	{
		FOculusXRUUID GroupUUID;
		TArray<FOculusXRUUID> RoomAnchorUUIDs;
		EMRUKSceneModel SceneModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load specific rooms (given by their UUIDs) and their anchors.\n\x09 * If the scene is already loaded the scene will be updated with the changes.\n\x09 */" },
		{ "CPP_Default_SceneModel", "V1" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Load specific rooms (given by their UUIDs) and their anchors.\nIf the scene is already loaded the scene will be updated with the changes." },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadSharedSceneFromGroup constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupUUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomAnchorUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomAnchorUUIDs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadSharedSceneFromGroup constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadSharedSceneFromGroup Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroupUUID = { "GroupUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventLoadSharedSceneFromGroup_Parms, GroupUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomAnchorUUIDs_Inner = { "RoomAnchorUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoomAnchorUUIDs = { "RoomAnchorUUIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventLoadSharedSceneFromGroup_Parms, RoomAnchorUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SceneModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SceneModel = { "SceneModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventLoadSharedSceneFromGroup_Parms, SceneModel), Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel, METADATA_PARAMS(0, nullptr) }; // c8ae42e2a545d7ec4f98bf31f76b7eea67fdd930
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomAnchorUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomAnchorUUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadSharedSceneFromGroup Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "LoadSharedSceneFromGroup", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventLoadSharedSceneFromGroup_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventLoadSharedSceneFromGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_LoadSharedSceneFromGroup(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execLoadSharedSceneFromGroup)
{
	P_GET_STRUCT(FOculusXRUUID,Z_Param_GroupUUID);
	P_GET_TARRAY(FOculusXRUUID,Z_Param_RoomAnchorUUIDs);
	P_GET_ENUM(EMRUKSceneModel,Z_Param_SceneModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSharedSceneFromGroup(Z_Param_GroupUUID,Z_Param_RoomAnchorUUIDs,EMRUKSceneModel(Z_Param_SceneModel));
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function LoadSharedSceneFromGroup ***************************

// ********** Begin Class UMRUKSubsystem Function Raycast ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventRaycast_Parms
	{
		FVector Origin;
		FVector Direction;
		float MaxDist;
		FMRUKLabelFilter LabelFilter;
		FMRUKHit OutHit;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Cast a ray and return the closest hit anchor in the scene.\n\x09 * @param Origin      Origin The origin of the ray.\n\x09 * @param Direction   Direction The direction of the ray.\n\x09 * @param MaxDist     The maximum distance the ray should travel.\n\x09 * @param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutHit      The closest hit.\n\x09 * @return            The anchor that the ray hit\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Cast a ray and return the closest hit anchor in the scene.\n@param Origin      Origin The origin of the ray.\n@param Direction   Direction The direction of the ray.\n@param MaxDist     The maximum distance the ray should travel.\n@param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n@param OutHit      The closest hit.\n@return            The anchor that the ray hit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Raycast constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Raycast constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Raycast Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 3e35ac6f915202ca4c74cb538f49941f8aea8503
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, OutHit), Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // ac31f483ff11e65b5da8cc3df47cad778fced961
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Raycast Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "Raycast", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventRaycast_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_Raycast(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execRaycast)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDist);
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_GET_STRUCT_REF(FMRUKHit,Z_Param_Out_OutHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutHit);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function Raycast ********************************************

// ********** Begin Class UMRUKSubsystem Function RaycastAll ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventRaycastAll_Parms
	{
		FVector Origin;
		FVector Direction;
		float MaxDist;
		FMRUKLabelFilter LabelFilter;
		TArray<FMRUKHit> OutHits;
		TArray<AMRUKAnchor*> OutAnchors;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Cast a ray and collect hits against the volumes and plane bounds in every room in the scene.\n\x09 * The order of the hits in the array is not specified.\n\x09 * @param Origin      Origin The origin of the ray.\n\x09 * @param Direction   Direction The direction of the ray.\n\x09 * @param MaxDist     The maximum distance the ray should travel.\n\x09 * @param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutHits     The hits the ray collected.\n\x09 * @param OutAnchors  The anchors that were hit. Each anchor in this array corresponds to a entry at the same position in OutHits.\n\x09 * @return            Whether the ray hit anything\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Cast a ray and collect hits against the volumes and plane bounds in every room in the scene.\nThe order of the hits in the array is not specified.\n@param Origin      Origin The origin of the ray.\n@param Direction   Direction The direction of the ray.\n@param MaxDist     The maximum distance the ray should travel.\n@param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n@param OutHits     The hits the ray collected.\n@param OutAnchors  The anchors that were hit. Each anchor in this array corresponds to a entry at the same position in OutHits.\n@return            Whether the ray hit anything" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RaycastAll constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnchors;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventRaycastAll_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RaycastAll constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RaycastAll Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 3e35ac6f915202ca4c74cb538f49941f8aea8503
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // ac31f483ff11e65b5da8cc3df47cad778fced961
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // ac31f483ff11e65b5da8cc3df47cad778fced961
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OutAnchors_Inner = { "OutAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutAnchors = { "OutAnchors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, OutAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventRaycastAll_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RaycastAll Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "RaycastAll", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventRaycastAll_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventRaycastAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_RaycastAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execRaycastAll)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDist);
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_GET_TARRAY_REF(FMRUKHit,Z_Param_Out_OutHits);
	P_GET_TARRAY_REF(AMRUKAnchor*,Z_Param_Out_OutAnchors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RaycastAll(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutHits,Z_Param_Out_OutAnchors);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function RaycastAll *****************************************

// ********** Begin Class UMRUKSubsystem Function RaycastEnvironment *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_RaycastEnvironment_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventRaycastEnvironment_Parms
	{
		FVector Origin;
		FVector Direction;
		float MaxDistance;
		FMRUKEnvironmentRaycastHit ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Perform a raycast in the environment using the device's depth information.\n\x09 *\n\x09 * This function casts a ray from the specified origin in the given direction and returns\n\x09 * the first hit encountered within the specified maximum distance. It is necessary to call\n\x09 * CreateEnvironmentRaycaster() before using this function to ensure that the environment\n\x09 * raycaster is properly initialized. After raycasting is finished, DestroyEnvironmentRaycaster()\n\x09 * can be called to clean up any resources associated with the raycaster.\n\x09 *\n\x09 * The status of the returned FMRUKEnvironmentRaycastHit can be checked to determine if the\n\x09 * raycast was successful.\n\x09 *\n\x09 * @param Origin      The starting point of the ray in world space.\n\x09 * @param Direction   The direction in which the ray is cast.\n\x09 * @param MaxDistance The maximum distance the ray should travel. Defaults to 0, which is treated as infinity.\n\x09 * @return            A structure containing information about the raycast hit, if any.\n\x09 */" },
		{ "CPP_Default_MaxDistance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Perform a raycast in the environment using the device's depth information.\n\nThis function casts a ray from the specified origin in the given direction and returns\nthe first hit encountered within the specified maximum distance. It is necessary to call\nCreateEnvironmentRaycaster() before using this function to ensure that the environment\nraycaster is properly initialized. After raycasting is finished, DestroyEnvironmentRaycaster()\ncan be called to clean up any resources associated with the raycaster.\n\nThe status of the returned FMRUKEnvironmentRaycastHit can be checked to determine if the\nraycast was successful.\n\n@param Origin      The starting point of the ray in world space.\n@param Direction   The direction in which the ray is cast.\n@param MaxDistance The maximum distance the ray should travel. Defaults to 0, which is treated as infinity.\n@return            A structure containing information about the raycast hit, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RaycastEnvironment constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RaycastEnvironment constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RaycastEnvironment Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastEnvironment_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastEnvironment_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastEnvironment_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastEnvironment_Parms, ReturnValue), Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit, METADATA_PARAMS(0, nullptr) }; // d237ff3be3cdfac51f3bd811fa3b8952147d6bc0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RaycastEnvironment Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "RaycastEnvironment", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventRaycastEnvironment_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventRaycastEnvironment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_RaycastEnvironment(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execRaycastEnvironment)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMRUKEnvironmentRaycastHit*)Z_Param__Result=P_THIS->RaycastEnvironment(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDistance);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function RaycastEnvironment *********************************

// ********** Begin Class UMRUKSubsystem Function SaveSceneToJsonString ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventSaveSceneToJsonString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Save all rooms and anchors to JSON. This JSON representation can than later be used by\n\x09 * LoadSceneFromJsonString() to load the scene again.\n\x09 * @return the JSON string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Save all rooms and anchors to JSON. This JSON representation can than later be used by\nLoadSceneFromJsonString() to load the scene again.\n@return the JSON string." },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveSceneToJsonString constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveSceneToJsonString constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveSceneToJsonString Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSaveSceneToJsonString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SaveSceneToJsonString Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "SaveSceneToJsonString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventSaveSceneToJsonString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventSaveSceneToJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execSaveSceneToJsonString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SaveSceneToJsonString();
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function SaveSceneToJsonString ******************************

// ********** Begin Class UMRUKSubsystem Function SceneCaptureComplete *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventSceneCaptureComplete_Parms
	{
		FOculusXRUInt64 RequestId;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// ~FTickableGameObject interface\n" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "~FTickableGameObject interface" },
	};
#endif // WITH_METADATA

// ********** Begin Function SceneCaptureComplete constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestId;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventSceneCaptureComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SceneCaptureComplete constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SceneCaptureComplete Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSceneCaptureComplete_Parms, RequestId), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventSceneCaptureComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SceneCaptureComplete Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "SceneCaptureComplete", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventSceneCaptureComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventSceneCaptureComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execSceneCaptureComplete)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_RequestId);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SceneCaptureComplete(Z_Param_RequestId,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function SceneCaptureComplete *******************************

// ********** Begin Class UMRUKSubsystem Function ShareRooms ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_ShareRooms_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventShareRooms_Parms
	{
		TArray<AMRUKRoom*> RoomsToShare;
		FOculusXRUUID GroupUUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Shares a collection of rooms with a group.\n\x09 * Once shared, the room and the anchors contained in it can be loaded by calling\n\x09 * UMRUKSubsystem::LoadSceneFromDevice() with the room UUIDs.\n\x09 * @param GroupUUID The group ID to which the rooms will be shared.\n\x09 * @return        Result of share attempt.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Shares a collection of rooms with a group.\nOnce shared, the room and the anchors contained in it can be loaded by calling\nUMRUKSubsystem::LoadSceneFromDevice() with the room UUIDs.\n@param GroupUUID The group ID to which the rooms will be shared.\n@return        Result of share attempt." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomsToShare_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShareRooms constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomsToShare_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomsToShare;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupUUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShareRooms constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShareRooms Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoomsToShare_Inner = { "RoomsToShare", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoomsToShare = { "RoomsToShare", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventShareRooms_Parms, RoomsToShare), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomsToShare_MetaData), NewProp_RoomsToShare_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroupUUID = { "GroupUUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventShareRooms_Parms, GroupUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupUUID_MetaData), NewProp_GroupUUID_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomsToShare_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomsToShare,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupUUID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShareRooms Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "ShareRooms", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventShareRooms_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventShareRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_ShareRooms(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execShareRooms)
{
	P_GET_TARRAY_REF(AMRUKRoom*,Z_Param_Out_RoomsToShare);
	P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_GroupUUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShareRooms(Z_Param_Out_RoomsToShare,Z_Param_Out_GroupUUID);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function ShareRooms *****************************************

// ********** Begin Class UMRUKSubsystem Function SpawnInterior ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventSpawnInterior_Parms
	{
		TMap<FString,FMRUKSpawnGroup> SpawnGroups;
		TArray<FString> CutHoleLabels;
		UMaterialInterface* ProceduralMaterial;
		bool ShouldFallbackToProcedural;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawn meshes on the position of the anchors of each room.\n\x09 * The actors should have Z as up Y as right and X as forward.\n\x09 * The pivot point should be in the bottom center.\n\x09 * @param SpawnGroups                A map which tells to spawn which actor to a given label.\n\x09 * @param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n\x09 * @param CutHoleLabels\x09\x09         Labels for which the generated mesh should have holes. Only works with planes.\n\x09 * @param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n\x09 * @return                           The spawned actors.\n\x09 */" },
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "CPP_Default_ShouldFallbackToProcedural", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AMRUKAnchorActorSpawner instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Spawn meshes on the position of the anchors of each room.\nThe actors should have Z as up Y as right and X as forward.\nThe pivot point should be in the bottom center.\n@param SpawnGroups                A map which tells to spawn which actor to a given label.\n@param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n@param CutHoleLabels                  Labels for which the generated mesh should have holes. Only works with planes.\n@param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n@return                           The spawned actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutHoleLabels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnInterior constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnGroups_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpawnGroups_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnGroups;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CutHoleLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CutHoleLabels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
	static void NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventSpawnInterior_Parms*)Obj)->ShouldFallbackToProcedural = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFallbackToProcedural;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnInterior constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnInterior Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 2cf9802ef83d082d326a8e8ff786333b33b25889
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInterior_Parms, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnGroups_MetaData), NewProp_SpawnGroups_MetaData) }; // 2cf9802ef83d082d326a8e8ff786333b33b25889
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CutHoleLabels_Inner = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CutHoleLabels = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInterior_Parms, CutHoleLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutHoleLabels_MetaData), NewProp_CutHoleLabels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInterior_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventSpawnInterior_Parms), &UHT_STATICS::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInterior_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShouldFallbackToProcedural,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnInterior Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "SpawnInterior", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventSpawnInterior_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventSpawnInterior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execSpawnInterior)
{
	P_GET_TMAP_REF(FString,FMRUKSpawnGroup,Z_Param_Out_SpawnGroups);
	P_GET_TARRAY_REF(FString,Z_Param_Out_CutHoleLabels);
	P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
	P_GET_UBOOL(Z_Param_ShouldFallbackToProcedural);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnInterior(Z_Param_Out_SpawnGroups,Z_Param_Out_CutHoleLabels,Z_Param_ProceduralMaterial,Z_Param_ShouldFallbackToProcedural);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function SpawnInterior **************************************

// ********** Begin Class UMRUKSubsystem Function SpawnInteriorFromStream **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventSpawnInteriorFromStream_Parms
	{
		TMap<FString,FMRUKSpawnGroup> SpawnGroups;
		FRandomStream RandomStream;
		TArray<FString> CutHoleLabels;
		UMaterialInterface* ProceduralMaterial;
		bool ShouldFallbackToProcedural;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawn meshes on the position of the anchors of each room from a random stream.\n\x09 * The actors should have Z as up Y as right and X as forward.\n\x09 * The pivot point should be in the bottom center.\n\x09 * @param SpawnGroups                A map which tells to spawn which actor to a given label.\n\x09 * @param RandomStream               A random generator to choose randomly between actor classes if there a multiple for one label.\n\x09 * @param CutHoleLabels\x09\x09         Labels for which the generated mesh should have holes. Only works with planes.\n\x09 * @param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n\x09 * @param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n\x09 * @return                           The spawned actors.\n\x09 */" },
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "CPP_Default_ShouldFallbackToProcedural", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AMRUKAnchorActorSpawner instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Spawn meshes on the position of the anchors of each room from a random stream.\nThe actors should have Z as up Y as right and X as forward.\nThe pivot point should be in the bottom center.\n@param SpawnGroups                A map which tells to spawn which actor to a given label.\n@param RandomStream               A random generator to choose randomly between actor classes if there a multiple for one label.\n@param CutHoleLabels                  Labels for which the generated mesh should have holes. Only works with planes.\n@param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n@param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n@return                           The spawned actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutHoleLabels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnInteriorFromStream constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnGroups_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpawnGroups_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnGroups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CutHoleLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CutHoleLabels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
	static void NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventSpawnInteriorFromStream_Parms*)Obj)->ShouldFallbackToProcedural = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFallbackToProcedural;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnInteriorFromStream constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnInteriorFromStream Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 2cf9802ef83d082d326a8e8ff786333b33b25889
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnGroups_MetaData), NewProp_SpawnGroups_MetaData) }; // 2cf9802ef83d082d326a8e8ff786333b33b25889
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CutHoleLabels_Inner = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CutHoleLabels = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, CutHoleLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutHoleLabels_MetaData), NewProp_CutHoleLabels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventSpawnInteriorFromStream_Parms), &UHT_STATICS::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShouldFallbackToProcedural,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnInteriorFromStream Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "SpawnInteriorFromStream", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventSpawnInteriorFromStream_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventSpawnInteriorFromStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execSpawnInteriorFromStream)
{
	P_GET_TMAP_REF(FString,FMRUKSpawnGroup,Z_Param_Out_SpawnGroups);
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_GET_TARRAY_REF(FString,Z_Param_Out_CutHoleLabels);
	P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
	P_GET_UBOOL(Z_Param_ShouldFallbackToProcedural);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnInteriorFromStream(Z_Param_Out_SpawnGroups,Z_Param_Out_RandomStream,Z_Param_Out_CutHoleLabels,Z_Param_ProceduralMaterial,Z_Param_ShouldFallbackToProcedural);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function SpawnInteriorFromStream ****************************

// ********** Begin Class UMRUKSubsystem Function TryGetClosestSeatPose ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSeatPose_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventTryGetClosestSeatPose_Parms
	{
		FVector RayOrigin;
		FVector RayDirection;
		FTransform OutSeatTransform;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Finds the closest seat given a ray.\n\x09 * @param RayOrigin The origin of the ray.\n\x09 * @param RayDirection The direction of the ray.\n\x09 * @param OutSeatTransform The seat pose.\n\x09 * @return If any seat was found the Anchor that has seats available will be returned. Otherwise a null pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Finds the closest seat given a ray.\n@param RayOrigin The origin of the ray.\n@param RayDirection The direction of the ray.\n@param OutSeatTransform The seat pose.\n@return If any seat was found the Anchor that has seats available will be returned. Otherwise a null pointer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetClosestSeatPose constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSeatTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetClosestSeatPose constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetClosestSeatPose Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSeatPose_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayOrigin_MetaData), NewProp_RayOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSeatPose_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayDirection_MetaData), NewProp_RayDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutSeatTransform = { "OutSeatTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSeatPose_Parms, OutSeatTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSeatPose_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RayOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RayDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSeatTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetClosestSeatPose Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "TryGetClosestSeatPose", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventTryGetClosestSeatPose_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventTryGetClosestSeatPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSeatPose(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execTryGetClosestSeatPose)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RayOrigin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RayDirection);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutSeatTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->TryGetClosestSeatPose(Z_Param_Out_RayOrigin,Z_Param_Out_RayDirection,Z_Param_Out_OutSeatTransform);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function TryGetClosestSeatPose ******************************

// ********** Begin Class UMRUKSubsystem Function TryGetClosestSurfacePosition *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics
struct UHT_STATICS
{
	struct MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms
	{
		FVector WorldPosition;
		FVector OutSurfacePosition;
		FMRUKLabelFilter LabelFilter;
		double MaxDistance;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 *  Get the position on the surface that is closest to the given position with respect to the distance in all rooms.\n\x09 *  @param WorldPosition      The position in world space from which the closest surface point should be found.\n\x09 *  @param OutSurfacePosition The closest position on the closest surface if any. Otherwise zero.\n\x09 *  @param LabelFilter        The label filter can be used to include/exclude certain labels from the search.\n\x09 *  @param MaxDistance        The distance to which a closest surface position should be searched. Everything below or equal to zero will be treated as infinity.\n\x09 *  @return                   The Anchor on which the closest surface position was found or a null pointer otherwise.\n\x09 */" },
		{ "CPP_Default_MaxDistance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Get the position on the surface that is closest to the given position with respect to the distance in all rooms.\n@param WorldPosition      The position in world space from which the closest surface point should be found.\n@param OutSurfacePosition The closest position on the closest surface if any. Otherwise zero.\n@param LabelFilter        The label filter can be used to include/exclude certain labels from the search.\n@param MaxDistance        The distance to which a closest surface position should be searched. Everything below or equal to zero will be treated as infinity.\n@return                   The Anchor on which the closest surface position was found or a null pointer otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetClosestSurfacePosition constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSurfacePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetClosestSurfacePosition constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetClosestSurfacePosition Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutSurfacePosition = { "OutSurfacePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, OutSurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 3e35ac6f915202ca4c74cb538f49941f8aea8503
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSurfacePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetClosestSurfacePosition Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSubsystem, nullptr, "TryGetClosestSurfacePosition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSubsystem::execTryGetClosestSurfacePosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSurfacePosition);
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->TryGetClosestSurfacePosition(Z_Param_Out_WorldPosition,Z_Param_Out_OutSurfacePosition,Z_Param_Out_LabelFilter,Z_Param_MaxDistance);
	P_NATIVE_END;
}
// ********** End Class UMRUKSubsystem Function TryGetClosestSurfacePosition ***********************

// ********** Begin Class UMRUKSubsystem ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * The Mixed Reality Utility Kit subsystem.\n *\n * This subsystem acts as a container for scene/anchor data. It has methods to load\n * the scene data from the device or a JSON file. After the scene data has been loaded\n * it will be stored inside the subsystem to make it possible to query the data from\n * everywhere. In addition, it offers methods to fulfill queries on the scene data\n * like ray casts or simple content placement.\n *\n * The subsystem only contains core functionality that is useful for most cases.\n * More specific functionality is part of actors. For example, if your goal is to spawn\n * meshes in the place of scene anchors you can place the AMRUKAnchorActorSpawner in the\n * level to do this. When a level loads you would first load the anchor data from the\n * device with this subsystem by calling LoadSceneFromDevice() and then the AMRUKAnchorActorSpawner\n * will listen for the subsystem to load the scene data and then spawn the actors accordingly.\n *\n * You can expect methods in this subsystem to take all loaded rooms into consideration when computing.\n * If you want to use a method only on a single specific room, there is most of the time a method\n * with the same name on the AMRUKRoom.\n */" },
		{ "IncludePath", "MRUtilityKitSubsystem.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "The Mixed Reality Utility Kit subsystem.\n\nThis subsystem acts as a container for scene/anchor data. It has methods to load\nthe scene data from the device or a JSON file. After the scene data has been loaded\nit will be stored inside the subsystem to make it possible to query the data from\neverywhere. In addition, it offers methods to fulfill queries on the scene data\nlike ray casts or simple content placement.\n\nThe subsystem only contains core functionality that is useful for most cases.\nMore specific functionality is part of actors. For example, if your goal is to spawn\nmeshes in the place of scene anchors you can place the AMRUKAnchorActorSpawner in the\nlevel to do this. When a level loads you would first load the anchor data from the\ndevice with this subsystem by calling LoadSceneFromDevice() and then the AMRUKAnchorActorSpawner\nwill listen for the subsystem to load the scene data and then spawn the actors accordingly.\n\nYou can expect methods in this subsystem to take all loaded rooms into consideration when computing.\nIf you want to use a method only on a single specific room, there is most of the time a method\nwith the same name on the AMRUKRoom." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneLoadStatus_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The status of the scene loading. When loading from device this is an asynchronous process\n\x09 * so will be in the Busy state until it moves to Complete or Failed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "The status of the scene loading. When loading from device this is an asynchronous process\nso will be in the Busy state until it moves to Complete or Failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneLoaded_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that will trigger when a scene is loaded either from Device or from JSON.\n\x09 * The Success parameter indicates whether the scene was loaded successfully or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that will trigger when a scene is loaded either from Device or from JSON.\nThe Success parameter indicates whether the scene was loaded successfully or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomCreated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired after a room has been created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired after a room has been created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomUpdated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired after a room has been updated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired after a room has been updated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomRemoved_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired when a room gets removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired when a room gets removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackablesConfigured_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackableAdded_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired when a trackable is detected and localized.\n\x09 * Trackables are dynamic objects like keyboards and QR codes that can be tracked in the environment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired when a trackable is detected and localized.\nTrackables are dynamic objects like keyboards and QR codes that can be tracked in the environment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackableUpdated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired when a trackable's properties are updated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired when a trackable's properties are updated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackableRemoved_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired when a trackable is no longer detected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired when a trackable is no longer detected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCaptureComplete_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that will trigger when the capture flow completed.\n\x09 * The Success parameter indicates whether the scene was captured successfully or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that will trigger when the capture flow completed.\nThe Success parameter indicates whether the scene was captured successfully or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Contains a list of rooms that are tracked by the mixed reality utility kit subsystem.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Contains a list of rooms that are tracked by the mixed reality utility kit subsystem." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trackables_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * A list of trackables that have been discovered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "A list of trackables that have been discovered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableWorldLock_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * When world locking is enabled the position of the VR Pawn will be adjusted each frame to ensure\n\x09 * the room anchors are where they should be relative to the camera position. This is necessary to\n\x09 * ensure the position of the virtual objects in the world do not get out of sync with the real world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "When world locking is enabled the position of the VR Pawn will be adjusted each frame to ensure\nthe room anchors are where they should be relative to the camera position. This is necessary to\nensure the position of the virtual objects in the world do not get out of sync with the real world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnShareRoomsComplete_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired after rooms have been shared. It is fired once per call to ShareRooms().\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired after rooms have been shared. It is fired once per call to ShareRooms()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLayoutManagerActor_MetaData[] = {
		{ "Comment", "// metaxr_redact_endif OVR_PARTNER_CODE // XR_META_spatial_entity_room_sharing\n" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "metaxr_redact_endif OVR_PARTNER_CODE  XR_META_spatial_entity_room_sharing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLayoutManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCurrentRoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKSubsystem constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneLoadStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneLoadStatus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSceneLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackablesConfigured;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackableAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackableUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackableRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trackables_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trackables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Trackables;
	static void NewProp_EnableWorldLock_SetBit(void* Obj)
	{
		((UMRUKSubsystem*)Obj)->EnableWorldLock = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableWorldLock;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShareRoomsComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLayoutManagerActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLayoutManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCurrentRoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionGenerator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKSubsystem constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearScene"), .Pointer = &UMRUKSubsystem::execClearScene },
		{ .NameUTF8 = UTF8TEXT("ConfigureTrackers"), .Pointer = &UMRUKSubsystem::execConfigureTrackers },
		{ .NameUTF8 = UTF8TEXT("CreateEnvironmentRaycaster"), .Pointer = &UMRUKSubsystem::execCreateEnvironmentRaycaster },
		{ .NameUTF8 = UTF8TEXT("DestroyEnvironmentRaycaster"), .Pointer = &UMRUKSubsystem::execDestroyEnvironmentRaycaster },
		{ .NameUTF8 = UTF8TEXT("DisableTrackers"), .Pointer = &UMRUKSubsystem::execDisableTrackers },
		{ .NameUTF8 = UTF8TEXT("EnvironmentRaycasterStatus"), .Pointer = &UMRUKSubsystem::execEnvironmentRaycasterStatus },
		{ .NameUTF8 = UTF8TEXT("GetBestPoseFromRaycast"), .Pointer = &UMRUKSubsystem::execGetBestPoseFromRaycast },
		{ .NameUTF8 = UTF8TEXT("GetCurrentRoom"), .Pointer = &UMRUKSubsystem::execGetCurrentRoom },
		{ .NameUTF8 = UTF8TEXT("GetKeyWall"), .Pointer = &UMRUKSubsystem::execGetKeyWall },
		{ .NameUTF8 = UTF8TEXT("GetLargestSurface"), .Pointer = &UMRUKSubsystem::execGetLargestSurface },
		{ .NameUTF8 = UTF8TEXT("IsPositionInSceneVolume"), .Pointer = &UMRUKSubsystem::execIsPositionInSceneVolume },
		{ .NameUTF8 = UTF8TEXT("LaunchSceneCapture"), .Pointer = &UMRUKSubsystem::execLaunchSceneCapture },
		{ .NameUTF8 = UTF8TEXT("LoadSceneFromDevice"), .Pointer = &UMRUKSubsystem::execLoadSceneFromDevice },
		{ .NameUTF8 = UTF8TEXT("LoadSceneFromJsonString"), .Pointer = &UMRUKSubsystem::execLoadSceneFromJsonString },
		{ .NameUTF8 = UTF8TEXT("LoadSharedSceneFromGroup"), .Pointer = &UMRUKSubsystem::execLoadSharedSceneFromGroup },
		{ .NameUTF8 = UTF8TEXT("Raycast"), .Pointer = &UMRUKSubsystem::execRaycast },
		{ .NameUTF8 = UTF8TEXT("RaycastAll"), .Pointer = &UMRUKSubsystem::execRaycastAll },
		{ .NameUTF8 = UTF8TEXT("RaycastEnvironment"), .Pointer = &UMRUKSubsystem::execRaycastEnvironment },
		{ .NameUTF8 = UTF8TEXT("SaveSceneToJsonString"), .Pointer = &UMRUKSubsystem::execSaveSceneToJsonString },
		{ .NameUTF8 = UTF8TEXT("SceneCaptureComplete"), .Pointer = &UMRUKSubsystem::execSceneCaptureComplete },
		{ .NameUTF8 = UTF8TEXT("ShareRooms"), .Pointer = &UMRUKSubsystem::execShareRooms },
		{ .NameUTF8 = UTF8TEXT("SpawnInterior"), .Pointer = &UMRUKSubsystem::execSpawnInterior },
		{ .NameUTF8 = UTF8TEXT("SpawnInteriorFromStream"), .Pointer = &UMRUKSubsystem::execSpawnInteriorFromStream },
		{ .NameUTF8 = UTF8TEXT("TryGetClosestSeatPose"), .Pointer = &UMRUKSubsystem::execTryGetClosestSeatPose },
		{ .NameUTF8 = UTF8TEXT("TryGetClosestSurfacePosition"), .Pointer = &UMRUKSubsystem::execTryGetClosestSurfacePosition },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKSubsystem_ClearScene, "ClearScene" }, // 5a6899cae0026bac99f73bea2751cef84f985254
		{ &Z_Construct_UFunction_UMRUKSubsystem_ConfigureTrackers, "ConfigureTrackers" }, // 44d09cf7e24b7d11c3618a80c9f9c7dad8483a22
		{ &Z_Construct_UFunction_UMRUKSubsystem_CreateEnvironmentRaycaster, "CreateEnvironmentRaycaster" }, // 4501ddfadd8f314b62e32b7ade47560e3c068d7a
		{ &Z_Construct_UFunction_UMRUKSubsystem_DestroyEnvironmentRaycaster, "DestroyEnvironmentRaycaster" }, // 4e8a3228c5619ff2053d2b9fbf46e7054fac4ec6
		{ &Z_Construct_UFunction_UMRUKSubsystem_DisableTrackers, "DisableTrackers" }, // de7bf9473db0c1ee923278284234280196e97fe0
		{ &Z_Construct_UFunction_UMRUKSubsystem_EnvironmentRaycasterStatus, "EnvironmentRaycasterStatus" }, // 5833c97095d52250cf6fa340d1c3c55214bc3429
		{ &Z_Construct_UFunction_UMRUKSubsystem_GetBestPoseFromRaycast, "GetBestPoseFromRaycast" }, // f18ad73e5d951728811ec597228067e900183751
		{ &Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom, "GetCurrentRoom" }, // 6121e2d6e2911728effa4ebdb047e0fff39ad0ba
		{ &Z_Construct_UFunction_UMRUKSubsystem_GetKeyWall, "GetKeyWall" }, // dd5cec1b82d5d2279cffaee79ae88cd66af4a50b
		{ &Z_Construct_UFunction_UMRUKSubsystem_GetLargestSurface, "GetLargestSurface" }, // 90b2399946171774679ace20205992830e5f7553
		{ &Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume, "IsPositionInSceneVolume" }, // 507cc61832bc913f3b5e174a4010b242809c2551
		{ &Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture, "LaunchSceneCapture" }, // 0ced49e443b58b42ae1e1768a635e9fd4ef33ac7
		{ &Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice, "LoadSceneFromDevice" }, // 7904e2a9242b3d8277a1a14adabc68c3d72b026c
		{ &Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString, "LoadSceneFromJsonString" }, // eeee6f32d1e104cd8d4ec40f7e9fd1a230200ef5
		{ &Z_Construct_UFunction_UMRUKSubsystem_LoadSharedSceneFromGroup, "LoadSharedSceneFromGroup" }, // 6e7ffafa9828d398d2e8f20fa1dd71584a985e04
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature, "OnCaptureComplete__DelegateSignature" }, // 0a9b906b3d10892907855c8827bc592976ab12f6
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature, "OnLoaded__DelegateSignature" }, // 2b75805200931e06513c343f6c4a9c8f1eed8aa9
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature, "OnRoomCreated__DelegateSignature" }, // 6780cbdc3c75b4b3e9b59df3055ec75e9b9b6165
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature, "OnRoomRemoved__DelegateSignature" }, // 65cae3d2c8e2ab0e225408088c8da3cecea6ae1d
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomsShared__DelegateSignature, "OnRoomsShared__DelegateSignature" }, // f88a2933c5edab92e76f91c4f274cce87a598515
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature, "OnRoomUpdated__DelegateSignature" }, // 44e1a41ba703e48175ef0ba0742504ca8dee4dc2
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableAdded__DelegateSignature, "OnTrackableAdded__DelegateSignature" }, // d75c044f6ee1784d79d5638fed32fd1674c7fe74
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableRemoved__DelegateSignature, "OnTrackableRemoved__DelegateSignature" }, // ffeec087e248a2af64008b628e5a2aad11d8633d
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackablesConfigured__DelegateSignature, "OnTrackablesConfigured__DelegateSignature" }, // c8c03a24a72f13ff31f48d84b0d69d750f149fe0
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableUpdated__DelegateSignature, "OnTrackableUpdated__DelegateSignature" }, // 49d6a992479ed08e25b402a1004a8a57ddd4d870
		{ &Z_Construct_UFunction_UMRUKSubsystem_Raycast, "Raycast" }, // c3faa2a9b312c663164635a0aae3c1f131e6e789
		{ &Z_Construct_UFunction_UMRUKSubsystem_RaycastAll, "RaycastAll" }, // 7fc2d87ec65af8ba8a28c95c4146696a613c778c
		{ &Z_Construct_UFunction_UMRUKSubsystem_RaycastEnvironment, "RaycastEnvironment" }, // 6c351a57f950a16988dda79e0524409f1f5d11da
		{ &Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString, "SaveSceneToJsonString" }, // e812b1837447465db770975877a3bd9b86441a44
		{ &Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete, "SceneCaptureComplete" }, // 2e4cca2a0f634a83fb80dcad8ed43efb78cf7404
		{ &Z_Construct_UFunction_UMRUKSubsystem_ShareRooms, "ShareRooms" }, // 16a6edbea35d494a222be39378718e78b4ad0dec
		{ &Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior, "SpawnInterior" }, // afb4ea201386b1607542b82150ebf3326d6cf0a7
		{ &Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream, "SpawnInteriorFromStream" }, // 4d77667a0a185fb81864fe654f86b4a489040a61
		{ &Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSeatPose, "TryGetClosestSeatPose" }, // d88c4ece10c81192e10d08417151d9eda0108f5f
		{ &Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition, "TryGetClosestSurfacePosition" }, // fccd3497f11cf2785b1186a226d0b4cce78eda49
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKSubsystem Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SceneLoadStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SceneLoadStatus = { "SceneLoadStatus", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, SceneLoadStatus), Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneLoadStatus_MetaData), NewProp_SceneLoadStatus_MetaData) }; // d89244c7d97bd0e0321245e1eae7328f97b26942
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSceneLoaded = { "OnSceneLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnSceneLoaded), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSceneLoaded_MetaData), NewProp_OnSceneLoaded_MetaData) }; // 2b75805200931e06513c343f6c4a9c8f1eed8aa9
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRoomCreated = { "OnRoomCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnRoomCreated), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoomCreated_MetaData), NewProp_OnRoomCreated_MetaData) }; // 6780cbdc3c75b4b3e9b59df3055ec75e9b9b6165
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRoomUpdated = { "OnRoomUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnRoomUpdated), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoomUpdated_MetaData), NewProp_OnRoomUpdated_MetaData) }; // 44e1a41ba703e48175ef0ba0742504ca8dee4dc2
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRoomRemoved = { "OnRoomRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnRoomRemoved), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoomRemoved_MetaData), NewProp_OnRoomRemoved_MetaData) }; // 65cae3d2c8e2ab0e225408088c8da3cecea6ae1d
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTrackablesConfigured = { "OnTrackablesConfigured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnTrackablesConfigured), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackablesConfigured__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrackablesConfigured_MetaData), NewProp_OnTrackablesConfigured_MetaData) }; // c8c03a24a72f13ff31f48d84b0d69d750f149fe0
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTrackableAdded = { "OnTrackableAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnTrackableAdded), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrackableAdded_MetaData), NewProp_OnTrackableAdded_MetaData) }; // d75c044f6ee1784d79d5638fed32fd1674c7fe74
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTrackableUpdated = { "OnTrackableUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnTrackableUpdated), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrackableUpdated_MetaData), NewProp_OnTrackableUpdated_MetaData) }; // 49d6a992479ed08e25b402a1004a8a57ddd4d870
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTrackableRemoved = { "OnTrackableRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnTrackableRemoved), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnTrackableRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrackableRemoved_MetaData), NewProp_OnTrackableRemoved_MetaData) }; // ffeec087e248a2af64008b628e5a2aad11d8633d
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCaptureComplete = { "OnCaptureComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnCaptureComplete), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCaptureComplete_MetaData), NewProp_OnCaptureComplete_MetaData) }; // 0a9b906b3d10892907855c8827bc592976ab12f6
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Trackables_ValueProp = { "Trackables", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 1, Z_Construct_UClass_AMRUKTrackable, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Trackables_Key_KeyProp = { "Trackables_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKTrackableKey, METADATA_PARAMS(0, nullptr) }; // 185be2ed79e34c02d34b7cbcbbb48e2f17c67422
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Trackables = { "Trackables", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, Trackables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trackables_MetaData), NewProp_Trackables_MetaData) }; // 185be2ed79e34c02d34b7cbcbbb48e2f17c67422
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableWorldLock = { "EnableWorldLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRUKSubsystem), &UHT_STATICS::NewProp_EnableWorldLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableWorldLock_MetaData), NewProp_EnableWorldLock_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnShareRoomsComplete = { "OnShareRoomsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnShareRoomsComplete), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomsShared__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnShareRoomsComplete_MetaData), NewProp_OnShareRoomsComplete_MetaData) }; // f88a2933c5edab92e76f91c4f274cce87a598515
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoomLayoutManagerActor = { "RoomLayoutManagerActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, RoomLayoutManagerActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLayoutManagerActor_MetaData), NewProp_RoomLayoutManagerActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoomLayoutManager = { "RoomLayoutManager", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, RoomLayoutManager), Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLayoutManager_MetaData), NewProp_RoomLayoutManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedCurrentRoom = { "CachedCurrentRoom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, CachedCurrentRoom), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCurrentRoom_MetaData), NewProp_CachedCurrentRoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PositionGenerator = { "PositionGenerator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, PositionGenerator), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionGenerator_MetaData), NewProp_PositionGenerator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneLoadStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneLoadStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSceneLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRoomCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRoomUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRoomRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTrackablesConfigured,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTrackableAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTrackableUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTrackableRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCaptureComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Trackables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Trackables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Trackables,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableWorldLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnShareRoomsComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayoutManagerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayoutManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedCurrentRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PositionGenerator,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKSubsystem Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstanceSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKSubsystem,
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
static void UMRUKSubsystem_StaticRegisterNativesUMRUKSubsystem()
{
	UClass* Class = UMRUKSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKSubsystem;
UClass* Z_Construct_UClass_UMRUKSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKSubsystem;
		if (!Z_Registration_Info_UClass_UMRUKSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKSubsystem"),
				Z_Registration_Info_UClass_UMRUKSubsystem.InnerSingleton,
				UMRUKSubsystem_StaticRegisterNativesUMRUKSubsystem,
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
		return Z_Registration_Info_UClass_UMRUKSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UMRUKSubsystem::UMRUKSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKSubsystem);
UMRUKSubsystem::~UMRUKSubsystem() {}
// ********** End Class UMRUKSubsystem *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKSubsystem, TEXT("UMRUKSubsystem"), &Z_Registration_Info_UClass_UMRUKSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKSubsystem), 366048424U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h__Script_MRUtilityKit_f22bac95854ece5f08bb3f062822aac783ac79fb{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
