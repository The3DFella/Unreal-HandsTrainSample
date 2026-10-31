// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAsyncRequestSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRAsyncRequestSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRAsyncRequest(ETypeConstructPhase);
OCULUSXRASYNCREQUEST_API UClass* Z_Construct_UClass_UOculusXRAsyncRequestSubsystem(ETypeConstructPhase);
OCULUSXRASYNCREQUEST_API UClass* Z_Construct_UClass_UOculusXRAsyncRequestSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRAsyncRequestSubsystem *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "OculusXRAsyncRequestSubsystem.h" },
		{ "ModuleRelativePath", "Private/OculusXRAsyncRequestSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRAsyncRequestSubsystem constinit property declarations ***********
// ********** End Class UOculusXRAsyncRequestSubsystem constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncRequestSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstanceSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRAsyncRequest,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRAsyncRequestSubsystem,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem;
UClass* Z_Construct_UClass_UOculusXRAsyncRequestSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRAsyncRequestSubsystem;
		if (!Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRAsyncRequestSubsystem"),
				Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRAsyncRequestSubsystem::UOculusXRAsyncRequestSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRAsyncRequestSubsystem);
UOculusXRAsyncRequestSubsystem::~UOculusXRAsyncRequestSubsystem() {}
// ********** End Class UOculusXRAsyncRequestSubsystem *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRAsyncRequest_Private_OculusXRAsyncRequestSubsystem_h__Script_OculusXRAsyncRequest_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAsyncRequestSubsystem, TEXT("UOculusXRAsyncRequestSubsystem"), &Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncRequestSubsystem), 3626580803U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRAsyncRequest_Private_OculusXRAsyncRequestSubsystem_h__Script_OculusXRAsyncRequest_6f5d8cb26f1d565e569336ebb570831ebd8e8a10{
	TEXT("/Script/OculusXRAsyncRequest"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
