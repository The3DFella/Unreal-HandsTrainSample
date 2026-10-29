// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUKPassthroughCameraAccess.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUKPassthroughCameraAccess() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKCameraIntrinsics(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EMRUKCameraEye ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKCameraEye>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Count.Name", "EMRUKCameraEye::Count" },
		{ "Left.Name", "EMRUKCameraEye::Left" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
		{ "Right.Name", "EMRUKCameraEye::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKCameraEye::Left", (int64)EMRUKCameraEye::Left },
		{ "EMRUKCameraEye::Right", (int64)EMRUKCameraEye::Right },
		{ "EMRUKCameraEye::Count", (int64)EMRUKCameraEye::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKCameraEye",
	"EMRUKCameraEye",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKCameraEye;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKCameraEye.OuterSingleton)
		{
			ZRIE_EMRUKCameraEye.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKCameraEye"));
		}
		return ZRIE_EMRUKCameraEye.OuterSingleton;
	}
	if (!ZRIE_EMRUKCameraEye.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKCameraEye.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKCameraEye.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKCameraEye **************************************************************

// ********** Begin Enum EMRUKCameraPlayState ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKCameraPlayState>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
		{ "Playing.Name", "EMRUKCameraPlayState::Playing" },
		{ "PlaySuspended.Name", "EMRUKCameraPlayState::PlaySuspended" },
		{ "Stopped.Name", "EMRUKCameraPlayState::Stopped" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKCameraPlayState::Stopped", (int64)EMRUKCameraPlayState::Stopped },
		{ "EMRUKCameraPlayState::Playing", (int64)EMRUKCameraPlayState::Playing },
		{ "EMRUKCameraPlayState::PlaySuspended", (int64)EMRUKCameraPlayState::PlaySuspended },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKCameraPlayState",
	"EMRUKCameraPlayState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKCameraPlayState;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKCameraPlayState.OuterSingleton)
		{
			ZRIE_EMRUKCameraPlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKCameraPlayState"));
		}
		return ZRIE_EMRUKCameraPlayState.OuterSingleton;
	}
	if (!ZRIE_EMRUKCameraPlayState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKCameraPlayState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKCameraPlayState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKCameraPlayState ********************************************************

// ********** Begin ScriptStruct FMRUKCameraIntrinsics *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKCameraIntrinsics>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKCameraIntrinsics); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKCameraIntrinsics constinit property declarations *************
// ********** End ScriptStruct FMRUKCameraIntrinsics constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKCameraIntrinsics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKCameraIntrinsics",
	nullptr,
	0,
	DataSizeOf<FMRUKCameraIntrinsics>(),
	alignof(FMRUKCameraIntrinsics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKCameraIntrinsics(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKCameraIntrinsics, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKCameraIntrinsics"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKCameraIntrinsics ***********************************************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function GetCameraIntrinsics *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms
	{
		EMRUKCameraEye Eye;
		FMRUKCameraIntrinsics ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the camera intrinsics.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the camera intrinsics." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCameraIntrinsics constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCameraIntrinsics constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCameraIntrinsics Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms, ReturnValue), Z_Construct_UScriptStruct_FMRUKCameraIntrinsics, METADATA_PARAMS(0, nullptr) }; // 8c6b3c2983892ecef29cfc578bb5b957d04f9410
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCameraIntrinsics Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "GetCameraIntrinsics", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execGetCameraIntrinsics)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMRUKCameraIntrinsics*)Z_Param__Result=P_THIS->GetCameraIntrinsics(EMRUKCameraEye(Z_Param_Eye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function GetCameraIntrinsics *********

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function GetCameraPose *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms
	{
		EMRUKCameraEye Eye;
		FVector OutPosition;
		FQuat OutOrientation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the pose of the camera.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the pose of the camera." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCameraPose constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCameraPose constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCameraPose Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms, OutOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutOrientation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCameraPose Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "GetCameraPose", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execGetCameraPose)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutOrientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCameraPose(EMRUKCameraEye(Z_Param_Eye),Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function GetCameraPose ***************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function GetSupportedResolutions ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms
	{
		EMRUKCameraEye CameraEye;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a list of all supported resolutions.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a list of all supported resolutions." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSupportedResolutions constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraEye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraEye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSupportedResolutions constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSupportedResolutions Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CameraEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CameraEye = { "CameraEye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms, CameraEye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraEye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraEye,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSupportedResolutions Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "GetSupportedResolutions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execGetSupportedResolutions)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_CameraEye);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=P_THIS->GetSupportedResolutions(EMRUKCameraEye(Z_Param_CameraEye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function GetSupportedResolutions *****

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function GetTimestamp **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms
	{
		EMRUKCameraEye Eye;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Timestamp associated with the latest camera image.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timestamp associated with the latest camera image." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTimestamp constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTimestamp constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTimestamp Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTimestamp Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "GetTimestamp", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execGetTimestamp)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetTimestamp(EMRUKCameraEye(Z_Param_Eye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function GetTimestamp ****************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function Play **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms
	{
		int32 Width;
		int32 Height;
		int32 MaxFramerate;
		EMRUKCameraEye CameraEye;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start the passthrough camera for the given eye.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start the passthrough camera for the given eye." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFramerate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraEye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraEye;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Play Property Definitions *********************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxFramerate = { "MaxFramerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms, MaxFramerate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CameraEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CameraEye = { "CameraEye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms, CameraEye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxFramerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraEye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraEye,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Play Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "Play", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execPlay)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxFramerate);
	P_GET_ENUM(EMRUKCameraEye,Z_Param_CameraEye);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Play(Z_Param_Out_Width,Z_Param_Out_Height,Z_Param_MaxFramerate,EMRUKCameraEye(Z_Param_CameraEye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function Play ************************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function Stop **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessSubsystem_eventStop_Parms
	{
		EMRUKCameraEye CameraEye;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop the passthrough camera for the given eye.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the passthrough camera for the given eye." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraEye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraEye;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Stop Property Definitions *********************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CameraEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CameraEye = { "CameraEye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventStop_Parms, CameraEye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraEye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraEye,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Stop Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "Stop", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventStop_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execStop)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_CameraEye);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop(EMRUKCameraEye(Z_Param_CameraEye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function Stop ************************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function ViewportPointToWorldSpaceRay 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms
	{
		EMRUKCameraEye Eye;
		FVector2D ViewportPoint;
		FVector OutPosition;
		FVector OutDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Constructs a ray in world space that points to the given point in passthrough camera space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constructs a ray in world space that points to the given point in passthrough camera space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ViewportPointToWorldSpaceRay constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ViewportPointToWorldSpaceRay constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ViewportPointToWorldSpaceRay Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ViewportPoint = { "ViewportPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms, ViewportPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewportPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDirection,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ViewportPointToWorldSpaceRay Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "ViewportPointToWorldSpaceRay", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execViewportPointToWorldSpaceRay)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_GET_STRUCT(FVector2D,Z_Param_ViewportPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewportPointToWorldSpaceRay(EMRUKCameraEye(Z_Param_Eye),Z_Param_ViewportPoint,Z_Param_Out_OutPosition,Z_Param_Out_OutDirection);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function ViewportPointToWorldSpaceRay 

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function WorldToViewportPoint ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms
	{
		EMRUKCameraEye Eye;
		FVector WorldPosition;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Converts the world position into the passthrough camera space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts the world position into the passthrough camera space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function WorldToViewportPoint constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WorldToViewportPoint constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WorldToViewportPoint Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WorldToViewportPoint Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "WorldToViewportPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execWorldToViewportPoint)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_GET_STRUCT(FVector,Z_Param_WorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->WorldToViewportPoint(EMRUKCameraEye(Z_Param_Eye),Z_Param_WorldPosition);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function WorldToViewportPoint ********

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "DisplayName", "MR Utility Kit Passthrough Camera Access Subsystem" },
		{ "IncludePath", "MRUKPassthroughCameraAccess.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem constinit property declarations ****
// ********** End Class UMRUKPassthroughCameraAccessSubsystem constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCameraIntrinsics"), .Pointer = &UMRUKPassthroughCameraAccessSubsystem::execGetCameraIntrinsics },
		{ .NameUTF8 = UTF8TEXT("GetCameraPose"), .Pointer = &UMRUKPassthroughCameraAccessSubsystem::execGetCameraPose },
		{ .NameUTF8 = UTF8TEXT("GetSupportedResolutions"), .Pointer = &UMRUKPassthroughCameraAccessSubsystem::execGetSupportedResolutions },
		{ .NameUTF8 = UTF8TEXT("GetTimestamp"), .Pointer = &UMRUKPassthroughCameraAccessSubsystem::execGetTimestamp },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &UMRUKPassthroughCameraAccessSubsystem::execPlay },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UMRUKPassthroughCameraAccessSubsystem::execStop },
		{ .NameUTF8 = UTF8TEXT("ViewportPointToWorldSpaceRay"), .Pointer = &UMRUKPassthroughCameraAccessSubsystem::execViewportPointToWorldSpaceRay },
		{ .NameUTF8 = UTF8TEXT("WorldToViewportPoint"), .Pointer = &UMRUKPassthroughCameraAccessSubsystem::execWorldToViewportPoint },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics, "GetCameraIntrinsics" }, // 8da8c4a2deaa88d5941cf6784148821ef33dd20d
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose, "GetCameraPose" }, // 5cba49595b6cd03f3f257136740a19a18cccb3f7
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions, "GetSupportedResolutions" }, // f77929026a4fc0eaf23fb89dc20cec7c75cf5ab8
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp, "GetTimestamp" }, // bad0ecbe90643c7edaf19dbb3f1b03690f1c0636
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play, "Play" }, // 57c7ca8512dbdf619d2a4dae915b1f9392490320
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop, "Stop" }, // 7912d03903680fdc35dc9751e0c058ed7e2eae25
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay, "ViewportPointToWorldSpaceRay" }, // c23cee8d0f4b9702023f87e79596bfd86aba8d66
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint, "WorldToViewportPoint" }, // 1a4a356584fc402f2c24140875eba6955e619993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccessSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEngineSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem,
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
static void UMRUKPassthroughCameraAccessSubsystem_StaticRegisterNativesUMRUKPassthroughCameraAccessSubsystem()
{
	UClass* Class = UMRUKPassthroughCameraAccessSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem;
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKPassthroughCameraAccessSubsystem;
		if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKPassthroughCameraAccessSubsystem"),
				Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.InnerSingleton,
				UMRUKPassthroughCameraAccessSubsystem_StaticRegisterNativesUMRUKPassthroughCameraAccessSubsystem,
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
		return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UMRUKPassthroughCameraAccessSubsystem::UMRUKPassthroughCameraAccessSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKPassthroughCameraAccessSubsystem);
UMRUKPassthroughCameraAccessSubsystem::~UMRUKPassthroughCameraAccessSubsystem() {}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem **************************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function GetCameraIntrinsics ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccess_eventGetCameraIntrinsics_Parms
	{
		FMRUKCameraIntrinsics ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the camera intrinsics.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the camera intrinsics." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCameraIntrinsics constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCameraIntrinsics constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCameraIntrinsics Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetCameraIntrinsics_Parms, ReturnValue), Z_Construct_UScriptStruct_FMRUKCameraIntrinsics, METADATA_PARAMS(0, nullptr) }; // 8c6b3c2983892ecef29cfc578bb5b957d04f9410
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCameraIntrinsics Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "GetCameraIntrinsics", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccess_eventGetCameraIntrinsics_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccess_eventGetCameraIntrinsics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execGetCameraIntrinsics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMRUKCameraIntrinsics*)Z_Param__Result=P_THIS->GetCameraIntrinsics();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function GetCameraIntrinsics ******************

// ********** Begin Class UMRUKPassthroughCameraAccess Function GetCameraPlayState *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccess_eventGetCameraPlayState_Parms
	{
		EMRUKCameraPlayState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the current camera play state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current camera play state." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCameraPlayState constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCameraPlayState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCameraPlayState Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetCameraPlayState_Parms, ReturnValue), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState, METADATA_PARAMS(0, nullptr) }; // 4f9ce2087c5bd38bebe1da77c519827509b0345e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCameraPlayState Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "GetCameraPlayState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccess_eventGetCameraPlayState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccess_eventGetCameraPlayState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execGetCameraPlayState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMRUKCameraPlayState*)Z_Param__Result=P_THIS->GetCameraPlayState();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function GetCameraPlayState *******************

// ********** Begin Class UMRUKPassthroughCameraAccess Function GetCameraPose **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccess_eventGetCameraPose_Parms
	{
		FVector OutPosition;
		FQuat OutOrientation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the pose of the camera.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the pose of the camera." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCameraPose constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCameraPose constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCameraPose Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetCameraPose_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetCameraPose_Parms, OutOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutOrientation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCameraPose Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "GetCameraPose", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccess_eventGetCameraPose_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccess_eventGetCameraPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execGetCameraPose)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutOrientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCameraPose(Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function GetCameraPose ************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function GetTimestamp ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccess_eventGetTimestamp_Parms
	{
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Timestamp associated with the latest camera image.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timestamp associated with the latest camera image." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTimestamp constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTimestamp constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTimestamp Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTimestamp Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "GetTimestamp", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccess_eventGetTimestamp_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccess_eventGetTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execGetTimestamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetTimestamp();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function GetTimestamp *************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function IsCameraPlaying ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the camera is currently playing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the camera is currently playing." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsCameraPlaying constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCameraPlaying constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCameraPlaying Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsCameraPlaying Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "IsCameraPlaying", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execIsCameraPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraPlaying();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function IsCameraPlaying **********************

// ********** Begin Class UMRUKPassthroughCameraAccess Function OnResume ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnResume constinit property declarations ******************************
// ********** End Function OnResume constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "OnResume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execOnResume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResume();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function OnResume *****************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function OnSuspend **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSuspend constinit property declarations *****************************
// ********** End Function OnSuspend constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "OnSuspend", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execOnSuspend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSuspend();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function OnSuspend ****************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function Play *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccess_eventPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start the passthrough camera.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start the passthrough camera." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKPassthroughCameraAccess_eventPlay_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Play Property Definitions *********************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKPassthroughCameraAccess_eventPlay_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Play Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "Play", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccess_eventPlay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccess_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function Play *********************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function Stop *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop the passthrough camera.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the passthrough camera." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function Stop *********************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function ViewportPointToWorldSpaceRay *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms
	{
		FVector2D ViewportPoint;
		FVector OutPosition;
		FVector OutDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Constructs a ray in world space that points to the given point in passthrough camera space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constructs a ray in world space that points to the given point in passthrough camera space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ViewportPointToWorldSpaceRay constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ViewportPointToWorldSpaceRay constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ViewportPointToWorldSpaceRay Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ViewportPoint = { "ViewportPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms, ViewportPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewportPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDirection,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ViewportPointToWorldSpaceRay Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "ViewportPointToWorldSpaceRay", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execViewportPointToWorldSpaceRay)
{
	P_GET_STRUCT(FVector2D,Z_Param_ViewportPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewportPointToWorldSpaceRay(Z_Param_ViewportPoint,Z_Param_Out_OutPosition,Z_Param_Out_OutDirection);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function ViewportPointToWorldSpaceRay *********

// ********** Begin Class UMRUKPassthroughCameraAccess Function WorldToViewportPoint ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms
	{
		FVector WorldPosition;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Converts the world position into the passthrough camera space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts the world position into the passthrough camera space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function WorldToViewportPoint constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WorldToViewportPoint constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WorldToViewportPoint Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WorldToViewportPoint Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "WorldToViewportPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execWorldToViewportPoint)
{
	P_GET_STRUCT(FVector,Z_Param_WorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->WorldToViewportPoint(Z_Param_WorldPosition);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function WorldToViewportPoint *****************

// ********** Begin Class UMRUKPassthroughCameraAccess *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MRUKPassthroughCameraAccess.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraEye_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * From which camera eye the video should be played.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From which camera eye the video should be played." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionWidth_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Max resolution width of the video.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max resolution width of the video." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionHeight_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Max resolution height of the video.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max resolution height of the video." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFramerate_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum framerate of the video.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum framerate of the video." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKPassthroughCameraAccess constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraEye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraEye;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFramerate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKPassthroughCameraAccess constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCameraIntrinsics"), .Pointer = &UMRUKPassthroughCameraAccess::execGetCameraIntrinsics },
		{ .NameUTF8 = UTF8TEXT("GetCameraPlayState"), .Pointer = &UMRUKPassthroughCameraAccess::execGetCameraPlayState },
		{ .NameUTF8 = UTF8TEXT("GetCameraPose"), .Pointer = &UMRUKPassthroughCameraAccess::execGetCameraPose },
		{ .NameUTF8 = UTF8TEXT("GetTimestamp"), .Pointer = &UMRUKPassthroughCameraAccess::execGetTimestamp },
		{ .NameUTF8 = UTF8TEXT("IsCameraPlaying"), .Pointer = &UMRUKPassthroughCameraAccess::execIsCameraPlaying },
		{ .NameUTF8 = UTF8TEXT("OnResume"), .Pointer = &UMRUKPassthroughCameraAccess::execOnResume },
		{ .NameUTF8 = UTF8TEXT("OnSuspend"), .Pointer = &UMRUKPassthroughCameraAccess::execOnSuspend },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &UMRUKPassthroughCameraAccess::execPlay },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UMRUKPassthroughCameraAccess::execStop },
		{ .NameUTF8 = UTF8TEXT("ViewportPointToWorldSpaceRay"), .Pointer = &UMRUKPassthroughCameraAccess::execViewportPointToWorldSpaceRay },
		{ .NameUTF8 = UTF8TEXT("WorldToViewportPoint"), .Pointer = &UMRUKPassthroughCameraAccess::execWorldToViewportPoint },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics, "GetCameraIntrinsics" }, // 0e84a03f9cfdf4d3c006a38f94fabedff432d948
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState, "GetCameraPlayState" }, // 0243678c4690aa10d4fa059e42d54e25bbf2b708
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose, "GetCameraPose" }, // f7f721158083b6974a68b45cdbbac69dbde36ed5
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp, "GetTimestamp" }, // a4fb3aecb3aa79e409fd9971c22db873bff7ab34
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying, "IsCameraPlaying" }, // a335f18c04f7ba189b9ad653143d0d9334ffeaae
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume, "OnResume" }, // 91439fd1351a350e57abd5c0b258d24f35d36d45
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend, "OnSuspend" }, // 980ffb22a774a1ce661863ceeabfea42e38a46ab
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play, "Play" }, // 5e124d11341ef58b78e8eb956a327bb827e8bce9
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop, "Stop" }, // 2420d81e57ce9dd2c033a4081f80cf274e9bf1e9
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay, "ViewportPointToWorldSpaceRay" }, // 0fa2be18d26f826d8eab538838a99f91a6c8e321
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint, "WorldToViewportPoint" }, // 3d61c6434aa1fa1fa7a80b9d980de15e4137bd64
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKPassthroughCameraAccess Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CameraEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CameraEye = { "CameraEye", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccess, CameraEye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraEye_MetaData), NewProp_CameraEye_MetaData) }; // cdf46e948ac9ec78a19439d479627230bea08239
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ResolutionWidth = { "ResolutionWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccess, ResolutionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionWidth_MetaData), NewProp_ResolutionWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ResolutionHeight = { "ResolutionHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccess, ResolutionHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionHeight_MetaData), NewProp_ResolutionHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxFramerate = { "MaxFramerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccess, MaxFramerate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFramerate_MetaData), NewProp_MaxFramerate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraEye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraEye,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResolutionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResolutionHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxFramerate,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKPassthroughCameraAccess Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKPassthroughCameraAccess,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMRUKPassthroughCameraAccess_StaticRegisterNativesUMRUKPassthroughCameraAccess()
{
	UClass* Class = UMRUKPassthroughCameraAccess::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess;
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKPassthroughCameraAccess;
		if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKPassthroughCameraAccess"),
				Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.InnerSingleton,
				UMRUKPassthroughCameraAccess_StaticRegisterNativesUMRUKPassthroughCameraAccess,
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
		return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKPassthroughCameraAccess);
UMRUKPassthroughCameraAccess::~UMRUKPassthroughCameraAccess() {}
// ********** End Class UMRUKPassthroughCameraAccess ***********************************************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture Function GetAspectRatio **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessTexture_eventGetAspectRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current aspect ratio of the texture.\n\x09 *\n\x09 * @return Texture aspect ratio.\n\x09 * @see GetHeight, GetWidth\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current aspect ratio of the texture.\n\n@return Texture aspect ratio.\n@see GetHeight, GetWidth" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAspectRatio constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAspectRatio constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAspectRatio Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessTexture_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAspectRatio Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture, nullptr, "GetAspectRatio", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessTexture_eventGetAspectRatio_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessTexture_eventGetAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessTexture::execGetAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAspectRatio();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessTexture Function GetAspectRatio ****************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture Function GetHeight *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessTexture_eventGetHeight_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current height of the texture.\n\x09 *\n\x09 * @return Texture height (in pixels).\n\x09 * @see GetAspectRatio, GetWidth\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current height of the texture.\n\n@return Texture height (in pixels).\n@see GetAspectRatio, GetWidth" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeight constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeight constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeight Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessTexture_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHeight Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture, nullptr, "GetHeight", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessTexture_eventGetHeight_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessTexture_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessTexture::execGetHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHeight();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessTexture Function GetHeight *********************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture Function GetWidth ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics
struct UHT_STATICS
{
	struct MRUKPassthroughCameraAccessTexture_eventGetWidth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current width of the texture.\n\x09 *\n\x09 * @return Texture width (in pixels).\n\x09 * @see GetAspectRatio, GetHeight\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current width of the texture.\n\n@return Texture width (in pixels).\n@see GetAspectRatio, GetHeight" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidth constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidth constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidth Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessTexture_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWidth Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture, nullptr, "GetWidth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKPassthroughCameraAccessTexture_eventGetWidth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKPassthroughCameraAccessTexture_eventGetWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessTexture::execGetWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWidth();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessTexture Function GetWidth **********************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Adjustments Compositing LevelOfDetail ImportSettings Object Texture Compression" },
		{ "IncludePath", "MRUKPassthroughCameraAccess.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassthroughCameraAccess_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKPassthroughCameraAccessTexture constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PassthroughCameraAccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKPassthroughCameraAccessTexture constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAspectRatio"), .Pointer = &UMRUKPassthroughCameraAccessTexture::execGetAspectRatio },
		{ .NameUTF8 = UTF8TEXT("GetHeight"), .Pointer = &UMRUKPassthroughCameraAccessTexture::execGetHeight },
		{ .NameUTF8 = UTF8TEXT("GetWidth"), .Pointer = &UMRUKPassthroughCameraAccessTexture::execGetWidth },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio, "GetAspectRatio" }, // 080b9dd16264046460e1f615fbdce0ed3a4d2509
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight, "GetHeight" }, // 1da6f13675f1431a47dba997ad99e8a7e63bddc8
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth, "GetWidth" }, // ce91c2c544ed0cd75b14a1dc5ffe0e27e0e17899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccessTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKPassthroughCameraAccessTexture Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PassthroughCameraAccess = { "PassthroughCameraAccess", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccessTexture, PassthroughCameraAccess), Z_Construct_UClass_UMRUKPassthroughCameraAccess, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassthroughCameraAccess_MetaData), NewProp_PassthroughCameraAccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PassthroughCameraAccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKPassthroughCameraAccessTexture Property Definitions *******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UTexture,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMRUKPassthroughCameraAccessTexture_StaticRegisterNativesUMRUKPassthroughCameraAccessTexture()
{
	UClass* Class = UMRUKPassthroughCameraAccessTexture::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture;
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKPassthroughCameraAccessTexture;
		if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKPassthroughCameraAccessTexture"),
				Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.InnerSingleton,
				UMRUKPassthroughCameraAccessTexture_StaticRegisterNativesUMRUKPassthroughCameraAccessTexture,
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
		return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.OuterSingleton;
}
#undef UHT_STATICS
UMRUKPassthroughCameraAccessTexture::UMRUKPassthroughCameraAccessTexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
UMRUKPassthroughCameraAccessTexture::~UMRUKPassthroughCameraAccessTexture() {}
// ********** End Class UMRUKPassthroughCameraAccessTexture ****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, TEXT("EMRUKCameraEye"), &ZRIE_EMRUKCameraEye, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3455348372U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState, TEXT("EMRUKCameraPlayState"), &ZRIE_EMRUKCameraPlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1335681544U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMRUKCameraIntrinsics, Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics::NewStructOps, TEXT("MRUKCameraIntrinsics"),&Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKCameraIntrinsics), 2355837993U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, TEXT("UMRUKPassthroughCameraAccessSubsystem"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccessSubsystem), 4143744547U) },
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccess, TEXT("UMRUKPassthroughCameraAccess"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccess), 1470459865U) },
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture, TEXT("UMRUKPassthroughCameraAccessTexture"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccessTexture), 826362860U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_7d90162d0a584a790d7487c201ddbda50e9bd28a{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
