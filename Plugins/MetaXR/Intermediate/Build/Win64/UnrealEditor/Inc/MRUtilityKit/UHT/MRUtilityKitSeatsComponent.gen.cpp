// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitSeatsComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitSeatsComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSeatsComponent(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSeatsComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMRUKSeatsComponent Function CalculateSeatPoses **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics
struct UHT_STATICS
{
	struct MRUKSeatsComponent_eventCalculateSeatPoses_Parms
	{
		double SeatWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculate the seat poses that are available on the actor.\n\x09 * This gets called automatically after the room has been loaded.\n\x09 * However, it's okay to call this function again with a different SeatWidth.\n\x09 * The seat poses will then get recalculated.\n\x09 *\n\x09 * @param SeatWidth The width of each seat.\n\x09 */" },
#endif
		{ "CPP_Default_SeatWidth", "60.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSeatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate the seat poses that are available on the actor.\nThis gets called automatically after the room has been loaded.\nHowever, it's okay to call this function again with a different SeatWidth.\nThe seat poses will then get recalculated.\n\n@param SeatWidth The width of each seat." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateSeatPoses constinit property declarations ********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SeatWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculateSeatPoses constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculateSeatPoses Property Definitions *******************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SeatWidth = { "SeatWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSeatsComponent_eventCalculateSeatPoses_Parms, SeatWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SeatWidth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CalculateSeatPoses Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMRUKSeatsComponent, nullptr, "CalculateSeatPoses", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSeatsComponent_eventCalculateSeatPoses_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSeatsComponent_eventCalculateSeatPoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMRUKSeatsComponent::execCalculateSeatPoses)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_SeatWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateSeatPoses(Z_Param_SeatWidth);
	P_NATIVE_END;
}
// ********** End Class UMRUKSeatsComponent Function CalculateSeatPoses ****************************

// ********** Begin Class UMRUKSeatsComponent ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKSeatsComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This component gets attached to Anchors which have seats available.\n * Seats can be used for example to spawn avatars in the correct locations.\n */" },
#endif
		{ "IncludePath", "MRUtilityKitSeatsComponent.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSeatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This component gets attached to Anchors which have seats available.\nSeats can be used for example to spawn avatars in the correct locations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatPoses_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSeatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKSeatsComponent constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeatPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeatPoses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMRUKSeatsComponent constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CalculateSeatPoses"), .Pointer = &UMRUKSeatsComponent::execCalculateSeatPoses },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses, "CalculateSeatPoses" }, // bfd6d7d3022b1c7ec3158acdce9fa644ed271e3b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKSeatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMRUKSeatsComponent Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SeatPoses_Inner = { "SeatPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SeatPoses = { "SeatPoses", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSeatsComponent, SeatPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatPoses_MetaData), NewProp_SeatPoses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SeatPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SeatPoses,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMRUKSeatsComponent Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKSeatsComponent,
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
static void UMRUKSeatsComponent_StaticRegisterNativesUMRUKSeatsComponent()
{
	UClass* Class = UMRUKSeatsComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKSeatsComponent;
UClass* Z_Construct_UClass_UMRUKSeatsComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKSeatsComponent;
		if (!Z_Registration_Info_UClass_UMRUKSeatsComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKSeatsComponent"),
				Z_Registration_Info_UClass_UMRUKSeatsComponent.InnerSingleton,
				UMRUKSeatsComponent_StaticRegisterNativesUMRUKSeatsComponent,
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
		return Z_Registration_Info_UClass_UMRUKSeatsComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKSeatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKSeatsComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKSeatsComponent.OuterSingleton;
}
#undef UHT_STATICS
UMRUKSeatsComponent::UMRUKSeatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKSeatsComponent);
UMRUKSeatsComponent::~UMRUKSeatsComponent() {}
// ********** End Class UMRUKSeatsComponent ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKSeatsComponent, TEXT("UMRUKSeatsComponent"), &Z_Registration_Info_UClass_UMRUKSeatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKSeatsComponent), 4168023956U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h__Script_MRUtilityKit_a094be5d1690be54353dac3940c4c4f4acdc4b44{
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
