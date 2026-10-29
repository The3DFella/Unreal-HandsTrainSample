// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovementTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRMovementTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXREye(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceVisemesExpression(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyJoint(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodySkeleton(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodySkeletonBone(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodySkeletonState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazeState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceVisemesState(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRBodyJointSet *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRBodyJointSet>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace XRSpaceFlags\n" },
		{ "FullBody.Name", "EOculusXRBodyJointSet::FullBody" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "ToolTip", "namespace XRSpaceFlags" },
		{ "UpperBody.Name", "EOculusXRBodyJointSet::UpperBody" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRBodyJointSet::UpperBody", (int64)EOculusXRBodyJointSet::UpperBody },
		{ "EOculusXRBodyJointSet::FullBody", (int64)EOculusXRBodyJointSet::FullBody },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRBodyJointSet",
	"EOculusXRBodyJointSet",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRBodyJointSet;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRBodyJointSet.OuterSingleton)
		{
			ZRIE_EOculusXRBodyJointSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRBodyJointSet"));
		}
		return ZRIE_EOculusXRBodyJointSet.OuterSingleton;
	}
	if (!ZRIE_EOculusXRBodyJointSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRBodyJointSet.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRBodyJointSet.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRBodyJointSet *******************************************************

// ********** Begin Enum EOculusXRBodyTrackingFidelity *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRBodyTrackingFidelity>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EOculusXRBodyTrackingFidelity::High" },
		{ "Low.Name", "EOculusXRBodyTrackingFidelity::Low" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Unset.Hidden", "" },
		{ "Unset.Name", "EOculusXRBodyTrackingFidelity::Unset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRBodyTrackingFidelity::Unset", (int64)EOculusXRBodyTrackingFidelity::Unset },
		{ "EOculusXRBodyTrackingFidelity::Low", (int64)EOculusXRBodyTrackingFidelity::Low },
		{ "EOculusXRBodyTrackingFidelity::High", (int64)EOculusXRBodyTrackingFidelity::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRBodyTrackingFidelity",
	"EOculusXRBodyTrackingFidelity",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRBodyTrackingFidelity;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRBodyTrackingFidelity.OuterSingleton)
		{
			ZRIE_EOculusXRBodyTrackingFidelity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRBodyTrackingFidelity"));
		}
		return ZRIE_EOculusXRBodyTrackingFidelity.OuterSingleton;
	}
	if (!ZRIE_EOculusXRBodyTrackingFidelity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRBodyTrackingFidelity.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRBodyTrackingFidelity.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRBodyTrackingFidelity ***********************************************

// ********** Begin Enum EOculusXRBoneID ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRBoneID>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "BodyChest.Name", "EOculusXRBoneID::BodyChest" },
		{ "BodyHead.Name", "EOculusXRBoneID::BodyHead" },
		{ "BodyHips.Name", "EOculusXRBoneID::BodyHips" },
		{ "BodyLeftArmLower.Name", "EOculusXRBoneID::BodyLeftArmLower" },
		{ "BodyLeftArmUpper.Name", "EOculusXRBoneID::BodyLeftArmUpper" },
		{ "BodyLeftFootAnkle.Name", "EOculusXRBoneID::BodyLeftFootAnkle" },
		{ "BodyLeftFootAnkleTwist.Name", "EOculusXRBoneID::BodyLeftFootAnkleTwist" },
		{ "BodyLeftFootBall.Name", "EOculusXRBoneID::BodyLeftFootBall" },
		{ "BodyLeftFootSubtalar.Name", "EOculusXRBoneID::BodyLeftFootSubtalar" },
		{ "BodyLeftFootTransverse.Name", "EOculusXRBoneID::BodyLeftFootTransverse" },
		{ "BodyLeftHandIndexDistal.Name", "EOculusXRBoneID::BodyLeftHandIndexDistal" },
		{ "BodyLeftHandIndexIntermediate.Name", "EOculusXRBoneID::BodyLeftHandIndexIntermediate" },
		{ "BodyLeftHandIndexMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandIndexMetacarpal" },
		{ "BodyLeftHandIndexProximal.Name", "EOculusXRBoneID::BodyLeftHandIndexProximal" },
		{ "BodyLeftHandIndexTip.Name", "EOculusXRBoneID::BodyLeftHandIndexTip" },
		{ "BodyLeftHandLittleDistal.Name", "EOculusXRBoneID::BodyLeftHandLittleDistal" },
		{ "BodyLeftHandLittleIntermediate.Name", "EOculusXRBoneID::BodyLeftHandLittleIntermediate" },
		{ "BodyLeftHandLittleMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandLittleMetacarpal" },
		{ "BodyLeftHandLittleProximal.Name", "EOculusXRBoneID::BodyLeftHandLittleProximal" },
		{ "BodyLeftHandLittleTip.Name", "EOculusXRBoneID::BodyLeftHandLittleTip" },
		{ "BodyLeftHandMiddleDistal.Name", "EOculusXRBoneID::BodyLeftHandMiddleDistal" },
		{ "BodyLeftHandMiddleIntermediate.Name", "EOculusXRBoneID::BodyLeftHandMiddleIntermediate" },
		{ "BodyLeftHandMiddleMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandMiddleMetacarpal" },
		{ "BodyLeftHandMiddleProximal.Name", "EOculusXRBoneID::BodyLeftHandMiddleProximal" },
		{ "BodyLeftHandMiddleTip.Name", "EOculusXRBoneID::BodyLeftHandMiddleTip" },
		{ "BodyLeftHandPalm.Name", "EOculusXRBoneID::BodyLeftHandPalm" },
		{ "BodyLeftHandRingDistal.Name", "EOculusXRBoneID::BodyLeftHandRingDistal" },
		{ "BodyLeftHandRingIntermediate.Name", "EOculusXRBoneID::BodyLeftHandRingIntermediate" },
		{ "BodyLeftHandRingMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandRingMetacarpal" },
		{ "BodyLeftHandRingProximal.Name", "EOculusXRBoneID::BodyLeftHandRingProximal" },
		{ "BodyLeftHandRingTip.Name", "EOculusXRBoneID::BodyLeftHandRingTip" },
		{ "BodyLeftHandThumbDistal.Name", "EOculusXRBoneID::BodyLeftHandThumbDistal" },
		{ "BodyLeftHandThumbMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandThumbMetacarpal" },
		{ "BodyLeftHandThumbProximal.Name", "EOculusXRBoneID::BodyLeftHandThumbProximal" },
		{ "BodyLeftHandThumbTip.Name", "EOculusXRBoneID::BodyLeftHandThumbTip" },
		{ "BodyLeftHandWrist.Name", "EOculusXRBoneID::BodyLeftHandWrist" },
		{ "BodyLeftHandWristTwist.Name", "EOculusXRBoneID::BodyLeftHandWristTwist" },
		{ "BodyLeftLowerLeg.Name", "EOculusXRBoneID::BodyLeftLowerLeg" },
		{ "BodyLeftScapula.Name", "EOculusXRBoneID::BodyLeftScapula" },
		{ "BodyLeftShoulder.Name", "EOculusXRBoneID::BodyLeftShoulder" },
		{ "BodyLeftUpperLeg.Name", "EOculusXRBoneID::BodyLeftUpperLeg" },
		{ "BodyNeck.Name", "EOculusXRBoneID::BodyNeck" },
		{ "BodyRightArmLower.Name", "EOculusXRBoneID::BodyRightArmLower" },
		{ "BodyRightArmUpper.Name", "EOculusXRBoneID::BodyRightArmUpper" },
		{ "BodyRightFootAnkle.Name", "EOculusXRBoneID::BodyRightFootAnkle" },
		{ "BodyRightFootAnkleTwist.Name", "EOculusXRBoneID::BodyRightFootAnkleTwist" },
		{ "BodyRightFootBall.Name", "EOculusXRBoneID::BodyRightFootBall" },
		{ "BodyRightFootSubtalar.Name", "EOculusXRBoneID::BodyRightFootSubtalar" },
		{ "BodyRightFootTransverse.Name", "EOculusXRBoneID::BodyRightFootTransverse" },
		{ "BodyRightHandIndexDistal.Name", "EOculusXRBoneID::BodyRightHandIndexDistal" },
		{ "BodyRightHandIndexIntermediate.Name", "EOculusXRBoneID::BodyRightHandIndexIntermediate" },
		{ "BodyRightHandIndexMetacarpal.Name", "EOculusXRBoneID::BodyRightHandIndexMetacarpal" },
		{ "BodyRightHandIndexProximal.Name", "EOculusXRBoneID::BodyRightHandIndexProximal" },
		{ "BodyRightHandIndexTip.Name", "EOculusXRBoneID::BodyRightHandIndexTip" },
		{ "BodyRightHandLittleDistal.Name", "EOculusXRBoneID::BodyRightHandLittleDistal" },
		{ "BodyRightHandLittleIntermediate.Name", "EOculusXRBoneID::BodyRightHandLittleIntermediate" },
		{ "BodyRightHandLittleMetacarpal.Name", "EOculusXRBoneID::BodyRightHandLittleMetacarpal" },
		{ "BodyRightHandLittleProximal.Name", "EOculusXRBoneID::BodyRightHandLittleProximal" },
		{ "BodyRightHandLittleTip.Name", "EOculusXRBoneID::BodyRightHandLittleTip" },
		{ "BodyRightHandMiddleDistal.Name", "EOculusXRBoneID::BodyRightHandMiddleDistal" },
		{ "BodyRightHandMiddleIntermediate.Name", "EOculusXRBoneID::BodyRightHandMiddleIntermediate" },
		{ "BodyRightHandMiddleMetacarpal.Name", "EOculusXRBoneID::BodyRightHandMiddleMetacarpal" },
		{ "BodyRightHandMiddleProximal.Name", "EOculusXRBoneID::BodyRightHandMiddleProximal" },
		{ "BodyRightHandMiddleTip.Name", "EOculusXRBoneID::BodyRightHandMiddleTip" },
		{ "BodyRightHandPalm.Name", "EOculusXRBoneID::BodyRightHandPalm" },
		{ "BodyRightHandRingDistal.Name", "EOculusXRBoneID::BodyRightHandRingDistal" },
		{ "BodyRightHandRingIntermediate.Name", "EOculusXRBoneID::BodyRightHandRingIntermediate" },
		{ "BodyRightHandRingMetacarpal.Name", "EOculusXRBoneID::BodyRightHandRingMetacarpal" },
		{ "BodyRightHandRingProximal.Name", "EOculusXRBoneID::BodyRightHandRingProximal" },
		{ "BodyRightHandRingTip.Name", "EOculusXRBoneID::BodyRightHandRingTip" },
		{ "BodyRightHandThumbDistal.Name", "EOculusXRBoneID::BodyRightHandThumbDistal" },
		{ "BodyRightHandThumbMetacarpal.Name", "EOculusXRBoneID::BodyRightHandThumbMetacarpal" },
		{ "BodyRightHandThumbProximal.Name", "EOculusXRBoneID::BodyRightHandThumbProximal" },
		{ "BodyRightHandThumbTip.Name", "EOculusXRBoneID::BodyRightHandThumbTip" },
		{ "BodyRightHandWrist.Name", "EOculusXRBoneID::BodyRightHandWrist" },
		{ "BodyRightHandWristTwist.Name", "EOculusXRBoneID::BodyRightHandWristTwist" },
		{ "BodyRightLowerLeg.Name", "EOculusXRBoneID::BodyRightLowerLeg" },
		{ "BodyRightScapula.Name", "EOculusXRBoneID::BodyRightScapula" },
		{ "BodyRightShoulder.Name", "EOculusXRBoneID::BodyRightShoulder" },
		{ "BodyRightUpperLeg.Name", "EOculusXRBoneID::BodyRightUpperLeg" },
		{ "BodyRoot.Name", "EOculusXRBoneID::BodyRoot" },
		{ "BodySpineLower.Name", "EOculusXRBoneID::BodySpineLower" },
		{ "BodySpineMiddle.Name", "EOculusXRBoneID::BodySpineMiddle" },
		{ "BodySpineUpper.Name", "EOculusXRBoneID::BodySpineUpper" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EOculusXRBoneID::COUNT" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EOculusXRBoneID::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRBoneID::BodyRoot", (int64)EOculusXRBoneID::BodyRoot },
		{ "EOculusXRBoneID::BodyHips", (int64)EOculusXRBoneID::BodyHips },
		{ "EOculusXRBoneID::BodySpineLower", (int64)EOculusXRBoneID::BodySpineLower },
		{ "EOculusXRBoneID::BodySpineMiddle", (int64)EOculusXRBoneID::BodySpineMiddle },
		{ "EOculusXRBoneID::BodySpineUpper", (int64)EOculusXRBoneID::BodySpineUpper },
		{ "EOculusXRBoneID::BodyChest", (int64)EOculusXRBoneID::BodyChest },
		{ "EOculusXRBoneID::BodyNeck", (int64)EOculusXRBoneID::BodyNeck },
		{ "EOculusXRBoneID::BodyHead", (int64)EOculusXRBoneID::BodyHead },
		{ "EOculusXRBoneID::BodyLeftShoulder", (int64)EOculusXRBoneID::BodyLeftShoulder },
		{ "EOculusXRBoneID::BodyLeftScapula", (int64)EOculusXRBoneID::BodyLeftScapula },
		{ "EOculusXRBoneID::BodyLeftArmUpper", (int64)EOculusXRBoneID::BodyLeftArmUpper },
		{ "EOculusXRBoneID::BodyLeftArmLower", (int64)EOculusXRBoneID::BodyLeftArmLower },
		{ "EOculusXRBoneID::BodyLeftHandWristTwist", (int64)EOculusXRBoneID::BodyLeftHandWristTwist },
		{ "EOculusXRBoneID::BodyRightShoulder", (int64)EOculusXRBoneID::BodyRightShoulder },
		{ "EOculusXRBoneID::BodyRightScapula", (int64)EOculusXRBoneID::BodyRightScapula },
		{ "EOculusXRBoneID::BodyRightArmUpper", (int64)EOculusXRBoneID::BodyRightArmUpper },
		{ "EOculusXRBoneID::BodyRightArmLower", (int64)EOculusXRBoneID::BodyRightArmLower },
		{ "EOculusXRBoneID::BodyRightHandWristTwist", (int64)EOculusXRBoneID::BodyRightHandWristTwist },
		{ "EOculusXRBoneID::BodyLeftHandPalm", (int64)EOculusXRBoneID::BodyLeftHandPalm },
		{ "EOculusXRBoneID::BodyLeftHandWrist", (int64)EOculusXRBoneID::BodyLeftHandWrist },
		{ "EOculusXRBoneID::BodyLeftHandThumbMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandThumbMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandThumbProximal", (int64)EOculusXRBoneID::BodyLeftHandThumbProximal },
		{ "EOculusXRBoneID::BodyLeftHandThumbDistal", (int64)EOculusXRBoneID::BodyLeftHandThumbDistal },
		{ "EOculusXRBoneID::BodyLeftHandThumbTip", (int64)EOculusXRBoneID::BodyLeftHandThumbTip },
		{ "EOculusXRBoneID::BodyLeftHandIndexMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandIndexMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandIndexProximal", (int64)EOculusXRBoneID::BodyLeftHandIndexProximal },
		{ "EOculusXRBoneID::BodyLeftHandIndexIntermediate", (int64)EOculusXRBoneID::BodyLeftHandIndexIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandIndexDistal", (int64)EOculusXRBoneID::BodyLeftHandIndexDistal },
		{ "EOculusXRBoneID::BodyLeftHandIndexTip", (int64)EOculusXRBoneID::BodyLeftHandIndexTip },
		{ "EOculusXRBoneID::BodyLeftHandMiddleMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandMiddleMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleProximal", (int64)EOculusXRBoneID::BodyLeftHandMiddleProximal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleIntermediate", (int64)EOculusXRBoneID::BodyLeftHandMiddleIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandMiddleDistal", (int64)EOculusXRBoneID::BodyLeftHandMiddleDistal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleTip", (int64)EOculusXRBoneID::BodyLeftHandMiddleTip },
		{ "EOculusXRBoneID::BodyLeftHandRingMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandRingMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandRingProximal", (int64)EOculusXRBoneID::BodyLeftHandRingProximal },
		{ "EOculusXRBoneID::BodyLeftHandRingIntermediate", (int64)EOculusXRBoneID::BodyLeftHandRingIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandRingDistal", (int64)EOculusXRBoneID::BodyLeftHandRingDistal },
		{ "EOculusXRBoneID::BodyLeftHandRingTip", (int64)EOculusXRBoneID::BodyLeftHandRingTip },
		{ "EOculusXRBoneID::BodyLeftHandLittleMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandLittleMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandLittleProximal", (int64)EOculusXRBoneID::BodyLeftHandLittleProximal },
		{ "EOculusXRBoneID::BodyLeftHandLittleIntermediate", (int64)EOculusXRBoneID::BodyLeftHandLittleIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandLittleDistal", (int64)EOculusXRBoneID::BodyLeftHandLittleDistal },
		{ "EOculusXRBoneID::BodyLeftHandLittleTip", (int64)EOculusXRBoneID::BodyLeftHandLittleTip },
		{ "EOculusXRBoneID::BodyRightHandPalm", (int64)EOculusXRBoneID::BodyRightHandPalm },
		{ "EOculusXRBoneID::BodyRightHandWrist", (int64)EOculusXRBoneID::BodyRightHandWrist },
		{ "EOculusXRBoneID::BodyRightHandThumbMetacarpal", (int64)EOculusXRBoneID::BodyRightHandThumbMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandThumbProximal", (int64)EOculusXRBoneID::BodyRightHandThumbProximal },
		{ "EOculusXRBoneID::BodyRightHandThumbDistal", (int64)EOculusXRBoneID::BodyRightHandThumbDistal },
		{ "EOculusXRBoneID::BodyRightHandThumbTip", (int64)EOculusXRBoneID::BodyRightHandThumbTip },
		{ "EOculusXRBoneID::BodyRightHandIndexMetacarpal", (int64)EOculusXRBoneID::BodyRightHandIndexMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandIndexProximal", (int64)EOculusXRBoneID::BodyRightHandIndexProximal },
		{ "EOculusXRBoneID::BodyRightHandIndexIntermediate", (int64)EOculusXRBoneID::BodyRightHandIndexIntermediate },
		{ "EOculusXRBoneID::BodyRightHandIndexDistal", (int64)EOculusXRBoneID::BodyRightHandIndexDistal },
		{ "EOculusXRBoneID::BodyRightHandIndexTip", (int64)EOculusXRBoneID::BodyRightHandIndexTip },
		{ "EOculusXRBoneID::BodyRightHandMiddleMetacarpal", (int64)EOculusXRBoneID::BodyRightHandMiddleMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandMiddleProximal", (int64)EOculusXRBoneID::BodyRightHandMiddleProximal },
		{ "EOculusXRBoneID::BodyRightHandMiddleIntermediate", (int64)EOculusXRBoneID::BodyRightHandMiddleIntermediate },
		{ "EOculusXRBoneID::BodyRightHandMiddleDistal", (int64)EOculusXRBoneID::BodyRightHandMiddleDistal },
		{ "EOculusXRBoneID::BodyRightHandMiddleTip", (int64)EOculusXRBoneID::BodyRightHandMiddleTip },
		{ "EOculusXRBoneID::BodyRightHandRingMetacarpal", (int64)EOculusXRBoneID::BodyRightHandRingMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandRingProximal", (int64)EOculusXRBoneID::BodyRightHandRingProximal },
		{ "EOculusXRBoneID::BodyRightHandRingIntermediate", (int64)EOculusXRBoneID::BodyRightHandRingIntermediate },
		{ "EOculusXRBoneID::BodyRightHandRingDistal", (int64)EOculusXRBoneID::BodyRightHandRingDistal },
		{ "EOculusXRBoneID::BodyRightHandRingTip", (int64)EOculusXRBoneID::BodyRightHandRingTip },
		{ "EOculusXRBoneID::BodyRightHandLittleMetacarpal", (int64)EOculusXRBoneID::BodyRightHandLittleMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandLittleProximal", (int64)EOculusXRBoneID::BodyRightHandLittleProximal },
		{ "EOculusXRBoneID::BodyRightHandLittleIntermediate", (int64)EOculusXRBoneID::BodyRightHandLittleIntermediate },
		{ "EOculusXRBoneID::BodyRightHandLittleDistal", (int64)EOculusXRBoneID::BodyRightHandLittleDistal },
		{ "EOculusXRBoneID::BodyRightHandLittleTip", (int64)EOculusXRBoneID::BodyRightHandLittleTip },
		{ "EOculusXRBoneID::BodyLeftUpperLeg", (int64)EOculusXRBoneID::BodyLeftUpperLeg },
		{ "EOculusXRBoneID::BodyLeftLowerLeg", (int64)EOculusXRBoneID::BodyLeftLowerLeg },
		{ "EOculusXRBoneID::BodyLeftFootAnkleTwist", (int64)EOculusXRBoneID::BodyLeftFootAnkleTwist },
		{ "EOculusXRBoneID::BodyLeftFootAnkle", (int64)EOculusXRBoneID::BodyLeftFootAnkle },
		{ "EOculusXRBoneID::BodyLeftFootSubtalar", (int64)EOculusXRBoneID::BodyLeftFootSubtalar },
		{ "EOculusXRBoneID::BodyLeftFootTransverse", (int64)EOculusXRBoneID::BodyLeftFootTransverse },
		{ "EOculusXRBoneID::BodyLeftFootBall", (int64)EOculusXRBoneID::BodyLeftFootBall },
		{ "EOculusXRBoneID::BodyRightUpperLeg", (int64)EOculusXRBoneID::BodyRightUpperLeg },
		{ "EOculusXRBoneID::BodyRightLowerLeg", (int64)EOculusXRBoneID::BodyRightLowerLeg },
		{ "EOculusXRBoneID::BodyRightFootAnkleTwist", (int64)EOculusXRBoneID::BodyRightFootAnkleTwist },
		{ "EOculusXRBoneID::BodyRightFootAnkle", (int64)EOculusXRBoneID::BodyRightFootAnkle },
		{ "EOculusXRBoneID::BodyRightFootSubtalar", (int64)EOculusXRBoneID::BodyRightFootSubtalar },
		{ "EOculusXRBoneID::BodyRightFootTransverse", (int64)EOculusXRBoneID::BodyRightFootTransverse },
		{ "EOculusXRBoneID::BodyRightFootBall", (int64)EOculusXRBoneID::BodyRightFootBall },
		{ "EOculusXRBoneID::COUNT", (int64)EOculusXRBoneID::COUNT },
		{ "EOculusXRBoneID::None", (int64)EOculusXRBoneID::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRBoneID",
	"EOculusXRBoneID",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRBoneID;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRBoneID.OuterSingleton)
		{
			ZRIE_EOculusXRBoneID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRBoneID"));
		}
		return ZRIE_EOculusXRBoneID.OuterSingleton;
	}
	if (!ZRIE_EOculusXRBoneID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRBoneID.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRBoneID.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRBoneID *************************************************************

// ********** Begin ScriptStruct FOculusXRBodyJoint ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRBodyJoint>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRBodyJoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Orientation will be deprecated, please use OrientationQuat instead." },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationQuat_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRBodyJoint constinit property declarations ****************
	static void NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXRBodyJoint*)Obj)->bIsValid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrientationQuat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRBodyJoint constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodyJoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRBodyJoint Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRBodyJoint), &UHT_STATICS::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyJoint, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OrientationQuat = { "OrientationQuat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyJoint, OrientationQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationQuat_MetaData), NewProp_OrientationQuat_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyJoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrientationQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRBodyJoint Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRBodyJoint",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRBodyJoint>(),
	alignof(FOculusXRBodyJoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRBodyJoint;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyJoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRBodyJoint.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRBodyJoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodyJoint, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRBodyJoint"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRBodyJoint.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRBodyJoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRBodyJoint.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRBodyJoint.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRBodyJoint **************************************************

// ********** Begin ScriptStruct FOculusXRBodyState ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRBodyState_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRBodyState>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRBodyState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonChangedCount_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Joints_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRBodyState constinit property declarations ****************
	static void NewProp_IsActive_SetBit(void* Obj)
	{
		((FOculusXRBodyState*)Obj)->IsActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonChangedCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Joints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Joints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRBodyState constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodyState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRBodyState Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRBodyState), &UHT_STATICS::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActive_MetaData), NewProp_IsActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyState, Confidence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Confidence_MetaData), NewProp_Confidence_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SkeletonChangedCount = { "SkeletonChangedCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyState, SkeletonChangedCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonChangedCount_MetaData), NewProp_SkeletonChangedCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyState, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Joints_Inner = { "Joints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRBodyJoint, METADATA_PARAMS(0, nullptr) }; // 4f812651ff575f04c9ce3a6311c08a2dbad505c3
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Joints = { "Joints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyState, Joints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Joints_MetaData), NewProp_Joints_MetaData) }; // 4f812651ff575f04c9ce3a6311c08a2dbad505c3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Confidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonChangedCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Joints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Joints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRBodyState Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRBodyState",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRBodyState>(),
	alignof(FOculusXRBodyState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRBodyState;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRBodyState.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRBodyState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodyState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRBodyState"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRBodyState.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRBodyState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRBodyState.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRBodyState.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRBodyState **************************************************

// ********** Begin ScriptStruct FOculusXRBodySkeletonBone *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRBodySkeletonBone_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRBodySkeletonBone>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRBodySkeletonBone); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Orientation will be deprecated, please use OrientationQuat instead." },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationQuat_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentBoneIndex_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRBodySkeletonBone constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrientationQuat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParentBoneIndex_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParentBoneIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRBodySkeletonBone constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodySkeletonBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRBodySkeletonBone Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeletonBone, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OrientationQuat = { "OrientationQuat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeletonBone, OrientationQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationQuat_MetaData), NewProp_OrientationQuat_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeletonBone, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeletonBone, BoneId), Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 576a3bff3a4ec47021e6905217f95ba0b04d5736
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ParentBoneIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ParentBoneIndex = { "ParentBoneIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeletonBone, ParentBoneIndex), Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentBoneIndex_MetaData), NewProp_ParentBoneIndex_MetaData) }; // 576a3bff3a4ec47021e6905217f95ba0b04d5736
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrientationQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentBoneIndex_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentBoneIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRBodySkeletonBone Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRBodySkeletonBone",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRBodySkeletonBone>(),
	alignof(FOculusXRBodySkeletonBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonBone;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodySkeletonBone(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonBone.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodySkeletonBone, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRBodySkeletonBone"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonBone.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonBone.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonBone.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRBodySkeletonBone *******************************************

// ********** Begin ScriptStruct FOculusXRBodySkeleton *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRBodySkeleton_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRBodySkeleton>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRBodySkeleton); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBones_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRBodySkeleton constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRBodySkeleton constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodySkeleton>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRBodySkeleton Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumBones = { "NumBones", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeleton, NumBones), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBones_MetaData), NewProp_NumBones_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRBodySkeletonBone, METADATA_PARAMS(0, nullptr) }; // 4516c501deeded03783a2c33e98560b755026f4b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeleton, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bones_MetaData), NewProp_Bones_MetaData) }; // 4516c501deeded03783a2c33e98560b755026f4b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bones,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRBodySkeleton Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRBodySkeleton",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRBodySkeleton>(),
	alignof(FOculusXRBodySkeleton),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRBodySkeleton;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodySkeleton(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRBodySkeleton.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRBodySkeleton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodySkeleton, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRBodySkeleton"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRBodySkeleton.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRBodySkeleton.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRBodySkeleton.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRBodySkeleton.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRBodySkeleton ***********************************************

// ********** Begin ScriptStruct FOculusXRBodySkeletonState ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRBodySkeletonState_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRBodySkeletonState>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRBodySkeletonState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyState_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonState_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRBodySkeletonState constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRBodySkeletonState constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodySkeletonState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRBodySkeletonState Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BodyState = { "BodyState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeletonState, BodyState), Z_Construct_UScriptStruct_FOculusXRBodyState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyState_MetaData), NewProp_BodyState_MetaData) }; // dfaf27fde3436a275a549da3aedb55adda3cf6e7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SkeletonState = { "SkeletonState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodySkeletonState, SkeletonState), Z_Construct_UScriptStruct_FOculusXRBodySkeleton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonState_MetaData), NewProp_SkeletonState_MetaData) }; // ac3a7e6a73d9145037937d0bc63739cdc17b2dd6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BodyState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRBodySkeletonState Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRBodySkeletonState",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRBodySkeletonState>(),
	alignof(FOculusXRBodySkeletonState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonState;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodySkeletonState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonState.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodySkeletonState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRBodySkeletonState"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonState.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonState.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonState.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRBodySkeletonState ******************************************

// ********** Begin Enum EFaceTrackingDataSource ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EFaceTrackingDataSource>()
{
	return Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Audio.DisplayName", "Audio" },
		{ "Audio.Name", "EFaceTrackingDataSource::Audio" },
		{ "BlueprintType", "true" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EFaceTrackingDataSource::MAX" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Visual.DisplayName", "Visual" },
		{ "Visual.Name", "EFaceTrackingDataSource::Visual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFaceTrackingDataSource::Visual", (int64)EFaceTrackingDataSource::Visual },
		{ "EFaceTrackingDataSource::Audio", (int64)EFaceTrackingDataSource::Audio },
		{ "EFaceTrackingDataSource::MAX", (int64)EFaceTrackingDataSource::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EFaceTrackingDataSource",
	"EFaceTrackingDataSource",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFaceTrackingDataSource;
UEnum* Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFaceTrackingDataSource.OuterSingleton)
		{
			ZRIE_EFaceTrackingDataSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EFaceTrackingDataSource"));
		}
		return ZRIE_EFaceTrackingDataSource.OuterSingleton;
	}
	if (!ZRIE_EFaceTrackingDataSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFaceTrackingDataSource.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFaceTrackingDataSource.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFaceTrackingDataSource *****************************************************

// ********** Begin Enum EOculusXRFaceExpression ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRFaceExpression>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "BrowLowererL.Comment", "// Removed invalid to make this supported as a uint8 enum class\n" },
		{ "BrowLowererL.Name", "EOculusXRFaceExpression::BrowLowererL" },
		{ "BrowLowererL.ToolTip", "Removed invalid to make this supported as a uint8 enum class" },
		{ "BrowLowererR.Name", "EOculusXRFaceExpression::BrowLowererR" },
		{ "CheekPuffL.Name", "EOculusXRFaceExpression::CheekPuffL" },
		{ "CheekPuffR.Name", "EOculusXRFaceExpression::CheekPuffR" },
		{ "CheekRaiserL.Name", "EOculusXRFaceExpression::CheekRaiserL" },
		{ "CheekRaiserR.Name", "EOculusXRFaceExpression::CheekRaiserR" },
		{ "CheekSuckL.Name", "EOculusXRFaceExpression::CheekSuckL" },
		{ "CheekSuckR.Name", "EOculusXRFaceExpression::CheekSuckR" },
		{ "ChinRaiserB.Name", "EOculusXRFaceExpression::ChinRaiserB" },
		{ "ChinRaiserT.Name", "EOculusXRFaceExpression::ChinRaiserT" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EOculusXRFaceExpression::COUNT" },
		{ "DimplerL.Name", "EOculusXRFaceExpression::DimplerL" },
		{ "DimplerR.Name", "EOculusXRFaceExpression::DimplerR" },
		{ "EyesClosedL.Name", "EOculusXRFaceExpression::EyesClosedL" },
		{ "EyesClosedR.Name", "EOculusXRFaceExpression::EyesClosedR" },
		{ "EyesLookDownL.Name", "EOculusXRFaceExpression::EyesLookDownL" },
		{ "EyesLookDownR.Name", "EOculusXRFaceExpression::EyesLookDownR" },
		{ "EyesLookLeftL.Name", "EOculusXRFaceExpression::EyesLookLeftL" },
		{ "EyesLookLeftR.Name", "EOculusXRFaceExpression::EyesLookLeftR" },
		{ "EyesLookRightL.Name", "EOculusXRFaceExpression::EyesLookRightL" },
		{ "EyesLookRightR.Name", "EOculusXRFaceExpression::EyesLookRightR" },
		{ "EyesLookUpL.Name", "EOculusXRFaceExpression::EyesLookUpL" },
		{ "EyesLookUpR.Name", "EOculusXRFaceExpression::EyesLookUpR" },
		{ "InnerBrowRaiserL.Name", "EOculusXRFaceExpression::InnerBrowRaiserL" },
		{ "InnerBrowRaiserR.Name", "EOculusXRFaceExpression::InnerBrowRaiserR" },
		{ "JawDrop.Name", "EOculusXRFaceExpression::JawDrop" },
		{ "JawSidewaysLeft.Name", "EOculusXRFaceExpression::JawSidewaysLeft" },
		{ "JawSidewaysRight.Name", "EOculusXRFaceExpression::JawSidewaysRight" },
		{ "JawThrust.Name", "EOculusXRFaceExpression::JawThrust" },
		{ "LidTightenerL.Name", "EOculusXRFaceExpression::LidTightenerL" },
		{ "LidTightenerR.Name", "EOculusXRFaceExpression::LidTightenerR" },
		{ "LipCornerDepressorL.Name", "EOculusXRFaceExpression::LipCornerDepressorL" },
		{ "LipCornerDepressorR.Name", "EOculusXRFaceExpression::LipCornerDepressorR" },
		{ "LipCornerPullerL.Name", "EOculusXRFaceExpression::LipCornerPullerL" },
		{ "LipCornerPullerR.Name", "EOculusXRFaceExpression::LipCornerPullerR" },
		{ "LipFunnelerLB.Name", "EOculusXRFaceExpression::LipFunnelerLB" },
		{ "LipFunnelerLT.Name", "EOculusXRFaceExpression::LipFunnelerLT" },
		{ "LipFunnelerRB.Name", "EOculusXRFaceExpression::LipFunnelerRB" },
		{ "LipFunnelerRT.Name", "EOculusXRFaceExpression::LipFunnelerRT" },
		{ "LipPressorL.Name", "EOculusXRFaceExpression::LipPressorL" },
		{ "LipPressorR.Name", "EOculusXRFaceExpression::LipPressorR" },
		{ "LipPuckerL.Name", "EOculusXRFaceExpression::LipPuckerL" },
		{ "LipPuckerR.Name", "EOculusXRFaceExpression::LipPuckerR" },
		{ "LipsToward.Name", "EOculusXRFaceExpression::LipsToward" },
		{ "LipStretcherL.Name", "EOculusXRFaceExpression::LipStretcherL" },
		{ "LipStretcherR.Name", "EOculusXRFaceExpression::LipStretcherR" },
		{ "LipSuckLB.Name", "EOculusXRFaceExpression::LipSuckLB" },
		{ "LipSuckLT.Name", "EOculusXRFaceExpression::LipSuckLT" },
		{ "LipSuckRB.Name", "EOculusXRFaceExpression::LipSuckRB" },
		{ "LipSuckRT.Name", "EOculusXRFaceExpression::LipSuckRT" },
		{ "LipTightenerL.Name", "EOculusXRFaceExpression::LipTightenerL" },
		{ "LipTightenerR.Name", "EOculusXRFaceExpression::LipTightenerR" },
		{ "LowerLipDepressorL.Name", "EOculusXRFaceExpression::LowerLipDepressorL" },
		{ "LowerLipDepressorR.Name", "EOculusXRFaceExpression::LowerLipDepressorR" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "MouthLeft.Name", "EOculusXRFaceExpression::MouthLeft" },
		{ "MouthRight.Name", "EOculusXRFaceExpression::MouthRight" },
		{ "NoseWrinklerL.Name", "EOculusXRFaceExpression::NoseWrinklerL" },
		{ "NoseWrinklerR.Name", "EOculusXRFaceExpression::NoseWrinklerR" },
		{ "OuterBrowRaiserL.Name", "EOculusXRFaceExpression::OuterBrowRaiserL" },
		{ "OuterBrowRaiserR.Name", "EOculusXRFaceExpression::OuterBrowRaiserR" },
		{ "TongueBackDorsalVelar.Name", "EOculusXRFaceExpression::TongueBackDorsalVelar" },
		{ "TongueFrontDorsalPalate.Name", "EOculusXRFaceExpression::TongueFrontDorsalPalate" },
		{ "TongueMidDorsalPalate.Name", "EOculusXRFaceExpression::TongueMidDorsalPalate" },
		{ "TongueOut.Name", "EOculusXRFaceExpression::TongueOut" },
		{ "TongueRetreat.Name", "EOculusXRFaceExpression::TongueRetreat" },
		{ "TongueTipAlveolar.Name", "EOculusXRFaceExpression::TongueTipAlveolar" },
		{ "TongueTipInterdental.Name", "EOculusXRFaceExpression::TongueTipInterdental" },
		{ "UpperLidRaiserL.Name", "EOculusXRFaceExpression::UpperLidRaiserL" },
		{ "UpperLidRaiserR.Name", "EOculusXRFaceExpression::UpperLidRaiserR" },
		{ "UpperLipRaiserL.Name", "EOculusXRFaceExpression::UpperLipRaiserL" },
		{ "UpperLipRaiserR.Name", "EOculusXRFaceExpression::UpperLipRaiserR" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRFaceExpression::BrowLowererL", (int64)EOculusXRFaceExpression::BrowLowererL },
		{ "EOculusXRFaceExpression::BrowLowererR", (int64)EOculusXRFaceExpression::BrowLowererR },
		{ "EOculusXRFaceExpression::CheekPuffL", (int64)EOculusXRFaceExpression::CheekPuffL },
		{ "EOculusXRFaceExpression::CheekPuffR", (int64)EOculusXRFaceExpression::CheekPuffR },
		{ "EOculusXRFaceExpression::CheekRaiserL", (int64)EOculusXRFaceExpression::CheekRaiserL },
		{ "EOculusXRFaceExpression::CheekRaiserR", (int64)EOculusXRFaceExpression::CheekRaiserR },
		{ "EOculusXRFaceExpression::CheekSuckL", (int64)EOculusXRFaceExpression::CheekSuckL },
		{ "EOculusXRFaceExpression::CheekSuckR", (int64)EOculusXRFaceExpression::CheekSuckR },
		{ "EOculusXRFaceExpression::ChinRaiserB", (int64)EOculusXRFaceExpression::ChinRaiserB },
		{ "EOculusXRFaceExpression::ChinRaiserT", (int64)EOculusXRFaceExpression::ChinRaiserT },
		{ "EOculusXRFaceExpression::DimplerL", (int64)EOculusXRFaceExpression::DimplerL },
		{ "EOculusXRFaceExpression::DimplerR", (int64)EOculusXRFaceExpression::DimplerR },
		{ "EOculusXRFaceExpression::EyesClosedL", (int64)EOculusXRFaceExpression::EyesClosedL },
		{ "EOculusXRFaceExpression::EyesClosedR", (int64)EOculusXRFaceExpression::EyesClosedR },
		{ "EOculusXRFaceExpression::EyesLookDownL", (int64)EOculusXRFaceExpression::EyesLookDownL },
		{ "EOculusXRFaceExpression::EyesLookDownR", (int64)EOculusXRFaceExpression::EyesLookDownR },
		{ "EOculusXRFaceExpression::EyesLookLeftL", (int64)EOculusXRFaceExpression::EyesLookLeftL },
		{ "EOculusXRFaceExpression::EyesLookLeftR", (int64)EOculusXRFaceExpression::EyesLookLeftR },
		{ "EOculusXRFaceExpression::EyesLookRightL", (int64)EOculusXRFaceExpression::EyesLookRightL },
		{ "EOculusXRFaceExpression::EyesLookRightR", (int64)EOculusXRFaceExpression::EyesLookRightR },
		{ "EOculusXRFaceExpression::EyesLookUpL", (int64)EOculusXRFaceExpression::EyesLookUpL },
		{ "EOculusXRFaceExpression::EyesLookUpR", (int64)EOculusXRFaceExpression::EyesLookUpR },
		{ "EOculusXRFaceExpression::InnerBrowRaiserL", (int64)EOculusXRFaceExpression::InnerBrowRaiserL },
		{ "EOculusXRFaceExpression::InnerBrowRaiserR", (int64)EOculusXRFaceExpression::InnerBrowRaiserR },
		{ "EOculusXRFaceExpression::JawDrop", (int64)EOculusXRFaceExpression::JawDrop },
		{ "EOculusXRFaceExpression::JawSidewaysLeft", (int64)EOculusXRFaceExpression::JawSidewaysLeft },
		{ "EOculusXRFaceExpression::JawSidewaysRight", (int64)EOculusXRFaceExpression::JawSidewaysRight },
		{ "EOculusXRFaceExpression::JawThrust", (int64)EOculusXRFaceExpression::JawThrust },
		{ "EOculusXRFaceExpression::LidTightenerL", (int64)EOculusXRFaceExpression::LidTightenerL },
		{ "EOculusXRFaceExpression::LidTightenerR", (int64)EOculusXRFaceExpression::LidTightenerR },
		{ "EOculusXRFaceExpression::LipCornerDepressorL", (int64)EOculusXRFaceExpression::LipCornerDepressorL },
		{ "EOculusXRFaceExpression::LipCornerDepressorR", (int64)EOculusXRFaceExpression::LipCornerDepressorR },
		{ "EOculusXRFaceExpression::LipCornerPullerL", (int64)EOculusXRFaceExpression::LipCornerPullerL },
		{ "EOculusXRFaceExpression::LipCornerPullerR", (int64)EOculusXRFaceExpression::LipCornerPullerR },
		{ "EOculusXRFaceExpression::LipFunnelerLB", (int64)EOculusXRFaceExpression::LipFunnelerLB },
		{ "EOculusXRFaceExpression::LipFunnelerLT", (int64)EOculusXRFaceExpression::LipFunnelerLT },
		{ "EOculusXRFaceExpression::LipFunnelerRB", (int64)EOculusXRFaceExpression::LipFunnelerRB },
		{ "EOculusXRFaceExpression::LipFunnelerRT", (int64)EOculusXRFaceExpression::LipFunnelerRT },
		{ "EOculusXRFaceExpression::LipPressorL", (int64)EOculusXRFaceExpression::LipPressorL },
		{ "EOculusXRFaceExpression::LipPressorR", (int64)EOculusXRFaceExpression::LipPressorR },
		{ "EOculusXRFaceExpression::LipPuckerL", (int64)EOculusXRFaceExpression::LipPuckerL },
		{ "EOculusXRFaceExpression::LipPuckerR", (int64)EOculusXRFaceExpression::LipPuckerR },
		{ "EOculusXRFaceExpression::LipStretcherL", (int64)EOculusXRFaceExpression::LipStretcherL },
		{ "EOculusXRFaceExpression::LipStretcherR", (int64)EOculusXRFaceExpression::LipStretcherR },
		{ "EOculusXRFaceExpression::LipSuckLB", (int64)EOculusXRFaceExpression::LipSuckLB },
		{ "EOculusXRFaceExpression::LipSuckLT", (int64)EOculusXRFaceExpression::LipSuckLT },
		{ "EOculusXRFaceExpression::LipSuckRB", (int64)EOculusXRFaceExpression::LipSuckRB },
		{ "EOculusXRFaceExpression::LipSuckRT", (int64)EOculusXRFaceExpression::LipSuckRT },
		{ "EOculusXRFaceExpression::LipTightenerL", (int64)EOculusXRFaceExpression::LipTightenerL },
		{ "EOculusXRFaceExpression::LipTightenerR", (int64)EOculusXRFaceExpression::LipTightenerR },
		{ "EOculusXRFaceExpression::LipsToward", (int64)EOculusXRFaceExpression::LipsToward },
		{ "EOculusXRFaceExpression::LowerLipDepressorL", (int64)EOculusXRFaceExpression::LowerLipDepressorL },
		{ "EOculusXRFaceExpression::LowerLipDepressorR", (int64)EOculusXRFaceExpression::LowerLipDepressorR },
		{ "EOculusXRFaceExpression::MouthLeft", (int64)EOculusXRFaceExpression::MouthLeft },
		{ "EOculusXRFaceExpression::MouthRight", (int64)EOculusXRFaceExpression::MouthRight },
		{ "EOculusXRFaceExpression::NoseWrinklerL", (int64)EOculusXRFaceExpression::NoseWrinklerL },
		{ "EOculusXRFaceExpression::NoseWrinklerR", (int64)EOculusXRFaceExpression::NoseWrinklerR },
		{ "EOculusXRFaceExpression::OuterBrowRaiserL", (int64)EOculusXRFaceExpression::OuterBrowRaiserL },
		{ "EOculusXRFaceExpression::OuterBrowRaiserR", (int64)EOculusXRFaceExpression::OuterBrowRaiserR },
		{ "EOculusXRFaceExpression::UpperLidRaiserL", (int64)EOculusXRFaceExpression::UpperLidRaiserL },
		{ "EOculusXRFaceExpression::UpperLidRaiserR", (int64)EOculusXRFaceExpression::UpperLidRaiserR },
		{ "EOculusXRFaceExpression::UpperLipRaiserL", (int64)EOculusXRFaceExpression::UpperLipRaiserL },
		{ "EOculusXRFaceExpression::UpperLipRaiserR", (int64)EOculusXRFaceExpression::UpperLipRaiserR },
		{ "EOculusXRFaceExpression::TongueTipInterdental", (int64)EOculusXRFaceExpression::TongueTipInterdental },
		{ "EOculusXRFaceExpression::TongueTipAlveolar", (int64)EOculusXRFaceExpression::TongueTipAlveolar },
		{ "EOculusXRFaceExpression::TongueFrontDorsalPalate", (int64)EOculusXRFaceExpression::TongueFrontDorsalPalate },
		{ "EOculusXRFaceExpression::TongueMidDorsalPalate", (int64)EOculusXRFaceExpression::TongueMidDorsalPalate },
		{ "EOculusXRFaceExpression::TongueBackDorsalVelar", (int64)EOculusXRFaceExpression::TongueBackDorsalVelar },
		{ "EOculusXRFaceExpression::TongueOut", (int64)EOculusXRFaceExpression::TongueOut },
		{ "EOculusXRFaceExpression::TongueRetreat", (int64)EOculusXRFaceExpression::TongueRetreat },
		{ "EOculusXRFaceExpression::COUNT", (int64)EOculusXRFaceExpression::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRFaceExpression",
	"EOculusXRFaceExpression",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRFaceExpression;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRFaceExpression.OuterSingleton)
		{
			ZRIE_EOculusXRFaceExpression.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRFaceExpression"));
		}
		return ZRIE_EOculusXRFaceExpression.OuterSingleton;
	}
	if (!ZRIE_EOculusXRFaceExpression.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRFaceExpression.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRFaceExpression.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRFaceExpression *****************************************************

// ********** Begin Enum EOculusXRFaceConfidence ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRFaceConfidence>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Name", "EOculusXRFaceConfidence::COUNT" },
		{ "Lower.Name", "EOculusXRFaceConfidence::Lower" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Upper.Name", "EOculusXRFaceConfidence::Upper" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRFaceConfidence::Lower", (int64)EOculusXRFaceConfidence::Lower },
		{ "EOculusXRFaceConfidence::Upper", (int64)EOculusXRFaceConfidence::Upper },
		{ "EOculusXRFaceConfidence::COUNT", (int64)EOculusXRFaceConfidence::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRFaceConfidence",
	"EOculusXRFaceConfidence",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRFaceConfidence;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRFaceConfidence.OuterSingleton)
		{
			ZRIE_EOculusXRFaceConfidence.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRFaceConfidence"));
		}
		return ZRIE_EOculusXRFaceConfidence.OuterSingleton;
	}
	if (!ZRIE_EOculusXRFaceConfidence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRFaceConfidence.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRFaceConfidence.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRFaceConfidence *****************************************************

// ********** Begin ScriptStruct FOculusXRFaceState ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRFaceState_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRFaceState>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRFaceState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionWeights_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionWeightConfidences_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEyeFollowingBlendshapesValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRFaceState constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpressionWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpressionWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpressionWeightConfidences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpressionWeightConfidences;
	static void NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXRFaceState*)Obj)->bIsValid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static void NewProp_bIsEyeFollowingBlendshapesValid_SetBit(void* Obj)
	{
		((FOculusXRFaceState*)Obj)->bIsEyeFollowingBlendshapesValid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEyeFollowingBlendshapesValid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRFaceState constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRFaceState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRFaceState Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ExpressionWeights_Inner = { "ExpressionWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExpressionWeights = { "ExpressionWeights", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceState, ExpressionWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionWeights_MetaData), NewProp_ExpressionWeights_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ExpressionWeightConfidences_Inner = { "ExpressionWeightConfidences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExpressionWeightConfidences = { "ExpressionWeightConfidences", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceState, ExpressionWeightConfidences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionWeightConfidences_MetaData), NewProp_ExpressionWeightConfidences_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRFaceState), &UHT_STATICS::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsEyeFollowingBlendshapesValid = { "bIsEyeFollowingBlendshapesValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRFaceState), &UHT_STATICS::NewProp_bIsEyeFollowingBlendshapesValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEyeFollowingBlendshapesValid_MetaData), NewProp_bIsEyeFollowingBlendshapesValid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceState, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DataSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceState, DataSource), Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSource_MetaData), NewProp_DataSource_MetaData) }; // d7ea6638f9f87c0ad3d85bc1d2646d7083143e6f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionWeightConfidences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionWeightConfidences,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsEyeFollowingBlendshapesValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DataSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DataSource,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRFaceState Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRFaceState",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRFaceState>(),
	alignof(FOculusXRFaceState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRFaceState;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRFaceState.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRFaceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRFaceState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRFaceState"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRFaceState.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRFaceState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRFaceState.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRFaceState.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRFaceState **************************************************

// ********** Begin Enum EOculusXRFaceVisemesExpression ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceVisemesExpression_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRFaceVisemesExpression>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceVisemesExpression(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AA.Name", "EOculusXRFaceVisemesExpression::AA" },
		{ "BlueprintType", "true" },
		{ "CH.Name", "EOculusXRFaceVisemesExpression::CH" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EOculusXRFaceVisemesExpression::COUNT" },
		{ "DD.Name", "EOculusXRFaceVisemesExpression::DD" },
		{ "E.Name", "EOculusXRFaceVisemesExpression::E" },
		{ "FF.Name", "EOculusXRFaceVisemesExpression::FF" },
		{ "IH.Name", "EOculusXRFaceVisemesExpression::IH" },
		{ "KK.Name", "EOculusXRFaceVisemesExpression::KK" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "NN.Name", "EOculusXRFaceVisemesExpression::NN" },
		{ "OH.Name", "EOculusXRFaceVisemesExpression::OH" },
		{ "OU.Name", "EOculusXRFaceVisemesExpression::OU" },
		{ "PP.Name", "EOculusXRFaceVisemesExpression::PP" },
		{ "RR.Name", "EOculusXRFaceVisemesExpression::RR" },
		{ "SIL.Name", "EOculusXRFaceVisemesExpression::SIL" },
		{ "SS.Name", "EOculusXRFaceVisemesExpression::SS" },
		{ "TH.Name", "EOculusXRFaceVisemesExpression::TH" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRFaceVisemesExpression::SIL", (int64)EOculusXRFaceVisemesExpression::SIL },
		{ "EOculusXRFaceVisemesExpression::PP", (int64)EOculusXRFaceVisemesExpression::PP },
		{ "EOculusXRFaceVisemesExpression::FF", (int64)EOculusXRFaceVisemesExpression::FF },
		{ "EOculusXRFaceVisemesExpression::TH", (int64)EOculusXRFaceVisemesExpression::TH },
		{ "EOculusXRFaceVisemesExpression::DD", (int64)EOculusXRFaceVisemesExpression::DD },
		{ "EOculusXRFaceVisemesExpression::KK", (int64)EOculusXRFaceVisemesExpression::KK },
		{ "EOculusXRFaceVisemesExpression::CH", (int64)EOculusXRFaceVisemesExpression::CH },
		{ "EOculusXRFaceVisemesExpression::SS", (int64)EOculusXRFaceVisemesExpression::SS },
		{ "EOculusXRFaceVisemesExpression::NN", (int64)EOculusXRFaceVisemesExpression::NN },
		{ "EOculusXRFaceVisemesExpression::RR", (int64)EOculusXRFaceVisemesExpression::RR },
		{ "EOculusXRFaceVisemesExpression::AA", (int64)EOculusXRFaceVisemesExpression::AA },
		{ "EOculusXRFaceVisemesExpression::E", (int64)EOculusXRFaceVisemesExpression::E },
		{ "EOculusXRFaceVisemesExpression::IH", (int64)EOculusXRFaceVisemesExpression::IH },
		{ "EOculusXRFaceVisemesExpression::OH", (int64)EOculusXRFaceVisemesExpression::OH },
		{ "EOculusXRFaceVisemesExpression::OU", (int64)EOculusXRFaceVisemesExpression::OU },
		{ "EOculusXRFaceVisemesExpression::COUNT", (int64)EOculusXRFaceVisemesExpression::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRFaceVisemesExpression",
	"EOculusXRFaceVisemesExpression",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRFaceVisemesExpression;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceVisemesExpression(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRFaceVisemesExpression.OuterSingleton)
		{
			ZRIE_EOculusXRFaceVisemesExpression.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceVisemesExpression, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRFaceVisemesExpression"));
		}
		return ZRIE_EOculusXRFaceVisemesExpression.OuterSingleton;
	}
	if (!ZRIE_EOculusXRFaceVisemesExpression.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRFaceVisemesExpression.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRFaceVisemesExpression.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRFaceVisemesExpression **********************************************

// ********** Begin ScriptStruct FOculusXRFaceVisemesState *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRFaceVisemesState_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRFaceVisemesState>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRFaceVisemesState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionVisemeWeights_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRFaceVisemesState constinit property declarations *********
	static void NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXRFaceVisemesState*)Obj)->bIsValid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpressionVisemeWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpressionVisemeWeights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRFaceVisemesState constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRFaceVisemesState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRFaceVisemesState Property Definitions ********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRFaceVisemesState), &UHT_STATICS::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceVisemesState, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ExpressionVisemeWeights_Inner = { "ExpressionVisemeWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExpressionVisemeWeights = { "ExpressionVisemeWeights", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceVisemesState, ExpressionVisemeWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionVisemeWeights_MetaData), NewProp_ExpressionVisemeWeights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionVisemeWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpressionVisemeWeights,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRFaceVisemesState Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRFaceVisemesState",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRFaceVisemesState>(),
	alignof(FOculusXRFaceVisemesState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRFaceVisemesState;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceVisemesState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRFaceVisemesState.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRFaceVisemesState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRFaceVisemesState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRFaceVisemesState"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRFaceVisemesState.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRFaceVisemesState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRFaceVisemesState.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRFaceVisemesState.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRFaceVisemesState *******************************************

// ********** Begin ScriptStruct FOculusXRFaceExpressionModifier ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRFaceExpressionModifier>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRFaceExpressionModifier); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceExpressions_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRFaceExpressionModifier constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_FaceExpressions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceExpressions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FaceExpressions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRFaceExpressionModifier constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRFaceExpressionModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRFaceExpressionModifier Property Definitions **************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FaceExpressions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FaceExpressions_Inner = { "FaceExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, METADATA_PARAMS(0, nullptr) }; // c38b43502d2c5b7fa15270355e81daf3b92ca456
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FaceExpressions = { "FaceExpressions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceExpressionModifier, FaceExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceExpressions_MetaData), NewProp_FaceExpressions_MetaData) }; // c38b43502d2c5b7fa15270355e81daf3b92ca456
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceExpressionModifier, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceExpressionModifier, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceExpressionModifier, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceExpressions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceExpressions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceExpressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Multiplier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRFaceExpressionModifier Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRFaceExpressionModifier",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRFaceExpressionModifier>(),
	alignof(FOculusXRFaceExpressionModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRFaceExpressionModifier;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRFaceExpressionModifier.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRFaceExpressionModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXRFaceExpressionModifier"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRFaceExpressionModifier.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRFaceExpressionModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRFaceExpressionModifier.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRFaceExpressionModifier.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRFaceExpressionModifier *************************************

// ********** Begin Enum EOculusXREye **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXREye>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXREye(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Name", "EOculusXREye::COUNT" },
		{ "Left.Name", "EOculusXREye::Left" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Right.Name", "EOculusXREye::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXREye::Left", (int64)EOculusXREye::Left },
		{ "EOculusXREye::Right", (int64)EOculusXREye::Right },
		{ "EOculusXREye::COUNT", (int64)EOculusXREye::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXREye",
	"EOculusXREye",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXREye;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXREye(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXREye.OuterSingleton)
		{
			ZRIE_EOculusXREye.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXREye, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXREye"));
		}
		return ZRIE_EOculusXREye.OuterSingleton;
	}
	if (!ZRIE_EOculusXREye.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXREye.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXREye.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXREye ****************************************************************

// ********** Begin ScriptStruct FOculusXREyeGazeState *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXREyeGazeState>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXREyeGazeState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXREyeGazeState constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
	static void NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXREyeGazeState*)Obj)->bIsValid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXREyeGazeState constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXREyeGazeState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXREyeGazeState Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazeState, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazeState, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazeState, Confidence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Confidence_MetaData), NewProp_Confidence_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXREyeGazeState), &UHT_STATICS::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Confidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsValid,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXREyeGazeState Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXREyeGazeState",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXREyeGazeState>(),
	alignof(FOculusXREyeGazeState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXREyeGazeState;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazeState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXREyeGazeState.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXREyeGazeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXREyeGazeState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXREyeGazeState"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXREyeGazeState.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXREyeGazeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXREyeGazeState.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXREyeGazeState.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXREyeGazeState ***********************************************

// ********** Begin ScriptStruct FOculusXREyeGazesState ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXREyeGazesState>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXREyeGazesState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeGazes_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXREyeGazesState constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EyeGazes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EyeGazes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXREyeGazesState constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXREyeGazesState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXREyeGazesState Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EyeGazes_Inner = { "EyeGazes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXREyeGazeState, METADATA_PARAMS(0, nullptr) }; // 0c54996372b2d2ca9b0f7d7fc1e86b9ab5657e99
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EyeGazes = { "EyeGazes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazesState, EyeGazes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeGazes_MetaData), NewProp_EyeGazes_MetaData) }; // 0c54996372b2d2ca9b0f7d7fc1e86b9ab5657e99
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazesState, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeGazes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeGazes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXREyeGazesState Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXREyeGazesState",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXREyeGazesState>(),
	alignof(FOculusXREyeGazesState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXREyeGazesState;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXREyeGazesState.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXREyeGazesState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXREyeGazesState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("OculusXREyeGazesState"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXREyeGazesState.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXREyeGazesState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXREyeGazesState.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXREyeGazesState.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXREyeGazesState **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h__Script_OculusXRMovement_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet, TEXT("EOculusXRBodyJointSet"), &ZRIE_EOculusXRBodyJointSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3846661765U) },
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity, TEXT("EOculusXRBodyTrackingFidelity"), &ZRIE_EOculusXRBodyTrackingFidelity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1015708359U) },
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, TEXT("EOculusXRBoneID"), &ZRIE_EOculusXRBoneID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1466579967U) },
		{ Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource, TEXT("EFaceTrackingDataSource"), &ZRIE_EFaceTrackingDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3622463032U) },
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, TEXT("EOculusXRFaceExpression"), &ZRIE_EOculusXRFaceExpression, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3280683856U) },
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence, TEXT("EOculusXRFaceConfidence"), &ZRIE_EOculusXRFaceConfidence, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4201593946U) },
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceVisemesExpression, TEXT("EOculusXRFaceVisemesExpression"), &ZRIE_EOculusXRFaceVisemesExpression, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2404936981U) },
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXREye, TEXT("EOculusXREye"), &ZRIE_EOculusXREye, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 685104329U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRBodyJoint, Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewStructOps, TEXT("OculusXRBodyJoint"),&Z_Registration_Info_UScriptStruct_FOculusXRBodyJoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodyJoint), 1333864017U) },
		{ Z_Construct_UScriptStruct_FOculusXRBodyState, Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewStructOps, TEXT("OculusXRBodyState"),&Z_Registration_Info_UScriptStruct_FOculusXRBodyState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodyState), 3752798205U) },
		{ Z_Construct_UScriptStruct_FOculusXRBodySkeletonBone, Z_Construct_UScriptStruct_FOculusXRBodySkeletonBone_Statics::NewStructOps, TEXT("OculusXRBodySkeletonBone"),&Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodySkeletonBone), 1159120129U) },
		{ Z_Construct_UScriptStruct_FOculusXRBodySkeleton, Z_Construct_UScriptStruct_FOculusXRBodySkeleton_Statics::NewStructOps, TEXT("OculusXRBodySkeleton"),&Z_Registration_Info_UScriptStruct_FOculusXRBodySkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodySkeleton), 2889514602U) },
		{ Z_Construct_UScriptStruct_FOculusXRBodySkeletonState, Z_Construct_UScriptStruct_FOculusXRBodySkeletonState_Statics::NewStructOps, TEXT("OculusXRBodySkeletonState"),&Z_Registration_Info_UScriptStruct_FOculusXRBodySkeletonState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodySkeletonState), 82864243U) },
		{ Z_Construct_UScriptStruct_FOculusXRFaceState, Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewStructOps, TEXT("OculusXRFaceState"),&Z_Registration_Info_UScriptStruct_FOculusXRFaceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRFaceState), 1264610151U) },
		{ Z_Construct_UScriptStruct_FOculusXRFaceVisemesState, Z_Construct_UScriptStruct_FOculusXRFaceVisemesState_Statics::NewStructOps, TEXT("OculusXRFaceVisemesState"),&Z_Registration_Info_UScriptStruct_FOculusXRFaceVisemesState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRFaceVisemesState), 2512789323U) },
		{ Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier, Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewStructOps, TEXT("OculusXRFaceExpressionModifier"),&Z_Registration_Info_UScriptStruct_FOculusXRFaceExpressionModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRFaceExpressionModifier), 1274212074U) },
		{ Z_Construct_UScriptStruct_FOculusXREyeGazeState, Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewStructOps, TEXT("OculusXREyeGazeState"),&Z_Registration_Info_UScriptStruct_FOculusXREyeGazeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXREyeGazeState), 206870883U) },
		{ Z_Construct_UScriptStruct_FOculusXREyeGazesState, Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewStructOps, TEXT("OculusXREyeGazesState"),&Z_Registration_Info_UScriptStruct_FOculusXREyeGazesState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXREyeGazesState), 1540582107U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h__Script_OculusXRMovement_0fab9d95483d78301d86fc524e1f433508c89650{
	TEXT("/Script/OculusXRMovement"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
