// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitLightDispatcher.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitLightDispatcher() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APointLight(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKLightDispatcher(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKLightDispatcher(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AMRUKLightDispatcher Function AddAdditionalPointLightActor ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKLightDispatcher_AddAdditionalPointLightActor_Statics
struct UHT_STATICS
{
	struct MRUKLightDispatcher_eventAddAdditionalPointLightActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add a actor to the AdditionalActorsToLookForPointLightComponents list.\n\x09 * This should be used during runtime instead of adding actors directly to AdditionalActorsToLookForPointLightComponents.\n\x09 * @param Actor Actor to add to AdditionalActorsToLookForPointLightComponents.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitLightDispatcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a actor to the AdditionalActorsToLookForPointLightComponents list.\nThis should be used during runtime instead of adding actors directly to AdditionalActorsToLookForPointLightComponents.\n@param Actor Actor to add to AdditionalActorsToLookForPointLightComponents." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddAdditionalPointLightActor constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAdditionalPointLightActor constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAdditionalPointLightActor Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLightDispatcher_eventAddAdditionalPointLightActor_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddAdditionalPointLightActor Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKLightDispatcher, nullptr, "AddAdditionalPointLightActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKLightDispatcher_eventAddAdditionalPointLightActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKLightDispatcher_eventAddAdditionalPointLightActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKLightDispatcher_AddAdditionalPointLightActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKLightDispatcher::execAddAdditionalPointLightActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAdditionalPointLightActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class AMRUKLightDispatcher Function AddAdditionalPointLightActor *****************

// ********** Begin Class AMRUKLightDispatcher Function ForceUpdateCollection **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKLightDispatcher_ForceUpdateCollection_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Only callable in the editor from the scene, will update the linked parameter collection with the info\n\x09 * of the point lights in the scene (based on the parameters), updating the highlight effect in the process.\n\x09 * This is meant to preview the effect in the editor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitLightDispatcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only callable in the editor from the scene, will update the linked parameter collection with the info\nof the point lights in the scene (based on the parameters), updating the highlight effect in the process.\nThis is meant to preview the effect in the editor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ForceUpdateCollection constinit property declarations *****************
// ********** End Function ForceUpdateCollection constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKLightDispatcher, nullptr, "ForceUpdateCollection", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AMRUKLightDispatcher_ForceUpdateCollection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKLightDispatcher::execForceUpdateCollection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceUpdateCollection();
	P_NATIVE_END;
}
// ********** End Class AMRUKLightDispatcher Function ForceUpdateCollection ************************

