// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovementFunctionLibrary.h"
#include "OculusXRMovementTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRMovementFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRMovement(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceVisemesState(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary(ETypeConstructPhase);
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsBodyTrackingEnabled **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBodyTrackingEnabled constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBodyTrackingEnabled constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBodyTrackingEnabled Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsBodyTrackingEnabled Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsBodyTrackingEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsBodyTrackingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsBodyTrackingEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsBodyTrackingEnabled ************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsBodyTrackingSupported ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBodyTrackingSupported constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBodyTrackingSupported constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBodyTrackingSupported Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsBodyTrackingSupported Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsBodyTrackingSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsBodyTrackingSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsBodyTrackingSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsBodyTrackingSupported **********

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsEyeTrackingEnabled ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEyeTrackingEnabled constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEyeTrackingEnabled constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEyeTrackingEnabled Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsEyeTrackingEnabled Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsEyeTrackingEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsEyeTrackingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsEyeTrackingEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsEyeTrackingEnabled *************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsEyeTrackingSupported *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEyeTrackingSupported constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEyeTrackingSupported constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEyeTrackingSupported Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsEyeTrackingSupported Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsEyeTrackingSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsEyeTrackingSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsEyeTrackingSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsEyeTrackingSupported ***********

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingEnabled **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFaceTrackingEnabled constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFaceTrackingEnabled constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFaceTrackingEnabled Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsFaceTrackingEnabled Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingEnabled ************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingSupported ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFaceTrackingSupported constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFaceTrackingSupported constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFaceTrackingSupported Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsFaceTrackingSupported Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingSupported **********

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingVisemesEnabled ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFaceTrackingVisemesEnabled constinit property declarations **********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFaceTrackingVisemesEnabled constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFaceTrackingVisemesEnabled Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsFaceTrackingVisemesEnabled Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingVisemesEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingVisemesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingVisemesEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingVisemesEnabled *****

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingVisemesSupported *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFaceTrackingVisemesSupported constinit property declarations ********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFaceTrackingVisemesSupported constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFaceTrackingVisemesSupported Property Definitions *******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsFaceTrackingVisemesSupported Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingVisemesSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingVisemesSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingVisemesSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingVisemesSupported ***

