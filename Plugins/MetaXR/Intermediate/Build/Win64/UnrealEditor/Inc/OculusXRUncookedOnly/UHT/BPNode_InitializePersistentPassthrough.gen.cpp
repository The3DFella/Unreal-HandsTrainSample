// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BPNode_InitializePersistentPassthrough.h"
#include "OculusXRPersistentPassthroughInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBPNode_InitializePersistentPassthrough() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction(ETypeConstructPhase);
OCULUSXRPASSTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRUncookedOnly(ETypeConstructPhase);
OCULUSXRUNCOOKEDONLY_API UClass* Z_Construct_UClass_UBPNode_InitializePersistentPassthrough(ETypeConstructPhase);
OCULUSXRUNCOOKEDONLY_API UClass* Z_Construct_UClass_UBPNode_InitializePersistentPassthrough(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UBPNode_InitializePersistentPassthrough **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBPNode_InitializePersistentPassthrough_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BPNode_InitializePersistentPassthrough.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BPNode_InitializePersistentPassthrough.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputPin_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BPNode_InitializePersistentPassthrough.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerParameters_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "!bShowInputPin" },
		{ "ModuleRelativePath", "Private/BPNode_InitializePersistentPassthrough.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBPNode_InitializePersistentPassthrough constinit property declarations **
	static void NewProp_bShowInputPin_SetBit(void* Obj)
	{
		((UBPNode_InitializePersistentPassthrough*)Obj)->bShowInputPin = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInputPin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBPNode_InitializePersistentPassthrough constinit property declarations ****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPNode_InitializePersistentPassthrough>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBPNode_InitializePersistentPassthrough Property Definitions *************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowInputPin = { "bShowInputPin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPNode_InitializePersistentPassthrough), &UHT_STATICS::NewProp_bShowInputPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInputPin_MetaData), NewProp_bShowInputPin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LayerParameters = { "LayerParameters", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBPNode_InitializePersistentPassthrough, LayerParameters), Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerParameters_MetaData), NewProp_LayerParameters_MetaData) }; // b5649aea41103dd7e4fc54d1598dc2a247a61a3e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowInputPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerParameters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBPNode_InitializePersistentPassthrough Property Definitions ***************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UK2Node_CallFunction,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRUncookedOnly,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBPNode_InitializePersistentPassthrough,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UBPNode_InitializePersistentPassthrough;
UClass* Z_Construct_UClass_UBPNode_InitializePersistentPassthrough(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBPNode_InitializePersistentPassthrough;
		if (!Z_Registration_Info_UClass_UBPNode_InitializePersistentPassthrough.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BPNode_InitializePersistentPassthrough"),
				Z_Registration_Info_UClass_UBPNode_InitializePersistentPassthrough.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBPNode_InitializePersistentPassthrough.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBPNode_InitializePersistentPassthrough.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPNode_InitializePersistentPassthrough.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPNode_InitializePersistentPassthrough.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBPNode_InitializePersistentPassthrough);
UBPNode_InitializePersistentPassthrough::~UBPNode_InitializePersistentPassthrough() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBPNode_InitializePersistentPassthrough)
// ********** End Class UBPNode_InitializePersistentPassthrough ************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRUncookedOnly_Private_BPNode_InitializePersistentPassthrough_h__Script_OculusXRUncookedOnly_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPNode_InitializePersistentPassthrough, TEXT("UBPNode_InitializePersistentPassthrough"), &Z_Registration_Info_UClass_UBPNode_InitializePersistentPassthrough, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPNode_InitializePersistentPassthrough), 106625984U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRUncookedOnly_Private_BPNode_InitializePersistentPassthrough_h__Script_OculusXRUncookedOnly_e291c7097aac2f1094ed12b00911e1241bd3ae14{
	TEXT("/Script/OculusXRUncookedOnly"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
