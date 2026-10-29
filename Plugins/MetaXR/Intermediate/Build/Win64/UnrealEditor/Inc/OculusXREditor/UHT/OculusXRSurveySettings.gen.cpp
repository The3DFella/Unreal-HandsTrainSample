// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSurveySettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSurveySettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRSurveySettings(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRSurveySettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRSurveySettings **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRSurveySettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "OculusXRSurveySettings.h" },
		{ "ModuleRelativePath", "Private/OculusXRSurveySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstLaunchDate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First launch date stored as string\n" },
#endif
		{ "ModuleRelativePath", "Private/OculusXRSurveySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First launch date stored as string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of times the editor has been launched\n" },
#endif
		{ "ModuleRelativePath", "Private/OculusXRSurveySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of times the editor has been launched" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSurveyShown_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the survey has been shown to the user\n" },
#endif
		{ "ModuleRelativePath", "Private/OculusXRSurveySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the survey has been shown to the user" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSurveySettings constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FirstLaunchDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LaunchCount;
	static void NewProp_bSurveyShown_SetBit(void* Obj)
	{
		((UOculusXRSurveySettings*)Obj)->bSurveyShown = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSurveyShown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRSurveySettings constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSurveySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRSurveySettings Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FirstLaunchDate = { "FirstLaunchDate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSurveySettings, FirstLaunchDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstLaunchDate_MetaData), NewProp_FirstLaunchDate_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LaunchCount = { "LaunchCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSurveySettings, LaunchCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchCount_MetaData), NewProp_LaunchCount_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSurveyShown = { "bSurveyShown", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRSurveySettings), &UHT_STATICS::NewProp_bSurveyShown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSurveyShown_MetaData), NewProp_bSurveyShown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FirstLaunchDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaunchCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSurveyShown,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRSurveySettings Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRSurveySettings,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSurveySettings;
UClass* Z_Construct_UClass_UOculusXRSurveySettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRSurveySettings;
		if (!Z_Registration_Info_UClass_UOculusXRSurveySettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRSurveySettings"),
				Z_Registration_Info_UClass_UOculusXRSurveySettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRSurveySettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRSurveySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSurveySettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSurveySettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSurveySettings);
UOculusXRSurveySettings::~UOculusXRSurveySettings() {}
// ********** End Class UOculusXRSurveySettings ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRSurveySettings_h__Script_OculusXREditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSurveySettings, TEXT("UOculusXRSurveySettings"), &Z_Registration_Info_UClass_UOculusXRSurveySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSurveySettings), 3851182236U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRSurveySettings_h__Script_OculusXREditor_7d5271373eb1bd045df82af4b84fcff390b407ca{
	TEXT("/Script/OculusXREditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
