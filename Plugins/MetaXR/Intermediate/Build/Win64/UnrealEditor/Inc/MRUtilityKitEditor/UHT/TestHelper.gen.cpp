// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestHelper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTestHelper() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKGridSliceResizerComponent(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKitEditor(ETypeConstructPhase);
MRUTILITYKITEDITOR_API UClass* Z_Construct_UClass_AMeshResizer(ETypeConstructPhase);
MRUTILITYKITEDITOR_API UClass* Z_Construct_UClass_URoomAndAnchorObserver(ETypeConstructPhase);
MRUTILITYKITEDITOR_API UClass* Z_Construct_UClass_AMeshResizer(ETypeConstructPhase);
MRUTILITYKITEDITOR_API UClass* Z_Construct_UClass_URoomAndAnchorObserver(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoomAndAnchorObserver Function OnAnchorCreated **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorCreated_Statics
struct UHT_STATICS
{
	struct RoomAndAnchorObserver_eventOnAnchorCreated_Parms
	{
		AMRUKAnchor* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnAnchorCreated constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnAnchorCreated constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnAnchorCreated Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoomAndAnchorObserver_eventOnAnchorCreated_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnAnchorCreated Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoomAndAnchorObserver, nullptr, "OnAnchorCreated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoomAndAnchorObserver_eventOnAnchorCreated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoomAndAnchorObserver_eventOnAnchorCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorCreated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoomAndAnchorObserver::execOnAnchorCreated)
{
	P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnchorCreated(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class URoomAndAnchorObserver Function OnAnchorCreated ****************************

// ********** Begin Class URoomAndAnchorObserver Function OnAnchorRemoved **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorRemoved_Statics
struct UHT_STATICS
{
	struct RoomAndAnchorObserver_eventOnAnchorRemoved_Parms
	{
		AMRUKAnchor* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnAnchorRemoved constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnAnchorRemoved constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnAnchorRemoved Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoomAndAnchorObserver_eventOnAnchorRemoved_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnAnchorRemoved Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoomAndAnchorObserver, nullptr, "OnAnchorRemoved", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoomAndAnchorObserver_eventOnAnchorRemoved_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoomAndAnchorObserver_eventOnAnchorRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorRemoved(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoomAndAnchorObserver::execOnAnchorRemoved)
{
	P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnchorRemoved(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class URoomAndAnchorObserver Function OnAnchorRemoved ****************************

// ********** Begin Class URoomAndAnchorObserver Function OnAnchorUpdated **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorUpdated_Statics
struct UHT_STATICS
{
	struct RoomAndAnchorObserver_eventOnAnchorUpdated_Parms
	{
		AMRUKAnchor* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnAnchorUpdated constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnAnchorUpdated constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnAnchorUpdated Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoomAndAnchorObserver_eventOnAnchorUpdated_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnAnchorUpdated Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoomAndAnchorObserver, nullptr, "OnAnchorUpdated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoomAndAnchorObserver_eventOnAnchorUpdated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoomAndAnchorObserver_eventOnAnchorUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorUpdated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoomAndAnchorObserver::execOnAnchorUpdated)
{
	P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnchorUpdated(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class URoomAndAnchorObserver Function OnAnchorUpdated ****************************

// ********** Begin Class URoomAndAnchorObserver Function OnRoomCreated ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomCreated_Statics
struct UHT_STATICS
{
	struct RoomAndAnchorObserver_eventOnRoomCreated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomCreated constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomCreated constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomCreated Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoomAndAnchorObserver_eventOnRoomCreated_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoomCreated Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoomAndAnchorObserver, nullptr, "OnRoomCreated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoomAndAnchorObserver_eventOnRoomCreated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoomAndAnchorObserver_eventOnRoomCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomCreated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoomAndAnchorObserver::execOnRoomCreated)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomCreated(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class URoomAndAnchorObserver Function OnRoomCreated ******************************

// ********** Begin Class URoomAndAnchorObserver Function OnRoomRemoved ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomRemoved_Statics
struct UHT_STATICS
{
	struct RoomAndAnchorObserver_eventOnRoomRemoved_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomRemoved constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomRemoved constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomRemoved Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoomAndAnchorObserver_eventOnRoomRemoved_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoomRemoved Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoomAndAnchorObserver, nullptr, "OnRoomRemoved", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoomAndAnchorObserver_eventOnRoomRemoved_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoomAndAnchorObserver_eventOnRoomRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomRemoved(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoomAndAnchorObserver::execOnRoomRemoved)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomRemoved(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class URoomAndAnchorObserver Function OnRoomRemoved ******************************

// ********** Begin Class URoomAndAnchorObserver Function OnRoomUpdated ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomUpdated_Statics
struct UHT_STATICS
{
	struct RoomAndAnchorObserver_eventOnRoomUpdated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomUpdated constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomUpdated constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomUpdated Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoomAndAnchorObserver_eventOnRoomUpdated_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoomUpdated Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoomAndAnchorObserver, nullptr, "OnRoomUpdated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoomAndAnchorObserver_eventOnRoomUpdated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoomAndAnchorObserver_eventOnRoomUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomUpdated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoomAndAnchorObserver::execOnRoomUpdated)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomUpdated(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class URoomAndAnchorObserver Function OnRoomUpdated ******************************

// ********** Begin Class URoomAndAnchorObserver ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoomAndAnchorObserver_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "TestHelper.h" },
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorsCreated_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorsUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorsRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomsCreated_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomsUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomsRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoomAndAnchorObserver constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorsCreated_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorsCreated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorsUpdated_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorsUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorsRemoved_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorsRemoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomsCreated_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomsCreated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomsUpdated_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomsUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomsRemoved_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomsRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoomAndAnchorObserver constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnAnchorCreated"), .Pointer = &URoomAndAnchorObserver::execOnAnchorCreated },
		{ .NameUTF8 = UTF8TEXT("OnAnchorRemoved"), .Pointer = &URoomAndAnchorObserver::execOnAnchorRemoved },
		{ .NameUTF8 = UTF8TEXT("OnAnchorUpdated"), .Pointer = &URoomAndAnchorObserver::execOnAnchorUpdated },
		{ .NameUTF8 = UTF8TEXT("OnRoomCreated"), .Pointer = &URoomAndAnchorObserver::execOnRoomCreated },
		{ .NameUTF8 = UTF8TEXT("OnRoomRemoved"), .Pointer = &URoomAndAnchorObserver::execOnRoomRemoved },
		{ .NameUTF8 = UTF8TEXT("OnRoomUpdated"), .Pointer = &URoomAndAnchorObserver::execOnRoomUpdated },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorCreated, "OnAnchorCreated" }, // be90bef1c49cf9c1e8bc0d2dd492ecd57b8025f4
		{ &Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorRemoved, "OnAnchorRemoved" }, // 41fcfc81b032025a07fac3a77cb399e79a6673ee
		{ &Z_Construct_UFunction_URoomAndAnchorObserver_OnAnchorUpdated, "OnAnchorUpdated" }, // 875026a79bf64cef3d740299dbda953b8c5050aa
		{ &Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomCreated, "OnRoomCreated" }, // 4df1ecb169c61d9552e9f1728ec9aef535a37b0b
		{ &Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomRemoved, "OnRoomRemoved" }, // 3e1476ce59aa43f54cadb441d10a6e1ff368a26f
		{ &Z_Construct_UFunction_URoomAndAnchorObserver_OnRoomUpdated, "OnRoomUpdated" }, // dc9810fc16719d3c046cbc48abb42f0b575482e2
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomAndAnchorObserver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoomAndAnchorObserver Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnchorsCreated_Inner = { "AnchorsCreated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AnchorsCreated = { "AnchorsCreated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoomAndAnchorObserver, AnchorsCreated), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorsCreated_MetaData), NewProp_AnchorsCreated_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnchorsUpdated_Inner = { "AnchorsUpdated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AnchorsUpdated = { "AnchorsUpdated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoomAndAnchorObserver, AnchorsUpdated), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorsUpdated_MetaData), NewProp_AnchorsUpdated_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnchorsRemoved_Inner = { "AnchorsRemoved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AnchorsRemoved = { "AnchorsRemoved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoomAndAnchorObserver, AnchorsRemoved), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorsRemoved_MetaData), NewProp_AnchorsRemoved_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoomsCreated_Inner = { "RoomsCreated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoomsCreated = { "RoomsCreated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoomAndAnchorObserver, RoomsCreated), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomsCreated_MetaData), NewProp_RoomsCreated_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoomsUpdated_Inner = { "RoomsUpdated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoomsUpdated = { "RoomsUpdated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoomAndAnchorObserver, RoomsUpdated), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomsUpdated_MetaData), NewProp_RoomsUpdated_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoomsRemoved_Inner = { "RoomsRemoved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoomsRemoved = { "RoomsRemoved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoomAndAnchorObserver, RoomsRemoved), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomsRemoved_MetaData), NewProp_RoomsRemoved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorsCreated_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorsCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorsUpdated_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorsRemoved_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorsRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomsCreated_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomsCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomsUpdated_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomsRemoved_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomsRemoved,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoomAndAnchorObserver Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKitEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoomAndAnchorObserver,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URoomAndAnchorObserver_StaticRegisterNativesURoomAndAnchorObserver()
{
	UClass* Class = URoomAndAnchorObserver::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoomAndAnchorObserver;
UClass* Z_Construct_UClass_URoomAndAnchorObserver(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoomAndAnchorObserver;
		if (!Z_Registration_Info_UClass_URoomAndAnchorObserver.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoomAndAnchorObserver"),
				Z_Registration_Info_UClass_URoomAndAnchorObserver.InnerSingleton,
				URoomAndAnchorObserver_StaticRegisterNativesURoomAndAnchorObserver,
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
		return Z_Registration_Info_UClass_URoomAndAnchorObserver.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoomAndAnchorObserver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomAndAnchorObserver.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomAndAnchorObserver.OuterSingleton;
}
#undef UHT_STATICS
URoomAndAnchorObserver::URoomAndAnchorObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomAndAnchorObserver);
URoomAndAnchorObserver::~URoomAndAnchorObserver() {}
// ********** End Class URoomAndAnchorObserver *****************************************************

// ********** Begin Class AMeshResizer *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMeshResizer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "TestHelper.h" },
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSliceResizerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TestHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMeshResizer constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSliceResizerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMeshResizer constinit property declarations *******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshResizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMeshResizer Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GridSliceResizerComponent = { "GridSliceResizerComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMeshResizer, GridSliceResizerComponent), Z_Construct_UClass_UMRUKGridSliceResizerComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSliceResizerComponent_MetaData), NewProp_GridSliceResizerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GridSliceResizerComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMeshResizer Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKitEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMeshResizer,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_AMeshResizer;
UClass* Z_Construct_UClass_AMeshResizer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMeshResizer;
		if (!Z_Registration_Info_UClass_AMeshResizer.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MeshResizer"),
				Z_Registration_Info_UClass_AMeshResizer.InnerSingleton,
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
		return Z_Registration_Info_UClass_AMeshResizer.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMeshResizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeshResizer.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMeshResizer.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMeshResizer);
AMeshResizer::~AMeshResizer() {}
// ********** End Class AMeshResizer ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKitEditor_Private_TestHelper_h__Script_MRUtilityKitEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomAndAnchorObserver, TEXT("URoomAndAnchorObserver"), &Z_Registration_Info_UClass_URoomAndAnchorObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomAndAnchorObserver), 3962637781U) },
		{ Z_Construct_UClass_AMeshResizer, TEXT("AMeshResizer"), &Z_Registration_Info_UClass_AMeshResizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeshResizer), 1521061663U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKitEditor_Private_TestHelper_h__Script_MRUtilityKitEditor_f6425febd644a632b991e3ec71e3b4d13c05a935{
	TEXT("/Script/MRUtilityKitEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
