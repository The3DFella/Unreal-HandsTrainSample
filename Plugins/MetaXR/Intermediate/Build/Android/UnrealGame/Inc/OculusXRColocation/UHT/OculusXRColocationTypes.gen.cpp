// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRColocationTypes() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRColocation(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UEnum* Z_Construct_UEnum_OculusXRColocation_EColocationResult(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EColocationResult *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRColocation_EColocationResult_Statics
template<> OCULUSXRCOLOCATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EColocationResult>()
{
	return Z_Construct_UEnum_OculusXRColocation_EColocationResult(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "CloudStorageDisabled.Name", "EColocationResult::CloudStorageDisabled" },
		{ "Failure.Name", "EColocationResult::Failure" },
		{ "FailureDataIsInvalid.Name", "EColocationResult::FailureDataIsInvalid" },
		{ "FailureInvalidParameter.Name", "EColocationResult::FailureInvalidParameter" },
		{ "InsufficientPermissions.Name", "EColocationResult::InsufficientPermissions" },
		{ "ModuleRelativePath", "Public/OculusXRColocationTypes.h" },
		{ "NetworkRequestFailed.Name", "EColocationResult::NetworkRequestFailed" },
		{ "NetworkTimeout.Name", "EColocationResult::NetworkTimeout" },
		{ "NoDiscoveryMethodAvailable.Name", "EColocationResult::NoDiscoveryMethodAvailable" },
		{ "Success.Name", "EColocationResult::Success" },
		{ "Success_AlreadyAdvertising.Name", "EColocationResult::Success_AlreadyAdvertising" },
		{ "Success_AlreadyDiscovering.Name", "EColocationResult::Success_AlreadyDiscovering" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EColocationResult::Success", (int64)EColocationResult::Success },
		{ "EColocationResult::Success_AlreadyAdvertising", (int64)EColocationResult::Success_AlreadyAdvertising },
		{ "EColocationResult::Success_AlreadyDiscovering", (int64)EColocationResult::Success_AlreadyDiscovering },
		{ "EColocationResult::Failure", (int64)EColocationResult::Failure },
		{ "EColocationResult::FailureInvalidParameter", (int64)EColocationResult::FailureInvalidParameter },
		{ "EColocationResult::FailureDataIsInvalid", (int64)EColocationResult::FailureDataIsInvalid },
		{ "EColocationResult::NetworkTimeout", (int64)EColocationResult::NetworkTimeout },
		{ "EColocationResult::NetworkRequestFailed", (int64)EColocationResult::NetworkRequestFailed },
		{ "EColocationResult::InsufficientPermissions", (int64)EColocationResult::InsufficientPermissions },
		{ "EColocationResult::CloudStorageDisabled", (int64)EColocationResult::CloudStorageDisabled },
		{ "EColocationResult::NoDiscoveryMethodAvailable", (int64)EColocationResult::NoDiscoveryMethodAvailable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation,
	nullptr,
	"EColocationResult",
	"EColocationResult",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EColocationResult;
UEnum* Z_Construct_UEnum_OculusXRColocation_EColocationResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EColocationResult.OuterSingleton)
		{
			ZRIE_EColocationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRColocation_EColocationResult, (UObject*)Z_Construct_UPackage__Script_OculusXRColocation(ETypeConstructPhase::Outer), TEXT("EColocationResult"));
		}
		return ZRIE_EColocationResult.OuterSingleton;
	}
	if (!ZRIE_EColocationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EColocationResult.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EColocationResult.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EColocationResult ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationTypes_h__Script_OculusXRColocation_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRColocation_EColocationResult, TEXT("EColocationResult"), &ZRIE_EColocationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2396982287U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationTypes_h__Script_OculusXRColocation_4fafd5c1bd961aabc1ecfd799c3a74ddede2e380{
	TEXT("/Script/OculusXRColocation"),
	nullptr, 0,
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
