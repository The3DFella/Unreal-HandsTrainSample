// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSetupRule.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSetupRule() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRProjectSetupTool(ETypeConstructPhase);
OCULUSXRPROJECTSETUPTOOL_API UEnum* Z_Construct_UEnum_OculusXRProjectSetupTool_ESetupRulePlatform(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ESetupRulePlatform ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRProjectSetupTool_ESetupRulePlatform_Statics
template<> OCULUSXRPROJECTSETUPTOOL_NON_ATTRIBUTED_API UEnum* StaticEnum<ESetupRulePlatform>()
{
	return Z_Construct_UEnum_OculusXRProjectSetupTool_ESetupRulePlatform(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Rule platforms\n */" },
		{ "MetaLink.Comment", "// Link\n" },
		{ "MetaLink.DisplayName", "Link" },
		{ "MetaLink.Name", "ESetupRulePlatform::MetaLink" },
		{ "MetaLink.ToolTip", "Link" },
		{ "MetaQuest_2.Comment", "// Quest\n" },
		{ "MetaQuest_2.DisplayName", "Quest 2" },
		{ "MetaQuest_2.Name", "ESetupRulePlatform::MetaQuest_2" },
		{ "MetaQuest_2.ToolTip", "Quest" },
		{ "MetaQuest_3.DisplayName", "Quest 3" },
		{ "MetaQuest_3.Name", "ESetupRulePlatform::MetaQuest_3" },
		{ "MetaQuest_Pro.DisplayName", "Quest Pro" },
		{ "MetaQuest_Pro.Name", "ESetupRulePlatform::MetaQuest_Pro" },
		{ "ModuleRelativePath", "Public/OculusXRSetupRule.h" },
		{ "None.Comment", "// None\n" },
		{ "None.Name", "ESetupRulePlatform::None" },
		{ "None.ToolTip", "None" },
		{ "ToolTip", "Rule platforms" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESetupRulePlatform::None", (int64)ESetupRulePlatform::None },
		{ "ESetupRulePlatform::MetaLink", (int64)ESetupRulePlatform::MetaLink },
		{ "ESetupRulePlatform::MetaQuest_2", (int64)ESetupRulePlatform::MetaQuest_2 },
		{ "ESetupRulePlatform::MetaQuest_3", (int64)ESetupRulePlatform::MetaQuest_3 },
		{ "ESetupRulePlatform::MetaQuest_Pro", (int64)ESetupRulePlatform::MetaQuest_Pro },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRProjectSetupTool,
	nullptr,
	"ESetupRulePlatform",
	"ESetupRulePlatform",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESetupRulePlatform;
UEnum* Z_Construct_UEnum_OculusXRProjectSetupTool_ESetupRulePlatform(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESetupRulePlatform.OuterSingleton)
		{
			ZRIE_ESetupRulePlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRProjectSetupTool_ESetupRulePlatform, (UObject*)Z_Construct_UPackage__Script_OculusXRProjectSetupTool(ETypeConstructPhase::Outer), TEXT("ESetupRulePlatform"));
		}
		return ZRIE_ESetupRulePlatform.OuterSingleton;
	}
	if (!ZRIE_ESetupRulePlatform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESetupRulePlatform.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESetupRulePlatform.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESetupRulePlatform **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRSetupRule_h__Script_OculusXRProjectSetupTool_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRProjectSetupTool_ESetupRulePlatform, TEXT("ESetupRulePlatform"), &ZRIE_ESetupRulePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 776496691U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRSetupRule_h__Script_OculusXRProjectSetupTool_e281eba6fef1646c3e7c49fea5b7e419660456af{
	TEXT("/Script/OculusXRProjectSetupTool"),
	nullptr, 0,
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
