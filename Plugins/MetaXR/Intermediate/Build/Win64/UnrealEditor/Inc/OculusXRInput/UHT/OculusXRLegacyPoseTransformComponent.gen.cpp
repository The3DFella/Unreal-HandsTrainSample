// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRLegacyPoseTransformComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRLegacyPoseTransformComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRLegacyPoseTransformComponent ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
		{ "Comment", "/**\n * Handles conversion of components created for the legacy Oculus controller pose into\n * the OpenXR Grip pose. Attach components that need to be transformed under this component.\n */" },
		{ "DisplayName", "OculusXR Legacy Pose Transform Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OculusXRLegacyPoseTransformComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRLegacyPoseTransformComponent.h" },
		{ "ToolTip", "Handles conversion of components created for the legacy Oculus controller pose into\nthe OpenXR Grip pose. Attach components that need to be transformed under this component." },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRLegacyPoseTransformComponent constinit property declarations ****
// ********** End Class UOculusXRLegacyPoseTransformComponent constinit property declarations ******
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRLegacyPoseTransformComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent;
UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRLegacyPoseTransformComponent;
		if (!Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRLegacyPoseTransformComponent"),
				Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRLegacyPoseTransformComponent);
UOculusXRLegacyPoseTransformComponent::~UOculusXRLegacyPoseTransformComponent() {}
// ********** End Class UOculusXRLegacyPoseTransformComponent **************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h__Script_OculusXRInput_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent, TEXT("UOculusXRLegacyPoseTransformComponent"), &Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRLegacyPoseTransformComponent), 4051217759U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h__Script_OculusXRInput_13a5a1d7fde23dc82cf13d4e4dba4f15cf0af802{
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
