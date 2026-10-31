// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRHMD_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	OCULUSXRHMD_API UFunction* Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature(ETypeConstructPhase);
	OCULUSXRHMD_API UFunction* Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature(ETypeConstructPhase);
	OCULUSXRHMD_API UFunction* Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusEyeTrackingStateChangedEventDelegate__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OculusXRHMD;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_OculusXRHMD.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OculusXRHMD_OculusXRPassthrough_LayerResumed__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_UOculusXREventComponent_OculusEyeTrackingStateChangedEventDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/OculusXRHMD",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x562D17F0,
			0x0F4384AC,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OculusXRHMD.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_OculusXRHMD.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OculusXRHMD(Z_Construct_UPackage__Script_OculusXRHMD, TEXT("/Script/OculusXRHMD"), Z_Registration_Info_UPackage__Script_OculusXRHMD, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x562D17F0, 0x0F4384AC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
