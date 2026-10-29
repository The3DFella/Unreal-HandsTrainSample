// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXREyeTrackingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXREyeTrackingComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXREye(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXREyeTrackingComponent(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXREyeTrackingComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXREyeTrackingComponent Function ClearRotationValues ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reset the rotation values of the eyes to their initial rotation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset the rotation values of the eyes to their initial rotation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearRotationValues constinit property declarations *******************
// ********** End Function ClearRotationValues constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXREyeTrackingComponent, nullptr, "ClearRotationValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXREyeTrackingComponent::execClearRotationValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearRotationValues();
	P_NATIVE_END;
}
// ********** End Class UOculusXREyeTrackingComponent Function ClearRotationValues *****************

// ********** Begin Class UOculusXREyeTrackingComponent ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
		{ "DisplayName", "OculusXR Eye Tracking Component" },
		{ "IncludePath", "OculusXREyeTrackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponentName_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The name of the poseable mesh component that this component targets for eyes glazes movement.\n\x09 * This must be the name of a component on this actor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the poseable mesh component that this component targets for eyes glazes movement.\nThis must be the name of a component on this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeToBone_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The map of eye to mesh bone that this component supports.\n\x09 * Names are validated on (@see BeginPlay) so only valid bone names will be targeted.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The map of eye to mesh bone that this component supports.\nNames are validated on (@see BeginPlay) so only valid bone names will be targeted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePosition_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Update the target mesh position when eye state changes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the target mesh position when eye state changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateRotation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Update the target mesh rotation when eye state changes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the target mesh rotation when eye state changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceThreshold_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Do not accept an eye gaze state if confidence is lower than this value. Confidence is in range [0,1].\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Do not accept an eye gaze state if confidence is lower than this value. Confidence is in range [0,1]." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAcceptInvalid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Bypass eye gaze state validity.\n\x09 *\n\x09 * @Note: It doesn't check the confidence (@see ConfidenceThreshold). The eye gaze state can be marked as invalid. This flag bypass that state flag.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bypass eye gaze state validity.\n\n@Note: It doesn't check the confidence (@see ConfidenceThreshold). The eye gaze state can be marked as invalid. This flag bypass that state flag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoseableMeshComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The mesh component targeted for eyes\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh component targeted for eyes" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXREyeTrackingComponent constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshComponentName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EyeToBone_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EyeToBone_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EyeToBone_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EyeToBone;
	static void NewProp_bUpdatePosition_SetBit(void* Obj)
	{
		((UOculusXREyeTrackingComponent*)Obj)->bUpdatePosition = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePosition;
	static void NewProp_bUpdateRotation_SetBit(void* Obj)
	{
		((UOculusXREyeTrackingComponent*)Obj)->bUpdateRotation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfidenceThreshold;
	static void NewProp_bAcceptInvalid_SetBit(void* Obj)
	{
		((UOculusXREyeTrackingComponent*)Obj)->bAcceptInvalid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAcceptInvalid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPoseableMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXREyeTrackingComponent constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearRotationValues"), .Pointer = &UOculusXREyeTrackingComponent::execClearRotationValues },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues, "ClearRotationValues" }, // a8c0eed51c3b512e9b66b3485beae2de7c658309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXREyeTrackingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXREyeTrackingComponent Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetMeshComponentName = { "TargetMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREyeTrackingComponent, TargetMeshComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshComponentName_MetaData), NewProp_TargetMeshComponentName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_EyeToBone_ValueProp = { "EyeToBone", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EyeToBone_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EyeToBone_Key_KeyProp = { "EyeToBone_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXREye, METADATA_PARAMS(0, nullptr) }; // 28d5dcc965047ee68e2e9a94ac4d2894f34e0871
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_EyeToBone = { "EyeToBone", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREyeTrackingComponent, EyeToBone), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeToBone_MetaData), NewProp_EyeToBone_MetaData) }; // 28d5dcc965047ee68e2e9a94ac4d2894f34e0871
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUpdatePosition = { "bUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXREyeTrackingComponent), &UHT_STATICS::NewProp_bUpdatePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatePosition_MetaData), NewProp_bUpdatePosition_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUpdateRotation = { "bUpdateRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXREyeTrackingComponent), &UHT_STATICS::NewProp_bUpdateRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateRotation_MetaData), NewProp_bUpdateRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ConfidenceThreshold = { "ConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREyeTrackingComponent, ConfidenceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfidenceThreshold_MetaData), NewProp_ConfidenceThreshold_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAcceptInvalid = { "bAcceptInvalid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXREyeTrackingComponent), &UHT_STATICS::NewProp_bAcceptInvalid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAcceptInvalid_MetaData), NewProp_bAcceptInvalid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetPoseableMeshComponent = { "TargetPoseableMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREyeTrackingComponent, TargetPoseableMeshComponent), Z_Construct_UClass_UPoseableMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPoseableMeshComponent_MetaData), NewProp_TargetPoseableMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeToBone_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeToBone_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeToBone_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeToBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUpdatePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUpdateRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConfidenceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAcceptInvalid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPoseableMeshComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXREyeTrackingComponent Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXREyeTrackingComponent,
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
static void UOculusXREyeTrackingComponent_StaticRegisterNativesUOculusXREyeTrackingComponent()
{
	UClass* Class = UOculusXREyeTrackingComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXREyeTrackingComponent;
UClass* Z_Construct_UClass_UOculusXREyeTrackingComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXREyeTrackingComponent;
		if (!Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXREyeTrackingComponent"),
				Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.InnerSingleton,
				UOculusXREyeTrackingComponent_StaticRegisterNativesUOculusXREyeTrackingComponent,
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
		return Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXREyeTrackingComponent);
UOculusXREyeTrackingComponent::~UOculusXREyeTrackingComponent() {}
// ********** End Class UOculusXREyeTrackingComponent **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXREyeTrackingComponent_h__Script_OculusXRMovement_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXREyeTrackingComponent, TEXT("UOculusXREyeTrackingComponent"), &Z_Registration_Info_UClass_UOculusXREyeTrackingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXREyeTrackingComponent), 2019790005U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXREyeTrackingComponent_h__Script_OculusXRMovement_04a9b3b44a27221e9bb820aef89f0b61d7c2927a{
	TEXT("/Script/OculusXRMovement"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
