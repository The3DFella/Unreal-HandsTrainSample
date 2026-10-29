// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUKPassthroughCameraAccessFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUKPassthroughCameraAccessFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKitPcaEditor(ETypeConstructPhase);
MRUTILITYKITPCAEDITOR_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory(ETypeConstructPhase);
MRUTILITYKITPCAEDITOR_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory(ETypeConstructPhase);
MRUTILITYKITPCAEDITOR_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory(ETypeConstructPhase);
MRUTILITYKITPCAEDITOR_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMRUKPassthroughCameraAccessFactory **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MRUKPassthroughCameraAccessFactory.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccessFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKPassthroughCameraAccessFactory constinit property declarations ******
// ********** End Class UMRUKPassthroughCameraAccessFactory constinit property declarations ********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccessFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKitPcaEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory;
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKPassthroughCameraAccessFactory;
		if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKPassthroughCameraAccessFactory"),
				Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKPassthroughCameraAccessFactory);
UMRUKPassthroughCameraAccessFactory::~UMRUKPassthroughCameraAccessFactory() {}
// ********** End Class UMRUKPassthroughCameraAccessFactory ****************************************

// ********** Begin Class UMRUKPassthroughCameraAccessTextureFactory *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MRUKPassthroughCameraAccessFactory.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccessFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRUKPassthroughCameraAccessTextureFactory constinit property declarations 
// ********** End Class UMRUKPassthroughCameraAccessTextureFactory constinit property declarations *
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccessTextureFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKitPcaEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory;
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMRUKPassthroughCameraAccessTextureFactory;
		if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKPassthroughCameraAccessTextureFactory"),
				Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRUKPassthroughCameraAccessTextureFactory);
UMRUKPassthroughCameraAccessTextureFactory::~UMRUKPassthroughCameraAccessTextureFactory() {}
// ********** End Class UMRUKPassthroughCameraAccessTextureFactory *********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKitPcaEditor_Public_MRUKPassthroughCameraAccessFactory_h__Script_MRUtilityKitPcaEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory, TEXT("UMRUKPassthroughCameraAccessFactory"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccessFactory), 3822134051U) },
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory, TEXT("UMRUKPassthroughCameraAccessTextureFactory"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccessTextureFactory), 3963747100U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKitPcaEditor_Public_MRUKPassthroughCameraAccessFactory_h__Script_MRUtilityKitPcaEditor_3f2142eed036be568c73769834b2f4c5ef850e79{
	TEXT("/Script/MRUtilityKitPcaEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
