// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitBlobShadowComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitBlobShadowComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBlobShadowComponent(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBlobShadowComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMRUKBlobShadowComponent Function UpdatePlaneSizeAndPosition *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Only callable in the editor from the scene, will update the blob shadow size, position and material parameters\n\x09 * to give a preview how the blob shadow would look like.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only callable in the editor from the scene, will update the blob shadow size, position and material parameters\nto give a preview how the blob shadow would look like." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePlaneSizeAndPosition constinit property declarations ************
// ********** End Function UpdatePlaneSizeAndPosition constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKBlobShadowComponent, nullptr, "UpdatePlaneSizeAndPosition", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKBlobShadowComponent::execUpdatePlaneSizeAndPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlaneSizeAndPosition();
	P_NATIVE_END;
}
// ********** End Class UMRUKBlobShadowComponent Function UpdatePlaneSizeAndPosition ***************

// ********** Begin Class UMRUKBlobShadowComponent *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKBlobShadowComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Adds a blob shadow below the actor.\n * The blob shadow will position and resize itself automatically during runtime.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Blob Shadow Component" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MRUtilityKitBlobShadowComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a blob shadow below the actor.\nThe blob shadow will position and resize itself automatically during runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roundness_MetaData[] = {
		{ "Category", "MR Utility Kit|Aspect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Controls the look of the blob shadow corners (0 = squared corners, 1 = rounded corners).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the look of the blob shadow corners (0 = squared corners, 1 = rounded corners)." },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gradient_MetaData[] = {
		{ "Category", "MR Utility Kit|Aspect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Controls the look of the blob shadow alpha (0 = fully opaque, 1 = gradient from the center).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the look of the blob shadow alpha (0 = fully opaque, 1 = gradient from the center)." },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GradientPower_MetaData[] = {
		{ "Category", "MR Utility Kit|Aspect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Controls the curve of the blob shadow alpha gradient (only available if Gradient > 0).\n\x09 */" },
#endif
		{ "EditCondition", "Gradient > 0" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the curve of the blob shadow alpha gradient (only available if Gradient > 0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraExtent_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Increase or decrease the calculated blob shadow size by a fixed amount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increase or decrease the calculated blob shadow size by a fixed amount." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum distance the actor can be away from the ground until the blob shadow is not shown anymore.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance the actor can be away from the ground until the blob shadow is not shown anymore." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Distance from the ground until the blob shadow starts to fade.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from the ground until the blob shadow starts to fade." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKBlobShadowComponent constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Roundness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gradient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GradientPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVerticalDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKBlobShadowComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdatePlaneSizeAndPosition"), .Pointer = &UMRUKBlobShadowComponent::execUpdatePlaneSizeAndPosition },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition, "UpdatePlaneSizeAndPosition" }, // 6755297e4346f18ee208be2345ee5e0f8d77fa46
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKBlobShadowComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKBlobShadowComponent Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Roundness = { "Roundness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, Roundness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roundness_MetaData), NewProp_Roundness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Gradient = { "Gradient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, Gradient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gradient_MetaData), NewProp_Gradient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GradientPower = { "GradientPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, GradientPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GradientPower_MetaData), NewProp_GradientPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ExtraExtent = { "ExtraExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, ExtraExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraExtent_MetaData), NewProp_ExtraExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxVerticalDistance = { "MaxVerticalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, MaxVerticalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVerticalDistance_MetaData), NewProp_MaxVerticalDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FadeDistance = { "FadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, FadeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDistance_MetaData), NewProp_FadeDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DynMaterial = { "DynMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, DynMaterial), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynMaterial_MetaData), NewProp_DynMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roundness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Gradient,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GradientPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExtraExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxVerticalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FadeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKBlobShadowComponent Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UStaticMeshComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKBlobShadowComponent,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMRUKBlobShadowComponent_StaticRegisterNativesUMRUKBlobShadowComponent()
{
	UClass* Class = UMRUKBlobShadowComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKBlobShadowComponent;
UClass* Z_Construct_UClass_UMRUKBlobShadowComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKBlobShadowComponent;
		if (!Z_Registration_Info_UClass_UMRUKBlobShadowComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKBlobShadowComponent"),
				Z_Registration_Info_UClass_UMRUKBlobShadowComponent.InnerSingleton,
				UMRUKBlobShadowComponent_StaticRegisterNativesUMRUKBlobShadowComponent,
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
		return Z_Registration_Info_UClass_UMRUKBlobShadowComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKBlobShadowComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKBlobShadowComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKBlobShadowComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKBlobShadowComponent);
UMRUKBlobShadowComponent::~UMRUKBlobShadowComponent() {}
// ********** End Class UMRUKBlobShadowComponent ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBlobShadowComponent_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKBlobShadowComponent, TEXT("UMRUKBlobShadowComponent"), &Z_Registration_Info_UClass_UMRUKBlobShadowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKBlobShadowComponent), 3614990654U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBlobShadowComponent_h__Script_MRUtilityKit_c5bd80ec9a7adba7a4cac0d3a897da10e5b63e1f{
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
