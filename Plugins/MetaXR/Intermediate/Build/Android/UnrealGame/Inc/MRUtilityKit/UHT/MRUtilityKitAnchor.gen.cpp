// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitAnchor.h"
#include "MRUtilityKit.h"
#include "OculusXRAnchorTypes.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitAnchor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKPlaneUV(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AMRUKAnchor Function AttachProceduralMesh ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_AttachProceduralMesh_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventAttachProceduralMesh_Parms
	{
		TArray<FMRUKPlaneUV> PlaneUVAdjustments;
		TArray<FString> CutHoleLabels;
		bool GenerateCollision;
		UMaterialInterface* ProceduralMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "PlaneUVAdjustments" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Attach a procedural mesh to the anchor. The mesh will match the size, position and shape of the volume and/or plane\n\x09 * if they are set.\n\x09 * @param PlaneUVAdjustments Scale and offset to apply to the UV texture coordinates. If more than one is specified\n\x09 *\x09\x09\x09\x09\x09\x09\x09 then multiple UV texture coordinates are created (up to 4) and adjustments applied to\n\x09 *\x09\x09\x09\x09\x09\x09\x09 each. This can be left empty in which case a single set of UV texture coordinates are\n\x09 *\x09\x09\x09\x09\x09\x09\x09 created in the range 0 to 1 for the plane.\n\x09 * @param CutHoleLabels\x09\x09 Labels for which the generated mesh should have holes. Only works with planes.\n\x09 * @param GenerateCollision  Whether to generate collision geometry or not\n\x09 * @param ProceduralMaterial Material to use on the procedural generated mesh.\n\x09 */" },
#endif
		{ "CPP_Default_GenerateCollision", "true" },
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AMRUKAnchorActorSpawner instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach a procedural mesh to the anchor. The mesh will match the size, position and shape of the volume and/or plane\nif they are set.\n@param PlaneUVAdjustments Scale and offset to apply to the UV texture coordinates. If more than one is specified\n                                                      then multiple UV texture coordinates are created (up to 4) and adjustments applied to\n                                                      each. This can be left empty in which case a single set of UV texture coordinates are\n                                                      created in the range 0 to 1 for the plane.\n@param CutHoleLabels          Labels for which the generated mesh should have holes. Only works with planes.\n@param GenerateCollision  Whether to generate collision geometry or not\n@param ProceduralMaterial Material to use on the procedural generated mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutHoleLabels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttachProceduralMesh constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneUVAdjustments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneUVAdjustments;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CutHoleLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CutHoleLabels;
	static void NewProp_GenerateCollision_SetBit(void* Obj)
	{
		((MRUKAnchor_eventAttachProceduralMesh_Parms*)Obj)->GenerateCollision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AttachProceduralMesh constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AttachProceduralMesh Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlaneUVAdjustments_Inner = { "PlaneUVAdjustments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKPlaneUV, METADATA_PARAMS(0, nullptr) }; // 4b00a33c158aa55d820c924fd8614850e93b068b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PlaneUVAdjustments = { "PlaneUVAdjustments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventAttachProceduralMesh_Parms, PlaneUVAdjustments), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4b00a33c158aa55d820c924fd8614850e93b068b
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CutHoleLabels_Inner = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CutHoleLabels = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventAttachProceduralMesh_Parms, CutHoleLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutHoleLabels_MetaData), NewProp_CutHoleLabels_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_GenerateCollision = { "GenerateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventAttachProceduralMesh_Parms), &UHT_STATICS::NewProp_GenerateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventAttachProceduralMesh_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneUVAdjustments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneUVAdjustments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenerateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AttachProceduralMesh Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "AttachProceduralMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventAttachProceduralMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventAttachProceduralMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_AttachProceduralMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execAttachProceduralMesh)
{
	P_GET_TARRAY(FMRUKPlaneUV,Z_Param_PlaneUVAdjustments);
	P_GET_TARRAY_REF(FString,Z_Param_Out_CutHoleLabels);
	P_GET_UBOOL(Z_Param_GenerateCollision);
	P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachProceduralMesh(Z_Param_PlaneUVAdjustments,Z_Param_Out_CutHoleLabels,Z_Param_GenerateCollision,Z_Param_ProceduralMaterial);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function AttachProceduralMesh **********************************

// ********** Begin Class AMRUKAnchor Function GenerateProceduralAnchorMesh ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_GenerateProceduralAnchorMesh_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms
	{
		UProceduralMeshComponent* ProceduralMesh;
		TArray<FMRUKPlaneUV> PlaneUVAdjustments;
		TArray<FString> CutHoleLabels;
		bool PreferVolume;
		bool GenerateCollision;
		double Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "PlaneUVAdjustments" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate a procedural mesh for the anchor. The mesh will match the size, position and shape of the volume and/or plane\n\x09 * if they are set.\n\x09 * @param ProceduralMesh     The procedural mesh component that should be used to store the generated mesh.\n\x09 * @param PlaneUVAdjustments Scale and offset to apply to the UV texture coordinates. If more than one is specified\n\x09 *\x09\x09\x09\x09\x09\x09\x09 then multiple UV texture coordinates are created (up to 4) and adjustments applied to\n\x09 *\x09\x09\x09\x09\x09\x09\x09 each. This can be left empty in which case a single set of UV texture coordinates are\n\x09 *\x09\x09\x09\x09\x09\x09\x09 created in the range 0 to 1 for the plane.\n\x09 * @param CutHoleLabels\x09\x09 Labels for which the generated mesh should have holes. Only works with planes.\n\x09 * @param GenerateCollision  Whether to generate collision geometry or not\n\x09 * @param Offset             A offset to make the procedural mesh slightly bigger or smaller than the anchors volume/plane.\n\x09 */" },
#endif
		{ "CPP_Default_GenerateCollision", "true" },
		{ "CPP_Default_Offset", "0.000000" },
		{ "CPP_Default_PreferVolume", "false" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a procedural mesh for the anchor. The mesh will match the size, position and shape of the volume and/or plane\nif they are set.\n@param ProceduralMesh     The procedural mesh component that should be used to store the generated mesh.\n@param PlaneUVAdjustments Scale and offset to apply to the UV texture coordinates. If more than one is specified\n                                                      then multiple UV texture coordinates are created (up to 4) and adjustments applied to\n                                                      each. This can be left empty in which case a single set of UV texture coordinates are\n                                                      created in the range 0 to 1 for the plane.\n@param CutHoleLabels          Labels for which the generated mesh should have holes. Only works with planes.\n@param GenerateCollision  Whether to generate collision geometry or not\n@param Offset             A offset to make the procedural mesh slightly bigger or smaller than the anchors volume/plane." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneUVAdjustments_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutHoleLabels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateProceduralAnchorMesh constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneUVAdjustments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneUVAdjustments;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CutHoleLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CutHoleLabels;
	static void NewProp_PreferVolume_SetBit(void* Obj)
	{
		((MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms*)Obj)->PreferVolume = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreferVolume;
	static void NewProp_GenerateCollision_SetBit(void* Obj)
	{
		((MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms*)Obj)->GenerateCollision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateCollision;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateProceduralAnchorMesh constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateProceduralAnchorMesh Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMesh_MetaData), NewProp_ProceduralMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlaneUVAdjustments_Inner = { "PlaneUVAdjustments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKPlaneUV, METADATA_PARAMS(0, nullptr) }; // 4b00a33c158aa55d820c924fd8614850e93b068b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PlaneUVAdjustments = { "PlaneUVAdjustments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms, PlaneUVAdjustments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneUVAdjustments_MetaData), NewProp_PlaneUVAdjustments_MetaData) }; // 4b00a33c158aa55d820c924fd8614850e93b068b
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CutHoleLabels_Inner = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CutHoleLabels = { "CutHoleLabels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms, CutHoleLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutHoleLabels_MetaData), NewProp_CutHoleLabels_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_PreferVolume = { "PreferVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms), &UHT_STATICS::NewProp_PreferVolume_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_GenerateCollision = { "GenerateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms), &UHT_STATICS::NewProp_GenerateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneUVAdjustments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneUVAdjustments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutHoleLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreferVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenerateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateProceduralAnchorMesh Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "GenerateProceduralAnchorMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventGenerateProceduralAnchorMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_GenerateProceduralAnchorMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execGenerateProceduralAnchorMesh)
{
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProceduralMesh);
	P_GET_TARRAY_REF(FMRUKPlaneUV,Z_Param_Out_PlaneUVAdjustments);
	P_GET_TARRAY_REF(FString,Z_Param_Out_CutHoleLabels);
	P_GET_UBOOL(Z_Param_PreferVolume);
	P_GET_UBOOL(Z_Param_GenerateCollision);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateProceduralAnchorMesh(Z_Param_ProceduralMesh,Z_Param_Out_PlaneUVAdjustments,Z_Param_Out_CutHoleLabels,Z_Param_PreferVolume,Z_Param_GenerateCollision,Z_Param_Offset);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function GenerateProceduralAnchorMesh **************************

// ********** Begin Class AMRUKAnchor Function GenerateRandomPositionOnPlane ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_GenerateRandomPositionOnPlane_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventGenerateRandomPositionOnPlane_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate a uniform random position within the boundary of the plane.\n\x09 * @return The random position in local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a uniform random position within the boundary of the plane.\n@return The random position in local coordinate space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRandomPositionOnPlane constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRandomPositionOnPlane constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRandomPositionOnPlane Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGenerateRandomPositionOnPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRandomPositionOnPlane Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "GenerateRandomPositionOnPlane", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventGenerateRandomPositionOnPlane_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventGenerateRandomPositionOnPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_GenerateRandomPositionOnPlane(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execGenerateRandomPositionOnPlane)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GenerateRandomPositionOnPlane();
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function GenerateRandomPositionOnPlane *************************

// ********** Begin Class AMRUKAnchor Function GenerateRandomPositionOnPlaneFromStream *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_GenerateRandomPositionOnPlaneFromStream_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventGenerateRandomPositionOnPlaneFromStream_Parms
	{
		FRandomStream RandomStream;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate a uniform random position within the boundary of the plane from a random stream.\n\x09 * @param RandomStream\x09\x09""A random generator used to generate the position on the plane.\n\x09 * @return\x09\x09\x09\x09\x09The random position in local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a uniform random position within the boundary of the plane from a random stream.\n@param RandomStream          A random generator used to generate the position on the plane.\n@return                                      The random position in local coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRandomPositionOnPlaneFromStream constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRandomPositionOnPlaneFromStream constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRandomPositionOnPlaneFromStream Property Definitions **********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGenerateRandomPositionOnPlaneFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGenerateRandomPositionOnPlaneFromStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRandomPositionOnPlaneFromStream Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "GenerateRandomPositionOnPlaneFromStream", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventGenerateRandomPositionOnPlaneFromStream_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventGenerateRandomPositionOnPlaneFromStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_GenerateRandomPositionOnPlaneFromStream(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execGenerateRandomPositionOnPlaneFromStream)
{
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GenerateRandomPositionOnPlaneFromStream(Z_Param_Out_RandomStream);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function GenerateRandomPositionOnPlaneFromStream ***************

// ********** Begin Class AMRUKAnchor Function GetClosestSurfacePosition ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_GetClosestSurfacePosition_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventGetClosestSurfacePosition_Parms
	{
		FVector TestPosition;
		FVector OutSurfacePosition;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculate the closest surface position on this anchor.\n\x09 * @param TestPosition       The position in world space for which the closes surface position should be obtained.\n\x09 * @param OutSurfacePosition The closest surface position\n\x09 * @return                   The distance between TestPosition and OutSurfacePosition\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate the closest surface position on this anchor.\n@param TestPosition       The position in world space for which the closes surface position should be obtained.\n@param OutSurfacePosition The closest surface position\n@return                   The distance between TestPosition and OutSurfacePosition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClosestSurfacePosition constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSurfacePosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClosestSurfacePosition constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClosestSurfacePosition Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TestPosition = { "TestPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGetClosestSurfacePosition_Parms, TestPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPosition_MetaData), NewProp_TestPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutSurfacePosition = { "OutSurfacePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGetClosestSurfacePosition_Parms, OutSurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGetClosestSurfacePosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSurfacePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetClosestSurfacePosition Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "GetClosestSurfacePosition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventGetClosestSurfacePosition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventGetClosestSurfacePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_GetClosestSurfacePosition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execGetClosestSurfacePosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TestPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSurfacePosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetClosestSurfacePosition(Z_Param_Out_TestPosition,Z_Param_Out_OutSurfacePosition);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function GetClosestSurfacePosition *****************************

// ********** Begin Class AMRUKAnchor Function GetFacingDirection **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_GetFacingDirection_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventGetFacingDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a natural \xe2\x80\x9c""forward\xe2\x80\x9d direction for anchors; for planes, this is always Z-forward.\n\x09 * For volumes, it\xe2\x80\x99s the X/Y cardinal axis that aligns best with the normal of the closest wall.\n\x09 * @return The forward facing direction.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a natural \xe2\x80\x9c""forward\xe2\x80\x9d direction for anchors; for planes, this is always Z-forward.\nFor volumes, it\xe2\x80\x99s the X/Y cardinal axis that aligns best with the normal of the closest wall.\n@return The forward facing direction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFacingDirection constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFacingDirection constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFacingDirection Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventGetFacingDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFacingDirection Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "GetFacingDirection", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventGetFacingDirection_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventGetFacingDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_GetFacingDirection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execGetFacingDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetFacingDirection();
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function GetFacingDirection ************************************

// ********** Begin Class AMRUKAnchor Function HasAnyLabel *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_HasAnyLabel_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventHasAnyLabel_Parms
	{
		TArray<FString> Labels;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the anchor has any of the given labels.\n\x09 * @param Labels The labels to check.\n\x09 * @return Whether the anchor has any of the given labels.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the anchor has any of the given labels.\n@param Labels The labels to check.\n@return Whether the anchor has any of the given labels." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAnyLabel constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Labels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKAnchor_eventHasAnyLabel_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAnyLabel constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAnyLabel Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventHasAnyLabel_Parms, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Labels_MetaData), NewProp_Labels_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventHasAnyLabel_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Labels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Labels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasAnyLabel Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "HasAnyLabel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventHasAnyLabel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventHasAnyLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_HasAnyLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execHasAnyLabel)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Labels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnyLabel(Z_Param_Out_Labels);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function HasAnyLabel *******************************************

// ********** Begin Class AMRUKAnchor Function HasLabel ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_HasLabel_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventHasLabel_Parms
	{
		FString Label;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the anchor has the given label.\n\x09 * @param Label The label to check.\n\x09 * @return Whether the anchor has the given label.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the anchor has the given label.\n@param Label The label to check.\n@return Whether the anchor has the given label." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasLabel constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKAnchor_eventHasLabel_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasLabel constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasLabel Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventHasLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventHasLabel_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasLabel Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "HasLabel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventHasLabel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventHasLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_HasLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execHasLabel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasLabel(Z_Param_Label);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function HasLabel **********************************************

// ********** Begin Class AMRUKAnchor Function IsPositionInBoundary ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_IsPositionInBoundary_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventIsPositionInBoundary_Parms
	{
		FVector2D Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if a 2D position is within the boundary of the plane. The position should be in\n\x09 * the local coordinate system NOT world coordinates.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a 2D position is within the boundary of the plane. The position should be in\nthe local coordinate system NOT world coordinates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPositionInBoundary constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKAnchor_eventIsPositionInBoundary_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPositionInBoundary constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPositionInBoundary Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventIsPositionInBoundary_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventIsPositionInBoundary_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPositionInBoundary Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "IsPositionInBoundary", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventIsPositionInBoundary_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventIsPositionInBoundary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_IsPositionInBoundary(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execIsPositionInBoundary)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPositionInBoundary(Z_Param_Out_Position);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function IsPositionInBoundary **********************************

// ********** Begin Class AMRUKAnchor Function IsPositionInVolumeBounds ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_IsPositionInVolumeBounds_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventIsPositionInVolumeBounds_Parms
	{
		FVector Position;
		bool TestVerticalBounds;
		double Tolerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the given position is on or inside the volume bounds.\n\x09 * Floor, ceiling and wall anchors will be excluded from the search.\n\x09 * @param Position           The position in world space to check\n\x09 * @param TestVerticalBounds Whether the vertical bounds should be checked or not\n\x09 * @param Tolerance          Tolerance\n\x09 * @return\x09\x09\x09\x09\x09 The anchor the WorldPosition is in. A null pointer otherwise.\n\x09 */" },
#endif
		{ "CPP_Default_TestVerticalBounds", "true" },
		{ "CPP_Default_Tolerance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the given position is on or inside the volume bounds.\nFloor, ceiling and wall anchors will be excluded from the search.\n@param Position           The position in world space to check\n@param TestVerticalBounds Whether the vertical bounds should be checked or not\n@param Tolerance          Tolerance\n@return                                       The anchor the WorldPosition is in. A null pointer otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPositionInVolumeBounds constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_TestVerticalBounds_SetBit(void* Obj)
	{
		((MRUKAnchor_eventIsPositionInVolumeBounds_Parms*)Obj)->TestVerticalBounds = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TestVerticalBounds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKAnchor_eventIsPositionInVolumeBounds_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPositionInVolumeBounds constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPositionInVolumeBounds Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventIsPositionInVolumeBounds_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_TestVerticalBounds = { "TestVerticalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventIsPositionInVolumeBounds_Parms), &UHT_STATICS::NewProp_TestVerticalBounds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventIsPositionInVolumeBounds_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventIsPositionInVolumeBounds_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestVerticalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPositionInVolumeBounds Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "IsPositionInVolumeBounds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventIsPositionInVolumeBounds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventIsPositionInVolumeBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_IsPositionInVolumeBounds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execIsPositionInVolumeBounds)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_UBOOL(Z_Param_TestVerticalBounds);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPositionInVolumeBounds(Z_Param_Out_Position,Z_Param_TestVerticalBounds,Z_Param_Tolerance);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function IsPositionInVolumeBounds ******************************

// ********** Begin Class AMRUKAnchor Function PassesLabelFilter ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_PassesLabelFilter_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventPassesLabelFilter_Parms
	{
		FMRUKLabelFilter LabelFilter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the anchor passes the given label filter\n\x09 * @param LabelFilter The labels to check.\n\x09 * @return            Whether the anchor has any of the given labels.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the anchor passes the given label filter\n@param LabelFilter The labels to check.\n@return            Whether the anchor has any of the given labels." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PassesLabelFilter constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKAnchor_eventPassesLabelFilter_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PassesLabelFilter constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PassesLabelFilter Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventPassesLabelFilter_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) }; // 24abff6d460a2cf96abe632a3c772a3d003a8c5f
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventPassesLabelFilter_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PassesLabelFilter Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "PassesLabelFilter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventPassesLabelFilter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventPassesLabelFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_PassesLabelFilter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execPassesLabelFilter)
{
	P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PassesLabelFilter(Z_Param_Out_LabelFilter);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function PassesLabelFilter *************************************

// ********** Begin Class AMRUKAnchor Function Raycast *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_Raycast_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventRaycast_Parms
	{
		FVector Origin;
		FVector Direction;
		float MaxDist;
		FMRUKHit OutHit;
		int32 ComponentTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* EMRUKComponentType::All */" },
#endif
		{ "CPP_Default_ComponentTypes", "7" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EMRUKComponentType::All" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EMRUKComponentType" },
	};
#endif // WITH_METADATA

// ********** Begin Function Raycast constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKAnchor_eventRaycast_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Raycast constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Raycast Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycast_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycast_Parms, OutHit), Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // 152ba4ff6c3a5074e5301872b2cb24dc7e81c9b1
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ComponentTypes = { "ComponentTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycast_Parms, ComponentTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTypes_MetaData), NewProp_ComponentTypes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventRaycast_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Raycast Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "Raycast", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventRaycast_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_Raycast(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execRaycast)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDist);
	P_GET_STRUCT_REF(FMRUKHit,Z_Param_Out_OutHit);
	P_GET_PROPERTY(FIntProperty,Z_Param_ComponentTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDist,Z_Param_Out_OutHit,Z_Param_ComponentTypes);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function Raycast ***********************************************

// ********** Begin Class AMRUKAnchor Function RaycastAll ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_RaycastAll_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventRaycastAll_Parms
	{
		FVector Origin;
		FVector Direction;
		float MaxDist;
		TArray<FMRUKHit> OutHits;
		int32 ComponentTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* EMRUKComponentType::All */" },
#endif
		{ "CPP_Default_ComponentTypes", "7" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EMRUKComponentType::All" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EMRUKComponentType" },
	};
#endif // WITH_METADATA

// ********** Begin Function RaycastAll constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKAnchor_eventRaycastAll_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RaycastAll constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RaycastAll Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycastAll_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycastAll_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycastAll_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // 152ba4ff6c3a5074e5301872b2cb24dc7e81c9b1
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycastAll_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 152ba4ff6c3a5074e5301872b2cb24dc7e81c9b1
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ComponentTypes = { "ComponentTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventRaycastAll_Parms, ComponentTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTypes_MetaData), NewProp_ComponentTypes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventRaycastAll_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RaycastAll Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "RaycastAll", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventRaycastAll_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventRaycastAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_RaycastAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execRaycastAll)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDist);
	P_GET_TARRAY_REF(FMRUKHit,Z_Param_Out_OutHits);
	P_GET_PROPERTY(FIntProperty,Z_Param_ComponentTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RaycastAll(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDist,Z_Param_Out_OutHits,Z_Param_ComponentTypes);
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function RaycastAll ********************************************

// ********** Begin Class AMRUKAnchor Function SpawnInterior ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKAnchor_SpawnInterior_Statics
struct UHT_STATICS
{
	struct MRUKAnchor_eventSpawnInterior_Parms
	{
		const TSubclassOf<AActor> ActorClass;
		bool MatchAspectRatio;
		bool CalculateFacingDirection;
		EMRUKSpawnerScalingMode ScalingMode;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Spawn a mesh on the position of this anchor.\n\x09 * The actor should have Z as up, Y as right and X as forward.\n\x09 * @param ActorClass The Class to spawn at the anchors position.\n\x09 * @param MatchAspectRatio If true the actor will be rotated to best match the aspect ratio of the volume (applies to volumes only).\n\x09 * @param CalculateFacingDirection If true then actor will be rotated to face away from the closest wall (applies to volumes only).\n\x09 * @param ScalingMode Sets how to scale the actor to fit the size of the volume/plane.\n\x09 * @return The spawned actor or null if nothing was spawned.\n\x09 */" },
#endif
		{ "CPP_Default_CalculateFacingDirection", "false" },
		{ "CPP_Default_MatchAspectRatio", "false" },
		{ "CPP_Default_ScalingMode", "Stretch" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AMRUKAnchorActorSpawner instead." },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn a mesh on the position of this anchor.\nThe actor should have Z as up, Y as right and X as forward.\n@param ActorClass The Class to spawn at the anchors position.\n@param MatchAspectRatio If true the actor will be rotated to best match the aspect ratio of the volume (applies to volumes only).\n@param CalculateFacingDirection If true then actor will be rotated to face away from the closest wall (applies to volumes only).\n@param ScalingMode Sets how to scale the actor to fit the size of the volume/plane.\n@return The spawned actor or null if nothing was spawned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnInterior constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static void NewProp_MatchAspectRatio_SetBit(void* Obj)
	{
		((MRUKAnchor_eventSpawnInterior_Parms*)Obj)->MatchAspectRatio = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchAspectRatio;
	static void NewProp_CalculateFacingDirection_SetBit(void* Obj)
	{
		((MRUKAnchor_eventSpawnInterior_Parms*)Obj)->CalculateFacingDirection = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CalculateFacingDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScalingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScalingMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnInterior constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnInterior Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventSpawnInterior_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_MatchAspectRatio = { "MatchAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventSpawnInterior_Parms), &UHT_STATICS::NewProp_MatchAspectRatio_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_CalculateFacingDirection = { "CalculateFacingDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchor_eventSpawnInterior_Parms), &UHT_STATICS::NewProp_CalculateFacingDirection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ScalingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ScalingMode = { "ScalingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventSpawnInterior_Parms, ScalingMode), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode, METADATA_PARAMS(0, nullptr) }; // 76e817757f9dc8dbab0e1be94cfe8708731cb262
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKAnchor_eventSpawnInterior_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MatchAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CalculateFacingDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScalingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScalingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnInterior Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKAnchor, nullptr, "SpawnInterior", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKAnchor_eventSpawnInterior_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKAnchor_eventSpawnInterior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKAnchor_SpawnInterior(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKAnchor::execSpawnInterior)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_ActorClass);
	P_GET_UBOOL(Z_Param_MatchAspectRatio);
	P_GET_UBOOL(Z_Param_CalculateFacingDirection);
	P_GET_ENUM(EMRUKSpawnerScalingMode,Z_Param_ScalingMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnInterior(Z_Param_Out_ActorClass,Z_Param_MatchAspectRatio,Z_Param_CalculateFacingDirection,EMRUKSpawnerScalingMode(Z_Param_ScalingMode));
	P_NATIVE_END;
}
// ********** End Class AMRUKAnchor Function SpawnInterior *****************************************

// ********** Begin Class AMRUKAnchor **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUKAnchor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents an anchor in the Mixed Reality Utility Kit. This combines an Unreal actor with the scene anchor.\n * The actor is placed at the position of the anchor and the actor's rotation is set to match the rotation of the anchor.\n * Provides functions to check if a position is inside the volume or plane of the anchor, raycast against the anchor, etc...\n * @see https://developer.oculus.com/documentation/unreal/unreal-spatial-anchors/\n * for more information about anchors in the Mixed Reality Utility Kit.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Anchor" },
		{ "IncludePath", "MRUtilityKitAnchor.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents an anchor in the Mixed Reality Utility Kit. This combines an Unreal actor with the scene anchor.\nThe actor is placed at the position of the anchor and the actor's rotation is set to match the rotation of the anchor.\nProvides functions to check if a position is inside the volume or plane of the anchor, raycast against the anchor, etc...\n@see https://developer.oculus.com/documentation/unreal/unreal-spatial-anchors/\nfor more information about anchors in the Mixed Reality Utility Kit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceHandle_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The space handle of this anchor\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The space handle of this anchor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorUUID_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The anchors UUID\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The anchors UUID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticClassifications_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The semantic classification of the anchor, also sometimes refered to as labels for short.\n\x09 * This can be for example FLOOR, COUCH, TABLE, SCREEN, BED, LAMP, etc...\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The semantic classification of the anchor, also sometimes refered to as labels for short.\nThis can be for example FLOOR, COUCH, TABLE, SCREEN, BED, LAMP, etc..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the anchor has a plane attached to it, this represents the bounds of that plane in\n\x09 * local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the anchor has a plane attached to it, this represents the bounds of that plane in\nlocal coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBoundary2D_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the anchor has a plane attached to it, this represents the boundary of it in\n\x09 * local coordinate space. For rectangular boundaries this will be the same as the\n\x09 * PlaneBounds.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the anchor has a plane attached to it, this represents the boundary of it in\nlocal coordinate space. For rectangular boundaries this will be the same as the\nPlaneBounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the anchor has a volume attached to it, this represents the bounds of that volume in\n\x09 * local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the anchor has a volume attached to it, this represents the bounds of that volume in\nlocal coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Procedural mesh that is generated from the anchor geometry.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Procedural mesh that is generated from the anchor geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentAnchor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pointer to the parent anchor, e.g. if this is a door or window frame the parent will\n\x09 * be a wall. If this is a screen it could have a desk parent.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the parent anchor, e.g. if this is a door or window frame the parent will\nbe a wall. If this is a screen it could have a desk parent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Array of all children attached to it, e.g. if this is a wall, it could have an array\n\x09 * of door/window frames. If this is a desk it could have an array of screens on it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of all children attached to it, e.g. if this is a wall, it could have an array\nof door/window frames. If this is a desk it could have an array of screens on it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The room this anchor is placed in.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The room this anchor is placed in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneMeshPositions_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Positions of the global mesh. Only populated if the anchor is has the label GLOABL_MESH\n\x09 * and the option UseSharedLibraryForAnchorLoading is set to true.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Positions of the global mesh. Only populated if the anchor is has the label GLOABL_MESH\nand the option UseSharedLibraryForAnchorLoading is set to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneMeshIndices_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indices of the global mesh. Only populated if the anchor is has the label GLOABL_MESH\n\x09 * and the option UseSharedLibraryForAnchorLoading is set to true.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indices of the global mesh. Only populated if the anchor is has the label GLOABL_MESH\nand the option UseSharedLibraryForAnchorLoading is set to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interior_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKAnchor constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SemanticClassifications_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SemanticClassifications;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneBoundary2D_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneBoundary2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildAnchors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneMeshPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SceneMeshPositions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SceneMeshIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SceneMeshIndices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKAnchor constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AttachProceduralMesh"), .Pointer = &AMRUKAnchor::execAttachProceduralMesh },
		{ .NameUTF8 = UTF8TEXT("GenerateProceduralAnchorMesh"), .Pointer = &AMRUKAnchor::execGenerateProceduralAnchorMesh },
		{ .NameUTF8 = UTF8TEXT("GenerateRandomPositionOnPlane"), .Pointer = &AMRUKAnchor::execGenerateRandomPositionOnPlane },
		{ .NameUTF8 = UTF8TEXT("GenerateRandomPositionOnPlaneFromStream"), .Pointer = &AMRUKAnchor::execGenerateRandomPositionOnPlaneFromStream },
		{ .NameUTF8 = UTF8TEXT("GetClosestSurfacePosition"), .Pointer = &AMRUKAnchor::execGetClosestSurfacePosition },
		{ .NameUTF8 = UTF8TEXT("GetFacingDirection"), .Pointer = &AMRUKAnchor::execGetFacingDirection },
		{ .NameUTF8 = UTF8TEXT("HasAnyLabel"), .Pointer = &AMRUKAnchor::execHasAnyLabel },
		{ .NameUTF8 = UTF8TEXT("HasLabel"), .Pointer = &AMRUKAnchor::execHasLabel },
		{ .NameUTF8 = UTF8TEXT("IsPositionInBoundary"), .Pointer = &AMRUKAnchor::execIsPositionInBoundary },
		{ .NameUTF8 = UTF8TEXT("IsPositionInVolumeBounds"), .Pointer = &AMRUKAnchor::execIsPositionInVolumeBounds },
		{ .NameUTF8 = UTF8TEXT("PassesLabelFilter"), .Pointer = &AMRUKAnchor::execPassesLabelFilter },
		{ .NameUTF8 = UTF8TEXT("Raycast"), .Pointer = &AMRUKAnchor::execRaycast },
		{ .NameUTF8 = UTF8TEXT("RaycastAll"), .Pointer = &AMRUKAnchor::execRaycastAll },
		{ .NameUTF8 = UTF8TEXT("SpawnInterior"), .Pointer = &AMRUKAnchor::execSpawnInterior },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKAnchor_AttachProceduralMesh, "AttachProceduralMesh" }, // 47af3f2bcecc2388e9dfaa01188f606249e3daf1
		{ &Z_Construct_UFunction_AMRUKAnchor_GenerateProceduralAnchorMesh, "GenerateProceduralAnchorMesh" }, // ae3d902626f3b833132f050aba385984182e3229
		{ &Z_Construct_UFunction_AMRUKAnchor_GenerateRandomPositionOnPlane, "GenerateRandomPositionOnPlane" }, // ca7c259573eaf6f76a5d0a01dcd37c2815fcabb8
		{ &Z_Construct_UFunction_AMRUKAnchor_GenerateRandomPositionOnPlaneFromStream, "GenerateRandomPositionOnPlaneFromStream" }, // e6ea21ab8c98aed18c43ede913fb175255db2f91
		{ &Z_Construct_UFunction_AMRUKAnchor_GetClosestSurfacePosition, "GetClosestSurfacePosition" }, // e069c6dd0deedf15699a00ae4e45918474b9fb65
		{ &Z_Construct_UFunction_AMRUKAnchor_GetFacingDirection, "GetFacingDirection" }, // b2c0123a8dee210c8d44623888aaaf264b049664
		{ &Z_Construct_UFunction_AMRUKAnchor_HasAnyLabel, "HasAnyLabel" }, // a7038e200e71f82c19e4ad9a6d6bbcc304807bb1
		{ &Z_Construct_UFunction_AMRUKAnchor_HasLabel, "HasLabel" }, // 6c52d11e6320ba3bb3dc12d246d334f891ab4e38
		{ &Z_Construct_UFunction_AMRUKAnchor_IsPositionInBoundary, "IsPositionInBoundary" }, // d110f68bd7b52130a467c570a2f97e22fc37e112
		{ &Z_Construct_UFunction_AMRUKAnchor_IsPositionInVolumeBounds, "IsPositionInVolumeBounds" }, // a09c5153cbdea35b79c3a00c27ac7a7191de3647
		{ &Z_Construct_UFunction_AMRUKAnchor_PassesLabelFilter, "PassesLabelFilter" }, // 32c09257ab3e3cb48ab5c7790cfb52e2689d2086
		{ &Z_Construct_UFunction_AMRUKAnchor_Raycast, "Raycast" }, // 79025c31814e6ab402330d36e48f4f0c8ecfcf81
		{ &Z_Construct_UFunction_AMRUKAnchor_RaycastAll, "RaycastAll" }, // 72506a07d024f7d23934e421fdff0cbe3051730b
		{ &Z_Construct_UFunction_AMRUKAnchor_SpawnInterior, "SpawnInterior" }, // 7c60b0b2dd6f7392237c81f92bef16ca096d8149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKAnchor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUKAnchor Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpaceHandle = { "SpaceHandle", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, SpaceHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceHandle_MetaData), NewProp_SpaceHandle_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AnchorUUID = { "AnchorUUID", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, AnchorUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorUUID_MetaData), NewProp_AnchorUUID_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SemanticClassifications_Inner = { "SemanticClassifications", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SemanticClassifications = { "SemanticClassifications", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, SemanticClassifications), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticClassifications_MetaData), NewProp_SemanticClassifications_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlaneBounds = { "PlaneBounds", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, PlaneBounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBounds_MetaData), NewProp_PlaneBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlaneBoundary2D_Inner = { "PlaneBoundary2D", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PlaneBoundary2D = { "PlaneBoundary2D", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, PlaneBoundary2D), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBoundary2D_MetaData), NewProp_PlaneBoundary2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_VolumeBounds = { "VolumeBounds", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, VolumeBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeBounds_MetaData), NewProp_VolumeBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x01140000000a280d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshComponent_MetaData), NewProp_ProceduralMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParentAnchor = { "ParentAnchor", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, ParentAnchor), Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentAnchor_MetaData), NewProp_ParentAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ChildAnchors_Inner = { "ChildAnchors", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ChildAnchors = { "ChildAnchors", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, ChildAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildAnchors_MetaData), NewProp_ChildAnchors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0114000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, Room), Z_Construct_UClass_AMRUKRoom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SceneMeshPositions_Inner = { "SceneMeshPositions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SceneMeshPositions = { "SceneMeshPositions", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, SceneMeshPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneMeshPositions_MetaData), NewProp_SceneMeshPositions_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SceneMeshIndices_Inner = { "SceneMeshIndices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SceneMeshIndices = { "SceneMeshIndices", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, SceneMeshIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneMeshIndices_MetaData), NewProp_SceneMeshIndices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Interior = { "Interior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchor, Interior), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interior_MetaData), NewProp_Interior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpaceHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SemanticClassifications_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SemanticClassifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneBoundary2D_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneBoundary2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VolumeBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChildAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChildAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneMeshPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneMeshPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneMeshIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneMeshIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Interior,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUKAnchor Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUKAnchor,
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
static void AMRUKAnchor_StaticRegisterNativesAMRUKAnchor()
{
	UClass* Class = AMRUKAnchor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKAnchor;
UClass* Z_Construct_UClass_AMRUKAnchor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUKAnchor;
		if (!Z_Registration_Info_UClass_AMRUKAnchor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKAnchor"),
				Z_Registration_Info_UClass_AMRUKAnchor.InnerSingleton,
				AMRUKAnchor_StaticRegisterNativesAMRUKAnchor,
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
		return Z_Registration_Info_UClass_AMRUKAnchor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUKAnchor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKAnchor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKAnchor.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKAnchor);
AMRUKAnchor::~AMRUKAnchor() {}
// ********** End Class AMRUKAnchor ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKAnchor, TEXT("AMRUKAnchor"), &Z_Registration_Info_UClass_AMRUKAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKAnchor), 1135939360U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h__Script_MRUtilityKit_c1ab1469239bbe8eeafd4e12f2a2b8f6cc1d7008{
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
