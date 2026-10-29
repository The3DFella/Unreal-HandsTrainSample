// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitBPLibrary.h"
#include "MRUtilityKit.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D(ETypeConstructPhase);
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBPLibrary(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKConfigureTrackables(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromDevice(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromJson(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKLoadFromJson_MRUKLoaded__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKMeshSegment(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKConfigureTrackables_MRUKTrackablesConfigured__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTrackerConfiguration(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBPLibrary(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKConfigureTrackables(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromDevice(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromJson(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMRUKMeshSegment **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKMeshSegment_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKMeshSegment>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKMeshSegment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKMeshSegment constinit property declarations ******************
// ********** End ScriptStruct FMRUKMeshSegment constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKMeshSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKMeshSegment",
	nullptr,
	0,
	DataSizeOf<FMRUKMeshSegment>(),
	alignof(FMRUKMeshSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKMeshSegment;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKMeshSegment(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKMeshSegment.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKMeshSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKMeshSegment, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKMeshSegment"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKMeshSegment.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKMeshSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKMeshSegment.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKMeshSegment.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKMeshSegment ****************************************************

// ********** Begin Delegate FMRUKLoaded ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FMRUKLoaded constinit property declarations ***************************
// ********** End Delegate FMRUKLoaded constinit property declarations *****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKLoadFromDevice, nullptr, "MRUKLoaded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FMRUKLoaded *************************************************************

// ********** Begin Class UMRUKLoadFromDevice Function LoadSceneFromDeviceAsync ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics
struct UHT_STATICS
{
	struct MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms
	{
		const UObject* WorldContext;
		TArray<FOculusXRUUID> RoomAnchorUUIDs;
		FOculusXRUUID GroupUUID;
		EMRUKSceneModel SceneModel;
		UMRUKLoadFromDevice* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "RoomAnchorUUIDs, GroupUUID" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// metaxr_redact_ifdef OVR_PARTNER_CODE // XR_META_spatial_entity_room_sharing\n// metaxr_redact_endif OVR_PARTNER_CODE // XR_META_spatial_entity_room_sharing\n// metaxr_redact_ifdef OVR_PARTNER_CODE // XR_META_spatial_entity_room_sharing\n// metaxr_redact_endif OVR_PARTNER_CODE // XR_META_spatial_entity_room_sharing\n" },
#endif
		{ "CPP_Default_SceneModel", "V1" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "metaxr_redact_ifdef OVR_PARTNER_CODE  XR_META_spatial_entity_room_sharing\nmetaxr_redact_endif OVR_PARTNER_CODE  XR_META_spatial_entity_room_sharing\nmetaxr_redact_ifdef OVR_PARTNER_CODE  XR_META_spatial_entity_room_sharing\nmetaxr_redact_endif OVR_PARTNER_CODE  XR_META_spatial_entity_room_sharing" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomAnchorUUIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadSceneFromDeviceAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomAnchorUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomAnchorUUIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupUUID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadSceneFromDeviceAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadSceneFromDeviceAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomAnchorUUIDs_Inner = { "RoomAnchorUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoomAnchorUUIDs = { "RoomAnchorUUIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms, RoomAnchorUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomAnchorUUIDs_MetaData), NewProp_RoomAnchorUUIDs_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroupUUID = { "GroupUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms, GroupUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SceneModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SceneModel = { "SceneModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms, SceneModel), Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel, METADATA_PARAMS(0, nullptr) }; // c8ae42e2a545d7ec4f98bf31f76b7eea67fdd930
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms, ReturnValue), Z_Construct_UClass_UMRUKLoadFromDevice, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomAnchorUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomAnchorUUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadSceneFromDeviceAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKLoadFromDevice, nullptr, "LoadSceneFromDeviceAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKLoadFromDevice::execLoadSceneFromDeviceAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_TARRAY_REF(FOculusXRUUID,Z_Param_Out_RoomAnchorUUIDs);
	P_GET_STRUCT(FOculusXRUUID,Z_Param_GroupUUID);
	P_GET_ENUM(EMRUKSceneModel,Z_Param_SceneModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMRUKLoadFromDevice**)Z_Param__Result=UMRUKLoadFromDevice::LoadSceneFromDeviceAsync(Z_Param_WorldContext,Z_Param_Out_RoomAnchorUUIDs,Z_Param_GroupUUID,EMRUKSceneModel(Z_Param_SceneModel));
	P_NATIVE_END;
}
// ********** End Class UMRUKLoadFromDevice Function LoadSceneFromDeviceAsync **********************

// ********** Begin Class UMRUKLoadFromDevice Function OnSceneLoaded *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics
struct UHT_STATICS
{
	struct MRUKLoadFromDevice_eventOnSceneLoaded_Parms
	{
		bool Succeeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSceneLoaded constinit property declarations *************************
	static void NewProp_Succeeded_SetBit(void* Obj)
	{
		((MRUKLoadFromDevice_eventOnSceneLoaded_Parms*)Obj)->Succeeded = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSceneLoaded constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSceneLoaded Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKLoadFromDevice_eventOnSceneLoaded_Parms), &UHT_STATICS::NewProp_Succeeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Succeeded,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnSceneLoaded Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKLoadFromDevice, nullptr, "OnSceneLoaded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKLoadFromDevice_eventOnSceneLoaded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKLoadFromDevice_eventOnSceneLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKLoadFromDevice::execOnSceneLoaded)
{
	P_GET_UBOOL(Z_Param_Succeeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSceneLoaded(Z_Param_Succeeded);
	P_NATIVE_END;
}
// ********** End Class UMRUKLoadFromDevice Function OnSceneLoaded *********************************

// ********** Begin Class UMRUKLoadFromDevice ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKLoadFromDevice_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Load the scene async from device.\n */" },
#endif
		{ "IncludePath", "MRUtilityKitBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load the scene async from device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKLoadFromDevice constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKLoadFromDevice constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LoadSceneFromDeviceAsync"), .Pointer = &UMRUKLoadFromDevice::execLoadSceneFromDeviceAsync },
		{ .NameUTF8 = UTF8TEXT("OnSceneLoaded"), .Pointer = &UMRUKLoadFromDevice::execOnSceneLoaded },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync, "LoadSceneFromDeviceAsync" }, // 7cf6325a9c6fa745faeddedce3fbacc96f7df99d
		{ &Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature, "MRUKLoaded__DelegateSignature" }, // d5c4d5b40c615990c70ef9b4fd45ff8037ac10d8
		{ &Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded, "OnSceneLoaded" }, // 465551bcaa32d438ca775ba9fb65ca9b56c4a2b2
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKLoadFromDevice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKLoadFromDevice Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKLoadFromDevice, Success), Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // d5c4d5b40c615990c70ef9b4fd45ff8037ac10d8
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKLoadFromDevice, Failure), Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // d5c4d5b40c615990c70ef9b4fd45ff8037ac10d8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKLoadFromDevice Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKLoadFromDevice,
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
static void UMRUKLoadFromDevice_StaticRegisterNativesUMRUKLoadFromDevice()
{
	UClass* Class = UMRUKLoadFromDevice::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKLoadFromDevice;
UClass* Z_Construct_UClass_UMRUKLoadFromDevice(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKLoadFromDevice;
		if (!Z_Registration_Info_UClass_UMRUKLoadFromDevice.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKLoadFromDevice"),
				Z_Registration_Info_UClass_UMRUKLoadFromDevice.InnerSingleton,
				UMRUKLoadFromDevice_StaticRegisterNativesUMRUKLoadFromDevice,
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
		return Z_Registration_Info_UClass_UMRUKLoadFromDevice.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKLoadFromDevice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKLoadFromDevice.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKLoadFromDevice.OuterSingleton;
}
#undef UHT_STATICS
UMRUKLoadFromDevice::UMRUKLoadFromDevice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKLoadFromDevice);
UMRUKLoadFromDevice::~UMRUKLoadFromDevice() {}
// ********** End Class UMRUKLoadFromDevice ********************************************************

// ********** Begin Delegate FMRUKTrackablesConfigured *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKConfigureTrackables_MRUKTrackablesConfigured__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FMRUKTrackablesConfigured constinit property declarations *************
// ********** End Delegate FMRUKTrackablesConfigured constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKConfigureTrackables, nullptr, "MRUKTrackablesConfigured__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_UMRUKConfigureTrackables_MRUKTrackablesConfigured__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FMRUKTrackablesConfigured ***********************************************

// ********** Begin Class UMRUKConfigureTrackables Function ConfigureTrackablesAsync ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKConfigureTrackables_ConfigureTrackablesAsync_Statics
struct UHT_STATICS
{
	struct MRUKConfigureTrackables_eventConfigureTrackablesAsync_Parms
	{
		const UObject* WorldContext;
		FMRUKTrackerConfiguration Configuration;
		UMRUKConfigureTrackables* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConfigureTrackablesAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConfigureTrackablesAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConfigureTrackablesAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKConfigureTrackables_eventConfigureTrackablesAsync_Parms, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKConfigureTrackables_eventConfigureTrackablesAsync_Parms, Configuration), Z_Construct_UScriptStruct_FMRUKTrackerConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configuration_MetaData), NewProp_Configuration_MetaData) }; // fd80a2a24e5de9634425ea9dc39165e8e443f869
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKConfigureTrackables_eventConfigureTrackablesAsync_Parms, ReturnValue), Z_Construct_UClass_UMRUKConfigureTrackables, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConfigureTrackablesAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKConfigureTrackables, nullptr, "ConfigureTrackablesAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKConfigureTrackables_eventConfigureTrackablesAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKConfigureTrackables_eventConfigureTrackablesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKConfigureTrackables_ConfigureTrackablesAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKConfigureTrackables::execConfigureTrackablesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FMRUKTrackerConfiguration,Z_Param_Out_Configuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMRUKConfigureTrackables**)Z_Param__Result=UMRUKConfigureTrackables::ConfigureTrackablesAsync(Z_Param_WorldContext,Z_Param_Out_Configuration);
	P_NATIVE_END;
}
// ********** End Class UMRUKConfigureTrackables Function ConfigureTrackablesAsync *****************

// ********** Begin Class UMRUKConfigureTrackables Function OnTrackablesConfigured *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKConfigureTrackables_OnTrackablesConfigured_Statics
struct UHT_STATICS
{
	struct MRUKConfigureTrackables_eventOnTrackablesConfigured_Parms
	{
		bool Succeeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnTrackablesConfigured constinit property declarations ****************
	static void NewProp_Succeeded_SetBit(void* Obj)
	{
		((MRUKConfigureTrackables_eventOnTrackablesConfigured_Parms*)Obj)->Succeeded = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnTrackablesConfigured constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnTrackablesConfigured Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKConfigureTrackables_eventOnTrackablesConfigured_Parms), &UHT_STATICS::NewProp_Succeeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Succeeded,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnTrackablesConfigured Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKConfigureTrackables, nullptr, "OnTrackablesConfigured", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKConfigureTrackables_eventOnTrackablesConfigured_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKConfigureTrackables_eventOnTrackablesConfigured_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKConfigureTrackables_OnTrackablesConfigured(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKConfigureTrackables::execOnTrackablesConfigured)
{
	P_GET_UBOOL(Z_Param_Succeeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTrackablesConfigured(Z_Param_Succeeded);
	P_NATIVE_END;
}
// ********** End Class UMRUKConfigureTrackables Function OnTrackablesConfigured *******************

// ********** Begin Class UMRUKConfigureTrackables *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKConfigureTrackables_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Configure trackables async.\n */" },
#endif
		{ "IncludePath", "MRUtilityKitBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure trackables async." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKConfigureTrackables constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKConfigureTrackables constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConfigureTrackablesAsync"), .Pointer = &UMRUKConfigureTrackables::execConfigureTrackablesAsync },
		{ .NameUTF8 = UTF8TEXT("OnTrackablesConfigured"), .Pointer = &UMRUKConfigureTrackables::execOnTrackablesConfigured },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKConfigureTrackables_ConfigureTrackablesAsync, "ConfigureTrackablesAsync" }, // b58e70fe2d8e1f1783c8215255c41591b5fbd3a1
		{ &Z_Construct_UDelegateFunction_UMRUKConfigureTrackables_MRUKTrackablesConfigured__DelegateSignature, "MRUKTrackablesConfigured__DelegateSignature" }, // b5c091d3160a3b5e6717e0f66e491da05d7ad3de
		{ &Z_Construct_UFunction_UMRUKConfigureTrackables_OnTrackablesConfigured, "OnTrackablesConfigured" }, // 72565bac775430562c1fb7e0339938f90b9afada
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKConfigureTrackables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKConfigureTrackables Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKConfigureTrackables, Success), Z_Construct_UDelegateFunction_UMRUKConfigureTrackables_MRUKTrackablesConfigured__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // b5c091d3160a3b5e6717e0f66e491da05d7ad3de
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKConfigureTrackables, Failure), Z_Construct_UDelegateFunction_UMRUKConfigureTrackables_MRUKTrackablesConfigured__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // b5c091d3160a3b5e6717e0f66e491da05d7ad3de
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKConfigureTrackables Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKConfigureTrackables,
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
static void UMRUKConfigureTrackables_StaticRegisterNativesUMRUKConfigureTrackables()
{
	UClass* Class = UMRUKConfigureTrackables::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKConfigureTrackables;
UClass* Z_Construct_UClass_UMRUKConfigureTrackables(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKConfigureTrackables;
		if (!Z_Registration_Info_UClass_UMRUKConfigureTrackables.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKConfigureTrackables"),
				Z_Registration_Info_UClass_UMRUKConfigureTrackables.InnerSingleton,
				UMRUKConfigureTrackables_StaticRegisterNativesUMRUKConfigureTrackables,
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
		return Z_Registration_Info_UClass_UMRUKConfigureTrackables.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKConfigureTrackables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKConfigureTrackables.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKConfigureTrackables.OuterSingleton;
}
#undef UHT_STATICS
UMRUKConfigureTrackables::UMRUKConfigureTrackables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKConfigureTrackables);
UMRUKConfigureTrackables::~UMRUKConfigureTrackables() {}
// ********** End Class UMRUKConfigureTrackables ***************************************************

// ********** Begin Delegate FMRUKLoaded ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UMRUKLoadFromJson_MRUKLoaded__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FMRUKLoaded constinit property declarations ***************************
// ********** End Delegate FMRUKLoaded constinit property declarations *****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKLoadFromJson, nullptr, "MRUKLoaded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_UMRUKLoadFromJson_MRUKLoaded__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FMRUKLoaded *************************************************************

// ********** Begin Class UMRUKLoadFromJson Function LoadSceneFromJsonAsync ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKLoadFromJson_LoadSceneFromJsonAsync_Statics
struct UHT_STATICS
{
	struct MRUKLoadFromJson_eventLoadSceneFromJsonAsync_Parms
	{
		const UObject* WorldContext;
		FString JsonString;
		EMRUKSceneModel SceneModel;
		UMRUKLoadFromJson* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "MR Utility Kit" },
		{ "CPP_Default_SceneModel", "V1" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadSceneFromJsonAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadSceneFromJsonAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadSceneFromJsonAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromJson_eventLoadSceneFromJsonAsync_Parms, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromJson_eventLoadSceneFromJsonAsync_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SceneModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SceneModel = { "SceneModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromJson_eventLoadSceneFromJsonAsync_Parms, SceneModel), Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel, METADATA_PARAMS(0, nullptr) }; // c8ae42e2a545d7ec4f98bf31f76b7eea67fdd930
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromJson_eventLoadSceneFromJsonAsync_Parms, ReturnValue), Z_Construct_UClass_UMRUKLoadFromJson, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadSceneFromJsonAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKLoadFromJson, nullptr, "LoadSceneFromJsonAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKLoadFromJson_eventLoadSceneFromJsonAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKLoadFromJson_eventLoadSceneFromJsonAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKLoadFromJson_LoadSceneFromJsonAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKLoadFromJson::execLoadSceneFromJsonAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_ENUM(EMRUKSceneModel,Z_Param_SceneModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMRUKLoadFromJson**)Z_Param__Result=UMRUKLoadFromJson::LoadSceneFromJsonAsync(Z_Param_WorldContext,Z_Param_JsonString,EMRUKSceneModel(Z_Param_SceneModel));
	P_NATIVE_END;
}
// ********** End Class UMRUKLoadFromJson Function LoadSceneFromJsonAsync **************************

// ********** Begin Class UMRUKLoadFromJson Function OnSceneLoaded *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKLoadFromJson_OnSceneLoaded_Statics
struct UHT_STATICS
{
	struct MRUKLoadFromJson_eventOnSceneLoaded_Parms
	{
		bool Succeeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSceneLoaded constinit property declarations *************************
	static void NewProp_Succeeded_SetBit(void* Obj)
	{
		((MRUKLoadFromJson_eventOnSceneLoaded_Parms*)Obj)->Succeeded = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSceneLoaded constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSceneLoaded Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKLoadFromJson_eventOnSceneLoaded_Parms), &UHT_STATICS::NewProp_Succeeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Succeeded,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnSceneLoaded Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKLoadFromJson, nullptr, "OnSceneLoaded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKLoadFromJson_eventOnSceneLoaded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKLoadFromJson_eventOnSceneLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKLoadFromJson_OnSceneLoaded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKLoadFromJson::execOnSceneLoaded)
{
	P_GET_UBOOL(Z_Param_Succeeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSceneLoaded(Z_Param_Succeeded);
	P_NATIVE_END;
}
// ********** End Class UMRUKLoadFromJson Function OnSceneLoaded ***********************************

// ********** Begin Class UMRUKLoadFromJson ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKLoadFromJson_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "MRUtilityKitBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKLoadFromJson constinit property declarations ************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKLoadFromJson constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LoadSceneFromJsonAsync"), .Pointer = &UMRUKLoadFromJson::execLoadSceneFromJsonAsync },
		{ .NameUTF8 = UTF8TEXT("OnSceneLoaded"), .Pointer = &UMRUKLoadFromJson::execOnSceneLoaded },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKLoadFromJson_LoadSceneFromJsonAsync, "LoadSceneFromJsonAsync" }, // 672afc8b036f9a98749b794dca63f1340e71740f
		{ &Z_Construct_UDelegateFunction_UMRUKLoadFromJson_MRUKLoaded__DelegateSignature, "MRUKLoaded__DelegateSignature" }, // 157fa6da9ecf99dcbc63e245dc4cb1e60682d4d1
		{ &Z_Construct_UFunction_UMRUKLoadFromJson_OnSceneLoaded, "OnSceneLoaded" }, // eaaba4affd320f191c1afead36f64fd2e6481489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKLoadFromJson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKLoadFromJson Property Definitions ***********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKLoadFromJson, Success), Z_Construct_UDelegateFunction_UMRUKLoadFromJson_MRUKLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 157fa6da9ecf99dcbc63e245dc4cb1e60682d4d1
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKLoadFromJson, Failure), Z_Construct_UDelegateFunction_UMRUKLoadFromJson_MRUKLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 157fa6da9ecf99dcbc63e245dc4cb1e60682d4d1
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKLoadFromJson Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKLoadFromJson,
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
static void UMRUKLoadFromJson_StaticRegisterNativesUMRUKLoadFromJson()
{
	UClass* Class = UMRUKLoadFromJson::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKLoadFromJson;
UClass* Z_Construct_UClass_UMRUKLoadFromJson(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKLoadFromJson;
		if (!Z_Registration_Info_UClass_UMRUKLoadFromJson.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKLoadFromJson"),
				Z_Registration_Info_UClass_UMRUKLoadFromJson.InnerSingleton,
				UMRUKLoadFromJson_StaticRegisterNativesUMRUKLoadFromJson,
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
		return Z_Registration_Info_UClass_UMRUKLoadFromJson.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKLoadFromJson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKLoadFromJson.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKLoadFromJson.OuterSingleton;
}
#undef UHT_STATICS
UMRUKLoadFromJson::UMRUKLoadFromJson(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKLoadFromJson);
UMRUKLoadFromJson::~UMRUKLoadFromJson() {}
// ********** End Class UMRUKLoadFromJson **********************************************************

// ********** Begin Class UMRUKBPLibrary Function ComputeCentroid **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBPLibrary_ComputeCentroid_Statics
struct UHT_STATICS
{
	struct MRUKBPLibrary_eventComputeCentroid_Parms
	{
		TArray<FVector2D> PolygonPoints;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Compute the centroid of a polygon that is defined by the points.\n\x09 *  The centroid may be outside of the polygon in case the polygon is non convex.\n\x09 * @param PolygonPoints Points that define the polygon.\n\x09 * @return The centroid.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compute the centroid of a polygon that is defined by the points.\nThe centroid may be outside of the polygon in case the polygon is non convex.\n@param PolygonPoints Points that define the polygon.\n@return The centroid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ComputeCentroid constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ComputeCentroid constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ComputeCentroid Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PolygonPoints_Inner = { "PolygonPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PolygonPoints = { "PolygonPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventComputeCentroid_Parms, PolygonPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonPoints_MetaData), NewProp_PolygonPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventComputeCentroid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolygonPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolygonPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ComputeCentroid Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBPLibrary, nullptr, "ComputeCentroid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKBPLibrary_eventComputeCentroid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKBPLibrary_eventComputeCentroid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKBPLibrary_ComputeCentroid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBPLibrary::execComputeCentroid)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PolygonPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UMRUKBPLibrary::ComputeCentroid(Z_Param_Out_PolygonPoints);
	P_NATIVE_END;
}
// ********** End Class UMRUKBPLibrary Function ComputeCentroid ************************************

// ********** Begin Class UMRUKBPLibrary Function ComputeDirectionAwayFromClosestWall **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBPLibrary_ComputeDirectionAwayFromClosestWall_Statics
struct UHT_STATICS
{
	struct MRUKBPLibrary_eventComputeDirectionAwayFromClosestWall_Parms
	{
		const AMRUKAnchor* Anchor;
		int32 OutCardinalAxisIndex;
		TArray<int32> ExcludedAxes;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Compute the direction that faces away from the closest wall of the given anchor.\n\x09 * @param Anchor The anchor for which the direction should be computed.\n\x09 * @param OutCardinalAxisIndex The index of the computed cardinal axis. Can be either 0, 1, 2 or 3\n\x09 * @param ExcludedAxes Axes to exclude in the computation. Can contain 0, 1, 2, 3\n\x09 * @return The direction\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compute the direction that faces away from the closest wall of the given anchor.\n@param Anchor The anchor for which the direction should be computed.\n@param OutCardinalAxisIndex The index of the computed cardinal axis. Can be either 0, 1, 2 or 3\n@param ExcludedAxes Axes to exclude in the computation. Can contain 0, 1, 2, 3\n@return The direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAxes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ComputeDirectionAwayFromClosestWall constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutCardinalAxisIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExcludedAxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAxes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ComputeDirectionAwayFromClosestWall constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ComputeDirectionAwayFromClosestWall Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventComputeDirectionAwayFromClosestWall_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anchor_MetaData), NewProp_Anchor_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutCardinalAxisIndex = { "OutCardinalAxisIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventComputeDirectionAwayFromClosestWall_Parms, OutCardinalAxisIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ExcludedAxes_Inner = { "ExcludedAxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExcludedAxes = { "ExcludedAxes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventComputeDirectionAwayFromClosestWall_Parms, ExcludedAxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedAxes_MetaData), NewProp_ExcludedAxes_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventComputeDirectionAwayFromClosestWall_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCardinalAxisIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExcludedAxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExcludedAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ComputeDirectionAwayFromClosestWall Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBPLibrary, nullptr, "ComputeDirectionAwayFromClosestWall", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKBPLibrary_eventComputeDirectionAwayFromClosestWall_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKBPLibrary_eventComputeDirectionAwayFromClosestWall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKBPLibrary_ComputeDirectionAwayFromClosestWall(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBPLibrary::execComputeDirectionAwayFromClosestWall)
{
	P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCardinalAxisIndex);
	P_GET_TARRAY(int32,Z_Param_ExcludedAxes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMRUKBPLibrary::ComputeDirectionAwayFromClosestWall(Z_Param_Anchor,Z_Param_Out_OutCardinalAxisIndex,Z_Param_ExcludedAxes);
	P_NATIVE_END;
}
// ********** End Class UMRUKBPLibrary Function ComputeDirectionAwayFromClosestWall ****************

// ********** Begin Class UMRUKBPLibrary Function ConstructTexture2D *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBPLibrary_ConstructTexture2D_Statics
struct UHT_STATICS
{
	struct MRUKBPLibrary_eventConstructTexture2D_Parms
	{
		UTextureRenderTarget2D* RenderTarget2D;
		UObject* Outer;
		FString TexName;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Construct a 2D texture from a render target.\n\x09 * @param RenderTarget2D The render target from which the texture should be created.\n\x09 * @param Outer\x09The (optional) outer object for the created texture.\n\x09 * @param TexName Name for the new texture.\n\x09 * @return The newly created texture.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Construct a 2D texture from a render target.\n@param RenderTarget2D The render target from which the texture should be created.\n@param Outer The (optional) outer object for the created texture.\n@param TexName Name for the new texture.\n@return The newly created texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructTexture2D constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget2D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TexName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructTexture2D constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructTexture2D Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RenderTarget2D = { "RenderTarget2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventConstructTexture2D_Parms, RenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventConstructTexture2D_Parms, Outer), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TexName = { "TexName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventConstructTexture2D_Parms, TexName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexName_MetaData), NewProp_TexName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventConstructTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderTarget2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TexName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConstructTexture2D Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBPLibrary, nullptr, "ConstructTexture2D", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKBPLibrary_eventConstructTexture2D_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKBPLibrary_eventConstructTexture2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKBPLibrary_ConstructTexture2D(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBPLibrary::execConstructTexture2D)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget2D);
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_GET_PROPERTY(FStrProperty,Z_Param_TexName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UMRUKBPLibrary::ConstructTexture2D(Z_Param_RenderTarget2D,Z_Param_Outer,Z_Param_TexName);
	P_NATIVE_END;
}
// ********** End Class UMRUKBPLibrary Function ConstructTexture2D *********************************

// ********** Begin Class UMRUKBPLibrary Function GetMatrixColumn **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBPLibrary_GetMatrixColumn_Statics
struct UHT_STATICS
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct MRUKBPLibrary_eventGetMatrixColumn_Parms
	{
		FMatrix Matrix;
		int32 Index;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Extract a column from a matrix.\n\x09 * @param Matrix The matrix to use.\n\x09 * @param Index The column index.\n\x09 * @return The column of the matrix.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extract a column from a matrix.\n@param Matrix The matrix to use.\n@param Index The column index.\n@return The column of the matrix." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMatrixColumn constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMatrixColumn constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMatrixColumn Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventGetMatrixColumn_Parms, Matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matrix_MetaData), NewProp_Matrix_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventGetMatrixColumn_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventGetMatrixColumn_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Matrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMatrixColumn Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBPLibrary, nullptr, "GetMatrixColumn", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKBPLibrary_eventGetMatrixColumn_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKBPLibrary_eventGetMatrixColumn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKBPLibrary_GetMatrixColumn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBPLibrary::execGetMatrixColumn)
{
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_Matrix);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UMRUKBPLibrary::GetMatrixColumn(Z_Param_Out_Matrix,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UMRUKBPLibrary Function GetMatrixColumn ************************************

// ********** Begin Class UMRUKBPLibrary Function IsUnrealEngineMetaFork ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics
struct UHT_STATICS
{
	struct MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the current Unreal Engine is the fork of Meta.\n\x09 * @return Whether its the fork or not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current Unreal Engine is the fork of Meta.\n@return Whether its the fork or not." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsUnrealEngineMetaFork constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsUnrealEngineMetaFork constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsUnrealEngineMetaFork Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsUnrealEngineMetaFork Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBPLibrary, nullptr, "IsUnrealEngineMetaFork", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBPLibrary::execIsUnrealEngineMetaFork)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMRUKBPLibrary::IsUnrealEngineMetaFork();
	P_NATIVE_END;
}
// ********** End Class UMRUKBPLibrary Function IsUnrealEngineMetaFork *****************************

// ********** Begin Class UMRUKBPLibrary Function LoadGlobalMeshFromDevice *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics
struct UHT_STATICS
{
	struct MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms
	{
		FOculusXRUInt64 SpaceHandle;
		UProceduralMeshComponent* OutProceduralMesh;
		bool LoadCollision;
		const UObject* WorldContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Load the global mesh from the device.\n\x09 * @param SpaceHandle       Space handle of the room.\n\x09 * @param OutProceduralMesh Procedural mesh to load the triangle data in.\n\x09 * @param LoadCollision     Whether to generate collision or not.\n\x09 * @param WorldContext      Context of the world.\n\x09 * @return                  Whether the load was successful or not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load the global mesh from the device.\n@param SpaceHandle       Space handle of the room.\n@param OutProceduralMesh Procedural mesh to load the triangle data in.\n@param LoadCollision     Whether to generate collision or not.\n@param WorldContext      Context of the world.\n@return                  Whether the load was successful or not." },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutProceduralMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadGlobalMeshFromDevice constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutProceduralMesh;
	static void NewProp_LoadCollision_SetBit(void* Obj)
	{
		((MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms*)Obj)->LoadCollision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadGlobalMeshFromDevice constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadGlobalMeshFromDevice Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpaceHandle = { "SpaceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms, SpaceHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OutProceduralMesh = { "OutProceduralMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms, OutProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutProceduralMesh_MetaData), NewProp_OutProceduralMesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_LoadCollision = { "LoadCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms), &UHT_STATICS::NewProp_LoadCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpaceHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutProceduralMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LoadCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadGlobalMeshFromDevice Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBPLibrary, nullptr, "LoadGlobalMeshFromDevice", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBPLibrary::execLoadGlobalMeshFromDevice)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_SpaceHandle);
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_OutProceduralMesh);
	P_GET_UBOOL(Z_Param_LoadCollision);
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMRUKBPLibrary::LoadGlobalMeshFromDevice(Z_Param_SpaceHandle,Z_Param_OutProceduralMesh,Z_Param_LoadCollision,Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UMRUKBPLibrary Function LoadGlobalMeshFromDevice ***************************

// ********** Begin Class UMRUKBPLibrary Function RecalculateProceduralMeshAndTangents *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics
struct UHT_STATICS
{
	struct MRUKBPLibrary_eventRecalculateProceduralMeshAndTangents_Parms
	{
		UProceduralMeshComponent* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * (Re)Calculate Normals and Tangents of the given procedural mesh.\n\x09 * @param Mesh The procedural mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Re)Calculate Normals and Tangents of the given procedural mesh.\n@param Mesh The procedural mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RecalculateProceduralMeshAndTangents constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RecalculateProceduralMeshAndTangents constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RecalculateProceduralMeshAndTangents Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventRecalculateProceduralMeshAndTangents_Parms, Mesh), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RecalculateProceduralMeshAndTangents Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBPLibrary, nullptr, "RecalculateProceduralMeshAndTangents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKBPLibrary_eventRecalculateProceduralMeshAndTangents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKBPLibrary_eventRecalculateProceduralMeshAndTangents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBPLibrary::execRecalculateProceduralMeshAndTangents)
{
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMRUKBPLibrary::RecalculateProceduralMeshAndTangents(Z_Param_Mesh);
	P_NATIVE_END;
}
// ********** End Class UMRUKBPLibrary Function RecalculateProceduralMeshAndTangents ***************

// ********** Begin Class UMRUKBPLibrary Function SetScaleRecursivelyAdjustingForRotation **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBPLibrary_SetScaleRecursivelyAdjustingForRotation_Statics
struct UHT_STATICS
{
	struct MRUKBPLibrary_eventSetScaleRecursivelyAdjustingForRotation_Parms
	{
		USceneComponent* SceneComponent;
		FVector UnRotatedScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * In Unreal Engine, scale is always applied in the local space to avoid any skew.\n\x09 * This means that if you have a component which has a 90 degree rotation and is scaled, or any of its\n\x09 * children are scaled then the scale axes will not be applied as you would expect. This is can make it\n\x09 * very awkward to work with when trying to scale the actors to fit within the scene volumes. To work around\n\x09 * this problem, this function will attempt to adjust the scale axes recursively to match the expected behaviour.\n\x09 * This will only work reliably if the rotations involved are 90 degrees, if they are not then it will pick the closest axis.\n\x09 * @param SceneComponent        The component where the scale should be set\n\x09 * @param UnRotatedScale        The scale you would like to have without considering any rotations\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In Unreal Engine, scale is always applied in the local space to avoid any skew.\nThis means that if you have a component which has a 90 degree rotation and is scaled, or any of its\nchildren are scaled then the scale axes will not be applied as you would expect. This is can make it\nvery awkward to work with when trying to scale the actors to fit within the scene volumes. To work around\nthis problem, this function will attempt to adjust the scale axes recursively to match the expected behaviour.\nThis will only work reliably if the rotations involved are 90 degrees, if they are not then it will pick the closest axis.\n@param SceneComponent        The component where the scale should be set\n@param UnRotatedScale        The scale you would like to have without considering any rotations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnRotatedScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetScaleRecursivelyAdjustingForRotation constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnRotatedScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetScaleRecursivelyAdjustingForRotation constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetScaleRecursivelyAdjustingForRotation Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventSetScaleRecursivelyAdjustingForRotation_Parms, SceneComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UnRotatedScale = { "UnRotatedScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventSetScaleRecursivelyAdjustingForRotation_Parms, UnRotatedScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnRotatedScale_MetaData), NewProp_UnRotatedScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnRotatedScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetScaleRecursivelyAdjustingForRotation Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBPLibrary, nullptr, "SetScaleRecursivelyAdjustingForRotation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKBPLibrary_eventSetScaleRecursivelyAdjustingForRotation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKBPLibrary_eventSetScaleRecursivelyAdjustingForRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKBPLibrary_SetScaleRecursivelyAdjustingForRotation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBPLibrary::execSetScaleRecursivelyAdjustingForRotation)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_UnRotatedScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMRUKBPLibrary::SetScaleRecursivelyAdjustingForRotation(Z_Param_SceneComponent,Z_Param_Out_UnRotatedScale);
	P_NATIVE_END;
}
// ********** End Class UMRUKBPLibrary Function SetScaleRecursivelyAdjustingForRotation ************

// ********** Begin Class UMRUKBPLibrary ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKBPLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mixed Reality Utility Kit Blueprint Function Library.\n * See functions for further information.\n */" },
#endif
		{ "IncludePath", "MRUtilityKitBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mixed Reality Utility Kit Blueprint Function Library.\nSee functions for further information." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKBPLibrary constinit property declarations ***************************
// ********** End Class UMRUKBPLibrary constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ComputeCentroid"), .Pointer = &UMRUKBPLibrary::execComputeCentroid },
		{ .NameUTF8 = UTF8TEXT("ComputeDirectionAwayFromClosestWall"), .Pointer = &UMRUKBPLibrary::execComputeDirectionAwayFromClosestWall },
		{ .NameUTF8 = UTF8TEXT("ConstructTexture2D"), .Pointer = &UMRUKBPLibrary::execConstructTexture2D },
		{ .NameUTF8 = UTF8TEXT("GetMatrixColumn"), .Pointer = &UMRUKBPLibrary::execGetMatrixColumn },
		{ .NameUTF8 = UTF8TEXT("IsUnrealEngineMetaFork"), .Pointer = &UMRUKBPLibrary::execIsUnrealEngineMetaFork },
		{ .NameUTF8 = UTF8TEXT("LoadGlobalMeshFromDevice"), .Pointer = &UMRUKBPLibrary::execLoadGlobalMeshFromDevice },
		{ .NameUTF8 = UTF8TEXT("RecalculateProceduralMeshAndTangents"), .Pointer = &UMRUKBPLibrary::execRecalculateProceduralMeshAndTangents },
		{ .NameUTF8 = UTF8TEXT("SetScaleRecursivelyAdjustingForRotation"), .Pointer = &UMRUKBPLibrary::execSetScaleRecursivelyAdjustingForRotation },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKBPLibrary_ComputeCentroid, "ComputeCentroid" }, // 46d1c0e1b6fd3107394c94ed46eabaa93ed37414
		{ &Z_Construct_UFunction_UMRUKBPLibrary_ComputeDirectionAwayFromClosestWall, "ComputeDirectionAwayFromClosestWall" }, // 09560a25ffdeaeee20930278407944b22aacc2e8
		{ &Z_Construct_UFunction_UMRUKBPLibrary_ConstructTexture2D, "ConstructTexture2D" }, // b65021ab9881baf1b9ede262045a2dbbf80270b8
		{ &Z_Construct_UFunction_UMRUKBPLibrary_GetMatrixColumn, "GetMatrixColumn" }, // 5da43323833c7a3128e6211cbc61852a5f9fca8b
		{ &Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork, "IsUnrealEngineMetaFork" }, // d9336a639524806b9065917920fee79edf4de5a7
		{ &Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice, "LoadGlobalMeshFromDevice" }, // 96ac5e253a9460df9254b7d3431899c137c20056
		{ &Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents, "RecalculateProceduralMeshAndTangents" }, // d876dd26e42b90a643ddc30aa45351161961b734
		{ &Z_Construct_UFunction_UMRUKBPLibrary_SetScaleRecursivelyAdjustingForRotation, "SetScaleRecursivelyAdjustingForRotation" }, // df47a78d63a20b4e3ba3e2708676da5abbc58de0
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKBPLibrary,
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
static void UMRUKBPLibrary_StaticRegisterNativesUMRUKBPLibrary()
{
	UClass* Class = UMRUKBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKBPLibrary;
UClass* Z_Construct_UClass_UMRUKBPLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKBPLibrary;
		if (!Z_Registration_Info_UClass_UMRUKBPLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKBPLibrary"),
				Z_Registration_Info_UClass_UMRUKBPLibrary.InnerSingleton,
				UMRUKBPLibrary_StaticRegisterNativesUMRUKBPLibrary,
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
		return Z_Registration_Info_UClass_UMRUKBPLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKBPLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKBPLibrary.OuterSingleton;
}
#undef UHT_STATICS
UMRUKBPLibrary::UMRUKBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKBPLibrary);
UMRUKBPLibrary::~UMRUKBPLibrary() {}
// ********** End Class UMRUKBPLibrary *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMRUKMeshSegment, Z_Construct_UScriptStruct_FMRUKMeshSegment_Statics::NewStructOps, TEXT("MRUKMeshSegment"),&Z_Registration_Info_UScriptStruct_FMRUKMeshSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKMeshSegment), 749985491U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKLoadFromDevice, TEXT("UMRUKLoadFromDevice"), &Z_Registration_Info_UClass_UMRUKLoadFromDevice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKLoadFromDevice), 1370900180U) },
		{ Z_Construct_UClass_UMRUKConfigureTrackables, TEXT("UMRUKConfigureTrackables"), &Z_Registration_Info_UClass_UMRUKConfigureTrackables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKConfigureTrackables), 1154229082U) },
		{ Z_Construct_UClass_UMRUKLoadFromJson, TEXT("UMRUKLoadFromJson"), &Z_Registration_Info_UClass_UMRUKLoadFromJson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKLoadFromJson), 3365697325U) },
		{ Z_Construct_UClass_UMRUKBPLibrary, TEXT("UMRUKBPLibrary"), &Z_Registration_Info_UClass_UMRUKBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKBPLibrary), 1273355209U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h__Script_MRUtilityKit_4edffca3219f17fb0c874647b70a0f240711c2fd{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
