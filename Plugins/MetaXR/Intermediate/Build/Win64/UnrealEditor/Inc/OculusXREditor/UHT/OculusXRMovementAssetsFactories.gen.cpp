// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovementAssetsFactories.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRMovementAssetsFactories() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXREditor(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory(ETypeConstructPhase);
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRMetahumanRetargetAssetFactory ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "OculusXRMovementAssetsFactories.h" },
		{ "ModuleRelativePath", "Private/OculusXRMovementAssetsFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRMetahumanRetargetAssetFactory constinit property declarations ***
// ********** End Class UOculusXRMetahumanRetargetAssetFactory constinit property declarations *****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMetahumanRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory,
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
	0x000820A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory;
UClass* Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRMetahumanRetargetAssetFactory;
		if (!Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRMetahumanRetargetAssetFactory"),
				Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRMetahumanRetargetAssetFactory);
UOculusXRMetahumanRetargetAssetFactory::~UOculusXRMetahumanRetargetAssetFactory() {}
// ********** End Class UOculusXRMetahumanRetargetAssetFactory *************************************

// ********** Begin Class UOculusXRMetahumanFaceRetargetAssetFactory *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "OculusXRMovementAssetsFactories.h" },
		{ "ModuleRelativePath", "Private/OculusXRMovementAssetsFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRMetahumanFaceRetargetAssetFactory constinit property declarations 
// ********** End Class UOculusXRMetahumanFaceRetargetAssetFactory constinit property declarations *
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMetahumanFaceRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory,
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
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory;
UClass* Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRMetahumanFaceRetargetAssetFactory;
		if (!Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRMetahumanFaceRetargetAssetFactory"),
				Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRMetahumanFaceRetargetAssetFactory);
UOculusXRMetahumanFaceRetargetAssetFactory::~UOculusXRMetahumanFaceRetargetAssetFactory() {}
// ********** End Class UOculusXRMetahumanFaceRetargetAssetFactory *********************************

// ********** Begin Class UOculusXRFaceVisemesRetargetAssetFactory *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "OculusXRMovementAssetsFactories.h" },
		{ "ModuleRelativePath", "Private/OculusXRMovementAssetsFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRFaceVisemesRetargetAssetFactory constinit property declarations *
// ********** End Class UOculusXRFaceVisemesRetargetAssetFactory constinit property declarations ***
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRFaceVisemesRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory,
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
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory;
UClass* Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRFaceVisemesRetargetAssetFactory;
		if (!Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRFaceVisemesRetargetAssetFactory"),
				Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRFaceVisemesRetargetAssetFactory);
UOculusXRFaceVisemesRetargetAssetFactory::~UOculusXRFaceVisemesRetargetAssetFactory() {}
// ********** End Class UOculusXRFaceVisemesRetargetAssetFactory ***********************************

// ********** Begin Class UOculusXRMetahumanBodyRetargetAssetFactory *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "OculusXRMovementAssetsFactories.h" },
		{ "ModuleRelativePath", "Private/OculusXRMovementAssetsFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRMetahumanBodyRetargetAssetFactory constinit property declarations 
// ********** End Class UOculusXRMetahumanBodyRetargetAssetFactory constinit property declarations *
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMetahumanBodyRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory,
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
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory;
UClass* Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRMetahumanBodyRetargetAssetFactory;
		if (!Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRMetahumanBodyRetargetAssetFactory"),
				Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRMetahumanBodyRetargetAssetFactory);
UOculusXRMetahumanBodyRetargetAssetFactory::~UOculusXRMetahumanBodyRetargetAssetFactory() {}
// ********** End Class UOculusXRMetahumanBodyRetargetAssetFactory *********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Private_OculusXRMovementAssetsFactories_h__Script_OculusXREditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory, TEXT("UOculusXRMetahumanRetargetAssetFactory"), &Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMetahumanRetargetAssetFactory), 2948253316U) },
		{ Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory, TEXT("UOculusXRMetahumanFaceRetargetAssetFactory"), &Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMetahumanFaceRetargetAssetFactory), 1719730118U) },
		{ Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory, TEXT("UOculusXRFaceVisemesRetargetAssetFactory"), &Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRFaceVisemesRetargetAssetFactory), 1601713404U) },
		{ Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory, TEXT("UOculusXRMetahumanBodyRetargetAssetFactory"), &Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMetahumanBodyRetargetAssetFactory), 581879333U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Private_OculusXRMovementAssetsFactories_h__Script_OculusXREditor_5784156777b2aae4f138a8b0a022242919b2cf13{
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
