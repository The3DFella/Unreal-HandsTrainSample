// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXROSVersions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXROSVersions() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXROSVersion(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FOculusXROSVersion ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXROSVersion_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXROSVersion>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXROSVersion); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Struct that wraps the version number, this allows for better customization of the appearance in the editor.\n" },
		{ "ModuleRelativePath", "Public/OculusXROSVersions.h" },
		{ "ToolTip", "Struct that wraps the version number, this allows for better customization of the appearance in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXROSVersions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLatest_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXROSVersions.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXROSVersion constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static void NewProp_bLatest_SetBit(void* Obj)
	{
		((FOculusXROSVersion*)Obj)->bLatest = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLatest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXROSVersion constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXROSVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXROSVersion Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXROSVersion, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLatest = { "bLatest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXROSVersion), &UHT_STATICS::NewProp_bLatest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLatest_MetaData), NewProp_bLatest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLatest,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXROSVersion Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	&NewStructOps,
	"OculusXROSVersion",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXROSVersion>(),
	alignof(FOculusXROSVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXROSVersion;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXROSVersion(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXROSVersion.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXROSVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXROSVersion, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("OculusXROSVersion"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXROSVersion.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXROSVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXROSVersion.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXROSVersion.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXROSVersion **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXROSVersions_h__Script_OculusXRHMD_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXROSVersion, Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::NewStructOps, TEXT("OculusXROSVersion"),&Z_Registration_Info_UScriptStruct_FOculusXROSVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXROSVersion), 643275812U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXROSVersions_h__Script_OculusXRHMD_baa4d9b6f8169beb2e13d685ee197caa941e2649{
	TEXT("/Script/OculusXRHMD"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
