// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitGridSliceResizer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitGridSliceResizer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKScaleCenterMode(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKGridSliceResizerComponent(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKGridSliceResizerComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EMRUKScaleCenterMode ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MRUtilityKit_EMRUKScaleCenterMode_Statics
template<> MRUTILITYKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMRUKScaleCenterMode>()
{
	return Z_Construct_UEnum_MRUtilityKit_EMRUKScaleCenterMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMRUKScaleCenterMode::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "XAxis.Name", "EMRUKScaleCenterMode::XAxis" },
		{ "YAxis.Name", "EMRUKScaleCenterMode::YAxis" },
		{ "ZAxis.Name", "EMRUKScaleCenterMode::ZAxis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKScaleCenterMode::None", (int64)EMRUKScaleCenterMode::None },
		{ "EMRUKScaleCenterMode::XAxis", (int64)EMRUKScaleCenterMode::XAxis },
		{ "EMRUKScaleCenterMode::YAxis", (int64)EMRUKScaleCenterMode::YAxis },
		{ "EMRUKScaleCenterMode::ZAxis", (int64)EMRUKScaleCenterMode::ZAxis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKScaleCenterMode",
	"EMRUKScaleCenterMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMRUKScaleCenterMode;
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKScaleCenterMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMRUKScaleCenterMode.OuterSingleton)
		{
			ZRIE_EMRUKScaleCenterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKScaleCenterMode, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("EMRUKScaleCenterMode"));
		}
		return ZRIE_EMRUKScaleCenterMode.OuterSingleton;
	}
	if (!ZRIE_EMRUKScaleCenterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMRUKScaleCenterMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMRUKScaleCenterMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMRUKScaleCenterMode ********************************************************

// ********** Begin Class UMRUKGridSliceResizerComponent Function SliceMesh ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKGridSliceResizerComponent_SliceMesh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Slice the mesh. This gets automatically called whenever\n\x09 * the scale of the owning Actor changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Slice the mesh. This gets automatically called whenever\nthe scale of the owning Actor changes." },
	};
#endif // WITH_METADATA

// ********** Begin Function SliceMesh constinit property declarations *****************************
// ********** End Function SliceMesh constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKGridSliceResizerComponent, nullptr, "SliceMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKGridSliceResizerComponent_SliceMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKGridSliceResizerComponent::execSliceMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliceMesh();
	P_NATIVE_END;
}
// ********** End Class UMRUKGridSliceResizerComponent Function SliceMesh **************************

