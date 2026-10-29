// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocationSession.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRColocationSession() {}

// ********** Begin Cross Module References ********************************************************
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRColocation(ETypeConstructPhase);
OCULUSXRCOLOCATION_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRColocationSession(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FOculusXRColocationSession ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOculusXRColocationSession>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOculusXRColocationSession); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uuid_MetaData[] = {
		{ "Category", "OculusXR|Colocation" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "OculusXR|Colocation" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOculusXRColocationSession constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uuid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Metadata_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOculusXRColocationSession constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRColocationSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOculusXRColocationSession Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Uuid = { "Uuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRColocationSession, Uuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uuid_MetaData), NewProp_Uuid_MetaData) }; // d7395a6d2338d4853510292d7685ec0e9506b1f6
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Metadata_Inner = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRColocationSession, Metadata), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Uuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Metadata_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Metadata,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOculusXRColocationSession Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRColocation,
	nullptr,
	&NewStructOps,
	"OculusXRColocationSession",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOculusXRColocationSession>(),
	alignof(FOculusXRColocationSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRColocationSession;
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRColocationSession(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRColocationSession, (UObject*)Z_Construct_UPackage__Script_OculusXRColocation(ETypeConstructPhase::Outer), TEXT("OculusXRColocationSession"));
		}
		return Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOculusXRColocationSession ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h__Script_OculusXRColocation_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOculusXRColocationSession, Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewStructOps, TEXT("OculusXRColocationSession"),&Z_Registration_Info_UScriptStruct_FOculusXRColocationSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRColocationSession), 3768806745U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h__Script_OculusXRColocation_6b9b3e27d12b30a0accfd8b3def96f4c2e37bec4{
	TEXT("/Script/OculusXRColocation"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
