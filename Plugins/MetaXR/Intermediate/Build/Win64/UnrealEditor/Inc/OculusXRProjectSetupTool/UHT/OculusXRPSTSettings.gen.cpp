// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRPSTSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRPSTSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRProjectSetupTool(ETypeConstructPhase);
OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRPSTSettings(ETypeConstructPhase);
OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRPSTSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRPSTSettings *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRPSTSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Meta XR Project Setup tool Settings\n */" },
		{ "IncludePath", "OculusXRPSTSettings.h" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "Meta XR Project Setup tool Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredRules_MetaData[] = {
		{ "Comment", "/**\n\x09 * @brief Ignored rules by developer\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief Ignored rules by developer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlatform_MetaData[] = {
		{ "Comment", "/**\n\x09 * @brief Selected platform for development\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief Selected platform for development" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBackGroundChecks_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/**\n\x09 * @brief If tools should periodically check if list of rules and rules' status\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief If tools should periodically check if list of rules and rules' status" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopBuildOnUnAppliedCriticalItems_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/**\n\x09 * @brief If build should fail if critical rule is not applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief If build should fail if critical rule is not applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGuidedTutorialComplete_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/**\n\x09 * @brief If guided tutorial has been completed/skipped\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief If guided tutorial has been completed/skipped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGuidedTutorial_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/**\n\x09 * @brief If guided tutorial showed\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief If guided tutorial showed" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRPSTSettings constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoredRules_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_IgnoredRules;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CurrentPlatform;
	static void NewProp_bBackGroundChecks_SetBit(void* Obj)
	{
		((UOculusXRPSTSettings*)Obj)->bBackGroundChecks = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBackGroundChecks;
	static void NewProp_bStopBuildOnUnAppliedCriticalItems_SetBit(void* Obj)
	{
		((UOculusXRPSTSettings*)Obj)->bStopBuildOnUnAppliedCriticalItems = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopBuildOnUnAppliedCriticalItems;
	static void NewProp_bGuidedTutorialComplete_SetBit(void* Obj)
	{
		((UOculusXRPSTSettings*)Obj)->bGuidedTutorialComplete = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGuidedTutorialComplete;
	static void NewProp_bShowGuidedTutorial_SetBit(void* Obj)
	{
		((UOculusXRPSTSettings*)Obj)->bShowGuidedTutorial = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGuidedTutorial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRPSTSettings constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPSTSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRPSTSettings Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_IgnoredRules_ElementProp = { "IgnoredRules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_IgnoredRules = { "IgnoredRules", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPSTSettings, IgnoredRules), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredRules_MetaData), NewProp_IgnoredRules_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_CurrentPlatform = { "CurrentPlatform", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPSTSettings, CurrentPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlatform_MetaData), NewProp_CurrentPlatform_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBackGroundChecks = { "bBackGroundChecks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPSTSettings), &UHT_STATICS::NewProp_bBackGroundChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBackGroundChecks_MetaData), NewProp_bBackGroundChecks_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopBuildOnUnAppliedCriticalItems = { "bStopBuildOnUnAppliedCriticalItems", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPSTSettings), &UHT_STATICS::NewProp_bStopBuildOnUnAppliedCriticalItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopBuildOnUnAppliedCriticalItems_MetaData), NewProp_bStopBuildOnUnAppliedCriticalItems_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGuidedTutorialComplete = { "bGuidedTutorialComplete", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPSTSettings), &UHT_STATICS::NewProp_bGuidedTutorialComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGuidedTutorialComplete_MetaData), NewProp_bGuidedTutorialComplete_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowGuidedTutorial = { "bShowGuidedTutorial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPSTSettings), &UHT_STATICS::NewProp_bShowGuidedTutorial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGuidedTutorial_MetaData), NewProp_bShowGuidedTutorial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IgnoredRules_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IgnoredRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBackGroundChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopBuildOnUnAppliedCriticalItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGuidedTutorialComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowGuidedTutorial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRPSTSettings Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRProjectSetupTool,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRPSTSettings,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPSTSettings;
UClass* Z_Construct_UClass_UOculusXRPSTSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRPSTSettings;
		if (!Z_Registration_Info_UClass_UOculusXRPSTSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRPSTSettings"),
				Z_Registration_Info_UClass_UOculusXRPSTSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRPSTSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRPSTSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPSTSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPSTSettings.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRPSTSettings::UOculusXRPSTSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRPSTSettings);
UOculusXRPSTSettings::~UOculusXRPSTSettings() {}
// ********** End Class UOculusXRPSTSettings *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h__Script_OculusXRProjectSetupTool_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPSTSettings, TEXT("UOculusXRPSTSettings"), &Z_Registration_Info_UClass_UOculusXRPSTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPSTSettings), 3961193537U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h__Script_OculusXRProjectSetupTool_1c7442cb5b27e0ed0731a024d926ce59f178b73c{
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
