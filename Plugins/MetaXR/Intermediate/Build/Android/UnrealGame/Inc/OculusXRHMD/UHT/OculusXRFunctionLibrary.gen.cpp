// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRFunctionLibrary.h"
#include "OculusXRHMDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector(ETypeConstructPhase);
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRHMD(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType(ETypeConstructPhase);
OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi(ETypeConstructPhase);
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRFunctionLibrary(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRGuardianTestResult(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfile(ETypeConstructPhase);
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRPerformanceMetrics(ETypeConstructPhase);
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRFunctionLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRFunctionLibrary Function AddLoadingSplashScreen *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_AddLoadingSplashScreen_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms
	{
		UTexture2D* Texture;
		FVector TranslationInMeters;
		FRotator Rotation;
		FVector2D SizeInMeters;
		FRotator DeltaRotation;
		bool bClearBeforeAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds loading splash screen with parameters\n\x09 *\n\x09 * @param Texture\x09\x09\x09(in) A texture asset to be used for the splash.\n\x09 * @param TranslationInMeters (in) Initial translation of the center of the splash screen (in meters).\n\x09 * @param Rotation\x09\x09\x09(in) Initial rotation of the splash screen, with the origin at the center of the splash screen.\n\x09 * @param SizeInMeters\x09\x09(in) Size, in meters, of the quad with the splash screen.\n\x09 * @param DeltaRotation\x09\x09(in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n\x09 * @param bClearBeforeAdd\x09(in) If true, clears splashes before adding a new one.\n\x09 */" },
#endif
		{ "CPP_Default_bClearBeforeAdd", "false" },
		{ "CPP_Default_DeltaRotation", "" },
		{ "CPP_Default_SizeInMeters", "(X=1.000,Y=1.000)" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Add Loading Screen Splash from the Head Mounted Display Loading Screen functions instead." },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds loading splash screen with parameters\n\n@param Texture                       (in) A texture asset to be used for the splash.\n@param TranslationInMeters (in) Initial translation of the center of the splash screen (in meters).\n@param Rotation                      (in) Initial rotation of the splash screen, with the origin at the center of the splash screen.\n@param SizeInMeters          (in) Size, in meters, of the quad with the splash screen.\n@param DeltaRotation         (in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n@param bClearBeforeAdd       (in) If true, clears splashes before adding a new one." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddLoadingSplashScreen constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationInMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
	static void NewProp_bClearBeforeAdd_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms*)Obj)->bClearBeforeAdd = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBeforeAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLoadingSplashScreen constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLoadingSplashScreen Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TranslationInMeters = { "TranslationInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms, TranslationInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClearBeforeAdd = { "bClearBeforeAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms), &UHT_STATICS::NewProp_bClearBeforeAdd_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TranslationInMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SizeInMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClearBeforeAdd,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddLoadingSplashScreen Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "AddLoadingSplashScreen", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventAddLoadingSplashScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_AddLoadingSplashScreen(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execAddLoadingSplashScreen)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_STRUCT(FVector,Z_Param_TranslationInMeters);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters);
	P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
	P_GET_UBOOL(Z_Param_bClearBeforeAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::AddLoadingSplashScreen(Z_Param_Texture,Z_Param_TranslationInMeters,Z_Param_Rotation,Z_Param_SizeInMeters,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function AddLoadingSplashScreen *******************

// ********** Begin Class UOculusXRFunctionLibrary Function BeginProfilingRegion *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_BeginProfilingRegion_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventBeginProfilingRegion_Parms
	{
		FString RegionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Begin a named profiling region for performance analysis.\n\x09 * This marks the start of a region that can be measured by profiling tools.\n\x09 * Call EndProfilingRegion() to end the region.\n\x09 *\n\x09 * @param RegionName (in) Name of the profiling region to begin\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin a named profiling region for performance analysis.\nThis marks the start of a region that can be measured by profiling tools.\nCall EndProfilingRegion() to end the region.\n\n@param RegionName (in) Name of the profiling region to begin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginProfilingRegion constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_RegionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BeginProfilingRegion constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BeginProfilingRegion Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RegionName = { "RegionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventBeginProfilingRegion_Parms, RegionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionName_MetaData), NewProp_RegionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegionName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BeginProfilingRegion Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "BeginProfilingRegion", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventBeginProfilingRegion_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventBeginProfilingRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_BeginProfilingRegion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execBeginProfilingRegion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RegionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::BeginProfilingRegion(Z_Param_RegionName);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function BeginProfilingRegion *********************

// ********** Begin Class UOculusXRFunctionLibrary Function ClearLoadingSplashScreens **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_ClearLoadingSplashScreens_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes all the splash screens.\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Clear Loading Screen Splashes from the Head Mounted Display Loading Screen functions instead." },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all the splash screens." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearLoadingSplashScreens constinit property declarations *************
// ********** End Function ClearLoadingSplashScreens constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "ClearLoadingSplashScreens", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_ClearLoadingSplashScreens(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execClearLoadingSplashScreens)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::ClearLoadingSplashScreens();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function ClearLoadingSplashScreens ****************

// ********** Begin Class UOculusXRFunctionLibrary Function EnableOrientationTracking **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_EnableOrientationTracking_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventEnableOrientationTracking_Parms
	{
		bool bOrientationTracking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables/disables orientation tracking on devices that support it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables/disables orientation tracking on devices that support it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableOrientationTracking constinit property declarations *************
	static void NewProp_bOrientationTracking_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventEnableOrientationTracking_Parms*)Obj)->bOrientationTracking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientationTracking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableOrientationTracking constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableOrientationTracking Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOrientationTracking = { "bOrientationTracking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventEnableOrientationTracking_Parms), &UHT_STATICS::NewProp_bOrientationTracking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOrientationTracking,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableOrientationTracking Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "EnableOrientationTracking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventEnableOrientationTracking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventEnableOrientationTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_EnableOrientationTracking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execEnableOrientationTracking)
{
	P_GET_UBOOL(Z_Param_bOrientationTracking);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::EnableOrientationTracking(Z_Param_bOrientationTracking);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function EnableOrientationTracking ****************

// ********** Begin Class UOculusXRFunctionLibrary Function EnablePositionTracking *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_EnablePositionTracking_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventEnablePositionTracking_Parms
	{
		bool bPositionTracking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables/disables positional tracking on devices that support it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables/disables positional tracking on devices that support it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnablePositionTracking constinit property declarations ****************
	static void NewProp_bPositionTracking_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventEnablePositionTracking_Parms*)Obj)->bPositionTracking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositionTracking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnablePositionTracking constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnablePositionTracking Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPositionTracking = { "bPositionTracking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventEnablePositionTracking_Parms), &UHT_STATICS::NewProp_bPositionTracking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPositionTracking,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnablePositionTracking Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "EnablePositionTracking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventEnablePositionTracking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventEnablePositionTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_EnablePositionTracking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execEnablePositionTracking)
{
	P_GET_UBOOL(Z_Param_bPositionTracking);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::EnablePositionTracking(Z_Param_bPositionTracking);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function EnablePositionTracking *******************

// ********** Begin Class UOculusXRFunctionLibrary Function EndProfilingRegion *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_EndProfilingRegion_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * End the currently active profiling region that was started with BeginProfilingRegion().\n\x09 * Profiling regions must be properly paired with begin/end calls.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End the currently active profiling region that was started with BeginProfilingRegion().\nProfiling regions must be properly paired with begin/end calls." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EndProfilingRegion constinit property declarations ********************
// ********** End Function EndProfilingRegion constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "EndProfilingRegion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_EndProfilingRegion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execEndProfilingRegion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::EndProfilingRegion();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function EndProfilingRegion ***********************

// ********** Begin Class UOculusXRFunctionLibrary Function GetAvailableDisplayFrequencies *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current available frequencies\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current available frequencies" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableDisplayFrequencies constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableDisplayFrequencies constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableDisplayFrequencies Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAvailableDisplayFrequencies Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetAvailableDisplayFrequencies", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetAvailableDisplayFrequencies(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetAvailableDisplayFrequencies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=UOculusXRFunctionLibrary::GetAvailableDisplayFrequencies();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetAvailableDisplayFrequencies ***********

// ********** Begin Class UOculusXRFunctionLibrary Function GetBaseRotationAndBaseOffsetInMeters ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms
	{
		FRotator OutRotation;
		FVector OutBaseOffsetInMeters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns current base rotation and base offset.\n\x09 * The base offset is currently used base position offset, previously set by the\n\x09 * ResetPosition or SetBasePositionOffset calls. It represents a vector that translates the HMD's position\n\x09 * into (0,0,0) point, in meters.\n\x09 * The axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\x09 *\n\x09 * @param OutRotation\x09\x09\x09(out) Rotator object with base rotation\n\x09 * @param OutBaseOffsetInMeters\x09(out) base position offset, vector, in meters.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current base rotation and base offset.\nThe base offset is currently used base position offset, previously set by the\nResetPosition or SetBasePositionOffset calls. It represents a vector that translates the HMD's position\ninto (0,0,0) point, in meters.\nThe axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\n@param OutRotation                   (out) Rotator object with base rotation\n@param OutBaseOffsetInMeters (out) base position offset, vector, in meters." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBaseRotationAndBaseOffsetInMeters constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBaseOffsetInMeters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBaseRotationAndBaseOffsetInMeters constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBaseRotationAndBaseOffsetInMeters Property Definitions *************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutBaseOffsetInMeters = { "OutBaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutBaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutBaseOffsetInMeters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBaseRotationAndBaseOffsetInMeters Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetBaseRotationAndBaseOffsetInMeters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBaseOffsetInMeters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(Z_Param_Out_OutRotation,Z_Param_Out_OutBaseOffsetInMeters);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetBaseRotationAndBaseOffsetInMeters *****

// ********** Begin Class UOculusXRFunctionLibrary Function GetBaseRotationAndPositionOffset *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetBaseRotationAndPositionOffset_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms
	{
		FRotator OutRot;
		FVector OutPosOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns current base rotation and position offset.\n\x09 *\n\x09 * @param OutRot\x09\x09\x09(out) Rotator object with base rotation\n\x09 * @param OutPosOffset\x09\x09(out) the vector with previously set position offset.\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current base rotation and position offset.\n\n@param OutRot                        (out) Rotator object with base rotation\n@param OutPosOffset          (out) the vector with previously set position offset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBaseRotationAndPositionOffset constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBaseRotationAndPositionOffset constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBaseRotationAndPositionOffset Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutRot = { "OutRot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPosOffset = { "OutPosOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutPosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPosOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBaseRotationAndPositionOffset Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetBaseRotationAndPositionOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetBaseRotationAndPositionOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetBaseRotationAndPositionOffset)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRot);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::GetBaseRotationAndPositionOffset(Z_Param_Out_OutRot,Z_Param_Out_OutPosOffset);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetBaseRotationAndPositionOffset *********

// ********** Begin Class UOculusXRFunctionLibrary Function GetControllerType **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetControllerType_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetControllerType_Parms
	{
		EControllerHand deviceHand;
		EOculusXRControllerType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current controller's type\n\x09 * @param deviceHand\x09\x09\x09\x09(in) The hand to get the position from\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current controller's type\n@param deviceHand                            (in) The hand to get the position from" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetControllerType constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_deviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_deviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControllerType constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControllerType Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_deviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_deviceHand = { "deviceHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetControllerType_Parms, deviceHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // f5294e155ac7171173a41992827cf3bc0e116aff
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetControllerType_Parms, ReturnValue), Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType, METADATA_PARAMS(0, nullptr) }; // 45426f7316f513a215f2f44a717c4ba824e1cfc3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_deviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_deviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetControllerType Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetControllerType", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetControllerType_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetControllerType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetControllerType(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetControllerType)
{
	P_GET_ENUM(EControllerHand,Z_Param_deviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRControllerType*)Z_Param__Result=UOculusXRFunctionLibrary::GetControllerType(EControllerHand(Z_Param_deviceHand));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetControllerType ************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetCurrentDisplayFrequency *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetCurrentDisplayFrequency_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetCurrentDisplayFrequency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current display frequency\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current display frequency" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentDisplayFrequency constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentDisplayFrequency constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentDisplayFrequency Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetCurrentDisplayFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentDisplayFrequency Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetCurrentDisplayFrequency", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetCurrentDisplayFrequency_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetCurrentDisplayFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetCurrentDisplayFrequency(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetCurrentDisplayFrequency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOculusXRFunctionLibrary::GetCurrentDisplayFrequency();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetCurrentDisplayFrequency ***************

// ********** Begin Class UOculusXRFunctionLibrary Function GetDeviceName **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetDeviceName_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusXRFunctionLibrary::GetDeviceName has been deprecated and no longer functions as before. Please use the enum-based GetDeviceType instead." },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDeviceName constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDeviceName constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDeviceName Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDeviceName Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetDeviceName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetDeviceName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetDeviceName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOculusXRFunctionLibrary::GetDeviceName();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetDeviceName ****************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetDeviceType **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetDeviceType_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetDeviceType_Parms
	{
		EOculusXRDeviceType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDeviceType constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDeviceType constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDeviceType Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetDeviceType_Parms, ReturnValue), Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType, METADATA_PARAMS(0, nullptr) }; // b90abc186c1fb648cd01f703ee18e97a366938e8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDeviceType Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetDeviceType", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetDeviceType_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetDeviceType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetDeviceType(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetDeviceType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRDeviceType*)Z_Param__Result=UOculusXRFunctionLibrary::GetDeviceType();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetDeviceType ****************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetEyeTrackedFoveatedRenderingSupported 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetEyeTrackedFoveatedRenderingSupported_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetEyeTrackedFoveatedRenderingSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether eye-tracked foveated rendering is supported or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether eye-tracked foveated rendering is supported or not" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetEyeTrackedFoveatedRenderingSupported constinit property declarations 
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventGetEyeTrackedFoveatedRenderingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEyeTrackedFoveatedRenderingSupported constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEyeTrackedFoveatedRenderingSupported Property Definitions **********
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventGetEyeTrackedFoveatedRenderingSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEyeTrackedFoveatedRenderingSupported Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetEyeTrackedFoveatedRenderingSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetEyeTrackedFoveatedRenderingSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetEyeTrackedFoveatedRenderingSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetEyeTrackedFoveatedRenderingSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetEyeTrackedFoveatedRenderingSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::GetEyeTrackedFoveatedRenderingSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetEyeTrackedFoveatedRenderingSupported **

// ********** Begin Class UOculusXRFunctionLibrary Function GetFoveatedRenderingLevel **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetFoveatedRenderingLevel_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetFoveatedRenderingLevel_Parms
	{
		EOculusXRFoveatedRenderingLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current multiresolution level\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current multiresolution level" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFoveatedRenderingLevel constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFoveatedRenderingLevel constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFoveatedRenderingLevel Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetFoveatedRenderingLevel_Parms, ReturnValue), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 71b74fbe1e7a8a32425233f91e262cc93463e9d4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFoveatedRenderingLevel Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetFoveatedRenderingLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetFoveatedRenderingLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetFoveatedRenderingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetFoveatedRenderingLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetFoveatedRenderingLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRFoveatedRenderingLevel*)Z_Param__Result=UOculusXRFunctionLibrary::GetFoveatedRenderingLevel();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetFoveatedRenderingLevel ****************

// ********** Begin Class UOculusXRFunctionLibrary Function GetFoveatedRenderingMethod *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetFoveatedRenderingMethod_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetFoveatedRenderingMethod_Parms
	{
		EOculusXRFoveatedRenderingMethod ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the foveated rendering method currently being used.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the foveated rendering method currently being used." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFoveatedRenderingMethod constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFoveatedRenderingMethod constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFoveatedRenderingMethod Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetFoveatedRenderingMethod_Parms, ReturnValue), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod, METADATA_PARAMS(0, nullptr) }; // 488e6099a9b0212ccc382c9e08041c163eeb2bfa
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFoveatedRenderingMethod Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetFoveatedRenderingMethod", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetFoveatedRenderingMethod_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetFoveatedRenderingMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetFoveatedRenderingMethod(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetFoveatedRenderingMethod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRFoveatedRenderingMethod*)Z_Param__Result=UOculusXRFunctionLibrary::GetFoveatedRenderingMethod();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetFoveatedRenderingMethod ***************

// ********** Begin Class UOculusXRFunctionLibrary Function GetGPUFrameTime ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGPUFrameTime_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetGPUFrameTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the GPU frame time on supported mobile platforms (Go for now)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the GPU frame time on supported mobile platforms (Go for now)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGPUFrameTime constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGPUFrameTime constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGPUFrameTime Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetGPUFrameTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGPUFrameTime Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetGPUFrameTime", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetGPUFrameTime_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetGPUFrameTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGPUFrameTime(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetGPUFrameTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOculusXRFunctionLibrary::GetGPUFrameTime();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetGPUFrameTime **************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetGPUUtilization **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGPUUtilization_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetGPUUtilization_Parms
	{
		bool IsGPUAvailable;
		float GPUUtilization;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the GPU utilization availability and value\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the GPU utilization availability and value" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGPUUtilization constinit property declarations *********************
	static void NewProp_IsGPUAvailable_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventGetGPUUtilization_Parms*)Obj)->IsGPUAvailable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGPUAvailable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUUtilization;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGPUUtilization constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGPUUtilization Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_IsGPUAvailable = { "IsGPUAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventGetGPUUtilization_Parms), &UHT_STATICS::NewProp_IsGPUAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GPUUtilization = { "GPUUtilization", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetGPUUtilization_Parms, GPUUtilization), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IsGPUAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GPUUtilization,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGPUUtilization Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetGPUUtilization", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetGPUUtilization_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetGPUUtilization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGPUUtilization(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetGPUUtilization)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsGPUAvailable);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GPUUtilization);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::GetGPUUtilization(Z_Param_Out_IsGPUAvailable,Z_Param_Out_GPUUtilization);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetGPUUtilization ************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetGuardianDimensions ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGuardianDimensions_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetGuardianDimensions_Parms
	{
		EOculusXRBoundaryType BoundaryType;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Guardian" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the dimensions in UE world space of the requested Boundary Type\n\x09 * @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the dimensions in UE world space of the requested Boundary Type\n@param BoundaryType                  (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGuardianDimensions constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGuardianDimensions constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGuardianDimensions Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetGuardianDimensions_Parms, BoundaryType), Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType, METADATA_PARAMS(0, nullptr) }; // 3ccf115c419b274b91a449c91cc36ae5023c97aa
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetGuardianDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGuardianDimensions Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetGuardianDimensions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetGuardianDimensions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetGuardianDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGuardianDimensions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetGuardianDimensions)
{
	P_GET_ENUM(EOculusXRBoundaryType,Z_Param_BoundaryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UOculusXRFunctionLibrary::GetGuardianDimensions(EOculusXRBoundaryType(Z_Param_BoundaryType));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetGuardianDimensions ********************

// ********** Begin Class UOculusXRFunctionLibrary Function GetGuardianPoints **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGuardianPoints_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetGuardianPoints_Parms
	{
		EOculusXRBoundaryType BoundaryType;
		bool UsePawnSpace;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Guardian" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the list of points in UE world space of the requested Boundary Type\n\x09 * @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09 * @param UsePawnSpace\x09\x09\x09(in) Boolean indicating to return the points in world space or pawn space\n\x09 */" },
#endif
		{ "CPP_Default_UsePawnSpace", "false" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the list of points in UE world space of the requested Boundary Type\n@param BoundaryType                  (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n@param UsePawnSpace                  (in) Boolean indicating to return the points in world space or pawn space" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGuardianPoints constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
	static void NewProp_UsePawnSpace_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventGetGuardianPoints_Parms*)Obj)->UsePawnSpace = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePawnSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGuardianPoints constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGuardianPoints Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetGuardianPoints_Parms, BoundaryType), Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType, METADATA_PARAMS(0, nullptr) }; // 3ccf115c419b274b91a449c91cc36ae5023c97aa
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_UsePawnSpace = { "UsePawnSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventGetGuardianPoints_Parms), &UHT_STATICS::NewProp_UsePawnSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetGuardianPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UsePawnSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGuardianPoints Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetGuardianPoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetGuardianPoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetGuardianPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGuardianPoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetGuardianPoints)
{
	P_GET_ENUM(EOculusXRBoundaryType,Z_Param_BoundaryType);
	P_GET_UBOOL(Z_Param_UsePawnSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UOculusXRFunctionLibrary::GetGuardianPoints(EOculusXRBoundaryType(Z_Param_BoundaryType),Z_Param_UsePawnSpace);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetGuardianPoints ************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetHmdColorDesc ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetHmdColorDesc_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetHmdColorDesc_Parms
	{
		EOculusXRColorSpace ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the color space of the target HMD\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the color space of the target HMD" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetHmdColorDesc constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHmdColorDesc constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHmdColorDesc Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetHmdColorDesc_Parms, ReturnValue), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace, METADATA_PARAMS(0, nullptr) }; // 5a7f37c02706f75c49471966173610d517eee71f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHmdColorDesc Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetHmdColorDesc", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetHmdColorDesc_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetHmdColorDesc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetHmdColorDesc(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetHmdColorDesc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRColorSpace*)Z_Param__Result=UOculusXRFunctionLibrary::GetHmdColorDesc();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetHmdColorDesc **************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetNodeGuardianIntersection ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetNodeGuardianIntersection_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetNodeGuardianIntersection_Parms
	{
		EOculusXRTrackedDeviceType DeviceType;
		EOculusXRBoundaryType BoundaryType;
		FOculusXRGuardianTestResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeGuardianIntersection constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeGuardianIntersection constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeGuardianIntersection Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetNodeGuardianIntersection_Parms, DeviceType), Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, METADATA_PARAMS(0, nullptr) }; // acf429d83a3748ebfd59a9340053b1a765452c66
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetNodeGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType, METADATA_PARAMS(0, nullptr) }; // 3ccf115c419b274b91a449c91cc36ae5023c97aa
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetNodeGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FOculusXRGuardianTestResult, METADATA_PARAMS(0, nullptr) }; // 5add85d8526a5835a240bbca2767c929b75c79f4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeGuardianIntersection Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetNodeGuardianIntersection", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetNodeGuardianIntersection_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetNodeGuardianIntersection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetNodeGuardianIntersection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetNodeGuardianIntersection)
{
	P_GET_ENUM(EOculusXRTrackedDeviceType,Z_Param_DeviceType);
	P_GET_ENUM(EOculusXRBoundaryType,Z_Param_BoundaryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOculusXRGuardianTestResult*)Z_Param__Result=UOculusXRFunctionLibrary::GetNodeGuardianIntersection(EOculusXRTrackedDeviceType(Z_Param_DeviceType),EOculusXRBoundaryType(Z_Param_BoundaryType));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetNodeGuardianIntersection **************

// ********** Begin Class UOculusXRFunctionLibrary Function GetPerformanceMetrics ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPerformanceMetrics_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetPerformanceMetrics_Parms
	{
		FOculusXRPerformanceMetrics PerformanceMetrics;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the performance metrics\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the performance metrics" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPerformanceMetrics constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerformanceMetrics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPerformanceMetrics constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPerformanceMetrics Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PerformanceMetrics = { "PerformanceMetrics", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPerformanceMetrics_Parms, PerformanceMetrics), Z_Construct_UScriptStruct_FOculusXRPerformanceMetrics, METADATA_PARAMS(0, nullptr) }; // 37b890515ff15de5c42badc7f095441cf4bf2551
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerformanceMetrics,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPerformanceMetrics Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetPerformanceMetrics", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetPerformanceMetrics_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetPerformanceMetrics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPerformanceMetrics(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetPerformanceMetrics)
{
	P_GET_STRUCT_REF(FOculusXRPerformanceMetrics,Z_Param_Out_PerformanceMetrics);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::GetPerformanceMetrics(Z_Param_Out_PerformanceMetrics);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetPerformanceMetrics ********************

// ********** Begin Class UOculusXRFunctionLibrary Function GetPlayAreaTransform *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPlayAreaTransform_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetPlayAreaTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Guardian" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the transform of the play area rectangle, defining its position, rotation and scale to apply to a unit cube to match it with the play area.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the transform of the play area rectangle, defining its position, rotation and scale to apply to a unit cube to match it with the play area." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayAreaTransform constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayAreaTransform constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayAreaTransform Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPlayAreaTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayAreaTransform Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetPlayAreaTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetPlayAreaTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetPlayAreaTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPlayAreaTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetPlayAreaTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UOculusXRFunctionLibrary::GetPlayAreaTransform();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetPlayAreaTransform *********************

// ********** Begin Class UOculusXRFunctionLibrary Function GetPointGuardianIntersection ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPointGuardianIntersection_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetPointGuardianIntersection_Parms
	{
		FVector Point;
		EOculusXRBoundaryType BoundaryType;
		FOculusXRGuardianTestResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPointGuardianIntersection constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPointGuardianIntersection constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPointGuardianIntersection Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPointGuardianIntersection_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPointGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType, METADATA_PARAMS(0, nullptr) }; // 3ccf115c419b274b91a449c91cc36ae5023c97aa
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPointGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FOculusXRGuardianTestResult, METADATA_PARAMS(0, nullptr) }; // 5add85d8526a5835a240bbca2767c929b75c79f4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPointGuardianIntersection Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetPointGuardianIntersection", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetPointGuardianIntersection_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetPointGuardianIntersection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPointGuardianIntersection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetPointGuardianIntersection)
{
	P_GET_STRUCT(FVector,Z_Param_Point);
	P_GET_ENUM(EOculusXRBoundaryType,Z_Param_BoundaryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOculusXRGuardianTestResult*)Z_Param__Result=UOculusXRFunctionLibrary::GetPointGuardianIntersection(Z_Param_Point,EOculusXRBoundaryType(Z_Param_BoundaryType));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetPointGuardianIntersection *************

// ********** Begin Class UOculusXRFunctionLibrary Function GetPose ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPose_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetPose_Parms
	{
		FRotator DeviceRotation;
		FVector DevicePosition;
		FVector NeckPosition;
		bool bUseOrienationForPlayerCamera;
		bool bUsePositionForPlayerCamera;
		FVector PositionScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\x09 *\n\x09 * @param DeviceRotation\x09(out) The device's current rotation\n\x09 * @param DevicePosition\x09(out) The device's current position, in its own tracking space\n\x09 * @param NeckPosition\x09\x09(out) The estimated neck position, calculated using NeckToEye vector from User Profile. Same coordinate space as DevicePosition.\n\x09 * @param bUseOrienationForPlayerCamera\x09(in) Should be set to 'true' if the orientation is going to be used to update orientation of the camera manually.\n\x09 * @param bUsePositionForPlayerCamera\x09(in) Should be set to 'true' if the position is going to be used to update position of the camera manually.\n\x09 * @param PositionScale\x09\x09(in) The 3D scale that will be applied to position.\n\x09 */" },
#endif
		{ "CPP_Default_bUseOrienationForPlayerCamera", "false" },
		{ "CPP_Default_bUsePositionForPlayerCamera", "false" },
		{ "CPP_Default_PositionScale", "" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\n@param DeviceRotation        (out) The device's current rotation\n@param DevicePosition        (out) The device's current position, in its own tracking space\n@param NeckPosition          (out) The estimated neck position, calculated using NeckToEye vector from User Profile. Same coordinate space as DevicePosition.\n@param bUseOrienationForPlayerCamera (in) Should be set to 'true' if the orientation is going to be used to update orientation of the camera manually.\n@param bUsePositionForPlayerCamera   (in) Should be set to 'true' if the position is going to be used to update position of the camera manually.\n@param PositionScale         (in) The 3D scale that will be applied to position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPose constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DevicePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NeckPosition;
	static void NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventGetPose_Parms*)Obj)->bUseOrienationForPlayerCamera = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrienationForPlayerCamera;
	static void NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventGetPose_Parms*)Obj)->bUsePositionForPlayerCamera = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePositionForPlayerCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPose constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPose Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DeviceRotation = { "DeviceRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPose_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DevicePosition = { "DevicePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPose_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NeckPosition = { "NeckPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPose_Parms, NeckPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseOrienationForPlayerCamera = { "bUseOrienationForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventGetPose_Parms), &UHT_STATICS::NewProp_bUseOrienationForPlayerCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsePositionForPlayerCamera = { "bUsePositionForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventGetPose_Parms), &UHT_STATICS::NewProp_bUsePositionForPlayerCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PositionScale = { "PositionScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetPose_Parms, PositionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionScale_MetaData), NewProp_PositionScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DevicePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NeckPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseOrienationForPlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsePositionForPlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PositionScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPose Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetPose", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetPose_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPose(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetPose)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NeckPosition);
	P_GET_UBOOL(Z_Param_bUseOrienationForPlayerCamera);
	P_GET_UBOOL(Z_Param_bUsePositionForPlayerCamera);
	P_GET_STRUCT(FVector,Z_Param_PositionScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::GetPose(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition,Z_Param_Out_NeckPosition,Z_Param_bUseOrienationForPlayerCamera,Z_Param_bUsePositionForPlayerCamera,Z_Param_PositionScale);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetPose **********************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetRawSensorData ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetRawSensorData_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetRawSensorData_Parms
	{
		FVector AngularAcceleration;
		FVector LinearAcceleration;
		FVector AngularVelocity;
		FVector LinearVelocity;
		float TimeInSeconds;
		EOculusXRTrackedDeviceType DeviceType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reports raw sensor data. If HMD doesn't support any of the parameters then it will be set to zero.\n\x09 *\n\x09 * @param AngularAcceleration\x09[Deprecated] (out) Angular acceleration in radians per second per second.\n\x09 * @param LinearAcceleration\x09\x09[Deprecated] (out) Acceleration in meters per second per second.\n\x09 * @param AngularVelocity\x09\x09(out) Angular velocity in radians per second.\n\x09 * @param LinearVelocity\x09\x09\x09(out) Velocity in meters per second.\n\x09 * @param TimeInSeconds\x09\x09\x09(out) Time when the reported IMU reading took place, in seconds.\n\x09 */" },
#endif
		{ "CPP_Default_DeviceType", "HMD" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reports raw sensor data. If HMD doesn't support any of the parameters then it will be set to zero.\n\n@param AngularAcceleration   [Deprecated] (out) Angular acceleration in radians per second per second.\n@param LinearAcceleration            [Deprecated] (out) Acceleration in meters per second per second.\n@param AngularVelocity               (out) Angular velocity in radians per second.\n@param LinearVelocity                        (out) Velocity in meters per second.\n@param TimeInSeconds                 (out) Time when the reported IMU reading took place, in seconds." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRawSensorData constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRawSensorData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRawSensorData Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AngularAcceleration = { "AngularAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetRawSensorData_Parms, AngularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LinearAcceleration = { "LinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetRawSensorData_Parms, LinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetRawSensorData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetRawSensorData_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetRawSensorData_Parms, TimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetRawSensorData_Parms, DeviceType), Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, METADATA_PARAMS(0, nullptr) }; // acf429d83a3748ebfd59a9340053b1a765452c66
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AngularAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LinearAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimeInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRawSensorData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetRawSensorData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetRawSensorData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetRawSensorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetRawSensorData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetRawSensorData)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularAcceleration);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearAcceleration);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TimeInSeconds);
	P_GET_ENUM(EOculusXRTrackedDeviceType,Z_Param_DeviceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::GetRawSensorData(Z_Param_Out_AngularAcceleration,Z_Param_Out_LinearAcceleration,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity,Z_Param_Out_TimeInSeconds,EOculusXRTrackedDeviceType(Z_Param_DeviceType));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetRawSensorData *************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetSuggestedCpuAndGpuPerformanceLevels *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetSuggestedCpuAndGpuPerformanceLevels_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetSuggestedCpuAndGpuPerformanceLevels_Parms
	{
		EOculusXRProcessorPerformanceLevel CpuPerfLevel;
		EOculusXRProcessorPerformanceLevel GpuPerfLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the suggested CPU and GPU levels to the Oculus device.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the suggested CPU and GPU levels to the Oculus device." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSuggestedCpuAndGpuPerformanceLevels constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_CpuPerfLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CpuPerfLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GpuPerfLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuPerfLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSuggestedCpuAndGpuPerformanceLevels constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSuggestedCpuAndGpuPerformanceLevels Property Definitions ***********
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CpuPerfLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CpuPerfLevel = { "CpuPerfLevel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetSuggestedCpuAndGpuPerformanceLevels_Parms, CpuPerfLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, METADATA_PARAMS(0, nullptr) }; // fafcf64c528fa7a4dc9d89160f270589182e2592
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_GpuPerfLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_GpuPerfLevel = { "GpuPerfLevel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetSuggestedCpuAndGpuPerformanceLevels_Parms, GpuPerfLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, METADATA_PARAMS(0, nullptr) }; // fafcf64c528fa7a4dc9d89160f270589182e2592
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CpuPerfLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CpuPerfLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GpuPerfLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GpuPerfLevel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSuggestedCpuAndGpuPerformanceLevels Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetSuggestedCpuAndGpuPerformanceLevels", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetSuggestedCpuAndGpuPerformanceLevels_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetSuggestedCpuAndGpuPerformanceLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetSuggestedCpuAndGpuPerformanceLevels(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetSuggestedCpuAndGpuPerformanceLevels)
{
	P_GET_ENUM_REF(EOculusXRProcessorPerformanceLevel,Z_Param_Out_CpuPerfLevel);
	P_GET_ENUM_REF(EOculusXRProcessorPerformanceLevel,Z_Param_Out_GpuPerfLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::GetSuggestedCpuAndGpuPerformanceLevels((EOculusXRProcessorPerformanceLevel&)(Z_Param_Out_CpuPerfLevel),(EOculusXRProcessorPerformanceLevel&)(Z_Param_Out_GpuPerfLevel));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetSuggestedCpuAndGpuPerformanceLevels ***

// ********** Begin Class UOculusXRFunctionLibrary Function GetSystemHmd3DofModeEnabled ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true if system headset is in 3dof mode\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if system headset is in 3dof mode" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSystemHmd3DofModeEnabled constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSystemHmd3DofModeEnabled constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSystemHmd3DofModeEnabled Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSystemHmd3DofModeEnabled Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetSystemHmd3DofModeEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetSystemHmd3DofModeEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetSystemHmd3DofModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::GetSystemHmd3DofModeEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetSystemHmd3DofModeEnabled **************

// ********** Begin Class UOculusXRFunctionLibrary Function GetUserProfile *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetUserProfile_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetUserProfile_Parms
	{
		FOculusXRHmdUserProfile Profile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns current user profile.\n\x09 *\n\x09 * @param Profile\x09\x09(out) Structure to hold current user profile.\n\x09 * @return (boolean)\x09True, if user profile was acquired.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current user profile.\n\n@param Profile               (out) Structure to hold current user profile.\n@return (boolean)    True, if user profile was acquired." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserProfile constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventGetUserProfile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserProfile constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserProfile Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetUserProfile_Parms, Profile), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile, METADATA_PARAMS(0, nullptr) }; // 51229c73210f4ad04e45598a0a41d9b4114d1d75
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventGetUserProfile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Profile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetUserProfile Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetUserProfile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetUserProfile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetUserProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetUserProfile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetUserProfile)
{
	P_GET_STRUCT_REF(FOculusXRHmdUserProfile,Z_Param_Out_Profile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::GetUserProfile(Z_Param_Out_Profile);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetUserProfile ***************************

// ********** Begin Class UOculusXRFunctionLibrary Function GetXrApi *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_GetXrApi_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventGetXrApi_Parms
	{
		EOculusXRXrApi ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns currently selected MetaXR XrApi backend\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns currently selected MetaXR XrApi backend" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetXrApi constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetXrApi constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetXrApi Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventGetXrApi_Parms, ReturnValue), Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi, METADATA_PARAMS(0, nullptr) }; // 1bb6bac66fe34e88662502ba87197c6f39eadc29
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetXrApi Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "GetXrApi", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventGetXrApi_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventGetXrApi_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_GetXrApi(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execGetXrApi)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRXrApi*)Z_Param__Result=UOculusXRFunctionLibrary::GetXrApi();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function GetXrApi *********************************

// ********** Begin Class UOculusXRFunctionLibrary Function HasInputFocus **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_HasInputFocus_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventHasInputFocus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true, if the app has input focus.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true, if the app has input focus." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasInputFocus constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventHasInputFocus_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasInputFocus constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasInputFocus Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventHasInputFocus_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasInputFocus Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "HasInputFocus", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventHasInputFocus_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventHasInputFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_HasInputFocus(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execHasInputFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::HasInputFocus();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function HasInputFocus ****************************

// ********** Begin Class UOculusXRFunctionLibrary Function HasSystemOverlayPresent ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_HasSystemOverlayPresent_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventHasSystemOverlayPresent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true, if the system overlay is present.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true, if the system overlay is present." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasSystemOverlayPresent constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventHasSystemOverlayPresent_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasSystemOverlayPresent constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasSystemOverlayPresent Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventHasSystemOverlayPresent_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasSystemOverlayPresent Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "HasSystemOverlayPresent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventHasSystemOverlayPresent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventHasSystemOverlayPresent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_HasSystemOverlayPresent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execHasSystemOverlayPresent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::HasSystemOverlayPresent();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function HasSystemOverlayPresent ******************

// ********** Begin Class UOculusXRFunctionLibrary Function IsColorPassthroughSupported ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_IsColorPassthroughSupported_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventIsColorPassthroughSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if color passthrough is supported\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if color passthrough is supported" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsColorPassthroughSupported constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventIsColorPassthroughSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsColorPassthroughSupported constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsColorPassthroughSupported Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventIsColorPassthroughSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsColorPassthroughSupported Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "IsColorPassthroughSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventIsColorPassthroughSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventIsColorPassthroughSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_IsColorPassthroughSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execIsColorPassthroughSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::IsColorPassthroughSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function IsColorPassthroughSupported **************

// ********** Begin Class UOculusXRFunctionLibrary Function IsDeviceTracked ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_IsDeviceTracked_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventIsDeviceTracked_Parms
	{
		EOculusXRTrackedDeviceType DeviceType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns if the device is currently tracked by the runtime or not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if the device is currently tracked by the runtime or not." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsDeviceTracked constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventIsDeviceTracked_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDeviceTracked constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDeviceTracked Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventIsDeviceTracked_Parms, DeviceType), Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, METADATA_PARAMS(0, nullptr) }; // acf429d83a3748ebfd59a9340053b1a765452c66
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventIsDeviceTracked_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsDeviceTracked Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "IsDeviceTracked", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventIsDeviceTracked_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventIsDeviceTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_IsDeviceTracked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execIsDeviceTracked)
{
	P_GET_ENUM(EOculusXRTrackedDeviceType,Z_Param_DeviceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::IsDeviceTracked(EOculusXRTrackedDeviceType(Z_Param_DeviceType));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function IsDeviceTracked **************************

// ********** Begin Class UOculusXRFunctionLibrary Function IsEnvironmentDepthStarted **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_IsEnvironmentDepthStarted_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventIsEnvironmentDepthStarted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true if StartEnvironmentDepth() has been called and is currently running.\n\x09 * If called right after calling StartEnvironmentDepth() it'll return false as it needs some time for EnvironmentDepth to start\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if StartEnvironmentDepth() has been called and is currently running.\nIf called right after calling StartEnvironmentDepth() it'll return false as it needs some time for EnvironmentDepth to start" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsEnvironmentDepthStarted constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventIsEnvironmentDepthStarted_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEnvironmentDepthStarted constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEnvironmentDepthStarted Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventIsEnvironmentDepthStarted_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsEnvironmentDepthStarted Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "IsEnvironmentDepthStarted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventIsEnvironmentDepthStarted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventIsEnvironmentDepthStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_IsEnvironmentDepthStarted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execIsEnvironmentDepthStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::IsEnvironmentDepthStarted();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function IsEnvironmentDepthStarted ****************

// ********** Begin Class UOculusXRFunctionLibrary Function IsGuardianConfigured *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_IsGuardianConfigured_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventIsGuardianConfigured_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Guardian" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true if the Guardian has been set up by the user, false if the user is in \"seated\" mode and has not set up a play space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the Guardian has been set up by the user, false if the user is in \"seated\" mode and has not set up a play space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsGuardianConfigured constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventIsGuardianConfigured_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGuardianConfigured constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGuardianConfigured Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventIsGuardianConfigured_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsGuardianConfigured Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "IsGuardianConfigured", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventIsGuardianConfigured_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventIsGuardianConfigured_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_IsGuardianConfigured(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execIsGuardianConfigured)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::IsGuardianConfigured();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function IsGuardianConfigured *********************

// ********** Begin Class UOculusXRFunctionLibrary Function IsGuardianDisplayed ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_IsGuardianDisplayed_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventIsGuardianDisplayed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsGuardianDisplayed constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventIsGuardianDisplayed_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGuardianDisplayed constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGuardianDisplayed Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventIsGuardianDisplayed_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsGuardianDisplayed Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "IsGuardianDisplayed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventIsGuardianDisplayed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventIsGuardianDisplayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_IsGuardianDisplayed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execIsGuardianDisplayed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::IsGuardianDisplayed();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function IsGuardianDisplayed **********************

// ********** Begin Class UOculusXRFunctionLibrary Function IsPassthroughRecommended ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_IsPassthroughRecommended_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventIsPassthroughRecommended_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a system recommendation on whether Passthrough should be active.\n\x09 * When set, it is recommended for apps which optionally support an MR experience\n\x09 * with Passthrough to default to that mode.\n\x09 * Currently, this is determined based on whether the user has Passthrough active in the home environment.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a system recommendation on whether Passthrough should be active.\nWhen set, it is recommended for apps which optionally support an MR experience\nwith Passthrough to default to that mode.\nCurrently, this is determined based on whether the user has Passthrough active in the home environment." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsPassthroughRecommended constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventIsPassthroughRecommended_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPassthroughRecommended constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPassthroughRecommended Property Definitions *************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventIsPassthroughRecommended_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPassthroughRecommended Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "IsPassthroughRecommended", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventIsPassthroughRecommended_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventIsPassthroughRecommended_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_IsPassthroughRecommended(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execIsPassthroughRecommended)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::IsPassthroughRecommended();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function IsPassthroughRecommended *****************

// ********** Begin Class UOculusXRFunctionLibrary Function IsPassthroughSupported *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_IsPassthroughSupported_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventIsPassthroughSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if passthrough is supported\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if passthrough is supported" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsPassthroughSupported constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventIsPassthroughSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPassthroughSupported constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPassthroughSupported Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventIsPassthroughSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPassthroughSupported Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "IsPassthroughSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventIsPassthroughSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventIsPassthroughSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_IsPassthroughSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execIsPassthroughSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRFunctionLibrary::IsPassthroughSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function IsPassthroughSupported *******************

// ********** Begin Class UOculusXRFunctionLibrary Function SetBaseRotationAndBaseOffsetInMeters ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms
	{
		FRotator Rotation;
		FVector BaseOffsetInMeters;
		TEnumAsByte<EOrientPositionSelector::Type> Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets 'base rotation' - the rotation that will be subtracted from\n\x09 * the actual HMD orientation.\n\x09 * Sets base position offset (in meters). The base position offset is the distance from the physical (0, 0, 0) position\n\x09 * to current HMD position (bringing the (0, 0, 0) point to the current HMD position)\n\x09 * Note, this vector is set by ResetPosition call; use this method with care.\n\x09 * The axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\x09 *\n\x09 * @param Rotation\x09\x09\x09(in) Rotator object with base rotation\n\x09 * @param BaseOffsetInMeters (in) the vector to be set as base offset, in meters.\n\x09 * @param Options\x09\x09\x09(in) specifies either position, orientation or both should be set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets 'base rotation' - the rotation that will be subtracted from\nthe actual HMD orientation.\nSets base position offset (in meters). The base position offset is the distance from the physical (0, 0, 0) position\nto current HMD position (bringing the (0, 0, 0) point to the current HMD position)\nNote, this vector is set by ResetPosition call; use this method with care.\nThe axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\n@param Rotation                      (in) Rotator object with base rotation\n@param BaseOffsetInMeters (in) the vector to be set as base offset, in meters.\n@param Options                       (in) specifies either position, orientation or both should be set." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetBaseRotationAndBaseOffsetInMeters constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffsetInMeters;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBaseRotationAndBaseOffsetInMeters constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBaseRotationAndBaseOffsetInMeters Property Definitions *************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BaseOffsetInMeters = { "BaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, BaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(0, nullptr) }; // 478cb4cd54875b1e513b179afcf19b22a04ef59b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseOffsetInMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBaseRotationAndBaseOffsetInMeters Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetBaseRotationAndBaseOffsetInMeters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_BaseOffsetInMeters);
	P_GET_PROPERTY(FByteProperty,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(Z_Param_Rotation,Z_Param_BaseOffsetInMeters,EOrientPositionSelector::Type(Z_Param_Options));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetBaseRotationAndBaseOffsetInMeters *****

// ********** Begin Class UOculusXRFunctionLibrary Function SetBaseRotationAndPositionOffset *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetBaseRotationAndPositionOffset_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms
	{
		FRotator BaseRot;
		FVector PosOffset;
		TEnumAsByte<EOrientPositionSelector::Type> Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets 'base rotation' - the rotation that will be subtracted from\n\x09 * the actual HMD orientation.\n\x09 * The position offset might be added to current HMD position,\n\x09 * effectively moving the virtual camera by the specified offset. The addition\n\x09 * occurs after the HMD orientation and position are applied.\n\x09 *\n\x09 * @param BaseRot\x09\x09\x09(in) Rotator object with base rotation\n\x09 * @param PosOffset\x09\x09\x09(in) the vector to be added to HMD position.\n\x09 * @param Options\x09\x09\x09(in) specifies either position, orientation or both should be set.\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets 'base rotation' - the rotation that will be subtracted from\nthe actual HMD orientation.\nThe position offset might be added to current HMD position,\neffectively moving the virtual camera by the specified offset. The addition\noccurs after the HMD orientation and position are applied.\n\n@param BaseRot                       (in) Rotator object with base rotation\n@param PosOffset                     (in) the vector to be added to HMD position.\n@param Options                       (in) specifies either position, orientation or both should be set." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetBaseRotationAndPositionOffset constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBaseRotationAndPositionOffset constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBaseRotationAndPositionOffset Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BaseRot = { "BaseRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, BaseRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PosOffset = { "PosOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, PosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(0, nullptr) }; // 478cb4cd54875b1e513b179afcf19b22a04ef59b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PosOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBaseRotationAndPositionOffset Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetBaseRotationAndPositionOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetBaseRotationAndPositionOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetBaseRotationAndPositionOffset)
{
	P_GET_STRUCT(FRotator,Z_Param_BaseRot);
	P_GET_STRUCT(FVector,Z_Param_PosOffset);
	P_GET_PROPERTY(FByteProperty,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetBaseRotationAndPositionOffset(Z_Param_BaseRot,Z_Param_PosOffset,EOrientPositionSelector::Type(Z_Param_Options));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetBaseRotationAndPositionOffset *********

// ********** Begin Class UOculusXRFunctionLibrary Function SetClientColorDesc *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetClientColorDesc_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetClientColorDesc_Parms
	{
		EOculusXRColorSpace ColorSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the target HMD to do color space correction to a specific color space\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the target HMD to do color space correction to a specific color space" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetClientColorDesc constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetClientColorDesc constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetClientColorDesc Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetClientColorDesc_Parms, ColorSpace), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace, METADATA_PARAMS(0, nullptr) }; // 5a7f37c02706f75c49471966173610d517eee71f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorSpace,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetClientColorDesc Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetClientColorDesc", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetClientColorDesc_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetClientColorDesc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetClientColorDesc(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetClientColorDesc)
{
	P_GET_ENUM(EOculusXRColorSpace,Z_Param_ColorSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetClientColorDesc(EOculusXRColorSpace(Z_Param_ColorSpace));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetClientColorDesc ***********************

// ********** Begin Class UOculusXRFunctionLibrary Function SetColorScaleAndOffset *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetColorScaleAndOffset_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetColorScaleAndOffset_Parms
	{
		FLinearColor ColorScale;
		FLinearColor ColorOffset;
		bool bApplyToAllLayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the Color Scale/Offset\n\x09 */" },
#endif
		{ "CPP_Default_bApplyToAllLayers", "false" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Color Scale/Offset" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorScaleAndOffset constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
	static void NewProp_bApplyToAllLayers_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventSetColorScaleAndOffset_Parms*)Obj)->bApplyToAllLayers = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorScaleAndOffset constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorScaleAndOffset Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bApplyToAllLayers = { "bApplyToAllLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventSetColorScaleAndOffset_Parms), &UHT_STATICS::NewProp_bApplyToAllLayers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bApplyToAllLayers,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetColorScaleAndOffset Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetColorScaleAndOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetColorScaleAndOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetColorScaleAndOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetColorScaleAndOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetColorScaleAndOffset)
{
	P_GET_STRUCT(FLinearColor,Z_Param_ColorScale);
	P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset);
	P_GET_UBOOL(Z_Param_bApplyToAllLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetColorScaleAndOffset *******************

// ********** Begin Class UOculusXRFunctionLibrary Function SetCPUAndGPULevels *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetCPUAndGPULevels_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetCPUAndGPULevels_Parms
	{
		int32 CPULevel;
		int32 GPULevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the CPU and GPU levels as hints to the Oculus device (Deprecated).\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecatedMessage", "Deprecated. Please use Get/SetSuggestedCpuAndGpuPerformanceLevels instead" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the CPU and GPU levels as hints to the Oculus device (Deprecated)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetCPUAndGPULevels constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CPULevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GPULevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCPUAndGPULevels constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCPUAndGPULevels Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetCPUAndGPULevels_Parms, CPULevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetCPUAndGPULevels_Parms, GPULevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CPULevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GPULevel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCPUAndGPULevels Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetCPUAndGPULevels", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetCPUAndGPULevels_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetCPUAndGPULevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetCPUAndGPULevels(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetCPUAndGPULevels)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CPULevel);
	P_GET_PROPERTY(FIntProperty,Z_Param_GPULevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetCPUAndGPULevels ***********************

// ********** Begin Class UOculusXRFunctionLibrary Function SetDisplayFrequency ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetDisplayFrequency_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetDisplayFrequency_Parms
	{
		float RequestedFrequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the requested display frequency\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the requested display frequency" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetDisplayFrequency constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestedFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDisplayFrequency constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDisplayFrequency Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RequestedFrequency = { "RequestedFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetDisplayFrequency_Parms, RequestedFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequestedFrequency,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDisplayFrequency Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetDisplayFrequency", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetDisplayFrequency_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetDisplayFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetDisplayFrequency(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetDisplayFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequestedFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetDisplayFrequency(Z_Param_RequestedFrequency);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetDisplayFrequency **********************

// ********** Begin Class UOculusXRFunctionLibrary Function SetEnvironmentDepthHandRemoval *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetEnvironmentDepthHandRemoval_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetEnvironmentDepthHandRemoval_Parms
	{
		bool RemoveHands;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When hands removal is enabled and hand tracking is active, the region\n\x09 * of the depth texture which contains the hands will be replaced with\n\x09 * the best estimate for depth behind the hands.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When hands removal is enabled and hand tracking is active, the region\nof the depth texture which contains the hands will be replaced with\nthe best estimate for depth behind the hands." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnvironmentDepthHandRemoval constinit property declarations ********
	static void NewProp_RemoveHands_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventSetEnvironmentDepthHandRemoval_Parms*)Obj)->RemoveHands = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveHands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnvironmentDepthHandRemoval constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnvironmentDepthHandRemoval Property Definitions *******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_RemoveHands = { "RemoveHands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventSetEnvironmentDepthHandRemoval_Parms), &UHT_STATICS::NewProp_RemoveHands_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemoveHands,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnvironmentDepthHandRemoval Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetEnvironmentDepthHandRemoval", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetEnvironmentDepthHandRemoval_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetEnvironmentDepthHandRemoval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetEnvironmentDepthHandRemoval(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetEnvironmentDepthHandRemoval)
{
	P_GET_UBOOL(Z_Param_RemoveHands);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetEnvironmentDepthHandRemoval(Z_Param_RemoveHands);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetEnvironmentDepthHandRemoval ***********

// ********** Begin Class UOculusXRFunctionLibrary Function SetEyeBufferSharpenType ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetEyeBufferSharpenType_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetEyeBufferSharpenType_Parms
	{
		EOculusXREyeBufferSharpenType EyeBufferSharpenType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the eyebuffer sharpen type. This amplifies contrast and fine details.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the eyebuffer sharpen type. This amplifies contrast and fine details." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEyeBufferSharpenType constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_EyeBufferSharpenType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EyeBufferSharpenType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEyeBufferSharpenType constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEyeBufferSharpenType Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EyeBufferSharpenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EyeBufferSharpenType = { "EyeBufferSharpenType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetEyeBufferSharpenType_Parms, EyeBufferSharpenType), Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType, METADATA_PARAMS(0, nullptr) }; // 2aab8bc7e8c281f174bfb91c4a9dceedb21a7392
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeBufferSharpenType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EyeBufferSharpenType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEyeBufferSharpenType Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetEyeBufferSharpenType", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetEyeBufferSharpenType_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetEyeBufferSharpenType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetEyeBufferSharpenType(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetEyeBufferSharpenType)
{
	P_GET_ENUM(EOculusXREyeBufferSharpenType,Z_Param_EyeBufferSharpenType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetEyeBufferSharpenType(EOculusXREyeBufferSharpenType(Z_Param_EyeBufferSharpenType));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetEyeBufferSharpenType ******************

// ********** Begin Class UOculusXRFunctionLibrary Function SetFoveatedRenderingLevel **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetFoveatedRenderingLevel_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetFoveatedRenderingLevel_Parms
	{
		EOculusXRFoveatedRenderingLevel level;
		bool isDynamic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the requested foveated rendering level for the next frame, and whether FFR's level is now dynamic or not. Changes to foveated rendering persist across map changes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the requested foveated rendering level for the next frame, and whether FFR's level is now dynamic or not. Changes to foveated rendering persist across map changes." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetFoveatedRenderingLevel constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_level;
	static void NewProp_isDynamic_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventSetFoveatedRenderingLevel_Parms*)Obj)->isDynamic = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDynamic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFoveatedRenderingLevel constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFoveatedRenderingLevel Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetFoveatedRenderingLevel_Parms, level), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 71b74fbe1e7a8a32425233f91e262cc93463e9d4
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_isDynamic = { "isDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventSetFoveatedRenderingLevel_Parms), &UHT_STATICS::NewProp_isDynamic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_level_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_level,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_isDynamic,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetFoveatedRenderingLevel Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetFoveatedRenderingLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetFoveatedRenderingLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetFoveatedRenderingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetFoveatedRenderingLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetFoveatedRenderingLevel)
{
	P_GET_ENUM(EOculusXRFoveatedRenderingLevel,Z_Param_level);
	P_GET_UBOOL(Z_Param_isDynamic);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetFoveatedRenderingLevel(EOculusXRFoveatedRenderingLevel(Z_Param_level),Z_Param_isDynamic);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetFoveatedRenderingLevel ****************

// ********** Begin Class UOculusXRFunctionLibrary Function SetFoveatedRenderingMethod *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetFoveatedRenderingMethod_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetFoveatedRenderingMethod_Parms
	{
		EOculusXRFoveatedRenderingMethod Method;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the requested foveated rendering method. Changes to foveated rendering persist across map changes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the requested foveated rendering method. Changes to foveated rendering persist across map changes." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetFoveatedRenderingMethod constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFoveatedRenderingMethod constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFoveatedRenderingMethod Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetFoveatedRenderingMethod_Parms, Method), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod, METADATA_PARAMS(0, nullptr) }; // 488e6099a9b0212ccc382c9e08041c163eeb2bfa
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Method,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetFoveatedRenderingMethod Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetFoveatedRenderingMethod", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetFoveatedRenderingMethod_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetFoveatedRenderingMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetFoveatedRenderingMethod(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetFoveatedRenderingMethod)
{
	P_GET_ENUM(EOculusXRFoveatedRenderingMethod,Z_Param_Method);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetFoveatedRenderingMethod(EOculusXRFoveatedRenderingMethod(Z_Param_Method));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetFoveatedRenderingMethod ***************

// ********** Begin Class UOculusXRFunctionLibrary Function SetGuardianVisibility ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetGuardianVisibility_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetGuardianVisibility_Parms
	{
		bool GuardianVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGuardianVisibility constinit property declarations *****************
	static void NewProp_GuardianVisible_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventSetGuardianVisibility_Parms*)Obj)->GuardianVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GuardianVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGuardianVisibility constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGuardianVisibility Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_GuardianVisible = { "GuardianVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventSetGuardianVisibility_Parms), &UHT_STATICS::NewProp_GuardianVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GuardianVisible,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGuardianVisibility Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetGuardianVisibility", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetGuardianVisibility_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetGuardianVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetGuardianVisibility(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetGuardianVisibility)
{
	P_GET_UBOOL(Z_Param_GuardianVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetGuardianVisibility(Z_Param_GuardianVisible);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetGuardianVisibility ********************

// ********** Begin Class UOculusXRFunctionLibrary Function SetLocalDimmingOn **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetLocalDimmingOn_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetLocalDimmingOn_Parms
	{
		bool LocalDimmingOn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Turns on or off local dimming\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turns on or off local dimming" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLocalDimmingOn constinit property declarations *********************
	static void NewProp_LocalDimmingOn_SetBit(void* Obj)
	{
		((OculusXRFunctionLibrary_eventSetLocalDimmingOn_Parms*)Obj)->LocalDimmingOn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LocalDimmingOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLocalDimmingOn constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLocalDimmingOn Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_LocalDimmingOn = { "LocalDimmingOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRFunctionLibrary_eventSetLocalDimmingOn_Parms), &UHT_STATICS::NewProp_LocalDimmingOn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalDimmingOn,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLocalDimmingOn Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetLocalDimmingOn", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetLocalDimmingOn_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetLocalDimmingOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetLocalDimmingOn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetLocalDimmingOn)
{
	P_GET_UBOOL(Z_Param_LocalDimmingOn);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetLocalDimmingOn(Z_Param_LocalDimmingOn);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetLocalDimmingOn ************************

// ********** Begin Class UOculusXRFunctionLibrary Function SetPositionScale3D *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetPositionScale3D_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetPositionScale3D_Parms
	{
		FVector PosScale3D;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Scales the HMD position that gets added to the virtual camera position.\n\x09 *\n\x09 * @param PosScale3D\x09(in) the scale to apply to the HMD position.\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This feature is no longer supported." },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales the HMD position that gets added to the virtual camera position.\n\n@param PosScale3D    (in) the scale to apply to the HMD position." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPositionScale3D constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosScale3D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPositionScale3D constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPositionScale3D Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PosScale3D = { "PosScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetPositionScale3D_Parms, PosScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PosScale3D,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPositionScale3D Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetPositionScale3D", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetPositionScale3D_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetPositionScale3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetPositionScale3D(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetPositionScale3D)
{
	P_GET_STRUCT(FVector,Z_Param_PosScale3D);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetPositionScale3D(Z_Param_PosScale3D);
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetPositionScale3D ***********************

// ********** Begin Class UOculusXRFunctionLibrary Function SetSuggestedCpuAndGpuPerformanceLevels *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetSuggestedCpuAndGpuPerformanceLevels_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetSuggestedCpuAndGpuPerformanceLevels_Parms
	{
		EOculusXRProcessorPerformanceLevel CpuPerfLevel;
		EOculusXRProcessorPerformanceLevel GpuPerfLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the suggested CPU and GPU levels to the Oculus device.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the suggested CPU and GPU levels to the Oculus device." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSuggestedCpuAndGpuPerformanceLevels constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_CpuPerfLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CpuPerfLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GpuPerfLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuPerfLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSuggestedCpuAndGpuPerformanceLevels constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSuggestedCpuAndGpuPerformanceLevels Property Definitions ***********
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CpuPerfLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CpuPerfLevel = { "CpuPerfLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetSuggestedCpuAndGpuPerformanceLevels_Parms, CpuPerfLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, METADATA_PARAMS(0, nullptr) }; // fafcf64c528fa7a4dc9d89160f270589182e2592
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_GpuPerfLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_GpuPerfLevel = { "GpuPerfLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetSuggestedCpuAndGpuPerformanceLevels_Parms, GpuPerfLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, METADATA_PARAMS(0, nullptr) }; // fafcf64c528fa7a4dc9d89160f270589182e2592
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CpuPerfLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CpuPerfLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GpuPerfLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GpuPerfLevel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSuggestedCpuAndGpuPerformanceLevels Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetSuggestedCpuAndGpuPerformanceLevels", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetSuggestedCpuAndGpuPerformanceLevels_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetSuggestedCpuAndGpuPerformanceLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetSuggestedCpuAndGpuPerformanceLevels(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetSuggestedCpuAndGpuPerformanceLevels)
{
	P_GET_ENUM(EOculusXRProcessorPerformanceLevel,Z_Param_CpuPerfLevel);
	P_GET_ENUM(EOculusXRProcessorPerformanceLevel,Z_Param_GpuPerfLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetSuggestedCpuAndGpuPerformanceLevels(EOculusXRProcessorPerformanceLevel(Z_Param_CpuPerfLevel),EOculusXRProcessorPerformanceLevel(Z_Param_GpuPerfLevel));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetSuggestedCpuAndGpuPerformanceLevels ***

// ********** Begin Class UOculusXRFunctionLibrary Function SetXROcclusionsMode ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_SetXROcclusionsMode_Statics
struct UHT_STATICS
{
	struct OculusXRFunctionLibrary_eventSetXROcclusionsMode_Parms
	{
		UObject* WorldContextObject;
		EOculusXROcclusionsMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the occlusions mode using environment depth. When occlusions are enabled\n\x09 * virtual objects that are behind physical objects will be occluded so that\n\x09 * the sense of immersion is preserved.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the occlusions mode using environment depth. When occlusions are enabled\nvirtual objects that are behind physical objects will be occluded so that\nthe sense of immersion is preserved." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetXROcclusionsMode constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetXROcclusionsMode constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetXROcclusionsMode Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetXROcclusionsMode_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRFunctionLibrary_eventSetXROcclusionsMode_Parms, Mode), Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode, METADATA_PARAMS(0, nullptr) }; // 2f9f3bb565ab1393a01af1422c34c9d38947d9b7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetXROcclusionsMode Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "SetXROcclusionsMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRFunctionLibrary_eventSetXROcclusionsMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRFunctionLibrary_eventSetXROcclusionsMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_SetXROcclusionsMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execSetXROcclusionsMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EOculusXROcclusionsMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::SetXROcclusionsMode(Z_Param_WorldContextObject,EOculusXROcclusionsMode(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function SetXROcclusionsMode **********************

// ********** Begin Class UOculusXRFunctionLibrary Function StartEnvironmentDepth ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_StartEnvironmentDepth_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create the environment depth texture swap chain and start receiving\n\x09 * depth texture every frame until stopped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create the environment depth texture swap chain and start receiving\ndepth texture every frame until stopped." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartEnvironmentDepth constinit property declarations *****************
// ********** End Function StartEnvironmentDepth constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "StartEnvironmentDepth", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_StartEnvironmentDepth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execStartEnvironmentDepth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::StartEnvironmentDepth();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function StartEnvironmentDepth ********************

// ********** Begin Class UOculusXRFunctionLibrary Function StopEnvironmentDepth *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRFunctionLibrary_StopEnvironmentDepth_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Destroy the environment depth texture swap chain and stop receiving\n\x09 * new depth textures every frame. Call this when environment depth is\n\x09 * no longer needed to free up resources.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy the environment depth texture swap chain and stop receiving\nnew depth textures every frame. Call this when environment depth is\nno longer needed to free up resources." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopEnvironmentDepth constinit property declarations ******************
// ********** End Function StopEnvironmentDepth constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRFunctionLibrary, nullptr, "StopEnvironmentDepth", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOculusXRFunctionLibrary_StopEnvironmentDepth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRFunctionLibrary::execStopEnvironmentDepth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRFunctionLibrary::StopEnvironmentDepth();
	P_NATIVE_END;
}
// ********** End Class UOculusXRFunctionLibrary Function StopEnvironmentDepth *********************

// ********** Begin Class UOculusXRFunctionLibrary *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// namespace OculusXRHMD\n" },
#endif
		{ "IncludePath", "OculusXRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "namespace OculusXRHMD" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRFunctionLibrary constinit property declarations *****************
// ********** End Class UOculusXRFunctionLibrary constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddLoadingSplashScreen"), .Pointer = &UOculusXRFunctionLibrary::execAddLoadingSplashScreen },
		{ .NameUTF8 = UTF8TEXT("BeginProfilingRegion"), .Pointer = &UOculusXRFunctionLibrary::execBeginProfilingRegion },
		{ .NameUTF8 = UTF8TEXT("ClearLoadingSplashScreens"), .Pointer = &UOculusXRFunctionLibrary::execClearLoadingSplashScreens },
		{ .NameUTF8 = UTF8TEXT("EnableOrientationTracking"), .Pointer = &UOculusXRFunctionLibrary::execEnableOrientationTracking },
		{ .NameUTF8 = UTF8TEXT("EnablePositionTracking"), .Pointer = &UOculusXRFunctionLibrary::execEnablePositionTracking },
		{ .NameUTF8 = UTF8TEXT("EndProfilingRegion"), .Pointer = &UOculusXRFunctionLibrary::execEndProfilingRegion },
		{ .NameUTF8 = UTF8TEXT("GetAvailableDisplayFrequencies"), .Pointer = &UOculusXRFunctionLibrary::execGetAvailableDisplayFrequencies },
		{ .NameUTF8 = UTF8TEXT("GetBaseRotationAndBaseOffsetInMeters"), .Pointer = &UOculusXRFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters },
		{ .NameUTF8 = UTF8TEXT("GetBaseRotationAndPositionOffset"), .Pointer = &UOculusXRFunctionLibrary::execGetBaseRotationAndPositionOffset },
		{ .NameUTF8 = UTF8TEXT("GetControllerType"), .Pointer = &UOculusXRFunctionLibrary::execGetControllerType },
		{ .NameUTF8 = UTF8TEXT("GetCurrentDisplayFrequency"), .Pointer = &UOculusXRFunctionLibrary::execGetCurrentDisplayFrequency },
		{ .NameUTF8 = UTF8TEXT("GetDeviceName"), .Pointer = &UOculusXRFunctionLibrary::execGetDeviceName },
		{ .NameUTF8 = UTF8TEXT("GetDeviceType"), .Pointer = &UOculusXRFunctionLibrary::execGetDeviceType },
		{ .NameUTF8 = UTF8TEXT("GetEyeTrackedFoveatedRenderingSupported"), .Pointer = &UOculusXRFunctionLibrary::execGetEyeTrackedFoveatedRenderingSupported },
		{ .NameUTF8 = UTF8TEXT("GetFoveatedRenderingLevel"), .Pointer = &UOculusXRFunctionLibrary::execGetFoveatedRenderingLevel },
		{ .NameUTF8 = UTF8TEXT("GetFoveatedRenderingMethod"), .Pointer = &UOculusXRFunctionLibrary::execGetFoveatedRenderingMethod },
		{ .NameUTF8 = UTF8TEXT("GetGPUFrameTime"), .Pointer = &UOculusXRFunctionLibrary::execGetGPUFrameTime },
		{ .NameUTF8 = UTF8TEXT("GetGPUUtilization"), .Pointer = &UOculusXRFunctionLibrary::execGetGPUUtilization },
		{ .NameUTF8 = UTF8TEXT("GetGuardianDimensions"), .Pointer = &UOculusXRFunctionLibrary::execGetGuardianDimensions },
		{ .NameUTF8 = UTF8TEXT("GetGuardianPoints"), .Pointer = &UOculusXRFunctionLibrary::execGetGuardianPoints },
		{ .NameUTF8 = UTF8TEXT("GetHmdColorDesc"), .Pointer = &UOculusXRFunctionLibrary::execGetHmdColorDesc },
		{ .NameUTF8 = UTF8TEXT("GetNodeGuardianIntersection"), .Pointer = &UOculusXRFunctionLibrary::execGetNodeGuardianIntersection },
		{ .NameUTF8 = UTF8TEXT("GetPerformanceMetrics"), .Pointer = &UOculusXRFunctionLibrary::execGetPerformanceMetrics },
		{ .NameUTF8 = UTF8TEXT("GetPlayAreaTransform"), .Pointer = &UOculusXRFunctionLibrary::execGetPlayAreaTransform },
		{ .NameUTF8 = UTF8TEXT("GetPointGuardianIntersection"), .Pointer = &UOculusXRFunctionLibrary::execGetPointGuardianIntersection },
		{ .NameUTF8 = UTF8TEXT("GetPose"), .Pointer = &UOculusXRFunctionLibrary::execGetPose },
		{ .NameUTF8 = UTF8TEXT("GetRawSensorData"), .Pointer = &UOculusXRFunctionLibrary::execGetRawSensorData },
		{ .NameUTF8 = UTF8TEXT("GetSuggestedCpuAndGpuPerformanceLevels"), .Pointer = &UOculusXRFunctionLibrary::execGetSuggestedCpuAndGpuPerformanceLevels },
		{ .NameUTF8 = UTF8TEXT("GetSystemHmd3DofModeEnabled"), .Pointer = &UOculusXRFunctionLibrary::execGetSystemHmd3DofModeEnabled },
		{ .NameUTF8 = UTF8TEXT("GetUserProfile"), .Pointer = &UOculusXRFunctionLibrary::execGetUserProfile },
		{ .NameUTF8 = UTF8TEXT("GetXrApi"), .Pointer = &UOculusXRFunctionLibrary::execGetXrApi },
		{ .NameUTF8 = UTF8TEXT("HasInputFocus"), .Pointer = &UOculusXRFunctionLibrary::execHasInputFocus },
		{ .NameUTF8 = UTF8TEXT("HasSystemOverlayPresent"), .Pointer = &UOculusXRFunctionLibrary::execHasSystemOverlayPresent },
		{ .NameUTF8 = UTF8TEXT("IsColorPassthroughSupported"), .Pointer = &UOculusXRFunctionLibrary::execIsColorPassthroughSupported },
		{ .NameUTF8 = UTF8TEXT("IsDeviceTracked"), .Pointer = &UOculusXRFunctionLibrary::execIsDeviceTracked },
		{ .NameUTF8 = UTF8TEXT("IsEnvironmentDepthStarted"), .Pointer = &UOculusXRFunctionLibrary::execIsEnvironmentDepthStarted },
		{ .NameUTF8 = UTF8TEXT("IsGuardianConfigured"), .Pointer = &UOculusXRFunctionLibrary::execIsGuardianConfigured },
		{ .NameUTF8 = UTF8TEXT("IsGuardianDisplayed"), .Pointer = &UOculusXRFunctionLibrary::execIsGuardianDisplayed },
		{ .NameUTF8 = UTF8TEXT("IsPassthroughRecommended"), .Pointer = &UOculusXRFunctionLibrary::execIsPassthroughRecommended },
		{ .NameUTF8 = UTF8TEXT("IsPassthroughSupported"), .Pointer = &UOculusXRFunctionLibrary::execIsPassthroughSupported },
		{ .NameUTF8 = UTF8TEXT("SetBaseRotationAndBaseOffsetInMeters"), .Pointer = &UOculusXRFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters },
		{ .NameUTF8 = UTF8TEXT("SetBaseRotationAndPositionOffset"), .Pointer = &UOculusXRFunctionLibrary::execSetBaseRotationAndPositionOffset },
		{ .NameUTF8 = UTF8TEXT("SetClientColorDesc"), .Pointer = &UOculusXRFunctionLibrary::execSetClientColorDesc },
		{ .NameUTF8 = UTF8TEXT("SetColorScaleAndOffset"), .Pointer = &UOculusXRFunctionLibrary::execSetColorScaleAndOffset },
		{ .NameUTF8 = UTF8TEXT("SetCPUAndGPULevels"), .Pointer = &UOculusXRFunctionLibrary::execSetCPUAndGPULevels },
		{ .NameUTF8 = UTF8TEXT("SetDisplayFrequency"), .Pointer = &UOculusXRFunctionLibrary::execSetDisplayFrequency },
		{ .NameUTF8 = UTF8TEXT("SetEnvironmentDepthHandRemoval"), .Pointer = &UOculusXRFunctionLibrary::execSetEnvironmentDepthHandRemoval },
		{ .NameUTF8 = UTF8TEXT("SetEyeBufferSharpenType"), .Pointer = &UOculusXRFunctionLibrary::execSetEyeBufferSharpenType },
		{ .NameUTF8 = UTF8TEXT("SetFoveatedRenderingLevel"), .Pointer = &UOculusXRFunctionLibrary::execSetFoveatedRenderingLevel },
		{ .NameUTF8 = UTF8TEXT("SetFoveatedRenderingMethod"), .Pointer = &UOculusXRFunctionLibrary::execSetFoveatedRenderingMethod },
		{ .NameUTF8 = UTF8TEXT("SetGuardianVisibility"), .Pointer = &UOculusXRFunctionLibrary::execSetGuardianVisibility },
		{ .NameUTF8 = UTF8TEXT("SetLocalDimmingOn"), .Pointer = &UOculusXRFunctionLibrary::execSetLocalDimmingOn },
		{ .NameUTF8 = UTF8TEXT("SetPositionScale3D"), .Pointer = &UOculusXRFunctionLibrary::execSetPositionScale3D },
		{ .NameUTF8 = UTF8TEXT("SetSuggestedCpuAndGpuPerformanceLevels"), .Pointer = &UOculusXRFunctionLibrary::execSetSuggestedCpuAndGpuPerformanceLevels },
		{ .NameUTF8 = UTF8TEXT("SetXROcclusionsMode"), .Pointer = &UOculusXRFunctionLibrary::execSetXROcclusionsMode },
		{ .NameUTF8 = UTF8TEXT("StartEnvironmentDepth"), .Pointer = &UOculusXRFunctionLibrary::execStartEnvironmentDepth },
		{ .NameUTF8 = UTF8TEXT("StopEnvironmentDepth"), .Pointer = &UOculusXRFunctionLibrary::execStopEnvironmentDepth },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_AddLoadingSplashScreen, "AddLoadingSplashScreen" }, // d6d878de51ca0ba104146aa02567964644ba7388
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_BeginProfilingRegion, "BeginProfilingRegion" }, // 8ceb156102c8f77941aadd19f3413af0e30af652
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_ClearLoadingSplashScreens, "ClearLoadingSplashScreens" }, // 2bd9f891189130b4a75fff9d6a0b1266d15b18a0
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_EnableOrientationTracking, "EnableOrientationTracking" }, // a7bf3a39e951970df62834d7a184d6dde056622b
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_EnablePositionTracking, "EnablePositionTracking" }, // abc34c40e64787870c70592c564a9306d6f60a49
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_EndProfilingRegion, "EndProfilingRegion" }, // 9ab870fc080f2343a533d9890daeb51438de8a80
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetAvailableDisplayFrequencies, "GetAvailableDisplayFrequencies" }, // 80aa75a0ea041c8bd49ffaf0a79fff65e92a73f5
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters, "GetBaseRotationAndBaseOffsetInMeters" }, // ff7cc054796bacff4577d1ae2c72d2175ad27afa
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetBaseRotationAndPositionOffset, "GetBaseRotationAndPositionOffset" }, // c4741fe52e7b518dd83a03f3c6a7b81bbb9d2036
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetControllerType, "GetControllerType" }, // d87167fd5b36a9054808972f8074f0ab1d21bf24
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetCurrentDisplayFrequency, "GetCurrentDisplayFrequency" }, // 40575d491c48202427d1aa8c994f160851dda736
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetDeviceName, "GetDeviceName" }, // 91382528ab183d797e6681365d5453e169f64006
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetDeviceType, "GetDeviceType" }, // 28f8d672854ba84f5f2601bc1f04bff898abe430
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetEyeTrackedFoveatedRenderingSupported, "GetEyeTrackedFoveatedRenderingSupported" }, // 462497bf67633de9cc9d5ca5e26280d50d1e0d8a
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetFoveatedRenderingLevel, "GetFoveatedRenderingLevel" }, // c0eea3dfafb8b32c71bc27492eb619a10139cea7
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetFoveatedRenderingMethod, "GetFoveatedRenderingMethod" }, // 211514fea29ae91c49b72163418d2713b675f644
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGPUFrameTime, "GetGPUFrameTime" }, // 947027158cde4772fa49b696feb467fb4e285661
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGPUUtilization, "GetGPUUtilization" }, // 8a691c1b3fd058ab257fb38165add129d7d9ee46
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGuardianDimensions, "GetGuardianDimensions" }, // ff81d22464513e713ebfa39fffba175fbc41eedd
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetGuardianPoints, "GetGuardianPoints" }, // 529251cdef21a7c6ec2ed080d10bd63945886124
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetHmdColorDesc, "GetHmdColorDesc" }, // d482931e3411f76eacec7815bbd077e18972d43b
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetNodeGuardianIntersection, "GetNodeGuardianIntersection" }, // fcf39f7c9e9e6703d19423f370fb4d40c47d6ff5
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPerformanceMetrics, "GetPerformanceMetrics" }, // 77e81e7ed998aa45986ade26a8f4b2de0f86dba7
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPlayAreaTransform, "GetPlayAreaTransform" }, // 7224c5b49397c189ad91f2d22a967d6228ff6d2c
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPointGuardianIntersection, "GetPointGuardianIntersection" }, // 2b3d337e0e623d4cdd295944f15a452971faefcc
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetPose, "GetPose" }, // 1bcb5dbf7ca45ce9af3744836b075b930e8c3e21
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetRawSensorData, "GetRawSensorData" }, // 39a3013896beb7a13526931cff8466d0b4449e63
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetSuggestedCpuAndGpuPerformanceLevels, "GetSuggestedCpuAndGpuPerformanceLevels" }, // bf83bf604fbe49a823b880fa52ca6eaf3e352770
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetSystemHmd3DofModeEnabled, "GetSystemHmd3DofModeEnabled" }, // 3cdfd7058114502fe7ff730a409601957c6dae04
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetUserProfile, "GetUserProfile" }, // b822ffb96acf76f6611c6f687474070a32491f27
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_GetXrApi, "GetXrApi" }, // 873fbd115a47f2087fd1c320845716d5b053ed5b
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_HasInputFocus, "HasInputFocus" }, // 7f7312e462ecf6c678060fb2d121a731bf393c5b
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_HasSystemOverlayPresent, "HasSystemOverlayPresent" }, // e6e74b8080b0e580c86690a94d106a46ff31fd49
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_IsColorPassthroughSupported, "IsColorPassthroughSupported" }, // c4021850ce897ca395a3126298d836aadff45251
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_IsDeviceTracked, "IsDeviceTracked" }, // 0cb60e6983edd00fe61c22d101ba66480131b064
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_IsEnvironmentDepthStarted, "IsEnvironmentDepthStarted" }, // 28d2eb325f3a4e8cbda264dc66d07f9308a20676
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_IsGuardianConfigured, "IsGuardianConfigured" }, // 7de453181e33a67d6d5f241de8fa78294cf00b30
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_IsGuardianDisplayed, "IsGuardianDisplayed" }, // f75290b04e8303886044d85d84e56e24dbad89e0
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_IsPassthroughRecommended, "IsPassthroughRecommended" }, // 45f71496129dca3c63abd0eb91bdfd82ccde343e
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_IsPassthroughSupported, "IsPassthroughSupported" }, // 34bdcc7f75df0a0e82266f67bd59160f1a57e6b5
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters, "SetBaseRotationAndBaseOffsetInMeters" }, // 1947dfac38d4d75a16cbe8910ff3f6ddf28f0c49
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetBaseRotationAndPositionOffset, "SetBaseRotationAndPositionOffset" }, // e38a93472befc60f457106b83e887d8f02d23968
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetClientColorDesc, "SetClientColorDesc" }, // 127ac752719668ce046af6d5037c78cc318adfc7
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetColorScaleAndOffset, "SetColorScaleAndOffset" }, // 0f34e7d8d8957074831faa175f487672bf31cf8b
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetCPUAndGPULevels, "SetCPUAndGPULevels" }, // 3ca0bc7c834e6f99d2919e25a2c926ed3cca5670
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetDisplayFrequency, "SetDisplayFrequency" }, // 1f19cbdc7c0e84c8ca592956450ac282d6c2ad63
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetEnvironmentDepthHandRemoval, "SetEnvironmentDepthHandRemoval" }, // 901c0cf88f9aaed264182b2eaa5134e9218a8869
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetEyeBufferSharpenType, "SetEyeBufferSharpenType" }, // 427413b81a70e10f74af16296631ff9d618d4d6c
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetFoveatedRenderingLevel, "SetFoveatedRenderingLevel" }, // 2f7e83447201165ea669f210319917b48adefe21
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetFoveatedRenderingMethod, "SetFoveatedRenderingMethod" }, // 7eff9a107ea374a23789b6281812d530ff3156dc
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetGuardianVisibility, "SetGuardianVisibility" }, // 20c90bfa9cc3e9e1b7d2cd1322fef718a5c30778
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetLocalDimmingOn, "SetLocalDimmingOn" }, // 7dc2be5b6cb7b9b880bce6d4a84ea01ea556cb28
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetPositionScale3D, "SetPositionScale3D" }, // a328a4369da589bd5e1260b5f88192213b314b85
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetSuggestedCpuAndGpuPerformanceLevels, "SetSuggestedCpuAndGpuPerformanceLevels" }, // 45e7fcb7eca96c5e6b60736ecd00ab6db66e7d12
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_SetXROcclusionsMode, "SetXROcclusionsMode" }, // 7be710a6fc4638630e05ad6823777209f1b20720
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_StartEnvironmentDepth, "StartEnvironmentDepth" }, // 279c2eb694ad738ccc3dfc67f23e8fa577fcdd23
		{ &Z_Construct_UFunction_UOculusXRFunctionLibrary_StopEnvironmentDepth, "StopEnvironmentDepth" }, // c16c8929d13bead2fb846b25b61b62430039d662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRHMD,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRFunctionLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRFunctionLibrary_StaticRegisterNativesUOculusXRFunctionLibrary()
{
	UClass* Class = UOculusXRFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRFunctionLibrary;
UClass* Z_Construct_UClass_UOculusXRFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRFunctionLibrary;
		if (!Z_Registration_Info_UClass_UOculusXRFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRFunctionLibrary"),
				Z_Registration_Info_UClass_UOculusXRFunctionLibrary.InnerSingleton,
				UOculusXRFunctionLibrary_StaticRegisterNativesUOculusXRFunctionLibrary,
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
		return Z_Registration_Info_UClass_UOculusXRFunctionLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRFunctionLibrary);
UOculusXRFunctionLibrary::~UOculusXRFunctionLibrary() {}
// ********** End Class UOculusXRFunctionLibrary ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h__Script_OculusXRHMD_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRFunctionLibrary, TEXT("UOculusXRFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRFunctionLibrary), 4170256913U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h__Script_OculusXRHMD_b1f2bd066f24b795ad81984d811e813c0337b5d3{
	TEXT("/Script/OculusXRHMD"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
