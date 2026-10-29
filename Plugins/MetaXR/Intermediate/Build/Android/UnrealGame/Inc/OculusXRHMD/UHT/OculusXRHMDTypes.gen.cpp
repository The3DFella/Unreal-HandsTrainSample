// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRHMDTypes.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRHMDTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_CubeFace(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_PixelFormat(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_Resolution(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRMPPoseRestoreType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EProcessorFavor(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRGuardianTestResult(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfile(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRPerformanceMetrics(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSplashDesc(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRTrackedDeviceType ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRTrackedDeviceType>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "All.DisplayName", "All Devices" },
		{ "All.Name", "EOculusXRTrackedDeviceType::All" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Tracked device types corresponding to ovrTrackedDeviceType enum*/" },
#endif
		{ "DeviceObjectZero.DisplayName", "DeviceObject Zero" },
		{ "DeviceObjectZero.Name", "EOculusXRTrackedDeviceType::DeviceObjectZero" },
		{ "HMD.DisplayName", "HMD" },
		{ "HMD.Name", "EOculusXRTrackedDeviceType::HMD" },
		{ "LTouch.DisplayName", "Left Hand" },
		{ "LTouch.Name", "EOculusXRTrackedDeviceType::LTouch" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "None.DisplayName", "No Devices" },
		{ "None.Name", "EOculusXRTrackedDeviceType::None" },
		{ "RTouch.DisplayName", "Right Hand" },
		{ "RTouch.Name", "EOculusXRTrackedDeviceType::RTouch" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracked device types corresponding to ovrTrackedDeviceType enum" },
#endif
		{ "Touch.DisplayName", "All Hands" },
		{ "Touch.Name", "EOculusXRTrackedDeviceType::Touch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRTrackedDeviceType::None", (int64)EOculusXRTrackedDeviceType::None },
		{ "EOculusXRTrackedDeviceType::HMD", (int64)EOculusXRTrackedDeviceType::HMD },
		{ "EOculusXRTrackedDeviceType::LTouch", (int64)EOculusXRTrackedDeviceType::LTouch },
		{ "EOculusXRTrackedDeviceType::RTouch", (int64)EOculusXRTrackedDeviceType::RTouch },
		{ "EOculusXRTrackedDeviceType::Touch", (int64)EOculusXRTrackedDeviceType::Touch },
		{ "EOculusXRTrackedDeviceType::DeviceObjectZero", (int64)EOculusXRTrackedDeviceType::DeviceObjectZero },
		{ "EOculusXRTrackedDeviceType::All", (int64)EOculusXRTrackedDeviceType::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRTrackedDeviceType",
	"EOculusXRTrackedDeviceType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRTrackedDeviceType;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRTrackedDeviceType.OuterSingleton)
		{
			ZRIE_EOculusXRTrackedDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRTrackedDeviceType"));
		}
		return ZRIE_EOculusXRTrackedDeviceType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRTrackedDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRTrackedDeviceType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRTrackedDeviceType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRTrackedDeviceType **************************************************

// ********** Begin ScriptStruct FOculusXRHmdUserProfileField **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRHmdUserProfileField>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRHmdUserProfileField); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data Field" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRHmdUserProfileField constinit property declarations ******
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRHmdUserProfileField constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRHmdUserProfileField>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRHmdUserProfileField Property Definitions *****************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfileField, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfileField, FieldValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldValue_MetaData), NewProp_FieldValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FieldValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRHmdUserProfileField Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	&NewStructOps,
	"OculusXRHmdUserProfileField",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRHmdUserProfileField>(),
	alignof(FOculusXRHmdUserProfileField),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfileField;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfileField.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfileField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("OculusXRHmdUserProfileField"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfileField.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfileField.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfileField.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfileField.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRHmdUserProfileField ****************************************

// ********** Begin ScriptStruct FOculusXRHmdUserProfile *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRHmdUserProfile>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRHmdUserProfile); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the user's profile. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the user's profile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gender of the user (\"male\", \"female\", etc). */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gender of the user (\"male\", \"female\", etc)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height of the player, in meters */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height of the player, in meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height of the player, in meters */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height of the player, in meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPD_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpupillary distance of the player, in meters */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpupillary distance of the player, in meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeckToEyeDistance_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Neck-to-eye distance, in meters. X - horizontal, Y - vertical. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Neck-to-eye distance, in meters. X - horizontal, Y - vertical." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraFields_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRHmdUserProfile constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Gender;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IPD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NeckToEyeDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraFields_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraFields;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRHmdUserProfile constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRHmdUserProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRHmdUserProfile Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, Gender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PlayerHeight = { "PlayerHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, PlayerHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHeight_MetaData), NewProp_PlayerHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, EyeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeHeight_MetaData), NewProp_EyeHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_IPD = { "IPD", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, IPD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPD_MetaData), NewProp_IPD_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NeckToEyeDistance = { "NeckToEyeDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, NeckToEyeDistance), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeckToEyeDistance_MetaData), NewProp_NeckToEyeDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ExtraFields_Inner = { "ExtraFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField, METADATA_PARAMS(0, nullptr) }; // 21144278c888e365aa536781bfbfd9593b1b86ae
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExtraFields = { "ExtraFields", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, ExtraFields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraFields_MetaData), NewProp_ExtraFields_MetaData) }; // 21144278c888e365aa536781bfbfd9593b1b86ae
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IPD,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NeckToEyeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExtraFields_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExtraFields,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRHmdUserProfile Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	&NewStructOps,
	"OculusXRHmdUserProfile",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRHmdUserProfile>(),
	alignof(FOculusXRHmdUserProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfile;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfile(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfile.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("OculusXRHmdUserProfile"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfile.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfile.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfile.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRHmdUserProfile *********************************************

// ********** Begin Enum EOculusXRFoveatedRenderingMethod ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRFoveatedRenderingMethod>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "EyeTrackedFoveatedRendering.Name", "EOculusXRFoveatedRenderingMethod::EyeTrackedFoveatedRendering" },
		{ "FixedFoveatedRendering.Name", "EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering", (int64)EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering },
		{ "EOculusXRFoveatedRenderingMethod::EyeTrackedFoveatedRendering", (int64)EOculusXRFoveatedRenderingMethod::EyeTrackedFoveatedRendering },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRFoveatedRenderingMethod",
	"EOculusXRFoveatedRenderingMethod",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRFoveatedRenderingMethod;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRFoveatedRenderingMethod.OuterSingleton)
		{
			ZRIE_EOculusXRFoveatedRenderingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRFoveatedRenderingMethod"));
		}
		return ZRIE_EOculusXRFoveatedRenderingMethod.OuterSingleton;
	}
	if (!ZRIE_EOculusXRFoveatedRenderingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRFoveatedRenderingMethod.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRFoveatedRenderingMethod.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRFoveatedRenderingMethod ********************************************

// ********** Begin Enum EOculusXRFoveatedRenderingLevel *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRFoveatedRenderingLevel>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EOculusXRFoveatedRenderingLevel::High" },
		{ "HighTop.Comment", "// High foveation setting with more detail toward the bottom of the view and more foveation near the top\n" },
		{ "HighTop.Name", "EOculusXRFoveatedRenderingLevel::HighTop" },
		{ "HighTop.ToolTip", "High foveation setting with more detail toward the bottom of the view and more foveation near the top" },
		{ "Low.Name", "EOculusXRFoveatedRenderingLevel::Low" },
		{ "Medium.Name", "EOculusXRFoveatedRenderingLevel::Medium" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "Off.Name", "EOculusXRFoveatedRenderingLevel::Off" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRFoveatedRenderingLevel::Off", (int64)EOculusXRFoveatedRenderingLevel::Off },
		{ "EOculusXRFoveatedRenderingLevel::Low", (int64)EOculusXRFoveatedRenderingLevel::Low },
		{ "EOculusXRFoveatedRenderingLevel::Medium", (int64)EOculusXRFoveatedRenderingLevel::Medium },
		{ "EOculusXRFoveatedRenderingLevel::High", (int64)EOculusXRFoveatedRenderingLevel::High },
		{ "EOculusXRFoveatedRenderingLevel::HighTop", (int64)EOculusXRFoveatedRenderingLevel::HighTop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRFoveatedRenderingLevel",
	"EOculusXRFoveatedRenderingLevel",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRFoveatedRenderingLevel;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRFoveatedRenderingLevel.OuterSingleton)
		{
			ZRIE_EOculusXRFoveatedRenderingLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRFoveatedRenderingLevel"));
		}
		return ZRIE_EOculusXRFoveatedRenderingLevel.OuterSingleton;
	}
	if (!ZRIE_EOculusXRFoveatedRenderingLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRFoveatedRenderingLevel.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRFoveatedRenderingLevel.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRFoveatedRenderingLevel *********************************************

// ********** Begin Enum EOculusXRBoundaryType *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRBoundaryType>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Boundary_Outer.DisplayName", "Outer Boundary" },
		{ "Boundary_Outer.Name", "EOculusXRBoundaryType::Boundary_Outer" },
		{ "Boundary_PlayArea.DisplayName", "Play Area" },
		{ "Boundary_PlayArea.Name", "EOculusXRBoundaryType::Boundary_PlayArea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Guardian boundary types*/" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guardian boundary types" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRBoundaryType::Boundary_Outer", (int64)EOculusXRBoundaryType::Boundary_Outer },
		{ "EOculusXRBoundaryType::Boundary_PlayArea", (int64)EOculusXRBoundaryType::Boundary_PlayArea },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRBoundaryType",
	"EOculusXRBoundaryType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRBoundaryType;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRBoundaryType.OuterSingleton)
		{
			ZRIE_EOculusXRBoundaryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRBoundaryType"));
		}
		return ZRIE_EOculusXRBoundaryType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRBoundaryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRBoundaryType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRBoundaryType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRBoundaryType *******************************************************

// ********** Begin Enum EOculusXRColorSpace *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRColorSpace>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Adobe_RGB.Comment", "/// Similar to sRGB but with deeper greens using D65 white point\n" },
		{ "Adobe_RGB.Name", "EOculusXRColorSpace::Adobe_RGB" },
		{ "Adobe_RGB.ToolTip", "Similar to sRGB but with deeper greens using D65 white point" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "P3.Comment", "/// DCI-P3 color space. See documentation for more details\n" },
		{ "P3.DisplayName", "P3 (Recommended)" },
		{ "P3.Name", "EOculusXRColorSpace::P3" },
		{ "P3.ToolTip", "DCI-P3 color space. See documentation for more details" },
		{ "Quest.Comment", "/// Oculus Quest's native color space is slightly different than Rift CV1\n" },
		{ "Quest.DisplayName", "Quest 1" },
		{ "Quest.Name", "EOculusXRColorSpace::Quest" },
		{ "Quest.ToolTip", "Oculus Quest's native color space is slightly different than Rift CV1" },
		{ "Rec_2020.Comment", "/// Color space for standardized color across all Oculus HMDs with D65 white point\n" },
		{ "Rec_2020.Name", "EOculusXRColorSpace::Rec_2020" },
		{ "Rec_2020.ToolTip", "Color space for standardized color across all Oculus HMDs with D65 white point" },
		{ "Rec_709.Comment", "/// Rec. 709 is used on Oculus Go and shares the same primary color coordinates as sRGB\n" },
		{ "Rec_709.Name", "EOculusXRColorSpace::Rec_709" },
		{ "Rec_709.ToolTip", "Rec. 709 is used on Oculus Go and shares the same primary color coordinates as sRGB" },
		{ "Rift_CV1.Comment", "/// Oculus Rift CV1 uses a unique color space, see documentation for more info\n" },
		{ "Rift_CV1.DisplayName", "Rift CV1" },
		{ "Rift_CV1.Name", "EOculusXRColorSpace::Rift_CV1" },
		{ "Rift_CV1.ToolTip", "Oculus Rift CV1 uses a unique color space, see documentation for more info" },
		{ "Rift_S.Comment", "/// Oculus Rift S uses a unique color space, see documentation for more info\n" },
		{ "Rift_S.Name", "EOculusXRColorSpace::Rift_S" },
		{ "Rift_S.ToolTip", "Oculus Rift S uses a unique color space, see documentation for more info" },
		{ "Unknown.Comment", "/// The default value from GetHmdColorSpace until SetClientColorDesc is called. Only valid on PC, and will be remapped to Quest on Mobile\n" },
		{ "Unknown.Name", "EOculusXRColorSpace::Unknown" },
		{ "Unknown.ToolTip", "The default value from GetHmdColorSpace until SetClientColorDesc is called. Only valid on PC, and will be remapped to Quest on Mobile" },
		{ "Unmanaged.Comment", "/// No color correction, not recommended for production use. See documentation for more info\n" },
		{ "Unmanaged.Name", "EOculusXRColorSpace::Unmanaged" },
		{ "Unmanaged.ToolTip", "No color correction, not recommended for production use. See documentation for more info" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRColorSpace::Unknown", (int64)EOculusXRColorSpace::Unknown },
		{ "EOculusXRColorSpace::Unmanaged", (int64)EOculusXRColorSpace::Unmanaged },
		{ "EOculusXRColorSpace::Rec_2020", (int64)EOculusXRColorSpace::Rec_2020 },
		{ "EOculusXRColorSpace::Rec_709", (int64)EOculusXRColorSpace::Rec_709 },
		{ "EOculusXRColorSpace::Rift_CV1", (int64)EOculusXRColorSpace::Rift_CV1 },
		{ "EOculusXRColorSpace::Rift_S", (int64)EOculusXRColorSpace::Rift_S },
		{ "EOculusXRColorSpace::Quest", (int64)EOculusXRColorSpace::Quest },
		{ "EOculusXRColorSpace::P3", (int64)EOculusXRColorSpace::P3 },
		{ "EOculusXRColorSpace::Adobe_RGB", (int64)EOculusXRColorSpace::Adobe_RGB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRColorSpace",
	"EOculusXRColorSpace",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRColorSpace;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRColorSpace.OuterSingleton)
		{
			ZRIE_EOculusXRColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRColorSpace"));
		}
		return ZRIE_EOculusXRColorSpace.OuterSingleton;
	}
	if (!ZRIE_EOculusXRColorSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRColorSpace.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRColorSpace.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRColorSpace *********************************************************

// ********** Begin Enum EOculusXRHandTrackingSupport **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRHandTrackingSupport>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Hand tracking settings. Please check https://developer.oculus.com/documentation/unreal/unreal-hand-tracking/\n * for detailed information.\n */" },
#endif
		{ "ControllersAndHands.Name", "EOculusXRHandTrackingSupport::ControllersAndHands" },
		{ "ControllersOnly.Name", "EOculusXRHandTrackingSupport::ControllersOnly" },
		{ "HandsOnly.Name", "EOculusXRHandTrackingSupport::HandsOnly" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand tracking settings. Please check https://developer.oculus.com/documentation/unreal/unreal-hand-tracking/\nfor detailed information." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRHandTrackingSupport::ControllersOnly", (int64)EOculusXRHandTrackingSupport::ControllersOnly },
		{ "EOculusXRHandTrackingSupport::ControllersAndHands", (int64)EOculusXRHandTrackingSupport::ControllersAndHands },
		{ "EOculusXRHandTrackingSupport::HandsOnly", (int64)EOculusXRHandTrackingSupport::HandsOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRHandTrackingSupport",
	"EOculusXRHandTrackingSupport",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRHandTrackingSupport;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRHandTrackingSupport.OuterSingleton)
		{
			ZRIE_EOculusXRHandTrackingSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRHandTrackingSupport"));
		}
		return ZRIE_EOculusXRHandTrackingSupport.OuterSingleton;
	}
	if (!ZRIE_EOculusXRHandTrackingSupport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRHandTrackingSupport.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRHandTrackingSupport.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRHandTrackingSupport ************************************************

// ********** Begin Enum EOculusXRHandTrackingFrequency ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRHandTrackingFrequency>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "HIGH.Name", "EOculusXRHandTrackingFrequency::HIGH" },
		{ "LOW.Name", "EOculusXRHandTrackingFrequency::LOW" },
		{ "MAX.Name", "EOculusXRHandTrackingFrequency::MAX" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRHandTrackingFrequency::LOW", (int64)EOculusXRHandTrackingFrequency::LOW },
		{ "EOculusXRHandTrackingFrequency::HIGH", (int64)EOculusXRHandTrackingFrequency::HIGH },
		{ "EOculusXRHandTrackingFrequency::MAX", (int64)EOculusXRHandTrackingFrequency::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRHandTrackingFrequency",
	"EOculusXRHandTrackingFrequency",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRHandTrackingFrequency;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRHandTrackingFrequency.OuterSingleton)
		{
			ZRIE_EOculusXRHandTrackingFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRHandTrackingFrequency"));
		}
		return ZRIE_EOculusXRHandTrackingFrequency.OuterSingleton;
	}
	if (!ZRIE_EOculusXRHandTrackingFrequency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRHandTrackingFrequency.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRHandTrackingFrequency.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRHandTrackingFrequency **********************************************

// ********** Begin Enum EOculusXRHandTrackingVersion **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRHandTrackingVersion>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "EOculusXRHandTrackingVersion::Default" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "V1.Name", "EOculusXRHandTrackingVersion::V1" },
		{ "V2.Name", "EOculusXRHandTrackingVersion::V2" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRHandTrackingVersion::Default", (int64)EOculusXRHandTrackingVersion::Default },
		{ "EOculusXRHandTrackingVersion::V1", (int64)EOculusXRHandTrackingVersion::V1 },
		{ "EOculusXRHandTrackingVersion::V2", (int64)EOculusXRHandTrackingVersion::V2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRHandTrackingVersion",
	"EOculusXRHandTrackingVersion",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRHandTrackingVersion;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRHandTrackingVersion.OuterSingleton)
		{
			ZRIE_EOculusXRHandTrackingVersion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRHandTrackingVersion"));
		}
		return ZRIE_EOculusXRHandTrackingVersion.OuterSingleton;
	}
	if (!ZRIE_EOculusXRHandTrackingVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRHandTrackingVersion.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRHandTrackingVersion.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRHandTrackingVersion ************************************************

// ********** Begin Enum EOculusXRProcessorPerformanceLevel ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRProcessorPerformanceLevel>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Boost.DisplayName", "Boost(*)" },
		{ "Boost.Name", "EOculusXRProcessorPerformanceLevel::Boost" },
		{ "Boost.ToolTip", "Allow XR Runtime to step up beyond the thermally sustainable range for short period. (Currently equivalent to SustainedHigh and not recommended to be used on Quest)" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "PowerSavings.DisplayName", "PowerSavings" },
		{ "PowerSavings.Name", "EOculusXRProcessorPerformanceLevel::PowerSavings" },
		{ "PowerSavings.ToolTip", "Usually used in non-XR section (head-locked / static screen), during which power savings are to be prioritized" },
		{ "SustainedHigh.DisplayName", "SustainedHigh" },
		{ "SustainedHigh.Name", "EOculusXRProcessorPerformanceLevel::SustainedHigh" },
		{ "SustainedHigh.ToolTip", "Let XR Runtime to perform consistent XR compositing and frame rendering within a thermally sustainable range" },
		{ "SustainedLow.DisplayName", "SustainedLow" },
		{ "SustainedLow.Name", "EOculusXRProcessorPerformanceLevel::SustainedLow" },
		{ "SustainedLow.ToolTip", "App enters a low and stable complexity section, during which reducing power is more important than occasional late rendering frames" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRProcessorPerformanceLevel::PowerSavings", (int64)EOculusXRProcessorPerformanceLevel::PowerSavings },
		{ "EOculusXRProcessorPerformanceLevel::SustainedLow", (int64)EOculusXRProcessorPerformanceLevel::SustainedLow },
		{ "EOculusXRProcessorPerformanceLevel::SustainedHigh", (int64)EOculusXRProcessorPerformanceLevel::SustainedHigh },
		{ "EOculusXRProcessorPerformanceLevel::Boost", (int64)EOculusXRProcessorPerformanceLevel::Boost },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRProcessorPerformanceLevel",
	"EOculusXRProcessorPerformanceLevel",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRProcessorPerformanceLevel;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRProcessorPerformanceLevel.OuterSingleton)
		{
			ZRIE_EOculusXRProcessorPerformanceLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRProcessorPerformanceLevel"));
		}
		return ZRIE_EOculusXRProcessorPerformanceLevel.OuterSingleton;
	}
	if (!ZRIE_EOculusXRProcessorPerformanceLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRProcessorPerformanceLevel.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRProcessorPerformanceLevel.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRProcessorPerformanceLevel ******************************************

// ********** Begin Enum EOculusXRDeviceType *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRDeviceType>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "MetaQuest3.Name", "EOculusXRDeviceType::MetaQuest3" },
		{ "MetaQuest3Link.Name", "EOculusXRDeviceType::MetaQuest3Link" },
		{ "MetaQuest3S.Name", "EOculusXRDeviceType::MetaQuest3S" },
		{ "MetaQuest3SLink.Name", "EOculusXRDeviceType::MetaQuest3SLink" },
		{ "MetaQuestPro.Name", "EOculusXRDeviceType::MetaQuestPro" },
		{ "MetaQuestProLink.Name", "EOculusXRDeviceType::MetaQuestProLink" },
		{ "MetaVRGlasses.Name", "EOculusXRDeviceType::MetaVRGlasses" },
		{ "MetaVRGlassesLink.Name", "EOculusXRDeviceType::MetaVRGlassesLink" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "OculusMobile_Deprecated0.Comment", "// mobile HMDs\n" },
		{ "OculusMobile_Deprecated0.Name", "EOculusXRDeviceType::OculusMobile_Deprecated0" },
		{ "OculusMobile_Deprecated0.ToolTip", "mobile HMDs" },
		{ "OculusQuest2.Name", "EOculusXRDeviceType::OculusQuest2" },
		{ "OculusQuest_Deprecated.Name", "EOculusXRDeviceType::OculusQuest_Deprecated" },
		{ "OculusUnknown.Comment", "// default\n" },
		{ "OculusUnknown.Name", "EOculusXRDeviceType::OculusUnknown" },
		{ "OculusUnknown.ToolTip", "default" },
		{ "Quest2_Link.Name", "EOculusXRDeviceType::Quest2_Link" },
		{ "Quest_Link_Deprecated.Name", "EOculusXRDeviceType::Quest_Link_Deprecated" },
		{ "Rift.Comment", "// PC HMDs\n" },
		{ "Rift.Name", "EOculusXRDeviceType::Rift" },
		{ "Rift.ToolTip", "PC HMDs" },
		{ "Rift_S.Name", "EOculusXRDeviceType::Rift_S" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRDeviceType::OculusMobile_Deprecated0", (int64)EOculusXRDeviceType::OculusMobile_Deprecated0 },
		{ "EOculusXRDeviceType::OculusQuest_Deprecated", (int64)EOculusXRDeviceType::OculusQuest_Deprecated },
		{ "EOculusXRDeviceType::OculusQuest2", (int64)EOculusXRDeviceType::OculusQuest2 },
		{ "EOculusXRDeviceType::MetaQuestPro", (int64)EOculusXRDeviceType::MetaQuestPro },
		{ "EOculusXRDeviceType::MetaQuest3", (int64)EOculusXRDeviceType::MetaQuest3 },
		{ "EOculusXRDeviceType::MetaQuest3S", (int64)EOculusXRDeviceType::MetaQuest3S },
		{ "EOculusXRDeviceType::MetaVRGlasses", (int64)EOculusXRDeviceType::MetaVRGlasses },
		{ "EOculusXRDeviceType::Rift", (int64)EOculusXRDeviceType::Rift },
		{ "EOculusXRDeviceType::Rift_S", (int64)EOculusXRDeviceType::Rift_S },
		{ "EOculusXRDeviceType::Quest_Link_Deprecated", (int64)EOculusXRDeviceType::Quest_Link_Deprecated },
		{ "EOculusXRDeviceType::Quest2_Link", (int64)EOculusXRDeviceType::Quest2_Link },
		{ "EOculusXRDeviceType::MetaQuestProLink", (int64)EOculusXRDeviceType::MetaQuestProLink },
		{ "EOculusXRDeviceType::MetaQuest3Link", (int64)EOculusXRDeviceType::MetaQuest3Link },
		{ "EOculusXRDeviceType::MetaQuest3SLink", (int64)EOculusXRDeviceType::MetaQuest3SLink },
		{ "EOculusXRDeviceType::MetaVRGlassesLink", (int64)EOculusXRDeviceType::MetaVRGlassesLink },
		{ "EOculusXRDeviceType::OculusUnknown", (int64)EOculusXRDeviceType::OculusUnknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRDeviceType",
	"EOculusXRDeviceType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRDeviceType;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRDeviceType.OuterSingleton)
		{
			ZRIE_EOculusXRDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRDeviceType"));
		}
		return ZRIE_EOculusXRDeviceType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRDeviceType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRDeviceType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRDeviceType *********************************************************

// ********** Begin Enum EOculusXRControllerType ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRControllerType>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "MetaQuestTouch.Name", "EOculusXRControllerType::MetaQuestTouch" },
		{ "MetaQuestTouchPlus.Name", "EOculusXRControllerType::MetaQuestTouchPlus" },
		{ "MetaQuestTouchPro.Name", "EOculusXRControllerType::MetaQuestTouchPro" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "None.Name", "EOculusXRControllerType::None" },
		{ "Unknown.Name", "EOculusXRControllerType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRControllerType::None", (int64)EOculusXRControllerType::None },
		{ "EOculusXRControllerType::MetaQuestTouch", (int64)EOculusXRControllerType::MetaQuestTouch },
		{ "EOculusXRControllerType::MetaQuestTouchPro", (int64)EOculusXRControllerType::MetaQuestTouchPro },
		{ "EOculusXRControllerType::MetaQuestTouchPlus", (int64)EOculusXRControllerType::MetaQuestTouchPlus },
		{ "EOculusXRControllerType::Unknown", (int64)EOculusXRControllerType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRControllerType",
	"EOculusXRControllerType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRControllerType;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRControllerType.OuterSingleton)
		{
			ZRIE_EOculusXRControllerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRControllerType"));
		}
		return ZRIE_EOculusXRControllerType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRControllerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRControllerType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRControllerType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRControllerType *****************************************************

// ********** Begin Enum EOculusXRXrApi ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRXrApi>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "NativeOpenXR.DisplayName", "Epic Native OpenXR (Recommended)" },
		{ "NativeOpenXR.Name", "EOculusXRXrApi::NativeOpenXR" },
		{ "NativeOpenXR.ToolTip", "Native OpenXR integration through the Epic OpenXR plugin with additional Meta XR features provided by this plugin. The OpenXR plugin must be enabled." },
		{ "OVRPluginOpenXR.DisplayName", "Meta XR with OVRPlugin (Deprecated - use Epic Native OpenXR)" },
		{ "OVRPluginOpenXR.Name", "EOculusXRXrApi::OVRPluginOpenXR" },
		{ "OVRPluginOpenXR.ToolTip", "The OVRPlugin backend is deprecated and will be removed in a future release. Switch to Epic Native OpenXR." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRXrApi::OVRPluginOpenXR", (int64)EOculusXRXrApi::OVRPluginOpenXR },
		{ "EOculusXRXrApi::NativeOpenXR", (int64)EOculusXRXrApi::NativeOpenXR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRXrApi",
	"EOculusXRXrApi",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRXrApi;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRXrApi.OuterSingleton)
		{
			ZRIE_EOculusXRXrApi.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRXrApi"));
		}
		return ZRIE_EOculusXRXrApi.OuterSingleton;
	}
	if (!ZRIE_EOculusXRXrApi.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRXrApi.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRXrApi.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRXrApi **************************************************************

// ********** Begin ScriptStruct FOculusXRGuardianTestResult ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRGuardianTestResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRGuardianTestResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Information about relationships between a triggered boundary (EOculusXRBoundaryType::Boundary_Outer or\n * EOculusXRBoundaryType::Boundary_PlayArea) and a device or point in the world.\n * All dimensions, points, and vectors are returned in Unreal world coordinate space.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about relationships between a triggered boundary (EOculusXRBoundaryType::Boundary_Outer or\nEOculusXRBoundaryType::Boundary_PlayArea) and a device or point in the world.\nAll dimensions, points, and vectors are returned in Unreal world coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTriggering_MetaData[] = {
		{ "Category", "Boundary Test Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is there a triggering interaction between the device/point and specified boundary? */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is there a triggering interaction between the device/point and specified boundary?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[] = {
		{ "Category", "Boundary Test Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Device type triggering boundary (EOculusXRTrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device) */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Device type triggering boundary (EOculusXRTrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosestDistance_MetaData[] = {
		{ "Category", "Boundary Test Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance of device/point to surface of boundary specified by BoundaryType */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance of device/point to surface of boundary specified by BoundaryType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPoint_MetaData[] = {
		{ "Category", "Boundary Test Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Closest point on surface corresponding to specified boundary */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Closest point on surface corresponding to specified boundary" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPointNormal_MetaData[] = {
		{ "Category", "Boundary Test Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Normal of closest point */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normal of closest point" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRGuardianTestResult constinit property declarations *******
	static void NewProp_IsTriggering_SetBit(void* Obj)
	{
		((FOculusXRGuardianTestResult*)Obj)->IsTriggering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTriggering;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClosestDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPointNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRGuardianTestResult constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRGuardianTestResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRGuardianTestResult Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_IsTriggering = { "IsTriggering", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRGuardianTestResult), &UHT_STATICS::NewProp_IsTriggering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTriggering_MetaData), NewProp_IsTriggering_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRGuardianTestResult, DeviceType), Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceType_MetaData), NewProp_DeviceType_MetaData) }; // acf429d83a3748ebfd59a9340053b1a765452c66
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ClosestDistance = { "ClosestDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRGuardianTestResult, ClosestDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosestDistance_MetaData), NewProp_ClosestDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRGuardianTestResult, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosestPoint_MetaData), NewProp_ClosestPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClosestPointNormal = { "ClosestPointNormal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRGuardianTestResult, ClosestPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosestPointNormal_MetaData), NewProp_ClosestPointNormal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IsTriggering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestPointNormal,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRGuardianTestResult Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	&NewStructOps,
	"OculusXRGuardianTestResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRGuardianTestResult>(),
	alignof(FOculusXRGuardianTestResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRGuardianTestResult;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRGuardianTestResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRGuardianTestResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRGuardianTestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("OculusXRGuardianTestResult"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRGuardianTestResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRGuardianTestResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRGuardianTestResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRGuardianTestResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRGuardianTestResult *****************************************

// ********** Begin Enum EOculusXRControllerPoseAlignment ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRControllerPoseAlignment>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Aim.Name", "EOculusXRControllerPoseAlignment::Aim" },
		{ "Aim.ToolTip", "Aim pose alignment as defined by OpenXR. Use this for cross-plugin compatibility with assets designed for the native OpenXR aim pose." },
		{ "Default.Name", "EOculusXRControllerPoseAlignment::Default" },
		{ "Default.ToolTip", "Default pose alignment used in all versions of the Meta XR plugin. Recommended pose for compatibility with previous assets designed for the Meta XR plugin." },
		{ "Grip.Name", "EOculusXRControllerPoseAlignment::Grip" },
		{ "Grip.ToolTip", "Grip pose alignment as defined by OpenXR. Use this for cross-plugin compatibility with assets designed for the native OpenXR grip pose." },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRControllerPoseAlignment::Default", (int64)EOculusXRControllerPoseAlignment::Default },
		{ "EOculusXRControllerPoseAlignment::Grip", (int64)EOculusXRControllerPoseAlignment::Grip },
		{ "EOculusXRControllerPoseAlignment::Aim", (int64)EOculusXRControllerPoseAlignment::Aim },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRControllerPoseAlignment",
	"EOculusXRControllerPoseAlignment",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRControllerPoseAlignment;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRControllerPoseAlignment.OuterSingleton)
		{
			ZRIE_EOculusXRControllerPoseAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRControllerPoseAlignment"));
		}
		return ZRIE_EOculusXRControllerPoseAlignment.OuterSingleton;
	}
	if (!ZRIE_EOculusXRControllerPoseAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRControllerPoseAlignment.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRControllerPoseAlignment.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRControllerPoseAlignment ********************************************

// ********** Begin ScriptStruct FOculusXRSplashDesc ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRSplashDesc>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRSplashDesc); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture to display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "transform of center of quad (meters)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadSizeInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dimensions in meters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delta rotation that will be added each rendering frame (half rate of full vsync)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture offset amount from the top left corner." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture scale." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the splash layer uses it's alpha channel." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRSplashDesc constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformInMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuadSizeInMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureScale;
	static void NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((FOculusXRSplashDesc*)Obj)->bNoAlphaChannel = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRSplashDesc constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSplashDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRSplashDesc Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, TexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePath_MetaData), NewProp_TexturePath_MetaData) }; // af11f93e8a98b61a8502d3dfb50f3175321d399c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TransformInMeters = { "TransformInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, TransformInMeters), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformInMeters_MetaData), NewProp_TransformInMeters_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_QuadSizeInMeters = { "QuadSizeInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, QuadSizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadSizeInMeters_MetaData), NewProp_QuadSizeInMeters_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, DeltaRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaRotation_MetaData), NewProp_DeltaRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextureOffset = { "TextureOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, TextureOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureOffset_MetaData), NewProp_TextureOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureScale_MetaData), NewProp_TextureScale_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRSplashDesc), &UHT_STATICS::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoAlphaChannel_MetaData), NewProp_bNoAlphaChannel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TexturePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransformInMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuadSizeInMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bNoAlphaChannel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRSplashDesc Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	&NewStructOps,
	"OculusXRSplashDesc",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRSplashDesc>(),
	alignof(FOculusXRSplashDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSplashDesc;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSplashDesc(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRSplashDesc.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRSplashDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSplashDesc, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("OculusXRSplashDesc"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRSplashDesc.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSplashDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSplashDesc.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRSplashDesc.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRSplashDesc *************************************************

// ********** Begin Enum EOculusXROcclusionsMode ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXROcclusionsMode>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/// Environment depth occlusions disabled.\n" },
		{ "Disabled.Name", "EOculusXROcclusionsMode::Disabled" },
		{ "Disabled.ToolTip", "Environment depth occlusions disabled." },
		{ "HardOcclusions_Deprecated.Comment", "/// Hard occlusions, this is deprecated. Use soft occlusions instead.\n" },
		{ "HardOcclusions_Deprecated.Name", "EOculusXROcclusionsMode::HardOcclusions_Deprecated" },
		{ "HardOcclusions_Deprecated.ToolTip", "Hard occlusions, this is deprecated. Use soft occlusions instead." },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "SoftOcclusions.Comment", "/// Soft occlusions, shows soft edges between the real and virtual world.\n" },
		{ "SoftOcclusions.Name", "EOculusXROcclusionsMode::SoftOcclusions" },
		{ "SoftOcclusions.ToolTip", "Soft occlusions, shows soft edges between the real and virtual world." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXROcclusionsMode::Disabled", (int64)EOculusXROcclusionsMode::Disabled },
		{ "EOculusXROcclusionsMode::HardOcclusions_Deprecated", (int64)EOculusXROcclusionsMode::HardOcclusions_Deprecated },
		{ "EOculusXROcclusionsMode::SoftOcclusions", (int64)EOculusXROcclusionsMode::SoftOcclusions },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXROcclusionsMode",
	"EOculusXROcclusionsMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXROcclusionsMode;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXROcclusionsMode.OuterSingleton)
		{
			ZRIE_EOculusXROcclusionsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXROcclusionsMode"));
		}
		return ZRIE_EOculusXROcclusionsMode.OuterSingleton;
	}
	if (!ZRIE_EOculusXROcclusionsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXROcclusionsMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXROcclusionsMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXROcclusionsMode *****************************************************

// ********** Begin Enum EOculusXREyeBufferSharpenType *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXREyeBufferSharpenType>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "SLST_Auto.Comment", "/// Auto Filtering: Runtime automatically chooses the appropriate sharpening filter\n" },
		{ "SLST_Auto.DisplayName", "Auto Filtering" },
		{ "SLST_Auto.Name", "EOculusXREyeBufferSharpenType::SLST_Auto" },
		{ "SLST_Auto.ToolTip", "Auto Filtering: Runtime automatically chooses the appropriate sharpening filter" },
		{ "SLST_MAX.Name", "EOculusXREyeBufferSharpenType::SLST_MAX" },
		{ "SLST_None.Comment", "/// No Sharpening\n" },
		{ "SLST_None.DisplayName", "No Sharpening" },
		{ "SLST_None.Name", "EOculusXREyeBufferSharpenType::SLST_None" },
		{ "SLST_None.ToolTip", "No Sharpening" },
		{ "SLST_Normal.Comment", "/// Normal Sharpening\n" },
		{ "SLST_Normal.DisplayName", "Normal Sharpening" },
		{ "SLST_Normal.Name", "EOculusXREyeBufferSharpenType::SLST_Normal" },
		{ "SLST_Normal.ToolTip", "Normal Sharpening" },
		{ "SLST_Quality.Comment", "/// Quality Sharpening\n" },
		{ "SLST_Quality.DisplayName", "Quality Sharpening" },
		{ "SLST_Quality.Name", "EOculusXREyeBufferSharpenType::SLST_Quality" },
		{ "SLST_Quality.ToolTip", "Quality Sharpening" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXREyeBufferSharpenType::SLST_None", (int64)EOculusXREyeBufferSharpenType::SLST_None },
		{ "EOculusXREyeBufferSharpenType::SLST_Normal", (int64)EOculusXREyeBufferSharpenType::SLST_Normal },
		{ "EOculusXREyeBufferSharpenType::SLST_Quality", (int64)EOculusXREyeBufferSharpenType::SLST_Quality },
		{ "EOculusXREyeBufferSharpenType::SLST_Auto", (int64)EOculusXREyeBufferSharpenType::SLST_Auto },
		{ "EOculusXREyeBufferSharpenType::SLST_MAX", (int64)EOculusXREyeBufferSharpenType::SLST_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXREyeBufferSharpenType",
	"EOculusXREyeBufferSharpenType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXREyeBufferSharpenType;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXREyeBufferSharpenType.OuterSingleton)
		{
			ZRIE_EOculusXREyeBufferSharpenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXREyeBufferSharpenType"));
		}
		return ZRIE_EOculusXREyeBufferSharpenType.OuterSingleton;
	}
	if (!ZRIE_EOculusXREyeBufferSharpenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXREyeBufferSharpenType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXREyeBufferSharpenType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXREyeBufferSharpenType ***********************************************

// ********** Begin Enum EProcessorFavor ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EProcessorFavor>()
{
	return Z_Construct_UEnum_OculusXRHMD_EProcessorFavor(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "FavorCPU.DisplayName", "Favor CPU" },
		{ "FavorCPU.Name", "EProcessorFavor::FavorCPU" },
		{ "FavorEqually.DisplayName", "Favor Equally" },
		{ "FavorEqually.Name", "EProcessorFavor::FavorEqually" },
		{ "FavorGPU.DisplayName", "Favor GPU" },
		{ "FavorGPU.Name", "EProcessorFavor::FavorGPU" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProcessorFavor::FavorEqually", (int64)EProcessorFavor::FavorEqually },
		{ "EProcessorFavor::FavorCPU", (int64)EProcessorFavor::FavorCPU },
		{ "EProcessorFavor::FavorGPU", (int64)EProcessorFavor::FavorGPU },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EProcessorFavor",
	"EProcessorFavor",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EProcessorFavor;
UEnum* Z_Construct_UEnum_OculusXRHMD_EProcessorFavor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EProcessorFavor.OuterSingleton)
		{
			ZRIE_EProcessorFavor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EProcessorFavor, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EProcessorFavor"));
		}
		return ZRIE_EProcessorFavor.OuterSingleton;
	}
	if (!ZRIE_EProcessorFavor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EProcessorFavor.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EProcessorFavor.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EProcessorFavor *************************************************************

// ********** Begin Enum EOculusXRHMDBodyTrackingFidelity ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRHMDBodyTrackingFidelity>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EOculusXRHMDBodyTrackingFidelity::High" },
		{ "Low.Name", "EOculusXRHMDBodyTrackingFidelity::Low" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "Unset.Hidden", "" },
		{ "Unset.Name", "EOculusXRHMDBodyTrackingFidelity::Unset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRHMDBodyTrackingFidelity::Unset", (int64)EOculusXRHMDBodyTrackingFidelity::Unset },
		{ "EOculusXRHMDBodyTrackingFidelity::Low", (int64)EOculusXRHMDBodyTrackingFidelity::Low },
		{ "EOculusXRHMDBodyTrackingFidelity::High", (int64)EOculusXRHMDBodyTrackingFidelity::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRHMDBodyTrackingFidelity",
	"EOculusXRHMDBodyTrackingFidelity",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRHMDBodyTrackingFidelity;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRHMDBodyTrackingFidelity.OuterSingleton)
		{
			ZRIE_EOculusXRHMDBodyTrackingFidelity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRHMDBodyTrackingFidelity"));
		}
		return ZRIE_EOculusXRHMDBodyTrackingFidelity.OuterSingleton;
	}
	if (!ZRIE_EOculusXRHMDBodyTrackingFidelity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRHMDBodyTrackingFidelity.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRHMDBodyTrackingFidelity.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRHMDBodyTrackingFidelity ********************************************

// ********** Begin Enum EOculusXRHMDBodyJointSet **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRHMDBodyJointSet>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "FullBody.Name", "EOculusXRHMDBodyJointSet::FullBody" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "UpperBody.Name", "EOculusXRHMDBodyJointSet::UpperBody" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRHMDBodyJointSet::UpperBody", (int64)EOculusXRHMDBodyJointSet::UpperBody },
		{ "EOculusXRHMDBodyJointSet::FullBody", (int64)EOculusXRHMDBodyJointSet::FullBody },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRHMDBodyJointSet",
	"EOculusXRHMDBodyJointSet",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRHMDBodyJointSet;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRHMDBodyJointSet.OuterSingleton)
		{
			ZRIE_EOculusXRHMDBodyJointSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRHMDBodyJointSet"));
		}
		return ZRIE_EOculusXRHMDBodyJointSet.OuterSingleton;
	}
	if (!ZRIE_EOculusXRHMDBodyJointSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRHMDBodyJointSet.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRHMDBodyJointSet.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRHMDBodyJointSet ****************************************************

// ********** Begin Enum EFaceTrackingDataSourceConfig *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EFaceTrackingDataSourceConfig>()
{
	return Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Audio.DisplayName", "Audio" },
		{ "Audio.Name", "EFaceTrackingDataSourceConfig::Audio" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EFaceTrackingDataSourceConfig::MAX" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "Visual.DisplayName", "Visual" },
		{ "Visual.Name", "EFaceTrackingDataSourceConfig::Visual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFaceTrackingDataSourceConfig::Visual", (int64)EFaceTrackingDataSourceConfig::Visual },
		{ "EFaceTrackingDataSourceConfig::Audio", (int64)EFaceTrackingDataSourceConfig::Audio },
		{ "EFaceTrackingDataSourceConfig::MAX", (int64)EFaceTrackingDataSourceConfig::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EFaceTrackingDataSourceConfig",
	"EFaceTrackingDataSourceConfig",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFaceTrackingDataSourceConfig;
UEnum* Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFaceTrackingDataSourceConfig.OuterSingleton)
		{
			ZRIE_EFaceTrackingDataSourceConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EFaceTrackingDataSourceConfig"));
		}
		return ZRIE_EFaceTrackingDataSourceConfig.OuterSingleton;
	}
	if (!ZRIE_EFaceTrackingDataSourceConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFaceTrackingDataSourceConfig.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFaceTrackingDataSourceConfig.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFaceTrackingDataSourceConfig ***********************************************

// ********** Begin Enum ESystemSplashBackgroundType ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<ESystemSplashBackgroundType>()
{
	return Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Black.DisplayName", "Black" },
		{ "Black.Name", "ESystemSplashBackgroundType::Black" },
		{ "Contextual.DisplayName", "Passthrough (Contextual)" },
		{ "Contextual.Name", "ESystemSplashBackgroundType::Contextual" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESystemSplashBackgroundType::Black", (int64)ESystemSplashBackgroundType::Black },
		{ "ESystemSplashBackgroundType::Contextual", (int64)ESystemSplashBackgroundType::Contextual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"ESystemSplashBackgroundType",
	"ESystemSplashBackgroundType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESystemSplashBackgroundType;
UEnum* Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESystemSplashBackgroundType.OuterSingleton)
		{
			ZRIE_ESystemSplashBackgroundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("ESystemSplashBackgroundType"));
		}
		return ZRIE_ESystemSplashBackgroundType.OuterSingleton;
	}
	if (!ZRIE_ESystemSplashBackgroundType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESystemSplashBackgroundType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESystemSplashBackgroundType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESystemSplashBackgroundType *************************************************

// ********** Begin ScriptStruct FOculusXRPerformanceMetrics ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRPerformanceMetrics_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRPerformanceMetrics>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRPerformanceMetrics); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Oculus Performance Metrics" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppCpuTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** App CPU Time (ms) */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "AppCpuTime is deprecated and not supported by OpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "App CPU Time (ms)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppGpuTime_MetaData[] = {
		{ "Category", "Performance Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** App GPU Time (ms) */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "App GPU Time (ms)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComCpuTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Compositor CPU Time (ms) */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "ComCpuTime is deprecated and not supported by OpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compositor CPU Time (ms)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComGpuTime_MetaData[] = {
		{ "Category", "Performance Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Compositor GPU Time (ms) */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compositor GPU Time (ms)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroppedFrames_MetaData[] = {
		{ "Category", "Performance Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Compositor Dropped Frames */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compositor Dropped Frames" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GpuUtil_MetaData[] = {
		{ "Category", "Performance Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** System GPU Util % */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System GPU Util %" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CpuUtilAvg_MetaData[] = {
		{ "Category", "Performance Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** System CPU Util Avg % */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System CPU Util Avg %" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CpuUtilWorst_MetaData[] = {
		{ "Category", "Performance Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** System CPU Util Worst % */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System CPU Util Worst %" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComSpaceWarpMode_MetaData[] = {
		{ "Category", "Performance Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Compositor SpaceWarp Mode: 0: Disabled; 1: Enabled */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compositor SpaceWarp Mode: 0: Disabled; 1: Enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CpuCoreUtil_MetaData[] = {
		{ "Category", "Performance Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** CPU Core Util % */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CPU Core Util %" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRPerformanceMetrics constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AppCpuTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AppGpuTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComCpuTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComGpuTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DroppedFrames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GpuUtil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CpuUtilAvg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CpuUtilWorst;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComSpaceWarpMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CpuCoreUtil_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CpuCoreUtil;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRPerformanceMetrics constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRPerformanceMetrics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRPerformanceMetrics Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AppCpuTime = { "AppCpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, AppCpuTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppCpuTime_MetaData), NewProp_AppCpuTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AppGpuTime = { "AppGpuTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, AppGpuTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppGpuTime_MetaData), NewProp_AppGpuTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ComCpuTime = { "ComCpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, ComCpuTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComCpuTime_MetaData), NewProp_ComCpuTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ComGpuTime = { "ComGpuTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, ComGpuTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComGpuTime_MetaData), NewProp_ComGpuTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DroppedFrames = { "DroppedFrames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, DroppedFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroppedFrames_MetaData), NewProp_DroppedFrames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GpuUtil = { "GpuUtil", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, GpuUtil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GpuUtil_MetaData), NewProp_GpuUtil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CpuUtilAvg = { "CpuUtilAvg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, CpuUtilAvg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CpuUtilAvg_MetaData), NewProp_CpuUtilAvg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CpuUtilWorst = { "CpuUtilWorst", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, CpuUtilWorst), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CpuUtilWorst_MetaData), NewProp_CpuUtilWorst_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ComSpaceWarpMode = { "ComSpaceWarpMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, ComSpaceWarpMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComSpaceWarpMode_MetaData), NewProp_ComSpaceWarpMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CpuCoreUtil_Inner = { "CpuCoreUtil", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CpuCoreUtil = { "CpuCoreUtil", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRPerformanceMetrics, CpuCoreUtil), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CpuCoreUtil_MetaData), NewProp_CpuCoreUtil_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AppCpuTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AppGpuTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComCpuTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComGpuTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DroppedFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GpuUtil,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CpuUtilAvg,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CpuUtilWorst,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComSpaceWarpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CpuCoreUtil_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CpuCoreUtil,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRPerformanceMetrics Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	&NewStructOps,
	"OculusXRPerformanceMetrics",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRPerformanceMetrics>(),
	alignof(FOculusXRPerformanceMetrics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRPerformanceMetrics;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRPerformanceMetrics(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRPerformanceMetrics.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRPerformanceMetrics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRPerformanceMetrics, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("OculusXRPerformanceMetrics"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRPerformanceMetrics.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRPerformanceMetrics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRPerformanceMetrics.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRPerformanceMetrics.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRPerformanceMetrics *****************************************

// ********** Begin Enum EOculusXRMPPoseRestoreType ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRMPPoseRestoreType_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRMPPoseRestoreType>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRMPPoseRestoreType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/// DONOT restore head and controller poses\n" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EOculusXRMPPoseRestoreType::Disabled" },
		{ "Disabled.ToolTip", "DONOT restore head and controller poses" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "PositionAndRotation.Comment", "/// Restore head and controller position and rotation\n" },
		{ "PositionAndRotation.DisplayName", "Restore Position And Rotation" },
		{ "PositionAndRotation.Name", "EOculusXRMPPoseRestoreType::PositionAndRotation" },
		{ "PositionAndRotation.ToolTip", "Restore head and controller position and rotation" },
		{ "PositionOnly.Comment", "/// Only restore head and controller position\n" },
		{ "PositionOnly.DisplayName", "Restore Position Only" },
		{ "PositionOnly.Name", "EOculusXRMPPoseRestoreType::PositionOnly" },
		{ "PositionOnly.ToolTip", "Only restore head and controller position" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRMPPoseRestoreType::Disabled", (int64)EOculusXRMPPoseRestoreType::Disabled },
		{ "EOculusXRMPPoseRestoreType::PositionOnly", (int64)EOculusXRMPPoseRestoreType::PositionOnly },
		{ "EOculusXRMPPoseRestoreType::PositionAndRotation", (int64)EOculusXRMPPoseRestoreType::PositionAndRotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRMPPoseRestoreType",
	"EOculusXRMPPoseRestoreType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRMPPoseRestoreType;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRMPPoseRestoreType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRMPPoseRestoreType.OuterSingleton)
		{
			ZRIE_EOculusXRMPPoseRestoreType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRMPPoseRestoreType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRMPPoseRestoreType"));
		}
		return ZRIE_EOculusXRMPPoseRestoreType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRMPPoseRestoreType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRMPPoseRestoreType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRMPPoseRestoreType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRMPPoseRestoreType **************************************************

// ********** Begin Enum ELightingEstimation_Resolution ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_Resolution_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<ELightingEstimation_Resolution>()
{
	return Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_Resolution(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Resolution of the environment map for Lighting Estimation */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "Resolution_128.Comment", "/** 128x128 resolution */" },
		{ "Resolution_128.DisplayName", "128x128" },
		{ "Resolution_128.Name", "Resolution_128" },
		{ "Resolution_128.ToolTip", "128x128 resolution" },
		{ "Resolution_16.Comment", "/** 16x16 resolution */" },
		{ "Resolution_16.DisplayName", "16x16" },
		{ "Resolution_16.Name", "Resolution_16" },
		{ "Resolution_16.ToolTip", "16x16 resolution" },
		{ "Resolution_256.Comment", "/** 256x256 resolution */" },
		{ "Resolution_256.DisplayName", "256x256" },
		{ "Resolution_256.Name", "Resolution_256" },
		{ "Resolution_256.ToolTip", "256x256 resolution" },
		{ "Resolution_32.Comment", "/** 32x32 resolution */" },
		{ "Resolution_32.DisplayName", "32x32" },
		{ "Resolution_32.Name", "Resolution_32" },
		{ "Resolution_32.ToolTip", "32x32 resolution" },
		{ "Resolution_64.Comment", "/** 64x64 resolution */" },
		{ "Resolution_64.DisplayName", "64x64" },
		{ "Resolution_64.Name", "Resolution_64" },
		{ "Resolution_64.ToolTip", "64x64 resolution" },
		{ "Resolution_MAX.Name", "Resolution_MAX" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolution of the environment map for Lighting Estimation" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Resolution_16", (int64)Resolution_16 },
		{ "Resolution_32", (int64)Resolution_32 },
		{ "Resolution_64", (int64)Resolution_64 },
		{ "Resolution_128", (int64)Resolution_128 },
		{ "Resolution_256", (int64)Resolution_256 },
		{ "Resolution_MAX", (int64)Resolution_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"ELightingEstimation_Resolution",
	"ELightingEstimation_Resolution",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELightingEstimation_Resolution;
UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_Resolution(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELightingEstimation_Resolution.OuterSingleton)
		{
			ZRIE_ELightingEstimation_Resolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_Resolution, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("ELightingEstimation_Resolution"));
		}
		return ZRIE_ELightingEstimation_Resolution.OuterSingleton;
	}
	if (!ZRIE_ELightingEstimation_Resolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELightingEstimation_Resolution.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELightingEstimation_Resolution.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELightingEstimation_Resolution **********************************************

// ********** Begin Enum ELightingEstimation_PixelFormat *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_PixelFormat_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<ELightingEstimation_PixelFormat>()
{
	return Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_PixelFormat(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Pixel format of the environment map for Lighting Estimation */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "PixelFormat_MAX.Name", "PixelFormat_MAX" },
		{ "PixelFormat_Rgba16f.Comment", "/** RGBA16f */" },
		{ "PixelFormat_Rgba16f.DisplayName", "RGBA16f" },
		{ "PixelFormat_Rgba16f.Name", "PixelFormat_Rgba16f" },
		{ "PixelFormat_Rgba16f.ToolTip", "RGBA16f" },
		{ "PixelFormat_Rgba32f.Comment", "/** RGBA32f */" },
		{ "PixelFormat_Rgba32f.DisplayName", "RGBA32f" },
		{ "PixelFormat_Rgba32f.Name", "PixelFormat_Rgba32f" },
		{ "PixelFormat_Rgba32f.ToolTip", "RGBA32f" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pixel format of the environment map for Lighting Estimation" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PixelFormat_Rgba16f", (int64)PixelFormat_Rgba16f },
		{ "PixelFormat_Rgba32f", (int64)PixelFormat_Rgba32f },
		{ "PixelFormat_MAX", (int64)PixelFormat_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"ELightingEstimation_PixelFormat",
	"ELightingEstimation_PixelFormat",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELightingEstimation_PixelFormat;
UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_PixelFormat(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELightingEstimation_PixelFormat.OuterSingleton)
		{
			ZRIE_ELightingEstimation_PixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_PixelFormat, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("ELightingEstimation_PixelFormat"));
		}
		return ZRIE_ELightingEstimation_PixelFormat.OuterSingleton;
	}
	if (!ZRIE_ELightingEstimation_PixelFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELightingEstimation_PixelFormat.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELightingEstimation_PixelFormat.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELightingEstimation_PixelFormat *********************************************

// ********** Begin Enum ELightingEstimation_CubeFace **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_CubeFace_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<ELightingEstimation_CubeFace>()
{
	return Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_CubeFace(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cube face of the environment map for Lighting Estimation */" },
#endif
		{ "CubeFace_NegativeX.Comment", "/** Front face (-X) */" },
		{ "CubeFace_NegativeX.DisplayName", "Negative X" },
		{ "CubeFace_NegativeX.Name", "CubeFace_NegativeX" },
		{ "CubeFace_NegativeX.ToolTip", "Front face (-X)" },
		{ "CubeFace_NegativeY.Comment", "/** Left face (-Y) */" },
		{ "CubeFace_NegativeY.DisplayName", "Negative Y" },
		{ "CubeFace_NegativeY.Name", "CubeFace_NegativeY" },
		{ "CubeFace_NegativeY.ToolTip", "Left face (-Y)" },
		{ "CubeFace_NegativeZ.Comment", "/** Bottom face (-Z) */" },
		{ "CubeFace_NegativeZ.DisplayName", "Negative Z" },
		{ "CubeFace_NegativeZ.Name", "CubeFace_NegativeZ" },
		{ "CubeFace_NegativeZ.ToolTip", "Bottom face (-Z)" },
		{ "CubeFace_PositiveX.Comment", "/** Back face (+X) */" },
		{ "CubeFace_PositiveX.DisplayName", "Positive X" },
		{ "CubeFace_PositiveX.Name", "CubeFace_PositiveX" },
		{ "CubeFace_PositiveX.ToolTip", "Back face (+X)" },
		{ "CubeFace_PositiveY.Comment", "/** Right face (+Y) */" },
		{ "CubeFace_PositiveY.DisplayName", "Positive Y" },
		{ "CubeFace_PositiveY.Name", "CubeFace_PositiveY" },
		{ "CubeFace_PositiveY.ToolTip", "Right face (+Y)" },
		{ "CubeFace_PositiveZ.Comment", "/** Top face (+Z) */" },
		{ "CubeFace_PositiveZ.DisplayName", "Positive Z" },
		{ "CubeFace_PositiveZ.Name", "CubeFace_PositiveZ" },
		{ "CubeFace_PositiveZ.ToolTip", "Top face (+Z)" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cube face of the environment map for Lighting Estimation" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CubeFace_PositiveX", (int64)CubeFace_PositiveX },
		{ "CubeFace_NegativeX", (int64)CubeFace_NegativeX },
		{ "CubeFace_PositiveY", (int64)CubeFace_PositiveY },
		{ "CubeFace_NegativeY", (int64)CubeFace_NegativeY },
		{ "CubeFace_PositiveZ", (int64)CubeFace_PositiveZ },
		{ "CubeFace_NegativeZ", (int64)CubeFace_NegativeZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"ELightingEstimation_CubeFace",
	"ELightingEstimation_CubeFace",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELightingEstimation_CubeFace;
UEnum* Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_CubeFace(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELightingEstimation_CubeFace.OuterSingleton)
		{
			ZRIE_ELightingEstimation_CubeFace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_CubeFace, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("ELightingEstimation_CubeFace"));
		}
		return ZRIE_ELightingEstimation_CubeFace.OuterSingleton;
	}
	if (!ZRIE_ELightingEstimation_CubeFace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELightingEstimation_CubeFace.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELightingEstimation_CubeFace.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELightingEstimation_CubeFace ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h__Script_OculusXRHMD_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, TEXT("EOculusXRTrackedDeviceType"), &ZRIE_EOculusXRTrackedDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2901682648U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod, TEXT("EOculusXRFoveatedRenderingMethod"), &ZRIE_EOculusXRFoveatedRenderingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1217290393U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel, TEXT("EOculusXRFoveatedRenderingLevel"), &ZRIE_EOculusXRFoveatedRenderingLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1907838910U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType, TEXT("EOculusXRBoundaryType"), &ZRIE_EOculusXRBoundaryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1020203356U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace, TEXT("EOculusXRColorSpace"), &ZRIE_EOculusXRColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1518286784U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport, TEXT("EOculusXRHandTrackingSupport"), &ZRIE_EOculusXRHandTrackingSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3352627990U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency, TEXT("EOculusXRHandTrackingFrequency"), &ZRIE_EOculusXRHandTrackingFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2643485169U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion, TEXT("EOculusXRHandTrackingVersion"), &ZRIE_EOculusXRHandTrackingVersion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3575390292U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, TEXT("EOculusXRProcessorPerformanceLevel"), &ZRIE_EOculusXRProcessorPerformanceLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4210882124U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType, TEXT("EOculusXRDeviceType"), &ZRIE_EOculusXRDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3104488472U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType, TEXT("EOculusXRControllerType"), &ZRIE_EOculusXRControllerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1161981811U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi, TEXT("EOculusXRXrApi"), &ZRIE_EOculusXRXrApi, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 464960198U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment, TEXT("EOculusXRControllerPoseAlignment"), &ZRIE_EOculusXRControllerPoseAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2919311258U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode, TEXT("EOculusXROcclusionsMode"), &ZRIE_EOculusXROcclusionsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 798964661U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType, TEXT("EOculusXREyeBufferSharpenType"), &ZRIE_EOculusXREyeBufferSharpenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 715885511U) },
		{ Z_Construct_UEnum_OculusXRHMD_EProcessorFavor, TEXT("EProcessorFavor"), &ZRIE_EProcessorFavor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2356391836U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity, TEXT("EOculusXRHMDBodyTrackingFidelity"), &ZRIE_EOculusXRHMDBodyTrackingFidelity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1157843448U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet, TEXT("EOculusXRHMDBodyJointSet"), &ZRIE_EOculusXRHMDBodyJointSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 82310024U) },
		{ Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig, TEXT("EFaceTrackingDataSourceConfig"), &ZRIE_EFaceTrackingDataSourceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 174629142U) },
		{ Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType, TEXT("ESystemSplashBackgroundType"), &ZRIE_ESystemSplashBackgroundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3959421221U) },
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRMPPoseRestoreType, TEXT("EOculusXRMPPoseRestoreType"), &ZRIE_EOculusXRMPPoseRestoreType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 186756555U) },
		{ Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_Resolution, TEXT("ELightingEstimation_Resolution"), &ZRIE_ELightingEstimation_Resolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3332568678U) },
		{ Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_PixelFormat, TEXT("ELightingEstimation_PixelFormat"), &ZRIE_ELightingEstimation_PixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1892602603U) },
		{ Z_Construct_UEnum_OculusXRHMD_ELightingEstimation_CubeFace, TEXT("ELightingEstimation_CubeFace"), &ZRIE_ELightingEstimation_CubeFace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1268988577U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField, Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewStructOps, TEXT("OculusXRHmdUserProfileField"),&Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfileField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRHmdUserProfileField), 554975864U) },
		{ Z_Construct_UScriptStruct_FOculusXRHmdUserProfile, Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewStructOps, TEXT("OculusXRHmdUserProfile"),&Z_Registration_Info_UScriptStruct_FOculusXRHmdUserProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRHmdUserProfile), 1361222771U) },
		{ Z_Construct_UScriptStruct_FOculusXRGuardianTestResult, Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewStructOps, TEXT("OculusXRGuardianTestResult"),&Z_Registration_Info_UScriptStruct_FOculusXRGuardianTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRGuardianTestResult), 1524467160U) },
		{ Z_Construct_UScriptStruct_FOculusXRSplashDesc, Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewStructOps, TEXT("OculusXRSplashDesc"),&Z_Registration_Info_UScriptStruct_FOculusXRSplashDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSplashDesc), 2780134296U) },
		{ Z_Construct_UScriptStruct_FOculusXRPerformanceMetrics, Z_Construct_UScriptStruct_FOculusXRPerformanceMetrics_Statics::NewStructOps, TEXT("OculusXRPerformanceMetrics"),&Z_Registration_Info_UScriptStruct_FOculusXRPerformanceMetrics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRPerformanceMetrics), 934842449U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h__Script_OculusXRHMD_dc72fc81e1dd97033cb648a83d8ede06b82a55f1{
	TEXT("/Script/OculusXRHMD"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
