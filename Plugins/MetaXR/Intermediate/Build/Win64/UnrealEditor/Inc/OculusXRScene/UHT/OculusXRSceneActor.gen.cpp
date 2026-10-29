// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSceneActor.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase);
OCULUSXRSCENE_API UEnum* Z_Construct_UEnum_OculusXRScene_EOculusXRLaunchCaptureFlowWhenMissingScene(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_AOculusXRSceneActor(ETypeConstructPhase);
OCULUSXRSCENE_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_AOculusXRSceneActor(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneAnchorComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRLaunchCaptureFlowWhenMissingScene ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRScene_EOculusXRLaunchCaptureFlowWhenMissingScene_Statics
template<> OCULUSXRSCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRLaunchCaptureFlowWhenMissingScene>()
{
	return Z_Construct_UEnum_OculusXRScene_EOculusXRLaunchCaptureFlowWhenMissingScene(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ALWAYS.DisplayName", "Always" },
		{ "ALWAYS.Name", "ALWAYS" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** EOculusXRLaunchCaptureFlowWhenMissingScene\n * Used to dictate whether the actor should launch the Capture Flow application when a scene is not detected on the device.\n * The Actor will check if a scene capture is either non-existent or invalid (ie. missing walls/ceiling/floor) before checking if Capture Flow\n * should be launched.\n *\n * NEVER:\x09will never launch Flow Capture.\n * ONCE:\x09\x09will only launch it once.  If the actor still doesn't detect that a scene was captured, it will not launch Capture Flow again.\n * ALWAYS:\x09will always re-launch Flow Capture if a scene was not detected on the device.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
		{ "NEVER.DisplayName", "Never" },
		{ "NEVER.Name", "NEVER" },
		{ "ONCE.DisplayName", "Once" },
		{ "ONCE.Name", "ONCE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EOculusXRLaunchCaptureFlowWhenMissingScene\nUsed to dictate whether the actor should launch the Capture Flow application when a scene is not detected on the device.\nThe Actor will check if a scene capture is either non-existent or invalid (ie. missing walls/ceiling/floor) before checking if Capture Flow\nshould be launched.\n\nNEVER:      will never launch Flow Capture.\nONCE:               will only launch it once.  If the actor still doesn't detect that a scene was captured, it will not launch Capture Flow again.\nALWAYS:     will always re-launch Flow Capture if a scene was not detected on the device." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NEVER", (int64)NEVER },
		{ "ONCE", (int64)ONCE },
		{ "ALWAYS", (int64)ALWAYS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
	nullptr,
	"EOculusXRLaunchCaptureFlowWhenMissingScene",
	"EOculusXRLaunchCaptureFlowWhenMissingScene",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRLaunchCaptureFlowWhenMissingScene;
UEnum* Z_Construct_UEnum_OculusXRScene_EOculusXRLaunchCaptureFlowWhenMissingScene(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRLaunchCaptureFlowWhenMissingScene.OuterSingleton)
		{
			ZRIE_EOculusXRLaunchCaptureFlowWhenMissingScene.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRScene_EOculusXRLaunchCaptureFlowWhenMissingScene, (UObject*)Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase::Outer), TEXT("EOculusXRLaunchCaptureFlowWhenMissingScene"));
		}
		return ZRIE_EOculusXRLaunchCaptureFlowWhenMissingScene.OuterSingleton;
	}
	if (!ZRIE_EOculusXRLaunchCaptureFlowWhenMissingScene.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRLaunchCaptureFlowWhenMissingScene.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRLaunchCaptureFlowWhenMissingScene.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRLaunchCaptureFlowWhenMissingScene **********************************

// ********** Begin ScriptStruct FOculusXRSpawnedSceneAnchorProperties *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRSpawnedSceneAnchorProperties>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRSpawnedSceneAnchorProperties); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FOculusXRSpawnedSceneAnchorProperties\n * Properties/Components that a spawned scene anchor will use.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOculusXRSpawnedSceneAnchorProperties\nProperties/Components that a spawned scene anchor will use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "Category", "Spawned Scene Anchor Properties" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Spawned Scene Anchor Properties" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceParallelToFloor_MetaData[] = {
		{ "Category", "Spawned Scene Anchor Properties" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Alignment is done automatically at lower level." },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddOffset_MetaData[] = {
		{ "Category", "Spawned Scene Anchor Properties" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRSpawnedSceneAnchorProperties constinit property declarations 
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorComponent;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_ForceParallelToFloor_SetBit(void* Obj)
	{
		((FOculusXRSpawnedSceneAnchorProperties*)Obj)->ForceParallelToFloor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceParallelToFloor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRSpawnedSceneAnchorProperties constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpawnedSceneAnchorProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRSpawnedSceneAnchorProperties Property Definitions ********
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpawnedSceneAnchorProperties, ActorComponent), Z_Construct_UClass_UOculusXRSceneAnchorComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpawnedSceneAnchorProperties, StaticMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ForceParallelToFloor = { "ForceParallelToFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRSpawnedSceneAnchorProperties), &UHT_STATICS::NewProp_ForceParallelToFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceParallelToFloor_MetaData), NewProp_ForceParallelToFloor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AddOffset = { "AddOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpawnedSceneAnchorProperties, AddOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddOffset_MetaData), NewProp_AddOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ForceParallelToFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AddOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRSpawnedSceneAnchorProperties Property Definitions **********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
	nullptr,
	&NewStructOps,
	"OculusXRSpawnedSceneAnchorProperties",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRSpawnedSceneAnchorProperties>(),
	alignof(FOculusXRSpawnedSceneAnchorProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties, (UObject*)Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase::Outer), TEXT("OculusXRSpawnedSceneAnchorProperties"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRSpawnedSceneAnchorProperties *******************************

// ********** Begin Class AOculusXRSceneActor Function ClearScene **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_ClearScene_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearScene constinit property declarations ****************************
// ********** End Function ClearScene constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "ClearScene", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_ClearScene(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execClearScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearScene();
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function ClearScene ************************************

// ********** Begin Class AOculusXRSceneActor Function GetActorsBySemanticLabel ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_GetActorsBySemanticLabel_Statics
struct UHT_STATICS
{
	struct OculusXRSceneActor_eventGetActorsBySemanticLabel_Parms
	{
		FString SemanticLabel;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActorsBySemanticLabel constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SemanticLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActorsBySemanticLabel constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActorsBySemanticLabel Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SemanticLabel = { "SemanticLabel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneActor_eventGetActorsBySemanticLabel_Parms, SemanticLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticLabel_MetaData), NewProp_SemanticLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneActor_eventGetActorsBySemanticLabel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SemanticLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActorsBySemanticLabel Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "GetActorsBySemanticLabel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneActor_eventGetActorsBySemanticLabel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneActor_eventGetActorsBySemanticLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_GetActorsBySemanticLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execGetActorsBySemanticLabel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SemanticLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsBySemanticLabel(Z_Param_SemanticLabel);
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function GetActorsBySemanticLabel **********************

// ********** Begin Class AOculusXRSceneActor Function GetRoomLayouts ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_GetRoomLayouts_Statics
struct UHT_STATICS
{
	struct OculusXRSceneActor_eventGetRoomLayouts_Parms
	{
		TArray<FOculusXRRoomLayout> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomLayouts constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomLayouts constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomLayouts Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRRoomLayout, METADATA_PARAMS(0, nullptr) }; // 14f9f9ea3873ab538f6a0cceac92dfa0949fc1d4
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneActor_eventGetRoomLayouts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 14f9f9ea3873ab538f6a0cceac92dfa0949fc1d4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoomLayouts Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "GetRoomLayouts", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneActor_eventGetRoomLayouts_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneActor_eventGetRoomLayouts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_GetRoomLayouts(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execGetRoomLayouts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FOculusXRRoomLayout>*)Z_Param__Result=P_THIS->GetRoomLayouts();
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function GetRoomLayouts ********************************

// ********** Begin Class AOculusXRSceneActor Function IsRoomLayoutValid ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_IsRoomLayoutValid_Statics
struct UHT_STATICS
{
	struct OculusXRSceneActor_eventIsRoomLayoutValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Is Room Layout Valid is deprecated and no longer returns any value but true. Please validate your room configuration in the way your application requires." },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsRoomLayoutValid constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSceneActor_eventIsRoomLayoutValid_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRoomLayoutValid constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRoomLayoutValid Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSceneActor_eventIsRoomLayoutValid_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsRoomLayoutValid Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "IsRoomLayoutValid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneActor_eventIsRoomLayoutValid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneActor_eventIsRoomLayoutValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_IsRoomLayoutValid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execIsRoomLayoutValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRoomLayoutValid();
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function IsRoomLayoutValid *****************************

// ********** Begin Class AOculusXRSceneActor Function IsScenePopulated ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_IsScenePopulated_Statics
struct UHT_STATICS
{
	struct OculusXRSceneActor_eventIsScenePopulated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsScenePopulated constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSceneActor_eventIsScenePopulated_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsScenePopulated constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsScenePopulated Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSceneActor_eventIsScenePopulated_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsScenePopulated Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "IsScenePopulated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneActor_eventIsScenePopulated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneActor_eventIsScenePopulated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_IsScenePopulated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execIsScenePopulated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsScenePopulated();
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function IsScenePopulated ******************************

// ********** Begin Class AOculusXRSceneActor Function LaunchCaptureFlow ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_LaunchCaptureFlow_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LaunchCaptureFlow constinit property declarations *********************
// ********** End Function LaunchCaptureFlow constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "LaunchCaptureFlow", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_LaunchCaptureFlow(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execLaunchCaptureFlow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchCaptureFlow();
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function LaunchCaptureFlow *****************************

// ********** Begin Class AOculusXRSceneActor Function PopulateScene *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_PopulateScene_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PopulateScene constinit property declarations *************************
// ********** End Function PopulateScene constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "PopulateScene", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_PopulateScene(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execPopulateScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopulateScene();
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function PopulateScene *********************************

// ********** Begin Class AOculusXRSceneActor Function SetVisibilityToAllSceneAnchors **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_SetVisibilityToAllSceneAnchors_Statics
struct UHT_STATICS
{
	struct OculusXRSceneActor_eventSetVisibilityToAllSceneAnchors_Parms
	{
		bool bIsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVisibilityToAllSceneAnchors constinit property declarations ********
	static void NewProp_bIsVisible_SetBit(void* Obj)
	{
		((OculusXRSceneActor_eventSetVisibilityToAllSceneAnchors_Parms*)Obj)->bIsVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVisibilityToAllSceneAnchors constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVisibilityToAllSceneAnchors Property Definitions *******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSceneActor_eventSetVisibilityToAllSceneAnchors_Parms), &UHT_STATICS::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetVisibilityToAllSceneAnchors Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "SetVisibilityToAllSceneAnchors", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneActor_eventSetVisibilityToAllSceneAnchors_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneActor_eventSetVisibilityToAllSceneAnchors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_SetVisibilityToAllSceneAnchors(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execSetVisibilityToAllSceneAnchors)
{
	P_GET_UBOOL(Z_Param_bIsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisibilityToAllSceneAnchors(Z_Param_bIsVisible);
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function SetVisibilityToAllSceneAnchors ****************

// ********** Begin Class AOculusXRSceneActor Function SetVisibilityToSceneAnchorsBySemanticLabel **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOculusXRSceneActor_SetVisibilityToSceneAnchorsBySemanticLabel_Statics
struct UHT_STATICS
{
	struct OculusXRSceneActor_eventSetVisibilityToSceneAnchorsBySemanticLabel_Parms
	{
		FString SemanticLabel;
		bool bIsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVisibilityToSceneAnchorsBySemanticLabel constinit property declarations 
	static const UECodeGen_Private::FStrPropertyParams NewProp_SemanticLabel;
	static void NewProp_bIsVisible_SetBit(void* Obj)
	{
		((OculusXRSceneActor_eventSetVisibilityToSceneAnchorsBySemanticLabel_Parms*)Obj)->bIsVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVisibilityToSceneAnchorsBySemanticLabel constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVisibilityToSceneAnchorsBySemanticLabel Property Definitions *******
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SemanticLabel = { "SemanticLabel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSceneActor_eventSetVisibilityToSceneAnchorsBySemanticLabel_Parms, SemanticLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticLabel_MetaData), NewProp_SemanticLabel_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSceneActor_eventSetVisibilityToSceneAnchorsBySemanticLabel_Parms), &UHT_STATICS::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SemanticLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetVisibilityToSceneAnchorsBySemanticLabel Property Definitions *********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOculusXRSceneActor, nullptr, "SetVisibilityToSceneAnchorsBySemanticLabel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSceneActor_eventSetVisibilityToSceneAnchorsBySemanticLabel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSceneActor_eventSetVisibilityToSceneAnchorsBySemanticLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOculusXRSceneActor_SetVisibilityToSceneAnchorsBySemanticLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOculusXRSceneActor::execSetVisibilityToSceneAnchorsBySemanticLabel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SemanticLabel);
	P_GET_UBOOL(Z_Param_bIsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisibilityToSceneAnchorsBySemanticLabel(Z_Param_SemanticLabel,Z_Param_bIsVisible);
	P_NATIVE_END;
}
// ********** End Class AOculusXRSceneActor Function SetVisibilityToSceneAnchorsBySemanticLabel ****

// ********** Begin Class AOculusXRSceneActor ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AOculusXRSceneActor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "OculusXRScene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AOculusXRSceneActor\n *\n * DEPRECATED: AOculusXRSceneActor and associated classes are deprecated (v65), please use MR Utility Kit instead\n * (https://developer.oculus.com/documentation/unreal/unreal-mr-utility-kit-overview)\n *\n * The purpose of this actor is to be able to spawn \"scene anchor\" actors.\n *\n * Each actor type (based on their semantic label) can be configured to be spawned with a specific mesh and actor component.\n *\n * Overall, it provides a simple interface to be able to quickly get a captured scene from Capture Flow populated at runtime.\n * It also provides a basic and flexible template to making use of the OculusAnchorSDK and UOculusXRRoomLayoutManagerComponent\n * to drive the actor's logic.  This removes the need for the developer to implement a system from scratch that makes use of\n * the native methods and components.\n *\n * TLDR:\n * - This actor populates a captured scene (created in Capture Flow) by spawning child actors with predefined actor and mesh components.\n * - Can be used as is, or can be derived or modified as needed depending on the application's needs.\n */" },
#endif
		{ "IncludePath", "OculusXRSceneActor.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AOculusXRSceneActor\n\nDEPRECATED: AOculusXRSceneActor and associated classes are deprecated (v65), please use MR Utility Kit instead\n(https://developer.oculus.com/documentation/unreal/unreal-mr-utility-kit-overview)\n\nThe purpose of this actor is to be able to spawn \"scene anchor\" actors.\n\nEach actor type (based on their semantic label) can be configured to be spawned with a specific mesh and actor component.\n\nOverall, it provides a simple interface to be able to quickly get a captured scene from Capture Flow populated at runtime.\nIt also provides a basic and flexible template to making use of the OculusAnchorSDK and UOculusXRRoomLayoutManagerComponent\nto drive the actor's logic.  This removes the need for the developer to implement a system from scratch that makes use of\nthe native methods and components.\n\nTLDR:\n- This actor populates a captured scene (created in Capture Flow) by spawning child actors with predefined actor and mesh components.\n- Can be used as is, or can be derived or modified as needed depending on the application's needs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LauchCaptureFlowWhenMissingScene_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQueries_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
		{ "UIMax", "1024" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPopulateSceneOnBeginPlay_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActiveRoomOnly_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then when the scene model is loaded we will only attempt to populate the room the user is standing in.\n// Otherwise all rooms and all scene anchors will be loaded.\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then when the scene model is loaded we will only attempt to populate the room the user is standing in.\nOtherwise all rooms and all scene anchors will be loaded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScenePlaneSpawnedSceneAnchorProperties_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneVolumeSpawnedSceneAnchorProperties_MetaData[] = {
		{ "Category", "OculusXR|Scene Actor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLayouts_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AOculusXRSceneActor constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LauchCaptureFlowWhenMissingScene;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxQueries;
	static void NewProp_bPopulateSceneOnBeginPlay_SetBit(void* Obj)
	{
		((AOculusXRSceneActor*)Obj)->bPopulateSceneOnBeginPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPopulateSceneOnBeginPlay;
	static void NewProp_bActiveRoomOnly_SetBit(void* Obj)
	{
		((AOculusXRSceneActor*)Obj)->bActiveRoomOnly = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveRoomOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScenePlaneSpawnedSceneAnchorProperties_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScenePlaneSpawnedSceneAnchorProperties_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ScenePlaneSpawnedSceneAnchorProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneVolumeSpawnedSceneAnchorProperties_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SceneVolumeSpawnedSceneAnchorProperties_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SceneVolumeSpawnedSceneAnchorProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayouts_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayouts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RoomLayouts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AOculusXRSceneActor constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearScene"), .Pointer = &AOculusXRSceneActor::execClearScene },
		{ .NameUTF8 = UTF8TEXT("GetActorsBySemanticLabel"), .Pointer = &AOculusXRSceneActor::execGetActorsBySemanticLabel },
		{ .NameUTF8 = UTF8TEXT("GetRoomLayouts"), .Pointer = &AOculusXRSceneActor::execGetRoomLayouts },
		{ .NameUTF8 = UTF8TEXT("IsRoomLayoutValid"), .Pointer = &AOculusXRSceneActor::execIsRoomLayoutValid },
		{ .NameUTF8 = UTF8TEXT("IsScenePopulated"), .Pointer = &AOculusXRSceneActor::execIsScenePopulated },
		{ .NameUTF8 = UTF8TEXT("LaunchCaptureFlow"), .Pointer = &AOculusXRSceneActor::execLaunchCaptureFlow },
		{ .NameUTF8 = UTF8TEXT("PopulateScene"), .Pointer = &AOculusXRSceneActor::execPopulateScene },
		{ .NameUTF8 = UTF8TEXT("SetVisibilityToAllSceneAnchors"), .Pointer = &AOculusXRSceneActor::execSetVisibilityToAllSceneAnchors },
		{ .NameUTF8 = UTF8TEXT("SetVisibilityToSceneAnchorsBySemanticLabel"), .Pointer = &AOculusXRSceneActor::execSetVisibilityToSceneAnchorsBySemanticLabel },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOculusXRSceneActor_ClearScene, "ClearScene" }, // 40b0a6e08fa2f3bfbc1f05d0a526ad599b3adddb
		{ &Z_Construct_UFunction_AOculusXRSceneActor_GetActorsBySemanticLabel, "GetActorsBySemanticLabel" }, // fc1495b7deafc84f9b0916dfc83a3d90d1c7c67e
		{ &Z_Construct_UFunction_AOculusXRSceneActor_GetRoomLayouts, "GetRoomLayouts" }, // 64ce02e9994d544fdbb2170328556e36b660857a
		{ &Z_Construct_UFunction_AOculusXRSceneActor_IsRoomLayoutValid, "IsRoomLayoutValid" }, // d338a30d783b01a38627517be671efd61f9dea66
		{ &Z_Construct_UFunction_AOculusXRSceneActor_IsScenePopulated, "IsScenePopulated" }, // 3c2c1577eeb344085c915798a0dd41add712cd47
		{ &Z_Construct_UFunction_AOculusXRSceneActor_LaunchCaptureFlow, "LaunchCaptureFlow" }, // 521d6432634f179ecad0341c5dceb383a6e18203
		{ &Z_Construct_UFunction_AOculusXRSceneActor_PopulateScene, "PopulateScene" }, // 14d6db402575cd70b0f3e320d5ebb6f87f44382a
		{ &Z_Construct_UFunction_AOculusXRSceneActor_SetVisibilityToAllSceneAnchors, "SetVisibilityToAllSceneAnchors" }, // 250f304ca644244b9ca39a2eb0fe3d9a72594458
		{ &Z_Construct_UFunction_AOculusXRSceneActor_SetVisibilityToSceneAnchorsBySemanticLabel, "SetVisibilityToSceneAnchorsBySemanticLabel" }, // 48196fdf630a809a73dfe93c253375dab8f380f2
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOculusXRSceneActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AOculusXRSceneActor Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LauchCaptureFlowWhenMissingScene = { "LauchCaptureFlowWhenMissingScene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AOculusXRSceneActor, LauchCaptureFlowWhenMissingScene), Z_Construct_UEnum_OculusXRScene_EOculusXRLaunchCaptureFlowWhenMissingScene, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LauchCaptureFlowWhenMissingScene_MetaData), NewProp_LauchCaptureFlowWhenMissingScene_MetaData) }; // 65f6f7314a3a1f17568fdcfe17c718de5be02cd7
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxQueries = { "MaxQueries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AOculusXRSceneActor, MaxQueries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQueries_MetaData), NewProp_MaxQueries_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPopulateSceneOnBeginPlay = { "bPopulateSceneOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AOculusXRSceneActor), &UHT_STATICS::NewProp_bPopulateSceneOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPopulateSceneOnBeginPlay_MetaData), NewProp_bPopulateSceneOnBeginPlay_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bActiveRoomOnly = { "bActiveRoomOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AOculusXRSceneActor), &UHT_STATICS::NewProp_bActiveRoomOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActiveRoomOnly_MetaData), NewProp_bActiveRoomOnly_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ScenePlaneSpawnedSceneAnchorProperties_ValueProp = { "ScenePlaneSpawnedSceneAnchorProperties", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties, METADATA_PARAMS(0, nullptr) }; // 86c5f4b26633d08d87996d436d442f9856ed1e92
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ScenePlaneSpawnedSceneAnchorProperties_Key_KeyProp = { "ScenePlaneSpawnedSceneAnchorProperties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ScenePlaneSpawnedSceneAnchorProperties = { "ScenePlaneSpawnedSceneAnchorProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(AOculusXRSceneActor, ScenePlaneSpawnedSceneAnchorProperties), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScenePlaneSpawnedSceneAnchorProperties_MetaData), NewProp_ScenePlaneSpawnedSceneAnchorProperties_MetaData) }; // 86c5f4b26633d08d87996d436d442f9856ed1e92
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SceneVolumeSpawnedSceneAnchorProperties_ValueProp = { "SceneVolumeSpawnedSceneAnchorProperties", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties, METADATA_PARAMS(0, nullptr) }; // 86c5f4b26633d08d87996d436d442f9856ed1e92
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SceneVolumeSpawnedSceneAnchorProperties_Key_KeyProp = { "SceneVolumeSpawnedSceneAnchorProperties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_SceneVolumeSpawnedSceneAnchorProperties = { "SceneVolumeSpawnedSceneAnchorProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(AOculusXRSceneActor, SceneVolumeSpawnedSceneAnchorProperties), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneVolumeSpawnedSceneAnchorProperties_MetaData), NewProp_SceneVolumeSpawnedSceneAnchorProperties_MetaData) }; // 86c5f4b26633d08d87996d436d442f9856ed1e92
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomLayouts_ValueProp = { "RoomLayouts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOculusXRRoomLayout, METADATA_PARAMS(0, nullptr) }; // 14f9f9ea3873ab538f6a0cceac92dfa0949fc1d4
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomLayouts_Key_KeyProp = { "RoomLayouts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_RoomLayouts = { "RoomLayouts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(AOculusXRSceneActor, RoomLayouts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLayouts_MetaData), NewProp_RoomLayouts_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80 14f9f9ea3873ab538f6a0cceac92dfa0949fc1d4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LauchCaptureFlowWhenMissingScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxQueries,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPopulateSceneOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bActiveRoomOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScenePlaneSpawnedSceneAnchorProperties_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScenePlaneSpawnedSceneAnchorProperties_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScenePlaneSpawnedSceneAnchorProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneVolumeSpawnedSceneAnchorProperties_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneVolumeSpawnedSceneAnchorProperties_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneVolumeSpawnedSceneAnchorProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayouts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayouts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayouts,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AOculusXRSceneActor Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AOculusXRSceneActor,
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
static void AOculusXRSceneActor_StaticRegisterNativesAOculusXRSceneActor()
{
	UClass* Class = AOculusXRSceneActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOculusXRSceneActor;
UClass* Z_Construct_UClass_AOculusXRSceneActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AOculusXRSceneActor;
		if (!Z_Registration_Info_UClass_AOculusXRSceneActor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRSceneActor"),
				Z_Registration_Info_UClass_AOculusXRSceneActor.InnerSingleton,
				AOculusXRSceneActor_StaticRegisterNativesAOculusXRSceneActor,
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
		return Z_Registration_Info_UClass_AOculusXRSceneActor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AOculusXRSceneActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOculusXRSceneActor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AOculusXRSceneActor.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOculusXRSceneActor);
AOculusXRSceneActor::~AOculusXRSceneActor() {}
// ********** End Class AOculusXRSceneActor ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h__Script_OculusXRScene_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRScene_EOculusXRLaunchCaptureFlowWhenMissingScene, TEXT("EOculusXRLaunchCaptureFlowWhenMissingScene"), &ZRIE_EOculusXRLaunchCaptureFlowWhenMissingScene, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1710683953U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties, Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties_Statics::NewStructOps, TEXT("OculusXRSpawnedSceneAnchorProperties"),&Z_Registration_Info_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpawnedSceneAnchorProperties), 2261120178U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOculusXRSceneActor, TEXT("AOculusXRSceneActor"), &Z_Registration_Info_UClass_AOculusXRSceneActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOculusXRSceneActor), 3405571294U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h__Script_OculusXRScene_a1f52abf6bf5730ff6e3716e7db2fea3ea21edcc{
	TEXT("/Script/OculusXRScene"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