// ********** Begin Class AMRUKLightDispatcher *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUKLightDispatcher_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * If you want to have highlights from lights over passthrough use this actor to collect all point lights in the scene and send them to the M_Highlights material.\n * It lights and sends them to a highlight material, which can be used to achieve highlights over Passthrough.\n * The highlight effect is achieved by using a material parameter collection.\n * See the PTRL Sample Project for an example of how to use this.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Light Dispatcher" },
		{ "IncludePath", "MRUtilityKitLightDispatcher.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitLightDispatcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want to have highlights from lights over passthrough use this actor to collect all point lights in the scene and send them to the M_Highlights material.\nIt lights and sends them to a highlight material, which can be used to achieve highlights over Passthrough.\nThe highlight effect is achieved by using a material parameter collection.\nSee the PTRL Sample Project for an example of how to use this." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The material parameter collection in which to fill lights data.\n\x09 * This parameter collection gets then send to the shader.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitLightDispatcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material parameter collection in which to fill lights data.\nThis parameter collection gets then send to the shader." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldFetchPointLightsAtBeginPlay_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether all point lights should be fetched automatically at BeginPlay().\n\x09 * The automatic fetching only works for PointLightActors. Actors that have PointLightComponents\n\x09 * attached to them will not be detected. These should be specified in AdditionalActorsToLookForPointLightComponents.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitLightDispatcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether all point lights should be fetched automatically at BeginPlay().\nThe automatic fetching only works for PointLightActors. Actors that have PointLightComponents\nattached to them will not be detected. These should be specified in AdditionalActorsToLookForPointLightComponents." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalActorsToLookForPointLightComponents_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of actor(s) that contain a PointLightComponent that should contribute to the highlight effect.\n\x09 * Use AddAdditionalPointLightActor to add actors during runtime.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitLightDispatcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actor(s) that contain a PointLightComponent that should contribute to the highlight effect.\nUse AddAdditionalPointLightActor to add actors during runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualPointLights_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * PointLightActors to use for the highlight effect (not available if \"Fetch Point Lights At Begin Play\" is true).\n\x09 */" },
#endif
		{ "EditCondition", "!ShouldFetchPointLightsAtBeginPlay" },
		{ "ModuleRelativePath", "Public/MRUtilityKitLightDispatcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PointLightActors to use for the highlight effect (not available if \"Fetch Point Lights At Begin Play\" is true)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLightComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitLightDispatcher.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKLightDispatcher constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
	static void NewProp_ShouldFetchPointLightsAtBeginPlay_SetBit(void* Obj)
	{
		((AMRUKLightDispatcher*)Obj)->ShouldFetchPointLightsAtBeginPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFetchPointLightsAtBeginPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalActorsToLookForPointLightComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalActorsToLookForPointLightComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManualPointLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManualPointLights;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLightComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointLightComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKLightDispatcher constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAdditionalPointLightActor"), .Pointer = &AMRUKLightDispatcher::execAddAdditionalPointLightActor },
		{ .NameUTF8 = UTF8TEXT("ForceUpdateCollection"), .Pointer = &AMRUKLightDispatcher::execForceUpdateCollection },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKLightDispatcher_AddAdditionalPointLightActor, "AddAdditionalPointLightActor" }, // 1e5264b6a11bbd95610d1aebfd9b6d9f125b7467
		{ &Z_Construct_UFunction_AMRUKLightDispatcher_ForceUpdateCollection, "ForceUpdateCollection" }, // dad75517532a0fa3209452a0b13da78937c9f77b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKLightDispatcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUKLightDispatcher Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKLightDispatcher, Collection), Z_Construct_UClass_UMaterialParameterCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ShouldFetchPointLightsAtBeginPlay = { "ShouldFetchPointLightsAtBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKLightDispatcher), &UHT_STATICS::NewProp_ShouldFetchPointLightsAtBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldFetchPointLightsAtBeginPlay_MetaData), NewProp_ShouldFetchPointLightsAtBeginPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AdditionalActorsToLookForPointLightComponents_Inner = { "AdditionalActorsToLookForPointLightComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AdditionalActorsToLookForPointLightComponents = { "AdditionalActorsToLookForPointLightComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKLightDispatcher, AdditionalActorsToLookForPointLightComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalActorsToLookForPointLightComponents_MetaData), NewProp_AdditionalActorsToLookForPointLightComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ManualPointLights_Inner = { "ManualPointLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_APointLight, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ManualPointLights = { "ManualPointLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKLightDispatcher, ManualPointLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualPointLights_MetaData), NewProp_ManualPointLights_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PointLightComponents_Inner = { "PointLightComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointLightComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PointLightComponents = { "PointLightComponents", nullptr, (EPropertyFlags)0x0020088000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKLightDispatcher, PointLightComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLightComponents_MetaData), NewProp_PointLightComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShouldFetchPointLightsAtBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalActorsToLookForPointLightComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalActorsToLookForPointLightComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ManualPointLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ManualPointLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointLightComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointLightComponents,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUKLightDispatcher Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUKLightDispatcher,
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
static void AMRUKLightDispatcher_StaticRegisterNativesAMRUKLightDispatcher()
{
	UClass* Class = AMRUKLightDispatcher::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKLightDispatcher;
UClass* Z_Construct_UClass_AMRUKLightDispatcher(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUKLightDispatcher;
		if (!Z_Registration_Info_UClass_AMRUKLightDispatcher.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKLightDispatcher"),
				Z_Registration_Info_UClass_AMRUKLightDispatcher.InnerSingleton,
				AMRUKLightDispatcher_StaticRegisterNativesAMRUKLightDispatcher,
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
		return Z_Registration_Info_UClass_AMRUKLightDispatcher.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUKLightDispatcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKLightDispatcher.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKLightDispatcher.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKLightDispatcher);
AMRUKLightDispatcher::~AMRUKLightDispatcher() {}
// ********** End Class AMRUKLightDispatcher *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKLightDispatcher, TEXT("AMRUKLightDispatcher"), &Z_Registration_Info_UClass_AMRUKLightDispatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKLightDispatcher), 2709833481U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h__Script_MRUtilityKit_63155bc3701bc75203fd6677188f753e5b7e37ec{
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
