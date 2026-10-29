// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXREditorSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXREditorSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase);
OCULUSXREDITOR_API UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXREditorSettings(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXREditorSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRPlatform *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics
template<> OCULUSXREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRPlatform>()
{
	return Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusXRPlatform::Length" },
		{ "Mobile.DisplayName", "Mobile" },
		{ "Mobile.Name", "EOculusXRPlatform::Mobile" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
		{ "PC.DisplayName", "PC" },
		{ "PC.Name", "EOculusXRPlatform::PC" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRPlatform::PC", (int64)EOculusXRPlatform::PC },
		{ "EOculusXRPlatform::Mobile", (int64)EOculusXRPlatform::Mobile },
		{ "EOculusXRPlatform::Length", (int64)EOculusXRPlatform::Length },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
	nullptr,
	"EOculusXRPlatform",
	"EOculusXRPlatform",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRPlatform;
UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRPlatform.OuterSingleton)
		{
			ZRIE_EOculusXRPlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase::Outer), TEXT("EOculusXRPlatform"));
		}
		return ZRIE_EOculusXRPlatform.OuterSingleton;
	}
	if (!ZRIE_EOculusXRPlatform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRPlatform.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRPlatform.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRPlatform ***********************************************************

// ********** Begin Class UOculusXREditorSettings **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXREditorSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OculusXREditorSettings.h" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerfToolIgnoreList_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerfToolTargetPlatform_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddMenuOption_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXREditorSettings constinit property declarations ******************
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PerfToolIgnoreList_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PerfToolIgnoreList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerfToolIgnoreList;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PerfToolTargetPlatform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PerfToolTargetPlatform;
	static void NewProp_bAddMenuOption_SetBit(void* Obj)
	{
		((UOculusXREditorSettings*)Obj)->bAddMenuOption = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddMenuOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXREditorSettings constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXREditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXREditorSettings Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_PerfToolIgnoreList_ValueProp = { "PerfToolIgnoreList", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PerfToolIgnoreList_Key_KeyProp = { "PerfToolIgnoreList_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_PerfToolIgnoreList = { "PerfToolIgnoreList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREditorSettings, PerfToolIgnoreList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerfToolIgnoreList_MetaData), NewProp_PerfToolIgnoreList_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PerfToolTargetPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PerfToolTargetPlatform = { "PerfToolTargetPlatform", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREditorSettings, PerfToolTargetPlatform), Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerfToolTargetPlatform_MetaData), NewProp_PerfToolTargetPlatform_MetaData) }; // c7786815652d2bf2389a4184e9ac3e26d2f46bd0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAddMenuOption = { "bAddMenuOption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXREditorSettings), &UHT_STATICS::NewProp_bAddMenuOption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddMenuOption_MetaData), NewProp_bAddMenuOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerfToolIgnoreList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerfToolIgnoreList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerfToolIgnoreList,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerfToolTargetPlatform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerfToolTargetPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAddMenuOption,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXREditorSettings Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXREditorSettings,
	"Editor",
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXREditorSettings;
UClass* Z_Construct_UClass_UOculusXREditorSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXREditorSettings;
		if (!Z_Registration_Info_UClass_UOculusXREditorSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXREditorSettings"),
				Z_Registration_Info_UClass_UOculusXREditorSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXREditorSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXREditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXREditorSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXREditorSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXREditorSettings);
UOculusXREditorSettings::~UOculusXREditorSettings() {}
// ********** End Class UOculusXREditorSettings ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h__Script_OculusXREditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform, TEXT("EOculusXRPlatform"), &ZRIE_EOculusXRPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3346556949U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXREditorSettings, TEXT("UOculusXREditorSettings"), &Z_Registration_Info_UClass_UOculusXREditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXREditorSettings), 211771273U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h__Script_OculusXREditor_28a5f3a45866b23f66f43719ce0df6a58aceaefa{
	TEXT("/Script/OculusXREditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
