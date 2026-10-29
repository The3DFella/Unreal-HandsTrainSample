// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitTrackable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitTrackable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType(ETypeConstructPhase);
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKTrackable(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKTrackable(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AMRUKTrackable ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUKTrackable_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a trackable object in the Mixed Reality Utility Kit.\n * A trackable is a type of object that can be detected and tracked by the runtime,\n * such as keyboards and QR codes. Unlike scene anchors, trackables can move dynamically\n * and may become temporarily untracked if they cannot be seen by the device.\n *\n * Trackables are instantiated and managed by UMRUKSubsystem. When a new trackable is detected,\n * the subsystem creates an AMRUKTrackable actor and invokes the OnTrackableAdded event.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Trackable" },
		{ "IncludePath", "MRUtilityKitTrackable.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a trackable object in the Mixed Reality Utility Kit.\nA trackable is a type of object that can be detected and tracked by the runtime,\nsuch as keyboards and QR codes. Unlike scene anchors, trackables can move dynamically\nand may become temporarily untracked if they cannot be seen by the device.\n\nTrackables are instantiated and managed by UMRUKSubsystem. When a new trackable is detected,\nthe subsystem creates an AMRUKTrackable actor and invokes the OnTrackableAdded event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackableType_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The type of this trackable (e.g., Keyboard, QRCode)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of this trackable (e.g., Keyboard, QRCode)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTracked_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether this trackable is currently being tracked.\n\x09 * A trackable may become temporarily untracked if it cannot be seen by the device.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this trackable is currently being tracked.\nA trackable may become temporarily untracked if it cannot be seen by the device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the trackable has a plane attached to it, this represents the bounds of that plane in\n\x09 * local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the trackable has a plane attached to it, this represents the bounds of that plane in\nlocal coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBoundary2D_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the trackable has a plane attached to it, this represents the boundary of it in\n\x09 * local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the trackable has a plane attached to it, this represents the boundary of it in\nlocal coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the trackable has a volume attached to it, this represents the bounds of that volume in\n\x09 * local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the trackable has a volume attached to it, this represents the bounds of that volume in\nlocal coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadType_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The type of payload the trackable carries.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of payload the trackable carries." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerPayloadString_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The marker's payload as a string.\n\x09 * If this trackable is a marker (e.g., a QR Code) and its payload can be interpreted as a string,\n\x09 * this property contains the decoded string. Otherwise, it is empty.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker's payload as a string.\nIf this trackable is a marker (e.g., a QR Code) and its payload can be interpreted as a string,\nthis property contains the decoded string. Otherwise, it is empty." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerPayloadBytes_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The marker's payload as raw bytes.\n\x09 * If this trackable is a marker (e.g., a QR Code), this property contains the raw payload bytes.\n\x09 * Otherwise, the array is empty.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker's payload as raw bytes.\nIf this trackable is a marker (e.g., a QR Code), this property contains the raw payload bytes.\nOtherwise, the array is empty." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKTrackable constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackableType;
	static void NewProp_IsTracked_SetBit(void* Obj)
	{
		((AMRUKTrackable*)Obj)->IsTracked = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTracked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneBoundary2D_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneBoundary2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeBounds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PayloadType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PayloadType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerPayloadString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MarkerPayloadBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerPayloadBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKTrackable constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKTrackable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUKTrackable Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TrackableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TrackableType = { "TrackableType", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, TrackableType), Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackableType_MetaData), NewProp_TrackableType_MetaData) }; // ce46a772726f2cc231c45af456e904a4d579992f
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_IsTracked = { "IsTracked", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKTrackable), &UHT_STATICS::NewProp_IsTracked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTracked_MetaData), NewProp_IsTracked_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlaneBounds = { "PlaneBounds", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, PlaneBounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBounds_MetaData), NewProp_PlaneBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlaneBoundary2D_Inner = { "PlaneBoundary2D", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PlaneBoundary2D = { "PlaneBoundary2D", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, PlaneBoundary2D), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBoundary2D_MetaData), NewProp_PlaneBoundary2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_VolumeBounds = { "VolumeBounds", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, VolumeBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeBounds_MetaData), NewProp_VolumeBounds_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PayloadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PayloadType = { "PayloadType", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, PayloadType), Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadType_MetaData), NewProp_PayloadType_MetaData) }; // bf2f1983f6687b2bb4fac2813df77f88bd6ae3a8
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MarkerPayloadString = { "MarkerPayloadString", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, MarkerPayloadString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerPayloadString_MetaData), NewProp_MarkerPayloadString_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MarkerPayloadBytes_Inner = { "MarkerPayloadBytes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MarkerPayloadBytes = { "MarkerPayloadBytes", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, MarkerPayloadBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerPayloadBytes_MetaData), NewProp_MarkerPayloadBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrackableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrackableType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IsTracked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneBoundary2D_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneBoundary2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VolumeBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PayloadType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PayloadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkerPayloadString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkerPayloadBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkerPayloadBytes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUKTrackable Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUKTrackable,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKTrackable;
UClass* Z_Construct_UClass_AMRUKTrackable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUKTrackable;
		if (!Z_Registration_Info_UClass_AMRUKTrackable.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKTrackable"),
				Z_Registration_Info_UClass_AMRUKTrackable.InnerSingleton,
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
		return Z_Registration_Info_UClass_AMRUKTrackable.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUKTrackable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKTrackable.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKTrackable.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKTrackable);
AMRUKTrackable::~AMRUKTrackable() {}
// ********** End Class AMRUKTrackable *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitTrackable_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKTrackable, TEXT("AMRUKTrackable"), &Z_Registration_Info_UClass_AMRUKTrackable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKTrackable), 33897911U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitTrackable_h__Script_MRUtilityKit_d7d74ac1be3e49e1dd33eed0640bcd3f3ffc7afb{
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
