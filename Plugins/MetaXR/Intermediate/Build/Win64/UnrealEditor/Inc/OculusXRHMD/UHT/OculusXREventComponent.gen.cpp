// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXREventComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXREventComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase);
OCULUSXRHMD_API UFunction* Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature(ETypeConstructPhase);
OCULUSXRHMD_API UFunction* Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusEyeTrackingStateChangedEventDelegate__DelegateSignature(ETypeConstructPhase);
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXREventComponent(ETypeConstructPhase);
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXREventComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOculusDisplayRefreshRateChangedEventDelegate *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics
struct UHT_STATICS
{
	struct OculusXREventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms
	{
		float fromRefreshRate;
		float toRefreshRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXREventComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusDisplayRefreshRateChangedEventDelegate constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fromRefreshRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_toRefreshRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusDisplayRefreshRateChangedEventDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusDisplayRefreshRateChangedEventDelegate Property Definitions ****
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_fromRefreshRate = { "fromRefreshRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXREventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms, fromRefreshRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_toRefreshRate = { "toRefreshRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXREventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms, toRefreshRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_fromRefreshRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_toRefreshRate,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusDisplayRefreshRateChangedEventDelegate Property Definitions ******
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXREventComponent, nullptr, "OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXREventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXREventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusDisplayRefreshRateChangedEventDelegate ***************************

// ********** Begin Delegate FOculusEyeTrackingStateChangedEventDelegate ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusEyeTrackingStateChangedEventDelegate__DelegateSignature_Statics
struct UHT_STATICS
{
	struct OculusXREventComponent_eventOculusEyeTrackingStateChangedEventDelegate_Parms
	{
		bool bEyeTrackingOn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXREventComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusEyeTrackingStateChangedEventDelegate constinit property declarations 
	static void NewProp_bEyeTrackingOn_SetBit(void* Obj)
	{
		((OculusXREventComponent_eventOculusEyeTrackingStateChangedEventDelegate_Parms*)Obj)->bEyeTrackingOn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyeTrackingOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusEyeTrackingStateChangedEventDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusEyeTrackingStateChangedEventDelegate Property Definitions ******
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEyeTrackingOn = { "bEyeTrackingOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXREventComponent_eventOculusEyeTrackingStateChangedEventDelegate_Parms), &UHT_STATICS::NewProp_bEyeTrackingOn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEyeTrackingOn,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusEyeTrackingStateChangedEventDelegate Property Definitions ********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXREventComponent, nullptr, "OculusEyeTrackingStateChangedEventDelegate__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXREventComponent_eventOculusEyeTrackingStateChangedEventDelegate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXREventComponent_eventOculusEyeTrackingStateChangedEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusEyeTrackingStateChangedEventDelegate__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusEyeTrackingStateChangedEventDelegate *****************************

// ********** Begin Class UOculusXREventComponent **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXREventComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
		{ "IncludePath", "OculusXREventComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXREventComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusDisplayRefreshRateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXREventComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusEyeTrackingStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXREventComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXREventComponent constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OculusDisplayRefreshRateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OculusEyeTrackingStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXREventComponent constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature, "OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature" }, // 266f63da03b0b14166d185439b9aa66e48f4aedc
		{ &Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusEyeTrackingStateChangedEventDelegate__DelegateSignature, "OculusEyeTrackingStateChangedEventDelegate__DelegateSignature" }, // 1d3b679d187f0ecccf57906eb4e6e5b14a20adbf
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXREventComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXREventComponent Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OculusDisplayRefreshRateChanged = { "OculusDisplayRefreshRateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREventComponent, OculusDisplayRefreshRateChanged), Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusDisplayRefreshRateChanged_MetaData), NewProp_OculusDisplayRefreshRateChanged_MetaData) }; // 266f63da03b0b14166d185439b9aa66e48f4aedc
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OculusEyeTrackingStateChanged = { "OculusEyeTrackingStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREventComponent, OculusEyeTrackingStateChanged), Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusEyeTrackingStateChangedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusEyeTrackingStateChanged_MetaData), NewProp_OculusEyeTrackingStateChanged_MetaData) }; // 1d3b679d187f0ecccf57906eb4e6e5b14a20adbf
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusDisplayRefreshRateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusEyeTrackingStateChanged,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXREventComponent Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXREventComponent,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXREventComponent;
UClass* Z_Construct_UClass_UOculusXREventComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXREventComponent;
		if (!Z_Registration_Info_UClass_UOculusXREventComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXREventComponent"),
				Z_Registration_Info_UClass_UOculusXREventComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXREventComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXREventComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXREventComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXREventComponent.OuterSingleton;
}
#undef UHT_STATICS
UOculusXREventComponent::UOculusXREventComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXREventComponent);
UOculusXREventComponent::~UOculusXREventComponent() {}
// ********** End Class UOculusXREventComponent ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXREventComponent_h__Script_OculusXRHMD_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXREventComponent, TEXT("UOculusXREventComponent"), &Z_Registration_Info_UClass_UOculusXREventComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXREventComponent), 3792452657U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXREventComponent_h__Script_OculusXRHMD_eed88507918f21696afd502d523d9992cf064802{
	TEXT("/Script/OculusXRHMD"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
