// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAnimCurveMapping.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRAnimCurveMapping() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FOculusXRAnimCurveMapping *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRAnimCurveMapping>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRAnimCurveMapping); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnimCurveMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Skeleton's animation curve names\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnimCurveMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeleton's animation curve names" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRAnimCurveMapping constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRAnimCurveMapping constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAnimCurveMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRAnimCurveMapping Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnimCurveMapping, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveNames_MetaData), NewProp_CurveNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveNames,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRAnimCurveMapping Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRAnimCurveMapping",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRAnimCurveMapping>(),
	alignof(FOculusXRAnimCurveMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAnimCurveMapping;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRAnimCurveMapping.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRAnimCurveMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRAnimCurveMapping"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRAnimCurveMapping.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnimCurveMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAnimCurveMapping.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRAnimCurveMapping.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRAnimCurveMapping *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRAnimCurveMapping_h__Script_OculusXRMovement_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping, Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::NewStructOps, TEXT("OculusXRAnimCurveMapping"),&Z_Registration_Info_UScriptStruct_FOculusXRAnimCurveMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAnimCurveMapping), 3453536005U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRAnimCurveMapping_h__Script_OculusXRMovement_d2fde2decaace740968b321a7ef240f38f46549c{
	TEXT("/Script/OculusXRMovement"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
