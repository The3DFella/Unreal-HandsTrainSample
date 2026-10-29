// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkOculusXRMovementSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLiveLinkOculusXRMovementSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ULiveLinkOculusXRMovementSourceFactory ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "LiveLinkOculusXRMovementSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkOculusXRMovementSourceFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULiveLinkOculusXRMovementSourceFactory constinit property declarations ***
// ********** End Class ULiveLinkOculusXRMovementSourceFactory constinit property declarations *****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkOculusXRMovementSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_ULiveLinkSourceFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory;
UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULiveLinkOculusXRMovementSourceFactory;
		if (!Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LiveLinkOculusXRMovementSourceFactory"),
				Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton;
}
#undef UHT_STATICS
ULiveLinkOculusXRMovementSourceFactory::ULiveLinkOculusXRMovementSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULiveLinkOculusXRMovementSourceFactory);
ULiveLinkOculusXRMovementSourceFactory::~ULiveLinkOculusXRMovementSourceFactory() {}
// ********** End Class ULiveLinkOculusXRMovementSourceFactory *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h__Script_OculusXRMovement_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory, TEXT("ULiveLinkOculusXRMovementSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkOculusXRMovementSourceFactory), 2522348229U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h__Script_OculusXRMovement_46592b352f6e4ded977a9fa3f1a5ad9545ccd6d9{
	TEXT("/Script/OculusXRMovement"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
