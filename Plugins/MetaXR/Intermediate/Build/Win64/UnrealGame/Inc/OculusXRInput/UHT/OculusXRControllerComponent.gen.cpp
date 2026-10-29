// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRControllerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRControllerComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase);
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRSide(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerComponent(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRControllerComponent *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRControllerComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "OculusXRControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The skeleton that will be loaded */" },
		{ "ModuleRelativePath", "Public/OculusXRControllerComponent.h" },
		{ "ToolTip", "The skeleton that will be loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderWhenUsingControllerDrivenHands_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Should this controller be rendered when using controller driven hand poses */" },
		{ "ModuleRelativePath", "Public/OculusXRControllerComponent.h" },
		{ "ToolTip", "Should this controller be rendered when using controller driven hand poses" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRControllerComponent constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
	static void NewProp_RenderWhenUsingControllerDrivenHands_SetBit(void* Obj)
	{
		((UOculusXRControllerComponent*)Obj)->RenderWhenUsingControllerDrivenHands = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderWhenUsingControllerDrivenHands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRControllerComponent constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRControllerComponent Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRControllerComponent, SkeletonType), Z_Construct_UEnum_OculusXRInput_EOculusXRSide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonType_MetaData), NewProp_SkeletonType_MetaData) }; // 5e51ce2d5ed189774322797d970bf872c3803d22
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_RenderWhenUsingControllerDrivenHands = { "RenderWhenUsingControllerDrivenHands", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRControllerComponent), &UHT_STATICS::NewProp_RenderWhenUsingControllerDrivenHands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderWhenUsingControllerDrivenHands_MetaData), NewProp_RenderWhenUsingControllerDrivenHands_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderWhenUsingControllerDrivenHands,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRControllerComponent Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UStaticMeshComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRControllerComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00A010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRControllerComponent;
UClass* Z_Construct_UClass_UOculusXRControllerComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRControllerComponent;
		if (!Z_Registration_Info_UClass_UOculusXRControllerComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRControllerComponent"),
				Z_Registration_Info_UClass_UOculusXRControllerComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRControllerComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRControllerComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRControllerComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRControllerComponent);
UOculusXRControllerComponent::~UOculusXRControllerComponent() {}
// ********** End Class UOculusXRControllerComponent ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRControllerComponent_h__Script_OculusXRInput_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRControllerComponent, TEXT("UOculusXRControllerComponent"), &Z_Registration_Info_UClass_UOculusXRControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRControllerComponent), 3565821858U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRControllerComponent_h__Script_OculusXRInput_88e26ca923c9e4967ba3862490df53f53436392c{
	TEXT("/Script/OculusXRInput"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
