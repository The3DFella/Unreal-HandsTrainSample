// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSceneLatentActions.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneLatentActions() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase);
OCULUSXRSCENE_API UFunction* Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOculusXRAsyncAction_CaptureFlowFinished ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXRAsyncAction_CaptureFlowFinished constinit property declarations 
// ********** End Delegate FOculusXRAsyncAction_CaptureFlowFinished constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, nullptr, "OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXRAsyncAction_CaptureFlowFinished ********************************

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow Function LaunchCaptureFlowAsync ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics
struct UHT_STATICS
{
	struct OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms
	{
		const UObject* WorldContext;
		UOculusXRAsyncAction_LaunchCaptureFlow* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LaunchCaptureFlowAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LaunchCaptureFlowAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LaunchCaptureFlowAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms, ReturnValue), Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LaunchCaptureFlowAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, nullptr, "LaunchCaptureFlowAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAsyncAction_LaunchCaptureFlow::execLaunchCaptureFlowAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRAsyncAction_LaunchCaptureFlow**)Z_Param__Result=UOculusXRAsyncAction_LaunchCaptureFlow::LaunchCaptureFlowAsync(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow Function LaunchCaptureFlowAsync *****

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow Function OnCaptureFinish **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics
struct UHT_STATICS
{
	struct OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms
	{
		FOculusXRUInt64 Id;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCaptureFinish constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCaptureFinish constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCaptureFinish Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms, Id), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnCaptureFinish Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, nullptr, "OnCaptureFinish", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRAsyncAction_LaunchCaptureFlow::execOnCaptureFinish)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Id);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCaptureFinish(Z_Param_Id,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow Function OnCaptureFinish ************

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "OculusXRSceneLatentActions.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow constinit property declarations ***
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LaunchCaptureFlowAsync"), .Pointer = &UOculusXRAsyncAction_LaunchCaptureFlow::execLaunchCaptureFlowAsync },
		{ .NameUTF8 = UTF8TEXT("OnCaptureFinish"), .Pointer = &UOculusXRAsyncAction_LaunchCaptureFlow::execOnCaptureFinish },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync, "LaunchCaptureFlowAsync" }, // 12e6fa1d85c7c892bb1ff7101f2aa90b32f8b04c
		{ &Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature, "OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature" }, // f4f6809dcc71b3ca4809deccc18e51e2b450fac3
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish, "OnCaptureFinish" }, // 1758c5cb7d236df456abbdce039cec244c58d038
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncAction_LaunchCaptureFlow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow Property Definitions **************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_LaunchCaptureFlow, Success), Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // f4f6809dcc71b3ca4809deccc18e51e2b450fac3
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_LaunchCaptureFlow, Failure), Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // f4f6809dcc71b3ca4809deccc18e51e2b450fac3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow Property Definitions ****************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRAsyncAction_LaunchCaptureFlow_StaticRegisterNativesUOculusXRAsyncAction_LaunchCaptureFlow()
{
	UClass* Class = UOculusXRAsyncAction_LaunchCaptureFlow::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow;
UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRAsyncAction_LaunchCaptureFlow;
		if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRAsyncAction_LaunchCaptureFlow"),
				Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.InnerSingleton,
				UOculusXRAsyncAction_LaunchCaptureFlow_StaticRegisterNativesUOculusXRAsyncAction_LaunchCaptureFlow,
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
		return Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRAsyncAction_LaunchCaptureFlow::UOculusXRAsyncAction_LaunchCaptureFlow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRAsyncAction_LaunchCaptureFlow);
UOculusXRAsyncAction_LaunchCaptureFlow::~UOculusXRAsyncAction_LaunchCaptureFlow() {}
// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h__Script_OculusXRScene_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, TEXT("UOculusXRAsyncAction_LaunchCaptureFlow"), &Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncAction_LaunchCaptureFlow), 3273372752U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h__Script_OculusXRScene_bc1ebdcaa633e829c95f0b64f0e50890e9901621{
	TEXT("/Script/OculusXRScene"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
