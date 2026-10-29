// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRPlatformToolSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRPlatformToolSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase);
OCULUSXREDITOR_API UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType(ETypeConstructPhase);
OCULUSXREDITOR_API UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation(ETypeConstructPhase);
OCULUSXREDITOR_API UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget(ETypeConstructPhase);
OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfig(ETypeConstructPhase);
OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfigArray(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRPlatformToolSettings(ETypeConstructPhase);
OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRedistPackage(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRPlatformToolSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRPlatformTarget ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics
template<> OCULUSXREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRPlatformTarget>()
{
	return Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusXRPlatformTarget::Length" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "EOculusXRPlatformTarget::Quest" },
		{ "Rift.DisplayName", "Rift" },
		{ "Rift.Name", "EOculusXRPlatformTarget::Rift" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRPlatformTarget::Rift", (int64)EOculusXRPlatformTarget::Rift },
		{ "EOculusXRPlatformTarget::Quest", (int64)EOculusXRPlatformTarget::Quest },
		{ "EOculusXRPlatformTarget::Length", (int64)EOculusXRPlatformTarget::Length },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
	nullptr,
	"EOculusXRPlatformTarget",
	"EOculusXRPlatformTarget",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRPlatformTarget;
UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRPlatformTarget.OuterSingleton)
		{
			ZRIE_EOculusXRPlatformTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase::Outer), TEXT("EOculusXRPlatformTarget"));
		}
		return ZRIE_EOculusXRPlatformTarget.OuterSingleton;
	}
	if (!ZRIE_EOculusXRPlatformTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRPlatformTarget.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRPlatformTarget.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRPlatformTarget *****************************************************

// ********** Begin Enum EOculusXRGamepadEmulation *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics
template<> OCULUSXREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRGamepadEmulation>()
{
	return Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "LeftDPad.DisplayName", "Left D Pad" },
		{ "LeftDPad.Name", "EOculusXRGamepadEmulation::LeftDPad" },
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusXRGamepadEmulation::Length" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EOculusXRGamepadEmulation::Off" },
		{ "RightDPad.DisplayName", "Right D Pad" },
		{ "RightDPad.Name", "EOculusXRGamepadEmulation::RightDPad" },
		{ "Twinstick.DisplayName", "Twinstick" },
		{ "Twinstick.Name", "EOculusXRGamepadEmulation::Twinstick" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRGamepadEmulation::Off", (int64)EOculusXRGamepadEmulation::Off },
		{ "EOculusXRGamepadEmulation::Twinstick", (int64)EOculusXRGamepadEmulation::Twinstick },
		{ "EOculusXRGamepadEmulation::RightDPad", (int64)EOculusXRGamepadEmulation::RightDPad },
		{ "EOculusXRGamepadEmulation::LeftDPad", (int64)EOculusXRGamepadEmulation::LeftDPad },
		{ "EOculusXRGamepadEmulation::Length", (int64)EOculusXRGamepadEmulation::Length },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
	nullptr,
	"EOculusXRGamepadEmulation",
	"EOculusXRGamepadEmulation",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRGamepadEmulation;
UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRGamepadEmulation.OuterSingleton)
		{
			ZRIE_EOculusXRGamepadEmulation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase::Outer), TEXT("EOculusXRGamepadEmulation"));
		}
		return ZRIE_EOculusXRGamepadEmulation.OuterSingleton;
	}
	if (!ZRIE_EOculusXRGamepadEmulation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRGamepadEmulation.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRGamepadEmulation.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRGamepadEmulation ***************************************************

// ********** Begin Enum EOculusXRAssetType ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics
template<> OCULUSXREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRAssetType>()
{
	return Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EOculusXRAssetType::Default" },
		{ "Language_Pack.DisplayName", "Language Pack" },
		{ "Language_Pack.Name", "EOculusXRAssetType::Language_Pack" },
		{ "Length.DisplayName", "Invlaid" },
		{ "Length.Name", "EOculusXRAssetType::Length" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
		{ "Store.DisplayName", "Store" },
		{ "Store.Name", "EOculusXRAssetType::Store" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRAssetType::Default", (int64)EOculusXRAssetType::Default },
		{ "EOculusXRAssetType::Store", (int64)EOculusXRAssetType::Store },
		{ "EOculusXRAssetType::Language_Pack", (int64)EOculusXRAssetType::Language_Pack },
		{ "EOculusXRAssetType::Length", (int64)EOculusXRAssetType::Length },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
	nullptr,
	"EOculusXRAssetType",
	"EOculusXRAssetType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRAssetType;
UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRAssetType.OuterSingleton)
		{
			ZRIE_EOculusXRAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase::Outer), TEXT("EOculusXRAssetType"));
		}
		return ZRIE_EOculusXRAssetType.OuterSingleton;
	}
	if (!ZRIE_EOculusXRAssetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRAssetType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRAssetType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRAssetType **********************************************************

// ********** Begin ScriptStruct FOculusXRRedistPackage ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRRedistPackage>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRRedistPackage); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Included_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRRedistPackage constinit property declarations ************
	static void NewProp_Included_SetBit(void* Obj)
	{
		((FOculusXRRedistPackage*)Obj)->Included = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Included;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRRedistPackage constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRRedistPackage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRRedistPackage Property Definitions ***********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Included = { "Included", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRRedistPackage), &UHT_STATICS::NewProp_Included_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Included_MetaData), NewProp_Included_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRedistPackage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRedistPackage, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Included,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRRedistPackage Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
	nullptr,
	&NewStructOps,
	"OculusXRRedistPackage",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRRedistPackage>(),
	alignof(FOculusXRRedistPackage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRRedistPackage;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRedistPackage(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRRedistPackage.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRRedistPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRRedistPackage, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase::Outer), TEXT("OculusXRRedistPackage"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRRedistPackage.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRRedistPackage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRRedistPackage.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRRedistPackage.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRRedistPackage **********************************************

// ********** Begin ScriptStruct FOculusXRAssetConfig **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRAssetConfig>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRAssetConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Required_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRAssetConfig constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
	static void NewProp_Required_SetBit(void* Obj)
	{
		((FOculusXRAssetConfig*)Obj)->Required = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Required;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sku;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRAssetConfig constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAssetConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRAssetConfig Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAssetConfig, AssetType), Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) }; // e7b3e18f941d4243d68942e836c3dfa864c42f63
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Required = { "Required", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRAssetConfig), &UHT_STATICS::NewProp_Required_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Required_MetaData), NewProp_Required_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAssetConfig, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAssetConfig, Sku), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sku_MetaData), NewProp_Sku_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Required,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Sku,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRAssetConfig Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
	nullptr,
	&NewStructOps,
	"OculusXRAssetConfig",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRAssetConfig>(),
	alignof(FOculusXRAssetConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAssetConfig;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRAssetConfig.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRAssetConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAssetConfig, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase::Outer), TEXT("OculusXRAssetConfig"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRAssetConfig.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAssetConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAssetConfig.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRAssetConfig.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRAssetConfig ************************************************

// ********** Begin ScriptStruct FOculusXRAssetConfigArray *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRAssetConfigArray>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRAssetConfigArray); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigArray_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRAssetConfigArray constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConfigArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRAssetConfigArray constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAssetConfigArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRAssetConfigArray Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ConfigArray_Inner = { "ConfigArray", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRAssetConfig, METADATA_PARAMS(0, nullptr) }; // cf3cf6a683d98c2c3eff5943e12466150740a913
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ConfigArray = { "ConfigArray", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAssetConfigArray, ConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigArray_MetaData), NewProp_ConfigArray_MetaData) }; // cf3cf6a683d98c2c3eff5943e12466150740a913
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConfigArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConfigArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRAssetConfigArray Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
	nullptr,
	&NewStructOps,
	"OculusXRAssetConfigArray",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRAssetConfigArray>(),
	alignof(FOculusXRAssetConfigArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAssetConfigArray;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfigArray(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRAssetConfigArray.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRAssetConfigArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAssetConfigArray, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase::Outer), TEXT("OculusXRAssetConfigArray"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRAssetConfigArray.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAssetConfigArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAssetConfigArray.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRAssetConfigArray.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRAssetConfigArray *******************************************

// ********** Begin Class UOculusXRPlatformToolSettings ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OculusXRPlatformToolSettings.h" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftBuildDirectory_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftBuildVersion_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftLaunchParams_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftFireWallException_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusRift2DLaunchPath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusRift2DLaunchParams_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusRedistPackages_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UploadDebugSymbols_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSymbolsOnly_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildID_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusTargetPlatform_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusApplicationID_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusApplicationToken_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusReleaseChannel_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusReleaseNote_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusLaunchFilePath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftGamepadEmulation_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusLanguagePacksPath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusExpansionFilesPath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusSymbolDirPath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusAssetConfigs_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRPlatformToolSettings constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftBuildDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftBuildVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftLaunchParams;
	static void NewProp_OculusRiftFireWallException_SetBit(void* Obj)
	{
		((UOculusXRPlatformToolSettings*)Obj)->OculusRiftFireWallException = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OculusRiftFireWallException;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRift2DLaunchPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRift2DLaunchParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OculusRedistPackages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusRedistPackages;
	static void NewProp_UploadDebugSymbols_SetBit(void* Obj)
	{
		((UOculusXRPlatformToolSettings*)Obj)->UploadDebugSymbols = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UploadDebugSymbols;
	static void NewProp_DebugSymbolsOnly_SetBit(void* Obj)
	{
		((UOculusXRPlatformToolSettings*)Obj)->DebugSymbolsOnly = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugSymbolsOnly;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BuildID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OculusTargetPlatform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OculusTargetPlatform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusApplicationID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusApplicationID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusApplicationToken_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusApplicationToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusReleaseChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusReleaseChannel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusReleaseNote_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusReleaseNote;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusLaunchFilePath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusLaunchFilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OculusRiftGamepadEmulation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OculusRiftGamepadEmulation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusLanguagePacksPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusLanguagePacksPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusExpansionFilesPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusExpansionFilesPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OculusSymbolDirPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusSymbolDirPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OculusAssetConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusAssetConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRPlatformToolSettings constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPlatformToolSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRPlatformToolSettings Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusRiftBuildDirectory = { "OculusRiftBuildDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRiftBuildDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusRiftBuildDirectory_MetaData), NewProp_OculusRiftBuildDirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusRiftBuildVersion = { "OculusRiftBuildVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRiftBuildVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusRiftBuildVersion_MetaData), NewProp_OculusRiftBuildVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusRiftLaunchParams = { "OculusRiftLaunchParams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRiftLaunchParams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusRiftLaunchParams_MetaData), NewProp_OculusRiftLaunchParams_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_OculusRiftFireWallException = { "OculusRiftFireWallException", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPlatformToolSettings), &UHT_STATICS::NewProp_OculusRiftFireWallException_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusRiftFireWallException_MetaData), NewProp_OculusRiftFireWallException_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusRift2DLaunchPath = { "OculusRift2DLaunchPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRift2DLaunchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusRift2DLaunchPath_MetaData), NewProp_OculusRift2DLaunchPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusRift2DLaunchParams = { "OculusRift2DLaunchParams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRift2DLaunchParams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusRift2DLaunchParams_MetaData), NewProp_OculusRift2DLaunchParams_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OculusRedistPackages_Inner = { "OculusRedistPackages", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRRedistPackage, METADATA_PARAMS(0, nullptr) }; // 820684d0b124218bfa2dd157370eddca649561f9
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusRedistPackages = { "OculusRedistPackages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRedistPackages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusRedistPackages_MetaData), NewProp_OculusRedistPackages_MetaData) }; // 820684d0b124218bfa2dd157370eddca649561f9
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_UploadDebugSymbols = { "UploadDebugSymbols", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPlatformToolSettings), &UHT_STATICS::NewProp_UploadDebugSymbols_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UploadDebugSymbols_MetaData), NewProp_UploadDebugSymbols_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DebugSymbolsOnly = { "DebugSymbolsOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPlatformToolSettings), &UHT_STATICS::NewProp_DebugSymbolsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSymbolsOnly_MetaData), NewProp_DebugSymbolsOnly_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BuildID = { "BuildID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, BuildID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildID_MetaData), NewProp_BuildID_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OculusTargetPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OculusTargetPlatform = { "OculusTargetPlatform", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusTargetPlatform), Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusTargetPlatform_MetaData), NewProp_OculusTargetPlatform_MetaData) }; // 00cb58dd51c4b2b760ff07180ca71d9cce99da07
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusApplicationID_Inner = { "OculusApplicationID", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusApplicationID = { "OculusApplicationID", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusApplicationID), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusApplicationID_MetaData), NewProp_OculusApplicationID_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusApplicationToken_Inner = { "OculusApplicationToken", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusApplicationToken = { "OculusApplicationToken", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusApplicationToken), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusApplicationToken_MetaData), NewProp_OculusApplicationToken_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusReleaseChannel_Inner = { "OculusReleaseChannel", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusReleaseChannel = { "OculusReleaseChannel", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusReleaseChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusReleaseChannel_MetaData), NewProp_OculusReleaseChannel_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusReleaseNote_Inner = { "OculusReleaseNote", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusReleaseNote = { "OculusReleaseNote", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusReleaseNote), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusReleaseNote_MetaData), NewProp_OculusReleaseNote_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusLaunchFilePath_Inner = { "OculusLaunchFilePath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusLaunchFilePath = { "OculusLaunchFilePath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusLaunchFilePath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusLaunchFilePath_MetaData), NewProp_OculusLaunchFilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OculusRiftGamepadEmulation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OculusRiftGamepadEmulation = { "OculusRiftGamepadEmulation", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRiftGamepadEmulation), Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusRiftGamepadEmulation_MetaData), NewProp_OculusRiftGamepadEmulation_MetaData) }; // 6ee707f01e1522010565d9894dc3700931029df1
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusLanguagePacksPath_Inner = { "OculusLanguagePacksPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusLanguagePacksPath = { "OculusLanguagePacksPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusLanguagePacksPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusLanguagePacksPath_MetaData), NewProp_OculusLanguagePacksPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusExpansionFilesPath_Inner = { "OculusExpansionFilesPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusExpansionFilesPath = { "OculusExpansionFilesPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusExpansionFilesPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusExpansionFilesPath_MetaData), NewProp_OculusExpansionFilesPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OculusSymbolDirPath_Inner = { "OculusSymbolDirPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusSymbolDirPath = { "OculusSymbolDirPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusSymbolDirPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusSymbolDirPath_MetaData), NewProp_OculusSymbolDirPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OculusAssetConfigs_Inner = { "OculusAssetConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRAssetConfigArray, METADATA_PARAMS(0, nullptr) }; // c229cb1ed5ba1fc15958b174a609e2294531f8f0
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OculusAssetConfigs = { "OculusAssetConfigs", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusAssetConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusAssetConfigs_MetaData), NewProp_OculusAssetConfigs_MetaData) }; // c229cb1ed5ba1fc15958b174a609e2294531f8f0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRiftBuildDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRiftBuildVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRiftLaunchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRiftFireWallException,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRift2DLaunchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRift2DLaunchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRedistPackages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRedistPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UploadDebugSymbols,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugSymbolsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusTargetPlatform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusTargetPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusApplicationID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusApplicationID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusApplicationToken_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusApplicationToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusReleaseChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusReleaseChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusReleaseNote_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusReleaseNote,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusLaunchFilePath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusLaunchFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRiftGamepadEmulation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusRiftGamepadEmulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusLanguagePacksPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusLanguagePacksPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusExpansionFilesPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusExpansionFilesPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusSymbolDirPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusSymbolDirPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusAssetConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusAssetConfigs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRPlatformToolSettings Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRPlatformToolSettings,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPlatformToolSettings;
UClass* Z_Construct_UClass_UOculusXRPlatformToolSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRPlatformToolSettings;
		if (!Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRPlatformToolSettings"),
				Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRPlatformToolSettings);
