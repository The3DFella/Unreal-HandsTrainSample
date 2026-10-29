// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRInputFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRInputFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRBone(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRControllerDrivenHandPoseTypes(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRFinger(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRHandType(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRSide(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRTrackingConfidence(ETypeConstructPhase);
OCULUSXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRCapsuleCollider(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRInputFunctionLibrary(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRInputFunctionLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRHandType *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRHandType_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRHandType>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRHandType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "HandLeft.Name", "EOculusXRHandType::HandLeft" },
		{ "HandRight.Name", "EOculusXRHandType::HandRight" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
		{ "None.Name", "EOculusXRHandType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRHandType::None", (int64)EOculusXRHandType::None },
		{ "EOculusXRHandType::HandLeft", (int64)EOculusXRHandType::HandLeft },
		{ "EOculusXRHandType::HandRight", (int64)EOculusXRHandType::HandRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRHandType",
	"EOculusXRHandType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRHandType;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRHandType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRHandType.OuterSingleton)
		{
			ZRIE_EOculusXRHandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRHandType"));
		}
		return ZRIE_EOculusXRHandType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRHandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRHandType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRHandType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRHandType ***********************************************************

// ********** Begin Enum EOculusXRSide *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRSide_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRSide>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRSide(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EOculusXRSide::Left" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
		{ "None.Name", "EOculusXRSide::None" },
		{ "Right.Name", "EOculusXRSide::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSide::None", (int64)EOculusXRSide::None },
		{ "EOculusXRSide::Left", (int64)EOculusXRSide::Left },
		{ "EOculusXRSide::Right", (int64)EOculusXRSide::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRSide",
	"EOculusXRSide",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRSide;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRSide(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRSide.OuterSingleton)
		{
			ZRIE_EOculusXRSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRSide, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRSide"));
		}
		return ZRIE_EOculusXRSide.OuterSingleton;
	}
	if (!ZRIE_EOculusXRSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRSide.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRSide.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRSide ***************************************************************

// ********** Begin Enum EOculusXRTrackingConfidence ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRTrackingConfidence_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRTrackingConfidence>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRTrackingConfidence(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EOculusXRTrackingConfidence::High" },
		{ "Low.Name", "EOculusXRTrackingConfidence::Low" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRTrackingConfidence::Low", (int64)EOculusXRTrackingConfidence::Low },
		{ "EOculusXRTrackingConfidence::High", (int64)EOculusXRTrackingConfidence::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRTrackingConfidence",
	"EOculusXRTrackingConfidence",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRTrackingConfidence;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRTrackingConfidence(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRTrackingConfidence.OuterSingleton)
		{
			ZRIE_EOculusXRTrackingConfidence.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRTrackingConfidence, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRTrackingConfidence"));
		}
		return ZRIE_EOculusXRTrackingConfidence.OuterSingleton;
	}
	if (!ZRIE_EOculusXRTrackingConfidence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRTrackingConfidence.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRTrackingConfidence.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRTrackingConfidence *************************************************

// ********** Begin Enum EOculusXRFinger ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRFinger_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRFinger>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRFinger(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Index.Name", "EOculusXRFinger::Index" },
		{ "Invalid.Name", "EOculusXRFinger::Invalid" },
		{ "Middle.Name", "EOculusXRFinger::Middle" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
		{ "Pinky.Name", "EOculusXRFinger::Pinky" },
		{ "Ring.Name", "EOculusXRFinger::Ring" },
		{ "Thumb.Name", "EOculusXRFinger::Thumb" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRFinger::Thumb", (int64)EOculusXRFinger::Thumb },
		{ "EOculusXRFinger::Index", (int64)EOculusXRFinger::Index },
		{ "EOculusXRFinger::Middle", (int64)EOculusXRFinger::Middle },
		{ "EOculusXRFinger::Ring", (int64)EOculusXRFinger::Ring },
		{ "EOculusXRFinger::Pinky", (int64)EOculusXRFinger::Pinky },
		{ "EOculusXRFinger::Invalid", (int64)EOculusXRFinger::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRFinger",
	"EOculusXRFinger",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRFinger;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRFinger(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRFinger.OuterSingleton)
		{
			ZRIE_EOculusXRFinger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRFinger, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRFinger"));
		}
		return ZRIE_EOculusXRFinger.OuterSingleton;
	}
	if (!ZRIE_EOculusXRFinger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRFinger.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRFinger.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRFinger *************************************************************

// ********** Begin Enum EOculusXRBone *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRBone_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRBone>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRBone(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Bone_Max.DisplayName", "Hand Max" },
		{ "Bone_Max.Name", "EOculusXRBone::Bone_Max" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EOculusXRBone is enum representing the Bone Ids that come from the Oculus Runtime.\n */" },
#endif
		{ "Forearm_Stub.DisplayName", "Forearm Stub" },
		{ "Forearm_Stub.Name", "EOculusXRBone::Forearm_Stub" },
		{ "Hand_End.DisplayName", "Hand End" },
		{ "Hand_End.Name", "EOculusXRBone::Hand_End" },
		{ "Hand_Start.DisplayName", "Hand Start" },
		{ "Hand_Start.Name", "EOculusXRBone::Hand_Start" },
		{ "Index_1.DisplayName", "Index1" },
		{ "Index_1.Name", "EOculusXRBone::Index_1" },
		{ "Index_2.DisplayName", "Index2" },
		{ "Index_2.Name", "EOculusXRBone::Index_2" },
		{ "Index_3.DisplayName", "Index3" },
		{ "Index_3.Name", "EOculusXRBone::Index_3" },
		{ "Index_Tip.DisplayName", "Index Tip" },
		{ "Index_Tip.Name", "EOculusXRBone::Index_Tip" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EOculusXRBone::Invalid" },
		{ "Max_Skinnable.DisplayName", "Max Skinnable" },
		{ "Max_Skinnable.Name", "EOculusXRBone::Max_Skinnable" },
		{ "Middle_1.DisplayName", "Middle1" },
		{ "Middle_1.Name", "EOculusXRBone::Middle_1" },
		{ "Middle_2.DisplayName", "Middle2" },
		{ "Middle_2.Name", "EOculusXRBone::Middle_2" },
		{ "Middle_3.DisplayName", "Middle3" },
		{ "Middle_3.Name", "EOculusXRBone::Middle_3" },
		{ "Middle_Tip.DisplayName", "Middle Tip" },
		{ "Middle_Tip.Name", "EOculusXRBone::Middle_Tip" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
		{ "Pinky_0.DisplayName", "Pinky0" },
		{ "Pinky_0.Name", "EOculusXRBone::Pinky_0" },
		{ "Pinky_1.DisplayName", "Pinky1" },
		{ "Pinky_1.Name", "EOculusXRBone::Pinky_1" },
		{ "Pinky_2.DisplayName", "Pinky2" },
		{ "Pinky_2.Name", "EOculusXRBone::Pinky_2" },
		{ "Pinky_3.DisplayName", "Pinky3" },
		{ "Pinky_3.Name", "EOculusXRBone::Pinky_3" },
		{ "Pinky_Tip.DisplayName", "Pinky Tip" },
		{ "Pinky_Tip.Name", "EOculusXRBone::Pinky_Tip" },
		{ "Ring_1.DisplayName", "Ring1" },
		{ "Ring_1.Name", "EOculusXRBone::Ring_1" },
		{ "Ring_2.DisplayName", "Ring2" },
		{ "Ring_2.Name", "EOculusXRBone::Ring_2" },
		{ "Ring_3.DisplayName", "Ring3" },
		{ "Ring_3.Name", "EOculusXRBone::Ring_3" },
		{ "Ring_Tip.DisplayName", "Ring Tip" },
		{ "Ring_Tip.Name", "EOculusXRBone::Ring_Tip" },
		{ "Thumb_0.DisplayName", "Thumb0" },
		{ "Thumb_0.Name", "EOculusXRBone::Thumb_0" },
		{ "Thumb_1.DisplayName", "Thumb1" },
		{ "Thumb_1.Name", "EOculusXRBone::Thumb_1" },
		{ "Thumb_2.DisplayName", "Thumb2" },
		{ "Thumb_2.Name", "EOculusXRBone::Thumb_2" },
		{ "Thumb_3.DisplayName", "Thumb3" },
		{ "Thumb_3.Name", "EOculusXRBone::Thumb_3" },
		{ "Thumb_Tip.DisplayName", "Thumb Tip" },
		{ "Thumb_Tip.Name", "EOculusXRBone::Thumb_Tip" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOculusXRBone is enum representing the Bone Ids that come from the Oculus Runtime." },
#endif
		{ "Wrist_Root.DisplayName", "Wrist Root" },
		{ "Wrist_Root.Name", "EOculusXRBone::Wrist_Root" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRBone::Wrist_Root", (int64)EOculusXRBone::Wrist_Root },
		{ "EOculusXRBone::Hand_Start", (int64)EOculusXRBone::Hand_Start },
		{ "EOculusXRBone::Forearm_Stub", (int64)EOculusXRBone::Forearm_Stub },
		{ "EOculusXRBone::Thumb_0", (int64)EOculusXRBone::Thumb_0 },
		{ "EOculusXRBone::Thumb_1", (int64)EOculusXRBone::Thumb_1 },
		{ "EOculusXRBone::Thumb_2", (int64)EOculusXRBone::Thumb_2 },
		{ "EOculusXRBone::Thumb_3", (int64)EOculusXRBone::Thumb_3 },
		{ "EOculusXRBone::Index_1", (int64)EOculusXRBone::Index_1 },
		{ "EOculusXRBone::Index_2", (int64)EOculusXRBone::Index_2 },
		{ "EOculusXRBone::Index_3", (int64)EOculusXRBone::Index_3 },
		{ "EOculusXRBone::Middle_1", (int64)EOculusXRBone::Middle_1 },
		{ "EOculusXRBone::Middle_2", (int64)EOculusXRBone::Middle_2 },
		{ "EOculusXRBone::Middle_3", (int64)EOculusXRBone::Middle_3 },
		{ "EOculusXRBone::Ring_1", (int64)EOculusXRBone::Ring_1 },
		{ "EOculusXRBone::Ring_2", (int64)EOculusXRBone::Ring_2 },
		{ "EOculusXRBone::Ring_3", (int64)EOculusXRBone::Ring_3 },
		{ "EOculusXRBone::Pinky_0", (int64)EOculusXRBone::Pinky_0 },
		{ "EOculusXRBone::Pinky_1", (int64)EOculusXRBone::Pinky_1 },
		{ "EOculusXRBone::Pinky_2", (int64)EOculusXRBone::Pinky_2 },
		{ "EOculusXRBone::Pinky_3", (int64)EOculusXRBone::Pinky_3 },
		{ "EOculusXRBone::Thumb_Tip", (int64)EOculusXRBone::Thumb_Tip },
		{ "EOculusXRBone::Max_Skinnable", (int64)EOculusXRBone::Max_Skinnable },
		{ "EOculusXRBone::Index_Tip", (int64)EOculusXRBone::Index_Tip },
		{ "EOculusXRBone::Middle_Tip", (int64)EOculusXRBone::Middle_Tip },
		{ "EOculusXRBone::Ring_Tip", (int64)EOculusXRBone::Ring_Tip },
		{ "EOculusXRBone::Pinky_Tip", (int64)EOculusXRBone::Pinky_Tip },
		{ "EOculusXRBone::Hand_End", (int64)EOculusXRBone::Hand_End },
		{ "EOculusXRBone::Bone_Max", (int64)EOculusXRBone::Bone_Max },
		{ "EOculusXRBone::Invalid", (int64)EOculusXRBone::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRBone",
	"EOculusXRBone",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRBone;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRBone(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRBone.OuterSingleton)
		{
			ZRIE_EOculusXRBone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRBone, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRBone"));
		}
		return ZRIE_EOculusXRBone.OuterSingleton;
	}
	if (!ZRIE_EOculusXRBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRBone.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRBone.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRBone ***************************************************************

// ********** Begin Enum EOculusXRHandHapticsLocation **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRHandHapticsLocation>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines the haptics location of controller hands for tracking. */" },
#endif
		{ "Hand.Name", "EOculusXRHandHapticsLocation::Hand" },
		{ "HandHapticsLocation_Count.Comment", "// Haptics is applied to the index finger location\n" },
		{ "HandHapticsLocation_Count.DisplayName", "<INVALID>" },
		{ "HandHapticsLocation_Count.Hidden", "" },
		{ "HandHapticsLocation_Count.Name", "EOculusXRHandHapticsLocation::HandHapticsLocation_Count" },
		{ "HandHapticsLocation_Count.ToolTip", "Haptics is applied to the index finger location" },
		{ "Index.Comment", "// Haptics is applied to the thumb finger location\n" },
		{ "Index.Name", "EOculusXRHandHapticsLocation::Index" },
		{ "Index.ToolTip", "Haptics is applied to the thumb finger location" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
		{ "Thumb.Comment", "// Haptics is applied to the whole controller\n" },
		{ "Thumb.Name", "EOculusXRHandHapticsLocation::Thumb" },
		{ "Thumb.ToolTip", "Haptics is applied to the whole controller" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the haptics location of controller hands for tracking." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRHandHapticsLocation::Hand", (int64)EOculusXRHandHapticsLocation::Hand },
		{ "EOculusXRHandHapticsLocation::Thumb", (int64)EOculusXRHandHapticsLocation::Thumb },
		{ "EOculusXRHandHapticsLocation::Index", (int64)EOculusXRHandHapticsLocation::Index },
		{ "EOculusXRHandHapticsLocation::HandHapticsLocation_Count", (int64)EOculusXRHandHapticsLocation::HandHapticsLocation_Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRHandHapticsLocation",
	"EOculusXRHandHapticsLocation",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRHandHapticsLocation;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRHandHapticsLocation.OuterSingleton)
		{
			ZRIE_EOculusXRHandHapticsLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRHandHapticsLocation"));
		}
		return ZRIE_EOculusXRHandHapticsLocation.OuterSingleton;
	}
	if (!ZRIE_EOculusXRHandHapticsLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRHandHapticsLocation.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRHandHapticsLocation.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRHandHapticsLocation ************************************************

// ********** Begin Enum EOculusXRControllerDrivenHandPoseTypes ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRControllerDrivenHandPoseTypes_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRControllerDrivenHandPoseTypes>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRControllerDrivenHandPoseTypes(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Define how a controllers button touches will be used to generate a hand pose. */" },
#endif
		{ "Controller.Comment", "// Controller button inputs will be used to generate a normal hand pose.\n" },
		{ "Controller.Name", "EOculusXRControllerDrivenHandPoseTypes::Controller" },
		{ "Controller.ToolTip", "Controller button inputs will be used to generate a normal hand pose." },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
		{ "Natural.Comment", "// Controllers do not generate any hand poses.\n" },
		{ "Natural.Name", "EOculusXRControllerDrivenHandPoseTypes::Natural" },
		{ "Natural.ToolTip", "Controllers do not generate any hand poses." },
		{ "None.Name", "EOculusXRControllerDrivenHandPoseTypes::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define how a controllers button touches will be used to generate a hand pose." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRControllerDrivenHandPoseTypes::None", (int64)EOculusXRControllerDrivenHandPoseTypes::None },
		{ "EOculusXRControllerDrivenHandPoseTypes::Natural", (int64)EOculusXRControllerDrivenHandPoseTypes::Natural },
		{ "EOculusXRControllerDrivenHandPoseTypes::Controller", (int64)EOculusXRControllerDrivenHandPoseTypes::Controller },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRControllerDrivenHandPoseTypes",
	"EOculusXRControllerDrivenHandPoseTypes",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRControllerDrivenHandPoseTypes;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRControllerDrivenHandPoseTypes(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRControllerDrivenHandPoseTypes.OuterSingleton)
		{
			ZRIE_EOculusXRControllerDrivenHandPoseTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRControllerDrivenHandPoseTypes, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRControllerDrivenHandPoseTypes"));
		}
		return ZRIE_EOculusXRControllerDrivenHandPoseTypes.OuterSingleton;
	}
	if (!ZRIE_EOculusXRControllerDrivenHandPoseTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRControllerDrivenHandPoseTypes.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRControllerDrivenHandPoseTypes.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRControllerDrivenHandPoseTypes **************************************

// ********** Begin ScriptStruct FOculusXRCapsuleCollider ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRCapsuleCollider_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRCapsuleCollider>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRCapsuleCollider); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FOculusXRCapsuleCollider is a struct that contains information on the physics/collider capsules created by the runtime for hands.\n *\n * @var Capsule\x09\x09The UCapsuleComponent that is the collision capsule on the bone. Use this to register for overlap/collision events\n * @var BoneIndex\x09The Bone that this collision capsule is parented to. Corresponds to the EOculusXRBone enum.\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOculusXRCapsuleCollider is a struct that contains information on the physics/collider capsules created by the runtime for hands.\n\n@var Capsule                The UCapsuleComponent that is the collision capsule on the bone. Use this to register for overlap/collision events\n@var BoneIndex      The Bone that this collision capsule is parented to. Corresponds to the EOculusXRBone enum." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRCapsuleCollider constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRCapsuleCollider constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRCapsuleCollider>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRCapsuleCollider Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRCapsuleCollider, Capsule), Z_Construct_UClass_UCapsuleComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capsule_MetaData), NewProp_Capsule_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRCapsuleCollider, BoneId), Z_Construct_UEnum_OculusXRInput_EOculusXRBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 83506572716d5ad419237dcca819999cca2d3bba
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Capsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRCapsuleCollider Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	&NewStructOps,
	"OculusXRCapsuleCollider",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRCapsuleCollider>(),
	alignof(FOculusXRCapsuleCollider),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRCapsuleCollider;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRCapsuleCollider(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRCapsuleCollider.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRCapsuleCollider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRCapsuleCollider, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("OculusXRCapsuleCollider"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRCapsuleCollider.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRCapsuleCollider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRCapsuleCollider.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRCapsuleCollider.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRCapsuleCollider ********************************************

// ********** Begin Class UOculusXRInputFunctionLibrary Function ConvertBoneToFinger ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_ConvertBoneToFinger_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventConvertBoneToFinger_Parms
	{
		EOculusXRBone Bone;
		EOculusXRFinger ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertBoneToFinger constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertBoneToFinger constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertBoneToFinger Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventConvertBoneToFinger_Parms, Bone), Z_Construct_UEnum_OculusXRInput_EOculusXRBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) }; // 83506572716d5ad419237dcca819999cca2d3bba
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventConvertBoneToFinger_Parms, ReturnValue), Z_Construct_UEnum_OculusXRInput_EOculusXRFinger, METADATA_PARAMS(0, nullptr) }; // 91ed738777d55d22f32a86d122a127d0a60ef7a5
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertBoneToFinger Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "ConvertBoneToFinger", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventConvertBoneToFinger_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventConvertBoneToFinger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_ConvertBoneToFinger(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execConvertBoneToFinger)
{
	P_GET_ENUM(EOculusXRBone,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRFinger*)Z_Param__Result=UOculusXRInputFunctionLibrary::ConvertBoneToFinger(EOculusXRBone(Z_Param_Bone));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function ConvertBoneToFinger *****************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetBoneName ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetBoneName_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetBoneName_Parms
	{
		EOculusXRBone BoneId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the bone name from the bone index\n\x09 *\n\x09 * @param BoneIndex\x09\x09\x09\x09\x09(in) Bone index to get the name of\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the bone name from the bone index\n\n@param BoneIndex                                     (in) Bone index to get the name of" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoneName constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoneName constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoneName Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetBoneName_Parms, BoneId), Z_Construct_UEnum_OculusXRInput_EOculusXRBone, METADATA_PARAMS(0, nullptr) }; // 83506572716d5ad419237dcca819999cca2d3bba
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBoneName Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetBoneName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetBoneName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetBoneName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetBoneName)
{
	P_GET_ENUM(EOculusXRBone,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetBoneName(EOculusXRBone(Z_Param_BoneId));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetBoneName *************************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetBoneRotation *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetBoneRotation_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetBoneRotation_Parms
	{
		EOculusXRHandType DeviceHand;
		EOculusXRBone BoneId;
		int32 ControllerIndex;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the rotation of a specific bone\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the rotations from\n\x09 * @param BoneId\x09\x09\x09\x09\x09(in) The specific bone to get the rotation from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the rotation of a specific bone\n\n@param DeviceHand                            (in) The hand to get the rotations from\n@param BoneId                                        (in) The specific bone to get the rotation from\n@param ControllerIndex                       (in) Optional different controller index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoneRotation constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoneRotation constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoneRotation Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetBoneRotation_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetBoneRotation_Parms, BoneId), Z_Construct_UEnum_OculusXRInput_EOculusXRBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 83506572716d5ad419237dcca819999cca2d3bba
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetBoneRotation_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetBoneRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBoneRotation Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetBoneRotation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetBoneRotation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetBoneRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetBoneRotation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetBoneRotation)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EOculusXRBone,Z_Param_BoneId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetBoneRotation(EOculusXRHandType(Z_Param_DeviceHand),EOculusXRBone(Z_Param_BoneId),Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetBoneRotation *********************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetControllerDrivenHandPoses ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetControllerDrivenHandPoses_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetControllerDrivenHandPoses_Parms
	{
		EOculusXRControllerDrivenHandPoseTypes ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get if / how controller inputs are used to build a syntheic hand pose.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get if / how controller inputs are used to build a syntheic hand pose." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetControllerDrivenHandPoses constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControllerDrivenHandPoses constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControllerDrivenHandPoses Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetControllerDrivenHandPoses_Parms, ReturnValue), Z_Construct_UEnum_OculusXRInput_EOculusXRControllerDrivenHandPoseTypes, METADATA_PARAMS(0, nullptr) }; // ae5ca774d7e6f23fd5c0e4e023d08293bdcaefe2
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetControllerDrivenHandPoses Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetControllerDrivenHandPoses", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetControllerDrivenHandPoses_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetControllerDrivenHandPoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetControllerDrivenHandPoses(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetControllerDrivenHandPoses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRControllerDrivenHandPoseTypes*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetControllerDrivenHandPoses();
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetControllerDrivenHandPoses ********

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetControllerSampleRateHz *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetControllerSampleRateHz_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetControllerSampleRateHz_Parms
	{
		EControllerHand Hand;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the controller haptics sample rate.\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the controller haptics sample rate.\n@param       Hand                                    Which hand to play the effect on" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetControllerSampleRateHz constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControllerSampleRateHz constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControllerSampleRateHz Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetControllerSampleRateHz_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetControllerSampleRateHz_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetControllerSampleRateHz Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetControllerSampleRateHz", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetControllerSampleRateHz_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetControllerSampleRateHz_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetControllerSampleRateHz(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetControllerSampleRateHz)
{
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetControllerSampleRateHz(EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetControllerSampleRateHz ***********

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetDominantHand *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetDominantHand_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetDominantHand_Parms
	{
		int32 ControllerIndex;
		EOculusXRHandType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the user's dominant hand. Note that HandTracking must be used.\n\x09 *\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the user's dominant hand. Note that HandTracking must be used.\n\n@param ControllerIndex                       (in) Optional different controller index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDominantHand constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDominantHand constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDominantHand Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetDominantHand_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetDominantHand_Parms, ReturnValue), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(0, nullptr) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDominantHand Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetDominantHand", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetDominantHand_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetDominantHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetDominantHand(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetDominantHand)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRHandType*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetDominantHand(Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetDominantHand *********************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetFingerTrackingConfidence *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetFingerTrackingConfidence_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms
	{
		EOculusXRHandType DeviceHand;
		EOculusXRFinger Finger;
		int32 ControllerIndex;
		EOculusXRTrackingConfidence ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the tracking confidence of a finger\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get tracking confidence of\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 * @param Finger\x09\x09\x09(in) The finger to get tracking confidence of\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the tracking confidence of a finger\n\n@param DeviceHand                            (in) The hand to get tracking confidence of\n@param ControllerIndex                       (in) Optional different controller index\n@param Finger                        (in) The finger to get tracking confidence of" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finger_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFingerTrackingConfidence constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Finger;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFingerTrackingConfidence constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFingerTrackingConfidence Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms, Finger), Z_Construct_UEnum_OculusXRInput_EOculusXRFinger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finger_MetaData), NewProp_Finger_MetaData) }; // 91ed738777d55d22f32a86d122a127d0a60ef7a5
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_OculusXRInput_EOculusXRTrackingConfidence, METADATA_PARAMS(0, nullptr) }; // 48b03953f1c6a83afa80d7d9b353cb1c593e79ae
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Finger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Finger,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFingerTrackingConfidence Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetFingerTrackingConfidence", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetFingerTrackingConfidence(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetFingerTrackingConfidence)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EOculusXRFinger,Z_Param_Finger);
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRTrackingConfidence*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetFingerTrackingConfidence(EOculusXRHandType(Z_Param_DeviceHand),EOculusXRFinger(Z_Param_Finger),Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetFingerTrackingConfidence *********

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetHandJointTransform *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandJointTransform_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetHandJointTransform_Parms
	{
		EOculusXRHandType DeviceHand;
		int32 JointIndex;
		int32 ControllerIndex;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the tracking-space transform of a specific hand joint, in XrHandJointEXT ordering.\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the joint from\n\x09 * @param JointIndex\x09\x09\x09\x09(in) The hand joint index (XrHandJointEXT ordering)\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the tracking-space transform of a specific hand joint, in XrHandJointEXT ordering.\n\n@param DeviceHand                            (in) The hand to get the joint from\n@param JointIndex                            (in) The hand joint index (XrHandJointEXT ordering)\n@param ControllerIndex                       (in) Optional different controller index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandJointTransform constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JointIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandJointTransform constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandJointTransform Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandJointTransform_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_JointIndex = { "JointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandJointTransform_Parms, JointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointIndex_MetaData), NewProp_JointIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandJointTransform_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandJointTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHandJointTransform Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetHandJointTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetHandJointTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetHandJointTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandJointTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetHandJointTransform)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_GET_PROPERTY(FIntProperty,Z_Param_JointIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetHandJointTransform(EOculusXRHandType(Z_Param_DeviceHand),Z_Param_JointIndex,Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetHandJointTransform ***************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetHandScale **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandScale_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetHandScale_Parms
	{
		EOculusXRHandType DeviceHand;
		int32 ControllerIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the scale of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get scale of\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the scale of the hand\n\n@param DeviceHand                            (in) The hand to get scale of\n@param ControllerIndex                       (in) Optional different controller index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandScale constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandScale constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandScale Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandScale_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandScale_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHandScale Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetHandScale", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetHandScale_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetHandScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandScale(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetHandScale)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetHandScale(EOculusXRHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetHandScale ************************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetHandSkeletalMesh ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandSkeletalMesh_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms
	{
		USkeletalMesh* HandSkeletalMesh;
		EOculusXRHandType SkeletonType;
		EOculusXRHandType MeshType;
		float WorldToMeters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a new runtime hand skeletal mesh.\n\x09 *\n\x09 * @param HandSkeletalMesh\x09\x09\x09(out) Skeletal Mesh object that will be used for the runtime hand mesh\n\x09 * @param SkeletonType\x09\x09\x09\x09(in) The skeleton type that will be used for generating the hand bones\n\x09 * @param MeshType\x09\x09\x09\x09\x09(in) The mesh type that will be used for generating the hand mesh\n\x09 * @param WorldTometers\x09\x09\x09\x09(in) Optional change to the world to meters conversion value\n\x09 */" },
#endif
		{ "CPP_Default_WorldToMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new runtime hand skeletal mesh.\n\n@param HandSkeletalMesh                      (out) Skeletal Mesh object that will be used for the runtime hand mesh\n@param SkeletonType                          (in) The skeleton type that will be used for generating the hand bones\n@param MeshType                                      (in) The mesh type that will be used for generating the hand mesh\n@param WorldTometers                         (in) Optional change to the world to meters conversion value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandSkeletalMesh constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandSkeletalMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandSkeletalMesh constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandSkeletalMesh Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HandSkeletalMesh = { "HandSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, HandSkeletalMesh), Z_Construct_UClass_USkeletalMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, SkeletonType), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(0, nullptr) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, MeshType), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(0, nullptr) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, WorldToMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToMeters_MetaData), NewProp_WorldToMeters_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldToMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHandSkeletalMesh Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetHandSkeletalMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetHandSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandSkeletalMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetHandSkeletalMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_HandSkeletalMesh);
	P_GET_ENUM(EOculusXRHandType,Z_Param_SkeletonType);
	P_GET_ENUM(EOculusXRHandType,Z_Param_MeshType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetHandSkeletalMesh(Z_Param_HandSkeletalMesh,EOculusXRHandType(Z_Param_SkeletonType),EOculusXRHandType(Z_Param_MeshType),Z_Param_WorldToMeters);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetHandSkeletalMesh *****************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetLegacyOculusPoseTransform ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetLegacyOculusPoseTransform_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetLegacyOculusPoseTransform_Parms
	{
		float WorldToMeters;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the transformation for transforming the legacy Oculus pose into the OpenXR Grip pose.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the transformation for transforming the legacy Oculus pose into the OpenXR Grip pose." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLegacyOculusPoseTransform constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLegacyOculusPoseTransform constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLegacyOculusPoseTransform Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetLegacyOculusPoseTransform_Parms, WorldToMeters), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetLegacyOculusPoseTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldToMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLegacyOculusPoseTransform Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetLegacyOculusPoseTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetLegacyOculusPoseTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetLegacyOculusPoseTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetLegacyOculusPoseTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetLegacyOculusPoseTransform)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetLegacyOculusPoseTransform(Z_Param_WorldToMeters);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetLegacyOculusPoseTransform ********

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetMaxHapticDuration **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetMaxHapticDuration_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetMaxHapticDuration_Parms
	{
		EControllerHand Hand;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the maximum duration (in seconds) that the controller haptics can handle each time.\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the maximum duration (in seconds) that the controller haptics can handle each time.\n@param       Hand                                    Which hand to play the effect on" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaxHapticDuration constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaxHapticDuration constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaxHapticDuration Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetMaxHapticDuration_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetMaxHapticDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMaxHapticDuration Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetMaxHapticDuration", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetMaxHapticDuration_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetMaxHapticDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetMaxHapticDuration(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetMaxHapticDuration)
{
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetMaxHapticDuration(EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetMaxHapticDuration ****************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetPointerPose ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetPointerPose_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetPointerPose_Parms
	{
		EOculusXRHandType DeviceHand;
		int32 ControllerIndex;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the pointer pose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer pose from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the pointer pose\n\n@param DeviceHand                            (in) The hand to get the pointer pose from\n@param ControllerIndex                       (in) Optional different controller index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPointerPose constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPointerPose constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPointerPose Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetPointerPose_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetPointerPose_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetPointerPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPointerPose Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetPointerPose", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetPointerPose_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetPointerPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetPointerPose(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetPointerPose)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetPointerPose(EOculusXRHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetPointerPose **********************

// ********** Begin Class UOculusXRInputFunctionLibrary Function GetTrackingConfidence *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetTrackingConfidence_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventGetTrackingConfidence_Parms
	{
		EOculusXRHandType DeviceHand;
		int32 ControllerIndex;
		EOculusXRTrackingConfidence ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the tracking confidence of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get tracking confidence of\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the tracking confidence of the hand\n\n@param DeviceHand                            (in) The hand to get tracking confidence of\n@param ControllerIndex                       (in) Optional different controller index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTrackingConfidence constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTrackingConfidence constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTrackingConfidence Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_OculusXRInput_EOculusXRTrackingConfidence, METADATA_PARAMS(0, nullptr) }; // 48b03953f1c6a83afa80d7d9b353cb1c593e79ae
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTrackingConfidence Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "GetTrackingConfidence", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventGetTrackingConfidence_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventGetTrackingConfidence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetTrackingConfidence(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execGetTrackingConfidence)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRTrackingConfidence*)Z_Param__Result=UOculusXRInputFunctionLibrary::GetTrackingConfidence(EOculusXRHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function GetTrackingConfidence ***************

// ********** Begin Class UOculusXRInputFunctionLibrary Function InitializeHandPhysics *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_InitializeHandPhysics_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventInitializeHandPhysics_Parms
	{
		EOculusXRHandType SkeletonType;
		USkinnedMeshComponent* HandComponent;
		float WorldToMeters;
		TArray<FOculusXRCapsuleCollider> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes physics capsules for collision and physics on the runtime mesh\n\x09 *\n\x09 * @param SkeletonType\x09\x09\x09\x09(in) The skeleton type that will be used to generated the capsules\n\x09 * @param HandComponent\x09\x09\x09\x09(in) The skinned mesh component that the capsules will be attached to\n\x09 * @param WorldTometers\x09\x09\x09\x09(in) Optional change to the world to meters conversion value\n\x09 */" },
#endif
		{ "CPP_Default_WorldToMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes physics capsules for collision and physics on the runtime mesh\n\n@param SkeletonType                          (in) The skeleton type that will be used to generated the capsules\n@param HandComponent                         (in) The skinned mesh component that the capsules will be attached to\n@param WorldTometers                         (in) Optional change to the world to meters conversion value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeHandPhysics constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeHandPhysics constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeHandPhysics Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventInitializeHandPhysics_Parms, SkeletonType), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(0, nullptr) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HandComponent = { "HandComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventInitializeHandPhysics_Parms, HandComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandComponent_MetaData), NewProp_HandComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventInitializeHandPhysics_Parms, WorldToMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToMeters_MetaData), NewProp_WorldToMeters_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRCapsuleCollider, METADATA_PARAMS(0, nullptr) }; // ae74b4637023bdb2f6f842b9446d8520c74dfe2d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventInitializeHandPhysics_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // ae74b4637023bdb2f6f842b9446d8520c74dfe2d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldToMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeHandPhysics Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "InitializeHandPhysics", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventInitializeHandPhysics_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventInitializeHandPhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_InitializeHandPhysics(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execInitializeHandPhysics)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_SkeletonType);
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_HandComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FOculusXRCapsuleCollider>*)Z_Param__Result=UOculusXRInputFunctionLibrary::InitializeHandPhysics(EOculusXRHandType(Z_Param_SkeletonType),Z_Param_HandComponent,Z_Param_WorldToMeters);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function InitializeHandPhysics ***************

// ********** Begin Class UOculusXRInputFunctionLibrary Function IsControllerDrivenHandDataSupported 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsControllerDrivenHandDataSupported_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventIsControllerDrivenHandDataSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether the runtime supports controller-driven hand data (the hand-tracking data-source\n\x09 * extension). When false, controller-driven (\"procedural\") hand poses are unavailable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the runtime supports controller-driven hand data (the hand-tracking data-source\nextension). When false, controller-driven (\"procedural\") hand poses are unavailable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsControllerDrivenHandDataSupported constinit property declarations ***
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventIsControllerDrivenHandDataSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsControllerDrivenHandDataSupported constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsControllerDrivenHandDataSupported Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventIsControllerDrivenHandDataSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsControllerDrivenHandDataSupported Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "IsControllerDrivenHandDataSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventIsControllerDrivenHandDataSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventIsControllerDrivenHandDataSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsControllerDrivenHandDataSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execIsControllerDrivenHandDataSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRInputFunctionLibrary::IsControllerDrivenHandDataSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function IsControllerDrivenHandDataSupported *

// ********** Begin Class UOculusXRInputFunctionLibrary Function IsHandInteractionProfile **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandInteractionProfile_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventIsHandInteractionProfile_Parms
	{
		EOculusXRHandType DeviceHand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the interaction profile for the given hand is a hand interaction profile.  Can be used to\n\x09 * determine whether the position for a hand is coming from hand tracking or another kind of input device.\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to check the interaction profile of\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the interaction profile for the given hand is a hand interaction profile.  Can be used to\ndetermine whether the position for a hand is coming from hand tracking or another kind of input device.\n\n@param DeviceHand                            (in) The hand to check the interaction profile of" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHandInteractionProfile constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventIsHandInteractionProfile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHandInteractionProfile constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHandInteractionProfile Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventIsHandInteractionProfile_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventIsHandInteractionProfile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsHandInteractionProfile Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "IsHandInteractionProfile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventIsHandInteractionProfile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventIsHandInteractionProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandInteractionProfile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execIsHandInteractionProfile)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRInputFunctionLibrary::IsHandInteractionProfile(EOculusXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function IsHandInteractionProfile ************

// ********** Begin Class UOculusXRInputFunctionLibrary Function IsHandPositionValid ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandPositionValid_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventIsHandPositionValid_Parms
	{
		EOculusXRHandType DeviceHand;
		int32 ControllerIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the hand position is valid\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the position from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the hand position is valid\n\n@param DeviceHand                            (in) The hand to get the position from\n@param ControllerIndex                       (in) Optional different controller index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHandPositionValid constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventIsHandPositionValid_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHandPositionValid constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHandPositionValid Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventIsHandPositionValid_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventIsHandPositionValid_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventIsHandPositionValid_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsHandPositionValid Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "IsHandPositionValid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventIsHandPositionValid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventIsHandPositionValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandPositionValid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execIsHandPositionValid)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRInputFunctionLibrary::IsHandPositionValid(EOculusXRHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function IsHandPositionValid *****************

// ********** Begin Class UOculusXRInputFunctionLibrary Function IsHandTrackingEnabled *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandTrackingEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if hand tracking is enabled currently\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if hand tracking is enabled currently" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsHandTrackingEnabled constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHandTrackingEnabled constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHandTrackingEnabled Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsHandTrackingEnabled Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "IsHandTrackingEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandTrackingEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execIsHandTrackingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRInputFunctionLibrary::IsHandTrackingEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function IsHandTrackingEnabled ***************

// ********** Begin Class UOculusXRInputFunctionLibrary Function IsPointerPoseValid ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsPointerPoseValid_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventIsPointerPoseValid_Parms
	{
		EOculusXRHandType DeviceHand;
		int32 ControllerIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the pointer pose is a valid pose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer status from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
#endif
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the pointer pose is a valid pose\n\n@param DeviceHand                            (in) The hand to get the pointer status from\n@param ControllerIndex                       (in) Optional different controller index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPointerPoseValid constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventIsPointerPoseValid_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPointerPoseValid constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPointerPoseValid Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventIsPointerPoseValid_Parms, DeviceHand), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventIsPointerPoseValid_Parms, ControllerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerIndex_MetaData), NewProp_ControllerIndex_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventIsPointerPoseValid_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPointerPoseValid Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "IsPointerPoseValid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventIsPointerPoseValid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventIsPointerPoseValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsPointerPoseValid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execIsPointerPoseValid)
{
	P_GET_ENUM(EOculusXRHandType,Z_Param_DeviceHand);
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRInputFunctionLibrary::IsPointerPoseValid(EOculusXRHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function IsPointerPoseValid ******************

// ********** Begin Class UOculusXRInputFunctionLibrary Function IsSimultaneousHandsAndControllersEnabled 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsSimultaneousHandsAndControllersEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventIsSimultaneousHandsAndControllersEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the current enabled state for simultaneous hand and controller tracking.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09True if simultaneous hands and controller tracking is enabled\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
		{ "ReturnDisplayName", "bEnabled" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current enabled state for simultaneous hand and controller tracking.\n@return                                                      True if simultaneous hands and controller tracking is enabled" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsSimultaneousHandsAndControllersEnabled constinit property declarations 
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventIsSimultaneousHandsAndControllersEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSimultaneousHandsAndControllersEnabled constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSimultaneousHandsAndControllersEnabled Property Definitions *********
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventIsSimultaneousHandsAndControllersEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsSimultaneousHandsAndControllersEnabled Property Definitions ***********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "IsSimultaneousHandsAndControllersEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventIsSimultaneousHandsAndControllersEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventIsSimultaneousHandsAndControllersEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsSimultaneousHandsAndControllersEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execIsSimultaneousHandsAndControllersEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRInputFunctionLibrary::IsSimultaneousHandsAndControllersEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function IsSimultaneousHandsAndControllersEnabled 

// ********** Begin Class UOculusXRInputFunctionLibrary Function PlayAmplitudeEnvelopeHapticEffect *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayAmplitudeEnvelopeHapticEffect_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventPlayAmplitudeEnvelopeHapticEffect_Parms
	{
		UHapticFeedbackEffect_Buffer* HapticEffect;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Play a haptic feedback buffer on the player's controller.\n\x09 * All buffer data will be sent to controller together in one frame.\n\x09 * Data duration should be no greater than controller's maximum haptics duration which can be queried with GetMaxHapticDuration.\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to play\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a haptic feedback buffer on the player's controller.\nAll buffer data will be sent to controller together in one frame.\nData duration should be no greater than controller's maximum haptics duration which can be queried with GetMaxHapticDuration.\n@param       HapticEffect                    The haptic effect to play\n@param       Hand                                    Which hand to play the effect on" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayAmplitudeEnvelopeHapticEffect constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayAmplitudeEnvelopeHapticEffect constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayAmplitudeEnvelopeHapticEffect Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayAmplitudeEnvelopeHapticEffect_Parms, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Buffer, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayAmplitudeEnvelopeHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayAmplitudeEnvelopeHapticEffect Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "PlayAmplitudeEnvelopeHapticEffect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventPlayAmplitudeEnvelopeHapticEffect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventPlayAmplitudeEnvelopeHapticEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayAmplitudeEnvelopeHapticEffect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execPlayAmplitudeEnvelopeHapticEffect)
{
	P_GET_OBJECT(UHapticFeedbackEffect_Buffer,Z_Param_HapticEffect);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRInputFunctionLibrary::PlayAmplitudeEnvelopeHapticEffect(Z_Param_HapticEffect,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function PlayAmplitudeEnvelopeHapticEffect ***

// ********** Begin Class UOculusXRInputFunctionLibrary Function PlayBufferHapticEffect ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayBufferHapticEffect_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms
	{
		UHapticFeedbackEffect_Buffer* HapticEffect;
		EControllerHand Hand;
		EOculusXRHandHapticsLocation Location;
		float Scale;
		bool bLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Play a haptic feedback buffer on the player's controller with location support.\n\x09 * In each frame, the buffer data will be sampled and the individual sampled data will be sent to controller to vibrate a specific location.\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to play\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 * @param\x09Location\x09\x09\x09\x09Which hand location to play the effect on\n\x09 * @param\x09Scale\x09\x09\x09\x09\x09Scale between 0.0 and 1.0 on the intensity of playback\n\x09 */" },
#endif
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_Location", "Hand" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a haptic feedback buffer on the player's controller with location support.\nIn each frame, the buffer data will be sampled and the individual sampled data will be sent to controller to vibrate a specific location.\n@param       HapticEffect                    The haptic effect to play\n@param       Hand                                    Which hand to play the effect on\n@param       Location                                Which hand location to play the effect on\n@param       Scale                                   Scale between 0.0 and 1.0 on the intensity of playback" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayBufferHapticEffect constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static void NewProp_bLoop_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms*)Obj)->bLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayBufferHapticEffect constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayBufferHapticEffect Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Buffer, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms, Location), Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation, METADATA_PARAMS(0, nullptr) }; // 95093cb8c5e9f420badfe34709e0d52307f6b51c
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms), &UHT_STATICS::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayBufferHapticEffect Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "PlayBufferHapticEffect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventPlayBufferHapticEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayBufferHapticEffect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execPlayBufferHapticEffect)
{
	P_GET_OBJECT(UHapticFeedbackEffect_Buffer,Z_Param_HapticEffect);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_ENUM(EOculusXRHandHapticsLocation,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_UBOOL(Z_Param_bLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRInputFunctionLibrary::PlayBufferHapticEffect(Z_Param_HapticEffect,EControllerHand(Z_Param_Hand),EOculusXRHandHapticsLocation(Z_Param_Location),Z_Param_Scale,Z_Param_bLoop);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function PlayBufferHapticEffect **************

// ********** Begin Class UOculusXRInputFunctionLibrary Function PlayCurveHapticEffect *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayCurveHapticEffect_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms
	{
		UHapticFeedbackEffect_Curve* HapticEffect;
		EControllerHand Hand;
		EOculusXRHandHapticsLocation Location;
		float Scale;
		bool bLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Play a haptic feedback curve on the player's controller with location support.\n\x09 * The curve data will be sampled and sent to controller to vibrate a specific location at each frame.\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to play\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 * @param\x09Location\x09\x09\x09\x09Which hand location to play the effect on\n\x09 * @param\x09Scale\x09\x09\x09\x09\x09Scale between 0.0 and 1.0 on the intensity of playback\n\x09 */" },
#endif
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_Location", "Hand" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a haptic feedback curve on the player's controller with location support.\nThe curve data will be sampled and sent to controller to vibrate a specific location at each frame.\n@param       HapticEffect                    The haptic effect to play\n@param       Hand                                    Which hand to play the effect on\n@param       Location                                Which hand location to play the effect on\n@param       Scale                                   Scale between 0.0 and 1.0 on the intensity of playback" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayCurveHapticEffect constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static void NewProp_bLoop_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms*)Obj)->bLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayCurveHapticEffect constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayCurveHapticEffect Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Curve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms, Location), Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation, METADATA_PARAMS(0, nullptr) }; // 95093cb8c5e9f420badfe34709e0d52307f6b51c
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms), &UHT_STATICS::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayCurveHapticEffect Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "PlayCurveHapticEffect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventPlayCurveHapticEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayCurveHapticEffect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execPlayCurveHapticEffect)
{
	P_GET_OBJECT(UHapticFeedbackEffect_Curve,Z_Param_HapticEffect);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_ENUM(EOculusXRHandHapticsLocation,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_UBOOL(Z_Param_bLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRInputFunctionLibrary::PlayCurveHapticEffect(Z_Param_HapticEffect,EControllerHand(Z_Param_Hand),EOculusXRHandHapticsLocation(Z_Param_Location),Z_Param_Scale,Z_Param_bLoop);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function PlayCurveHapticEffect ***************

// ********** Begin Class UOculusXRInputFunctionLibrary Function PlaySoundWaveHapticEffect *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlaySoundWaveHapticEffect_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms
	{
		UHapticFeedbackEffect_SoundWave* HapticEffect;
		EControllerHand Hand;
		bool bAppend;
		float Scale;
		bool bLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Play a haptic feedback soundwave on the player's controller.\n\x09 * In each frame, the soundwave data will be split into a batch of data and sent to controller.\n\x09 * The data duration of each frame is equal to controller's maximum haptics duration which can be queried with GetMaxHapticDuration.\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to play\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 * @param\x09""bAppend\x09\x09\x09\x09\x09""False: any existing samples will be cleared and a new haptic effect will begin; True: samples will be appended to the currently playing effect\n\x09 * @param\x09Scale\x09\x09\x09\x09\x09Scale between 0.0 and 1.0 on the intensity of playback\n\x09 */" },
#endif
		{ "CPP_Default_bAppend", "false" },
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a haptic feedback soundwave on the player's controller.\nIn each frame, the soundwave data will be split into a batch of data and sent to controller.\nThe data duration of each frame is equal to controller's maximum haptics duration which can be queried with GetMaxHapticDuration.\n@param       HapticEffect                    The haptic effect to play\n@param       Hand                                    Which hand to play the effect on\n@param       bAppend                                 False: any existing samples will be cleared and a new haptic effect will begin; True: samples will be appended to the currently playing effect\n@param       Scale                                   Scale between 0.0 and 1.0 on the intensity of playback" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlaySoundWaveHapticEffect constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static void NewProp_bAppend_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms*)Obj)->bAppend = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static void NewProp_bLoop_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms*)Obj)->bLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlaySoundWaveHapticEffect constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlaySoundWaveHapticEffect Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_SoundWave, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAppend = { "bAppend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms), &UHT_STATICS::NewProp_bAppend_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms), &UHT_STATICS::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAppend,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlaySoundWaveHapticEffect Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "PlaySoundWaveHapticEffect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventPlaySoundWaveHapticEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlaySoundWaveHapticEffect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execPlaySoundWaveHapticEffect)
{
	P_GET_OBJECT(UHapticFeedbackEffect_SoundWave,Z_Param_HapticEffect);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_UBOOL(Z_Param_bAppend);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_UBOOL(Z_Param_bLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRInputFunctionLibrary::PlaySoundWaveHapticEffect(Z_Param_HapticEffect,EControllerHand(Z_Param_Hand),Z_Param_bAppend,Z_Param_Scale,Z_Param_bLoop);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function PlaySoundWaveHapticEffect ***********

// ********** Begin Class UOculusXRInputFunctionLibrary Function SetControllerDrivenHandPoses ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetControllerDrivenHandPoses_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventSetControllerDrivenHandPoses_Parms
	{
		EOculusXRControllerDrivenHandPoseTypes Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set if / how controller inputs are used to build a syntheic hand pose.\n\x09 * @param\x09Type\x09\x09\x09\x09\x09How the hand should be posed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set if / how controller inputs are used to build a syntheic hand pose.\n@param       Type                                    How the hand should be posed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetControllerDrivenHandPoses constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetControllerDrivenHandPoses constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetControllerDrivenHandPoses Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventSetControllerDrivenHandPoses_Parms, Type), Z_Construct_UEnum_OculusXRInput_EOculusXRControllerDrivenHandPoseTypes, METADATA_PARAMS(0, nullptr) }; // ae5ca774d7e6f23fd5c0e4e023d08293bdcaefe2
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetControllerDrivenHandPoses Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "SetControllerDrivenHandPoses", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventSetControllerDrivenHandPoses_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventSetControllerDrivenHandPoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetControllerDrivenHandPoses(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execSetControllerDrivenHandPoses)
{
	P_GET_ENUM(EOculusXRControllerDrivenHandPoseTypes,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRInputFunctionLibrary::SetControllerDrivenHandPoses(EOculusXRControllerDrivenHandPoseTypes(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function SetControllerDrivenHandPoses ********

// ********** Begin Class UOculusXRInputFunctionLibrary Function SetHapticsByValue *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetHapticsByValue_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventSetHapticsByValue_Parms
	{
		float Frequency;
		float Amplitude;
		EControllerHand Hand;
		EOculusXRHandHapticsLocation Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the value of the haptics for the specified hand and location directly, using frequency and amplitude.  NOTE:  If a curve is already\n\x09 * playing for this hand, it will be cancelled in favour of the specified values.\n\x09 *\n\x09 * @param\x09""Frequency\x09\x09\x09\x09The frequency in Hz to play through the haptics system\n\x09 * @param\x09""Amplitude\x09\x09\x09\x09The normalized amplitude [0.0, 1.0] to set the haptic feedback to\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 * @param\x09Location\x09\x09\x09\x09Which hand location to play the effect on\n\x09 */" },
#endif
		{ "CPP_Default_Location", "Hand" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the value of the haptics for the specified hand and location directly, using frequency and amplitude.  NOTE:  If a curve is already\nplaying for this hand, it will be cancelled in favour of the specified values.\n\n@param       Frequency                               The frequency in Hz to play through the haptics system\n@param       Amplitude                               The normalized amplitude [0.0, 1.0] to set the haptic feedback to\n@param       Hand                                    Which hand to play the effect on\n@param       Location                                Which hand location to play the effect on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHapticsByValue constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHapticsByValue constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHapticsByValue Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventSetHapticsByValue_Parms, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventSetHapticsByValue_Parms, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventSetHapticsByValue_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventSetHapticsByValue_Parms, Location), Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation, METADATA_PARAMS(0, nullptr) }; // 95093cb8c5e9f420badfe34709e0d52307f6b51c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHapticsByValue Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "SetHapticsByValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventSetHapticsByValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventSetHapticsByValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetHapticsByValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execSetHapticsByValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amplitude);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_ENUM(EOculusXRHandHapticsLocation,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRInputFunctionLibrary::SetHapticsByValue(Z_Param_Frequency,Z_Param_Amplitude,EControllerHand(Z_Param_Hand),EOculusXRHandHapticsLocation(Z_Param_Location));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function SetHapticsByValue *******************

// ********** Begin Class UOculusXRInputFunctionLibrary Function SetSimultaneousHandsAndControllersEnabled 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetSimultaneousHandsAndControllersEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventSetSimultaneousHandsAndControllersEnabled_Parms
	{
		bool bEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables or disables simultaneous hand and controller tracking.  If disabled, only either hands or controllers, exclusively,\n\x09 * will be tracked at any point in time.\n\x09 * @param bEnabled\x09\x09\x09\x09\x09(in) Whether simultaneous hand and controller tracking should be enabled\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09True if the call to set simultaneous hand and controller tracking succeeded\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
		{ "ReturnDisplayName", "bSucceeded" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables simultaneous hand and controller tracking.  If disabled, only either hands or controllers, exclusively,\nwill be tracked at any point in time.\n@param bEnabled                                      (in) Whether simultaneous hand and controller tracking should be enabled\n@return                                                      True if the call to set simultaneous hand and controller tracking succeeded" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSimultaneousHandsAndControllersEnabled constinit property declarations 
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventSetSimultaneousHandsAndControllersEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRInputFunctionLibrary_eventSetSimultaneousHandsAndControllersEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSimultaneousHandsAndControllersEnabled constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSimultaneousHandsAndControllersEnabled Property Definitions ********
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventSetSimultaneousHandsAndControllersEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRInputFunctionLibrary_eventSetSimultaneousHandsAndControllersEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSimultaneousHandsAndControllersEnabled Property Definitions **********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "SetSimultaneousHandsAndControllersEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventSetSimultaneousHandsAndControllersEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventSetSimultaneousHandsAndControllersEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetSimultaneousHandsAndControllersEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execSetSimultaneousHandsAndControllersEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRInputFunctionLibrary::SetSimultaneousHandsAndControllersEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function SetSimultaneousHandsAndControllersEnabled 

// ********** Begin Class UOculusXRInputFunctionLibrary Function StopHapticEffect ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRInputFunctionLibrary_StopHapticEffect_Statics
struct UHT_STATICS
{
	struct OculusXRInputFunctionLibrary_eventStopHapticEffect_Parms
	{
		EControllerHand Hand;
		EOculusXRHandHapticsLocation Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops a playing haptic feedback curve at a specific location.\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to stop\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to stop the effect for\n\x09 * @param\x09Location\x09\x09\x09\x09Which hand location to play the effect on\n\x09 */" },
#endif
		{ "CPP_Default_Location", "Hand" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops a playing haptic feedback curve at a specific location.\n@param       HapticEffect                    The haptic effect to stop\n@param       Hand                                    Which hand to stop the effect for\n@param       Location                                Which hand location to play the effect on" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopHapticEffect constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopHapticEffect constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopHapticEffect Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventStopHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRInputFunctionLibrary_eventStopHapticEffect_Parms, Location), Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation, METADATA_PARAMS(0, nullptr) }; // 95093cb8c5e9f420badfe34709e0d52307f6b51c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopHapticEffect Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRInputFunctionLibrary, nullptr, "StopHapticEffect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRInputFunctionLibrary_eventStopHapticEffect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRInputFunctionLibrary_eventStopHapticEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRInputFunctionLibrary_StopHapticEffect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRInputFunctionLibrary::execStopHapticEffect)
{
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_ENUM(EOculusXRHandHapticsLocation,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRInputFunctionLibrary::StopHapticEffect(EControllerHand(Z_Param_Hand),EOculusXRHandHapticsLocation(Z_Param_Location));
	P_NATIVE_END;
}
// ********** End Class UOculusXRInputFunctionLibrary Function StopHapticEffect ********************

// ********** Begin Class UOculusXRInputFunctionLibrary ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRInputFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "OculusXRInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRInputFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRInputFunctionLibrary constinit property declarations ************
// ********** End Class UOculusXRInputFunctionLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConvertBoneToFinger"), .Pointer = &UOculusXRInputFunctionLibrary::execConvertBoneToFinger },
		{ .NameUTF8 = UTF8TEXT("GetBoneName"), .Pointer = &UOculusXRInputFunctionLibrary::execGetBoneName },
		{ .NameUTF8 = UTF8TEXT("GetBoneRotation"), .Pointer = &UOculusXRInputFunctionLibrary::execGetBoneRotation },
		{ .NameUTF8 = UTF8TEXT("GetControllerDrivenHandPoses"), .Pointer = &UOculusXRInputFunctionLibrary::execGetControllerDrivenHandPoses },
		{ .NameUTF8 = UTF8TEXT("GetControllerSampleRateHz"), .Pointer = &UOculusXRInputFunctionLibrary::execGetControllerSampleRateHz },
		{ .NameUTF8 = UTF8TEXT("GetDominantHand"), .Pointer = &UOculusXRInputFunctionLibrary::execGetDominantHand },
		{ .NameUTF8 = UTF8TEXT("GetFingerTrackingConfidence"), .Pointer = &UOculusXRInputFunctionLibrary::execGetFingerTrackingConfidence },
		{ .NameUTF8 = UTF8TEXT("GetHandJointTransform"), .Pointer = &UOculusXRInputFunctionLibrary::execGetHandJointTransform },
		{ .NameUTF8 = UTF8TEXT("GetHandScale"), .Pointer = &UOculusXRInputFunctionLibrary::execGetHandScale },
		{ .NameUTF8 = UTF8TEXT("GetHandSkeletalMesh"), .Pointer = &UOculusXRInputFunctionLibrary::execGetHandSkeletalMesh },
		{ .NameUTF8 = UTF8TEXT("GetLegacyOculusPoseTransform"), .Pointer = &UOculusXRInputFunctionLibrary::execGetLegacyOculusPoseTransform },
		{ .NameUTF8 = UTF8TEXT("GetMaxHapticDuration"), .Pointer = &UOculusXRInputFunctionLibrary::execGetMaxHapticDuration },
		{ .NameUTF8 = UTF8TEXT("GetPointerPose"), .Pointer = &UOculusXRInputFunctionLibrary::execGetPointerPose },
		{ .NameUTF8 = UTF8TEXT("GetTrackingConfidence"), .Pointer = &UOculusXRInputFunctionLibrary::execGetTrackingConfidence },
		{ .NameUTF8 = UTF8TEXT("InitializeHandPhysics"), .Pointer = &UOculusXRInputFunctionLibrary::execInitializeHandPhysics },
		{ .NameUTF8 = UTF8TEXT("IsControllerDrivenHandDataSupported"), .Pointer = &UOculusXRInputFunctionLibrary::execIsControllerDrivenHandDataSupported },
		{ .NameUTF8 = UTF8TEXT("IsHandInteractionProfile"), .Pointer = &UOculusXRInputFunctionLibrary::execIsHandInteractionProfile },
		{ .NameUTF8 = UTF8TEXT("IsHandPositionValid"), .Pointer = &UOculusXRInputFunctionLibrary::execIsHandPositionValid },
		{ .NameUTF8 = UTF8TEXT("IsHandTrackingEnabled"), .Pointer = &UOculusXRInputFunctionLibrary::execIsHandTrackingEnabled },
		{ .NameUTF8 = UTF8TEXT("IsPointerPoseValid"), .Pointer = &UOculusXRInputFunctionLibrary::execIsPointerPoseValid },
		{ .NameUTF8 = UTF8TEXT("IsSimultaneousHandsAndControllersEnabled"), .Pointer = &UOculusXRInputFunctionLibrary::execIsSimultaneousHandsAndControllersEnabled },
		{ .NameUTF8 = UTF8TEXT("PlayAmplitudeEnvelopeHapticEffect"), .Pointer = &UOculusXRInputFunctionLibrary::execPlayAmplitudeEnvelopeHapticEffect },
		{ .NameUTF8 = UTF8TEXT("PlayBufferHapticEffect"), .Pointer = &UOculusXRInputFunctionLibrary::execPlayBufferHapticEffect },
		{ .NameUTF8 = UTF8TEXT("PlayCurveHapticEffect"), .Pointer = &UOculusXRInputFunctionLibrary::execPlayCurveHapticEffect },
		{ .NameUTF8 = UTF8TEXT("PlaySoundWaveHapticEffect"), .Pointer = &UOculusXRInputFunctionLibrary::execPlaySoundWaveHapticEffect },
		{ .NameUTF8 = UTF8TEXT("SetControllerDrivenHandPoses"), .Pointer = &UOculusXRInputFunctionLibrary::execSetControllerDrivenHandPoses },
		{ .NameUTF8 = UTF8TEXT("SetHapticsByValue"), .Pointer = &UOculusXRInputFunctionLibrary::execSetHapticsByValue },
		{ .NameUTF8 = UTF8TEXT("SetSimultaneousHandsAndControllersEnabled"), .Pointer = &UOculusXRInputFunctionLibrary::execSetSimultaneousHandsAndControllersEnabled },
		{ .NameUTF8 = UTF8TEXT("StopHapticEffect"), .Pointer = &UOculusXRInputFunctionLibrary::execStopHapticEffect },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_ConvertBoneToFinger, "ConvertBoneToFinger" }, // 54a514be2896be7387e852998b448559ea860c60
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetBoneName, "GetBoneName" }, // cf3ea787a7392398a155a56e01ff4b8febdd7dca
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetBoneRotation, "GetBoneRotation" }, // 30554fc52da94496ee81250251187f0cc8dbd092
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetControllerDrivenHandPoses, "GetControllerDrivenHandPoses" }, // 95a8fab8262be8e142f91e832f69e08667663a5c
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetControllerSampleRateHz, "GetControllerSampleRateHz" }, // f23f18b093b6cf39bc35b15e30f1548f2cc6a469
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetDominantHand, "GetDominantHand" }, // 3cefd2d99d7d62250c1f4750bd532d9227d129b3
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetFingerTrackingConfidence, "GetFingerTrackingConfidence" }, // 1b32a618666efe6847ca1bd8c35044e16b425481
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandJointTransform, "GetHandJointTransform" }, // f236c98d58fdab7fb825e82b28794900138bbb7b
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandScale, "GetHandScale" }, // 7272f50af2c304ded09e833be9ec4b24318fae9e
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetHandSkeletalMesh, "GetHandSkeletalMesh" }, // 482f9e929d07ba1e0eae5c5118030398105b94a8
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetLegacyOculusPoseTransform, "GetLegacyOculusPoseTransform" }, // 35ad86ba17d86737ad3b68b0b89fe39b4c1bc2ba
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetMaxHapticDuration, "GetMaxHapticDuration" }, // d1d288d491a12f9d81f75d45f65a14684f5579d1
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetPointerPose, "GetPointerPose" }, // b0940142d9876cced447cf963864b16e445f1f2c
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_GetTrackingConfidence, "GetTrackingConfidence" }, // 1d331dd8f9d2b41029534be39f1f4cd3dfcaf88a
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_InitializeHandPhysics, "InitializeHandPhysics" }, // 963253d1182b3104a93b3af1b6c8f53f75637064
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsControllerDrivenHandDataSupported, "IsControllerDrivenHandDataSupported" }, // d66441b68e955b31bb13c0d0083ca059f131ae27
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandInteractionProfile, "IsHandInteractionProfile" }, // d7f9d36ef3d0dee452785ea2061ce211de41c6d1
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandPositionValid, "IsHandPositionValid" }, // ecfe1c4f409bad15dada00d1548ff996238245bf
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsHandTrackingEnabled, "IsHandTrackingEnabled" }, // 42f52eb673224dfa886e79da5bb641584cf7a009
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsPointerPoseValid, "IsPointerPoseValid" }, // f25755790056c3aa1bae08ebac50c38056918b90
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_IsSimultaneousHandsAndControllersEnabled, "IsSimultaneousHandsAndControllersEnabled" }, // 1b711646a9ac7697e6487e99a76e5b5dc61ddbcc
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayAmplitudeEnvelopeHapticEffect, "PlayAmplitudeEnvelopeHapticEffect" }, // 352f29038dfffa912bdac27ba993bbfb4b99fb08
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayBufferHapticEffect, "PlayBufferHapticEffect" }, // 15db56b171e9515c9655d6a43dfdb11cc5495b7f
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlayCurveHapticEffect, "PlayCurveHapticEffect" }, // f239c2bef8805d5a2218f62c530148252202c6d5
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_PlaySoundWaveHapticEffect, "PlaySoundWaveHapticEffect" }, // d9a8a1634a5aaa904263132bea675ce8f5eab8bc
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetControllerDrivenHandPoses, "SetControllerDrivenHandPoses" }, // 1d9338e9d2fc4d0096cb21617311182094944fbe
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetHapticsByValue, "SetHapticsByValue" }, // bef108c35563b2debe371917b1003519e5f7474a
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_SetSimultaneousHandsAndControllersEnabled, "SetSimultaneousHandsAndControllersEnabled" }, // e7336540ba81997601684ba062c082f77203fc28
		{ &Z_Construct_UFunction_UOculusXRInputFunctionLibrary_StopHapticEffect, "StopHapticEffect" }, // 3b6b30953a8c334779a75a4e8a0118506b54988f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRInputFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRInputFunctionLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRInputFunctionLibrary_StaticRegisterNativesUOculusXRInputFunctionLibrary()
{
	UClass* Class = UOculusXRInputFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRInputFunctionLibrary;
UClass* Z_Construct_UClass_UOculusXRInputFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRInputFunctionLibrary;
		if (!Z_Registration_Info_UClass_UOculusXRInputFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRInputFunctionLibrary"),
				Z_Registration_Info_UClass_UOculusXRInputFunctionLibrary.InnerSingleton,
				UOculusXRInputFunctionLibrary_StaticRegisterNativesUOculusXRInputFunctionLibrary,
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
		return Z_Registration_Info_UClass_UOculusXRInputFunctionLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRInputFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRInputFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRInputFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRInputFunctionLibrary);
UOculusXRInputFunctionLibrary::~UOculusXRInputFunctionLibrary() {}
// ********** End Class UOculusXRInputFunctionLibrary **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRInputFunctionLibrary_h__Script_OculusXRInput_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, TEXT("EOculusXRHandType"), &ZRIE_EOculusXRHandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3927141098U) },
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRSide, TEXT("EOculusXRSide"), &ZRIE_EOculusXRSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1582419501U) },
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRTrackingConfidence, TEXT("EOculusXRTrackingConfidence"), &ZRIE_EOculusXRTrackingConfidence, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1219508563U) },
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRFinger, TEXT("EOculusXRFinger"), &ZRIE_EOculusXRFinger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2448257927U) },
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRBone, TEXT("EOculusXRBone"), &ZRIE_EOculusXRBone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2203084146U) },
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRHandHapticsLocation, TEXT("EOculusXRHandHapticsLocation"), &ZRIE_EOculusXRHandHapticsLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2500410552U) },
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRControllerDrivenHandPoseTypes, TEXT("EOculusXRControllerDrivenHandPoseTypes"), &ZRIE_EOculusXRControllerDrivenHandPoseTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2925307764U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRCapsuleCollider, Z_Construct_UScriptStruct_FOculusXRCapsuleCollider_Statics::NewStructOps, TEXT("OculusXRCapsuleCollider"),&Z_Registration_Info_UScriptStruct_FOculusXRCapsuleCollider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRCapsuleCollider), 2926883939U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRInputFunctionLibrary, TEXT("UOculusXRInputFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRInputFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRInputFunctionLibrary), 2034601877U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRInputFunctionLibrary_h__Script_OculusXRInput_295253a15cab309160bc328800d80d22712639a3{
	TEXT("/Script/OculusXRInput"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
