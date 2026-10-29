// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRPassthrough_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	OCULUSXRPASSTHROUGH_API UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_AnyLayerResumed__DelegateSignature(ETypeConstructPhase);
	OCULUSXRPASSTHROUGH_API UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LayerResumed_Single__DelegateSignature(ETypeConstructPhase);
	OCULUSXRPASSTHROUGH_API UFunction* Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LightingEstimateChanged__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OculusXRPassthrough;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OculusXRPassthrough(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_OculusXRPassthrough.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_AnyLayerResumed__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LayerResumed_Single__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OculusXRPassthrough_OculusXRPassthrough_LightingEstimateChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/OculusXRPassthrough",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x8B25F3DB,
			0xD28A0C94,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OculusXRPassthrough.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_OculusXRPassthrough.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OculusXRPassthrough(Z_Construct_UPackage__Script_OculusXRPassthrough, TEXT("/Script/OculusXRPassthrough"), Z_Registration_Info_UPackage__Script_OculusXRPassthrough, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8B25F3DB, 0xD28A0C94));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
