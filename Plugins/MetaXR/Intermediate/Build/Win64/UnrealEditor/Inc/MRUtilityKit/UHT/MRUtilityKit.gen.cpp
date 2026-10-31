// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKit() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKAlignMode(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKComponentType(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycastHitStatus(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycasterStatus(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKPlaneUV(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnActor(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTexCoordModes(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTrackableKey(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTrackerConfiguration(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EMRUKSceneModel ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKSceneModel>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "V1.Name", "EMRUKSceneModel::V1" },
		{ "V2.Name", "EMRUKSceneModel::V2" },
		{ "V2FallbackV1.Name", "EMRUKSceneModel::V2FallbackV1" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKSceneModel::V1", (int64)EMRUKSceneModel::V1 },
		{ "EMRUKSceneModel::V2", (int64)EMRUKSceneModel::V2 },
		{ "EMRUKSceneModel::V2FallbackV1", (int64)EMRUKSceneModel::V2FallbackV1 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKSceneModel",
	"EMRUKSceneModel",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKSceneModel;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKSceneModel.OuterSingleton)
		{
			ZRIE_EMRUKSceneModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKSceneModel"));
		}
		return ZRIE_EMRUKSceneModel.OuterSingleton;
	}
	if (!ZRIE_EMRUKSceneModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKSceneModel.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKSceneModel.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKSceneModel *************************************************************

// ********** Begin Enum EMRUKInitStatus ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKInitStatus>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Busy.Comment", "/// Is busy Initializing.\n" },
		{ "Busy.Name", "EMRUKInitStatus::Busy" },
		{ "Busy.ToolTip", "Is busy Initializing." },
		{ "Complete.Comment", "/// Has finished Initializing.\n" },
		{ "Complete.Name", "EMRUKInitStatus::Complete" },
		{ "Complete.ToolTip", "Has finished Initializing." },
		{ "Failed.Comment", "/// Failed to initialize.\n" },
		{ "Failed.Name", "EMRUKInitStatus::Failed" },
		{ "Failed.ToolTip", "Failed to initialize." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "None.Comment", "/// Not Initialized.\n" },
		{ "None.Name", "EMRUKInitStatus::None" },
		{ "None.ToolTip", "Not Initialized." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKInitStatus::None", (int64)EMRUKInitStatus::None },
		{ "EMRUKInitStatus::Busy", (int64)EMRUKInitStatus::Busy },
		{ "EMRUKInitStatus::Complete", (int64)EMRUKInitStatus::Complete },
		{ "EMRUKInitStatus::Failed", (int64)EMRUKInitStatus::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKInitStatus",
	"EMRUKInitStatus",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKInitStatus;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKInitStatus.OuterSingleton)
		{
			ZRIE_EMRUKInitStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKInitStatus"));
		}
		return ZRIE_EMRUKInitStatus.OuterSingleton;
	}
	if (!ZRIE_EMRUKInitStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKInitStatus.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKInitStatus.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKInitStatus *************************************************************

// ********** Begin Enum EMRUKCoordModeU ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKCoordModeU>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "MaintainAspectRatio.Comment", "/// The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained.\n" },
		{ "MaintainAspectRatio.Name", "EMRUKCoordModeU::MaintainAspectRatio" },
		{ "MaintainAspectRatio.ToolTip", "The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained." },
		{ "MaintainAspectRatioSeamless.Comment", "/// The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained but are adjusted to end on a whole number to avoid seams.\n" },
		{ "MaintainAspectRatioSeamless.Name", "EMRUKCoordModeU::MaintainAspectRatioSeamless" },
		{ "MaintainAspectRatioSeamless.ToolTip", "The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained but are adjusted to end on a whole number to avoid seams." },
		{ "Metric.Comment", "/// The texture coordinates start at 0 and increase by 1 unit every meter.\n" },
		{ "Metric.Name", "EMRUKCoordModeU::Metric" },
		{ "Metric.ToolTip", "The texture coordinates start at 0 and increase by 1 unit every meter." },
		{ "MetricSeamless.Comment", "/// The texture coordinates start at 0 and increase by 1 unit every meter but are adjusted to end on a whole number to avoid seams.\n" },
		{ "MetricSeamless.Name", "EMRUKCoordModeU::MetricSeamless" },
		{ "MetricSeamless.ToolTip", "The texture coordinates start at 0 and increase by 1 unit every meter but are adjusted to end on a whole number to avoid seams." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "Stretch.Comment", "/// The texture coordinates range from 0 to 1.\n" },
		{ "Stretch.Name", "EMRUKCoordModeU::Stretch" },
		{ "Stretch.ToolTip", "The texture coordinates range from 0 to 1." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKCoordModeU::Metric", (int64)EMRUKCoordModeU::Metric },
		{ "EMRUKCoordModeU::MetricSeamless", (int64)EMRUKCoordModeU::MetricSeamless },
		{ "EMRUKCoordModeU::MaintainAspectRatio", (int64)EMRUKCoordModeU::MaintainAspectRatio },
		{ "EMRUKCoordModeU::MaintainAspectRatioSeamless", (int64)EMRUKCoordModeU::MaintainAspectRatioSeamless },
		{ "EMRUKCoordModeU::Stretch", (int64)EMRUKCoordModeU::Stretch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKCoordModeU",
	"EMRUKCoordModeU",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKCoordModeU;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKCoordModeU.OuterSingleton)
		{
			ZRIE_EMRUKCoordModeU.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKCoordModeU"));
		}
		return ZRIE_EMRUKCoordModeU.OuterSingleton;
	}
	if (!ZRIE_EMRUKCoordModeU.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKCoordModeU.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKCoordModeU.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKCoordModeU *************************************************************

// ********** Begin Enum EMRUKCoordModeV ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKCoordModeV>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "MaintainAspectRatio.Comment", "/// The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained.\n" },
		{ "MaintainAspectRatio.Name", "EMRUKCoordModeV::MaintainAspectRatio" },
		{ "MaintainAspectRatio.ToolTip", "The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained." },
		{ "Metric.Comment", "/// The texture coordinates start at 0 and increase by 1 unit every meter.\n" },
		{ "Metric.Name", "EMRUKCoordModeV::Metric" },
		{ "Metric.ToolTip", "The texture coordinates start at 0 and increase by 1 unit every meter." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "Stretch.Comment", "/// The texture coordinates range from 0 to 1.\n" },
		{ "Stretch.Name", "EMRUKCoordModeV::Stretch" },
		{ "Stretch.ToolTip", "The texture coordinates range from 0 to 1." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKCoordModeV::Metric", (int64)EMRUKCoordModeV::Metric },
		{ "EMRUKCoordModeV::MaintainAspectRatio", (int64)EMRUKCoordModeV::MaintainAspectRatio },
		{ "EMRUKCoordModeV::Stretch", (int64)EMRUKCoordModeV::Stretch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKCoordModeV",
	"EMRUKCoordModeV",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKCoordModeV;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKCoordModeV.OuterSingleton)
		{
			ZRIE_EMRUKCoordModeV.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKCoordModeV"));
		}
		return ZRIE_EMRUKCoordModeV.OuterSingleton;
	}
	if (!ZRIE_EMRUKCoordModeV.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKCoordModeV.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKCoordModeV.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKCoordModeV *************************************************************

// ********** Begin Enum EMRUKSpawnerSelectionMode *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKSpawnerSelectionMode>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClosestSize.Comment", "/// Pick the closest size.\n" },
		{ "ClosestSize.Name", "EMRUKSpawnerSelectionMode::ClosestSize" },
		{ "ClosestSize.ToolTip", "Pick the closest size." },
		{ "Custom.Comment", "/// Used in the AMRUKAnchorActorSpawner to allow for a custom selection mode.\n" },
		{ "Custom.Name", "EMRUKSpawnerSelectionMode::Custom" },
		{ "Custom.ToolTip", "Used in the AMRUKAnchorActorSpawner to allow for a custom selection mode." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "Random.Comment", "/// Pick one at random.\n" },
		{ "Random.Name", "EMRUKSpawnerSelectionMode::Random" },
		{ "Random.ToolTip", "Pick one at random." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKSpawnerSelectionMode::Random", (int64)EMRUKSpawnerSelectionMode::Random },
		{ "EMRUKSpawnerSelectionMode::ClosestSize", (int64)EMRUKSpawnerSelectionMode::ClosestSize },
		{ "EMRUKSpawnerSelectionMode::Custom", (int64)EMRUKSpawnerSelectionMode::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKSpawnerSelectionMode",
	"EMRUKSpawnerSelectionMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKSpawnerSelectionMode;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKSpawnerSelectionMode.OuterSingleton)
		{
			ZRIE_EMRUKSpawnerSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKSpawnerSelectionMode"));
		}
		return ZRIE_EMRUKSpawnerSelectionMode.OuterSingleton;
	}
	if (!ZRIE_EMRUKSpawnerSelectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKSpawnerSelectionMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKSpawnerSelectionMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKSpawnerSelectionMode ***************************************************

// ********** Begin Enum EMRUKSpawnerScalingMode ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKSpawnerScalingMode>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Comment", "/// Used in the AMRUKAnchorActorSpawner to allow for a custom scaling.\n" },
		{ "Custom.Name", "EMRUKSpawnerScalingMode::Custom" },
		{ "Custom.ToolTip", "Used in the AMRUKAnchorActorSpawner to allow for a custom scaling." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "NoScaling.Comment", "/// Don't perform any scaling.\n" },
		{ "NoScaling.Name", "EMRUKSpawnerScalingMode::NoScaling" },
		{ "NoScaling.ToolTip", "Don't perform any scaling." },
		{ "Stretch.Comment", "/// Stretch each axis to exactly match the size of the Plane/Volume.\n" },
		{ "Stretch.Name", "EMRUKSpawnerScalingMode::Stretch" },
		{ "Stretch.ToolTip", "Stretch each axis to exactly match the size of the Plane/Volume." },
		{ "UniformScaling.Comment", "/// Scale each axis by the same amount to maintain the correct aspect ratio.\n" },
		{ "UniformScaling.Name", "EMRUKSpawnerScalingMode::UniformScaling" },
		{ "UniformScaling.ToolTip", "Scale each axis by the same amount to maintain the correct aspect ratio." },
		{ "UniformXYScale.Comment", "/// Scale the X and Y axes uniformly but the Z scale can be different.\n" },
		{ "UniformXYScale.Name", "EMRUKSpawnerScalingMode::UniformXYScale" },
		{ "UniformXYScale.ToolTip", "Scale the X and Y axes uniformly but the Z scale can be different." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKSpawnerScalingMode::Stretch", (int64)EMRUKSpawnerScalingMode::Stretch },
		{ "EMRUKSpawnerScalingMode::UniformScaling", (int64)EMRUKSpawnerScalingMode::UniformScaling },
		{ "EMRUKSpawnerScalingMode::UniformXYScale", (int64)EMRUKSpawnerScalingMode::UniformXYScale },
		{ "EMRUKSpawnerScalingMode::NoScaling", (int64)EMRUKSpawnerScalingMode::NoScaling },
		{ "EMRUKSpawnerScalingMode::Custom", (int64)EMRUKSpawnerScalingMode::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKSpawnerScalingMode",
	"EMRUKSpawnerScalingMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKSpawnerScalingMode;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKSpawnerScalingMode.OuterSingleton)
		{
			ZRIE_EMRUKSpawnerScalingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKSpawnerScalingMode"));
		}
		return ZRIE_EMRUKSpawnerScalingMode.OuterSingleton;
	}
	if (!ZRIE_EMRUKSpawnerScalingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKSpawnerScalingMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKSpawnerScalingMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKSpawnerScalingMode *****************************************************

// ********** Begin Enum EMRUKAlignMode ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKAlignMode_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKAlignMode>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKAlignMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BackOnBack.Comment", "/// Align the back of the bounding boxes and center the rest\n" },
		{ "BackOnBack.Name", "EMRUKAlignMode::BackOnBack" },
		{ "BackOnBack.ToolTip", "Align the back of the bounding boxes and center the rest" },
		{ "BackOnFront.Comment", "/// Align the back to the front of the anchor bounding box and center the rest\n" },
		{ "BackOnFront.Name", "EMRUKAlignMode::BackOnFront" },
		{ "BackOnFront.ToolTip", "Align the back to the front of the anchor bounding box and center the rest" },
		{ "BlueprintType", "true" },
		{ "BottomOnBottom.Comment", "/// Align the bottom of the bounding boxes and center the rest\n" },
		{ "BottomOnBottom.Name", "EMRUKAlignMode::BottomOnBottom" },
		{ "BottomOnBottom.ToolTip", "Align the bottom of the bounding boxes and center the rest" },
		{ "BottomOnTop.Comment", "/// Align the top to the bottom of the anchor bounding box and center the rest\n" },
		{ "BottomOnTop.Name", "EMRUKAlignMode::BottomOnTop" },
		{ "BottomOnTop.ToolTip", "Align the top to the bottom of the anchor bounding box and center the rest" },
		{ "CenterOnCenter.Comment", "/// Center the bounding box in the anchor bounding box\n" },
		{ "CenterOnCenter.Name", "EMRUKAlignMode::CenterOnCenter" },
		{ "CenterOnCenter.ToolTip", "Center the bounding box in the anchor bounding box" },
		{ "Custom.Comment", "/// Use custom alignment mode\n" },
		{ "Custom.Name", "EMRUKAlignMode::Custom" },
		{ "Custom.ToolTip", "Use custom alignment mode" },
		{ "Default.Comment", "/// Align the bottom of the bounding boxes and center the rest\n" },
		{ "Default.Name", "EMRUKAlignMode::Default" },
		{ "Default.ToolTip", "Align the bottom of the bounding boxes and center the rest" },
		{ "FrontOnBack.Comment", "/// Align the front to the back of the anchor bounding box and center the rest\n" },
		{ "FrontOnBack.Name", "EMRUKAlignMode::FrontOnBack" },
		{ "FrontOnBack.ToolTip", "Align the front to the back of the anchor bounding box and center the rest" },
		{ "FrontOnFront.Comment", "/// Align the front of the bounding boxes and center the rest\n" },
		{ "FrontOnFront.Name", "EMRUKAlignMode::FrontOnFront" },
		{ "FrontOnFront.ToolTip", "Align the front of the bounding boxes and center the rest" },
		{ "LeftOnLeft.Comment", "/// Align the left of the bounding boxes and center the rest\n" },
		{ "LeftOnLeft.Name", "EMRUKAlignMode::LeftOnLeft" },
		{ "LeftOnLeft.ToolTip", "Align the left of the bounding boxes and center the rest" },
		{ "LeftOnRight.Comment", "/// Align the left to the right of the anchor bounding box and center the rest\n" },
		{ "LeftOnRight.Name", "EMRUKAlignMode::LeftOnRight" },
		{ "LeftOnRight.ToolTip", "Align the left to the right of the anchor bounding box and center the rest" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "None.Comment", "/// Do not perform any alignment\n" },
		{ "None.Name", "EMRUKAlignMode::None" },
		{ "None.ToolTip", "Do not perform any alignment" },
		{ "RightOnLeft.Comment", "/// Align the right to the left of the anchor bounding box and center the rest\n" },
		{ "RightOnLeft.Name", "EMRUKAlignMode::RightOnLeft" },
		{ "RightOnLeft.ToolTip", "Align the right to the left of the anchor bounding box and center the rest" },
		{ "RightOnRight.Comment", "/// Align the right of the bounding boxes and center the rest\n" },
		{ "RightOnRight.Name", "EMRUKAlignMode::RightOnRight" },
		{ "RightOnRight.ToolTip", "Align the right of the bounding boxes and center the rest" },
		{ "TopOnBottom.Comment", "/// Align the bottom to the top of the anchor bounding box and center the rest\n" },
		{ "TopOnBottom.Name", "EMRUKAlignMode::TopOnBottom" },
		{ "TopOnBottom.ToolTip", "Align the bottom to the top of the anchor bounding box and center the rest" },
		{ "TopOnTop.Comment", "/// Align the top of the bounding boxes and center the rest\n" },
		{ "TopOnTop.Name", "EMRUKAlignMode::TopOnTop" },
		{ "TopOnTop.ToolTip", "Align the top of the bounding boxes and center the rest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKAlignMode::None", (int64)EMRUKAlignMode::None },
		{ "EMRUKAlignMode::Default", (int64)EMRUKAlignMode::Default },
		{ "EMRUKAlignMode::CenterOnCenter", (int64)EMRUKAlignMode::CenterOnCenter },
		{ "EMRUKAlignMode::BottomOnBottom", (int64)EMRUKAlignMode::BottomOnBottom },
		{ "EMRUKAlignMode::TopOnTop", (int64)EMRUKAlignMode::TopOnTop },
		{ "EMRUKAlignMode::LeftOnLeft", (int64)EMRUKAlignMode::LeftOnLeft },
		{ "EMRUKAlignMode::RightOnRight", (int64)EMRUKAlignMode::RightOnRight },
		{ "EMRUKAlignMode::FrontOnFront", (int64)EMRUKAlignMode::FrontOnFront },
		{ "EMRUKAlignMode::BackOnBack", (int64)EMRUKAlignMode::BackOnBack },
		{ "EMRUKAlignMode::BottomOnTop", (int64)EMRUKAlignMode::BottomOnTop },
		{ "EMRUKAlignMode::TopOnBottom", (int64)EMRUKAlignMode::TopOnBottom },
		{ "EMRUKAlignMode::LeftOnRight", (int64)EMRUKAlignMode::LeftOnRight },
		{ "EMRUKAlignMode::RightOnLeft", (int64)EMRUKAlignMode::RightOnLeft },
		{ "EMRUKAlignMode::FrontOnBack", (int64)EMRUKAlignMode::FrontOnBack },
		{ "EMRUKAlignMode::BackOnFront", (int64)EMRUKAlignMode::BackOnFront },
		{ "EMRUKAlignMode::Custom", (int64)EMRUKAlignMode::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKAlignMode",
	"EMRUKAlignMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKAlignMode;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKAlignMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKAlignMode.OuterSingleton)
		{
			ZRIE_EMRUKAlignMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKAlignMode, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKAlignMode"));
		}
		return ZRIE_EMRUKAlignMode.OuterSingleton;
	}
	if (!ZRIE_EMRUKAlignMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKAlignMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKAlignMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKAlignMode **************************************************************

// ********** Begin Enum EMRUKComponentType ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKComponentType_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKComponentType>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKComponentType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "All.Comment", "/// All component types.\n" },
		{ "All.Hidden", "" },
		{ "All.Name", "EMRUKComponentType::All" },
		{ "All.ToolTip", "All component types." },
		{ "Bitflags", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This enum is used to specify the component type, scene anchors can either have plane or volume components associated with them or both.\n */" },
#endif
		{ "Mesh.Comment", "/// Mesh component type.\n" },
		{ "Mesh.Name", "EMRUKComponentType::Mesh" },
		{ "Mesh.ToolTip", "Mesh component type." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "None.Comment", "/// No component type.\n" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMRUKComponentType::None" },
		{ "None.ToolTip", "No component type." },
		{ "Plane.Comment", "/// Plane component type.\n" },
		{ "Plane.Name", "EMRUKComponentType::Plane" },
		{ "Plane.ToolTip", "Plane component type." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This enum is used to specify the component type, scene anchors can either have plane or volume components associated with them or both." },
#endif
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Volume.Comment", "/// Volume component type.\n" },
		{ "Volume.Name", "EMRUKComponentType::Volume" },
		{ "Volume.ToolTip", "Volume component type." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKComponentType::None", (int64)EMRUKComponentType::None },
		{ "EMRUKComponentType::Plane", (int64)EMRUKComponentType::Plane },
		{ "EMRUKComponentType::Volume", (int64)EMRUKComponentType::Volume },
		{ "EMRUKComponentType::Mesh", (int64)EMRUKComponentType::Mesh },
		{ "EMRUKComponentType::All", (int64)EMRUKComponentType::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKComponentType",
	"EMRUKComponentType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKComponentType;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKComponentType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKComponentType.OuterSingleton)
		{
			ZRIE_EMRUKComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKComponentType, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKComponentType"));
		}
		return ZRIE_EMRUKComponentType.OuterSingleton;
	}
	if (!ZRIE_EMRUKComponentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKComponentType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKComponentType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKComponentType **********************************************************

// ********** Begin ScriptStruct FMRUKHit **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKHit_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKHit>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKHit); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Describes a Raycast hit in the MRUK (Mixed Reality Utility Kit). This structure is created by the AMRUKAnchor::Raycast and AMRUKAnchor::RaycastAll methods. You can read the position where the raycast hit, the normal of the surface that was hit, and the distance from the origin to the raycast hit position.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes a Raycast hit in the MRUK (Mixed Reality Utility Kit). This structure is created by the AMRUKAnchor::Raycast and AMRUKAnchor::RaycastAll methods. You can read the position where the raycast hit, the normal of the surface that was hit, and the distance from the origin to the raycast hit position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitPosition_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The position where the raycast hit.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The position where the raycast hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The normal of the surface that was hit.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The normal of the surface that was hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The distance between the origin of the ray to the hit position.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The distance between the origin of the ray to the hit position." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKHit constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKHit constinit property declarations ****************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKHit Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HitPosition = { "HitPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKHit, HitPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitPosition_MetaData), NewProp_HitPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKHit, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HitDistance = { "HitDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKHit, HitDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDistance_MetaData), NewProp_HitDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitDistance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKHit Property Definitions ***************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKHit",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKHit>(),
	alignof(FMRUKHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKHit;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKHit.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKHit, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKHit"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKHit.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKHit.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKHit.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKHit ************************************************************

// ********** Begin ScriptStruct FMRUKLabelFilter **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKLabelFilter>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKLabelFilter); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Label filter to use in MRUK (Mixed Reality Utility Kit). You can use this to filter anchors by their labels.\n * Use the IncludedLabels and ExcludedLabels list to specify which labels to include and exclude.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Label filter to use in MRUK (Mixed Reality Utility Kit). You can use this to filter anchors by their labels.\nUse the IncludedLabels and ExcludedLabels list to specify which labels to include and exclude." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludedLabels_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If included labels is not empty then the anchor must have at\n\x09 * least one of the labels in this list.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If included labels is not empty then the anchor must have at\nleast one of the labels in this list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedLabels_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Anchors with any of the labels in this exclusion list\n\x09 * will be ignored.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anchors with any of the labels in this exclusion list\nwill be ignored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MRUtilityKit.EMRUKComponentType" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enum flags representing component types to include, by default include all component types.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum flags representing component types to include, by default include all component types." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKLabelFilter constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_IncludedLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludedLabels;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedLabels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKLabelFilter constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKLabelFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKLabelFilter Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_IncludedLabels_Inner = { "IncludedLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_IncludedLabels = { "IncludedLabels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKLabelFilter, IncludedLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludedLabels_MetaData), NewProp_IncludedLabels_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ExcludedLabels_Inner = { "ExcludedLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExcludedLabels = { "ExcludedLabels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKLabelFilter, ExcludedLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedLabels_MetaData), NewProp_ExcludedLabels_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ComponentTypes = { "ComponentTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKLabelFilter, ComponentTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTypes_MetaData), NewProp_ComponentTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IncludedLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IncludedLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExcludedLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExcludedLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentTypes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKLabelFilter Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKLabelFilter",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKLabelFilter>(),
	alignof(FMRUKLabelFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKLabelFilter;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKLabelFilter.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKLabelFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKLabelFilter, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKLabelFilter"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKLabelFilter.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKLabelFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKLabelFilter.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKLabelFilter.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKLabelFilter ****************************************************

// ********** Begin ScriptStruct FMRUKPlaneUV ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKPlaneUV>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKPlaneUV); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a configuration for adjusting the UV texture coordinates of a plane.\n *\n * It contains properties to specify an offset and scale to be applied to the UV texture coordinates.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a configuration for adjusting the UV texture coordinates of a plane.\n\nIt contains properties to specify an offset and scale to be applied to the UV texture coordinates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Offset applied to the UV texture coordinates.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset applied to the UV texture coordinates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Scale applied to the UV texture coordinates.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale applied to the UV texture coordinates." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKPlaneUV constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKPlaneUV constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKPlaneUV>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKPlaneUV Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKPlaneUV, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKPlaneUV, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKPlaneUV Property Definitions ***********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKPlaneUV",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKPlaneUV>(),
	alignof(FMRUKPlaneUV),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKPlaneUV;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKPlaneUV(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKPlaneUV.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKPlaneUV.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKPlaneUV, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKPlaneUV"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKPlaneUV.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKPlaneUV.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKPlaneUV.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKPlaneUV.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKPlaneUV ********************************************************

// ********** Begin ScriptStruct FMRUKTexCoordModes ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKTexCoordModes>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKTexCoordModes); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Texture coordinate modes for MRUK (Mixed Reality Utility Kit). You can use this to specify the texture coordinate mode for the U and V directions.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture coordinate modes for MRUK (Mixed Reality Utility Kit). You can use this to specify the texture coordinate mode for the U and V directions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Texture Coordinate mode for the U direction.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture Coordinate mode for the U direction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Texture Coordinate mode for the V direction.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture Coordinate mode for the V direction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKTexCoordModes constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_U_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_U;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_V;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKTexCoordModes constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKTexCoordModes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKTexCoordModes Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_U_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKTexCoordModes, U), Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) }; // dfce80ffa3343582ec7394a1c944779d011cb768
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_V_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKTexCoordModes, V), Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) }; // df7b5e5709b375083b787a8977878745617d6d42
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_U_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_V_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_V,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKTexCoordModes Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKTexCoordModes",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKTexCoordModes>(),
	alignof(FMRUKTexCoordModes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKTexCoordModes;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKTexCoordModes(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKTexCoordModes.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKTexCoordModes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKTexCoordModes, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKTexCoordModes"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKTexCoordModes.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKTexCoordModes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKTexCoordModes.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKTexCoordModes.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKTexCoordModes **************************************************

// ********** Begin ScriptStruct FMRUKSpawnActor ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKSpawnActor>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKSpawnActor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This struct represents a configuration for spawning an actor in the scene.\n *\n * It contains properties to specify the class of the actor to spawn, whether to match the aspect ratio of the volume,\n * whether to calculate the facing direction of the actor, and what scaling and alignment modes to apply to the actor.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This struct represents a configuration for spawning an actor in the scene.\n\nIt contains properties to specify the class of the actor to spawn, whether to match the aspect ratio of the volume,\nwhether to calculate the facing direction of the actor, and what scaling and alignment modes to apply to the actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The class of actor to spawn.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of actor to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchAspectRatio_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When match aspect ratio is enabled then the actor will be rotated\n\x09 * to try and match the aspect ratio of the volume as closely as possible.\n\x09 * This is most useful for long and thin volumes, keep this disabled for\n\x09 * objects with an aspect ratio close to 1:1. Only applies to volumes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When match aspect ratio is enabled then the actor will be rotated\nto try and match the aspect ratio of the volume as closely as possible.\nThis is most useful for long and thin volumes, keep this disabled for\nobjects with an aspect ratio close to 1:1. Only applies to volumes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculateFacingDirection_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When calculate facing direction is enabled the actor will be rotated to\n\x09 * face away from the closest wall. If match aspect ratio is also enabled\n\x09 * then that will take precedence and it will be constrained to a choice\n\x09 * between 2 directions only. Only applies to volumes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When calculate facing direction is enabled the actor will be rotated to\nface away from the closest wall. If match aspect ratio is also enabled\nthen that will take precedence and it will be constrained to a choice\nbetween 2 directions only. Only applies to volumes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalingMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set what scaling mode to apply to the actor. By default the actor will\n\x09 * be stretched to fit the size of the plane/volume. But in some cases\n\x09 * this may not be desirable and can be customized here.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set what scaling mode to apply to the actor. By default the actor will\nbe stretched to fit the size of the plane/volume. But in some cases\nthis may not be desirable and can be customized here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set what alignment mode to apply to the actor. By default the actor will\n\x09 * be aligned that its bounding box matches the one from the anchor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set what alignment mode to apply to the actor. By default the actor will\nbe aligned that its bounding box matches the one from the anchor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKSpawnActor constinit property declarations *******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actor;
	static void NewProp_MatchAspectRatio_SetBit(void* Obj)
	{
		((FMRUKSpawnActor*)Obj)->MatchAspectRatio = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchAspectRatio;
	static void NewProp_CalculateFacingDirection_SetBit(void* Obj)
	{
		((FMRUKSpawnActor*)Obj)->CalculateFacingDirection = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CalculateFacingDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScalingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScalingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlignMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlignMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKSpawnActor constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKSpawnActor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKSpawnActor Property Definitions ******************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnActor, Actor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_MatchAspectRatio = { "MatchAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMRUKSpawnActor), &UHT_STATICS::NewProp_MatchAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchAspectRatio_MetaData), NewProp_MatchAspectRatio_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_CalculateFacingDirection = { "CalculateFacingDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMRUKSpawnActor), &UHT_STATICS::NewProp_CalculateFacingDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculateFacingDirection_MetaData), NewProp_CalculateFacingDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ScalingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ScalingMode = { "ScalingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnActor, ScalingMode), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalingMode_MetaData), NewProp_ScalingMode_MetaData) }; // 76e817757f9dc8dbab0e1be94cfe8708731cb262
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AlignMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AlignMode = { "AlignMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnActor, AlignMode), Z_Construct_UEnum_MRUtilityKit_EMRUKAlignMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignMode_MetaData), NewProp_AlignMode_MetaData) }; // dccc13e36b313e2ff996d4e21282576497dfcffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MatchAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CalculateFacingDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScalingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScalingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlignMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlignMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKSpawnActor Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKSpawnActor",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKSpawnActor>(),
	alignof(FMRUKSpawnActor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKSpawnActor;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKSpawnActor.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKSpawnActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKSpawnActor, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKSpawnActor"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKSpawnActor.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKSpawnActor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKSpawnActor.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKSpawnActor.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKSpawnActor *****************************************************

// ********** Begin Enum EMRUKFallbackToProceduralOverwrite ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKFallbackToProceduralOverwrite>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This enum is used to specify the fallback behaviour when spawning a scene actor.\n * Specify whether to fallback to a procedural mesh or not.\n */" },
#endif
		{ "Default.Comment", "/// Don't override the fallback to procedural standard behaviour.\n" },
		{ "Default.Name", "EMRUKFallbackToProceduralOverwrite::Default" },
		{ "Default.ToolTip", "Don't override the fallback to procedural standard behaviour." },
		{ "Fallback.Comment", "/// Fallback to a procedural mesh.\n" },
		{ "Fallback.Name", "EMRUKFallbackToProceduralOverwrite::Fallback" },
		{ "Fallback.ToolTip", "Fallback to a procedural mesh." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "NoFallback.Comment", "/// Don't fallback to a procedural mesh.\n" },
		{ "NoFallback.Name", "EMRUKFallbackToProceduralOverwrite::NoFallback" },
		{ "NoFallback.ToolTip", "Don't fallback to a procedural mesh." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This enum is used to specify the fallback behaviour when spawning a scene actor.\nSpecify whether to fallback to a procedural mesh or not." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKFallbackToProceduralOverwrite::Default", (int64)EMRUKFallbackToProceduralOverwrite::Default },
		{ "EMRUKFallbackToProceduralOverwrite::Fallback", (int64)EMRUKFallbackToProceduralOverwrite::Fallback },
		{ "EMRUKFallbackToProceduralOverwrite::NoFallback", (int64)EMRUKFallbackToProceduralOverwrite::NoFallback },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKFallbackToProceduralOverwrite",
	"EMRUKFallbackToProceduralOverwrite",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKFallbackToProceduralOverwrite;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKFallbackToProceduralOverwrite.OuterSingleton)
		{
			ZRIE_EMRUKFallbackToProceduralOverwrite.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKFallbackToProceduralOverwrite"));
		}
		return ZRIE_EMRUKFallbackToProceduralOverwrite.OuterSingleton;
	}
	if (!ZRIE_EMRUKFallbackToProceduralOverwrite.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKFallbackToProceduralOverwrite.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKFallbackToProceduralOverwrite.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKFallbackToProceduralOverwrite ******************************************

// ********** Begin ScriptStruct FMRUKSpawnGroup ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKSpawnGroup>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKSpawnGroup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Holds a configuration for spawning a group of actors.\n *\n * It contains properties to specify a list of actors to choose from, the selection mode when multiple actors are specified,\n * and whether to fall back to spawning a procedural mesh if no actor class has been specified for this label.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds a configuration for spawning a group of actors.\n\nIt contains properties to specify a list of actors to choose from, the selection mode when multiple actors are specified,\nand whether to fall back to spawning a procedural mesh if no actor class has been specified for this label." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of actors to choose from, multiple actors can be specified and\n\x09 * the selection criteria will be determined by the SelectionMode option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actors to choose from, multiple actors can be specified and\nthe selection criteria will be determined by the SelectionMode option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the selection mode when multiple different actors are specified.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the selection mode when multiple different actors are specified." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackToProcedural_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Control if there should happen a fallback to spawning a procedural mesh\n\x09 * in case no actor class has been specified for this label. The global\n\x09 * fallback behaviour can be specified in the AMRUKAnchorActorSpawner.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control if there should happen a fallback to spawning a procedural mesh\nin case no actor class has been specified for this label. The global\nfallback behaviour can be specified in the AMRUKAnchorActorSpawner." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKSpawnGroup constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FallbackToProcedural_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FallbackToProcedural;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKSpawnGroup constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKSpawnGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKSpawnGroup Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKSpawnActor, METADATA_PARAMS(0, nullptr) }; // c8d7b4ba55042e4d5d6f69504e74f01b2a779cda
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnGroup, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) }; // c8d7b4ba55042e4d5d6f69504e74f01b2a779cda
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SelectionMode = { "SelectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnGroup, SelectionMode), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMode_MetaData), NewProp_SelectionMode_MetaData) }; // af61c05e63f4c07457a33295502b0bb6cafae8f9
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FallbackToProcedural_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FallbackToProcedural = { "FallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnGroup, FallbackToProcedural), Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackToProcedural_MetaData), NewProp_FallbackToProcedural_MetaData) }; // 791e847f19698ec9058b256340593a12a4198f30
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FallbackToProcedural_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FallbackToProcedural,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKSpawnGroup Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKSpawnGroup",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKSpawnGroup>(),
	alignof(FMRUKSpawnGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKSpawnGroup;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKSpawnGroup.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKSpawnGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKSpawnGroup, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKSpawnGroup"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKSpawnGroup.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKSpawnGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKSpawnGroup.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKSpawnGroup.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKSpawnGroup *****************************************************

// ********** Begin Enum EMRUKSpawnMode ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKSpawnMode>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AllRooms.Comment", "/// Spawn in every room and keep on spawning whenever a new room was discovered.\n" },
		{ "AllRooms.Name", "EMRUKSpawnMode::AllRooms" },
		{ "AllRooms.ToolTip", "Spawn in every room and keep on spawning whenever a new room was discovered." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This spawnmode controls how the MR Utility Kit handles spawning actors in the scene, either for all rooms, only for the current room or not at all.\n */" },
#endif
		{ "CurrentRoomOnly.Comment", "/// Will only take the current room into account. This enables legacy single room behaviour. Keep in mind that if your\n/// experience loads multiple rooms and you use that mode the behaviour might be undefined.\n" },
		{ "CurrentRoomOnly.Name", "EMRUKSpawnMode::CurrentRoomOnly" },
		{ "CurrentRoomOnly.ToolTip", "Will only take the current room into account. This enables legacy single room behaviour. Keep in mind that if your\nexperience loads multiple rooms and you use that mode the behaviour might be undefined." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "None.Comment", "/// Do not spawn anything on loading a scene or rooms.\n" },
		{ "None.Name", "EMRUKSpawnMode::None" },
		{ "None.ToolTip", "Do not spawn anything on loading a scene or rooms." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This spawnmode controls how the MR Utility Kit handles spawning actors in the scene, either for all rooms, only for the current room or not at all." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKSpawnMode::None", (int64)EMRUKSpawnMode::None },
		{ "EMRUKSpawnMode::CurrentRoomOnly", (int64)EMRUKSpawnMode::CurrentRoomOnly },
		{ "EMRUKSpawnMode::AllRooms", (int64)EMRUKSpawnMode::AllRooms },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKSpawnMode",
	"EMRUKSpawnMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKSpawnMode;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKSpawnMode.OuterSingleton)
		{
			ZRIE_EMRUKSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKSpawnMode"));
		}
		return ZRIE_EMRUKSpawnMode.OuterSingleton;
	}
	if (!ZRIE_EMRUKSpawnMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKSpawnMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKSpawnMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKSpawnMode **************************************************************

// ********** Begin Enum EMRUKEnvironmentRaycastHitStatus ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycastHitStatus_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKEnvironmentRaycastHitStatus>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycastHitStatus(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This enum is used to specify the environment raycast hit status.\n * It indicates whether a raycast hit an object, missed, or encountered\n * other conditions such as occlusion or being outside the field of view.\n */" },
#endif
		{ "Failure.Comment", "/// Indicates a failure in the raycasting process.\n/// This status indicates a failure in the raycasting process, which can occur if the raycaster fails to initialize or encounters an unexpected error.\n" },
		{ "Failure.Name", "EMRUKEnvironmentRaycastHitStatus::Failure" },
		{ "Failure.ToolTip", "Indicates a failure in the raycasting process.\nThis status indicates a failure in the raycasting process, which can occur if the raycaster fails to initialize or encounters an unexpected error." },
		{ "Hit.Comment", "/// Indicates that the raycast hit the depth.\n" },
		{ "Hit.Name", "EMRUKEnvironmentRaycastHitStatus::Hit" },
		{ "Hit.ToolTip", "Indicates that the raycast hit the depth." },
		{ "HitPointOccluded.Comment", "/// Indicates that the hit point is occluded.\n" },
		{ "HitPointOccluded.Name", "EMRUKEnvironmentRaycastHitStatus::HitPointOccluded" },
		{ "HitPointOccluded.ToolTip", "Indicates that the hit point is occluded." },
		{ "HitPointOutsideFov.Comment", "/// Indicates that the hit point is outside the field of view.\n" },
		{ "HitPointOutsideFov.Name", "EMRUKEnvironmentRaycastHitStatus::HitPointOutsideFov" },
		{ "HitPointOutsideFov.ToolTip", "Indicates that the hit point is outside the field of view." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "NoHit.Comment", "/// Indicates that the raycast did not hit the depth.\n" },
		{ "NoHit.Name", "EMRUKEnvironmentRaycastHitStatus::NoHit" },
		{ "NoHit.ToolTip", "Indicates that the raycast did not hit the depth." },
		{ "RayOccluded.Comment", "/// Indicates that the ray itself is occluded by depth.\n" },
		{ "RayOccluded.Name", "EMRUKEnvironmentRaycastHitStatus::RayOccluded" },
		{ "RayOccluded.ToolTip", "Indicates that the ray itself is occluded by depth." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This enum is used to specify the environment raycast hit status.\nIt indicates whether a raycast hit an object, missed, or encountered\nother conditions such as occlusion or being outside the field of view." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKEnvironmentRaycastHitStatus::Hit", (int64)EMRUKEnvironmentRaycastHitStatus::Hit },
		{ "EMRUKEnvironmentRaycastHitStatus::NoHit", (int64)EMRUKEnvironmentRaycastHitStatus::NoHit },
		{ "EMRUKEnvironmentRaycastHitStatus::HitPointOccluded", (int64)EMRUKEnvironmentRaycastHitStatus::HitPointOccluded },
		{ "EMRUKEnvironmentRaycastHitStatus::HitPointOutsideFov", (int64)EMRUKEnvironmentRaycastHitStatus::HitPointOutsideFov },
		{ "EMRUKEnvironmentRaycastHitStatus::RayOccluded", (int64)EMRUKEnvironmentRaycastHitStatus::RayOccluded },
		{ "EMRUKEnvironmentRaycastHitStatus::Failure", (int64)EMRUKEnvironmentRaycastHitStatus::Failure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKEnvironmentRaycastHitStatus",
	"EMRUKEnvironmentRaycastHitStatus",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKEnvironmentRaycastHitStatus;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycastHitStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKEnvironmentRaycastHitStatus.OuterSingleton)
		{
			ZRIE_EMRUKEnvironmentRaycastHitStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycastHitStatus, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKEnvironmentRaycastHitStatus"));
		}
		return ZRIE_EMRUKEnvironmentRaycastHitStatus.OuterSingleton;
	}
	if (!ZRIE_EMRUKEnvironmentRaycastHitStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKEnvironmentRaycastHitStatus.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKEnvironmentRaycastHitStatus.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKEnvironmentRaycastHitStatus ********************************************

// ********** Begin Enum EMRUKEnvironmentRaycasterStatus *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycasterStatus_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKEnvironmentRaycasterStatus>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycasterStatus(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This enum is used to specify the status of the environment raycaster.\n * It indicates whether the raycaster is stopped, in the process of being created, or ready for use.\n */" },
#endif
		{ "Creating.Comment", "/// Indicates that the raycaster is in the process of being created.\n" },
		{ "Creating.Name", "EMRUKEnvironmentRaycasterStatus::Creating" },
		{ "Creating.ToolTip", "Indicates that the raycaster is in the process of being created." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "Ready.Comment", "/// Indicates that the raycaster is ready for use.\n" },
		{ "Ready.Name", "EMRUKEnvironmentRaycasterStatus::Ready" },
		{ "Ready.ToolTip", "Indicates that the raycaster is ready for use." },
		{ "Stopped.Comment", "/// Indicates that the raycaster is stopped.\n" },
		{ "Stopped.Name", "EMRUKEnvironmentRaycasterStatus::Stopped" },
		{ "Stopped.ToolTip", "Indicates that the raycaster is stopped." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This enum is used to specify the status of the environment raycaster.\nIt indicates whether the raycaster is stopped, in the process of being created, or ready for use." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKEnvironmentRaycasterStatus::Stopped", (int64)EMRUKEnvironmentRaycasterStatus::Stopped },
		{ "EMRUKEnvironmentRaycasterStatus::Creating", (int64)EMRUKEnvironmentRaycasterStatus::Creating },
		{ "EMRUKEnvironmentRaycasterStatus::Ready", (int64)EMRUKEnvironmentRaycasterStatus::Ready },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKEnvironmentRaycasterStatus",
	"EMRUKEnvironmentRaycasterStatus",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKEnvironmentRaycasterStatus;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycasterStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKEnvironmentRaycasterStatus.OuterSingleton)
		{
			ZRIE_EMRUKEnvironmentRaycasterStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycasterStatus, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKEnvironmentRaycasterStatus"));
		}
		return ZRIE_EMRUKEnvironmentRaycasterStatus.OuterSingleton;
	}
	if (!ZRIE_EMRUKEnvironmentRaycasterStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKEnvironmentRaycasterStatus.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKEnvironmentRaycasterStatus.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKEnvironmentRaycasterStatus *********************************************

// ********** Begin Enum EMRUKTrackableType ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKTrackableType>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Specifies the type of trackable object.\n */" },
#endif
		{ "Keyboard.Comment", "/// Keyboard trackable.\n" },
		{ "Keyboard.Name", "EMRUKTrackableType::Keyboard" },
		{ "Keyboard.ToolTip", "Keyboard trackable." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "None.Comment", "/// No trackable type.\n" },
		{ "None.Name", "EMRUKTrackableType::None" },
		{ "None.ToolTip", "No trackable type." },
		{ "QRCode.Comment", "/// QR code trackable.\n" },
		{ "QRCode.Name", "EMRUKTrackableType::QRCode" },
		{ "QRCode.ToolTip", "QR code trackable." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the type of trackable object." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKTrackableType::None", (int64)EMRUKTrackableType::None },
		{ "EMRUKTrackableType::Keyboard", (int64)EMRUKTrackableType::Keyboard },
		{ "EMRUKTrackableType::QRCode", (int64)EMRUKTrackableType::QRCode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKTrackableType",
	"EMRUKTrackableType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKTrackableType;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKTrackableType.OuterSingleton)
		{
			ZRIE_EMRUKTrackableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKTrackableType"));
		}
		return ZRIE_EMRUKTrackableType.OuterSingleton;
	}
	if (!ZRIE_EMRUKTrackableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKTrackableType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKTrackableType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKTrackableType **********************************************************

// ********** Begin Enum EMRUKMarkerPayloadType ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKMarkerPayloadType>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BinaryPayload.Comment", "/// Binary payload.\n" },
		{ "BinaryPayload.Name", "EMRUKMarkerPayloadType::BinaryPayload" },
		{ "BinaryPayload.ToolTip", "Binary payload." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Specifies the type of marker payload for trackables like QR codes.\n */" },
#endif
		{ "InvalidPayload.Comment", "/// Invalid payload (cannot be decoded).\n" },
		{ "InvalidPayload.Name", "EMRUKMarkerPayloadType::InvalidPayload" },
		{ "InvalidPayload.ToolTip", "Invalid payload (cannot be decoded)." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "NonePayload.Comment", "/// No payload.\n" },
		{ "NonePayload.Name", "EMRUKMarkerPayloadType::NonePayload" },
		{ "NonePayload.ToolTip", "No payload." },
		{ "StringPayload.Comment", "/// String payload.\n" },
		{ "StringPayload.Name", "EMRUKMarkerPayloadType::StringPayload" },
		{ "StringPayload.ToolTip", "String payload." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the type of marker payload for trackables like QR codes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKMarkerPayloadType::NonePayload", (int64)EMRUKMarkerPayloadType::NonePayload },
		{ "EMRUKMarkerPayloadType::InvalidPayload", (int64)EMRUKMarkerPayloadType::InvalidPayload },
		{ "EMRUKMarkerPayloadType::StringPayload", (int64)EMRUKMarkerPayloadType::StringPayload },
		{ "EMRUKMarkerPayloadType::BinaryPayload", (int64)EMRUKMarkerPayloadType::BinaryPayload },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKMarkerPayloadType",
	"EMRUKMarkerPayloadType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKMarkerPayloadType;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKMarkerPayloadType.OuterSingleton)
		{
			ZRIE_EMRUKMarkerPayloadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKMarkerPayloadType"));
		}
		return ZRIE_EMRUKMarkerPayloadType.OuterSingleton;
	}
	if (!ZRIE_EMRUKMarkerPayloadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKMarkerPayloadType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKMarkerPayloadType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKMarkerPayloadType ******************************************************

// ********** Begin ScriptStruct FMRUKTrackerConfiguration *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKTrackerConfiguration_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKTrackerConfiguration>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKTrackerConfiguration); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Configuration for trackable tracking. Use this to enable or disable different types of trackables.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration for trackable tracking. Use this to enable or disable different types of trackables." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableKeyboardTracking_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether keyboard tracking should be enabled.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether keyboard tracking should be enabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableQRCodeTracking_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether QR code tracking should be enabled.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether QR code tracking should be enabled." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKTrackerConfiguration constinit property declarations *********
	static void NewProp_bEnableKeyboardTracking_SetBit(void* Obj)
	{
		((FMRUKTrackerConfiguration*)Obj)->bEnableKeyboardTracking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableKeyboardTracking;
	static void NewProp_bEnableQRCodeTracking_SetBit(void* Obj)
	{
		((FMRUKTrackerConfiguration*)Obj)->bEnableQRCodeTracking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableQRCodeTracking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKTrackerConfiguration constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKTrackerConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKTrackerConfiguration Property Definitions ********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableKeyboardTracking = { "bEnableKeyboardTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMRUKTrackerConfiguration), &UHT_STATICS::NewProp_bEnableKeyboardTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableKeyboardTracking_MetaData), NewProp_bEnableKeyboardTracking_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableQRCodeTracking = { "bEnableQRCodeTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMRUKTrackerConfiguration), &UHT_STATICS::NewProp_bEnableQRCodeTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableQRCodeTracking_MetaData), NewProp_bEnableQRCodeTracking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableKeyboardTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableQRCodeTracking,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKTrackerConfiguration Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKTrackerConfiguration",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKTrackerConfiguration>(),
	alignof(FMRUKTrackerConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKTrackerConfiguration;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKTrackerConfiguration(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKTrackerConfiguration.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKTrackerConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKTrackerConfiguration, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKTrackerConfiguration"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKTrackerConfiguration.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKTrackerConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKTrackerConfiguration.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKTrackerConfiguration.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKTrackerConfiguration *******************************************

// ********** Begin ScriptStruct FMRUKEnvironmentRaycastHit ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKEnvironmentRaycastHit>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKEnvironmentRaycastHit); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a hit result from an environment raycast.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a hit result from an environment raycast." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The status of the raycast hit, indicating whether it hit an object, missed, or encountered other conditions.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The status of the raycast hit, indicating whether it hit an object, missed, or encountered other conditions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The point in the world where the raycast hit.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The point in the world where the raycast hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_orientation_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The orientation of the hit point.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The orientation of the hit point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_normal_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The normal vector of the hit point.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The normal vector of the hit point." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKEnvironmentRaycastHit constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_status;
	static const UECodeGen_Private::FStructPropertyParams NewProp_point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_normal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKEnvironmentRaycastHit constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKEnvironmentRaycastHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKEnvironmentRaycastHit Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKEnvironmentRaycastHit, status), Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycastHitStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_status_MetaData), NewProp_status_MetaData) }; // b2edf319ae11f2feca8d0e4171b7feb941885fd2
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKEnvironmentRaycastHit, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_point_MetaData), NewProp_point_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_orientation = { "orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKEnvironmentRaycastHit, orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_orientation_MetaData), NewProp_orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_normal = { "normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKEnvironmentRaycastHit, normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_normal_MetaData), NewProp_normal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_status,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_point,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_normal,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKEnvironmentRaycastHit Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKEnvironmentRaycastHit",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKEnvironmentRaycastHit>(),
	alignof(FMRUKEnvironmentRaycastHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKEnvironmentRaycastHit;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKEnvironmentRaycastHit.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKEnvironmentRaycastHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKEnvironmentRaycastHit"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKEnvironmentRaycastHit.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKEnvironmentRaycastHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKEnvironmentRaycastHit.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKEnvironmentRaycastHit.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKEnvironmentRaycastHit ******************************************

// ********** Begin ScriptStruct FMRUKTrackableKey *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKTrackableKey_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKTrackableKey>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKTrackableKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKTrackableKey constinit property declarations *****************
// ********** End ScriptStruct FMRUKTrackableKey constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKTrackableKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKTrackableKey",
	nullptr,
	0,
	DataSizeOf<FMRUKTrackableKey>(),
	alignof(FMRUKTrackableKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKTrackableKey;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKTrackableKey(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKTrackableKey.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKTrackableKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKTrackableKey, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKTrackableKey"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKTrackableKey.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKTrackableKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKTrackableKey.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKTrackableKey.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKTrackableKey ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel, TEXT("EMRUKSceneModel"), &ZRIE_EMRUKSceneModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3366863586U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus, TEXT("EMRUKInitStatus"), &ZRIE_EMRUKInitStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3633464519U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU, TEXT("EMRUKCoordModeU"), &ZRIE_EMRUKCoordModeU, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3754852607U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV, TEXT("EMRUKCoordModeV"), &ZRIE_EMRUKCoordModeV, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3749404247U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode, TEXT("EMRUKSpawnerSelectionMode"), &ZRIE_EMRUKSpawnerSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2942419038U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode, TEXT("EMRUKSpawnerScalingMode"), &ZRIE_EMRUKSpawnerScalingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1994921845U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKAlignMode, TEXT("EMRUKAlignMode"), &ZRIE_EMRUKAlignMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3704361955U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKComponentType, TEXT("EMRUKComponentType"), &ZRIE_EMRUKComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 191008975U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite, TEXT("EMRUKFallbackToProceduralOverwrite"), &ZRIE_EMRUKFallbackToProceduralOverwrite, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2032043135U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode, TEXT("EMRUKSpawnMode"), &ZRIE_EMRUKSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2820290979U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycastHitStatus, TEXT("EMRUKEnvironmentRaycastHitStatus"), &ZRIE_EMRUKEnvironmentRaycastHitStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3001938713U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKEnvironmentRaycasterStatus, TEXT("EMRUKEnvironmentRaycasterStatus"), &ZRIE_EMRUKEnvironmentRaycasterStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2349113500U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType, TEXT("EMRUKTrackableType"), &ZRIE_EMRUKTrackableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3460736882U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType, TEXT("EMRUKMarkerPayloadType"), &ZRIE_EMRUKMarkerPayloadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3207534979U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMRUKHit, Z_Construct_UScriptStruct_FMRUKHit_Statics::NewStructOps, TEXT("MRUKHit"),&Z_Registration_Info_UScriptStruct_FMRUKHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKHit), 355181823U) },
		{ Z_Construct_UScriptStruct_FMRUKLabelFilter, Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewStructOps, TEXT("MRUKLabelFilter"),&Z_Registration_Info_UScriptStruct_FMRUKLabelFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKLabelFilter), 615251821U) },
		{ Z_Construct_UScriptStruct_FMRUKPlaneUV, Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewStructOps, TEXT("MRUKPlaneUV"),&Z_Registration_Info_UScriptStruct_FMRUKPlaneUV, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKPlaneUV), 1258332988U) },
		{ Z_Construct_UScriptStruct_FMRUKTexCoordModes, Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewStructOps, TEXT("MRUKTexCoordModes"),&Z_Registration_Info_UScriptStruct_FMRUKTexCoordModes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKTexCoordModes), 3887362296U) },
		{ Z_Construct_UScriptStruct_FMRUKSpawnActor, Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewStructOps, TEXT("MRUKSpawnActor"),&Z_Registration_Info_UScriptStruct_FMRUKSpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKSpawnActor), 3369579706U) },
		{ Z_Construct_UScriptStruct_FMRUKSpawnGroup, Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewStructOps, TEXT("MRUKSpawnGroup"),&Z_Registration_Info_UScriptStruct_FMRUKSpawnGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKSpawnGroup), 4230142119U) },
		{ Z_Construct_UScriptStruct_FMRUKTrackerConfiguration, Z_Construct_UScriptStruct_FMRUKTrackerConfiguration_Statics::NewStructOps, TEXT("MRUKTrackerConfiguration"),&Z_Registration_Info_UScriptStruct_FMRUKTrackerConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKTrackerConfiguration), 4253065890U) },
		{ Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit, Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit_Statics::NewStructOps, TEXT("MRUKEnvironmentRaycastHit"),&Z_Registration_Info_UScriptStruct_FMRUKEnvironmentRaycastHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKEnvironmentRaycastHit), 440151815U) },
		{ Z_Construct_UScriptStruct_FMRUKTrackableKey, Z_Construct_UScriptStruct_FMRUKTrackableKey_Statics::NewStructOps, TEXT("MRUKTrackableKey"),&Z_Registration_Info_UScriptStruct_FMRUKTrackableKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKTrackableKey), 408675053U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h__Script_MRUtilityKit_88c339dafff8e2bd464c98da2f5b258bc2c442b3{
	TEXT("/Script/MRUtilityKit"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