UOculusXRPlatformToolSettings::~UOculusXRPlatformToolSettings() {}
// ********** End Class UOculusXRPlatformToolSettings **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h__Script_OculusXREditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget, TEXT("EOculusXRPlatformTarget"), &ZRIE_EOculusXRPlatformTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 13326557U) },
		{ Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation, TEXT("EOculusXRGamepadEmulation"), &ZRIE_EOculusXRGamepadEmulation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1860634608U) },
		{ Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType, TEXT("EOculusXRAssetType"), &ZRIE_EOculusXRAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3887325583U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRRedistPackage, Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewStructOps, TEXT("OculusXRRedistPackage"),&Z_Registration_Info_UScriptStruct_FOculusXRRedistPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRRedistPackage), 2181465296U) },
		{ Z_Construct_UScriptStruct_FOculusXRAssetConfig, Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewStructOps, TEXT("OculusXRAssetConfig"),&Z_Registration_Info_UScriptStruct_FOculusXRAssetConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAssetConfig), 3476879014U) },
		{ Z_Construct_UScriptStruct_FOculusXRAssetConfigArray, Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewStructOps, TEXT("OculusXRAssetConfigArray"),&Z_Registration_Info_UScriptStruct_FOculusXRAssetConfigArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAssetConfigArray), 3257518878U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPlatformToolSettings, TEXT("UOculusXRPlatformToolSettings"), &Z_Registration_Info_UClass_UOculusXRPlatformToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPlatformToolSettings), 3515115472U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h__Script_OculusXREditor_73935575427707d142419888a570a75192acdbbb{
	TEXT("/Script/OculusXREditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
