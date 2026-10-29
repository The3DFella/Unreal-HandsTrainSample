// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitDebugComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitDebugComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKDebugComponent(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKDebugComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMRUKDebugComponent Function HideAnchor **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKDebugComponent_HideAnchor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Hide the current anchor. This method needs only to be called to hide the anchor\n\x09 * that was displayed by ShowAnchorAtRayHit().\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "Hide the current anchor. This method needs only to be called to hide the anchor\nthat was displayed by ShowAnchorAtRayHit()." },
	};
#endif // WITH_METADATA

// ********** Begin Function HideAnchor constinit property declarations ****************************
// ********** End Function HideAnchor constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKDebugComponent, nullptr, "HideAnchor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKDebugComponent_HideAnchor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKDebugComponent::execHideAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideAnchor();
	P_NATIVE_END;
}
// ********** End Class UMRUKDebugComponent Function HideAnchor ************************************

// ********** Begin Class UMRUKDebugComponent Function HideAnchorSpace *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKDebugComponent_HideAnchorSpace_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Hide the current anchor space actor. This method needs only to be called to hide the\n\x09 * anchor space that was displayed by ShowAnchorAtRayHit().\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "Hide the current anchor space actor. This method needs only to be called to hide the\nanchor space that was displayed by ShowAnchorAtRayHit()." },
	};
#endif // WITH_METADATA

// ********** Begin Function HideAnchorSpace constinit property declarations ***********************
// ********** End Function HideAnchorSpace constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKDebugComponent, nullptr, "HideAnchorSpace", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKDebugComponent_HideAnchorSpace(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKDebugComponent::execHideAnchorSpace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideAnchorSpace();
	P_NATIVE_END;
}
// ********** End Class UMRUKDebugComponent Function HideAnchorSpace *******************************

