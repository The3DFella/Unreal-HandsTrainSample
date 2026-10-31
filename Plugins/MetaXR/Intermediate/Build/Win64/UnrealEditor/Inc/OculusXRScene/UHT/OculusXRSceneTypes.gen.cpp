// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSceneTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneTypes() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase);
OCULUSXRSCENE_API UEnum* Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility(ETypeConstructPhase);
OCULUSXRSCENE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneTypesPlaceholder(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSceneTypesPlaceholder ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSceneTypesPlaceholder>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSceneTypesPlaceholder); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSceneTypesPlaceholder constinit property declarations ************
// ********** End ScriptStruct FSceneTypesPlaceholder constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneTypesPlaceholder>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
	nullptr,
	&NewStructOps,
	"SceneTypesPlaceholder",
	nullptr,
	0,
	DataSizeOf<FSceneTypesPlaceholder>(),
	alignof(FSceneTypesPlaceholder),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSceneTypesPlaceholder;
UScriptStruct* Z_Construct_UScriptStruct_FSceneTypesPlaceholder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSceneTypesPlaceholder.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSceneTypesPlaceholder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneTypesPlaceholder, (UObject*)Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase::Outer), TEXT("SceneTypesPlaceholder"));
		}
		return Z_Registration_Info_UScriptStruct_FSceneTypesPlaceholder.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSceneTypesPlaceholder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSceneTypesPlaceholder.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSceneTypesPlaceholder.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSceneTypesPlaceholder **********************************************

// ********** Begin Enum EOculusXRBoundaryVisibility ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility_Statics
template<> OCULUSXRSCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRBoundaryVisibility>()
{
	return Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Invalid.Name", "EOculusXRBoundaryVisibility::Invalid" },
		{ "ModuleRelativePath", "Public/OculusXRSceneTypes.h" },
		{ "NotSuppressed.Name", "EOculusXRBoundaryVisibility::NotSuppressed" },
		{ "Suppressed.Name", "EOculusXRBoundaryVisibility::Suppressed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRBoundaryVisibility::Invalid", (int64)EOculusXRBoundaryVisibility::Invalid },
		{ "EOculusXRBoundaryVisibility::NotSuppressed", (int64)EOculusXRBoundaryVisibility::NotSuppressed },
		{ "EOculusXRBoundaryVisibility::Suppressed", (int64)EOculusXRBoundaryVisibility::Suppressed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
	nullptr,
	"EOculusXRBoundaryVisibility",
	"EOculusXRBoundaryVisibility",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRBoundaryVisibility;
UEnum* Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRBoundaryVisibility.OuterSingleton)
		{
			ZRIE_EOculusXRBoundaryVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility, (UObject*)Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase::Outer), TEXT("EOculusXRBoundaryVisibility"));
		}
		return ZRIE_EOculusXRBoundaryVisibility.OuterSingleton;
	}
	if (!ZRIE_EOculusXRBoundaryVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRBoundaryVisibility.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRBoundaryVisibility.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRBoundaryVisibility *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h__Script_OculusXRScene_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRScene_EOculusXRBoundaryVisibility, TEXT("EOculusXRBoundaryVisibility"), &ZRIE_EOculusXRBoundaryVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3197700235U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSceneTypesPlaceholder, Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics::NewStructOps, TEXT("SceneTypesPlaceholder"),&Z_Registration_Info_UScriptStruct_FSceneTypesPlaceholder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSceneTypesPlaceholder), 1460834567U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h__Script_OculusXRScene_e6019ea88b55918850cf747f8cdd9b051ce2fb5c{
	TEXT("/Script/OculusXRScene"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
