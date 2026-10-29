// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRRuleProcessorSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRRuleProcessorSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRProjectSetupTool(ETypeConstructPhase);
OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem(ETypeConstructPhase);
OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRRuleProcessorSubsystem ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * The rule processor handles registration and querying of rules\n */" },
		{ "IncludePath", "OculusXRRuleProcessorSubsystem.h" },
		{ "ModuleRelativePath", "Public/OculusXRRuleProcessorSubsystem.h" },
		{ "ToolTip", "The rule processor handles registration and querying of rules" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRRuleProcessorSubsystem constinit property declarations **********
// ********** End Class UOculusXRRuleProcessorSubsystem constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRuleProcessorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEngineSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRProjectSetupTool,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRRuleProcessorSubsystem,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem;
UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRRuleProcessorSubsystem;
		if (!Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRRuleProcessorSubsystem"),
				Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRRuleProcessorSubsystem::UOculusXRRuleProcessorSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRRuleProcessorSubsystem);
UOculusXRRuleProcessorSubsystem::~UOculusXRRuleProcessorSubsystem() {}
// ********** End Class UOculusXRRuleProcessorSubsystem ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h__Script_OculusXRProjectSetupTool_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRRuleProcessorSubsystem, TEXT("UOculusXRRuleProcessorSubsystem"), &Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRuleProcessorSubsystem), 2648693533U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h__Script_OculusXRProjectSetupTool_95cb86a695eb34076ed40afaa8c657090cd263d0{
	TEXT("/Script/OculusXRProjectSetupTool"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