// ********** Begin Class UMRUKDebugComponent Function ShowAnchorAtRayHit **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKDebugComponent_ShowAnchorAtRayHit_Statics
struct UHT_STATICS
{
	struct MRUKDebugComponent_eventShowAnchorAtRayHit_Parms
	{
		FVector Origin;
		FVector Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Shoot a ray and display the anchors coordinate system and labels that was hit by the ray if any.\n\x09 * Call HideAnchor() to get rid of the displayed anchor.\n\x09 * @param Origin The ray origin.\n\x09 * @param Direction The ray direction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "Shoot a ray and display the anchors coordinate system and labels that was hit by the ray if any.\nCall HideAnchor() to get rid of the displayed anchor.\n@param Origin The ray origin.\n@param Direction The ray direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowAnchorAtRayHit constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowAnchorAtRayHit constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowAnchorAtRayHit Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDebugComponent_eventShowAnchorAtRayHit_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDebugComponent_eventShowAnchorAtRayHit_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShowAnchorAtRayHit Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKDebugComponent, nullptr, "ShowAnchorAtRayHit", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDebugComponent_eventShowAnchorAtRayHit_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDebugComponent_eventShowAnchorAtRayHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKDebugComponent_ShowAnchorAtRayHit(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKDebugComponent::execShowAnchorAtRayHit)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAnchorAtRayHit(Z_Param_Out_Origin,Z_Param_Out_Direction);
	P_NATIVE_END;
}
// ********** End Class UMRUKDebugComponent Function ShowAnchorAtRayHit ****************************

// ********** Begin Class UMRUKDebugComponent Function ShowAnchorSpaceAtRayHit *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKDebugComponent_ShowAnchorSpaceAtRayHit_Statics
struct UHT_STATICS
{
	struct MRUKDebugComponent_eventShowAnchorSpaceAtRayHit_Parms
	{
		FVector Origin;
		FVector Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Shoot a ray and display the anchors space that was hit by the ray if any.\n\x09 * Call HideAnchorSpace() to get rid of the displayed anchor space.\n\x09 * @param Origin The ray origin.\n\x09 * @param Direction The ray direction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "Shoot a ray and display the anchors space that was hit by the ray if any.\nCall HideAnchorSpace() to get rid of the displayed anchor space.\n@param Origin The ray origin.\n@param Direction The ray direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowAnchorSpaceAtRayHit constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowAnchorSpaceAtRayHit constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowAnchorSpaceAtRayHit Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDebugComponent_eventShowAnchorSpaceAtRayHit_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDebugComponent_eventShowAnchorSpaceAtRayHit_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShowAnchorSpaceAtRayHit Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKDebugComponent, nullptr, "ShowAnchorSpaceAtRayHit", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKDebugComponent_eventShowAnchorSpaceAtRayHit_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKDebugComponent_eventShowAnchorSpaceAtRayHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKDebugComponent_ShowAnchorSpaceAtRayHit(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKDebugComponent::execShowAnchorSpaceAtRayHit)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAnchorSpaceAtRayHit(Z_Param_Out_Origin,Z_Param_Out_Direction);
	P_NATIVE_END;
}
// ********** End Class UMRUKDebugComponent Function ShowAnchorSpaceAtRayHit ***********************

// ********** Begin Class UMRUKDebugComponent ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKDebugComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * Various debugging utilities for the scene.\n * This component can for example attached to the player pawn. The various methods can\n * then be called on input from the pawn.\n */" },
		{ "DisplayName", "MR Utility Kit Debug Component" },
		{ "IncludePath", "MRUtilityKitDebugComponent.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "Various debugging utilities for the scene.\nThis component can for example attached to the player pawn. The various methods can\nthen be called on input from the pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoActorClass_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The gizmo to show when visualizing an anchor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "The gizmo to show when visualizing an anchor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextActorClass_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The text to show when visualizing an anchor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "The text to show when visualizing an anchor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScale_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The scale that should be applied to the gizmo before displaying it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "The scale that should be applied to the gizmo before displaying it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The scale that should be applied to the text before displaying it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
		{ "ToolTip", "The scale that should be applied to the text before displaying it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmoActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTextActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAnchorSpaceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDebugComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKDebugComponent constinit property declarations **********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_GizmoActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TextActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveGizmoActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTextActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAnchorSpaceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKDebugComponent constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HideAnchor"), .Pointer = &UMRUKDebugComponent::execHideAnchor },
		{ .NameUTF8 = UTF8TEXT("HideAnchorSpace"), .Pointer = &UMRUKDebugComponent::execHideAnchorSpace },
		{ .NameUTF8 = UTF8TEXT("ShowAnchorAtRayHit"), .Pointer = &UMRUKDebugComponent::execShowAnchorAtRayHit },
		{ .NameUTF8 = UTF8TEXT("ShowAnchorSpaceAtRayHit"), .Pointer = &UMRUKDebugComponent::execShowAnchorSpaceAtRayHit },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKDebugComponent_HideAnchor, "HideAnchor" }, // c346424e497bb466c7a4b5b3812274bc6c6da5cf
		{ &Z_Construct_UFunction_UMRUKDebugComponent_HideAnchorSpace, "HideAnchorSpace" }, // 57669eeab772585e9270b41acb775426d74442b6
		{ &Z_Construct_UFunction_UMRUKDebugComponent_ShowAnchorAtRayHit, "ShowAnchorAtRayHit" }, // ddae5d61b8d1a20e01ae5c0f956679e483fd5a39
		{ &Z_Construct_UFunction_UMRUKDebugComponent_ShowAnchorSpaceAtRayHit, "ShowAnchorSpaceAtRayHit" }, // a29e8434ff16366f5372f62d8e02ff780eb7d352
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKDebugComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKDebugComponent Property Definitions *********************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GizmoActorClass = { "GizmoActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDebugComponent, GizmoActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoActorClass_MetaData), NewProp_GizmoActorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_TextActorClass = { "TextActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDebugComponent, TextActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextActorClass_MetaData), NewProp_TextActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GizmoScale = { "GizmoScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDebugComponent, GizmoScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScale_MetaData), NewProp_GizmoScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDebugComponent, TextScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextScale_MetaData), NewProp_TextScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveGizmoActor = { "ActiveGizmoActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDebugComponent, ActiveGizmoActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGizmoActor_MetaData), NewProp_ActiveGizmoActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveTextActor = { "ActiveTextActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDebugComponent, ActiveTextActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTextActor_MetaData), NewProp_ActiveTextActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveAnchorSpaceActor = { "ActiveAnchorSpaceActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDebugComponent, ActiveAnchorSpaceActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAnchorSpaceActor_MetaData), NewProp_ActiveAnchorSpaceActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GizmoActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GizmoScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveGizmoActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveTextActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveAnchorSpaceActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKDebugComponent Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKDebugComponent,
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
static void UMRUKDebugComponent_StaticRegisterNativesUMRUKDebugComponent()
{
	UClass* Class = UMRUKDebugComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKDebugComponent;
UClass* Z_Construct_UClass_UMRUKDebugComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKDebugComponent;
		if (!Z_Registration_Info_UClass_UMRUKDebugComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKDebugComponent"),
				Z_Registration_Info_UClass_UMRUKDebugComponent.InnerSingleton,
				UMRUKDebugComponent_StaticRegisterNativesUMRUKDebugComponent,
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
		return Z_Registration_Info_UClass_UMRUKDebugComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKDebugComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKDebugComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKDebugComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKDebugComponent);
UMRUKDebugComponent::~UMRUKDebugComponent() {}
// ********** End Class UMRUKDebugComponent ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKDebugComponent, TEXT("UMRUKDebugComponent"), &Z_Registration_Info_UClass_UMRUKDebugComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKDebugComponent), 147877579U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h__Script_MRUtilityKit_8d39a4e783f8066c3a49165e31bda6fdbb162ace{
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
