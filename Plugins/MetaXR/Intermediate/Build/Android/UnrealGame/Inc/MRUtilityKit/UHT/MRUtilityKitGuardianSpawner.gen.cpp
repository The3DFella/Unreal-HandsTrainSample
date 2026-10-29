// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitGuardianSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitGuardianSpawner() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardianSpawner(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardianSpawner(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AMRUKGuardianSpawner Function DestroyGuardians ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKGuardianSpawner_DestroyGuardians_Statics
struct UHT_STATICS
{
	struct MRUKGuardianSpawner_eventDestroyGuardians_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyGuardians constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DestroyGuardians constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DestroyGuardians Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventDestroyGuardians_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DestroyGuardians Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "DestroyGuardians", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKGuardianSpawner_eventDestroyGuardians_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKGuardianSpawner_eventDestroyGuardians_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_DestroyGuardians(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKGuardianSpawner::execDestroyGuardians)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyGuardians(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKGuardianSpawner Function DestroyGuardians *****************************

// ********** Begin Class AMRUKGuardianSpawner Function OnRoomCreated ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomCreated_Statics
struct UHT_STATICS
{
	struct MRUKGuardianSpawner_eventOnRoomCreated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomCreated constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomCreated constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomCreated Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventOnRoomCreated_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoomCreated Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "OnRoomCreated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKGuardianSpawner_eventOnRoomCreated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKGuardianSpawner_eventOnRoomCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomCreated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKGuardianSpawner::execOnRoomCreated)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomCreated(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKGuardianSpawner Function OnRoomCreated ********************************

// ********** Begin Class AMRUKGuardianSpawner Function OnRoomRemoved ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomRemoved_Statics
struct UHT_STATICS
{
	struct MRUKGuardianSpawner_eventOnRoomRemoved_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomRemoved constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomRemoved constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomRemoved Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventOnRoomRemoved_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoomRemoved Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "OnRoomRemoved", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKGuardianSpawner_eventOnRoomRemoved_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKGuardianSpawner_eventOnRoomRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomRemoved(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKGuardianSpawner::execOnRoomRemoved)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomRemoved(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKGuardianSpawner Function OnRoomRemoved ********************************

// ********** Begin Class AMRUKGuardianSpawner Function OnRoomUpdated ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomUpdated_Statics
struct UHT_STATICS
{
	struct MRUKGuardianSpawner_eventOnRoomUpdated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomUpdated constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomUpdated constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomUpdated Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventOnRoomUpdated_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoomUpdated Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "OnRoomUpdated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKGuardianSpawner_eventOnRoomUpdated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKGuardianSpawner_eventOnRoomUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomUpdated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKGuardianSpawner::execOnRoomUpdated)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomUpdated(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKGuardianSpawner Function OnRoomUpdated ********************************

// ********** Begin Class AMRUKGuardianSpawner Function SetGridDensity *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics
struct UHT_STATICS
{
	struct MRUKGuardianSpawner_eventSetGridDensity_Parms
	{
		double Density;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Set the density of the grid.\n\x09 * @param Density The grid density.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Set the density of the grid.\n@param Density The grid density." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGridDensity constinit property declarations ************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Density;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGridDensity constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGridDensity Property Definitions ***********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventSetGridDensity_Parms, Density), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Density,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGridDensity Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "SetGridDensity", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKGuardianSpawner_eventSetGridDensity_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKGuardianSpawner_eventSetGridDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKGuardianSpawner::execSetGridDensity)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Density);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGridDensity(Z_Param_Density);
	P_NATIVE_END;
}
// ********** End Class AMRUKGuardianSpawner Function SetGridDensity *******************************

// ********** Begin Class AMRUKGuardianSpawner Function SetGuardianMaterial ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics
struct UHT_STATICS
{
	struct MRUKGuardianSpawner_eventSetGuardianMaterial_Parms
	{
		UMaterialInstance* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Set the guardian material to a different one.\n\x09 * @param Material The guardian material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Set the guardian material to a different one.\n@param Material The guardian material." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGuardianMaterial constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGuardianMaterial constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGuardianMaterial Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventSetGuardianMaterial_Parms, Material), Z_Construct_UClass_UMaterialInstance, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGuardianMaterial Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "SetGuardianMaterial", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKGuardianSpawner_eventSetGuardianMaterial_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKGuardianSpawner_eventSetGuardianMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKGuardianSpawner::execSetGuardianMaterial)
{
	P_GET_OBJECT(UMaterialInstance,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGuardianMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class AMRUKGuardianSpawner Function SetGuardianMaterial **************************

// ********** Begin Class AMRUKGuardianSpawner Function SpawnGuardians *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardians_Statics
struct UHT_STATICS
{
	struct MRUKGuardianSpawner_eventSpawnGuardians_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawn the guardian. This will get called automatically after the mixed reality utility kit has\n\x09 * been initialized if SpawnMode is set to something other than None.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Spawn the guardian. This will get called automatically after the mixed reality utility kit has\nbeen initialized if SpawnMode is set to something other than None." },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnGuardians constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnGuardians constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnGuardians Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventSpawnGuardians_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnGuardians Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "SpawnGuardians", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKGuardianSpawner_eventSpawnGuardians_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKGuardianSpawner_eventSpawnGuardians_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardians(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKGuardianSpawner::execSpawnGuardians)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnGuardians(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKGuardianSpawner Function SpawnGuardians *******************************

// ********** Begin Class AMRUKGuardianSpawner *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUKGuardianSpawner_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * This class helps with spawning a guardian if the player gets close to any furniture or walls. This is useful if your application has a full VR mode.\n * It can spawn a guardian for each room in the scene. It can also spawn a guardian for the current room only.\n * For details about the guardian see the AMRUKGuardian class.\n */" },
		{ "DisplayName", "MR Utility Kit Guardian" },
		{ "IncludePath", "MRUtilityKitGuardianSpawner.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "This class helps with spawning a guardian if the player gets close to any furniture or walls. This is useful if your application has a full VR mode.\nIt can spawn a guardian for each room in the scene. It can also spawn a guardian for the current room only.\nFor details about the guardian see the AMRUKGuardian class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Whether SpawnGuardian() should be called automatically after the mixed reality utility kit\n\x09 * has been initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Whether SpawnGuardian() should be called automatically after the mixed reality utility kit\nhas been initialized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardianDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * How close the camera needs to come to a surface before the guardian appears.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "How close the camera needs to come to a surface before the guardian appears." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableFade_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Whether the fading value should be calculated for the shader or not.\n\x09 * If fading is not needed this can save performance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Whether the fading value should be calculated for the shader or not.\nIf fading is not needed this can save performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardianMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetGuardianMaterial" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The material to use for the guardian. It needs to have a scalar parameter Fade\n\x09 * and a vector parameter WallScale. If this material is not set a default one\n\x09 * will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "The material to use for the guardian. It needs to have a scalar parameter Fade\nand a vector parameter WallScale. If this material is not set a default one\nwill be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridDensity_MetaData[] = {
		{ "BlueprintSetter", "SetGridDensity" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * How dense the grid should be.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "How dense the grid should be." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicGuardianMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKGuardianSpawner constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GuardianDistance;
	static void NewProp_EnableFade_SetBit(void* Obj)
	{
		((AMRUKGuardianSpawner*)Obj)->EnableFade = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableFade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardianMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GridDensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicGuardianMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKGuardianSpawner constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DestroyGuardians"), .Pointer = &AMRUKGuardianSpawner::execDestroyGuardians },
		{ .NameUTF8 = UTF8TEXT("OnRoomCreated"), .Pointer = &AMRUKGuardianSpawner::execOnRoomCreated },
		{ .NameUTF8 = UTF8TEXT("OnRoomRemoved"), .Pointer = &AMRUKGuardianSpawner::execOnRoomRemoved },
		{ .NameUTF8 = UTF8TEXT("OnRoomUpdated"), .Pointer = &AMRUKGuardianSpawner::execOnRoomUpdated },
		{ .NameUTF8 = UTF8TEXT("SetGridDensity"), .Pointer = &AMRUKGuardianSpawner::execSetGridDensity },
		{ .NameUTF8 = UTF8TEXT("SetGuardianMaterial"), .Pointer = &AMRUKGuardianSpawner::execSetGuardianMaterial },
		{ .NameUTF8 = UTF8TEXT("SpawnGuardians"), .Pointer = &AMRUKGuardianSpawner::execSpawnGuardians },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_DestroyGuardians, "DestroyGuardians" }, // bd96ea28829e6eb660b4c4a94ddb1b039106e70b
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomCreated, "OnRoomCreated" }, // 424d21c5b2be92e8da515cdde5e8abb2a0889b16
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomRemoved, "OnRoomRemoved" }, // 13ffca51239e08d136e08b8f398f616da8f26aca
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_OnRoomUpdated, "OnRoomUpdated" }, // 1e6071cc4c90a2132c1ebc81cb1bd0cf1cf9d139
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity, "SetGridDensity" }, // ee22a92bff17d6fd5785689db06d8350b44db705
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial, "SetGuardianMaterial" }, // ff3c414884e2bfd035d55aa066aef2c1cc5fe4c6
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardians, "SpawnGuardians" }, // 3057aa1df94fa8e54300143276d0bcae90afd39a
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKGuardianSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUKGuardianSpawner Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SpawnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SpawnMode = { "SpawnMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, SpawnMode), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnMode_MetaData), NewProp_SpawnMode_MetaData) }; // 9aaa30d266ddf9b26a48a402d10bef878b6a1931
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_GuardianDistance = { "GuardianDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, GuardianDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardianDistance_MetaData), NewProp_GuardianDistance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableFade = { "EnableFade", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKGuardianSpawner), &UHT_STATICS::NewProp_EnableFade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableFade_MetaData), NewProp_EnableFade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GuardianMaterial = { "GuardianMaterial", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, GuardianMaterial), Z_Construct_UClass_UMaterialInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardianMaterial_MetaData), NewProp_GuardianMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_GridDensity = { "GridDensity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, GridDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridDensity_MetaData), NewProp_GridDensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DynamicGuardianMaterial = { "DynamicGuardianMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, DynamicGuardianMaterial), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicGuardianMaterial_MetaData), NewProp_DynamicGuardianMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GuardianDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GuardianMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GridDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicGuardianMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUKGuardianSpawner Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUKGuardianSpawner,
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
static void AMRUKGuardianSpawner_StaticRegisterNativesAMRUKGuardianSpawner()
{
	UClass* Class = AMRUKGuardianSpawner::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKGuardianSpawner;
UClass* Z_Construct_UClass_AMRUKGuardianSpawner(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUKGuardianSpawner;
		if (!Z_Registration_Info_UClass_AMRUKGuardianSpawner.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKGuardianSpawner"),
				Z_Registration_Info_UClass_AMRUKGuardianSpawner.InnerSingleton,
				AMRUKGuardianSpawner_StaticRegisterNativesAMRUKGuardianSpawner,
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
		return Z_Registration_Info_UClass_AMRUKGuardianSpawner.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUKGuardianSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKGuardianSpawner.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKGuardianSpawner.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKGuardianSpawner);
AMRUKGuardianSpawner::~AMRUKGuardianSpawner() {}
// ********** End Class AMRUKGuardianSpawner *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKGuardianSpawner, TEXT("AMRUKGuardianSpawner"), &Z_Registration_Info_UClass_AMRUKGuardianSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKGuardianSpawner), 164855851U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h__Script_MRUtilityKit_c442d230a3a8598fc74b2aada01d910ddf43a81e{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
