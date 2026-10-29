// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitPositionGenerator.h"
#include "MRUtilityKit.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitPositionGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKRoomFilter(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKRandomSpawnSettings(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUtilityKitPositionGenerator(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUtilityKitPositionGenerator(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMRUKRandomSpawnSettings ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMRUKRandomSpawnSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMRUKRandomSpawnSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMRUKRandomSpawnSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Holds the settings which are used for generating random positions. It offers several attributes to be configured, such as\n * which room to use, what actor to spawn, scene labels to use and much more. This struct is used by the position generator.\n * @see AMRUtilityKitPositionGenerator\n */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the settings which are used for generating random positions. It offers several attributes to be configured, such as\nwhich room to use, what actor to spawn, scene labels to use and much more. This struct is used by the position generator.\n@see AMRUtilityKitPositionGenerator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomFilter_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When the scene data is loaded, this controls what room(s) the position generator will be used in.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the scene data is loaded, this controls what room(s) the position generator will be used in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorInstance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When an actor instance is referenced here, this actor will be moved around.\n\x09 * If you'd need to spawn new actors, use ActorClass.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When an actor instance is referenced here, this actor will be moved around.\nIf you'd need to spawn new actors, use ActorClass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reference the specific actor class for spawning.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference the specific actor class for spawning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAmount_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * How many instances to spawn at the random generated position per room.\n\x09 * Note: If using an ActorInstance this property is ignored\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many instances to spawn at the random generated position per room.\nNote: If using an ActorInstance this property is ignored" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum number of times to attempt spawning/moving an object before giving up.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of times to attempt spawning/moving an object before giving up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocations_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The type of surface by which to limit the generation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of surface by which to limit the generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The labels to include or exclude.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The labels to include or exclude." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckOverlaps_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If enabled then the spawn position will be checked to make sure there is no overlap with physics colliders including themselves.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled then the spawn position will be checked to make sure there is no overlap with physics colliders including themselves." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Required free space for the object.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Required free space for the object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The CollisionChannel to use.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The CollisionChannel to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceClearanceDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The clearance distance required in front of the surface in order for it to be considered a valid spawn position.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The clearance distance required in front of the surface in order for it to be considered a valid spawn position." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMRUKRandomSpawnSettings constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoomFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnLocations_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Labels;
	static void NewProp_CheckOverlaps_SetBit(void* Obj)
	{
		((FMRUKRandomSpawnSettings*)Obj)->CheckOverlaps = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckOverlaps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideBounds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceClearanceDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMRUKRandomSpawnSettings constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKRandomSpawnSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMRUKRandomSpawnSettings Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RoomFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RoomFilter = { "RoomFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, RoomFilter), Z_Construct_UEnum_MRUtilityKit_EMRUKRoomFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomFilter_MetaData), NewProp_RoomFilter_MetaData) }; // dadb2f9d21d608346c17a8f8a0c95014b2561c59
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActorInstance = { "ActorInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, ActorInstance), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorInstance_MetaData), NewProp_ActorInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SpawnAmount = { "SpawnAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, SpawnAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnAmount_MetaData), NewProp_SpawnAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SpawnLocations_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SpawnLocations = { "SpawnLocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, SpawnLocations), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocations_MetaData), NewProp_SpawnLocations_MetaData) }; // ddb178e63b7d21bd8c6fa6289898c6c6c684e8e1
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, Labels), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Labels_MetaData), NewProp_Labels_MetaData) }; // 24abff6d460a2cf96abe632a3c772a3d003a8c5f
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_CheckOverlaps = { "CheckOverlaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMRUKRandomSpawnSettings), &UHT_STATICS::NewProp_CheckOverlaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckOverlaps_MetaData), NewProp_CheckOverlaps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OverrideBounds = { "OverrideBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, OverrideBounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideBounds_MetaData), NewProp_OverrideBounds_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SurfaceClearanceDistance = { "SurfaceClearanceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKRandomSpawnSettings, SurfaceClearanceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceClearanceDistance_MetaData), NewProp_SurfaceClearanceDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActorInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnLocations_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Labels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CheckOverlaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverrideBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceClearanceDistance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMRUKRandomSpawnSettings Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKRandomSpawnSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMRUKRandomSpawnSettings>(),
	alignof(FMRUKRandomSpawnSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKRandomSpawnSettings;
UScriptStruct* Z_Construct_UScriptStruct_FMRUKRandomSpawnSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMRUKRandomSpawnSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMRUKRandomSpawnSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKRandomSpawnSettings, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("MRUKRandomSpawnSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FMRUKRandomSpawnSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMRUKRandomSpawnSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKRandomSpawnSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMRUKRandomSpawnSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMRUKRandomSpawnSettings ********************************************

// ********** Begin Class AMRUtilityKitPositionGenerator Function GenerateRandomPositionsOnSurface *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUtilityKitPositionGenerator_GenerateRandomPositionsOnSurface_Statics
struct UHT_STATICS
{
	struct MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurface_Parms
	{
		TArray<FTransform> OutTransforms;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generates a set of random positions on the surface of a given spawn location, while ensuring that the generated positions\n\x09 * are at least `MinDistanceToEdge` away from any edges and follow the other settings specified in `SpawnSettings`.\n\x09 * @param OutTransforms An array of transforms representing the generated positions.\n\x09 * @return A boolean value indicating whether valid positions were found. If no valid positions could be found, `OutTransforms` will be empty.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates a set of random positions on the surface of a given spawn location, while ensuring that the generated positions\nare at least `MinDistanceToEdge` away from any edges and follow the other settings specified in `SpawnSettings`.\n@param OutTransforms An array of transforms representing the generated positions.\n@return A boolean value indicating whether valid positions were found. If no valid positions could be found, `OutTransforms` will be empty." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRandomPositionsOnSurface constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTransforms;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurface_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRandomPositionsOnSurface constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRandomPositionsOnSurface Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTransforms_Inner = { "OutTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutTransforms = { "OutTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurface_Parms, OutTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurface_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRandomPositionsOnSurface Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUtilityKitPositionGenerator, nullptr, "GenerateRandomPositionsOnSurface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUtilityKitPositionGenerator_GenerateRandomPositionsOnSurface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUtilityKitPositionGenerator::execGenerateRandomPositionsOnSurface)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateRandomPositionsOnSurface(Z_Param_Out_OutTransforms);
	P_NATIVE_END;
}
// ********** End Class AMRUtilityKitPositionGenerator Function GenerateRandomPositionsOnSurface ***

// ********** Begin Class AMRUtilityKitPositionGenerator Function GenerateRandomPositionsOnSurfaceInRoom 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUtilityKitPositionGenerator_GenerateRandomPositionsOnSurfaceInRoom_Statics
struct UHT_STATICS
{
	struct MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurfaceInRoom_Parms
	{
		AMRUKRoom* Room;
		TArray<FTransform> OutTransforms;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generates a set of random positions on the surface of a given spawn location, while ensuring that the generated positions\n\x09 * are at least `MinDistanceToEdge` away from any edges and follow the other settings specified in `SpawnSettings` in the\n\x09 * given room.\n\x09 * @param Room The room where the positions should be generated in.\n\x09 * @param OutTransforms An array of transforms representing the generated positions.\n\x09 * @return A boolean value indicating whether valid positions were found. If no valid positions could be found, `OutTransforms` will be empty.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates a set of random positions on the surface of a given spawn location, while ensuring that the generated positions\nare at least `MinDistanceToEdge` away from any edges and follow the other settings specified in `SpawnSettings` in the\ngiven room.\n@param Room The room where the positions should be generated in.\n@param OutTransforms An array of transforms representing the generated positions.\n@return A boolean value indicating whether valid positions were found. If no valid positions could be found, `OutTransforms` will be empty." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRandomPositionsOnSurfaceInRoom constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTransforms;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurfaceInRoom_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRandomPositionsOnSurfaceInRoom constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRandomPositionsOnSurfaceInRoom Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurfaceInRoom_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTransforms_Inner = { "OutTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutTransforms = { "OutTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurfaceInRoom_Parms, OutTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurfaceInRoom_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRandomPositionsOnSurfaceInRoom Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUtilityKitPositionGenerator, nullptr, "GenerateRandomPositionsOnSurfaceInRoom", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurfaceInRoom_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUtilityKitPositionGenerator_eventGenerateRandomPositionsOnSurfaceInRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUtilityKitPositionGenerator_GenerateRandomPositionsOnSurfaceInRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUtilityKitPositionGenerator::execGenerateRandomPositionsOnSurfaceInRoom)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateRandomPositionsOnSurfaceInRoom(Z_Param_Room,Z_Param_Out_OutTransforms);
	P_NATIVE_END;
}
// ********** End Class AMRUtilityKitPositionGenerator Function GenerateRandomPositionsOnSurfaceInRoom 

// ********** Begin Class AMRUtilityKitPositionGenerator Function SceneLoaded **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUtilityKitPositionGenerator_SceneLoaded_Statics
struct UHT_STATICS
{
	struct MRUtilityKitPositionGenerator_eventSceneLoaded_Parms
	{
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SceneLoaded constinit property declarations ***************************
	static void NewProp_Success_SetBit(void* Obj)
	{
		((MRUtilityKitPositionGenerator_eventSceneLoaded_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SceneLoaded constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SceneLoaded Property Definitions **************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUtilityKitPositionGenerator_eventSceneLoaded_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SceneLoaded Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUtilityKitPositionGenerator, nullptr, "SceneLoaded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUtilityKitPositionGenerator_eventSceneLoaded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUtilityKitPositionGenerator_eventSceneLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUtilityKitPositionGenerator_SceneLoaded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUtilityKitPositionGenerator::execSceneLoaded)
{
	P_GET_UBOOL(Z_Param_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SceneLoaded(Z_Param_Success);
	P_NATIVE_END;
}
// ********** End Class AMRUtilityKitPositionGenerator Function SceneLoaded ************************

// ********** Begin Class AMRUtilityKitPositionGenerator *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUtilityKitPositionGenerator_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Position generator that can be used to generate random positions on the surface in a specific room or any room.\n *\n * It contains methods to generate random positions on the surface of a given spawn location,\n * while ensuring that the generated positions are at least `MinDistanceToEdge` away from any edges,\n * if it should run on start when MRUK initializes and follow the other settings specified in `SpawnSettings`.\n */" },
#endif
		{ "IncludePath", "MRUtilityKitPositionGenerator.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position generator that can be used to generate random positions on the surface in a specific room or any room.\n\nIt contains methods to generate random positions on the surface of a given spawn location,\nwhile ensuring that the generated positions are at least `MinDistanceToEdge` away from any edges,\nif it should run on start when MRUK initializes and follow the other settings specified in `SpawnSettings`." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunOnStart_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether GenerateRandomPositionsOnSurface() should be called automatically after the mixed reality utility kit has been initialized\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether GenerateRandomPositionsOnSurface() should be called automatically after the mixed reality utility kit has been initialized" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSpawnSettings_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Settings that should be used when generating random positions.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitPositionGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings that should be used when generating random positions." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUtilityKitPositionGenerator constinit property declarations ***********
	static void NewProp_RunOnStart_SetBit(void* Obj)
	{
		((AMRUtilityKitPositionGenerator*)Obj)->RunOnStart = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RunOnStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomSpawnSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUtilityKitPositionGenerator constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateRandomPositionsOnSurface"), .Pointer = &AMRUtilityKitPositionGenerator::execGenerateRandomPositionsOnSurface },
		{ .NameUTF8 = UTF8TEXT("GenerateRandomPositionsOnSurfaceInRoom"), .Pointer = &AMRUtilityKitPositionGenerator::execGenerateRandomPositionsOnSurfaceInRoom },
		{ .NameUTF8 = UTF8TEXT("SceneLoaded"), .Pointer = &AMRUtilityKitPositionGenerator::execSceneLoaded },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUtilityKitPositionGenerator_GenerateRandomPositionsOnSurface, "GenerateRandomPositionsOnSurface" }, // 1baaaffbd5484ccd91256d2c150513c4404da58d
		{ &Z_Construct_UFunction_AMRUtilityKitPositionGenerator_GenerateRandomPositionsOnSurfaceInRoom, "GenerateRandomPositionsOnSurfaceInRoom" }, // 02c9e3f2fa851fde8405661115f16db97cbe2bed
		{ &Z_Construct_UFunction_AMRUtilityKitPositionGenerator_SceneLoaded, "SceneLoaded" }, // c4faa1da5d812c535a15547bf0229b589f1413ad
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUtilityKitPositionGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUtilityKitPositionGenerator Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_RunOnStart = { "RunOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUtilityKitPositionGenerator), &UHT_STATICS::NewProp_RunOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunOnStart_MetaData), NewProp_RunOnStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RandomSpawnSettings = { "RandomSpawnSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUtilityKitPositionGenerator, RandomSpawnSettings), Z_Construct_UScriptStruct_FMRUKRandomSpawnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSpawnSettings_MetaData), NewProp_RandomSpawnSettings_MetaData) }; // 2a29b433b27e093268593cf10780fd059bda2a0e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RunOnStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RandomSpawnSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUtilityKitPositionGenerator Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUtilityKitPositionGenerator,
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
static void AMRUtilityKitPositionGenerator_StaticRegisterNativesAMRUtilityKitPositionGenerator()
{
	UClass* Class = AMRUtilityKitPositionGenerator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUtilityKitPositionGenerator;
UClass* Z_Construct_UClass_AMRUtilityKitPositionGenerator(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUtilityKitPositionGenerator;
		if (!Z_Registration_Info_UClass_AMRUtilityKitPositionGenerator.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUtilityKitPositionGenerator"),
				Z_Registration_Info_UClass_AMRUtilityKitPositionGenerator.InnerSingleton,
				AMRUtilityKitPositionGenerator_StaticRegisterNativesAMRUtilityKitPositionGenerator,
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
		return Z_Registration_Info_UClass_AMRUtilityKitPositionGenerator.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUtilityKitPositionGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUtilityKitPositionGenerator.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUtilityKitPositionGenerator.OuterSingleton;
}
#undef UHT_STATICS
AMRUtilityKitPositionGenerator::AMRUtilityKitPositionGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUtilityKitPositionGenerator);
AMRUtilityKitPositionGenerator::~AMRUtilityKitPositionGenerator() {}
// ********** End Class AMRUtilityKitPositionGenerator *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMRUKRandomSpawnSettings, Z_Construct_UScriptStruct_FMRUKRandomSpawnSettings_Statics::NewStructOps, TEXT("MRUKRandomSpawnSettings"),&Z_Registration_Info_UScriptStruct_FMRUKRandomSpawnSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKRandomSpawnSettings), 707376179U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUtilityKitPositionGenerator, TEXT("AMRUtilityKitPositionGenerator"), &Z_Registration_Info_UClass_AMRUtilityKitPositionGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUtilityKitPositionGenerator), 3839130287U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h__Script_MRUtilityKit_7b6751cca1f9ff19c741c26103974661d9d1b46f{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