// ********** Begin Class UOculusXRMovementFunctionLibrary Function RequestBodyTrackingFidelity ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms
	{
		EOculusXRBodyTrackingFidelity fidelity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestBodyTrackingFidelity constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_fidelity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_fidelity;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestBodyTrackingFidelity constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestBodyTrackingFidelity Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_fidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_fidelity = { "fidelity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms, fidelity), Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity, METADATA_PARAMS(0, nullptr) }; // 3c8a7ac7bceb21387ecf5c1302822fd27a9315c0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_fidelity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_fidelity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RequestBodyTrackingFidelity Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "RequestBodyTrackingFidelity", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execRequestBodyTrackingFidelity)
{
	P_GET_ENUM(EOculusXRBodyTrackingFidelity,Z_Param_fidelity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::RequestBodyTrackingFidelity(EOculusXRBodyTrackingFidelity(Z_Param_fidelity));
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function RequestBodyTrackingFidelity ******

// ********** Begin Class UOculusXRMovementFunctionLibrary Function ResetBodyTrackingCalibration ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetBodyTrackingCalibration constinit property declarations **********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetBodyTrackingCalibration constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetBodyTrackingCalibration Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResetBodyTrackingCalibration Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "ResetBodyTrackingCalibration", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execResetBodyTrackingCalibration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::ResetBodyTrackingCalibration();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function ResetBodyTrackingCalibration *****

// ********** Begin Class UOculusXRMovementFunctionLibrary Function SetFaceTrackingVisemesEnabled **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms
	{
		bool faceTrackingVisemesEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFaceTrackingVisemesEnabled constinit property declarations *********
	static void NewProp_faceTrackingVisemesEnabled_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms*)Obj)->faceTrackingVisemesEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_faceTrackingVisemesEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFaceTrackingVisemesEnabled constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFaceTrackingVisemesEnabled Property Definitions ********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_faceTrackingVisemesEnabled = { "faceTrackingVisemesEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms), &UHT_STATICS::NewProp_faceTrackingVisemesEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_faceTrackingVisemesEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetFaceTrackingVisemesEnabled Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "SetFaceTrackingVisemesEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execSetFaceTrackingVisemesEnabled)
{
	P_GET_UBOOL(Z_Param_faceTrackingVisemesEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::SetFaceTrackingVisemesEnabled(Z_Param_faceTrackingVisemesEnabled);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function SetFaceTrackingVisemesEnabled ****

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StartBodyTracking **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "StartBodyTracking is deprecated, use StartBodyTrackingByJointSet." },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartBodyTracking constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartBodyTracking constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartBodyTracking Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartBodyTracking Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartBodyTracking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartBodyTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartBodyTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StartBodyTracking ****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StartBodyTrackingByJointSet ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms
	{
		EOculusXRBodyJointSet jointSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartBodyTrackingByJointSet constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_jointSet_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_jointSet;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartBodyTrackingByJointSet constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartBodyTrackingByJointSet Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_jointSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_jointSet = { "jointSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms, jointSet), Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet, METADATA_PARAMS(0, nullptr) }; // c3a8389ce047448849d33550d14ebeec06aa9d84
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_jointSet_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_jointSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartBodyTrackingByJointSet Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartBodyTrackingByJointSet", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartBodyTrackingByJointSet)
{
	P_GET_ENUM(EOculusXRBodyJointSet,Z_Param_jointSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartBodyTrackingByJointSet(EOculusXRBodyJointSet(Z_Param_jointSet));
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StartBodyTrackingByJointSet ******

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StartEyeTracking ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartEyeTracking constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartEyeTracking constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartEyeTracking Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartEyeTracking Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartEyeTracking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartEyeTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartEyeTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StartEyeTracking *****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StartFaceTracking **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartFaceTracking constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartFaceTracking constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartFaceTracking Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartFaceTracking Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartFaceTracking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartFaceTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartFaceTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StartFaceTracking ****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StopBodyTracking ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopBodyTracking constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopBodyTracking constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopBodyTracking Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopBodyTracking Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopBodyTracking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopBodyTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopBodyTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StopBodyTracking *****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StopEyeTracking ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopEyeTracking constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopEyeTracking constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopEyeTracking Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopEyeTracking Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopEyeTracking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopEyeTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopEyeTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StopEyeTracking ******************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StopFaceTracking ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopFaceTracking constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopFaceTracking constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopFaceTracking Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopFaceTracking Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopFaceTracking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopFaceTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopFaceTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StopFaceTracking *****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function SuggestBodyTrackingCalibrationOverride 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms
	{
		float height;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SuggestBodyTrackingCalibrationOverride constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_height;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SuggestBodyTrackingCalibrationOverride constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SuggestBodyTrackingCalibrationOverride Property Definitions ***********
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms, height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SuggestBodyTrackingCalibrationOverride Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "SuggestBodyTrackingCalibrationOverride", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execSuggestBodyTrackingCalibrationOverride)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::SuggestBodyTrackingCalibrationOverride(Z_Param_height);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function SuggestBodyTrackingCalibrationOverride 

// ********** Begin Class UOculusXRMovementFunctionLibrary Function TryGetBodyState ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms
	{
		FOculusXRBodyState outBodyState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetBodyState constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outBodyState;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetBodyState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetBodyState Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outBodyState = { "outBodyState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms, outBodyState), Z_Construct_UScriptStruct_FOculusXRBodyState, METADATA_PARAMS(0, nullptr) }; // dfaf27fde3436a275a549da3aedb55adda3cf6e7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outBodyState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetBodyState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetBodyState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetBodyState)
{
	P_GET_STRUCT_REF(FOculusXRBodyState,Z_Param_Out_outBodyState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetBodyState(Z_Param_Out_outBodyState);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function TryGetBodyState ******************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function TryGetEyeGazesState ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms
	{
		FOculusXREyeGazesState outEyeGazesState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetEyeGazesState constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outEyeGazesState;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetEyeGazesState constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetEyeGazesState Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outEyeGazesState = { "outEyeGazesState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms, outEyeGazesState), Z_Construct_UScriptStruct_FOculusXREyeGazesState, METADATA_PARAMS(0, nullptr) }; // 5bd36adb57f155839c73bbc2112b29c808af5255
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outEyeGazesState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetEyeGazesState Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetEyeGazesState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetEyeGazesState)
{
	P_GET_STRUCT_REF(FOculusXREyeGazesState,Z_Param_Out_outEyeGazesState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetEyeGazesState(Z_Param_Out_outEyeGazesState);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function TryGetEyeGazesState **************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function TryGetFaceState ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms
	{
		FOculusXRFaceState outFaceState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetFaceState constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outFaceState;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetFaceState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetFaceState Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outFaceState = { "outFaceState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms, outFaceState), Z_Construct_UScriptStruct_FOculusXRFaceState, METADATA_PARAMS(0, nullptr) }; // 4b606b670b05fbcdbe65e8ce9accf3af9c4f1782
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outFaceState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetFaceState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetFaceState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetFaceState)
{
	P_GET_STRUCT_REF(FOculusXRFaceState,Z_Param_Out_outFaceState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetFaceState(Z_Param_Out_outFaceState);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function TryGetFaceState ******************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function TryGetFaceVisemesState *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics
struct UHT_STATICS
{
	struct OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms
	{
		FOculusXRFaceVisemesState outFaceVisemesState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetFaceVisemesState constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outFaceVisemesState;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetFaceVisemesState constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetFaceVisemesState Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_outFaceVisemesState = { "outFaceVisemesState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms, outFaceVisemesState), Z_Construct_UScriptStruct_FOculusXRFaceVisemesState, METADATA_PARAMS(0, nullptr) }; // 95c61f4bb3da1362363db5751349608d990268c7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outFaceVisemesState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryGetFaceVisemesState Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetFaceVisemesState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetFaceVisemesState)
{
	P_GET_STRUCT_REF(FOculusXRFaceVisemesState,Z_Param_Out_outFaceVisemesState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetFaceVisemesState(Z_Param_Out_outFaceVisemesState);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function TryGetFaceVisemesState ***********

// ********** Begin Class UOculusXRMovementFunctionLibrary *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "OculusXRMovementFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRMovementFunctionLibrary constinit property declarations *********
// ********** End Class UOculusXRMovementFunctionLibrary constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsBodyTrackingEnabled"), .Pointer = &UOculusXRMovementFunctionLibrary::execIsBodyTrackingEnabled },
		{ .NameUTF8 = UTF8TEXT("IsBodyTrackingSupported"), .Pointer = &UOculusXRMovementFunctionLibrary::execIsBodyTrackingSupported },
		{ .NameUTF8 = UTF8TEXT("IsEyeTrackingEnabled"), .Pointer = &UOculusXRMovementFunctionLibrary::execIsEyeTrackingEnabled },
		{ .NameUTF8 = UTF8TEXT("IsEyeTrackingSupported"), .Pointer = &UOculusXRMovementFunctionLibrary::execIsEyeTrackingSupported },
		{ .NameUTF8 = UTF8TEXT("IsFaceTrackingEnabled"), .Pointer = &UOculusXRMovementFunctionLibrary::execIsFaceTrackingEnabled },
		{ .NameUTF8 = UTF8TEXT("IsFaceTrackingSupported"), .Pointer = &UOculusXRMovementFunctionLibrary::execIsFaceTrackingSupported },
		{ .NameUTF8 = UTF8TEXT("IsFaceTrackingVisemesEnabled"), .Pointer = &UOculusXRMovementFunctionLibrary::execIsFaceTrackingVisemesEnabled },
		{ .NameUTF8 = UTF8TEXT("IsFaceTrackingVisemesSupported"), .Pointer = &UOculusXRMovementFunctionLibrary::execIsFaceTrackingVisemesSupported },
		{ .NameUTF8 = UTF8TEXT("RequestBodyTrackingFidelity"), .Pointer = &UOculusXRMovementFunctionLibrary::execRequestBodyTrackingFidelity },
		{ .NameUTF8 = UTF8TEXT("ResetBodyTrackingCalibration"), .Pointer = &UOculusXRMovementFunctionLibrary::execResetBodyTrackingCalibration },
		{ .NameUTF8 = UTF8TEXT("SetFaceTrackingVisemesEnabled"), .Pointer = &UOculusXRMovementFunctionLibrary::execSetFaceTrackingVisemesEnabled },
		{ .NameUTF8 = UTF8TEXT("StartBodyTracking"), .Pointer = &UOculusXRMovementFunctionLibrary::execStartBodyTracking },
		{ .NameUTF8 = UTF8TEXT("StartBodyTrackingByJointSet"), .Pointer = &UOculusXRMovementFunctionLibrary::execStartBodyTrackingByJointSet },
		{ .NameUTF8 = UTF8TEXT("StartEyeTracking"), .Pointer = &UOculusXRMovementFunctionLibrary::execStartEyeTracking },
		{ .NameUTF8 = UTF8TEXT("StartFaceTracking"), .Pointer = &UOculusXRMovementFunctionLibrary::execStartFaceTracking },
		{ .NameUTF8 = UTF8TEXT("StopBodyTracking"), .Pointer = &UOculusXRMovementFunctionLibrary::execStopBodyTracking },
		{ .NameUTF8 = UTF8TEXT("StopEyeTracking"), .Pointer = &UOculusXRMovementFunctionLibrary::execStopEyeTracking },
		{ .NameUTF8 = UTF8TEXT("StopFaceTracking"), .Pointer = &UOculusXRMovementFunctionLibrary::execStopFaceTracking },
		{ .NameUTF8 = UTF8TEXT("SuggestBodyTrackingCalibrationOverride"), .Pointer = &UOculusXRMovementFunctionLibrary::execSuggestBodyTrackingCalibrationOverride },
		{ .NameUTF8 = UTF8TEXT("TryGetBodyState"), .Pointer = &UOculusXRMovementFunctionLibrary::execTryGetBodyState },
		{ .NameUTF8 = UTF8TEXT("TryGetEyeGazesState"), .Pointer = &UOculusXRMovementFunctionLibrary::execTryGetEyeGazesState },
		{ .NameUTF8 = UTF8TEXT("TryGetFaceState"), .Pointer = &UOculusXRMovementFunctionLibrary::execTryGetFaceState },
		{ .NameUTF8 = UTF8TEXT("TryGetFaceVisemesState"), .Pointer = &UOculusXRMovementFunctionLibrary::execTryGetFaceVisemesState },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled, "IsBodyTrackingEnabled" }, // 21cc6fcb01f52dcbb33f9f832f51fd994853a8d8
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported, "IsBodyTrackingSupported" }, // 502257bc8664d9be850a12b45b8ab2b7b538d93b
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled, "IsEyeTrackingEnabled" }, // 624f352b91d9778ee8c6381dbb152a961e0ab1df
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported, "IsEyeTrackingSupported" }, // 60067b386997d19eb6f64340a2749927208af8ca
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled, "IsFaceTrackingEnabled" }, // c6df7aa5925831c2f66f4dd2734d08188507dc27
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported, "IsFaceTrackingSupported" }, // dff101671a291a8ec25c489bee59ec53134fa423
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled, "IsFaceTrackingVisemesEnabled" }, // 899fcf767ad6b8177e2eb7b28c868b4c22f83abe
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported, "IsFaceTrackingVisemesSupported" }, // 57ccf85e1e684cb213593d67469f9d386a6f40e2
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity, "RequestBodyTrackingFidelity" }, // d723b70efb4ee73daaf688dda43bd72666ec2349
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration, "ResetBodyTrackingCalibration" }, // e1dbcca7a01838626759a11e39de400b80beb373
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled, "SetFaceTrackingVisemesEnabled" }, // 48a9d7e5eed72038aef320a53a79c11510b1d301
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking, "StartBodyTracking" }, // 20841550f57b8f1abf72e2fbd71c4388856fe4cc
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet, "StartBodyTrackingByJointSet" }, // f2edc4ec2c7e7c60413d19609d198208078b4702
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking, "StartEyeTracking" }, // 5ebbe6a69a1a601dd16bc3c09df00edda98dd7d7
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking, "StartFaceTracking" }, // 3e63e2387f0379cb9277d29c29b2cbdda0a6c7b7
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking, "StopBodyTracking" }, // 8a34e48f0a20c80e830f63ddcb87aebd08c96c1d
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking, "StopEyeTracking" }, // 49f39395b1d6e4f54d1033151834a2ee66456505
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking, "StopFaceTracking" }, // 669374ff6662c5eed5a6117b097f179f80ab31b9
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride, "SuggestBodyTrackingCalibrationOverride" }, // 1fc4a6ce293ac99b13b5f3510f021f3d29295120
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState, "TryGetBodyState" }, // 171fb9adcd95ec19f465edbe797f209757916ef9
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState, "TryGetEyeGazesState" }, // 137c802c9ccf473da8569d62a4ef1eae1e6b4560
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState, "TryGetFaceState" }, // ec9927fc9a2f554747c52564e1b3cd4272c2ff70
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState, "TryGetFaceVisemesState" }, // f521bd33204fc6b7080aef15177e20802a6cd5fc
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMovementFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRMovementFunctionLibrary,
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
static void UOculusXRMovementFunctionLibrary_StaticRegisterNativesUOculusXRMovementFunctionLibrary()
{
	UClass* Class = UOculusXRMovementFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary;
UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRMovementFunctionLibrary;
		if (!Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRMovementFunctionLibrary"),
				Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.InnerSingleton,
				UOculusXRMovementFunctionLibrary_StaticRegisterNativesUOculusXRMovementFunctionLibrary,
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
		return Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
UOculusXRMovementFunctionLibrary::UOculusXRMovementFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRMovementFunctionLibrary);
UOculusXRMovementFunctionLibrary::~UOculusXRMovementFunctionLibrary() {}
// ********** End Class UOculusXRMovementFunctionLibrary *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h__Script_OculusXRMovement_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMovementFunctionLibrary, TEXT("UOculusXRMovementFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMovementFunctionLibrary), 3184668768U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h__Script_OculusXRMovement_aa6f997a091ce9989cab1af0312c099945c2c04a{
	TEXT("/Script/OculusXRMovement"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
