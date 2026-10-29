// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMultiPlayerTestingSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRMultiPlayerTestingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase);
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem(ETypeConstructPhase);
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRMultiPlayerTestingSubsystem *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The rule processor handles registration and querying of rules\n */" },
#endif
		{ "IncludePath", "OculusXRMultiPlayerTestingSubsystem.h" },
		{ "ModuleRelativePath", "Public/OculusXRMultiPlayerTestingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rule processor handles registration and querying of rules" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRMultiPlayerTestingSubsystem constinit property declarations *****
// ********** End Class UOculusXRMultiPlayerTestingSubsystem constinit property declarations *******
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMultiPlayerTestingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEngineSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem;
UClass* Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRMultiPlayerTestingSubsystem;
		if (!Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRMultiPlayerTestingSubsystem"),
				Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRMultiPlayerTestingSubsystem::UOculusXRMultiPlayerTestingSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRMultiPlayerTestingSubsystem);
UOculusXRMultiPlayerTestingSubsystem::~UOculusXRMultiPlayerTestingSubsystem() {}
// ********** End Class UOculusXRMultiPlayerTestingSubsystem ***************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRMultiPlayerTestingSubsystem_h__Script_OculusXRHMD_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem, TEXT("UOculusXRMultiPlayerTestingSubsystem"), &Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMultiPlayerTestingSubsystem), 757558418U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRMultiPlayerTestingSubsystem_h__Script_OculusXRHMD_fc4ea7a8019f66abe44bef2c248543f459e5e820{
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
