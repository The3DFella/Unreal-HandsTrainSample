// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRLiveLinkRetargetBodyAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRLiveLinkRetargetBodyAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRAxis(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRRetargetingMode(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBoneCorrection(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBoneCorrectionSet(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRAxis *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRAxis_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRAxis>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRAxis(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Axis" },
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
		{ "NegativeX.DisplayName", "-X" },
		{ "NegativeX.Name", "EOculusXRAxis::NegativeX" },
		{ "NegativeY.DisplayName", "-Y" },
		{ "NegativeY.Name", "EOculusXRAxis::NegativeY" },
		{ "NegativeZ.DisplayName", "-Z" },
		{ "NegativeZ.Name", "EOculusXRAxis::NegativeZ" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "EOculusXRAxis::X" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "EOculusXRAxis::Y" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "EOculusXRAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRAxis::X", (int64)EOculusXRAxis::X },
		{ "EOculusXRAxis::Y", (int64)EOculusXRAxis::Y },
		{ "EOculusXRAxis::Z", (int64)EOculusXRAxis::Z },
		{ "EOculusXRAxis::NegativeX", (int64)EOculusXRAxis::NegativeX },
		{ "EOculusXRAxis::NegativeY", (int64)EOculusXRAxis::NegativeY },
		{ "EOculusXRAxis::NegativeZ", (int64)EOculusXRAxis::NegativeZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRAxis",
	"EOculusXRAxis",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRAxis;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRAxis(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRAxis.OuterSingleton)
		{
			ZRIE_EOculusXRAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRAxis, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRAxis"));
		}
		return ZRIE_EOculusXRAxis.OuterSingleton;
	}
	if (!ZRIE_EOculusXRAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRAxis.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRAxis.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRAxis ***************************************************************

// ********** Begin Enum EOculusXRRetargetingMode **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRRetargetingMode_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRRetargetingMode>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRRetargetingMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Retargeting mode" },
		{ "Full.DisplayName", "Rotations and positions" },
		{ "Full.Name", "EOculusXRRetargetingMode::Full" },
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
		{ "None.DisplayName", "Disabled" },
		{ "None.Name", "EOculusXRRetargetingMode::None" },
		{ "Rotations.DisplayName", "Only rotations" },
		{ "Rotations.Name", "EOculusXRRetargetingMode::Rotations" },
		{ "RotationsPlusHips.DisplayName", "Rotations and hips position" },
		{ "RotationsPlusHips.Name", "EOculusXRRetargetingMode::RotationsPlusHips" },
		{ "RotationsPlusRoot.DisplayName", "Rotations and root position" },
		{ "RotationsPlusRoot.Name", "EOculusXRRetargetingMode::RotationsPlusRoot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRRetargetingMode::Full", (int64)EOculusXRRetargetingMode::Full },
		{ "EOculusXRRetargetingMode::Rotations", (int64)EOculusXRRetargetingMode::Rotations },
		{ "EOculusXRRetargetingMode::RotationsPlusRoot", (int64)EOculusXRRetargetingMode::RotationsPlusRoot },
		{ "EOculusXRRetargetingMode::RotationsPlusHips", (int64)EOculusXRRetargetingMode::RotationsPlusHips },
		{ "EOculusXRRetargetingMode::None", (int64)EOculusXRRetargetingMode::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRRetargetingMode",
	"EOculusXRRetargetingMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRRetargetingMode;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRRetargetingMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRRetargetingMode.OuterSingleton)
		{
			ZRIE_EOculusXRRetargetingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRRetargetingMode, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRRetargetingMode"));
		}
		return ZRIE_EOculusXRRetargetingMode.OuterSingleton;
	}
	if (!ZRIE_EOculusXRRetargetingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRRetargetingMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRRetargetingMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRRetargetingMode ****************************************************

// ********** Begin ScriptStruct FOculusXRBoneCorrection *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRBoneCorrection_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRBoneCorrection>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRBoneCorrection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Bone local correction" },
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Position offset in local space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position offset in local space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Rotation offset in local space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation offset in local space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRBoneCorrection constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRBoneCorrection constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBoneCorrection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRBoneCorrection Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBoneCorrection, PositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionOffset_MetaData), NewProp_PositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBoneCorrection, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRBoneCorrection Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRBoneCorrection",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRBoneCorrection>(),
	alignof(FOculusXRBoneCorrection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrection;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBoneCorrection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrection.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBoneCorrection, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRBoneCorrection"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrection.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrection.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrection.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRBoneCorrection *********************************************

// ********** Begin ScriptStruct FOculusXRBoneCorrectionSet ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRBoneCorrectionSet_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRBoneCorrectionSet>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRBoneCorrectionSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Correction applied to set of bones" },
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set of bones to which the correction will be applied.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set of bones to which the correction will be applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneCorrection_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The correction for this set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The correction for this set." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRBoneCorrectionSet constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bones_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bones_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneCorrection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRBoneCorrectionSet constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBoneCorrectionSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRBoneCorrectionSet Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Bones_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Bones_ElementProp = { "Bones", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, METADATA_PARAMS(0, nullptr) }; // 576a3bff3a4ec47021e6905217f95ba0b04d5736
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBoneCorrectionSet, Bones), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bones_MetaData), NewProp_Bones_MetaData) }; // 576a3bff3a4ec47021e6905217f95ba0b04d5736
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoneCorrection = { "BoneCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBoneCorrectionSet, BoneCorrection), Z_Construct_UScriptStruct_FOculusXRBoneCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneCorrection_MetaData), NewProp_BoneCorrection_MetaData) }; // 58970334863dc194ddcf12597ff76709c048020c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bones_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bones_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bones,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneCorrection,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRBoneCorrectionSet Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRBoneCorrectionSet",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRBoneCorrectionSet>(),
	alignof(FOculusXRBoneCorrectionSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrectionSet;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBoneCorrectionSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrectionSet.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrectionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBoneCorrectionSet, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRBoneCorrectionSet"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrectionSet.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrectionSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrectionSet.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrectionSet.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRBoneCorrectionSet ******************************************

// ********** Begin Class UOculusXRLiveLinkRetargetBodyAsset ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
		{ "DisplayName", "MetaXR MovementSDK LiveLink retarget body asset" },
		{ "IncludePath", "OculusXRLiveLinkRetargetBodyAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneRemapping_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remapping from bone ID to target skeleton's bone name.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remapping from bone ID to target skeleton's bone name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalCorrection_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Correction applied to all bones.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Correction applied to all bones." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalCorrections_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Groups of local bone corrections.\n\x09 *\n\x09 * Order matters. A bone can be corrected multiple times.\n\x09 * Corrections will be applied with the same order as in this array.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Groups of local bone corrections.\n\nOrder matters. A bone can be corrected multiple times.\nCorrections will be applied with the same order as in this array." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetingMode_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Switch between retargeting modes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch between retargeting modes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardMesh_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Forward vector axis is the direction towards which the target mesh is oriented.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetBodyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward vector axis is the direction towards which the target mesh is oriented." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRLiveLinkRetargetBodyAsset constinit property declarations *******
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneRemapping_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneRemapping_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneRemapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneRemapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalCorrection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalCorrections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalCorrections;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RetargetingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RetargetingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardMesh_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForwardMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRLiveLinkRetargetBodyAsset constinit property declarations *********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRLiveLinkRetargetBodyAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRLiveLinkRetargetBodyAsset Property Definitions ******************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneRemapping_ValueProp = { "BoneRemapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoneRemapping_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoneRemapping_Key_KeyProp = { "BoneRemapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, METADATA_PARAMS(0, nullptr) }; // 576a3bff3a4ec47021e6905217f95ba0b04d5736
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_BoneRemapping = { "BoneRemapping", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRLiveLinkRetargetBodyAsset, BoneRemapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneRemapping_MetaData), NewProp_BoneRemapping_MetaData) }; // 576a3bff3a4ec47021e6905217f95ba0b04d5736
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GlobalCorrection = { "GlobalCorrection", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRLiveLinkRetargetBodyAsset, GlobalCorrection), Z_Construct_UScriptStruct_FOculusXRBoneCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalCorrection_MetaData), NewProp_GlobalCorrection_MetaData) }; // 58970334863dc194ddcf12597ff76709c048020c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LocalCorrections_Inner = { "LocalCorrections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRBoneCorrectionSet, METADATA_PARAMS(0, nullptr) }; // 8cbb146796068fe2cb89648b89c8ec0932a018fc
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LocalCorrections = { "LocalCorrections", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRLiveLinkRetargetBodyAsset, LocalCorrections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalCorrections_MetaData), NewProp_LocalCorrections_MetaData) }; // 8cbb146796068fe2cb89648b89c8ec0932a018fc
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RetargetingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RetargetingMode = { "RetargetingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRLiveLinkRetargetBodyAsset, RetargetingMode), Z_Construct_UEnum_OculusXRMovement_EOculusXRRetargetingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetingMode_MetaData), NewProp_RetargetingMode_MetaData) }; // 78f1e460769c81d5cead6bd623e73237406a9639
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ForwardMesh_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ForwardMesh = { "ForwardMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRLiveLinkRetargetBodyAsset, ForwardMesh), Z_Construct_UEnum_OculusXRMovement_EOculusXRAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardMesh_MetaData), NewProp_ForwardMesh_MetaData) }; // bd8b44c82aff42900cdd8a798de6d095a4b380aa
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneRemapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneRemapping_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneRemapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneRemapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GlobalCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalCorrections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalCorrections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RetargetingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RetargetingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ForwardMesh_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ForwardMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRLiveLinkRetargetBodyAsset Property Definitions ********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_ULiveLinkRetargetAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetBodyAsset;
UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRLiveLinkRetargetBodyAsset;
		if (!Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetBodyAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRLiveLinkRetargetBodyAsset"),
				Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetBodyAsset.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetBodyAsset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetBodyAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetBodyAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetBodyAsset.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRLiveLinkRetargetBodyAsset);
UOculusXRLiveLinkRetargetBodyAsset::~UOculusXRLiveLinkRetargetBodyAsset() {}
// ********** End Class UOculusXRLiveLinkRetargetBodyAsset *****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h__Script_OculusXRMovement_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRAxis, TEXT("EOculusXRAxis"), &ZRIE_EOculusXRAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3180020936U) },
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRRetargetingMode, TEXT("EOculusXRRetargetingMode"), &ZRIE_EOculusXRRetargetingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2029118560U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRBoneCorrection, Z_Construct_UScriptStruct_FOculusXRBoneCorrection_Statics::NewStructOps, TEXT("OculusXRBoneCorrection"),&Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBoneCorrection), 1486291764U) },
		{ Z_Construct_UScriptStruct_FOculusXRBoneCorrectionSet, Z_Construct_UScriptStruct_FOculusXRBoneCorrectionSet_Statics::NewStructOps, TEXT("OculusXRBoneCorrectionSet"),&Z_Registration_Info_UScriptStruct_FOculusXRBoneCorrectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBoneCorrectionSet), 2361070695U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset, TEXT("UOculusXRLiveLinkRetargetBodyAsset"), &Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetBodyAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRLiveLinkRetargetBodyAsset), 1978459321U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h__Script_OculusXRMovement_dcb68bb5abc01330f9ae61daee95e2a33bc15394{
	TEXT("/Script/OculusXRMovement"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
