// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAnchorComponent.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorComponent(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRAnchorComponent Function GetHandle ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorComponent_eventGetHandle_Parms
	{
		FOculusXRUInt64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandle constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandle constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandle Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorComponent_eventGetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHandle Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "GetHandle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorComponent_eventGetHandle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorComponent_eventGetHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorComponent::execGetHandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOculusXRUInt64*)Z_Param__Result=P_THIS->GetHandle();
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorComponent Function GetHandle ********************************

// ********** Begin Class UOculusXRAnchorComponent Function GetUUID ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorComponent_eventGetUUID_Parms
	{
		FOculusXRUUID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUUID constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUUID constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUUID Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorComponent_eventGetUUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetUUID Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "GetUUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorComponent_eventGetUUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorComponent_eventGetUUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorComponent::execGetUUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOculusXRUUID*)Z_Param__Result=P_THIS->GetUUID();
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorComponent Function GetUUID **********************************

// ********** Begin Class UOculusXRAnchorComponent Function HasValidHandle *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorComponent_eventHasValidHandle_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasValidHandle constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorComponent_eventHasValidHandle_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasValidHandle constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasValidHandle Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorComponent_eventHasValidHandle_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasValidHandle Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "HasValidHandle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorComponent_eventHasValidHandle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorComponent_eventHasValidHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorComponent::execHasValidHandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidHandle();
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorComponent Function HasValidHandle ***************************

// ********** Begin Class UOculusXRAnchorComponent Function IsSaved ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorComponent_eventIsSaved_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSaved constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorComponent_eventIsSaved_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSaved constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSaved Property Definitions ******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorComponent_eventIsSaved_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsSaved Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "IsSaved", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorComponent_eventIsSaved_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorComponent_eventIsSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorComponent::execIsSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSaved();
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorComponent Function IsSaved **********************************

// ********** Begin Class UOculusXRAnchorComponent Function IsStoredAtLocation *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorComponent_eventIsStoredAtLocation_Parms
	{
		EOculusXRSpaceStorageLocation Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsStoredAtLocation constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorComponent_eventIsStoredAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsStoredAtLocation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsStoredAtLocation Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorComponent_eventIsStoredAtLocation_Parms, Location), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(0, nullptr) }; // 920cba6c998c206f10bef9da516f98d1e7e6f8f4
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorComponent_eventIsStoredAtLocation_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsStoredAtLocation Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "IsStoredAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorComponent_eventIsStoredAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorComponent_eventIsStoredAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorComponent::execIsStoredAtLocation)
{
	P_GET_ENUM(EOculusXRSpaceStorageLocation,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStoredAtLocation(EOculusXRSpaceStorageLocation(Z_Param_Location));
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorComponent Function IsStoredAtLocation ***********************

// ********** Begin Class UOculusXRAnchorComponent Function SetHandle ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics
struct UHT_STATICS
{
	struct OculusXRAnchorComponent_eventSetHandle_Parms
	{
		FOculusXRUInt64 Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHandle constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHandle constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHandle Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorComponent_eventSetHandle_Parms, Handle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHandle Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "SetHandle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAnchorComponent_eventSetHandle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAnchorComponent_eventSetHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAnchorComponent::execSetHandle)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAnchorComponent Function SetHandle ********************************

// ********** Begin Class UOculusXRAnchorComponent *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRAnchorComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DisplayName", "Oculus Anchor Component" },
		{ "IncludePath", "OculusXRAnchorComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRAnchorComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRAnchorComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHandle"), .Pointer = &UOculusXRAnchorComponent::execGetHandle },
		{ .NameUTF8 = UTF8TEXT("GetUUID"), .Pointer = &UOculusXRAnchorComponent::execGetUUID },
		{ .NameUTF8 = UTF8TEXT("HasValidHandle"), .Pointer = &UOculusXRAnchorComponent::execHasValidHandle },
		{ .NameUTF8 = UTF8TEXT("IsSaved"), .Pointer = &UOculusXRAnchorComponent::execIsSaved },
		{ .NameUTF8 = UTF8TEXT("IsStoredAtLocation"), .Pointer = &UOculusXRAnchorComponent::execIsStoredAtLocation },
		{ .NameUTF8 = UTF8TEXT("SetHandle"), .Pointer = &UOculusXRAnchorComponent::execSetHandle },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle, "GetHandle" }, // aacb4a420b8f708e1e53c4e57a0d66feb2b6f7db
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID, "GetUUID" }, // dae273a2f36a23f27deac25ce049d134a47a4d57
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle, "HasValidHandle" }, // 7af825e0bbe603dc96b6ffc5193c365d4308ca02
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved, "IsSaved" }, // f02a50098399e71149ea28836ef646a44fc4d184
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation, "IsStoredAtLocation" }, // 30b22403750956f51117e9eaa022c205cfc4cda6
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle, "SetHandle" }, // 017dfee0b34fbfd4190b31206017150c1f971be2
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRAnchorComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAnchorComponent, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCameraManager_MetaData), NewProp_PlayerCameraManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerCameraManager,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRAnchorComponent Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRAnchorComponent,
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
static void UOculusXRAnchorComponent_StaticRegisterNativesUOculusXRAnchorComponent()
{
	UClass* Class = UOculusXRAnchorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAnchorComponent;
UClass* Z_Construct_UClass_UOculusXRAnchorComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRAnchorComponent;
		if (!Z_Registration_Info_UClass_UOculusXRAnchorComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRAnchorComponent"),
				Z_Registration_Info_UClass_UOculusXRAnchorComponent.InnerSingleton,
				UOculusXRAnchorComponent_StaticRegisterNativesUOculusXRAnchorComponent,
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
		return Z_Registration_Info_UClass_UOculusXRAnchorComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAnchorComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAnchorComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRAnchorComponent);
UOculusXRAnchorComponent::~UOculusXRAnchorComponent() {}
// ********** End Class UOculusXRAnchorComponent ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h__Script_OculusXRAnchors_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAnchorComponent, TEXT("UOculusXRAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAnchorComponent), 3959248003U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h__Script_OculusXRAnchors_c44f85c971e5548b227763e2dc82b898d762d7a0{
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
