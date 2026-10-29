// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitRoom.h"
#include "MRUtilityKit.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitRoom() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKRoomFilter(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKPlaneUV(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKRoomFace(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKRoomMesh(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTexCoordModes(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKRoomMesh(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EMRUKSpawnLocation ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKSpawnLocation>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AnySurface.Comment", "// Spawn somewhere floating in the free space within the room\n" },
		{ "AnySurface.DisplayName", "Any surface" },
		{ "AnySurface.Name", "EMRUKSpawnLocation::AnySurface" },
		{ "AnySurface.ToolTip", "Spawn somewhere floating in the free space within the room" },
		{ "BlueprintType", "true" },
		{ "Floating.DisplayName", "Floating" },
		{ "Floating.Name", "EMRUKSpawnLocation::Floating" },
		{ "HangingDown.Comment", "// Spawn on surfaces facing upwards such as ground, top of tables, beds, couches, etc...\n" },
		{ "HangingDown.DisplayName", "Hanging down" },
		{ "HangingDown.Name", "EMRUKSpawnLocation::HangingDown" },
		{ "HangingDown.ToolTip", "Spawn on surfaces facing upwards such as ground, top of tables, beds, couches, etc..." },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "OnTopOfSurface.Comment", "// Spawn only on vertical surfaces such as walls, windows, wall art, doors, etc...\n" },
		{ "OnTopOfSurface.DisplayName", "On top of surfaces" },
		{ "OnTopOfSurface.Name", "EMRUKSpawnLocation::OnTopOfSurface" },
		{ "OnTopOfSurface.ToolTip", "Spawn only on vertical surfaces such as walls, windows, wall art, doors, etc..." },
		{ "VerticalSurfaces.Comment", "// Spawn on any surface (i.e. a combination of all 3 options below)\n" },
		{ "VerticalSurfaces.DisplayName", "Vertical surfaces" },
		{ "VerticalSurfaces.Name", "EMRUKSpawnLocation::VerticalSurfaces" },
		{ "VerticalSurfaces.ToolTip", "Spawn on any surface (i.e. a combination of all 3 options below)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKSpawnLocation::Floating", (int64)EMRUKSpawnLocation::Floating },
		{ "EMRUKSpawnLocation::AnySurface", (int64)EMRUKSpawnLocation::AnySurface },
		{ "EMRUKSpawnLocation::VerticalSurfaces", (int64)EMRUKSpawnLocation::VerticalSurfaces },
		{ "EMRUKSpawnLocation::OnTopOfSurface", (int64)EMRUKSpawnLocation::OnTopOfSurface },
		{ "EMRUKSpawnLocation::HangingDown", (int64)EMRUKSpawnLocation::HangingDown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKSpawnLocation",
	"EMRUKSpawnLocation",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKSpawnLocation;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKSpawnLocation.OuterSingleton)
		{
			ZRIE_EMRUKSpawnLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKSpawnLocation"));
		}
		return ZRIE_EMRUKSpawnLocation.OuterSingleton;
	}
	if (!ZRIE_EMRUKSpawnLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKSpawnLocation.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKSpawnLocation.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKSpawnLocation **********************************************************

// ********** Begin Enum EMRUKRoomFilter ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKRoomFilter_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKRoomFilter>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKRoomFilter(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AllRooms.Name", "EMRUKRoomFilter::AllRooms" },
		{ "BlueprintType", "true" },
		{ "CurrentRoomOnly.Name", "EMRUKRoomFilter::CurrentRoomOnly" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "None.Name", "EMRUKRoomFilter::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKRoomFilter::None", (int64)EMRUKRoomFilter::None },
		{ "EMRUKRoomFilter::CurrentRoomOnly", (int64)EMRUKRoomFilter::CurrentRoomOnly },
		{ "EMRUKRoomFilter::AllRooms", (int64)EMRUKRoomFilter::AllRooms },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKRoomFilter",
	"EMRUKRoomFilter",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKRoomFilter;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKRoomFilter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKRoomFilter.OuterSingleton)
		{
			ZRIE_EMRUKRoomFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKRoomFilter, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKRoomFilter"));
		}
		return ZRIE_EMRUKRoomFilter.OuterSingleton;
	}
	if (!ZRIE_EMRUKRoomFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKRoomFilter.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKRoomFilter.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKRoomFilter *************************************************************

// ********** Begin Enum EMRUKPositioningMethod ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKPositioningMethod>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Center.Comment", "/**\n\x09 * Center the object on the surface.\n\x09 */" },
		{ "Center.Name", "EMRUKPositioningMethod::Center" },
		{ "Center.ToolTip", "Center the object on the surface." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Method to use when determining the position and rotation for the best pose.\n */" },
#endif
		{ "Default.Comment", "/**\n\x09 * Use the location where the ray hit the object as the location.\n\x09 * The rotation is dependent on the objects shape. For example for walls\n\x09 * the hit normal from the raycast will be used. For floors the rotation\n\x09 * will be towards the user and for volumes that got hit on the top the\n\x09 * rotation will be towards the longest edge that is nearest to the player.\n\x09 */" },
		{ "Default.Name", "EMRUKPositioningMethod::Default" },
		{ "Default.ToolTip", "Use the location where the ray hit the object as the location.\nThe rotation is dependent on the objects shape. For example for walls\nthe hit normal from the raycast will be used. For floors the rotation\nwill be towards the user and for volumes that got hit on the top the\nrotation will be towards the longest edge that is nearest to the player." },
		{ "Edge.Comment", "/**\n\x09 * Snap the object to edge which is closest to the user.\n\x09 */" },
		{ "Edge.Name", "EMRUKPositioningMethod::Edge" },
		{ "Edge.ToolTip", "Snap the object to edge which is closest to the user." },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method to use when determining the position and rotation for the best pose." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKPositioningMethod::Center", (int64)EMRUKPositioningMethod::Center },
		{ "EMRUKPositioningMethod::Edge", (int64)EMRUKPositioningMethod::Edge },
		{ "EMRUKPositioningMethod::Default", (int64)EMRUKPositioningMethod::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKPositioningMethod",
	"EMRUKPositioningMethod",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKPositioningMethod;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKPositioningMethod.OuterSingleton)
		{
			ZRIE_EMRUKPositioningMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKPositioningMethod"));
		}
		return ZRIE_EMRUKPositioningMethod.OuterSingleton;
	}
	if (!ZRIE_EMRUKPositioningMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKPositioningMethod.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKPositioningMethod.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKPositioningMethod ******************************************************

// ********** Begin ScriptStruct FMRUKAnchorWithPlaneUVs *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKAnchorWithPlaneUVs>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKAnchorWithPlaneUVs); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents an anchor with its corresponding plane UVs in the Mixed Reality Utility Kit.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents an anchor with its corresponding plane UVs in the Mixed Reality Utility Kit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * A readonly reference to the anchor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A readonly reference to the anchor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneUVs_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * An array of plane UVs that correspond to the anchor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of plane UVs that correspond to the anchor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKAnchorWithPlaneUVs constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneUVs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneUVs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKAnchorWithPlaneUVs constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKAnchorWithPlaneUVs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKAnchorWithPlaneUVs Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKAnchorWithPlaneUVs, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anchor_MetaData), NewProp_Anchor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlaneUVs_Inner = { "PlaneUVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKPlaneUV, METADATA_PARAMS(0, nullptr) }; // 4b00a33c158aa55d820c924fd8614850e93b068b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PlaneUVs = { "PlaneUVs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKAnchorWithPlaneUVs, PlaneUVs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneUVs_MetaData), NewProp_PlaneUVs_MetaData) }; // 4b00a33c158aa55d820c924fd8614850e93b068b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneUVs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneUVs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKAnchorWithPlaneUVs Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKAnchorWithPlaneUVs",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKAnchorWithPlaneUVs>(),
	alignof(FMRUKAnchorWithPlaneUVs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKAnchorWithPlaneUVs;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKAnchorWithPlaneUVs.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKAnchorWithPlaneUVs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKAnchorWithPlaneUVs"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKAnchorWithPlaneUVs.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKAnchorWithPlaneUVs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKAnchorWithPlaneUVs.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKAnchorWithPlaneUVs.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKAnchorWithPlaneUVs *********************************************

// ********** Begin ScriptStruct FMRUKRoomFace *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKRoomFace_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKRoomFace>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKRoomFace); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a face in the room mesh, containing information about its geometry and semantic classification.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a face in the room mesh, containing information about its geometry and semantic classification." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKRoomFace constinit property declarations *********************
// ********** End ScriptStruct FMRUKRoomFace constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKRoomFace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKRoomFace",
	nullptr,
	0,
	DataSizeOf<FMRUKRoomFace>(),
	alignof(FMRUKRoomFace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKRoomFace;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKRoomFace(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKRoomFace.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKRoomFace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKRoomFace, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKRoomFace"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKRoomFace.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKRoomFace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKRoomFace.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKRoomFace.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKRoomFace *******************************************************

// ********** Begin Class UMRUKRoomMesh ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKRoomMesh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents the complete mesh data for a room, including vertices and faces.\n */" },
#endif
		{ "IncludePath", "MRUtilityKitRoom.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the complete mesh data for a room, including vertices and faces." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of all vertices that make up the room mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of all vertices that make up the room mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faces_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of all faces that make up the room mesh, each containing indices into the Vertices list.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of all faces that make up the room mesh, each containing indices into the Vertices list." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKRoomMesh constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Faces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Faces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKRoomMesh constinit property declarations ******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKRoomMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKRoomMesh Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKRoomMesh, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Faces_Inner = { "Faces", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKRoomFace, METADATA_PARAMS(0, nullptr) }; // 31f7b5d3f80896259c454afd4774abe96618c26f
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Faces = { "Faces", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKRoomMesh, Faces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faces_MetaData), NewProp_Faces_MetaData) }; // 31f7b5d3f80896259c454afd4774abe96618c26f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Faces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Faces,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKRoomMesh Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKRoomMesh,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKRoomMesh;
UClass* Z_Construct_UClass_UMRUKRoomMesh(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKRoomMesh;
		if (!Z_Registration_Info_UClass_UMRUKRoomMesh.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKRoomMesh"),
				Z_Registration_Info_UClass_UMRUKRoomMesh.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMRUKRoomMesh.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKRoomMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKRoomMesh.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKRoomMesh.OuterSingleton;
}
#undef UHT_STATICS
UMRUKRoomMesh::UMRUKRoomMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKRoomMesh);
UMRUKRoomMesh::~UMRUKRoomMesh() {}
// ********** End Class UMRUKRoomMesh **************************************************************

// ********** Begin Delegate FOnAnchorUpdated ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventOnAnchorUpdated_Parms
	{
		AMRUKAnchor* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAnchorUpdated constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAnchorUpdated constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAnchorUpdated Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventOnAnchorUpdated_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnAnchorUpdated Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "OnAnchorUpdated__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventOnAnchorUpdated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventOnAnchorUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnAnchorUpdated ********************************************************

// ********** Begin Delegate FOnAnchorCreated ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventOnAnchorCreated_Parms
	{
		AMRUKAnchor* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAnchorCreated constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAnchorCreated constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAnchorCreated Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventOnAnchorCreated_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnAnchorCreated Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "OnAnchorCreated__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventOnAnchorCreated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventOnAnchorCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnAnchorCreated ********************************************************

// ********** Begin Delegate FOnAnchorRemoved ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventOnAnchorRemoved_Parms
	{
		AMRUKAnchor* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAnchorRemoved constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAnchorRemoved constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAnchorRemoved Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventOnAnchorRemoved_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnAnchorRemoved Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "OnAnchorRemoved__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventOnAnchorRemoved_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventOnAnchorRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnAnchorRemoved ********************************************************

// ********** Begin Class AMRUKRoom Function AddAnchorToRoom ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventAddAnchorToRoom_Parms
	{
		AMRUKAnchor* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAnchorToRoom constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAnchorToRoom constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAnchorToRoom Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventAddAnchorToRoom_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddAnchorToRoom Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "AddAnchorToRoom", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventAddAnchorToRoom_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventAddAnchorToRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execAddAnchorToRoom)
{
	P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAnchorToRoom(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function AddAnchorToRoom *****************************************

// ********** Begin Class AMRUKRoom Function AttachProceduralMeshToWalls ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventAttachProceduralMeshToWalls_Parms
	{
		TArray<FMRUKTexCoordModes> WallTextureCoordinateModes;
		TArray<FString> CutHoleLabels;
		UMaterialInterface* ProceduralMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "WallTextureCoordinateModes" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Attach a procedural mesh to the walls. This is done at the room level to ensure the UV coordinates\n\x09 * can be done in a seamless way if desired.\n\x09 * @param WallTextureCoordinateModes\x09Mode of the wall texture coordinates.\n\x09 * @param CutHoleLabels                 Labels for which holes should be cut into the plane meshes\n\x09 * @param ProceduralMaterial\x09\x09\x09Material to apply on top of the procedural mesh.\n\x09 */" },
#endif
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AMRUKAnchorActorSpawner instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach a procedural mesh to the walls. This is done at the room level to ensure the UV coordinates\ncan be done in a seamless way if desired.\n@param WallTextureCoordinateModes    Mode of the wall texture coordinates.\n@param CutHoleLabels                 Labels for which holes should be cut into the plane meshes\n@param ProceduralMaterial                    Material to apply on top of the procedural mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallTextureCoordinateModes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutHoleLabels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttachProceduralMeshToWalls constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallTextureCoordinateModes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WallTextureCoordinateModes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CutHoleLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CutHoleLabels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AttachProceduralMeshToWalls constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AttachProceduralMeshToWalls Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WallTextureCoordinateModes_Inner = { "WallTextureCoordinateModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKTexCoordModes, METADATA_PARAMS(0, nullptr) }; // e7b470f8de3d10e1faea5c9dae7ece56cc7ad920
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WallTextureCoordinateModes = { "WallTextureCoordinateModes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventAttachProceduralMeshToWalls_Parms, WallTextureCoordinateModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallTextureCoordinateModes_MetaData), NewProp_WallTextureCoordinateModes_MetaData) }; // e7b470f8de3d10e1faea5c9dae7ece56cc7ad920
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CutHoleLabels_Inner = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CutHoleLabels = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventAttachProceduralMeshToWalls_Parms, CutHoleLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutHoleLabels_MetaData), NewProp_CutHoleLabels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventAttachProceduralMeshToWalls_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallTextureCoordinateModes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallTextureCoordinateModes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AttachProceduralMeshToWalls Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "AttachProceduralMeshToWalls", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventAttachProceduralMeshToWalls_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventAttachProceduralMeshToWalls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execAttachProceduralMeshToWalls)
{
	P_GET_TARRAY_REF(FMRUKTexCoordModes,Z_Param_Out_WallTextureCoordinateModes);
	P_GET_TARRAY_REF(FString,Z_Param_Out_CutHoleLabels);
	P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachProceduralMeshToWalls(Z_Param_Out_WallTextureCoordinateModes,Z_Param_Out_CutHoleLabels,Z_Param_ProceduralMaterial);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function AttachProceduralMeshToWalls *****************************

// ********** Begin Class AMRUKRoom Function ClearRoom *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_ClearRoom_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clear all anchors from the room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all anchors from the room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearRoom constinit property declarations *****************************
// ********** End Function ClearRoom constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "ClearRoom", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AMRUKRoom_ClearRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execClearRoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearRoom();
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function ClearRoom ***********************************************

// ********** Begin Class AMRUKRoom Function ComputeCentroid ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_ComputeCentroid_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventComputeCentroid_Parms
	{
		double Z;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Compute the centroid of the room by taking the points of the floor boundary.\n\x09 * The centroid may be outside of the room for non convex rooms.\n\x09 * The Z value determines the height of the resulting vectors and ranges from\n\x09 * 0 to 1. A Z value of 1 corresponds to the ceiling positions Z, while a Z value\n\x09 * of 0 corresponds to the floor positions Z. Any value between 0 and 1 will\n\x09 * interpolate between the two values.\n\x09 * In case the floor and ceiling anchors haven't been loaded yet a zero vector\n\x09 * will be returned.\n\x09 * @param  Z Value used for interpolation of Z.\n\x09 * @return The centroid.\n\x09 */" },
#endif
		{ "CPP_Default_Z", "0.500000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compute the centroid of the room by taking the points of the floor boundary.\nThe centroid may be outside of the room for non convex rooms.\nThe Z value determines the height of the resulting vectors and ranges from\n0 to 1. A Z value of 1 corresponds to the ceiling positions Z, while a Z value\nof 0 corresponds to the floor positions Z. Any value between 0 and 1 will\ninterpolate between the two values.\nIn case the floor and ceiling anchors haven't been loaded yet a zero vector\nwill be returned.\n@param  Z Value used for interpolation of Z.\n@return The centroid." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ComputeCentroid constinit property declarations ***********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ComputeCentroid constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ComputeCentroid Property Definitions **********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventComputeCentroid_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventComputeCentroid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ComputeCentroid Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "ComputeCentroid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventComputeCentroid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventComputeCentroid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_ComputeCentroid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execComputeCentroid)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Z);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ComputeCentroid(Z_Param_Z);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function ComputeCentroid *****************************************

// ********** Begin Class AMRUKRoom Function ComputeWallMeshUVAdjustments **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventComputeWallMeshUVAdjustments_Parms
	{
		TArray<FMRUKTexCoordModes> WallTextureCoordinateModes;
		TArray<FMRUKAnchorWithPlaneUVs> OutAnchorsWithPlaneUVs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Compute the wall mesh texture coordinate adjustments that are needed to generate proper texture coordinates for the walls.\n\x09 * @param WallTextureCoordinateModes The texture coordinate mode to use for the walls.\n\x09 * @param OutAnchorsWithPlaneUVs     The computed texture coordinate adjustment with the wall anchor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compute the wall mesh texture coordinate adjustments that are needed to generate proper texture coordinates for the walls.\n@param WallTextureCoordinateModes The texture coordinate mode to use for the walls.\n@param OutAnchorsWithPlaneUVs     The computed texture coordinate adjustment with the wall anchor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallTextureCoordinateModes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ComputeWallMeshUVAdjustments constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallTextureCoordinateModes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WallTextureCoordinateModes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAnchorsWithPlaneUVs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnchorsWithPlaneUVs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ComputeWallMeshUVAdjustments constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ComputeWallMeshUVAdjustments Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WallTextureCoordinateModes_Inner = { "WallTextureCoordinateModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKTexCoordModes, METADATA_PARAMS(0, nullptr) }; // e7b470f8de3d10e1faea5c9dae7ece56cc7ad920
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WallTextureCoordinateModes = { "WallTextureCoordinateModes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventComputeWallMeshUVAdjustments_Parms, WallTextureCoordinateModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallTextureCoordinateModes_MetaData), NewProp_WallTextureCoordinateModes_MetaData) }; // e7b470f8de3d10e1faea5c9dae7ece56cc7ad920
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutAnchorsWithPlaneUVs_Inner = { "OutAnchorsWithPlaneUVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs, METADATA_PARAMS(0, nullptr) }; // 3e7890419791be1c660cfa59614c388744d33433
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutAnchorsWithPlaneUVs = { "OutAnchorsWithPlaneUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventComputeWallMeshUVAdjustments_Parms, OutAnchorsWithPlaneUVs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3e7890419791be1c660cfa59614c388744d33433
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallTextureCoordinateModes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallTextureCoordinateModes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAnchorsWithPlaneUVs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAnchorsWithPlaneUVs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ComputeWallMeshUVAdjustments Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "ComputeWallMeshUVAdjustments", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventComputeWallMeshUVAdjustments_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventComputeWallMeshUVAdjustments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execComputeWallMeshUVAdjustments)
{
	P_GET_TARRAY_REF(FMRUKTexCoordModes,Z_Param_Out_WallTextureCoordinateModes);
	P_GET_TARRAY_REF(FMRUKAnchorWithPlaneUVs,Z_Param_Out_OutAnchorsWithPlaneUVs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeWallMeshUVAdjustments(Z_Param_Out_WallTextureCoordinateModes,Z_Param_Out_OutAnchorsWithPlaneUVs);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function ComputeWallMeshUVAdjustments ****************************

// ********** Begin Class AMRUKRoom Function DoesRoomHave ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventDoesRoomHave_Parms
	{
		TArray<FString> Labels;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the room does have any of the labels.\n\x09 * @param Labels\x09The labels to check.\n\x09 * @return\x09\x09\x09Whether the label was found in the room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the room does have any of the labels.\n@param Labels        The labels to check.\n@return                      Whether the label was found in the room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesRoomHave constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Labels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventDoesRoomHave_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesRoomHave constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesRoomHave Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventDoesRoomHave_Parms, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Labels_MetaData), NewProp_Labels_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventDoesRoomHave_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Labels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Labels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DoesRoomHave Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "DoesRoomHave", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventDoesRoomHave_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventDoesRoomHave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_DoesRoomHave(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execDoesRoomHave)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Labels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesRoomHave(Z_Param_Out_Labels);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function DoesRoomHave ********************************************

// ********** Begin Class AMRUKRoom Function GenerateProceduralSceneMesh ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GenerateProceduralSceneMesh_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGenerateProceduralSceneMesh_Parms
	{
		UMaterialInterface* Material;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate the triangle mesh of the scene mesh anchor. For the generation successful the room needs\n\x09 * to have an anchor that is labeled with GLOBAL_MESH.\n\x09 * @param Material   Material to apply on the generated triangle mesh.\n\x09 * @return           On Success true, otherwise false.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate the triangle mesh of the scene mesh anchor. For the generation successful the room needs\nto have an anchor that is labeled with GLOBAL_MESH.\n@param Material   Material to apply on the generated triangle mesh.\n@return           On Success true, otherwise false." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateProceduralSceneMesh constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateProceduralSceneMesh_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateProceduralSceneMesh constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateProceduralSceneMesh Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateProceduralSceneMesh_Parms, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateProceduralSceneMesh_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateProceduralSceneMesh Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GenerateProceduralSceneMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGenerateProceduralSceneMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGenerateProceduralSceneMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GenerateProceduralSceneMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGenerateProceduralSceneMesh)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateProceduralSceneMesh(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GenerateProceduralSceneMesh *****************************

// ********** Begin Class AMRUKRoom Function GenerateRandomPositionInRoom **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGenerateRandomPositionInRoom_Parms
	{
		FVector OutPosition;
		float MinDistanceToSurface;
		bool AvoidVolumes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate a uniform random position within the room.\n\x09 * @param OutPosition\x09\x09\x09""Contains the randomly generated position.\n\x09 * @param MinDistanceToSurface\x09The minimum distance between the generated position and the closest surface/volume.\n\x09 * @param AvoidVolumes\x09\x09\x09If true then the position will not be inside a volume and min distance away from it.\n\x09 * @return\x09\x09\x09\x09\x09\x09Return true if success otherwise false. If this fails it can be because the min distance to surface is too large.\n\x09 */" },
#endif
		{ "CPP_Default_AvoidVolumes", "false" },
		{ "CPP_Default_MinDistanceToSurface", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a uniform random position within the room.\n@param OutPosition                   Contains the randomly generated position.\n@param MinDistanceToSurface  The minimum distance between the generated position and the closest surface/volume.\n@param AvoidVolumes                  If true then the position will not be inside a volume and min distance away from it.\n@return                                              Return true if success otherwise false. If this fails it can be because the min distance to surface is too large." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRandomPositionInRoom constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToSurface;
	static void NewProp_AvoidVolumes_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionInRoom_Parms*)Obj)->AvoidVolumes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AvoidVolumes;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionInRoom_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRandomPositionInRoom constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRandomPositionInRoom Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoom_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinDistanceToSurface = { "MinDistanceToSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoom_Parms, MinDistanceToSurface), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AvoidVolumes = { "AvoidVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionInRoom_Parms), &UHT_STATICS::NewProp_AvoidVolumes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionInRoom_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDistanceToSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AvoidVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRandomPositionInRoom Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GenerateRandomPositionInRoom", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGenerateRandomPositionInRoom_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGenerateRandomPositionInRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGenerateRandomPositionInRoom)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistanceToSurface);
	P_GET_UBOOL(Z_Param_AvoidVolumes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateRandomPositionInRoom(Z_Param_Out_OutPosition,Z_Param_MinDistanceToSurface,Z_Param_AvoidVolumes);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GenerateRandomPositionInRoom ****************************

// ********** Begin Class AMRUKRoom Function GenerateRandomPositionInRoomFromStream ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms
	{
		FVector OutPosition;
		FRandomStream RandomStream;
		float MinDistanceToSurface;
		bool AvoidVolumes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate a uniform random position within the room from a random stream.\n\x09 * @param OutPosition\x09\x09\x09""Contains the randomly generated position.\n\x09 * @param RandomStream\x09\x09\x09""A random generator used to generate the position on the plane.\n\x09 * @param MinDistanceToSurface\x09The minimum distance between the generated position and the closest surface/volume.\n\x09 * @param AvoidVolumes\x09\x09\x09If true then the position will not be inside a volume and min distance away from it.\n\x09 * @return\x09\x09\x09\x09\x09\x09Return true if success otherwise false. If this fails it can be because the min distance to surface is too large.\n\x09 */" },
#endif
		{ "CPP_Default_AvoidVolumes", "false" },
		{ "CPP_Default_MinDistanceToSurface", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a uniform random position within the room from a random stream.\n@param OutPosition                   Contains the randomly generated position.\n@param RandomStream                  A random generator used to generate the position on the plane.\n@param MinDistanceToSurface  The minimum distance between the generated position and the closest surface/volume.\n@param AvoidVolumes                  If true then the position will not be inside a volume and min distance away from it.\n@return                                              Return true if success otherwise false. If this fails it can be because the min distance to surface is too large." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRandomPositionInRoomFromStream constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToSurface;
	static void NewProp_AvoidVolumes_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms*)Obj)->AvoidVolumes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AvoidVolumes;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRandomPositionInRoomFromStream constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRandomPositionInRoomFromStream Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinDistanceToSurface = { "MinDistanceToSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms, MinDistanceToSurface), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AvoidVolumes = { "AvoidVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms), &UHT_STATICS::NewProp_AvoidVolumes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDistanceToSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AvoidVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRandomPositionInRoomFromStream Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GenerateRandomPositionInRoomFromStream", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGenerateRandomPositionInRoomFromStream)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistanceToSurface);
	P_GET_UBOOL(Z_Param_AvoidVolumes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateRandomPositionInRoomFromStream(Z_Param_Out_OutPosition,Z_Param_Out_RandomStream,Z_Param_MinDistanceToSurface,Z_Param_AvoidVolumes);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GenerateRandomPositionInRoomFromStream ******************

// ********** Begin Class AMRUKRoom Function GenerateRandomPositionOnSurface ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionOnSurface_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGenerateRandomPositionOnSurface_Parms
	{
		EMRUKSpawnLocation SpawnLocation;
		float MinDistanceToEdge;
		FMRUKLabelFilter LabelFilter;
		FVector OutPosition;
		FVector OutNormal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generates a random position on the surface of a given spawn location, while ensuring that the generated position is at least `MinDistanceToEdge` away from any edges. The `LabelFilter` parameter allows you to specify which types of surfaces should be considered for generating the random position.\n\x09 *\n\x09 * @param SpawnLocation\x09\x09\x09The location where the random position should be generated.\n\x09 * @param MinDistanceToEdge\x09\x09The minimum distance from the edge that the generated position must have.\n\x09 * @param LabelFilter\x09\x09\x09""A filter that specifies which types of surfaces should be considered for generating the random position.\n\x09 * @param OutPosition\x09\x09\x09The generated position.\n\x09 * @param OutNormal\x09\x09\x09\x09The normal vector of the generated position.\n\x09 * @return\x09\x09\x09\x09\x09\x09""A boolean value indicating whether a valid position was found. If no valid position could be found, both `OutPosition` and `OutNormal` will be set to zero vectors.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates a random position on the surface of a given spawn location, while ensuring that the generated position is at least `MinDistanceToEdge` away from any edges. The `LabelFilter` parameter allows you to specify which types of surfaces should be considered for generating the random position.\n\n@param SpawnLocation                 The location where the random position should be generated.\n@param MinDistanceToEdge             The minimum distance from the edge that the generated position must have.\n@param LabelFilter                   A filter that specifies which types of surfaces should be considered for generating the random position.\n@param OutPosition                   The generated position.\n@param OutNormal                             The normal vector of the generated position.\n@return                                              A boolean value indicating whether a valid position was found. If no valid position could be found, both `OutPosition` and `OutNormal` will be set to zero vectors." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRandomPositionOnSurface constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToEdge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutNormal;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionOnSurface_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRandomPositionOnSurface constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRandomPositionOnSurface Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SpawnLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionOnSurface_Parms, SpawnLocation), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation, METADATA_PARAMS(0, nullptr) }; // ddb178e63b7d21bd8c6fa6289898c6c6c684e8e1
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinDistanceToEdge = { "MinDistanceToEdge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionOnSurface_Parms, MinDistanceToEdge), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionOnSurface_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(0, nullptr) }; // 24abff6d460a2cf96abe632a3c772a3d003a8c5f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionOnSurface_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutNormal = { "OutNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionOnSurface_Parms, OutNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionOnSurface_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDistanceToEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRandomPositionOnSurface Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GenerateRandomPositionOnSurface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGenerateRandomPositionOnSurface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGenerateRandomPositionOnSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionOnSurface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGenerateRandomPositionOnSurface)
{
	P_GET_ENUM(EMRUKSpawnLocation,Z_Param_SpawnLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistanceToEdge);
	P_GET_STRUCT(FMRUKLabelFilter,Z_Param_LabelFilter);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateRandomPositionOnSurface(EMRUKSpawnLocation(Z_Param_SpawnLocation),Z_Param_MinDistanceToEdge,Z_Param_LabelFilter,Z_Param_Out_OutPosition,Z_Param_Out_OutNormal);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GenerateRandomPositionOnSurface *************************

// ********** Begin Class AMRUKRoom Function GetAnchorsByLabel *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGetAnchorsByLabel_Parms
	{
		FString Label;
		TArray<AMRUKAnchor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds all anchors in this room that have the given label attached.\n\x09 * @param Label The label to search for.\n\x09 * @return      An array off anchors with the given label.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds all anchors in this room that have the given label attached.\n@param Label The label to search for.\n@return      An array off anchors with the given label." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAnchorsByLabel constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAnchorsByLabel constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAnchorsByLabel Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetAnchorsByLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetAnchorsByLabel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAnchorsByLabel Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GetAnchorsByLabel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGetAnchorsByLabel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGetAnchorsByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGetAnchorsByLabel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AMRUKAnchor*>*)Z_Param__Result=P_THIS->GetAnchorsByLabel(Z_Param_Label);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GetAnchorsByLabel ***************************************

// ********** Begin Class AMRUKRoom Function GetBestPoseFromRaycast ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGetBestPoseFromRaycast_Parms
	{
		FVector RayOrigin;
		FVector RayDirection;
		double MaxDist;
		FMRUKLabelFilter LabelFilter;
		FTransform OutPose;
		EMRUKPositioningMethod PositioningMethod;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a suggested pose (position & rotation) from a raycast to place objects on surfaces in the scene.\n\x09 * There are different positioning modes available. Default just uses the position where the raycast\n\x09 * hit the object. Edge snaps the position to the edge that is nearest to the user and Center simply\n\x09 * centers the position on top of the surface.\n\x09 * @param RayOrigin         The origin of the ray.\n\x09 * @param RayDirection      The direction of the ray.\n\x09 * @param MaxDist           The maximum distance the ray should travel.\n\x09 * @param LabelFilter       The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutPose           The calculated pose.\n\x09 * @param PositioningMethod The method that should be used for determining the position on the surface.\n\x09 * @return                  The anchor that was hit by the ray if any. Otherwise a null pointer.\n\x09 */" },
#endif
		{ "CPP_Default_PositioningMethod", "Default" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a suggested pose (position & rotation) from a raycast to place objects on surfaces in the scene.\nThere are different positioning modes available. Default just uses the position where the raycast\nhit the object. Edge snaps the position to the edge that is nearest to the user and Center simply\ncenters the position on top of the surface.\n@param RayOrigin         The origin of the ray.\n@param RayDirection      The direction of the ray.\n@param MaxDist           The maximum distance the ray should travel.\n@param LabelFilter       The label filter can be used to include/exclude certain labels from the search.\n@param OutPose           The calculated pose.\n@param PositioningMethod The method that should be used for determining the position on the surface.\n@return                  The anchor that was hit by the ray if any. Otherwise a null pointer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBestPoseFromRaycast constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPose;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositioningMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositioningMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBestPoseFromRaycast constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBestPoseFromRaycast Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayOrigin_MetaData), NewProp_RayOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayDirection_MetaData), NewProp_RayDirection_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 24abff6d460a2cf96abe632a3c772a3d003a8c5f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPose = { "OutPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, OutPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PositioningMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PositioningMethod = { "PositioningMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, PositioningMethod), Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod, METADATA_PARAMS(0, nullptr) }; // 370fd55aaa5b511496c376175cbe3e2fa3bdbb35
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RayOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RayDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PositioningMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PositioningMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBestPoseFromRaycast Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GetBestPoseFromRaycast", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGetBestPoseFromRaycast_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGetBestPoseFromRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGetBestPoseFromRaycast)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RayOrigin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RayDirection);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxDist);
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutPose);
	P_GET_ENUM(EMRUKPositioningMethod,Z_Param_PositioningMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetBestPoseFromRaycast(Z_Param_Out_RayOrigin,Z_Param_Out_RayDirection,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutPose,EMRUKPositioningMethod(Z_Param_PositioningMethod));
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GetBestPoseFromRaycast **********************************

// ********** Begin Class AMRUKRoom Function GetCeilingAnchor **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GetCeilingAnchor_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGetCeilingAnchor_Parms
	{
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCeilingAnchor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCeilingAnchor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCeilingAnchor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetCeilingAnchor_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCeilingAnchor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GetCeilingAnchor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGetCeilingAnchor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGetCeilingAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GetCeilingAnchor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGetCeilingAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetCeilingAnchor();
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GetCeilingAnchor ****************************************

// ********** Begin Class AMRUKRoom Function GetFirstAnchorByLabel *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGetFirstAnchorByLabel_Parms
	{
		FString Label;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds the first anchor in this room that has the given label attached.\n\x09 * @param Label The label to search for.\n\x09 * @return      If found, the Anchor that has the label attached. Otherwise a null pointer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the first anchor in this room that has the given label attached.\n@param Label The label to search for.\n@return      If found, the Anchor that has the label attached. Otherwise a null pointer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFirstAnchorByLabel constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFirstAnchorByLabel constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFirstAnchorByLabel Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetFirstAnchorByLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetFirstAnchorByLabel_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFirstAnchorByLabel Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GetFirstAnchorByLabel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGetFirstAnchorByLabel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGetFirstAnchorByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGetFirstAnchorByLabel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetFirstAnchorByLabel(Z_Param_Label);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GetFirstAnchorByLabel ***********************************

// ********** Begin Class AMRUKRoom Function GetFloorAnchor ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GetFloorAnchor_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGetFloorAnchor_Parms
	{
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloorAnchor constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloorAnchor constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloorAnchor Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetFloorAnchor_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFloorAnchor Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GetFloorAnchor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGetFloorAnchor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGetFloorAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GetFloorAnchor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGetFloorAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetFloorAnchor();
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GetFloorAnchor ******************************************

// ********** Begin Class AMRUKRoom Function GetKeyWall ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGetKeyWall_Parms
	{
		double Tolerance;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the longest wall in the room that has no other walls behind it.\n\x09 * @param Tolerance The tolerance to use when determining wall that are behind.\n\x09 * @return          The wall anchor that is the key wall in the room.\n\x09 */" },
#endif
		{ "CPP_Default_Tolerance", "0.100000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the longest wall in the room that has no other walls behind it.\n@param Tolerance The tolerance to use when determining wall that are behind.\n@return          The wall anchor that is the key wall in the room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetKeyWall constinit property declarations ****************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetKeyWall constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetKeyWall Property Definitions ***************************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetKeyWall_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetKeyWall_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetKeyWall Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GetKeyWall", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGetKeyWall_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGetKeyWall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GetKeyWall(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGetKeyWall)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetKeyWall(Z_Param_Tolerance);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GetKeyWall **********************************************

// ********** Begin Class AMRUKRoom Function GetLargestSurface *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGetLargestSurface_Parms
	{
		FString Label;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the largest surface for a given label.\n\x09 * @param Label The label of the surfaces to search in.\n\x09 * @return      The anchor that has the largest surface if any. Otherwise, a null pointer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the largest surface for a given label.\n@param Label The label of the surfaces to search in.\n@return      The anchor that has the largest surface if any. Otherwise, a null pointer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLargestSurface constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLargestSurface constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLargestSurface Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetLargestSurface_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetLargestSurface_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLargestSurface Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GetLargestSurface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGetLargestSurface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGetLargestSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GetLargestSurface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGetLargestSurface)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetLargestSurface(Z_Param_Label);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GetLargestSurface ***************************************

// ********** Begin Class AMRUKRoom Function GetRoomEdges ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_GetRoomEdges_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventGetRoomEdges_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomEdges constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomEdges constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomEdges Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetRoomEdges_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoomEdges Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "GetRoomEdges", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventGetRoomEdges_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventGetRoomEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_GetRoomEdges(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execGetRoomEdges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetRoomEdges();
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function GetRoomEdges ********************************************

// ********** Begin Class AMRUKRoom Function IsPositionInRoom **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventIsPositionInRoom_Parms
	{
		FVector Position;
		bool TestVerticalBounds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check whether the position is inside the room or not.\n\x09 * @param Position           The position in world space to check.\n\x09 * @param TestVerticalBounds Whether the room should be constrained by vertical bounds or not in the check.\n\x09 * @return                   Whether the position is inside the room or not.\n\x09 */" },
#endif
		{ "CPP_Default_TestVerticalBounds", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether the position is inside the room or not.\n@param Position           The position in world space to check.\n@param TestVerticalBounds Whether the room should be constrained by vertical bounds or not in the check.\n@return                   Whether the position is inside the room or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPositionInRoom constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_TestVerticalBounds_SetBit(void* Obj)
	{
		((MRUKRoom_eventIsPositionInRoom_Parms*)Obj)->TestVerticalBounds = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TestVerticalBounds;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventIsPositionInRoom_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPositionInRoom constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPositionInRoom Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsPositionInRoom_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_TestVerticalBounds = { "TestVerticalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventIsPositionInRoom_Parms), &UHT_STATICS::NewProp_TestVerticalBounds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventIsPositionInRoom_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestVerticalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPositionInRoom Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "IsPositionInRoom", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventIsPositionInRoom_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventIsPositionInRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execIsPositionInRoom)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_UBOOL(Z_Param_TestVerticalBounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPositionInRoom(Z_Param_Out_Position,Z_Param_TestVerticalBounds);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function IsPositionInRoom ****************************************

// ********** Begin Class AMRUKRoom Function IsPositionInSceneVolume *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventIsPositionInSceneVolume_Parms
	{
		FVector WorldPosition;
		bool TestVerticalBounds;
		double Tolerance;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the given position is on or inside of any scene volume in the room.\n\x09 * Floor, ceiling and wall anchors will be excluded from the search.\n\x09 * @param WorldPosition      The position in world space to check\n\x09 * @param TestVerticalBounds Whether the vertical bounds should be checked or not\n\x09 * @param Tolerance          Tolerance\n\x09 * @return\x09\x09\x09\x09\x09 The anchor the WorldPosition is in. A null pointer otherwise.\n\x09 */" },
#endif
		{ "CPP_Default_TestVerticalBounds", "true" },
		{ "CPP_Default_Tolerance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the given position is on or inside of any scene volume in the room.\nFloor, ceiling and wall anchors will be excluded from the search.\n@param WorldPosition      The position in world space to check\n@param TestVerticalBounds Whether the vertical bounds should be checked or not\n@param Tolerance          Tolerance\n@return                                       The anchor the WorldPosition is in. A null pointer otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPositionInSceneVolume constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static void NewProp_TestVerticalBounds_SetBit(void* Obj)
	{
		((MRUKRoom_eventIsPositionInSceneVolume_Parms*)Obj)->TestVerticalBounds = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TestVerticalBounds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPositionInSceneVolume constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPositionInSceneVolume Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsPositionInSceneVolume_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_TestVerticalBounds = { "TestVerticalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventIsPositionInSceneVolume_Parms), &UHT_STATICS::NewProp_TestVerticalBounds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsPositionInSceneVolume_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsPositionInSceneVolume_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestVerticalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPositionInSceneVolume Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "IsPositionInSceneVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventIsPositionInSceneVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventIsPositionInSceneVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execIsPositionInSceneVolume)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_UBOOL(Z_Param_TestVerticalBounds);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->IsPositionInSceneVolume(Z_Param_Out_WorldPosition,Z_Param_TestVerticalBounds,Z_Param_Tolerance);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function IsPositionInSceneVolume *********************************

// ********** Begin Class AMRUKRoom Function IsWallAnchor ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventIsWallAnchor_Parms
	{
		AMRUKAnchor* Anchor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the given anchor is a wall anchor.\n\x09 * @param Anchor The anchor to check.\n\x09 * @return       Whether the anchor is a wall anchor or not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the given anchor is a wall anchor.\n@param Anchor The anchor to check.\n@return       Whether the anchor is a wall anchor or not." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsWallAnchor constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventIsWallAnchor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsWallAnchor constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsWallAnchor Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsWallAnchor_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventIsWallAnchor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsWallAnchor Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "IsWallAnchor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventIsWallAnchor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventIsWallAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_IsWallAnchor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execIsWallAnchor)
{
	P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWallAnchor(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function IsWallAnchor ********************************************

// ********** Begin Class AMRUKRoom Function LoadGlobalMeshFromDevice ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventLoadGlobalMeshFromDevice_Parms
	{
		UMaterialInterface* Material;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Deprecated, use GenerateProceduralSceneMesh instead.\n\x09 * Load the triangle mesh of the global mesh anchor if it's available.\n\x09 * @param Material The Material to show if the global mesh is visible.\n\x09 * @return         On success true, otherwise false.\n\x09 */" },
#endif
		{ "CPP_Default_Material", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GenerateProceduralSceneMesh instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated, use GenerateProceduralSceneMesh instead.\nLoad the triangle mesh of the global mesh anchor if it's available.\n@param Material The Material to show if the global mesh is visible.\n@return         On success true, otherwise false." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LoadGlobalMeshFromDevice constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventLoadGlobalMeshFromDevice_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadGlobalMeshFromDevice constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadGlobalMeshFromDevice Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventLoadGlobalMeshFromDevice_Parms, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventLoadGlobalMeshFromDevice_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadGlobalMeshFromDevice Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "LoadGlobalMeshFromDevice", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventLoadGlobalMeshFromDevice_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventLoadGlobalMeshFromDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execLoadGlobalMeshFromDevice)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadGlobalMeshFromDevice(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function LoadGlobalMeshFromDevice ********************************

// ********** Begin Class AMRUKRoom Function LoadGlobalMeshFromJsonString **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms
	{
		FString JsonString;
		UMaterialInterface* Material;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Deprecated, use GenerateProceduralSceneMesh instead.\n\x09 * Load the triangle mesh of the global mesh anchor. For this function to succeed you need to make\n\x09 * sure to have a global mesh specified in the JSON file. Not every JSON file has a global mesh in it.\n\x09 * @param JsonString The string with the JSON data.\n\x09 * @param Material   Material to apply on the global mesh.\n\x09 * @return           On Success true, otherwise false.\n\x09 */" },
#endif
		{ "CPP_Default_Material", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GenerateProceduralSceneMesh instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated, use GenerateProceduralSceneMesh instead.\nLoad the triangle mesh of the global mesh anchor. For this function to succeed you need to make\nsure to have a global mesh specified in the JSON file. Not every JSON file has a global mesh in it.\n@param JsonString The string with the JSON data.\n@param Material   Material to apply on the global mesh.\n@return           On Success true, otherwise false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadGlobalMeshFromJsonString constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadGlobalMeshFromJsonString constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadGlobalMeshFromJsonString Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadGlobalMeshFromJsonString Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "LoadGlobalMeshFromJsonString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execLoadGlobalMeshFromJsonString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadGlobalMeshFromJsonString(Z_Param_JsonString,Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function LoadGlobalMeshFromJsonString ****************************

// ********** Begin Class AMRUKRoom Function Raycast ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_Raycast_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventRaycast_Parms
	{
		FVector Origin;
		FVector Direction;
		float MaxDist;
		FMRUKLabelFilter LabelFilter;
		FMRUKHit OutHit;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cast a ray and return the closest hit anchor\n\x09 * @param Origin      Origin The origin of the ray.\n\x09 * @param Direction   Direction The direction of the ray.\n\x09 * @param MaxDist     The maximum distance the ray should travel.\n\x09 * @param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutHit      The closest hit.\n\x09 * @return            The anchor that the ray hit.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast a ray and return the closest hit anchor\n@param Origin      Origin The origin of the ray.\n@param Direction   Direction The direction of the ray.\n@param MaxDist     The maximum distance the ray should travel.\n@param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n@param OutHit      The closest hit.\n@return            The anchor that the ray hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Raycast constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Raycast constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Raycast Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 24abff6d460a2cf96abe632a3c772a3d003a8c5f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, OutHit), Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // 152ba4ff6c3a5074e5301872b2cb24dc7e81c9b1
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Raycast Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "Raycast", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventRaycast_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_Raycast(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execRaycast)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDist);
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_GET_STRUCT_REF(FMRUKHit,Z_Param_Out_OutHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutHit);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function Raycast *************************************************

// ********** Begin Class AMRUKRoom Function RaycastAll ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventRaycastAll_Parms
	{
		FVector Origin;
		FVector Direction;
		float MaxDist;
		FMRUKLabelFilter LabelFilter;
		TArray<FMRUKHit> OutHits;
		TArray<AMRUKAnchor*> OutAnchors;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cast a ray and collect hits against the volume and plane bounds in this room. The order of the hits in the array is not specified.\n\x09 * @param Origin      Origin The origin of the ray.\n\x09 * @param Direction   Direction The direction of the ray.\n\x09 * @param MaxDist     The maximum distance the ray should travel.\n\x09 * @param OutHits     The hits the ray collected.\n\x09 * @param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutAnchors  The anchors that were hit. Each anchor in this array corresponds to a entry at the same position in OutHits.\n\x09 * @return            Whether the ray hit anything\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast a ray and collect hits against the volume and plane bounds in this room. The order of the hits in the array is not specified.\n@param Origin      Origin The origin of the ray.\n@param Direction   Direction The direction of the ray.\n@param MaxDist     The maximum distance the ray should travel.\n@param OutHits     The hits the ray collected.\n@param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n@param OutAnchors  The anchors that were hit. Each anchor in this array corresponds to a entry at the same position in OutHits.\n@return            Whether the ray hit anything" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RaycastAll constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnchors;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventRaycastAll_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RaycastAll constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RaycastAll Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 24abff6d460a2cf96abe632a3c772a3d003a8c5f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // 152ba4ff6c3a5074e5301872b2cb24dc7e81c9b1
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 152ba4ff6c3a5074e5301872b2cb24dc7e81c9b1
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OutAnchors_Inner = { "OutAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutAnchors = { "OutAnchors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, OutAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventRaycastAll_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RaycastAll Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "RaycastAll", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventRaycastAll_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventRaycastAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_RaycastAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execRaycastAll)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDist);
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_GET_TARRAY_REF(FMRUKHit,Z_Param_Out_OutHits);
	P_GET_TARRAY_REF(AMRUKAnchor*,Z_Param_Out_OutAnchors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RaycastAll(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutHits,Z_Param_Out_OutAnchors);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function RaycastAll **********************************************

// ********** Begin Class AMRUKRoom Function SpawnInterior *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventSpawnInterior_Parms
	{
		TMap<FString,FMRUKSpawnGroup> SpawnGroups;
		TArray<FString> CutHoleLabels;
		UMaterialInterface* ProceduralMaterial;
		bool ShouldFallbackToProcedural;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Spawn meshes on the position of the anchors of the room.\n\x09 * The actors should have Z as up Y as right and X as forward.\n\x09 * The pivot point should be in the bottom center.\n\x09 * @param SpawnGroups                A map which tells to spawn which actor to a given label.\n\x09 * @param CutHoleLabels\x09\x09         Labels for which the generated mesh should have holes. Only works with planes.\n\x09 * @param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n\x09 * @param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n\x09 * @return                           All spawned interior actors.\n\x09 */" },
#endif
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "CPP_Default_ShouldFallbackToProcedural", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AMRUKAnchorActorSpawner instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn meshes on the position of the anchors of the room.\nThe actors should have Z as up Y as right and X as forward.\nThe pivot point should be in the bottom center.\n@param SpawnGroups                A map which tells to spawn which actor to a given label.\n@param CutHoleLabels                  Labels for which the generated mesh should have holes. Only works with planes.\n@param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n@param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n@return                           All spawned interior actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutHoleLabels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnInterior constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnGroups_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpawnGroups_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnGroups;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CutHoleLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CutHoleLabels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
	static void NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((MRUKRoom_eventSpawnInterior_Parms*)Obj)->ShouldFallbackToProcedural = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFallbackToProcedural;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnInterior constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnInterior Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // fc22d8a790d916b6944371d466d333d3d175d7b5
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInterior_Parms, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnGroups_MetaData), NewProp_SpawnGroups_MetaData) }; // fc22d8a790d916b6944371d466d333d3d175d7b5
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CutHoleLabels_Inner = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CutHoleLabels = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInterior_Parms, CutHoleLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutHoleLabels_MetaData), NewProp_CutHoleLabels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInterior_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventSpawnInterior_Parms), &UHT_STATICS::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInterior_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShouldFallbackToProcedural,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnInterior Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "SpawnInterior", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventSpawnInterior_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventSpawnInterior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_SpawnInterior(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execSpawnInterior)
{
	P_GET_TMAP_REF(FString,FMRUKSpawnGroup,Z_Param_Out_SpawnGroups);
	P_GET_TARRAY_REF(FString,Z_Param_Out_CutHoleLabels);
	P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
	P_GET_UBOOL(Z_Param_ShouldFallbackToProcedural);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnInterior(Z_Param_Out_SpawnGroups,Z_Param_Out_CutHoleLabels,Z_Param_ProceduralMaterial,Z_Param_ShouldFallbackToProcedural);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function SpawnInterior *******************************************

// ********** Begin Class AMRUKRoom Function SpawnInteriorFromStream *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventSpawnInteriorFromStream_Parms
	{
		TMap<FString,FMRUKSpawnGroup> SpawnGroups;
		FRandomStream RandomStream;
		TArray<FString> CutHoleLabels;
		UMaterialInterface* ProceduralMaterial;
		bool ShouldFallbackToProcedural;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Spawn meshes on the position of the anchors of the room from a random stream.\n\x09 * The actors should have Z as up Y as right and X as forward.\n\x09 * The pivot point should be in the bottom center.\n\x09 * @param SpawnGroups                A map wich tells to spawn which actor to a given label.\n\x09 * @param CutHoleLabels\x09\x09         Labels for which the generated mesh should have holes. Only works with planes.\n\x09 * @param RandomStream               A random generator to choose randomly between actor classes if there a multiple for one label.\n\x09 * @param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n\x09 * @param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n\x09 * @return                           All spawned interior actors.\n\x09 */" },
#endif
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "CPP_Default_ShouldFallbackToProcedural", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AMRUKAnchorActorSpawner instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn meshes on the position of the anchors of the room from a random stream.\nThe actors should have Z as up Y as right and X as forward.\nThe pivot point should be in the bottom center.\n@param SpawnGroups                A map wich tells to spawn which actor to a given label.\n@param CutHoleLabels                  Labels for which the generated mesh should have holes. Only works with planes.\n@param RandomStream               A random generator to choose randomly between actor classes if there a multiple for one label.\n@param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n@param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n@return                           All spawned interior actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutHoleLabels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnInteriorFromStream constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnGroups_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpawnGroups_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnGroups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CutHoleLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CutHoleLabels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
	static void NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((MRUKRoom_eventSpawnInteriorFromStream_Parms*)Obj)->ShouldFallbackToProcedural = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFallbackToProcedural;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnInteriorFromStream constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnInteriorFromStream Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // fc22d8a790d916b6944371d466d333d3d175d7b5
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnGroups_MetaData), NewProp_SpawnGroups_MetaData) }; // fc22d8a790d916b6944371d466d333d3d175d7b5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CutHoleLabels_Inner = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CutHoleLabels = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, CutHoleLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutHoleLabels_MetaData), NewProp_CutHoleLabels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventSpawnInteriorFromStream_Parms), &UHT_STATICS::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShouldFallbackToProcedural,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnInteriorFromStream Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "SpawnInteriorFromStream", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventSpawnInteriorFromStream_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventSpawnInteriorFromStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execSpawnInteriorFromStream)
{
	P_GET_TMAP_REF(FString,FMRUKSpawnGroup,Z_Param_Out_SpawnGroups);
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_GET_TARRAY_REF(FString,Z_Param_Out_CutHoleLabels);
	P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
	P_GET_UBOOL(Z_Param_ShouldFallbackToProcedural);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnInteriorFromStream(Z_Param_Out_SpawnGroups,Z_Param_Out_RandomStream,Z_Param_Out_CutHoleLabels,Z_Param_ProceduralMaterial,Z_Param_ShouldFallbackToProcedural);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function SpawnInteriorFromStream *********************************

// ********** Begin Class AMRUKRoom Function TryGetClosestSeatPose *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventTryGetClosestSeatPose_Parms
	{
		FVector RayOrigin;
		FVector RayDirection;
		FTransform OutSeatTransform;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds the closest seat given a ray.\n\x09 * @param RayOrigin\x09\x09\x09\x09The origin of the ray.\n\x09 * @param RayDirection\x09\x09\x09The direction of the ray.\n\x09 * @param OutSeatTransform\x09\x09The seat pose.\n\x09 * @return\x09\x09\x09\x09\x09\x09If any seat was found the Anchor that has seats available will be returned. Otherwise a null pointer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the closest seat given a ray.\n@param RayOrigin                             The origin of the ray.\n@param RayDirection                  The direction of the ray.\n@param OutSeatTransform              The seat pose.\n@return                                              If any seat was found the Anchor that has seats available will be returned. Otherwise a null pointer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetClosestSeatPose constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSeatTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetClosestSeatPose constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetClosestSeatPose Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSeatPose_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayOrigin_MetaData), NewProp_RayOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSeatPose_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayDirection_MetaData), NewProp_RayDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutSeatTransform = { "OutSeatTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSeatPose_Parms, OutSeatTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSeatPose_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RayOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RayDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSeatTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetClosestSeatPose Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "TryGetClosestSeatPose", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventTryGetClosestSeatPose_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventTryGetClosestSeatPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execTryGetClosestSeatPose)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RayOrigin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RayDirection);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutSeatTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->TryGetClosestSeatPose(Z_Param_Out_RayOrigin,Z_Param_Out_RayDirection,Z_Param_Out_OutSeatTransform);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function TryGetClosestSeatPose ***********************************

// ********** Begin Class AMRUKRoom Function TryGetClosestSurfacePosition **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics
struct UHT_STATICS
{
	struct MRUKRoom_eventTryGetClosestSurfacePosition_Parms
	{
		FVector WorldPosition;
		FVector OutSurfacePosition;
		double OutSurfaceDistance;
		FMRUKLabelFilter LabelFilter;
		double MaxDistance;
		AMRUKAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Get the position on the surface that is closest to the given position with respect to the distance.\n\x09 *  @param WorldPosition      The position in world space from which the closest surface point should be found.\n\x09 *  @param OutSurfacePosition The closest position on the closest surface if any. Otherwise zero.\n\x09 *  @param OutSurfaceDistance The distance between WorldPosition and OutSurfacePosition.\n\x09 *  @param LabelFilter        The label filter can be used to include/exclude certain labels from the search.\n\x09 *  @param MaxDistance        The distance to which a closest surface position should be searched. Everything below or equal to zero will be treated as infinity.\n\x09 *  @return                   The Anchor on which the closest surface position was found or a null pointer otherwise.\n\x09 */" },
#endif
		{ "CPP_Default_MaxDistance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the position on the surface that is closest to the given position with respect to the distance.\n@param WorldPosition      The position in world space from which the closest surface point should be found.\n@param OutSurfacePosition The closest position on the closest surface if any. Otherwise zero.\n@param OutSurfaceDistance The distance between WorldPosition and OutSurfacePosition.\n@param LabelFilter        The label filter can be used to include/exclude certain labels from the search.\n@param MaxDistance        The distance to which a closest surface position should be searched. Everything below or equal to zero will be treated as infinity.\n@return                   The Anchor on which the closest surface position was found or a null pointer otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetClosestSurfacePosition constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSurfacePosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutSurfaceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetClosestSurfacePosition constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetClosestSurfacePosition Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutSurfacePosition = { "OutSurfacePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, OutSurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_OutSurfaceDistance = { "OutSurfaceDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, OutSurfaceDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 24abff6d460a2cf96abe632a3c772a3d003a8c5f
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSurfacePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSurfaceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetClosestSurfacePosition Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKRoom, nullptr, "TryGetClosestSurfacePosition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKRoom_eventTryGetClosestSurfacePosition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKRoom_eventTryGetClosestSurfacePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKRoom::execTryGetClosestSurfacePosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSurfacePosition);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutSurfaceDistance);
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKAnchor**)Z_Param__Result=P_THIS->TryGetClosestSurfacePosition(Z_Param_Out_WorldPosition,Z_Param_Out_OutSurfacePosition,Z_Param_Out_OutSurfaceDistance,Z_Param_Out_LabelFilter,Z_Param_MaxDistance);
	P_NATIVE_END;
}
// ********** End Class AMRUKRoom Function TryGetClosestSurfacePosition ****************************

// ********** Begin Class AMRUKRoom ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUKRoom_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a room in the MRUK.\n * A room holds (MRUK)Anchors as children for entities such as Desk, Floor, Ceiling, Walls, etc. Those entities are defined with their label.\n * It also provides events which will be triggered when an anchor has been added, removed or updated from space setup.\n *\n * This room class calculates different helper properties such as Outline, Edges, Bounds\n * and provides room functions as helpers such as determine if a point in space (XYZ) is inside the room, generating points on surfaces, generate points in room (floating), raycasts and more.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Room Actor" },
		{ "IncludePath", "MRUtilityKitRoom.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a room in the MRUK.\nA room holds (MRUK)Anchors as children for entities such as Desk, Floor, Ceiling, Walls, etc. Those entities are defined with their label.\nIt also provides events which will be triggered when an anchor has been added, removed or updated from space setup.\n\nThis room class calculates different helper properties such as Outline, Edges, Bounds\nand provides room functions as helpers such as determine if a point in space (XYZ) is inside the room, generating points on surfaces, generate points in room (floating), raycasts and more." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneModel_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The scene model from which the room was loaded.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The scene model from which the room was loaded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceHandle_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The space handle of this anchor\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The space handle of this anchor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorUUID_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The anchors UUID\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The anchors UUID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomMesh_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Contains the mesh data for the room, including vertices and faces.\n\x09 * This property can be used to access the geometric representation of the room.\n\x09 * This property will be null if Scene Model V1 was chosen when loading the scene.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the mesh data for the room, including vertices and faces.\nThis property can be used to access the geometric representation of the room.\nThis property will be null if Scene Model V1 was chosen when loading the scene." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorUpdated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event that gets fired if a anchor in this room was updated.\n\x09 * E.g. volume or plane changed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that gets fired if a anchor in this room was updated.\nE.g. volume or plane changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorCreated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event that gets fired if a new anchor was created in this room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that gets fired if a new anchor was created in this room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorRemoved_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event that gets fired if a anchor gets removed from this room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that gets fired if a anchor gets removed from this room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Bounds of the room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounds of the room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomEdges_MetaData[] = {
		{ "BlueprintGetter", "GetRoomEdges" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Edges of the room. Only valid when using a single floor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Edges of the room. Only valid when using a single floor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorAnchor_MetaData[] = {
		{ "BlueprintGetter", "GetFloorAnchor" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The floor anchor of this room. Deprecated, only kept for compatibility.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The floor anchor of this room. Deprecated, only kept for compatibility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The floor anchors of this room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The floor anchors of this room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingAnchor_MetaData[] = {
		{ "BlueprintGetter", "GetCeilingAnchor" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The ceiling anchor of this room. Deprecated, only kept for compatibility.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ceiling anchor of this room. Deprecated, only kept for compatibility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The ceiling anchors of this room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ceiling anchors of this room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The wall anchors of this room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The wall anchors of this room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalMeshAnchor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The global mesh anchor of this room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The global mesh anchor of this room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * All anchors which are possible to sit on.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All anchors which are possible to sit on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * All anchors of this room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All anchors of this room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyWallAnchor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKRoom constinit property declarations ********************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneModel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorUUID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomMesh;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorRemoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomEdges;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloorAnchors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CeilingAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CeilingAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CeilingAnchors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WallAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WallAnchors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalMeshAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeatAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeatAnchors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllAnchors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyWallAnchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKRoom constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAnchorToRoom"), .Pointer = &AMRUKRoom::execAddAnchorToRoom },
		{ .NameUTF8 = UTF8TEXT("AttachProceduralMeshToWalls"), .Pointer = &AMRUKRoom::execAttachProceduralMeshToWalls },
		{ .NameUTF8 = UTF8TEXT("ClearRoom"), .Pointer = &AMRUKRoom::execClearRoom },
		{ .NameUTF8 = UTF8TEXT("ComputeCentroid"), .Pointer = &AMRUKRoom::execComputeCentroid },
		{ .NameUTF8 = UTF8TEXT("ComputeWallMeshUVAdjustments"), .Pointer = &AMRUKRoom::execComputeWallMeshUVAdjustments },
		{ .NameUTF8 = UTF8TEXT("DoesRoomHave"), .Pointer = &AMRUKRoom::execDoesRoomHave },
		{ .NameUTF8 = UTF8TEXT("GenerateProceduralSceneMesh"), .Pointer = &AMRUKRoom::execGenerateProceduralSceneMesh },
		{ .NameUTF8 = UTF8TEXT("GenerateRandomPositionInRoom"), .Pointer = &AMRUKRoom::execGenerateRandomPositionInRoom },
		{ .NameUTF8 = UTF8TEXT("GenerateRandomPositionInRoomFromStream"), .Pointer = &AMRUKRoom::execGenerateRandomPositionInRoomFromStream },
		{ .NameUTF8 = UTF8TEXT("GenerateRandomPositionOnSurface"), .Pointer = &AMRUKRoom::execGenerateRandomPositionOnSurface },
		{ .NameUTF8 = UTF8TEXT("GetAnchorsByLabel"), .Pointer = &AMRUKRoom::execGetAnchorsByLabel },
		{ .NameUTF8 = UTF8TEXT("GetBestPoseFromRaycast"), .Pointer = &AMRUKRoom::execGetBestPoseFromRaycast },
		{ .NameUTF8 = UTF8TEXT("GetCeilingAnchor"), .Pointer = &AMRUKRoom::execGetCeilingAnchor },
		{ .NameUTF8 = UTF8TEXT("GetFirstAnchorByLabel"), .Pointer = &AMRUKRoom::execGetFirstAnchorByLabel },
		{ .NameUTF8 = UTF8TEXT("GetFloorAnchor"), .Pointer = &AMRUKRoom::execGetFloorAnchor },
		{ .NameUTF8 = UTF8TEXT("GetKeyWall"), .Pointer = &AMRUKRoom::execGetKeyWall },
		{ .NameUTF8 = UTF8TEXT("GetLargestSurface"), .Pointer = &AMRUKRoom::execGetLargestSurface },
		{ .NameUTF8 = UTF8TEXT("GetRoomEdges"), .Pointer = &AMRUKRoom::execGetRoomEdges },
		{ .NameUTF8 = UTF8TEXT("IsPositionInRoom"), .Pointer = &AMRUKRoom::execIsPositionInRoom },
		{ .NameUTF8 = UTF8TEXT("IsPositionInSceneVolume"), .Pointer = &AMRUKRoom::execIsPositionInSceneVolume },
		{ .NameUTF8 = UTF8TEXT("IsWallAnchor"), .Pointer = &AMRUKRoom::execIsWallAnchor },
		{ .NameUTF8 = UTF8TEXT("LoadGlobalMeshFromDevice"), .Pointer = &AMRUKRoom::execLoadGlobalMeshFromDevice },
		{ .NameUTF8 = UTF8TEXT("LoadGlobalMeshFromJsonString"), .Pointer = &AMRUKRoom::execLoadGlobalMeshFromJsonString },
		{ .NameUTF8 = UTF8TEXT("Raycast"), .Pointer = &AMRUKRoom::execRaycast },
		{ .NameUTF8 = UTF8TEXT("RaycastAll"), .Pointer = &AMRUKRoom::execRaycastAll },
		{ .NameUTF8 = UTF8TEXT("SpawnInterior"), .Pointer = &AMRUKRoom::execSpawnInterior },
		{ .NameUTF8 = UTF8TEXT("SpawnInteriorFromStream"), .Pointer = &AMRUKRoom::execSpawnInteriorFromStream },
		{ .NameUTF8 = UTF8TEXT("TryGetClosestSeatPose"), .Pointer = &AMRUKRoom::execTryGetClosestSeatPose },
		{ .NameUTF8 = UTF8TEXT("TryGetClosestSurfacePosition"), .Pointer = &AMRUKRoom::execTryGetClosestSurfacePosition },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom, "AddAnchorToRoom" }, // 6d46015ea9270fb83940f044300d1fd9a8f6578c
		{ &Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls, "AttachProceduralMeshToWalls" }, // 7241f48ba15ab86cd843707f294ec30f263edf54
		{ &Z_Construct_UFunction_AMRUKRoom_ClearRoom, "ClearRoom" }, // f23f076cf4e7bc0e2dcb911bdb14cefa461ccdb5
		{ &Z_Construct_UFunction_AMRUKRoom_ComputeCentroid, "ComputeCentroid" }, // 7e00859454bb54f217e4a8080a39fce812444d71
		{ &Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments, "ComputeWallMeshUVAdjustments" }, // ae9308ee3aba0be648c01cb0b4702841ff58324e
		{ &Z_Construct_UFunction_AMRUKRoom_DoesRoomHave, "DoesRoomHave" }, // c3470f6fcf4c5d20c6bdb350053e6b9a53146c19
		{ &Z_Construct_UFunction_AMRUKRoom_GenerateProceduralSceneMesh, "GenerateProceduralSceneMesh" }, // 1b9e89c69062b9f93ed77a6fa418fb32e26bf5fc
		{ &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom, "GenerateRandomPositionInRoom" }, // b1d5504aca7c48f5143eced34fce4cbecda2d00f
		{ &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream, "GenerateRandomPositionInRoomFromStream" }, // 58332abde014b4fd0dea77004be0183d04ae016e
		{ &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionOnSurface, "GenerateRandomPositionOnSurface" }, // 69129d09d58939fc9643c7f8f8a1d13e90c90516
		{ &Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel, "GetAnchorsByLabel" }, // 39e645236d0425374d1b614598af05d9db16162d
		{ &Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast, "GetBestPoseFromRaycast" }, // e837ef749fba0687064d5435e7014b4ca9e30c0e
		{ &Z_Construct_UFunction_AMRUKRoom_GetCeilingAnchor, "GetCeilingAnchor" }, // ea137712c6a253ede724c326a44e67f25816e165
		{ &Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel, "GetFirstAnchorByLabel" }, // 3acfc5c273199552264c88ed918f4f377d9ccc1a
		{ &Z_Construct_UFunction_AMRUKRoom_GetFloorAnchor, "GetFloorAnchor" }, // cacca1e491750977d4c487509755d2f650fd115e
		{ &Z_Construct_UFunction_AMRUKRoom_GetKeyWall, "GetKeyWall" }, // f6d17b4df7ce7eb318927b26eba95ebfd1998ef3
		{ &Z_Construct_UFunction_AMRUKRoom_GetLargestSurface, "GetLargestSurface" }, // e9db66e366c12035d7f067010556f8dde1a97670
		{ &Z_Construct_UFunction_AMRUKRoom_GetRoomEdges, "GetRoomEdges" }, // f0a3bc50ee0b7eefd92d16b8ae3726f0cd7b11ce
		{ &Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom, "IsPositionInRoom" }, // 166e915239ef0fdc35ed836316ea7ceb9bb37deb
		{ &Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume, "IsPositionInSceneVolume" }, // 432b4dd0a169eb56ffbdd279ec533915ecb3bfab
		{ &Z_Construct_UFunction_AMRUKRoom_IsWallAnchor, "IsWallAnchor" }, // 7d021be721559b9d1216a050ef42e299dd62772c
		{ &Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice, "LoadGlobalMeshFromDevice" }, // 4304eae781d9322caeb011f86c3a5d103b9c8d44
		{ &Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString, "LoadGlobalMeshFromJsonString" }, // 204b554cb4003f0bcf9ab357a9429a6ef212cc28
		{ &Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature, "OnAnchorCreated__DelegateSignature" }, // 8bf09dc50237ad71a34853bc24677678a90dcd7d
		{ &Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature, "OnAnchorRemoved__DelegateSignature" }, // 2a6f2d41741967378b5dca7135f19f7d9147b407
		{ &Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature, "OnAnchorUpdated__DelegateSignature" }, // e295e5d23bd0ca34615e91c738722a7710ef1ffb
		{ &Z_Construct_UFunction_AMRUKRoom_Raycast, "Raycast" }, // a13b95d5fd608d812105b971022afb2f948b2fcc
		{ &Z_Construct_UFunction_AMRUKRoom_RaycastAll, "RaycastAll" }, // b2c5fd45ae3187d4c3264dc8dfd95a8887a91fc4
		{ &Z_Construct_UFunction_AMRUKRoom_SpawnInterior, "SpawnInterior" }, // 29e0212328651cfd1c08fb6ca389bc3eb7a91c88
		{ &Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream, "SpawnInteriorFromStream" }, // 687dc0050328020c9575e12ab2469a0e5a708d5f
		{ &Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose, "TryGetClosestSeatPose" }, // 2111480b23d0d7c328fd17b651e8a1f0f333c3ab
		{ &Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition, "TryGetClosestSurfacePosition" }, // 8f659eb89e7a976e158b802625497b4759646a1b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUKRoom Property Definitions *******************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SceneModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SceneModel = { "SceneModel", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, SceneModel), Z_Construct_UEnum_MRUtilityKit_EMRUKSceneModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneModel_MetaData), NewProp_SceneModel_MetaData) }; // c8ae42e2a545d7ec4f98bf31f76b7eea67fdd930
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpaceHandle = { "SpaceHandle", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, SpaceHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceHandle_MetaData), NewProp_SpaceHandle_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AnchorUUID = { "AnchorUUID", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, AnchorUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorUUID_MetaData), NewProp_AnchorUUID_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoomMesh = { "RoomMesh", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, RoomMesh), Z_Construct_UClass_UMRUKRoomMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomMesh_MetaData), NewProp_RoomMesh_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnAnchorUpdated = { "OnAnchorUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, OnAnchorUpdated), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorUpdated_MetaData), NewProp_OnAnchorUpdated_MetaData) }; // e295e5d23bd0ca34615e91c738722a7710ef1ffb
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnAnchorCreated = { "OnAnchorCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, OnAnchorCreated), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorCreated_MetaData), NewProp_OnAnchorCreated_MetaData) }; // 8bf09dc50237ad71a34853bc24677678a90dcd7d
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnAnchorRemoved = { "OnAnchorRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, OnAnchorRemoved), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorRemoved_MetaData), NewProp_OnAnchorRemoved_MetaData) }; // 2a6f2d41741967378b5dca7135f19f7d9147b407
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomBounds = { "RoomBounds", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, RoomBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomBounds_MetaData), NewProp_RoomBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomEdges_Inner = { "RoomEdges", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoomEdges = { "RoomEdges", nullptr, (EPropertyFlags)0x0010000020002014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, RoomEdges_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomEdges_MetaData), NewProp_RoomEdges_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FloorAnchor = { "FloorAnchor", nullptr, (EPropertyFlags)0x0114000020002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, FloorAnchor_DEPRECATED), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorAnchor_MetaData), NewProp_FloorAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FloorAnchors_Inner = { "FloorAnchors", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FloorAnchors = { "FloorAnchors", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, FloorAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorAnchors_MetaData), NewProp_FloorAnchors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CeilingAnchor = { "CeilingAnchor", nullptr, (EPropertyFlags)0x0114000020002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, CeilingAnchor_DEPRECATED), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingAnchor_MetaData), NewProp_CeilingAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CeilingAnchors_Inner = { "CeilingAnchors", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CeilingAnchors = { "CeilingAnchors", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, CeilingAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingAnchors_MetaData), NewProp_CeilingAnchors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WallAnchors_Inner = { "WallAnchors", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WallAnchors = { "WallAnchors", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, WallAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallAnchors_MetaData), NewProp_WallAnchors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GlobalMeshAnchor = { "GlobalMeshAnchor", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, GlobalMeshAnchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalMeshAnchor_MetaData), NewProp_GlobalMeshAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SeatAnchors_Inner = { "SeatAnchors", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SeatAnchors = { "SeatAnchors", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, SeatAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatAnchors_MetaData), NewProp_SeatAnchors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AllAnchors_Inner = { "AllAnchors", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AllAnchors = { "AllAnchors", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, AllAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllAnchors_MetaData), NewProp_AllAnchors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_KeyWallAnchor = { "KeyWallAnchor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, KeyWallAnchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyWallAnchor_MetaData), NewProp_KeyWallAnchor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpaceHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnAnchorUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnAnchorCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnAnchorRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CeilingAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CeilingAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CeilingAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GlobalMeshAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SeatAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SeatAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyWallAnchor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUKRoom Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUKRoom,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AMRUKRoom_StaticRegisterNativesAMRUKRoom()
{
	UClass* Class = AMRUKRoom::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKRoom;
UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUKRoom;
		if (!Z_Registration_Info_UClass_AMRUKRoom.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKRoom"),
				Z_Registration_Info_UClass_AMRUKRoom.InnerSingleton,
				AMRUKRoom_StaticRegisterNativesAMRUKRoom,
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
		return Z_Registration_Info_UClass_AMRUKRoom.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUKRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKRoom.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKRoom.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKRoom);
AMRUKRoom::~AMRUKRoom() {}
// ********** End Class AMRUKRoom ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation, TEXT("EMRUKSpawnLocation"), &ZRIE_EMRUKSpawnLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3719395558U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKRoomFilter, TEXT("EMRUKRoomFilter"), &ZRIE_EMRUKRoomFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3671797661U) },
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod, TEXT("EMRUKPositioningMethod"), &ZRIE_EMRUKPositioningMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 923784538U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs, Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewStructOps, TEXT("MRUKAnchorWithPlaneUVs"),&Z_Registration_Info_UScriptStruct_FMRUKAnchorWithPlaneUVs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKAnchorWithPlaneUVs), 1048088641U) },
		{ Z_Construct_UScriptStruct_FMRUKRoomFace, Z_Construct_UScriptStruct_FMRUKRoomFace_Statics::NewStructOps, TEXT("MRUKRoomFace"),&Z_Registration_Info_UScriptStruct_FMRUKRoomFace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKRoomFace), 838317523U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKRoomMesh, TEXT("UMRUKRoomMesh"), &Z_Registration_Info_UClass_UMRUKRoomMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKRoomMesh), 3857616963U) },
		{ Z_Construct_UClass_AMRUKRoom, TEXT("AMRUKRoom"), &Z_Registration_Info_UClass_AMRUKRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKRoom), 1923174841U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h__Script_MRUtilityKit_d2519a79e3bf648818c7dd3d7b97439508466a66{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
