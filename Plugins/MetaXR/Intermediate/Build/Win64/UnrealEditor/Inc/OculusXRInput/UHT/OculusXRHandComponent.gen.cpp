// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRHandComponent.h"
#include "OculusXRInputFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRHandComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRBone(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRConfidenceBehavior(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRHandType(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRSystemGestureBehavior(ETypeConstructPhase);
OCULUSXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRCapsuleCollider(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRHandComponent(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRHandComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRConfidenceBehavior ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRConfidenceBehavior_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRConfidenceBehavior>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRConfidenceBehavior(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "HideActor.Name", "EOculusXRConfidenceBehavior::HideActor" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "None.Name", "EOculusXRConfidenceBehavior::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRConfidenceBehavior::None", (int64)EOculusXRConfidenceBehavior::None },
		{ "EOculusXRConfidenceBehavior::HideActor", (int64)EOculusXRConfidenceBehavior::HideActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRConfidenceBehavior",
	"EOculusXRConfidenceBehavior",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRConfidenceBehavior;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRConfidenceBehavior(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRConfidenceBehavior.OuterSingleton)
		{
			ZRIE_EOculusXRConfidenceBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRConfidenceBehavior, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRConfidenceBehavior"));
		}
		return ZRIE_EOculusXRConfidenceBehavior.OuterSingleton;
	}
	if (!ZRIE_EOculusXRConfidenceBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRConfidenceBehavior.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRConfidenceBehavior.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRConfidenceBehavior *************************************************

// ********** Begin Enum EOculusXRSystemGestureBehavior ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRInput_EOculusXRSystemGestureBehavior_Statics
template<> OCULUSXRINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRSystemGestureBehavior>()
{
	return Z_Construct_UEnum_OculusXRInput_EOculusXRSystemGestureBehavior(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "None.Name", "EOculusXRSystemGestureBehavior::None" },
		{ "SwapMaterial.Name", "EOculusXRSystemGestureBehavior::SwapMaterial" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSystemGestureBehavior::None", (int64)EOculusXRSystemGestureBehavior::None },
		{ "EOculusXRSystemGestureBehavior::SwapMaterial", (int64)EOculusXRSystemGestureBehavior::SwapMaterial },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
	nullptr,
	"EOculusXRSystemGestureBehavior",
	"EOculusXRSystemGestureBehavior",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRSystemGestureBehavior;
UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRSystemGestureBehavior(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRSystemGestureBehavior.OuterSingleton)
		{
			ZRIE_EOculusXRSystemGestureBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRInput_EOculusXRSystemGestureBehavior, (UObject*)Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase::Outer), TEXT("EOculusXRSystemGestureBehavior"));
		}
		return ZRIE_EOculusXRSystemGestureBehavior.OuterSingleton;
	}
	if (!ZRIE_EOculusXRSystemGestureBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRSystemGestureBehavior.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRSystemGestureBehavior.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRSystemGestureBehavior **********************************************

// ********** Begin Class UOculusXRHandComponent ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRHandComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "OculusXRHandComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** The hand skeleton that will be loaded */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "The hand skeleton that will be loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** The hand mesh that will be applied to the skeleton */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "The hand mesh that will be applied to the skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceBehavior_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Behavior for when hand tracking loses high confidence tracking */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "Behavior for when hand tracking loses high confidence tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemGestureBehavior_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Behavior for when the system gesture is actived */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "Behavior for when the system gesture is actived" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemGestureMaterial_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Material that gets applied to the hands when the system gesture is active */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "Material that gets applied to the hands when the system gesture is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitializePhysics_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Whether or not to initialize physics capsules on the skeletal mesh */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "Whether or not to initialize physics capsules on the skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateHandScale_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Whether or not the hand scale should update based on values from the runtime to match the users hand scale */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "Whether or not the hand scale should update based on values from the runtime to match the users hand scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Material override for the runtime skeletal mesh */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "Material override for the runtime skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameMappings_MetaData[] = {
		{ "Category", "CustomSkeletalMesh" },
		{ "Comment", "/** Bone mapping for custom hand skeletal meshes */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "Bone mapping for custom hand skeletal meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsules_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** List of capsule colliders created for the skeletal mesh */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "List of capsule colliders created for the skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkeletalMeshInitialized_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Whether or not the runtime skeletal mesh has been loaded and initialized */" },
		{ "ModuleRelativePath", "Public/OculusXRHandComponent.h" },
		{ "ToolTip", "Whether or not the runtime skeletal mesh has been loaded and initialized" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRHandComponent constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConfidenceBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConfidenceBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SystemGestureBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemGestureBehavior;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemGestureMaterial;
	static void NewProp_bInitializePhysics_SetBit(void* Obj)
	{
		((UOculusXRHandComponent*)Obj)->bInitializePhysics = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializePhysics;
	static void NewProp_bUpdateHandScale_SetBit(void* Obj)
	{
		((UOculusXRHandComponent*)Obj)->bUpdateHandScale = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateHandScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameMappings_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneNameMappings_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneNameMappings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneNameMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionCapsules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionCapsules;
	static void NewProp_bSkeletalMeshInitialized_SetBit(void* Obj)
	{
		((UOculusXRHandComponent*)Obj)->bSkeletalMeshInitialized = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkeletalMeshInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRHandComponent constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRHandComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRHandComponent Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHandComponent, SkeletonType), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonType_MetaData), NewProp_SkeletonType_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHandComponent, MeshType), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // ea136aea7f3265c369d6a2fb2ccb0c1d0d7eaf36
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ConfidenceBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ConfidenceBehavior = { "ConfidenceBehavior", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHandComponent, ConfidenceBehavior), Z_Construct_UEnum_OculusXRInput_EOculusXRConfidenceBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfidenceBehavior_MetaData), NewProp_ConfidenceBehavior_MetaData) }; // 83046ab5075bbd5396d0545e81dd311bffc1b949
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SystemGestureBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SystemGestureBehavior = { "SystemGestureBehavior", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHandComponent, SystemGestureBehavior), Z_Construct_UEnum_OculusXRInput_EOculusXRSystemGestureBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemGestureBehavior_MetaData), NewProp_SystemGestureBehavior_MetaData) }; // 13c611e33513518cb12150748d5155c747f02dcf
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SystemGestureMaterial = { "SystemGestureMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHandComponent, SystemGestureMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemGestureMaterial_MetaData), NewProp_SystemGestureMaterial_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInitializePhysics = { "bInitializePhysics", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHandComponent), &UHT_STATICS::NewProp_bInitializePhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitializePhysics_MetaData), NewProp_bInitializePhysics_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUpdateHandScale = { "bUpdateHandScale", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHandComponent), &UHT_STATICS::NewProp_bUpdateHandScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateHandScale_MetaData), NewProp_bUpdateHandScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHandComponent, MaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneNameMappings_ValueProp = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoneNameMappings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoneNameMappings_Key_KeyProp = { "BoneNameMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRInput_EOculusXRBone, METADATA_PARAMS(0, nullptr) }; // eb9a4b384999279b49d742093925776b442f190d
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_BoneNameMappings = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHandComponent, BoneNameMappings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNameMappings_MetaData), NewProp_BoneNameMappings_MetaData) }; // eb9a4b384999279b49d742093925776b442f190d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CollisionCapsules_Inner = { "CollisionCapsules", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRCapsuleCollider, METADATA_PARAMS(0, nullptr) }; // 660e29e9cfc1e834816dbccfc7ccfb5a55a92d32
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CollisionCapsules = { "CollisionCapsules", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHandComponent, CollisionCapsules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionCapsules_MetaData), NewProp_CollisionCapsules_MetaData) }; // 660e29e9cfc1e834816dbccfc7ccfb5a55a92d32
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSkeletalMeshInitialized = { "bSkeletalMeshInitialized", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHandComponent), &UHT_STATICS::NewProp_bSkeletalMeshInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkeletalMeshInitialized_MetaData), NewProp_bSkeletalMeshInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConfidenceBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConfidenceBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SystemGestureBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SystemGestureBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SystemGestureMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInitializePhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUpdateHandScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneNameMappings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneNameMappings_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneNameMappings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneNameMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionCapsules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionCapsules,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSkeletalMeshInitialized,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRHandComponent Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPoseableMeshComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRHandComponent,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRHandComponent;
UClass* Z_Construct_UClass_UOculusXRHandComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRHandComponent;
		if (!Z_Registration_Info_UClass_UOculusXRHandComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRHandComponent"),
				Z_Registration_Info_UClass_UOculusXRHandComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRHandComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRHandComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRHandComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRHandComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRHandComponent);
UOculusXRHandComponent::~UOculusXRHandComponent() {}
// ********** End Class UOculusXRHandComponent *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRHandComponent_h__Script_OculusXRInput_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRConfidenceBehavior, TEXT("EOculusXRConfidenceBehavior"), &ZRIE_EOculusXRConfidenceBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2198104757U) },
		{ Z_Construct_UEnum_OculusXRInput_EOculusXRSystemGestureBehavior, TEXT("EOculusXRSystemGestureBehavior"), &ZRIE_EOculusXRSystemGestureBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 331747811U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRHandComponent, TEXT("UOculusXRHandComponent"), &Z_Registration_Info_UClass_UOculusXRHandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRHandComponent), 2900251781U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRHandComponent_h__Script_OculusXRInput_8cdc31fbb04fe96fa5b7f31b6e6a0e3581889e9e{
	TEXT("/Script/OculusXRInput"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
