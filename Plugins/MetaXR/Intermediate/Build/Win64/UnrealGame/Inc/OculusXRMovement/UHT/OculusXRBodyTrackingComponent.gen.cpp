// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRBodyTrackingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRBodyTrackingComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingMode(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRBodyTrackingComponent(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRBodyTrackingComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRBodyTrackingMode *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingMode_Statics
template<> OCULUSXRMOVEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRBodyTrackingMode>()
{
	return Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRBodyTrackingComponent.h" },
		{ "NoTracking.Name", "EOculusXRBodyTrackingMode::NoTracking" },
		{ "PositionAndRotation.Name", "EOculusXRBodyTrackingMode::PositionAndRotation" },
		{ "RotationOnly.Name", "EOculusXRBodyTrackingMode::RotationOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRBodyTrackingMode::PositionAndRotation", (int64)EOculusXRBodyTrackingMode::PositionAndRotation },
		{ "EOculusXRBodyTrackingMode::RotationOnly", (int64)EOculusXRBodyTrackingMode::RotationOnly },
		{ "EOculusXRBodyTrackingMode::NoTracking", (int64)EOculusXRBodyTrackingMode::NoTracking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	"EOculusXRBodyTrackingMode",
	"EOculusXRBodyTrackingMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRBodyTrackingMode;
UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRBodyTrackingMode.OuterSingleton)
		{
			ZRIE_EOculusXRBodyTrackingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingMode, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase::Outer), TEXT("EOculusXRBodyTrackingMode"));
		}
		return ZRIE_EOculusXRBodyTrackingMode.OuterSingleton;
	}
	if (!ZRIE_EOculusXRBodyTrackingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRBodyTrackingMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRBodyTrackingMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRBodyTrackingMode ***************************************************

// ********** Begin Class UOculusXRBodyTrackingComponent Function ResetAllBoneTransforms ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRBodyTrackingComponent_ResetAllBoneTransforms_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * Restore all bones to their initial transforms\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRBodyTrackingComponent.h" },
		{ "ToolTip", "Restore all bones to their initial transforms" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetAllBoneTransforms constinit property declarations ****************
// ********** End Function ResetAllBoneTransforms constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRBodyTrackingComponent, nullptr, "ResetAllBoneTransforms", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRBodyTrackingComponent_ResetAllBoneTransforms(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRBodyTrackingComponent::execResetAllBoneTransforms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllBoneTransforms();
	P_NATIVE_END;
}
// ********** End Class UOculusXRBodyTrackingComponent Function ResetAllBoneTransforms *************

// ********** Begin Class UOculusXRBodyTrackingComponent *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRBodyTrackingComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
		{ "DisplayName", "OculusXR Body Tracking Component" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "OculusXRBodyTrackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRBodyTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyTrackingMode_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * How are the results of body tracking applied to the mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRBodyTrackingComponent.h" },
		{ "ToolTip", "How are the results of body tracking applied to the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * The bone name associated with each bone ID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRBodyTrackingComponent.h" },
		{ "ToolTip", "The bone name associated with each bone ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceThreshold_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Do not apply body state to bones if confidence is lower than this value. Confidence is in range [0,1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRBodyTrackingComponent.h" },
		{ "ToolTip", "Do not apply body state to bones if confidence is lower than this value. Confidence is in range [0,1]." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRBodyTrackingComponent constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_BodyTrackingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyTrackingMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneNames_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneNames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfidenceThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRBodyTrackingComponent constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ResetAllBoneTransforms"), .Pointer = &UOculusXRBodyTrackingComponent::execResetAllBoneTransforms },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRBodyTrackingComponent_ResetAllBoneTransforms, "ResetAllBoneTransforms" }, // a8d9224519a06f46865e833f162b4f27bd9fc17f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRBodyTrackingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRBodyTrackingComponent Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BodyTrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BodyTrackingMode = { "BodyTrackingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRBodyTrackingComponent, BodyTrackingMode), Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyTrackingMode_MetaData), NewProp_BodyTrackingMode_MetaData) }; // 184bc62874e33b7a37f3d5c80b6081bd6e2b5d17
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneNames_ValueProp = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoneNames_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoneNames_Key_KeyProp = { "BoneNames_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, METADATA_PARAMS(0, nullptr) }; // 576a3bff3a4ec47021e6905217f95ba0b04d5736
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRBodyTrackingComponent, BoneNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNames_MetaData), NewProp_BoneNames_MetaData) }; // 576a3bff3a4ec47021e6905217f95ba0b04d5736
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ConfidenceThreshold = { "ConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRBodyTrackingComponent, ConfidenceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfidenceThreshold_MetaData), NewProp_ConfidenceThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BodyTrackingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BodyTrackingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneNames_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConfidenceThreshold,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRBodyTrackingComponent Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPoseableMeshComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRBodyTrackingComponent,
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
static void UOculusXRBodyTrackingComponent_StaticRegisterNativesUOculusXRBodyTrackingComponent()
{
	UClass* Class = UOculusXRBodyTrackingComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRBodyTrackingComponent;
UClass* Z_Construct_UClass_UOculusXRBodyTrackingComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRBodyTrackingComponent;
		if (!Z_Registration_Info_UClass_UOculusXRBodyTrackingComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRBodyTrackingComponent"),
				Z_Registration_Info_UClass_UOculusXRBodyTrackingComponent.InnerSingleton,
				UOculusXRBodyTrackingComponent_StaticRegisterNativesUOculusXRBodyTrackingComponent,
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
		return Z_Registration_Info_UClass_UOculusXRBodyTrackingComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRBodyTrackingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRBodyTrackingComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRBodyTrackingComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRBodyTrackingComponent);
UOculusXRBodyTrackingComponent::~UOculusXRBodyTrackingComponent() {}
// ********** End Class UOculusXRBodyTrackingComponent *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h__Script_OculusXRMovement_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingMode, TEXT("EOculusXRBodyTrackingMode"), &ZRIE_EOculusXRBodyTrackingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 407619112U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRBodyTrackingComponent, TEXT("UOculusXRBodyTrackingComponent"), &Z_Registration_Info_UClass_UOculusXRBodyTrackingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRBodyTrackingComponent), 3687000546U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h__Script_OculusXRMovement_20523d8b85e3bf08b1cf7eb8809ef2589641f2bd{
	TEXT("/Script/OculusXRMovement"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
