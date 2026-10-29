// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocationFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRColocationFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRColocation(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRColocationFunctionLibrary(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRColocationFunctionLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRColocationFunctionLibrary Function StopColocationSessionDiscovery 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Colocation" },
		{ "ModuleRelativePath", "Public/OculusXRColocationFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopColocationSessionDiscovery constinit property declarations ********
// ********** End Function StopColocationSessionDiscovery constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRColocationFunctionLibrary, nullptr, "StopColocationSessionDiscovery", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRColocationFunctionLibrary::execStopColocationSessionDiscovery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRColocationFunctionLibrary::StopColocationSessionDiscovery();
	P_NATIVE_END;
}
// ********** End Class UOculusXRColocationFunctionLibrary Function StopColocationSessionDiscovery *

// ********** Begin Class UOculusXRColocationFunctionLibrary ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRColocationFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "OculusXRColocationFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRColocationFunctionLibrary constinit property declarations *******
// ********** End Class UOculusXRColocationFunctionLibrary constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StopColocationSessionDiscovery"), .Pointer = &UOculusXRColocationFunctionLibrary::execStopColocationSessionDiscovery },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery, "StopColocationSessionDiscovery" }, // 9e6ceaed87017aebeca521a39b32a8587e08afef
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRColocationFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRColocationFunctionLibrary,
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
static void UOculusXRColocationFunctionLibrary_StaticRegisterNativesUOculusXRColocationFunctionLibrary()
{
	UClass* Class = UOculusXRColocationFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary;
UClass* Z_Construct_UClass_UOculusXRColocationFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRColocationFunctionLibrary;
		if (!Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRColocationFunctionLibrary"),
				Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.InnerSingleton,
				UOculusXRColocationFunctionLibrary_StaticRegisterNativesUOculusXRColocationFunctionLibrary,
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
		return Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRColocationFunctionLibrary::UOculusXRColocationFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRColocationFunctionLibrary);
UOculusXRColocationFunctionLibrary::~UOculusXRColocationFunctionLibrary() {}
// ********** End Class UOculusXRColocationFunctionLibrary *****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationFunctionLibrary_h__Script_OculusXRColocation_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRColocationFunctionLibrary, TEXT("UOculusXRColocationFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRColocationFunctionLibrary), 383340930U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationFunctionLibrary_h__Script_OculusXRColocation_c9439b687c28941eb5db5346fae2d1b2de3f250a{
	TEXT("/Script/OculusXRColocation"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
