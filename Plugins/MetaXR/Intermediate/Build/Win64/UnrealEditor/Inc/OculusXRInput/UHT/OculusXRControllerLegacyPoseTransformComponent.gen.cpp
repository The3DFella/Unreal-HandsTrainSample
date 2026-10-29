// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRControllerLegacyPoseTransformComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRControllerLegacyPoseTransformComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRInput(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent(ETypeConstructPhase);
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRControllerLegacyPoseTransformComponent **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
		{ "Comment", "/**\n * This class is deprecated, please use OculusXRLegacyPoseTransformComponent instead.\n */" },
		{ "DeprecationMessage", "Please use OculusXRLegacyPoseTransformComponent instead." },
		{ "DisplayName", "[Deprecated] OculusXR Controller Legacy Pose Transform Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OculusXRControllerLegacyPoseTransformComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRControllerLegacyPoseTransformComponent.h" },
		{ "ToolTip", "This class is deprecated, please use OculusXRLegacyPoseTransformComponent instead." },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRControllerLegacyPoseTransformComponent constinit property declarations 
// ********** End Class UOculusXRControllerLegacyPoseTransformComponent constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRControllerLegacyPoseTransformComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent;
UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRControllerLegacyPoseTransformComponent;
		if (!Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRControllerLegacyPoseTransformComponent"),
				Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRControllerLegacyPoseTransformComponent);
UOculusXRControllerLegacyPoseTransformComponent::~UOculusXRControllerLegacyPoseTransformComponent() {}
// ********** End Class UOculusXRControllerLegacyPoseTransformComponent ****************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h__Script_OculusXRInput_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent, TEXT("UOculusXRControllerLegacyPoseTransformComponent"), &Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRControllerLegacyPoseTransformComponent), 2198234437U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h__Script_OculusXRInput_e9d18901325cee0d9880e616a24753a8f069a548{
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
