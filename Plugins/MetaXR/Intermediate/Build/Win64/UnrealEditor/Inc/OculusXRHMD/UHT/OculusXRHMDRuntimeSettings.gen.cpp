// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRHMDRuntimeSettings.h"
#include "OculusXRHMDTypes.h"
#include "OculusXROSVersions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRHMDRuntimeSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRMPPoseRestoreType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EProcessorFavor(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType(ETypeConstructPhase);
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXROSVersion(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSplashDesc(ETypeConstructPhase);
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOculusXRSupportedDevices *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics
template<> OCULUSXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRSupportedDevices>()
{
	return Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
		{ "Quest2.Comment", "/** 0 was the deprecated Meta Quest */" },
		{ "Quest2.DisplayName", "Meta Quest 2" },
		{ "Quest2.Name", "EOculusXRSupportedDevices::Quest2" },
		{ "Quest2.ToolTip", "0 was the deprecated Meta Quest" },
		{ "Quest3.DisplayName", "Meta Quest 3" },
		{ "Quest3.Name", "EOculusXRSupportedDevices::Quest3" },
		{ "Quest3S.DisplayName", "Meta Quest 3S" },
		{ "Quest3S.Name", "EOculusXRSupportedDevices::Quest3S" },
		{ "QuestPro.DisplayName", "Meta Quest Pro" },
		{ "QuestPro.Name", "EOculusXRSupportedDevices::QuestPro" },
		{ "VRGlasses.DisplayName", "Meta VR Glasses" },
		{ "VRGlasses.Name", "EOculusXRSupportedDevices::VRGlasses" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSupportedDevices::Quest2", (int64)EOculusXRSupportedDevices::Quest2 },
		{ "EOculusXRSupportedDevices::QuestPro", (int64)EOculusXRSupportedDevices::QuestPro },
		{ "EOculusXRSupportedDevices::Quest3", (int64)EOculusXRSupportedDevices::Quest3 },
		{ "EOculusXRSupportedDevices::Quest3S", (int64)EOculusXRSupportedDevices::Quest3S },
		{ "EOculusXRSupportedDevices::VRGlasses", (int64)EOculusXRSupportedDevices::VRGlasses },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	"EOculusXRSupportedDevices",
	"EOculusXRSupportedDevices",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOculusXRSupportedDevices;
UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOculusXRSupportedDevices.OuterSingleton)
		{
			ZRIE_EOculusXRSupportedDevices.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase::Outer), TEXT("EOculusXRSupportedDevices"));
		}
		return ZRIE_EOculusXRSupportedDevices.OuterSingleton;
	}
	if (!ZRIE_EOculusXRSupportedDevices.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOculusXRSupportedDevices.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOculusXRSupportedDevices.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOculusXRSupportedDevices ***************************************************

// ********** Begin Class UOculusXRHMDRuntimeSettings **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements the settings for the OculusVR plugin.\n */" },
#endif
		{ "IncludePath", "OculusXRHMDRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the settings for the OculusVR plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemSplashBackground_MetaData[] = {
		{ "Category", "System SplashScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configure System Splash Screen background type. To configure Splash Image go to Project Settings > Platforms > Android > Launch Image. */" },
#endif
		{ "DisplayName", "System Splash Screen Background" },
		{ "EditCondition", "!bInsightPassthroughEnabled" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure System Splash Screen background type. To configure Splash Image go to Project Settings > Platforms > Android > Launch Image." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEnabled_MetaData[] = {
		{ "Category", "Engine SplashScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the Splash screen is enabled. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the Splash screen is enabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashDescs_MetaData[] = {
		{ "Category", "Engine SplashScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An array of splash screen descriptors listing textures to show and their positions. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of splash screen descriptors listing textures to show and their positions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHorizonOSVersionOverride_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This toggle enables you to define your own minimum and target Horizon OS versions for your app. Only turn this on if you know you need to specify the OS version due to API compatibility reasons. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This toggle enables you to define your own minimum and target Horizon OS versions for your app. Only turn this on if you know you need to specify the OS version due to API compatibility reasons." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinOSVersion_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The minimum required Horizon OS version. Modifying this setting requires that Horizon OS SDK Enabled is checked. */" },
#endif
		{ "DisplayName", "Minimum Horizon OS Version" },
		{ "EditCondition", "bHorizonOSVersionOverride" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum required Horizon OS version. Modifying this setting requires that Horizon OS SDK Enabled is checked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOSVersion_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target Horizon OS version. Modifying this setting requires that Horizon OS SDK Enabled is checked. */" },
#endif
		{ "DisplayName", "Target Horizon OS Version" },
		{ "EditCondition", "bHorizonOSVersionOverride" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target Horizon OS version. Modifying this setting requires that Horizon OS SDK Enabled is checked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XrApi_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09This selects the XR API that the engine will use. Epic Native OpenXR is the recommended API;\n\x09the OVRPlugin backend is deprecated and will be removed in a future release.\n\x09The OpenXR plugin must also be enabled to use Native OpenXR.\n\x09*/" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "XR API" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This selects the XR API that the engine will use. Epic Native OpenXR is the recommended API;\nthe OVRPlugin backend is deprecated and will be removed in a future release.\nThe OpenXR plugin must also be enabled to use Native OpenXR." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target color space */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target color space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerPoseAlignment_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the controller hand poses align to the Meta XR pose definitions or the OpenXR pose definitions */" },
#endif
		{ "EditCondition", "XrApi != EOculusXRXrApi::NativeOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the controller hand poses align to the Meta XR pose definitions or the OpenXR pose definitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bThumbstickDpadEmulationEnabled_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the app uses emulated thumbstick dpad inputs (ex: thumbstick up) when using Epic's Native OpenXR. */" },
#endif
		{ "EditCondition", "XrApi == EOculusXRXrApi::NativeOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the app uses emulated thumbstick dpad inputs (ex: thumbstick up) when using Epic's Native OpenXR." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDash_MetaData[] = {
		{ "Category", "PC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompositesDepth_MetaData[] = {
		{ "Category", "PC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more. */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHQDistortion_MetaData[] = {
		{ "Category", "PC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Computes mipmaps for the eye buffers every frame, for a higher quality distortion */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computes mipmaps for the eye buffers every frame, for a higher quality distortion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetActivePIEToPrimary_MetaData[] = {
		{ "Category", "PC|Multiplayer Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When running multiple player windows in a single process with VRPreview, this option determins whether to set the current active PIE to the primary one on the fly.*/" },
#endif
		{ "DisplayName", "Set Active PIE To Primary" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When running multiple player windows in a single process with VRPreview, this option determins whether to set the current active PIE to the primary one on the fly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetCVarPIEToPrimary_MetaData[] = {
		{ "Category", "PC|Multiplayer Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When running multiple player windows in a single process with VRPreview, this option determins whether to set the PIE specified by CVar vr.PrimaryPIEIndex to the primary one on the fly.*/" },
#endif
		{ "DisplayName", "Set CVar PIE To Primary" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When running multiple player windows in a single process with VRPreview, this option determins whether to set the PIE specified by CVar vr.PrimaryPIEIndex to the primary one on the fly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateHeadPoseForInactivePlayer_MetaData[] = {
		{ "Category", "PC|Multiplayer Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09In case of multiple players testing, when the current player is inactive, disabling this setting will make sure the current player does NOT update headpose until it is active again.\n\x09This setting is not limited to multiple players testing and it will be applied to any VRPreview PIE window.\n\x09*/" },
#endif
		{ "DisplayName", "Enable head pose update for inactive VRPreview player." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In case of multiple players testing, when the current player is inactive, disabling this setting will make sure the current player does NOT update headpose until it is active again.\nThis setting is not limited to multiple players testing and it will be applied to any VRPreview PIE window." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPPoseRestoreType_MetaData[] = {
		{ "Category", "PC|Multiplayer Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09In case of multiple players testing, when the primary player, which is connected to the HMD, is changed, this setting determins how to restore the previous player's head pose\n\x09*/" },
#endif
		{ "DisplayName", "MultiPlayer Pose Restore Type." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In case of multiple players testing, when the primary player, which is connected to the HMD, is changed, this setting determins how to restore the previous player's head pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicResolution_MetaData[] = {
		{ "Category", "Mobile|Dynamic Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum allowed pixel density. */" },
#endif
		{ "DisplayName", "Enable Dynamic Resolution. (min, max) can be set in device profile." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed pixel density." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum allowed pixel density. */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use DynamicResolutionSettings instead." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum allowed pixel density." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMax_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum allowed pixel density. */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use DynamicResolutionSettings instead." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed pixel density." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPULevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default CPU level controlling CPU frequency on the mobile device */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Blueprint Function Get/SetSuggestedCpuAndGpuPerformanceLevels instead." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default CPU level controlling CPU frequency on the mobile device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPULevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default GPU level controlling GPU frequency on the mobile device */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Blueprint Function Get/SetSuggestedCpuAndGpuPerformanceLevels instead." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default GPU level controlling GPU frequency on the mobile device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedDevices_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select supported Meta Quest Devices */" },
#endif
		{ "DisplayName", "Supported Meta Quest devices" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select supported Meta Quest Devices" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedCpuPerfLevel_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Suggested CPU perf level when application starts on Oculus Quest */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suggested CPU perf level when application starts on Oculus Quest" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedGpuPerfLevel_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Suggested GPU perf level when application starts on Oculus Quest */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suggested GPU perf level when application starts on Oculus Quest" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoveatedRenderingMethod_MetaData[] = {
		{ "Category", "Mobile|Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Foveated rendering method */" },
#endif
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Foveated rendering method" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoveatedRenderingLevel_MetaData[] = {
		{ "Category", "Mobile|Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Foveated rendering level (maximum level for dynamic foveated rendering)\n\x09 * A higher foveated rendering level improves GPU performance at the cost of a blurrier periphery\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Foveated rendering level (maximum level for dynamic foveated rendering)\nA higher foveated rendering level improves GPU performance at the cost of a blurrier periphery" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicFoveatedRendering_MetaData[] = {
		{ "Category", "Mobile|Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether foveated rendering levels will change dynamically based on performance headroom or not (up to the set foveated rendering level) */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether foveated rendering levels will change dynamically based on performance headroom or not (up to the set foveated rendering level)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportEyeTrackedFoveatedRendering_MetaData[] = {
		{ "Category", "Mobile|Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether eye tracked foveated rendering can be used with the app. */" },
#endif
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether eye tracked foveated rendering can be used with the app." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompositeDepthMobile_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the app's depth buffer is shared with the compositor to enable depth testing against other layers.\n\x09Mobile depth composition has performance overhead both on the engine (for resolving depth) and on the compositor (for depth testing against other layers) */" },
#endif
		{ "DisplayName", "Composite Depth" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the app's depth buffer is shared with the compositor to enable depth testing against other layers.\n      Mobile depth composition has performance overhead both on the engine (for resolving depth) and on the compositor (for depth testing against other layers)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFocusAware_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled the app will be focus aware. This will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */" },
#endif
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled the app will be focus aware. This will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLateLatching_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** [Experimental]Enable Late latching for reducing HMD and controller latency, improve tracking prediction quality, multiview and vulkan must be enabled for this feature. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[Experimental]Enable Late latching for reducing HMD and controller latency, improve tracking prediction quality, multiview and vulkan must be enabled for this feature." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresSystemKeyboard_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled the app will use the Oculus system keyboard for input fields. This requires that the app be focus aware. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled the app will use the Oculus system keyboard for input fields. This requires that the app be focus aware." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingSupport_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether controllers and/or hands can be used with the app */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether controllers and/or hands can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingFrequency_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Note that a higher tracking frequency will reserve some performance headroom from the application's budget. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Note that a higher tracking frequency will reserve some performance headroom from the application's budget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingVersion_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version of hand tracking algorithm */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The version of hand tracking algorithm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInsightPassthroughEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether passthrough functionality can be used with the app */" },
#endif
		{ "DisplayName", "Passthrough Enabled" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether passthrough functionality can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnchorSupportEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Spatial Anchors can be used with the app */" },
#endif
		{ "DisplayName", "Anchor Support" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Spatial Anchors can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnchorSharingEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Spatial Anchor Sharing can be used with the app */" },
#endif
		{ "DisplayName", "Anchor Sharing" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Spatial Anchor Sharing can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSceneSupportEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Scene can be used with the app */" },
#endif
		{ "DisplayName", "Scene Support" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Scene can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPassthroughCameraAccessEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether PassthroughCameraAccess can be used with the app */" },
#endif
		{ "DisplayName", "Passthrough Camera Access Support" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether PassthroughCameraAccess can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoundaryVisibilitySupportEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Can boundary visibility be toggled in app */" },
#endif
		{ "DisplayName", "Boundary Visibility Support" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can boundary visibility be toggled in app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultBoundaryVisibilitySuppressed_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the guardian boundary visibility be suppressed by default */" },
#endif
		{ "DisplayName", "Default Is Boundary Visibility Suppressed" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the guardian boundary visibility be suppressed by default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bColocationSessionsEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Colocation Sessions can be used with the app */" },
#endif
		{ "DisplayName", "Colocation Sessions" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Colocation Sessions can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBodyTrackingEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether body tracking functionality can be used with the app */" },
#endif
		{ "DisplayName", "Body Tracking Enabled" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether body tracking functionality can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyTrackingFidelity_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select a Body Tracking Fidelity */" },
#endif
		{ "DisplayName", "Body Tracking Fidelity" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select a Body Tracking Fidelity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyTrackingJointSet_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select a Body Tracking joint set */" },
#endif
		{ "DisplayName", "Body Tracking Joint Set" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select a Body Tracking joint set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEyeTrackingEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether eye tracking functionality can be used with the app */" },
#endif
		{ "DisplayName", "Eye Tracking Enabled" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether eye tracking functionality can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFaceTrackingEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether face tracking functionality can be used with the app */" },
#endif
		{ "DisplayName", "Face Tracking Enabled" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether face tracking functionality can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingDataSource_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select preffered Face Tracking data sources */" },
#endif
		{ "DisplayName", "Face Tracking Source" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select preffered Face Tracking data sources" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFaceTrackingVisemesEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether face tracking returns visemes */" },
#endif
		{ "DisplayName", "Face Tracking Visemes Enabled" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether face tracking returns visemes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeploySoToDevice_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** On supported Oculus mobile platforms, copy compiled .so directly to device. Allows updating compiled code without rebuilding and installing an APK. */" },
#endif
		{ "DisplayName", "Deploy compiled .so directly to device" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On supported Oculus mobile platforms, copy compiled .so directly to device. Allows updating compiled code without rebuilding and installing an APK." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIterativeCookOnTheFly_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keep previously deployed device contents. Allows cook-on-the-fly to reuse assets from previous runs. */" },
#endif
		{ "DisplayName", "Enable Iterative Cook on the Fly" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep previously deployed device contents. Allows cook-on-the-fly to reuse assets from previous runs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportExperimentalFeatures_MetaData[] = {
		{ "Category", "Experimental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether experimental features listed below can be used with the app. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether experimental features listed below can be used with the app." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessorFavor_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If selected, will increase the frequency of one processor at the expense of decreasing the frequency of the other on supported devices. */" },
#endif
		{ "DisplayName", "Processor Favor" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If selected, will increase the frequency of one processor at the expense of decreasing the frequency of the other on supported devices." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileTurnOffEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Tile Turn Off is enabled in app */" },
#endif
		{ "DisplayName", "Tile Turn Off" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Tile Turn Off is enabled in app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableWorldLock_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When world locking is enabled the position of the VR Pawn will be adjusted each frame to ensure\n\x09 * the room anchors are where they should be relative to the camera position. This is necessary to\n\x09 * ensure the position of the virtual objects in the world do not get out of sync with the real world.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When world locking is enabled the position of the VR Pawn will be adjusted each frame to ensure\nthe room anchors are where they should be relative to the camera position. This is necessary to\nensure the position of the virtual objects in the world do not get out of sync with the real world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseScenelessWorldLocking_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When \"Sceneless World Locking\" is enabled the world locking feature is enabled even when\n\x09 * there is no scene loaded. The underlying mechanism spawns a spatial anchor to world lock against.\n\x09 * It is recommended to keep this disabled if working on non MR-apps.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When \"Sceneless World Locking\" is enabled the world locking feature is enabled even when\nthere is no scene loaded. The underlying mechanism spawns a spatial anchor to world lock against.\nIt is recommended to keep this disabled if working on non MR-apps." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRHMDRuntimeSettings constinit property declarations **************
	static const UECodeGen_Private::FInt8PropertyParams NewProp_SystemSplashBackground_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemSplashBackground;
	static void NewProp_bAutoEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bAutoEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplashDescs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplashDescs;
	static void NewProp_bHorizonOSVersionOverride_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bHorizonOSVersionOverride = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHorizonOSVersionOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinOSVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOSVersion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_XrApi_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_XrApi;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerPoseAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerPoseAlignment;
	static void NewProp_bThumbstickDpadEmulationEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bThumbstickDpadEmulationEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bThumbstickDpadEmulationEnabled;
	static void NewProp_bSupportsDash_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSupportsDash = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDash;
	static void NewProp_bCompositesDepth_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bCompositesDepth = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositesDepth;
	static void NewProp_bHQDistortion_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bHQDistortion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHQDistortion;
	static void NewProp_bSetActivePIEToPrimary_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSetActivePIEToPrimary = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetActivePIEToPrimary;
	static void NewProp_bSetCVarPIEToPrimary_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSetCVarPIEToPrimary = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetCVarPIEToPrimary;
	static void NewProp_bUpdateHeadPoseForInactivePlayer_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bUpdateHeadPoseForInactivePlayer = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateHeadPoseForInactivePlayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MPPoseRestoreType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MPPoseRestoreType;
	static void NewProp_bDynamicResolution_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bDynamicResolution = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CPULevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GPULevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedDevices_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedDevices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SuggestedCpuPerfLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SuggestedCpuPerfLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SuggestedGpuPerfLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SuggestedGpuPerfLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FoveatedRenderingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FoveatedRenderingMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FoveatedRenderingLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FoveatedRenderingLevel;
	static void NewProp_bDynamicFoveatedRendering_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bDynamicFoveatedRendering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicFoveatedRendering;
	static void NewProp_bSupportEyeTrackedFoveatedRendering_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSupportEyeTrackedFoveatedRendering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportEyeTrackedFoveatedRendering;
	static void NewProp_bCompositeDepthMobile_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bCompositeDepthMobile = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositeDepthMobile;
	static void NewProp_bFocusAware_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bFocusAware = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusAware;
	static void NewProp_bLateLatching_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bLateLatching = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLateLatching;
	static void NewProp_bRequiresSystemKeyboard_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bRequiresSystemKeyboard = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresSystemKeyboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingSupport_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingSupport;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingFrequency_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingFrequency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingVersion_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingVersion;
	static void NewProp_bInsightPassthroughEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bInsightPassthroughEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInsightPassthroughEnabled;
	static void NewProp_bAnchorSupportEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bAnchorSupportEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchorSupportEnabled;
	static void NewProp_bAnchorSharingEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bAnchorSharingEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchorSharingEnabled;
	static void NewProp_bSceneSupportEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSceneSupportEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSceneSupportEnabled;
	static void NewProp_bPassthroughCameraAccessEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bPassthroughCameraAccessEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassthroughCameraAccessEnabled;
	static void NewProp_bBoundaryVisibilitySupportEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bBoundaryVisibilitySupportEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundaryVisibilitySupportEnabled;
	static void NewProp_bDefaultBoundaryVisibilitySuppressed_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bDefaultBoundaryVisibilitySuppressed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultBoundaryVisibilitySuppressed;
	static void NewProp_bColocationSessionsEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bColocationSessionsEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bColocationSessionsEnabled;
	static void NewProp_bBodyTrackingEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bBodyTrackingEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBodyTrackingEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BodyTrackingFidelity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyTrackingFidelity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BodyTrackingJointSet_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyTrackingJointSet;
	static void NewProp_bEyeTrackingEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bEyeTrackingEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyeTrackingEnabled;
	static void NewProp_bFaceTrackingEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bFaceTrackingEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceTrackingEnabled;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_FaceTrackingDataSource_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingDataSource_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_FaceTrackingDataSource;
	static void NewProp_bFaceTrackingVisemesEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bFaceTrackingVisemesEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceTrackingVisemesEnabled;
	static void NewProp_bDeploySoToDevice_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bDeploySoToDevice = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeploySoToDevice;
	static void NewProp_bIterativeCookOnTheFly_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bIterativeCookOnTheFly = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIterativeCookOnTheFly;
	static void NewProp_bSupportExperimentalFeatures_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSupportExperimentalFeatures = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportExperimentalFeatures;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ProcessorFavor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProcessorFavor;
	static void NewProp_bTileTurnOffEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bTileTurnOffEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileTurnOffEnabled;
	static void NewProp_EnableWorldLock_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->EnableWorldLock = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableWorldLock;
	static void NewProp_bUseScenelessWorldLocking_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bUseScenelessWorldLocking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScenelessWorldLocking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRHMDRuntimeSettings constinit property declarations ****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRHMDRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRHMDRuntimeSettings Property Definitions *************************
const UECodeGen_Private::FInt8PropertyParams UHT_STATICS::NewProp_SystemSplashBackground_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SystemSplashBackground = { "SystemSplashBackground", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SystemSplashBackground), Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemSplashBackground_MetaData), NewProp_SystemSplashBackground_MetaData) }; // ebfff925708c63e84762dcc00dd90a665176c5ab
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoEnabled = { "bAutoEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bAutoEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoEnabled_MetaData), NewProp_bAutoEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SplashDescs_Inner = { "SplashDescs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRSplashDesc, METADATA_PARAMS(0, nullptr) }; // a5b57b981f1c2e3268401f2494213296fb5c6b74
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SplashDescs = { "SplashDescs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SplashDescs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashDescs_MetaData), NewProp_SplashDescs_MetaData) }; // a5b57b981f1c2e3268401f2494213296fb5c6b74
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHorizonOSVersionOverride = { "bHorizonOSVersionOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bHorizonOSVersionOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHorizonOSVersionOverride_MetaData), NewProp_bHorizonOSVersionOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MinOSVersion = { "MinOSVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, MinOSVersion), Z_Construct_UScriptStruct_FOculusXROSVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinOSVersion_MetaData), NewProp_MinOSVersion_MetaData) }; // e0345faec95bc2382602edeb2d678719774f8cbb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetOSVersion = { "TargetOSVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, TargetOSVersion), Z_Construct_UScriptStruct_FOculusXROSVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOSVersion_MetaData), NewProp_TargetOSVersion_MetaData) }; // e0345faec95bc2382602edeb2d678719774f8cbb
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_XrApi_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_XrApi = { "XrApi", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, XrApi), Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XrApi_MetaData), NewProp_XrApi_MetaData) }; // 1bb6bac66fe34e88662502ba87197c6f39eadc29
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, ColorSpace), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSpace_MetaData), NewProp_ColorSpace_MetaData) }; // 5a7f37c02706f75c49471966173610d517eee71f
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ControllerPoseAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ControllerPoseAlignment = { "ControllerPoseAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, ControllerPoseAlignment), Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerPoseAlignment_MetaData), NewProp_ControllerPoseAlignment_MetaData) }; // ae01279a769f472d814f752140ab3c0bb1bfdc87
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bThumbstickDpadEmulationEnabled = { "bThumbstickDpadEmulationEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bThumbstickDpadEmulationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bThumbstickDpadEmulationEnabled_MetaData), NewProp_bThumbstickDpadEmulationEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSupportsDash = { "bSupportsDash", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bSupportsDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsDash_MetaData), NewProp_bSupportsDash_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCompositesDepth = { "bCompositesDepth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bCompositesDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompositesDepth_MetaData), NewProp_bCompositesDepth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHQDistortion = { "bHQDistortion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bHQDistortion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHQDistortion_MetaData), NewProp_bHQDistortion_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetActivePIEToPrimary = { "bSetActivePIEToPrimary", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bSetActivePIEToPrimary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetActivePIEToPrimary_MetaData), NewProp_bSetActivePIEToPrimary_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetCVarPIEToPrimary = { "bSetCVarPIEToPrimary", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bSetCVarPIEToPrimary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetCVarPIEToPrimary_MetaData), NewProp_bSetCVarPIEToPrimary_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUpdateHeadPoseForInactivePlayer = { "bUpdateHeadPoseForInactivePlayer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bUpdateHeadPoseForInactivePlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateHeadPoseForInactivePlayer_MetaData), NewProp_bUpdateHeadPoseForInactivePlayer_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MPPoseRestoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MPPoseRestoreType = { "MPPoseRestoreType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, MPPoseRestoreType), Z_Construct_UEnum_OculusXRHMD_EOculusXRMPPoseRestoreType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPPoseRestoreType_MetaData), NewProp_MPPoseRestoreType_MetaData) }; // 0b21adcb8dfceb927290d052b55387d20ee83f08
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDynamicResolution = { "bDynamicResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bDynamicResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicResolution_MetaData), NewProp_bDynamicResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PixelDensityMin = { "PixelDensityMin", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, PixelDensityMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelDensityMin_MetaData), NewProp_PixelDensityMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PixelDensityMax = { "PixelDensityMax", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, PixelDensityMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelDensityMax_MetaData), NewProp_PixelDensityMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, CPULevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPULevel_MetaData), NewProp_CPULevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, GPULevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPULevel_MetaData), NewProp_GPULevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SupportedDevices_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SupportedDevices_Inner = { "SupportedDevices", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices, METADATA_PARAMS(0, nullptr) }; // d9d0c268142e21b924fad37d9271b6776290f775
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SupportedDevices = { "SupportedDevices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SupportedDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedDevices_MetaData), NewProp_SupportedDevices_MetaData) }; // d9d0c268142e21b924fad37d9271b6776290f775
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SuggestedCpuPerfLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SuggestedCpuPerfLevel = { "SuggestedCpuPerfLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SuggestedCpuPerfLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedCpuPerfLevel_MetaData), NewProp_SuggestedCpuPerfLevel_MetaData) }; // fafcf64c528fa7a4dc9d89160f270589182e2592
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SuggestedGpuPerfLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SuggestedGpuPerfLevel = { "SuggestedGpuPerfLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SuggestedGpuPerfLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedGpuPerfLevel_MetaData), NewProp_SuggestedGpuPerfLevel_MetaData) }; // fafcf64c528fa7a4dc9d89160f270589182e2592
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FoveatedRenderingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FoveatedRenderingMethod = { "FoveatedRenderingMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, FoveatedRenderingMethod), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoveatedRenderingMethod_MetaData), NewProp_FoveatedRenderingMethod_MetaData) }; // 488e6099a9b0212ccc382c9e08041c163eeb2bfa
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FoveatedRenderingLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FoveatedRenderingLevel = { "FoveatedRenderingLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, FoveatedRenderingLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoveatedRenderingLevel_MetaData), NewProp_FoveatedRenderingLevel_MetaData) }; // 71b74fbe1e7a8a32425233f91e262cc93463e9d4
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDynamicFoveatedRendering = { "bDynamicFoveatedRendering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bDynamicFoveatedRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicFoveatedRendering_MetaData), NewProp_bDynamicFoveatedRendering_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSupportEyeTrackedFoveatedRendering = { "bSupportEyeTrackedFoveatedRendering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bSupportEyeTrackedFoveatedRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportEyeTrackedFoveatedRendering_MetaData), NewProp_bSupportEyeTrackedFoveatedRendering_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCompositeDepthMobile = { "bCompositeDepthMobile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bCompositeDepthMobile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompositeDepthMobile_MetaData), NewProp_bCompositeDepthMobile_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFocusAware = { "bFocusAware", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bFocusAware_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFocusAware_MetaData), NewProp_bFocusAware_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLateLatching = { "bLateLatching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bLateLatching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLateLatching_MetaData), NewProp_bLateLatching_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequiresSystemKeyboard = { "bRequiresSystemKeyboard", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bRequiresSystemKeyboard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresSystemKeyboard_MetaData), NewProp_bRequiresSystemKeyboard_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HandTrackingSupport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HandTrackingSupport = { "HandTrackingSupport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, HandTrackingSupport), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandTrackingSupport_MetaData), NewProp_HandTrackingSupport_MetaData) }; // c7d50b16e371874039be6ebf81eeeb3df5b93817
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HandTrackingFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HandTrackingFrequency = { "HandTrackingFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, HandTrackingFrequency), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandTrackingFrequency_MetaData), NewProp_HandTrackingFrequency_MetaData) }; // 9d9061f1d3880661a729905944836e35866fe69a
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HandTrackingVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HandTrackingVersion = { "HandTrackingVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, HandTrackingVersion), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandTrackingVersion_MetaData), NewProp_HandTrackingVersion_MetaData) }; // d51c20546efe915e77f30db864604c64ed664a5d
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInsightPassthroughEnabled = { "bInsightPassthroughEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bInsightPassthroughEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInsightPassthroughEnabled_MetaData), NewProp_bInsightPassthroughEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAnchorSupportEnabled = { "bAnchorSupportEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bAnchorSupportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnchorSupportEnabled_MetaData), NewProp_bAnchorSupportEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAnchorSharingEnabled = { "bAnchorSharingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bAnchorSharingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnchorSharingEnabled_MetaData), NewProp_bAnchorSharingEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSceneSupportEnabled = { "bSceneSupportEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bSceneSupportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSceneSupportEnabled_MetaData), NewProp_bSceneSupportEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPassthroughCameraAccessEnabled = { "bPassthroughCameraAccessEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bPassthroughCameraAccessEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPassthroughCameraAccessEnabled_MetaData), NewProp_bPassthroughCameraAccessEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBoundaryVisibilitySupportEnabled = { "bBoundaryVisibilitySupportEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bBoundaryVisibilitySupportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoundaryVisibilitySupportEnabled_MetaData), NewProp_bBoundaryVisibilitySupportEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDefaultBoundaryVisibilitySuppressed = { "bDefaultBoundaryVisibilitySuppressed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bDefaultBoundaryVisibilitySuppressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultBoundaryVisibilitySuppressed_MetaData), NewProp_bDefaultBoundaryVisibilitySuppressed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bColocationSessionsEnabled = { "bColocationSessionsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bColocationSessionsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bColocationSessionsEnabled_MetaData), NewProp_bColocationSessionsEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBodyTrackingEnabled = { "bBodyTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bBodyTrackingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBodyTrackingEnabled_MetaData), NewProp_bBodyTrackingEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BodyTrackingFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BodyTrackingFidelity = { "BodyTrackingFidelity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, BodyTrackingFidelity), Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyTrackingFidelity_MetaData), NewProp_BodyTrackingFidelity_MetaData) }; // 450349f8a61c381b9d0ed875c1512ff721d1b023
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BodyTrackingJointSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BodyTrackingJointSet = { "BodyTrackingJointSet", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, BodyTrackingJointSet), Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyTrackingJointSet_MetaData), NewProp_BodyTrackingJointSet_MetaData) }; // 04e7f388de9cf84ebd5ec67d69b0bca325b4ac0f
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEyeTrackingEnabled = { "bEyeTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bEyeTrackingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEyeTrackingEnabled_MetaData), NewProp_bEyeTrackingEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFaceTrackingEnabled = { "bFaceTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bFaceTrackingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFaceTrackingEnabled_MetaData), NewProp_bFaceTrackingEnabled_MetaData) };
const UECodeGen_Private::FInt8PropertyParams UHT_STATICS::NewProp_FaceTrackingDataSource_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FaceTrackingDataSource_ElementProp = { "FaceTrackingDataSource", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig, METADATA_PARAMS(0, nullptr) }; // 0a68a11612b26df20cc627081d43ed5e40359fd1
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_FaceTrackingDataSource = { "FaceTrackingDataSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, FaceTrackingDataSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceTrackingDataSource_MetaData), NewProp_FaceTrackingDataSource_MetaData) }; // 0a68a11612b26df20cc627081d43ed5e40359fd1
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFaceTrackingVisemesEnabled = { "bFaceTrackingVisemesEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bFaceTrackingVisemesEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFaceTrackingVisemesEnabled_MetaData), NewProp_bFaceTrackingVisemesEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDeploySoToDevice = { "bDeploySoToDevice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bDeploySoToDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeploySoToDevice_MetaData), NewProp_bDeploySoToDevice_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIterativeCookOnTheFly = { "bIterativeCookOnTheFly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bIterativeCookOnTheFly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIterativeCookOnTheFly_MetaData), NewProp_bIterativeCookOnTheFly_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSupportExperimentalFeatures = { "bSupportExperimentalFeatures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bSupportExperimentalFeatures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportExperimentalFeatures_MetaData), NewProp_bSupportExperimentalFeatures_MetaData) };
const UECodeGen_Private::FInt8PropertyParams UHT_STATICS::NewProp_ProcessorFavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ProcessorFavor = { "ProcessorFavor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, ProcessorFavor), Z_Construct_UEnum_OculusXRHMD_EProcessorFavor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessorFavor_MetaData), NewProp_ProcessorFavor_MetaData) }; // 8c73af9cb691dc74c1252acc4f2733ebce925196
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTileTurnOffEnabled = { "bTileTurnOffEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bTileTurnOffEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileTurnOffEnabled_MetaData), NewProp_bTileTurnOffEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableWorldLock = { "EnableWorldLock", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_EnableWorldLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableWorldLock_MetaData), NewProp_EnableWorldLock_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseScenelessWorldLocking = { "bUseScenelessWorldLocking", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &UHT_STATICS::NewProp_bUseScenelessWorldLocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseScenelessWorldLocking_MetaData), NewProp_bUseScenelessWorldLocking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SystemSplashBackground_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SystemSplashBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplashDescs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplashDescs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHorizonOSVersionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinOSVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetOSVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_XrApi_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_XrApi,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerPoseAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerPoseAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bThumbstickDpadEmulationEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSupportsDash,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCompositesDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHQDistortion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetActivePIEToPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetCVarPIEToPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUpdateHeadPoseForInactivePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MPPoseRestoreType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MPPoseRestoreType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDynamicResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PixelDensityMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PixelDensityMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CPULevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GPULevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SupportedDevices_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SupportedDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SupportedDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SuggestedCpuPerfLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SuggestedCpuPerfLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SuggestedGpuPerfLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SuggestedGpuPerfLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FoveatedRenderingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FoveatedRenderingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FoveatedRenderingLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FoveatedRenderingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDynamicFoveatedRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSupportEyeTrackedFoveatedRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCompositeDepthMobile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFocusAware,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLateLatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequiresSystemKeyboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandTrackingSupport_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandTrackingSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandTrackingFrequency_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandTrackingFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandTrackingVersion_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandTrackingVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInsightPassthroughEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAnchorSupportEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAnchorSharingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSceneSupportEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPassthroughCameraAccessEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBoundaryVisibilitySupportEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDefaultBoundaryVisibilitySuppressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bColocationSessionsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBodyTrackingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BodyTrackingFidelity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BodyTrackingFidelity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BodyTrackingJointSet_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BodyTrackingJointSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEyeTrackingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFaceTrackingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTrackingDataSource_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTrackingDataSource_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTrackingDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFaceTrackingVisemesEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDeploySoToDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIterativeCookOnTheFly,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSupportExperimentalFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProcessorFavor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProcessorFavor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTileTurnOffEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableWorldLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseScenelessWorldLocking,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRHMDRuntimeSettings Property Definitions ***************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRHMDRuntimeSettings,
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
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings;
UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRHMDRuntimeSettings;
		if (!Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRHMDRuntimeSettings"),
				Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRHMDRuntimeSettings);
UOculusXRHMDRuntimeSettings::~UOculusXRHMDRuntimeSettings() {}
// ********** End Class UOculusXRHMDRuntimeSettings ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h__Script_OculusXRHMD_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices, TEXT("EOculusXRSupportedDevices"), &ZRIE_EOculusXRSupportedDevices, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3654337128U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRHMDRuntimeSettings, TEXT("UOculusXRHMDRuntimeSettings"), &Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRHMDRuntimeSettings), 325966693U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h__Script_OculusXRHMD_4868464cd87631b9e088b864b1f63becb21bdb1b{
	TEXT("/Script/OculusXRHMD"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
