// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation(ETypeConstructPhase);
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchor(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRAnchorResult *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics
template<> OCULUSXRANCHORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRAnchorResult::Type>()
{
	return Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Failure.Comment", "/// Failure\n" },
		{ "Failure.Name", "EOculusXRAnchorResult::Failure" },
		{ "Failure.ToolTip", "Failure" },
		{ "Failure_DataIsInvalid.Name", "EOculusXRAnchorResult::Failure_DataIsInvalid" },
		{ "Failure_DeprecatedOperation.Name", "EOculusXRAnchorResult::Failure_DeprecatedOperation" },
		{ "Failure_ErrorInitializationFailed.Name", "EOculusXRAnchorResult::Failure_ErrorInitializationFailed" },
		{ "Failure_ErrorLimitReached.Name", "EOculusXRAnchorResult::Failure_ErrorLimitReached" },
		{ "Failure_InsufficientSize.Name", "EOculusXRAnchorResult::Failure_InsufficientSize" },
		{ "Failure_InvalidOperation.Name", "EOculusXRAnchorResult::Failure_InvalidOperation" },
		{ "Failure_InvalidParameter.Name", "EOculusXRAnchorResult::Failure_InvalidParameter" },
		{ "Failure_NotInitialized.Name", "EOculusXRAnchorResult::Failure_NotInitialized" },
		{ "Failure_NotYetImplemented.Name", "EOculusXRAnchorResult::Failure_NotYetImplemented" },
		{ "Failure_OperationFailed.Name", "EOculusXRAnchorResult::Failure_OperationFailed" },
		{ "Failure_SpaceCloudStorageDisabled.Comment", "/// Space error cases\n" },
		{ "Failure_SpaceCloudStorageDisabled.Name", "EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled" },
		{ "Failure_SpaceCloudStorageDisabled.ToolTip", "Space error cases" },
		{ "Failure_SpaceInsufficientResources.Comment", "/// APD warnings and error cases\n" },
		{ "Failure_SpaceInsufficientResources.Name", "EOculusXRAnchorResult::Failure_SpaceInsufficientResources" },
		{ "Failure_SpaceInsufficientResources.ToolTip", "APD warnings and error cases" },
		{ "Failure_SpaceInsufficientView.Name", "EOculusXRAnchorResult::Failure_SpaceInsufficientView" },
		{ "Failure_SpaceLocalizationFailed.Name", "EOculusXRAnchorResult::Failure_SpaceLocalizationFailed" },
		{ "Failure_SpaceMappingInsufficient.Name", "EOculusXRAnchorResult::Failure_SpaceMappingInsufficient" },
		{ "Failure_SpaceNetworkRequestFailed.Name", "EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed" },
		{ "Failure_SpaceNetworkTimeout.Name", "EOculusXRAnchorResult::Failure_SpaceNetworkTimeout" },
		{ "Failure_SpacePermissionInsufficient.Name", "EOculusXRAnchorResult::Failure_SpacePermissionInsufficient" },
		{ "Failure_SpaceRateLimited.Name", "EOculusXRAnchorResult::Failure_SpaceRateLimited" },
		{ "Failure_SpaceStorageAtCapacity.Name", "EOculusXRAnchorResult::Failure_SpaceStorageAtCapacity" },
		{ "Failure_SpaceTooBright.Name", "EOculusXRAnchorResult::Failure_SpaceTooBright" },
		{ "Failure_SpaceTooDark.Name", "EOculusXRAnchorResult::Failure_SpaceTooDark" },
		{ "Failure_Unsupported.Name", "EOculusXRAnchorResult::Failure_Unsupported" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "Success.Name", "EOculusXRAnchorResult::Success" },
		{ "Warning_BoundaryVisibilitySuppressionNotAllowed.Comment", "// Boundary visibility\n" },
		{ "Warning_BoundaryVisibilitySuppressionNotAllowed.Name", "EOculusXRAnchorResult::Warning_BoundaryVisibilitySuppressionNotAllowed" },
		{ "Warning_BoundaryVisibilitySuppressionNotAllowed.ToolTip", "Boundary visibility" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRAnchorResult::Success", (int64)EOculusXRAnchorResult::Success },
		{ "EOculusXRAnchorResult::Failure", (int64)EOculusXRAnchorResult::Failure },
		{ "EOculusXRAnchorResult::Failure_InvalidParameter", (int64)EOculusXRAnchorResult::Failure_InvalidParameter },
		{ "EOculusXRAnchorResult::Failure_NotInitialized", (int64)EOculusXRAnchorResult::Failure_NotInitialized },
		{ "EOculusXRAnchorResult::Failure_InvalidOperation", (int64)EOculusXRAnchorResult::Failure_InvalidOperation },
		{ "EOculusXRAnchorResult::Failure_Unsupported", (int64)EOculusXRAnchorResult::Failure_Unsupported },
		{ "EOculusXRAnchorResult::Failure_NotYetImplemented", (int64)EOculusXRAnchorResult::Failure_NotYetImplemented },
		{ "EOculusXRAnchorResult::Failure_OperationFailed", (int64)EOculusXRAnchorResult::Failure_OperationFailed },
		{ "EOculusXRAnchorResult::Failure_InsufficientSize", (int64)EOculusXRAnchorResult::Failure_InsufficientSize },
		{ "EOculusXRAnchorResult::Failure_DataIsInvalid", (int64)EOculusXRAnchorResult::Failure_DataIsInvalid },
		{ "EOculusXRAnchorResult::Failure_DeprecatedOperation", (int64)EOculusXRAnchorResult::Failure_DeprecatedOperation },
		{ "EOculusXRAnchorResult::Failure_ErrorLimitReached", (int64)EOculusXRAnchorResult::Failure_ErrorLimitReached },
		{ "EOculusXRAnchorResult::Failure_ErrorInitializationFailed", (int64)EOculusXRAnchorResult::Failure_ErrorInitializationFailed },
		{ "EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled", (int64)EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled },
		{ "EOculusXRAnchorResult::Failure_SpaceMappingInsufficient", (int64)EOculusXRAnchorResult::Failure_SpaceMappingInsufficient },
		{ "EOculusXRAnchorResult::Failure_SpaceLocalizationFailed", (int64)EOculusXRAnchorResult::Failure_SpaceLocalizationFailed },
		{ "EOculusXRAnchorResult::Failure_SpaceNetworkTimeout", (int64)EOculusXRAnchorResult::Failure_SpaceNetworkTimeout },
		{ "EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed", (int64)EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed },
		{ "EOculusXRAnchorResult::Failure_SpaceInsufficientResources", (int64)EOculusXRAnchorResult::Failure_SpaceInsufficientResources },
		{ "EOculusXRAnchorResult::Failure_SpaceStorageAtCapacity", (int64)EOculusXRAnchorResult::Failure_SpaceStorageAtCapacity },
		{ "EOculusXRAnchorResult::Failure_SpaceInsufficientView", (int64)EOculusXRAnchorResult::Failure_SpaceInsufficientView },
		{ "EOculusXRAnchorResult::Failure_SpacePermissionInsufficient", (int64)EOculusXRAnchorResult::Failure_SpacePermissionInsufficient },
		{ "EOculusXRAnchorResult::Failure_SpaceRateLimited", (int64)EOculusXRAnchorResult::Failure_SpaceRateLimited },
		{ "EOculusXRAnchorResult::Failure_SpaceTooDark", (int64)EOculusXRAnchorResult::Failure_SpaceTooDark },
		{ "EOculusXRAnchorResult::Failure_SpaceTooBright", (int64)EOculusXRAnchorResult::Failure_SpaceTooBright },
		{ "EOculusXRAnchorResult::Warning_BoundaryVisibilitySuppressionNotAllowed", (int64)EOculusXRAnchorResult::Warning_BoundaryVisibilitySuppressionNotAllowed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRAnchorResult",
	"EOculusXRAnchorResult::Type",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRAnchorResult;
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRAnchorResult.OuterSingleton)
		{
			ZRIE_EOculusXRAnchorResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("EOculusXRAnchorResult"));
		}
		return ZRIE_EOculusXRAnchorResult.OuterSingleton;
	}
	if (!ZRIE_EOculusXRAnchorResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRAnchorResult.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRAnchorResult.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRAnchorResult *******************************************************

// ********** Begin Enum EOculusLocationFlags ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags_Statics
template<> OCULUSXRANCHORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusLocationFlags>()
{
	return Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// namespace EOculusXRAnchorResult\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "None.Name", "EOculusLocationFlags::None" },
		{ "OrientationTracked.Name", "EOculusLocationFlags::OrientationTracked" },
		{ "OrientationValid.Comment", "// required for the metadata generation\n" },
		{ "OrientationValid.Name", "EOculusLocationFlags::OrientationValid" },
		{ "OrientationValid.ToolTip", "required for the metadata generation" },
		{ "PositionTracked.Name", "EOculusLocationFlags::PositionTracked" },
		{ "PositionValid.Name", "EOculusLocationFlags::PositionValid" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "namespace EOculusXRAnchorResult" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusLocationFlags::None", (int64)EOculusLocationFlags::None },
		{ "EOculusLocationFlags::OrientationValid", (int64)EOculusLocationFlags::OrientationValid },
		{ "EOculusLocationFlags::PositionValid", (int64)EOculusLocationFlags::PositionValid },
		{ "EOculusLocationFlags::OrientationTracked", (int64)EOculusLocationFlags::OrientationTracked },
		{ "EOculusLocationFlags::PositionTracked", (int64)EOculusLocationFlags::PositionTracked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusLocationFlags",
	"EOculusLocationFlags",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusLocationFlags;
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusLocationFlags.OuterSingleton)
		{
			ZRIE_EOculusLocationFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("EOculusLocationFlags"));
		}
		return ZRIE_EOculusLocationFlags.OuterSingleton;
	}
	if (!ZRIE_EOculusLocationFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusLocationFlags.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusLocationFlags.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusLocationFlags ********************************************************

// ********** Begin ScriptStruct FOculusXRAnchorLocationFlags **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRAnchorLocationFlags>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRAnchorLocationFlags); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/OculusXRAnchors.EOculusLocationFlags" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRAnchorLocationFlags constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRAnchorLocationFlags constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAnchorLocationFlags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRAnchorLocationFlags Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchorLocationFlags, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRAnchorLocationFlags Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRAnchorLocationFlags",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRAnchorLocationFlags>(),
	alignof(FOculusXRAnchorLocationFlags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRAnchorLocationFlags"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRAnchorLocationFlags ****************************************

// ********** Begin ScriptStruct FOculusXRUUID *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRUUID_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRUUID>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRUUID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRUUID constinit property declarations *********************
// ********** End ScriptStruct FOculusXRUUID constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRUUID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRUUID",
	nullptr,
	0,
	DataSizeOf<FOculusXRUUID>(),
	alignof(FOculusXRUUID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRUUID;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRUUID.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRUUID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRUUID, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRUUID"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRUUID.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRUUID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRUUID.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRUUID.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRUUID *******************************************************

// ********** Begin ScriptStruct FOculusXRUInt64 ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRUInt64_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRUInt64>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRUInt64); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRUInt64 constinit property declarations *******************
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRUInt64 constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRUInt64>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRUInt64 Property Definitions ******************************
const UECodeGen_Private::FUInt64PropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRUInt64, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRUInt64 Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRUInt64",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRUInt64>(),
	alignof(FOculusXRUInt64),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRUInt64;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRUInt64.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRUInt64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRUInt64, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRUInt64"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRUInt64.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRUInt64.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRUInt64.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRUInt64.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRUInt64 *****************************************************

// ********** Begin ScriptStruct FOculusXRAnchor ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRAnchor_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRAnchor>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRAnchor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorHandle_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uuid_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRAnchor constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRAnchor constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAnchor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRAnchor Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AnchorHandle = { "AnchorHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchor, AnchorHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorHandle_MetaData), NewProp_AnchorHandle_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Uuid = { "Uuid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchor, Uuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uuid_MetaData), NewProp_Uuid_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Uuid,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRAnchor Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRAnchor",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRAnchor>(),
	alignof(FOculusXRAnchor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAnchor;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchor.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRAnchor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAnchor, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRAnchor"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRAnchor.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAnchor.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRAnchor.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRAnchor *****************************************************

// ********** Begin Enum EOculusXRSpaceQueryFilterType *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics
template<> OCULUSXRANCHORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRSpaceQueryFilterType>()
{
	return Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "FilterByComponentType.DisplayName", "Filter queries by component type" },
		{ "FilterByComponentType.Name", "EOculusXRSpaceQueryFilterType::FilterByComponentType" },
		{ "FilterByGroup.DisplayName", "Filter queries by group UUID" },
		{ "FilterByGroup.Name", "EOculusXRSpaceQueryFilterType::FilterByGroup" },
		{ "FilterByIds.DisplayName", "Filter queries by UUIDs" },
		{ "FilterByIds.Name", "EOculusXRSpaceQueryFilterType::FilterByIds" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "None.DisplayName", "No Filter" },
		{ "None.Name", "EOculusXRSpaceQueryFilterType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSpaceQueryFilterType::None", (int64)EOculusXRSpaceQueryFilterType::None },
		{ "EOculusXRSpaceQueryFilterType::FilterByIds", (int64)EOculusXRSpaceQueryFilterType::FilterByIds },
		{ "EOculusXRSpaceQueryFilterType::FilterByComponentType", (int64)EOculusXRSpaceQueryFilterType::FilterByComponentType },
		{ "EOculusXRSpaceQueryFilterType::FilterByGroup", (int64)EOculusXRSpaceQueryFilterType::FilterByGroup },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRSpaceQueryFilterType",
	"EOculusXRSpaceQueryFilterType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRSpaceQueryFilterType;
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRSpaceQueryFilterType.OuterSingleton)
		{
			ZRIE_EOculusXRSpaceQueryFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("EOculusXRSpaceQueryFilterType"));
		}
		return ZRIE_EOculusXRSpaceQueryFilterType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRSpaceQueryFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRSpaceQueryFilterType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRSpaceQueryFilterType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRSpaceQueryFilterType ***********************************************

// ********** Begin Enum EOculusXRSpaceStorageLocation *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics
template<> OCULUSXRANCHORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRSpaceStorageLocation>()
{
	return Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Cloud.DisplayName", "Cloud" },
		{ "Cloud.Name", "EOculusXRSpaceStorageLocation::Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is used as a bit-mask\n" },
#endif
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EOculusXRSpaceStorageLocation::Invalid" },
		{ "Local.DisplayName", "Local" },
		{ "Local.Name", "EOculusXRSpaceStorageLocation::Local" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is used as a bit-mask" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSpaceStorageLocation::Invalid", (int64)EOculusXRSpaceStorageLocation::Invalid },
		{ "EOculusXRSpaceStorageLocation::Local", (int64)EOculusXRSpaceStorageLocation::Local },
		{ "EOculusXRSpaceStorageLocation::Cloud", (int64)EOculusXRSpaceStorageLocation::Cloud },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRSpaceStorageLocation",
	"EOculusXRSpaceStorageLocation",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRSpaceStorageLocation;
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRSpaceStorageLocation.OuterSingleton)
		{
			ZRIE_EOculusXRSpaceStorageLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("EOculusXRSpaceStorageLocation"));
		}
		return ZRIE_EOculusXRSpaceStorageLocation.OuterSingleton;
	}
	if (!ZRIE_EOculusXRSpaceStorageLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRSpaceStorageLocation.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRSpaceStorageLocation.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRSpaceStorageLocation ***********************************************

// ********** Begin Enum EOculusXRSpaceStoragePersistenceMode **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics
template<> OCULUSXRANCHORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRSpaceStoragePersistenceMode>()
{
	return Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Indefinite.DisplayName", "Indefinite" },
		{ "Indefinite.Name", "EOculusXRSpaceStoragePersistenceMode::Indefinite" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EOculusXRSpaceStoragePersistenceMode::Invalid" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSpaceStoragePersistenceMode::Invalid", (int64)EOculusXRSpaceStoragePersistenceMode::Invalid },
		{ "EOculusXRSpaceStoragePersistenceMode::Indefinite", (int64)EOculusXRSpaceStoragePersistenceMode::Indefinite },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRSpaceStoragePersistenceMode",
	"EOculusXRSpaceStoragePersistenceMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRSpaceStoragePersistenceMode;
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRSpaceStoragePersistenceMode.OuterSingleton)
		{
			ZRIE_EOculusXRSpaceStoragePersistenceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("EOculusXRSpaceStoragePersistenceMode"));
		}
		return ZRIE_EOculusXRSpaceStoragePersistenceMode.OuterSingleton;
	}
	if (!ZRIE_EOculusXRSpaceStoragePersistenceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRSpaceStoragePersistenceMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRSpaceStoragePersistenceMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRSpaceStoragePersistenceMode ****************************************

// ********** Begin Enum EOculusXRSpaceComponentType ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics
template<> OCULUSXRANCHORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRSpaceComponentType>()
{
	return Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Locatable.DisplayName", "Locatable" },
		{ "Locatable.Name", "EOculusXRSpaceComponentType::Locatable" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "RoomLabel.Comment", "// metaxr_redact_ifdef OVR_INTERNAL_CODE // XR_META_room_entity_info\n" },
		{ "RoomLabel.DisplayName", "RoomLabel" },
		{ "RoomLabel.Name", "EOculusXRSpaceComponentType::RoomLabel" },
		{ "RoomLabel.ToolTip", "metaxr_redact_ifdef OVR_INTERNAL_CODE  XR_META_room_entity_info" },
		{ "RoomLayout.DisplayName", "RoomLayout" },
		{ "RoomLayout.Name", "EOculusXRSpaceComponentType::RoomLayout" },
		{ "ScenePlane.DisplayName", "ScenePlane" },
		{ "ScenePlane.Name", "EOculusXRSpaceComponentType::ScenePlane" },
		{ "SceneVolume.DisplayName", "SceneVolume" },
		{ "SceneVolume.Name", "EOculusXRSpaceComponentType::SceneVolume" },
		{ "SemanticClassification.DisplayName", "SemanticClassification" },
		{ "SemanticClassification.Name", "EOculusXRSpaceComponentType::SemanticClassification" },
		{ "Sharable.DisplayName", "Sharable" },
		{ "Sharable.Name", "EOculusXRSpaceComponentType::Sharable" },
		{ "SpaceContainer.DisplayName", "SpaceContainer" },
		{ "SpaceContainer.Name", "EOculusXRSpaceComponentType::SpaceContainer" },
		{ "Storable.DisplayName", "Storable" },
		{ "Storable.Name", "EOculusXRSpaceComponentType::Storable" },
		{ "TriangleMesh.DisplayName", "TriangleMesh" },
		{ "TriangleMesh.Name", "EOculusXRSpaceComponentType::TriangleMesh" },
		{ "Undefined.DisplayName", "Not defined" },
		{ "Undefined.Name", "EOculusXRSpaceComponentType::Undefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSpaceComponentType::Locatable", (int64)EOculusXRSpaceComponentType::Locatable },
		{ "EOculusXRSpaceComponentType::Storable", (int64)EOculusXRSpaceComponentType::Storable },
		{ "EOculusXRSpaceComponentType::Sharable", (int64)EOculusXRSpaceComponentType::Sharable },
		{ "EOculusXRSpaceComponentType::ScenePlane", (int64)EOculusXRSpaceComponentType::ScenePlane },
		{ "EOculusXRSpaceComponentType::SceneVolume", (int64)EOculusXRSpaceComponentType::SceneVolume },
		{ "EOculusXRSpaceComponentType::SemanticClassification", (int64)EOculusXRSpaceComponentType::SemanticClassification },
		{ "EOculusXRSpaceComponentType::RoomLayout", (int64)EOculusXRSpaceComponentType::RoomLayout },
		{ "EOculusXRSpaceComponentType::SpaceContainer", (int64)EOculusXRSpaceComponentType::SpaceContainer },
		{ "EOculusXRSpaceComponentType::Undefined", (int64)EOculusXRSpaceComponentType::Undefined },
		{ "EOculusXRSpaceComponentType::TriangleMesh", (int64)EOculusXRSpaceComponentType::TriangleMesh },
		{ "EOculusXRSpaceComponentType::RoomLabel", (int64)EOculusXRSpaceComponentType::RoomLabel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRSpaceComponentType",
	"EOculusXRSpaceComponentType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRSpaceComponentType;
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRSpaceComponentType.OuterSingleton)
		{
			ZRIE_EOculusXRSpaceComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("EOculusXRSpaceComponentType"));
		}
		return ZRIE_EOculusXRSpaceComponentType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRSpaceComponentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRSpaceComponentType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRSpaceComponentType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRSpaceComponentType *************************************************

// ********** Begin ScriptStruct FOculusXRSpaceQueryInfo *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRSpaceQueryInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRSpaceQueryInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQuerySpaces_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDFilter_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentFilter_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupUUIDFilter_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRSpaceQueryInfo constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxQuerySpaces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IDFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentFilter_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupUUIDFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRSpaceQueryInfo constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRSpaceQueryInfo Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxQuerySpaces = { "MaxQuerySpaces", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, MaxQuerySpaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQuerySpaces_MetaData), NewProp_MaxQuerySpaces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeout_MetaData), NewProp_Timeout_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, Location), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 920cba6c998c206f10bef9da516f98d1e7e6f8f4
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, FilterType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // d32d2f27d8d037d72ea986097c3230e2a1401db0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_IDFilter_Inner = { "IDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_IDFilter = { "IDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, IDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDFilter_MetaData), NewProp_IDFilter_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ComponentFilter_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ComponentFilter_Inner = { "ComponentFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 6d84567b9d77c8d30b7001f875ec87f709dae647
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ComponentFilter = { "ComponentFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, ComponentFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentFilter_MetaData), NewProp_ComponentFilter_MetaData) }; // 6d84567b9d77c8d30b7001f875ec87f709dae647
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroupUUIDFilter = { "GroupUUIDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, GroupUUIDFilter), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupUUIDFilter_MetaData), NewProp_GroupUUIDFilter_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxQuerySpaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IDFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IDFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentFilter_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupUUIDFilter,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRSpaceQueryInfo Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRSpaceQueryInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRSpaceQueryInfo>(),
	alignof(FOculusXRSpaceQueryInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRSpaceQueryInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRSpaceQueryInfo *********************************************

// ********** Begin ScriptStruct FOculusXRSpaceQueryResult *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRSpaceQueryResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRSpaceQueryResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRSpaceQueryResult constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRSpaceQueryResult constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRSpaceQueryResult Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, UUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UUID_MetaData), NewProp_UUID_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, Location), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 920cba6c998c206f10bef9da516f98d1e7e6f8f4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRSpaceQueryResult Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRSpaceQueryResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRSpaceQueryResult>(),
	alignof(FOculusXRSpaceQueryResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRSpaceQueryResult"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRSpaceQueryResult *******************************************

// ********** Begin ScriptStruct FOculusXRSpaceQueryFilterValues ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRSpaceQueryFilterValues>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRSpaceQueryFilterValues); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRSpaceQueryFilterValues constinit property declarations ***
// ********** End ScriptStruct FOculusXRSpaceQueryFilterValues constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryFilterValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRSpaceQueryFilterValues",
	nullptr,
	0,
	DataSizeOf<FOculusXRSpaceQueryFilterValues>(),
	alignof(FOculusXRSpaceQueryFilterValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRSpaceQueryFilterValues"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRSpaceQueryFilterValues *************************************

// ********** Begin Class UOculusXRSpaceDiscoveryFilterBase ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorTypes.h" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSpaceDiscoveryFilterBase constinit property declarations ********
// ********** End Class UOculusXRSpaceDiscoveryFilterBase constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceDiscoveryFilterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase;
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRSpaceDiscoveryFilterBase;
		if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRSpaceDiscoveryFilterBase"),
				Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRSpaceDiscoveryFilterBase::UOculusXRSpaceDiscoveryFilterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSpaceDiscoveryFilterBase);
UOculusXRSpaceDiscoveryFilterBase::~UOculusXRSpaceDiscoveryFilterBase() {}
// ********** End Class UOculusXRSpaceDiscoveryFilterBase ******************************************

// ********** Begin ScriptStruct FOculusXRSpaceDiscoveryInfo ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRSpaceDiscoveryInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRSpaceDiscoveryInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRSpaceDiscoveryInfo constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Filters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRSpaceDiscoveryInfo constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceDiscoveryInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRSpaceDiscoveryInfo Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceDiscoveryInfo, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRSpaceDiscoveryInfo Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRSpaceDiscoveryInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRSpaceDiscoveryInfo>(),
	alignof(FOculusXRSpaceDiscoveryInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRSpaceDiscoveryInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRSpaceDiscoveryInfo *****************************************

// ********** Begin ScriptStruct FOculusXRAnchorsDiscoverResult ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRAnchorsDiscoverResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRAnchorsDiscoverResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRAnchorsDiscoverResult constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRAnchorsDiscoverResult constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAnchorsDiscoverResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRAnchorsDiscoverResult Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchorsDiscoverResult, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchorsDiscoverResult, UUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UUID_MetaData), NewProp_UUID_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UUID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRAnchorsDiscoverResult Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRAnchorsDiscoverResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRAnchorsDiscoverResult>(),
	alignof(FOculusXRAnchorsDiscoverResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRAnchorsDiscoverResult"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRAnchorsDiscoverResult **************************************

// ********** Begin Class UOculusXRSpaceDiscoveryIdsFilter *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "IncludePath", "OculusXRAnchorTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uuids_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSpaceDiscoveryIdsFilter constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Uuids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRSpaceDiscoveryIdsFilter constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceDiscoveryIdsFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRSpaceDiscoveryIdsFilter Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Uuids_Inner = { "Uuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Uuids = { "Uuids", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSpaceDiscoveryIdsFilter, Uuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uuids_MetaData), NewProp_Uuids_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Uuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Uuids,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRSpaceDiscoveryIdsFilter Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter;
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRSpaceDiscoveryIdsFilter;
		if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRSpaceDiscoveryIdsFilter"),
				Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRSpaceDiscoveryIdsFilter::UOculusXRSpaceDiscoveryIdsFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSpaceDiscoveryIdsFilter);
UOculusXRSpaceDiscoveryIdsFilter::~UOculusXRSpaceDiscoveryIdsFilter() {}
// ********** End Class UOculusXRSpaceDiscoveryIdsFilter *******************************************

// ********** Begin Class UOculusXRSpaceDiscoveryComponentsFilter **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "IncludePath", "OculusXRAnchorTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSpaceDiscoveryComponentsFilter constinit property declarations **
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRSpaceDiscoveryComponentsFilter constinit property declarations ****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceDiscoveryComponentsFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRSpaceDiscoveryComponentsFilter Property Definitions *************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSpaceDiscoveryComponentsFilter, ComponentType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentType_MetaData), NewProp_ComponentType_MetaData) }; // 6d84567b9d77c8d30b7001f875ec87f709dae647
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRSpaceDiscoveryComponentsFilter Property Definitions ***************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter;
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRSpaceDiscoveryComponentsFilter;
		if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRSpaceDiscoveryComponentsFilter"),
				Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRSpaceDiscoveryComponentsFilter::UOculusXRSpaceDiscoveryComponentsFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSpaceDiscoveryComponentsFilter);
UOculusXRSpaceDiscoveryComponentsFilter::~UOculusXRSpaceDiscoveryComponentsFilter() {}
// ********** End Class UOculusXRSpaceDiscoveryComponentsFilter ************************************

// ********** Begin ScriptStruct FOculusXRRoomLayout ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRRoomLayout>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRRoomLayout); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents a room layout within a specific space\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a room layout within a specific space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomAnchorHandle_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLabel_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// metaxr_redact_ifdef OVR_INTERNAL_CODE // XR_META_room_entity_info\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "metaxr_redact_ifdef OVR_INTERNAL_CODE  XR_META_room_entity_info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// metaxr_redact_endif // XR_META_room_entity_info\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "metaxr_redact_endif  XR_META_room_entity_info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallsUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomObjectUUIDs_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRRoomLayout constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomAnchorHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomUuid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorUuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CeilingUuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallsUuid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WallsUuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomObjectUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomObjectUUIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRRoomLayout constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRRoomLayout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRRoomLayout Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomAnchorHandle = { "RoomAnchorHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomAnchorHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomAnchorHandle_MetaData), NewProp_RoomAnchorHandle_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomUuid = { "RoomUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomUuid_MetaData), NewProp_RoomUuid_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RoomLabel = { "RoomLabel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLabel_MetaData), NewProp_RoomLabel_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FloorUuid = { "FloorUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, FloorUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorUuid_MetaData), NewProp_FloorUuid_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CeilingUuid = { "CeilingUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, CeilingUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingUuid_MetaData), NewProp_CeilingUuid_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WallsUuid_Inner = { "WallsUuid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WallsUuid = { "WallsUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, WallsUuid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallsUuid_MetaData), NewProp_WallsUuid_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomObjectUUIDs_Inner = { "RoomObjectUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoomObjectUUIDs = { "RoomObjectUUIDs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomObjectUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomObjectUUIDs_MetaData), NewProp_RoomObjectUUIDs_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomAnchorHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CeilingUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallsUuid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallsUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomObjectUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomObjectUUIDs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRRoomLayout Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRRoomLayout",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRRoomLayout>(),
	alignof(FOculusXRRoomLayout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRRoomLayout, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("OculusXRRoomLayout"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRRoomLayout *************************************************

// ********** Begin Enum EOculusXRAnchorSpace ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace_Statics
template<> OCULUSXRANCHORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRAnchorSpace>()
{
	return Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents different types of Anchor space.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents different types of Anchor space." },
#endif
		{ "Tracking.Comment", "/**\n\x09 * Tracking space is relative to the HMD tracking origin.\n\x09 * It does not include the transform of the player pawn.\n\x09 */" },
		{ "Tracking.Name", "EOculusXRAnchorSpace::Tracking" },
		{ "Tracking.ToolTip", "Tracking space is relative to the HMD tracking origin.\nIt does not include the transform of the player pawn." },
		{ "World.Comment", "/** World space is relative to the global Unreal origin. */" },
		{ "World.Name", "EOculusXRAnchorSpace::World" },
		{ "World.ToolTip", "World space is relative to the global Unreal origin." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRAnchorSpace::World", (int64)EOculusXRAnchorSpace::World },
		{ "EOculusXRAnchorSpace::Tracking", (int64)EOculusXRAnchorSpace::Tracking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRAnchorSpace",
	"EOculusXRAnchorSpace",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRAnchorSpace;
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRAnchorSpace.OuterSingleton)
		{
			ZRIE_EOculusXRAnchorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(ETypeConstructPhase::Outer), TEXT("EOculusXRAnchorSpace"));
		}
		return ZRIE_EOculusXRAnchorSpace.OuterSingleton;
	}
	if (!ZRIE_EOculusXRAnchorSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRAnchorSpace.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRAnchorSpace.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRAnchorSpace ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult, TEXT("EOculusXRAnchorResult"), &ZRIE_EOculusXRAnchorResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 613536944U) },
		{ Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags, TEXT("EOculusLocationFlags"), &ZRIE_EOculusLocationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3582572716U) },
		{ Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType, TEXT("EOculusXRSpaceQueryFilterType"), &ZRIE_EOculusXRSpaceQueryFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3542953767U) },
		{ Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, TEXT("EOculusXRSpaceStorageLocation"), &ZRIE_EOculusXRSpaceStorageLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2450307692U) },
		{ Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode, TEXT("EOculusXRSpaceStoragePersistenceMode"), &ZRIE_EOculusXRSpaceStoragePersistenceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1502012085U) },
		{ Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, TEXT("EOculusXRSpaceComponentType"), &ZRIE_EOculusXRSpaceComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1837389435U) },
		{ Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace, TEXT("EOculusXRAnchorSpace"), &ZRIE_EOculusXRAnchorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3294692851U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags, Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::NewStructOps, TEXT("OculusXRAnchorLocationFlags"),&Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAnchorLocationFlags), 173800851U) },
		{ Z_Construct_UScriptStruct_FOculusXRUUID, Z_Construct_UScriptStruct_FOculusXRUUID_Statics::NewStructOps, TEXT("OculusXRUUID"),&Z_Registration_Info_UScriptStruct_FOculusXRUUID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRUUID), 3610860141U) },
		{ Z_Construct_UScriptStruct_FOculusXRUInt64, Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewStructOps, TEXT("OculusXRUInt64"),&Z_Registration_Info_UScriptStruct_FOculusXRUInt64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRUInt64), 179597468U) },
		{ Z_Construct_UScriptStruct_FOculusXRAnchor, Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::NewStructOps, TEXT("OculusXRAnchor"),&Z_Registration_Info_UScriptStruct_FOculusXRAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAnchor), 2262389240U) },
		{ Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo, Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewStructOps, TEXT("OculusXRSpaceQueryInfo"),&Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryInfo), 1334260886U) },
		{ Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewStructOps, TEXT("OculusXRSpaceQueryResult"),&Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryResult), 1199914000U) },
		{ Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues, Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::NewStructOps, TEXT("OculusXRSpaceQueryFilterValues"),&Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryFilterValues), 1069035027U) },
		{ Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo, Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::NewStructOps, TEXT("OculusXRSpaceDiscoveryInfo"),&Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceDiscoveryInfo), 920305367U) },
		{ Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult, Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::NewStructOps, TEXT("OculusXRAnchorsDiscoverResult"),&Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAnchorsDiscoverResult), 3758723061U) },
		{ Z_Construct_UScriptStruct_FOculusXRRoomLayout, Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewStructOps, TEXT("OculusXRRoomLayout"),&Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRRoomLayout), 351926762U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase, TEXT("UOculusXRSpaceDiscoveryFilterBase"), &Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceDiscoveryFilterBase), 3098006949U) },
		{ Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter, TEXT("UOculusXRSpaceDiscoveryIdsFilter"), &Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceDiscoveryIdsFilter), 3209576124U) },
		{ Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter, TEXT("UOculusXRSpaceDiscoveryComponentsFilter"), &Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceDiscoveryComponentsFilter), 1879167020U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_c97783a96013ebd556b1ef9bb17bd3ab5feaa5c6{
	TEXT("/Script/OculusXRAnchors"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
