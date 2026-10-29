// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRScene_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	OCULUSXRSCENE_API UFunction* Z_Construct_UDelegateFunction_OculusXRScene_OculusXRScene_BoundaryVisibilityChanged__DelegateSignature(ETypeConstructPhase);
	OCULUSXRSCENE_API UFunction* Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature(ETypeConstructPhase);
	OCULUSXRSCENE_API UFunction* Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OculusXRScene;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_OculusXRScene.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OculusXRScene_OculusXRScene_BoundaryVisibilityChanged__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/OculusXRScene",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xEF03DF56,
			0x120AC097,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OculusXRScene.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_OculusXRScene.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OculusXRScene(Z_Construct_UPackage__Script_OculusXRScene, TEXT("/Script/OculusXRScene"), Z_Registration_Info_UPackage__Script_OculusXRScene, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEF03DF56, 0x120AC097));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
