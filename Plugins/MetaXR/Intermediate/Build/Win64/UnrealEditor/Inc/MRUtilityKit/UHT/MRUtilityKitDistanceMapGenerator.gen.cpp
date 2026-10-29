// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitDistanceMapGenerator.h"
#include "Camera/CameraTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitDistanceMapGenerator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKDistanceMapGenerationMode(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDistanceMapGenerator(ETypeConstructPhase);
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKDistanceMapGenerator_OnReady__DelegateSignature(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDistanceMapGenerator(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EMRUKDistanceMapGenerationMode ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKDistanceMapGenerationMode_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKDistanceMapGenerationMode>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKDistanceMapGenerationMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AllSpace.Comment", "/// Generate the distance map for free space and occupied space.\n" },
		{ "AllSpace.Name", "EMRUKDistanceMapGenerationMode::AllSpace" },
		{ "AllSpace.ToolTip", "Generate the distance map for free space and occupied space." },
		{ "BlueprintType", "true" },
		{ "FreeSpace.Comment", "/// Generate distance map only for the free space. E.g. The floor inside the room.\n" },
		{ "FreeSpace.Name", "EMRUKDistanceMapGenerationMode::FreeSpace" },
		{ "FreeSpace.ToolTip", "Generate distance map only for the free space. E.g. The floor inside the room." },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
		{ "None.Comment", "// Do not generate a distance map\n" },
		{ "None.Name", "EMRUKDistanceMapGenerationMode::None" },
		{ "None.ToolTip", "Do not generate a distance map" },
		{ "OccupiedSpace.Comment", "/// Generate the distance map only for the occupied space. E.g. outside the room and inside scene objects.\n" },
		{ "OccupiedSpace.Name", "EMRUKDistanceMapGenerationMode::OccupiedSpace" },
		{ "OccupiedSpace.ToolTip", "Generate the distance map only for the occupied space. E.g. outside the room and inside scene objects." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKDistanceMapGenerationMode::None", (int64)EMRUKDistanceMapGenerationMode::None },
		{ "EMRUKDistanceMapGenerationMode::FreeSpace", (int64)EMRUKDistanceMapGenerationMode::FreeSpace },
		{ "EMRUKDistanceMapGenerationMode::OccupiedSpace", (int64)EMRUKDistanceMapGenerationMode::OccupiedSpace },
		{ "EMRUKDistanceMapGenerationMode::AllSpace", (int64)EMRUKDistanceMapGenerationMode::AllSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKDistanceMapGenerationMode",
	"EMRUKDistanceMapGenerationMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKDistanceMapGenerationMode;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKDistanceMapGenerationMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKDistanceMapGenerationMode.OuterSingleton)
		{
			ZRIE_EMRUKDistanceMapGenerationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKDistanceMapGenerationMode, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKDistanceMapGenerationMode"));
		}
		return ZRIE_EMRUKDistanceMapGenerationMode.OuterSingleton;
	}
	if (!ZRIE_EMRUKDistanceMapGenerationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKDistanceMapGenerationMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKDistanceMapGenerationMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKDistanceMapGenerationMode **********************************************

// ********** Begin Delegate FOnReady **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AMRUKDistanceMapGenerator_OnReady__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnReady constinit property declarations ******************************
// ********** End Delegate FOnReady constinit property declarations ********************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "OnReady__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AMRUKDistanceMapGenerator_OnReady__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnReady ****************************************************************

// ********** Begin Class AMRUKDistanceMapGenerator Function CaptureDistanceMap ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_CaptureDistanceMap_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventCaptureDistanceMap_Parms
	{
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Capture the distance map.\n\x09 * @return The captured distance map.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capture the distance map.\n@return The captured distance map." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CaptureDistanceMap constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CaptureDistanceMap constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CaptureDistanceMap Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventCaptureDistanceMap_Parms, ReturnValue), Z_Construct_UClass_UTexture, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CaptureDistanceMap Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "CaptureDistanceMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventCaptureDistanceMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventCaptureDistanceMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_CaptureDistanceMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execCaptureDistanceMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->CaptureDistanceMap();
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function CaptureDistanceMap **********************

// ********** Begin Class AMRUKDistanceMapGenerator Function CreateMaskMeshesForRoom ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_CreateMaskMeshesForRoom_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventCreateMaskMeshesForRoom_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create mask meshes for the given room.\n\x09 * These mask meshes are needed for the distance map to be rendered. It should only be called once before\n\x09 * CaptureDistanceMap in case the SpawnMode has been set to None.\n\x09 * The operation that this function executes is expensive. It only needs to be called after the room has been\n\x09 * created or updated.\n\x09 * @param Room The room for which the masked meshes should be created.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create mask meshes for the given room.\nThese mask meshes are needed for the distance map to be rendered. It should only be called once before\nCaptureDistanceMap in case the SpawnMode has been set to None.\nThe operation that this function executes is expensive. It only needs to be called after the room has been\ncreated or updated.\n@param Room The room for which the masked meshes should be created." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CreateMaskMeshesForRoom constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateMaskMeshesForRoom constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateMaskMeshesForRoom Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventCreateMaskMeshesForRoom_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateMaskMeshesForRoom Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "CreateMaskMeshesForRoom", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventCreateMaskMeshesForRoom_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventCreateMaskMeshesForRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_CreateMaskMeshesForRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execCreateMaskMeshesForRoom)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMaskMeshesForRoom(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function CreateMaskMeshesForRoom *****************

// ********** Begin Class AMRUKDistanceMapGenerator Function CreateMaskMeshOfAnchor ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_CreateMaskMeshOfAnchor_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventCreateMaskMeshOfAnchor_Parms
	{
		AMRUKAnchor* Anchor;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateMaskMeshOfAnchor constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateMaskMeshOfAnchor constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateMaskMeshOfAnchor Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventCreateMaskMeshOfAnchor_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventCreateMaskMeshOfAnchor_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateMaskMeshOfAnchor Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "CreateMaskMeshOfAnchor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventCreateMaskMeshOfAnchor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventCreateMaskMeshOfAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_CreateMaskMeshOfAnchor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execCreateMaskMeshOfAnchor)
{
	P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->CreateMaskMeshOfAnchor(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function CreateMaskMeshOfAnchor ******************

// ********** Begin Class AMRUKDistanceMapGenerator Function GetDistanceMap ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetDistanceMap_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventGetDistanceMap_Parms
	{
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the captured distance map. Be sure to call CaptureDistanceMap() before\n\x09 * @return The captured distance map.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the captured distance map. Be sure to call CaptureDistanceMap() before\n@return The captured distance map." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceMap constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceMap constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceMap Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventGetDistanceMap_Parms, ReturnValue), Z_Construct_UClass_UTexture, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDistanceMap Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "GetDistanceMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventGetDistanceMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventGetDistanceMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetDistanceMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execGetDistanceMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->GetDistanceMap();
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function GetDistanceMap **************************

// ********** Begin Class AMRUKDistanceMapGenerator Function GetDistanceMapRenderTarget ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetDistanceMapRenderTarget_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventGetDistanceMapRenderTarget_Parms
	{
		UCanvasRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceMapRenderTarget constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceMapRenderTarget constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceMapRenderTarget Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventGetDistanceMapRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDistanceMapRenderTarget Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "GetDistanceMapRenderTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventGetDistanceMapRenderTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventGetDistanceMapRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetDistanceMapRenderTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execGetDistanceMapRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCanvasRenderTarget2D**)Z_Param__Result=P_THIS->GetDistanceMapRenderTarget();
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function GetDistanceMapRenderTarget **************

// ********** Begin Class AMRUKDistanceMapGenerator Function GetSceneCaptureView *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetSceneCaptureView_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventGetSceneCaptureView_Parms
	{
		FMinimalViewInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the view info from the scene capture. This is useful for re projection of\n\x09 * the distance map in a material.\n\x09 * @return The view info.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the view info from the scene capture. This is useful for re projection of\nthe distance map in a material.\n@return The view info." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSceneCaptureView constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSceneCaptureView constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSceneCaptureView Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventGetSceneCaptureView_Parms, ReturnValue), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(0, nullptr) }; // 653235006835cdbee0362a8914fe929d4699f292
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSceneCaptureView Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "GetSceneCaptureView", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventGetSceneCaptureView_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventGetSceneCaptureView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetSceneCaptureView(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execGetSceneCaptureView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMinimalViewInfo*)Z_Param__Result=P_THIS->GetSceneCaptureView();
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function GetSceneCaptureView *********************

// ********** Begin Class AMRUKDistanceMapGenerator Function OnRoomCreated *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_OnRoomCreated_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventOnRoomCreated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomCreated constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomCreated constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomCreated Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventOnRoomCreated_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoomCreated Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "OnRoomCreated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventOnRoomCreated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventOnRoomCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_OnRoomCreated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execOnRoomCreated)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomCreated(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function OnRoomCreated ***************************

// ********** Begin Class AMRUKDistanceMapGenerator Function OnRoomUpdated *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_OnRoomUpdated_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventOnRoomUpdated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomUpdated constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomUpdated constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomUpdated Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventOnRoomUpdated_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoomUpdated Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "OnRoomUpdated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventOnRoomUpdated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventOnRoomUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_OnRoomUpdated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execOnRoomUpdated)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomUpdated(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function OnRoomUpdated ***************************

// ********** Begin Class AMRUKDistanceMapGenerator Function RemoveMaskMeshesFromRoom **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_RemoveMaskMeshesFromRoom_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventRemoveMaskMeshesFromRoom_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove mask meshes for the given room.\n\x09 * This function should only be executed when SpawnMode is set to None.\n\x09 * It only needs to be called after a room has been removed.\n\x09 * @param Room The room for which the masked meshes should be removed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove mask meshes for the given room.\nThis function should only be executed when SpawnMode is set to None.\nIt only needs to be called after a room has been removed.\n@param Room The room for which the masked meshes should be removed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveMaskMeshesFromRoom constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveMaskMeshesFromRoom constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveMaskMeshesFromRoom Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventRemoveMaskMeshesFromRoom_Parms, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveMaskMeshesFromRoom Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "RemoveMaskMeshesFromRoom", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventRemoveMaskMeshesFromRoom_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventRemoveMaskMeshesFromRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_RemoveMaskMeshesFromRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execRemoveMaskMeshesFromRoom)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMaskMeshesFromRoom(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function RemoveMaskMeshesFromRoom ****************

// ********** Begin Class AMRUKDistanceMapGenerator Function UpdateMaskMeshOfAnchor ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKDistanceMapGenerator_UpdateMaskMeshOfAnchor_Statics
struct UHT_STATICS
{
	struct MRUKDistanceMapGenerator_eventUpdateMaskMeshOfAnchor_Parms
	{
		AMRUKAnchor* Anchor;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateMaskMeshOfAnchor constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateMaskMeshOfAnchor constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateMaskMeshOfAnchor Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventUpdateMaskMeshOfAnchor_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDistanceMapGenerator_eventUpdateMaskMeshOfAnchor_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateMaskMeshOfAnchor Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKDistanceMapGenerator, nullptr, "UpdateMaskMeshOfAnchor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDistanceMapGenerator_eventUpdateMaskMeshOfAnchor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDistanceMapGenerator_eventUpdateMaskMeshOfAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDistanceMapGenerator_UpdateMaskMeshOfAnchor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKDistanceMapGenerator::execUpdateMaskMeshOfAnchor)
{
	P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->UpdateMaskMeshOfAnchor(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class AMRUKDistanceMapGenerator Function UpdateMaskMeshOfAnchor ******************

// ********** Begin Class AMRUKDistanceMapGenerator ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUKDistanceMapGenerator_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Generates a distance map that can be used in materials to calculate the distance to various objects.\n * This can enable interesting effects. With the distance map you can get the distance from scene objects\n * or walls in a material shader.\n *\n * The Jump Flood Algorithm is used to generate the distance map. This is fast enough to regenerate\n * every tick.\n *\n * To capture a distance map after a room has been loaded call CaptureDistanceMap().\n * It will return a captured distance map. In case you already called CaptureDistanceMap()\n * you can receive the last captured distance map with GetDistanceMap(). No other setup is required.\n *\n * This class will create procedural meshes for every anchor to create a mask. These meshes have their\n * visibility set to scene capture only. That however means that if you place a scene capture component yourself\n * that the meshes will show up in your scene capture component. The actors that have the procedural meshes\n * attached are tagged with GMRUK_DISTANCE_MAP_ACTOR_TAG. In case you don't want them to show up in your\n * scene capture you can hide them by receiving all these actors with the tag GMRUK_DISTANCE_MAP_ACTOR_TAG\n * and add these to the scene captures hidden actors.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Distance Map Generator" },
		{ "IncludePath", "MRUtilityKitDistanceMapGenerator.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates a distance map that can be used in materials to calculate the distance to various objects.\nThis can enable interesting effects. With the distance map you can get the distance from scene objects\nor walls in a material shader.\n\nThe Jump Flood Algorithm is used to generate the distance map. This is fast enough to regenerate\nevery tick.\n\nTo capture a distance map after a room has been loaded call CaptureDistanceMap().\nIt will return a captured distance map. In case you already called CaptureDistanceMap()\nyou can receive the last captured distance map with GetDistanceMap(). No other setup is required.\n\nThis class will create procedural meshes for every anchor to create a mask. These meshes have their\nvisibility set to scene capture only. That however means that if you place a scene capture component yourself\nthat the meshes will show up in your scene capture component. The actors that have the procedural meshes\nattached are tagged with GMRUK_DISTANCE_MAP_ACTOR_TAG. In case you don't want them to show up in your\nscene capture you can hide them by receiving all these actors with the tag GMRUK_DISTANCE_MAP_ACTOR_TAG\nand add these to the scene captures hidden actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReady_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMapGenerationMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The mode in which the final distance map should be generated.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mode in which the final distance map should be generated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture2D_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget1_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * First render target for jump flood algorithm.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First render target for jump flood algorithm." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget2_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Second render target for jump flood algorithm.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Second render target for jump flood algorithm." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMapRenderTarget_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Render target for the final distance map\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render target for the final distance map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskMaterial_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Material to render a mask that gets used to calculate the distance map.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to render a mask that gets used to calculate the distance map." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JFPassMaterial_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Material that executes a pass of the jump flood algorithm.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material that executes a pass of the jump flood algorithm." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMapFreeSpaceMaterial_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Material to render final distance map\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to render final distance map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMapOccupiedSpaceMaterial_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMapAllSpaceMaterial_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JFPassMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMapFreeSpaceMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMapOccupiedSpaceMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMapAllSpaceMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneObjectMaskMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorMaskMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDistanceMapGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKDistanceMapGenerator constinit property declarations ****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReady;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceMapGenerationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMapGenerationMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture2D;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMapRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JFPassMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMapFreeSpaceMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMapOccupiedSpaceMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMapAllSpaceMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JFPassMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMapFreeSpaceMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMapOccupiedSpaceMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMapAllSpaceMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneObjectMaskMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorMaskMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKDistanceMapGenerator constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CaptureDistanceMap"), .Pointer = &AMRUKDistanceMapGenerator::execCaptureDistanceMap },
		{ .NameUTF8 = UTF8TEXT("CreateMaskMeshesForRoom"), .Pointer = &AMRUKDistanceMapGenerator::execCreateMaskMeshesForRoom },
		{ .NameUTF8 = UTF8TEXT("CreateMaskMeshOfAnchor"), .Pointer = &AMRUKDistanceMapGenerator::execCreateMaskMeshOfAnchor },
		{ .NameUTF8 = UTF8TEXT("GetDistanceMap"), .Pointer = &AMRUKDistanceMapGenerator::execGetDistanceMap },
		{ .NameUTF8 = UTF8TEXT("GetDistanceMapRenderTarget"), .Pointer = &AMRUKDistanceMapGenerator::execGetDistanceMapRenderTarget },
		{ .NameUTF8 = UTF8TEXT("GetSceneCaptureView"), .Pointer = &AMRUKDistanceMapGenerator::execGetSceneCaptureView },
		{ .NameUTF8 = UTF8TEXT("OnRoomCreated"), .Pointer = &AMRUKDistanceMapGenerator::execOnRoomCreated },
		{ .NameUTF8 = UTF8TEXT("OnRoomUpdated"), .Pointer = &AMRUKDistanceMapGenerator::execOnRoomUpdated },
		{ .NameUTF8 = UTF8TEXT("RemoveMaskMeshesFromRoom"), .Pointer = &AMRUKDistanceMapGenerator::execRemoveMaskMeshesFromRoom },
		{ .NameUTF8 = UTF8TEXT("UpdateMaskMeshOfAnchor"), .Pointer = &AMRUKDistanceMapGenerator::execUpdateMaskMeshOfAnchor },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_CaptureDistanceMap, "CaptureDistanceMap" }, // c1d3f821365f33444408a8971eb30739be83e65a
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_CreateMaskMeshesForRoom, "CreateMaskMeshesForRoom" }, // 133c05aaa805d78afa1ad336deb10382ee560a9e
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_CreateMaskMeshOfAnchor, "CreateMaskMeshOfAnchor" }, // 9c63aba0b8b4ffac7415e58d362f59a31bfc0f3c
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetDistanceMap, "GetDistanceMap" }, // 692b4a74529ba7bce42e889e6f4e2fd7caabfab3
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetDistanceMapRenderTarget, "GetDistanceMapRenderTarget" }, // c0a45536730148c132145611bd1ecc2bbf02e91a
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_GetSceneCaptureView, "GetSceneCaptureView" }, // 430e168011ad29724e9a8b729787865f78cb4ccf
		{ &Z_Construct_UDelegateFunction_AMRUKDistanceMapGenerator_OnReady__DelegateSignature, "OnReady__DelegateSignature" }, // dd6c59a82d5bc24481957f5d3fc58a4170485101
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_OnRoomCreated, "OnRoomCreated" }, // 71a914b2c63f34974775b6257127b1748b5893b2
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_OnRoomUpdated, "OnRoomUpdated" }, // 5ad5c1be9b5e6f0929bbf167d29c5a88c6082e2f
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_RemoveMaskMeshesFromRoom, "RemoveMaskMeshesFromRoom" }, // 6e30b7ca0c97c01be672f46b7b6ff9814015b1fb
		{ &Z_Construct_UFunction_AMRUKDistanceMapGenerator_UpdateMaskMeshOfAnchor, "UpdateMaskMeshOfAnchor" }, // c2ae10f1b8915065376d605a3b7853575d9b3a13
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKDistanceMapGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUKDistanceMapGenerator Property Definitions ***************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReady = { "OnReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, OnReady), Z_Construct_UDelegateFunction_AMRUKDistanceMapGenerator_OnReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReady_MetaData), NewProp_OnReady_MetaData) }; // dd6c59a82d5bc24481957f5d3fc58a4170485101
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DistanceMapGenerationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DistanceMapGenerationMode = { "DistanceMapGenerationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, DistanceMapGenerationMode), Z_Construct_UEnum_MRUtilityKit_EMRUKDistanceMapGenerationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMapGenerationMode_MetaData), NewProp_DistanceMapGenerationMode_MetaData) }; // 1af30a69112570cbb975abf46aa6cd63acf26b8c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, Root), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneCapture2D = { "SceneCapture2D", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, SceneCapture2D), Z_Construct_UClass_USceneCaptureComponent2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCapture2D_MetaData), NewProp_SceneCapture2D_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SpawnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SpawnMode = { "SpawnMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, SpawnMode), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnMode_MetaData), NewProp_SpawnMode_MetaData) }; // a81a39a3c2baadd905d9be1ef0fe13d87d7487cc
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RenderTarget1 = { "RenderTarget1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, RenderTarget1), Z_Construct_UClass_UCanvasRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget1_MetaData), NewProp_RenderTarget1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RenderTarget2 = { "RenderTarget2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, RenderTarget2), Z_Construct_UClass_UCanvasRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget2_MetaData), NewProp_RenderTarget2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceMapRenderTarget = { "DistanceMapRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, DistanceMapRenderTarget), Z_Construct_UClass_UCanvasRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMapRenderTarget_MetaData), NewProp_DistanceMapRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MaskMaterial = { "MaskMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, MaskMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskMaterial_MetaData), NewProp_MaskMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_JFPassMaterial = { "JFPassMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, JFPassMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JFPassMaterial_MetaData), NewProp_JFPassMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceMapFreeSpaceMaterial = { "DistanceMapFreeSpaceMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, DistanceMapFreeSpaceMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMapFreeSpaceMaterial_MetaData), NewProp_DistanceMapFreeSpaceMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceMapOccupiedSpaceMaterial = { "DistanceMapOccupiedSpaceMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, DistanceMapOccupiedSpaceMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMapOccupiedSpaceMaterial_MetaData), NewProp_DistanceMapOccupiedSpaceMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceMapAllSpaceMaterial = { "DistanceMapAllSpaceMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, DistanceMapAllSpaceMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMapAllSpaceMaterial_MetaData), NewProp_DistanceMapAllSpaceMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_JFPassMaterialInstance = { "JFPassMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, JFPassMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JFPassMaterialInstance_MetaData), NewProp_JFPassMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceMapFreeSpaceMaterialInstance = { "DistanceMapFreeSpaceMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, DistanceMapFreeSpaceMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMapFreeSpaceMaterialInstance_MetaData), NewProp_DistanceMapFreeSpaceMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceMapOccupiedSpaceMaterialInstance = { "DistanceMapOccupiedSpaceMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, DistanceMapOccupiedSpaceMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMapOccupiedSpaceMaterialInstance_MetaData), NewProp_DistanceMapOccupiedSpaceMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceMapAllSpaceMaterialInstance = { "DistanceMapAllSpaceMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, DistanceMapAllSpaceMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMapAllSpaceMaterialInstance_MetaData), NewProp_DistanceMapAllSpaceMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneObjectMaskMaterial = { "SceneObjectMaskMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, SceneObjectMaskMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneObjectMaskMaterial_MetaData), NewProp_SceneObjectMaskMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FloorMaskMaterial = { "FloorMaskMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDistanceMapGenerator, FloorMaskMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorMaskMaterial_MetaData), NewProp_FloorMaskMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapGenerationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapGenerationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneCapture2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderTarget1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderTarget2,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaskMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JFPassMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapFreeSpaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapOccupiedSpaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapAllSpaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JFPassMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapFreeSpaceMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapOccupiedSpaceMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceMapAllSpaceMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneObjectMaskMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorMaskMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUKDistanceMapGenerator Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUKDistanceMapGenerator,
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
static void AMRUKDistanceMapGenerator_StaticRegisterNativesAMRUKDistanceMapGenerator()
{
	UClass* Class = AMRUKDistanceMapGenerator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKDistanceMapGenerator;
UClass* Z_Construct_UClass_AMRUKDistanceMapGenerator(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUKDistanceMapGenerator;
		if (!Z_Registration_Info_UClass_AMRUKDistanceMapGenerator.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKDistanceMapGenerator"),
				Z_Registration_Info_UClass_AMRUKDistanceMapGenerator.InnerSingleton,
				AMRUKDistanceMapGenerator_StaticRegisterNativesAMRUKDistanceMapGenerator,
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
		return Z_Registration_Info_UClass_AMRUKDistanceMapGenerator.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUKDistanceMapGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKDistanceMapGenerator.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKDistanceMapGenerator.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKDistanceMapGenerator);
AMRUKDistanceMapGenerator::~AMRUKDistanceMapGenerator() {}
// ********** End Class AMRUKDistanceMapGenerator **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKDistanceMapGenerationMode, TEXT("EMRUKDistanceMapGenerationMode"), &ZRIE_EMRUKDistanceMapGenerationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 452135529U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKDistanceMapGenerator, TEXT("AMRUKDistanceMapGenerator"), &Z_Registration_Info_UClass_AMRUKDistanceMapGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKDistanceMapGenerator), 3553514818U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h__Script_MRUtilityKit_6a7dcc8abb95e8969e29350cf01b5c8f7c46a783{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