// ********** Begin Class UMRUKGridSliceResizerComponent *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKGridSliceResizerComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * The GridSliceResizerComponent is a versatile tool designed to maintain the proportions of\n * specific areas of 3D meshes while allowing others to stretch during scaling. This component\n * should replace the static mesh component, rather than being used in conjunction with it.\n *\n * The concept of the GridSliceResizerComponent is similar to the popular 9-Slice-Scaling technique\n * used in 2D graphics, which keeps the borders of sprites unstretched while the inner rectangle is\n * stretched. In essence, the GridSliceResizerComponent is a 27-Slice-Scaler for 3D meshes.\n *\n * The component operates by dividing the bounding box of a 3D mesh into 27 cuboids, as illustrated below.\n * Not all cuboids are visible in this picture. Only the ones that are front facing:\n *\n * @code\n *     +-----+-----------+-----+\n *    /_____/___________/_____/|\n *   /_____/___________/_____/||\n *  /     /           /     /|||\n * +-----+-----------+-----+ |||\n * |  A  |     B     |  C  |/|||\n * +-----+-----------+-----+ |||\n * |     |           |     | |||\n * |  D  |     E     |  F  | |||\n * |     |           |     |/||/\n * +-----+-----------+-----+ |/\n * |  G  |     H     |  I  | /\n * +-----+-----+-----+-----+\n * @endcode\n *\n * The scaling behaviour is as follows (assuming all other faces of the bounding box are divided as the\n * front facing one):\n *\n * Center Cuboid (E): Vertices within this cuboid stretch on two axes (Y, Z).\n * Corner Cuboids (A, C, G, I): These cuboids do not stretch on any axis.\n * Middle Cuboids (B, H): These cuboids stretch horizontally but not vertically.\n * Middle Cuboids (D, F): These cuboids stretch vertically but not horizontally.\n *\n * The slicing areas are defined by the SlicerPivotOffset and BorderXNegative, BorderXPositive, etc.\n * These border values range from 0 to 1 and extend from the mesh's pivot (which may be offset by SlicerPivotOffset)\n * to the maximum or minimum of the bounding box's axis.\n * If all borders are set to 1, the mesh will stretch like a regular mesh during scaling. If set to 0, no stretching\n * will occur. Typically, you'll want the pivot in the middle of the mesh and the borders set to around 0.8.\n *\n * You can visualize the borders and pivot in the Actor editor preview using bDebugDrawPivot, bDebugDrawBorderX, etc.\n *\n * This component is only compatible with static meshes that have CPU access enabled. Ensure you enable CPU\n * access in the static mesh editor.\n */" },
		{ "DisplayName", "MR Utility Kit Grid Slice Resizer Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MRUtilityKitGridSliceResizer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "The GridSliceResizerComponent is a versatile tool designed to maintain the proportions of\nspecific areas of 3D meshes while allowing others to stretch during scaling. This component\nshould replace the static mesh component, rather than being used in conjunction with it.\n\nThe concept of the GridSliceResizerComponent is similar to the popular 9-Slice-Scaling technique\nused in 2D graphics, which keeps the borders of sprites unstretched while the inner rectangle is\nstretched. In essence, the GridSliceResizerComponent is a 27-Slice-Scaler for 3D meshes.\n\nThe component operates by dividing the bounding box of a 3D mesh into 27 cuboids, as illustrated below.\nNot all cuboids are visible in this picture. Only the ones that are front facing:\n\n@code\n    +-----+-----------+-----+\n   /_____/___________/_____/|\n  /_____/___________/_____/||\n /     /           /     /|||\n+-----+-----------+-----+ |||\n|  A  |     B     |  C  |/|||\n+-----+-----------+-----+ |||\n|     |           |     | |||\n|  D  |     E     |  F  | |||\n|     |           |     |/||/\n+-----+-----------+-----+ |/\n|  G  |     H     |  I  | /\n+-----+-----+-----+-----+\n@endcode\n\nThe scaling behaviour is as follows (assuming all other faces of the bounding box are divided as the\nfront facing one):\n\nCenter Cuboid (E): Vertices within this cuboid stretch on two axes (Y, Z).\nCorner Cuboids (A, C, G, I): These cuboids do not stretch on any axis.\nMiddle Cuboids (B, H): These cuboids stretch horizontally but not vertically.\nMiddle Cuboids (D, F): These cuboids stretch vertically but not horizontally.\n\nThe slicing areas are defined by the SlicerPivotOffset and BorderXNegative, BorderXPositive, etc.\nThese border values range from 0 to 1 and extend from the mesh's pivot (which may be offset by SlicerPivotOffset)\nto the maximum or minimum of the bounding box's axis.\nIf all borders are set to 1, the mesh will stretch like a regular mesh during scaling. If set to 0, no stretching\nwill occur. Typically, you'll want the pivot in the middle of the mesh and the borders set to around 0.8.\n\nYou can visualize the borders and pivot in the Actor editor preview using bDebugDrawPivot, bDebugDrawBorderX, etc.\n\nThis component is only compatible with static meshes that have CPU access enabled. Ensure you enable CPU\naccess in the static mesh editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The static mesh to slice. Make sure to enable CPU access on it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "The static mesh to slice. Make sure to enable CPU access on it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderXNegative_MetaData[] = {
		{ "Category", "MR Utility Kit|Slices" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Slice border for the negative X axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Slice border for the negative X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderXPositive_MetaData[] = {
		{ "Category", "MR Utility Kit|Slices" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Slice border for the positive X axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Slice border for the positive X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderYNegative_MetaData[] = {
		{ "Category", "MR Utility Kit|Slices" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Slice border for the negative Y axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Slice border for the negative Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderYPositive_MetaData[] = {
		{ "Category", "MR Utility Kit|Slices" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Slice border for the positive Y axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Slice border for the positive Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderZNegative_MetaData[] = {
		{ "Category", "MR Utility Kit|Slices" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Slice border for the negative Z axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Slice border for the negative Z axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderZPositive_MetaData[] = {
		{ "Category", "MR Utility Kit|Slices" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Slice border for the positive Z axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Slice border for the positive Z axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlicerPivotOffset_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * How much the meshes pivot should be offset when applying the slice borders.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "How much the meshes pivot should be offset when applying the slice borders." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCenterMode_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MRUtilityKit.EMRUKScaleCenterMode" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * This parameter determines whether the center part of the object should be scaled.\n\x09 * If set to false, the center vertices will remain stationary. This is particularly useful when\n\x09 * you want to maintain the proportions of certain geometrical features in the center part, such\n\x09 * as a doorknob. By keeping the center vertices in place, you can avoid unwanted stretching effects,\n\x09 * resulting in a more visually appealing outcome.\n\x09 * However, it's important to note that for a convincing visual effect, the texture applied to the object should also not stretch.\n\x09 * If you encounter issues with texture stretching, consider adding an additional loop cut.\n\x09 * This can help maintain the texture's proportions and prevent it from distorting.\n\x09 * In case the mesh gets scaled down and some of the center vertices fall outside of the scaled down center\n\x09 * all vertices that are inside the center will be scaled down uniformly.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "This parameter determines whether the center part of the object should be scaled.\nIf set to false, the center vertices will remain stationary. This is particularly useful when\nyou want to maintain the proportions of certain geometrical features in the center part, such\nas a doorknob. By keeping the center vertices in place, you can avoid unwanted stretching effects,\nresulting in a more visually appealing outcome.\nHowever, it's important to note that for a convincing visual effect, the texture applied to the object should also not stretch.\nIf you encounter issues with texture stretching, consider adding an additional loop cut.\nThis can help maintain the texture's proportions and prevent it from distorting.\nIn case the mesh gets scaled down and some of the center vertices fall outside of the scaled down center\nall vertices that are inside the center will be scaled down uniformly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollision_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Whether or not a collision mesh should be created for the static mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Whether or not a collision mesh should be created for the static mesh." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawPivot_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Show the pivot of the mesh that gets used for the slice borders.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Show the pivot of the mesh that gets used for the slice borders." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawBorderX_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Show the slice borders on the X axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Show the slice borders on the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawBorderY_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Show the slice borders on the Y axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Show the slice borders on the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawBorderZ_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Show the slice borders on the Z axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
		{ "ToolTip", "Show the slice borders on the Z axis." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGridSliceResizer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKGridSliceResizerComponent constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BorderXNegative;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BorderXPositive;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BorderYNegative;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BorderYPositive;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BorderZNegative;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BorderZPositive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlicerPivotOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleCenterMode;
	static void NewProp_bGenerateCollision_SetBit(void* Obj)
	{
		((UMRUKGridSliceResizerComponent*)Obj)->bGenerateCollision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollision;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDebugDrawPivot_SetBit(void* Obj)
	{
		((UMRUKGridSliceResizerComponent*)Obj)->bDebugDrawPivot = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawPivot;
	static void NewProp_bDebugDrawBorderX_SetBit(void* Obj)
	{
		((UMRUKGridSliceResizerComponent*)Obj)->bDebugDrawBorderX = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawBorderX;
	static void NewProp_bDebugDrawBorderY_SetBit(void* Obj)
	{
		((UMRUKGridSliceResizerComponent*)Obj)->bDebugDrawBorderY = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawBorderY;
	static void NewProp_bDebugDrawBorderZ_SetBit(void* Obj)
	{
		((UMRUKGridSliceResizerComponent*)Obj)->bDebugDrawBorderZ = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawBorderZ;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKGridSliceResizerComponent constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SliceMesh"), .Pointer = &UMRUKGridSliceResizerComponent::execSliceMesh },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKGridSliceResizerComponent_SliceMesh, "SliceMesh" }, // 858324ac58692e45024351d8ca0477f8edf080f1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKGridSliceResizerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKGridSliceResizerComponent Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, Mesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BorderXNegative = { "BorderXNegative", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, BorderXNegative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderXNegative_MetaData), NewProp_BorderXNegative_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BorderXPositive = { "BorderXPositive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, BorderXPositive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderXPositive_MetaData), NewProp_BorderXPositive_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BorderYNegative = { "BorderYNegative", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, BorderYNegative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderYNegative_MetaData), NewProp_BorderYNegative_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BorderYPositive = { "BorderYPositive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, BorderYPositive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderYPositive_MetaData), NewProp_BorderYPositive_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BorderZNegative = { "BorderZNegative", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, BorderZNegative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderZNegative_MetaData), NewProp_BorderZNegative_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BorderZPositive = { "BorderZPositive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, BorderZPositive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderZPositive_MetaData), NewProp_BorderZPositive_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SlicerPivotOffset = { "SlicerPivotOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, SlicerPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlicerPivotOffset_MetaData), NewProp_SlicerPivotOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ScaleCenterMode = { "ScaleCenterMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, ScaleCenterMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCenterMode_MetaData), NewProp_ScaleCenterMode_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateCollision = { "bGenerateCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRUKGridSliceResizerComponent), &UHT_STATICS::NewProp_bGenerateCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateCollision_MetaData), NewProp_bGenerateCollision_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDebugDrawPivot = { "bDebugDrawPivot", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRUKGridSliceResizerComponent), &UHT_STATICS::NewProp_bDebugDrawPivot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawPivot_MetaData), NewProp_bDebugDrawPivot_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDebugDrawBorderX = { "bDebugDrawBorderX", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRUKGridSliceResizerComponent), &UHT_STATICS::NewProp_bDebugDrawBorderX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawBorderX_MetaData), NewProp_bDebugDrawBorderX_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDebugDrawBorderY = { "bDebugDrawBorderY", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRUKGridSliceResizerComponent), &UHT_STATICS::NewProp_bDebugDrawBorderY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawBorderY_MetaData), NewProp_bDebugDrawBorderY_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDebugDrawBorderZ = { "bDebugDrawBorderZ", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRUKGridSliceResizerComponent), &UHT_STATICS::NewProp_bDebugDrawBorderZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawBorderZ_MetaData), NewProp_bDebugDrawBorderZ_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProcMesh = { "ProcMesh", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKGridSliceResizerComponent, ProcMesh), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcMesh_MetaData), NewProp_ProcMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderXNegative,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderXPositive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderYNegative,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderYPositive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderZNegative,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderZPositive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlicerPivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScaleCenterMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateCollision,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDebugDrawPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDebugDrawBorderX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDebugDrawBorderY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDebugDrawBorderZ,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProcMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKGridSliceResizerComponent Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKGridSliceResizerComponent,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMRUKGridSliceResizerComponent_StaticRegisterNativesUMRUKGridSliceResizerComponent()
{
	UClass* Class = UMRUKGridSliceResizerComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKGridSliceResizerComponent;
UClass* Z_Construct_UClass_UMRUKGridSliceResizerComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKGridSliceResizerComponent;
		if (!Z_Registration_Info_UClass_UMRUKGridSliceResizerComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKGridSliceResizerComponent"),
				Z_Registration_Info_UClass_UMRUKGridSliceResizerComponent.InnerSingleton,
				UMRUKGridSliceResizerComponent_StaticRegisterNativesUMRUKGridSliceResizerComponent,
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
		return Z_Registration_Info_UClass_UMRUKGridSliceResizerComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKGridSliceResizerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKGridSliceResizerComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKGridSliceResizerComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKGridSliceResizerComponent);
UMRUKGridSliceResizerComponent::~UMRUKGridSliceResizerComponent() {}
// ********** End Class UMRUKGridSliceResizerComponent *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitGridSliceResizer_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MRUtilityKit_EMRUKScaleCenterMode, TEXT("EMRUKScaleCenterMode"), &ZRIE_EMRUKScaleCenterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1320685606U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKGridSliceResizerComponent, TEXT("UMRUKGridSliceResizerComponent"), &Z_Registration_Info_UClass_UMRUKGridSliceResizerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKGridSliceResizerComponent), 2921057371U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitGridSliceResizer_h__Script_MRUtilityKit_43663a72955ed8c52082971c53c946d95eeacde5{
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
