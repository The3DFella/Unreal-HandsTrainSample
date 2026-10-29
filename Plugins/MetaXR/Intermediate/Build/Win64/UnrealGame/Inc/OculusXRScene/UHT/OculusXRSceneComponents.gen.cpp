// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSceneComponents.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneComponents() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRPlaneAnchorComponent Function GetPositionAndSize ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics
struct UHT_STATICS
{
	struct OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms
	{
		FVector outPosition;
		FVector outSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPositionAndSize constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outSize;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPositionAndSize constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPositionAndSize Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outPosition = { "outPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms, outPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outSize = { "outSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms, outSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPositionAndSize Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRPlaneAnchorComponent, nullptr, "GetPositionAndSize", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRPlaneAnchorComponent::execGetPositionAndSize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_outPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_outSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPositionAndSize(Z_Param_Out_outPosition,Z_Param_Out_outSize);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPlaneAnchorComponent Function GetPositionAndSize ******************

// ********** Begin Class UOculusXRPlaneAnchorComponent ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRPlaneAnchorComponent constinit property declarations ************
// ********** End Class UOculusXRPlaneAnchorComponent constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPositionAndSize"), .Pointer = &UOculusXRPlaneAnchorComponent::execGetPositionAndSize },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize, "GetPositionAndSize" }, // 89b5badc6fbf669d50db571bbeb63a1c835d682d
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPlaneAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRPlaneAnchorComponent,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRPlaneAnchorComponent_StaticRegisterNativesUOculusXRPlaneAnchorComponent()
{
	UClass* Class = UOculusXRPlaneAnchorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent;
UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRPlaneAnchorComponent;
		if (!Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRPlaneAnchorComponent"),
				Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.InnerSingleton,
				UOculusXRPlaneAnchorComponent_StaticRegisterNativesUOculusXRPlaneAnchorComponent,
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
		return Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRPlaneAnchorComponent);
UOculusXRPlaneAnchorComponent::~UOculusXRPlaneAnchorComponent() {}
// ********** End Class UOculusXRPlaneAnchorComponent **********************************************

// ********** Begin Class UOculusXRVolumeAnchorComponent Function GetPositionAndSize ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics
struct UHT_STATICS
{
	struct OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms
	{
		FVector outPosition;
		FVector outSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPositionAndSize constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outSize;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPositionAndSize constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPositionAndSize Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outPosition = { "outPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms, outPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outSize = { "outSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms, outSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPositionAndSize Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRVolumeAnchorComponent, nullptr, "GetPositionAndSize", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRVolumeAnchorComponent::execGetPositionAndSize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_outPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_outSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPositionAndSize(Z_Param_Out_outPosition,Z_Param_Out_outSize);
	P_NATIVE_END;
}
// ********** End Class UOculusXRVolumeAnchorComponent Function GetPositionAndSize *****************

// ********** Begin Class UOculusXRVolumeAnchorComponent *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRVolumeAnchorComponent constinit property declarations ***********
// ********** End Class UOculusXRVolumeAnchorComponent constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPositionAndSize"), .Pointer = &UOculusXRVolumeAnchorComponent::execGetPositionAndSize },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize, "GetPositionAndSize" }, // 4be5de0310be5e7eaa154cba08a2828205949750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRVolumeAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRVolumeAnchorComponent,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRVolumeAnchorComponent_StaticRegisterNativesUOculusXRVolumeAnchorComponent()
{
	UClass* Class = UOculusXRVolumeAnchorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent;
UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRVolumeAnchorComponent;
		if (!Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRVolumeAnchorComponent"),
				Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.InnerSingleton,
				UOculusXRVolumeAnchorComponent_StaticRegisterNativesUOculusXRVolumeAnchorComponent,
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
		return Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRVolumeAnchorComponent);
UOculusXRVolumeAnchorComponent::~UOculusXRVolumeAnchorComponent() {}
// ********** End Class UOculusXRVolumeAnchorComponent *********************************************

// ********** Begin Class UOculusXRSemanticClassificationAnchorComponent Function GetSemanticClassifications 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics
struct UHT_STATICS
{
	struct OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms
	{
		TArray<FString> outClassifications;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSemanticClassifications constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_outClassifications_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outClassifications;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSemanticClassifications constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSemanticClassifications Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_outClassifications_Inner = { "outClassifications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_outClassifications = { "outClassifications", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms, outClassifications), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outClassifications_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outClassifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSemanticClassifications Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent, nullptr, "GetSemanticClassifications", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRSemanticClassificationAnchorComponent::execGetSemanticClassifications)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_outClassifications);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSemanticClassifications(Z_Param_Out_outClassifications);
	P_NATIVE_END;
}
// ********** End Class UOculusXRSemanticClassificationAnchorComponent Function GetSemanticClassifications 

// ********** Begin Class UOculusXRSemanticClassificationAnchorComponent ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSemanticClassificationAnchorComponent constinit property declarations 
// ********** End Class UOculusXRSemanticClassificationAnchorComponent constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSemanticClassifications"), .Pointer = &UOculusXRSemanticClassificationAnchorComponent::execGetSemanticClassifications },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications, "GetSemanticClassifications" }, // b2fbce6322aacad2b3c146dd3c0a1d1568a3d74a
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSemanticClassificationAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRSemanticClassificationAnchorComponent_StaticRegisterNativesUOculusXRSemanticClassificationAnchorComponent()
{
	UClass* Class = UOculusXRSemanticClassificationAnchorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent;
UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRSemanticClassificationAnchorComponent;
		if (!Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRSemanticClassificationAnchorComponent"),
				Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.InnerSingleton,
				UOculusXRSemanticClassificationAnchorComponent_StaticRegisterNativesUOculusXRSemanticClassificationAnchorComponent,
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
		return Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSemanticClassificationAnchorComponent);
UOculusXRSemanticClassificationAnchorComponent::~UOculusXRSemanticClassificationAnchorComponent() {}
// ********** End Class UOculusXRSemanticClassificationAnchorComponent *****************************

// ********** Begin Class UOculusXRRoomLayoutAnchorComponent Function GetRoomLayout ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics
struct UHT_STATICS
{
	struct OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms
	{
		FOculusXRUUID outFloorUUID;
		FOculusXRUUID outCeilingUUID;
		TArray<FOculusXRUUID> outWallsUUIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomLayout constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outFloorUUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outCeilingUUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outWallsUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outWallsUUIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomLayout constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomLayout Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outFloorUUID = { "outFloorUUID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outFloorUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outCeilingUUID = { "outCeilingUUID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outCeilingUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outWallsUUIDs_Inner = { "outWallsUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_outWallsUUIDs = { "outWallsUUIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outWallsUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outFloorUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outCeilingUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outWallsUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outWallsUUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoomLayout Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent, nullptr, "GetRoomLayout", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRRoomLayoutAnchorComponent::execGetRoomLayout)
{
	P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_outFloorUUID);
	P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_outCeilingUUID);
	P_GET_TARRAY_REF(FOculusXRUUID,Z_Param_Out_outWallsUUIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRoomLayout(Z_Param_Out_outFloorUUID,Z_Param_Out_outCeilingUUID,Z_Param_Out_outWallsUUIDs);
	P_NATIVE_END;
}
// ********** End Class UOculusXRRoomLayoutAnchorComponent Function GetRoomLayout ******************

// ********** Begin Class UOculusXRRoomLayoutAnchorComponent ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRRoomLayoutAnchorComponent constinit property declarations *******
// ********** End Class UOculusXRRoomLayoutAnchorComponent constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRoomLayout"), .Pointer = &UOculusXRRoomLayoutAnchorComponent::execGetRoomLayout },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout, "GetRoomLayout" }, // 51333225197444ffd69c47cb8e4cef7da3a195f1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRoomLayoutAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRRoomLayoutAnchorComponent_StaticRegisterNativesUOculusXRRoomLayoutAnchorComponent()
{
	UClass* Class = UOculusXRRoomLayoutAnchorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent;
UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRRoomLayoutAnchorComponent;
		if (!Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRRoomLayoutAnchorComponent"),
				Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.InnerSingleton,
				UOculusXRRoomLayoutAnchorComponent_StaticRegisterNativesUOculusXRRoomLayoutAnchorComponent,
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
		return Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRRoomLayoutAnchorComponent);
UOculusXRRoomLayoutAnchorComponent::~UOculusXRRoomLayoutAnchorComponent() {}
// ********** End Class UOculusXRRoomLayoutAnchorComponent *****************************************

// ********** Begin Class UOculusXRTriangleMeshAnchorComponent *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRTriangleMeshAnchorComponent constinit property declarations *****
// ********** End Class UOculusXRTriangleMeshAnchorComponent constinit property declarations *******
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRTriangleMeshAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent;
UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRTriangleMeshAnchorComponent;
		if (!Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRTriangleMeshAnchorComponent"),
				Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRTriangleMeshAnchorComponent);
UOculusXRTriangleMeshAnchorComponent::~UOculusXRTriangleMeshAnchorComponent() {}
// ********** End Class UOculusXRTriangleMeshAnchorComponent ***************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneComponents_h__Script_OculusXRScene_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPlaneAnchorComponent, TEXT("UOculusXRPlaneAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPlaneAnchorComponent), 1088397069U) },
		{ Z_Construct_UClass_UOculusXRVolumeAnchorComponent, TEXT("UOculusXRVolumeAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRVolumeAnchorComponent), 88938507U) },
		{ Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent, TEXT("UOculusXRSemanticClassificationAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSemanticClassificationAnchorComponent), 1379176038U) },
		{ Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent, TEXT("UOculusXRRoomLayoutAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRoomLayoutAnchorComponent), 3156111369U) },
		{ Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent, TEXT("UOculusXRTriangleMeshAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRTriangleMeshAnchorComponent), 1189209281U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneComponents_h__Script_OculusXRScene_0eed6fd1c980f95f2a3138eec99042c6fc84ab05{
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
