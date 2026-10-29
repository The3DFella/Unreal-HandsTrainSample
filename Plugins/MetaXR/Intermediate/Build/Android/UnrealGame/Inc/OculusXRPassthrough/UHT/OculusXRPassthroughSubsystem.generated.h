// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPassthroughSubsystem.h"

#ifdef OCULUSXRPASSTHROUGH_OculusXRPassthroughSubsystem_generated_h
#error "OculusXRPassthroughSubsystem.generated.h already included, missing '#pragma once' in OculusXRPassthroughSubsystem.h"
#endif
#define OCULUSXRPASSTHROUGH_OculusXRPassthroughSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusXRPersistentPassthroughInstance;
class UTextureCube;
struct FLightingEstimation_LightingEstimate;
struct FLinearColor;
struct FOculusXRPersistentPassthroughParameters;

// ********** Begin ScriptStruct FLightingEstimation_LightingEstimate ******************************
struct Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate_Statics;
OCULUSXRPASSTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FLightingEstimation_LightingEstimate(ETypeConstructPhase::Inner); }


struct FLightingEstimation_LightingEstimate;
// ********** End ScriptStruct FLightingEstimation_LightingEstimate ********************************

// ********** Begin Class UOculusXRPassthroughSubsystem ********************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnvironmentMap); \
	DECLARE_FUNCTION(execGetLightingEstimateColorCorrection); \
	DECLARE_FUNCTION(execGetEnvironmentMapLightingEstimate); \
	DECLARE_FUNCTION(execGetDirectionalLightingEstimate); \
	DECLARE_FUNCTION(execStopLightingEstimation); \
	DECLARE_FUNCTION(execStartLightingEstimation); \
	DECLARE_FUNCTION(execIsLightingEstimationRunning); \
	DECLARE_FUNCTION(execGetPersistentPassthrough); \
	DECLARE_FUNCTION(execDestroyPersistentPassthrough); \
	DECLARE_FUNCTION(execInitializePersistentPassthrough);


struct Z_Construct_UClass_UOculusXRPassthroughSubsystem_Statics;
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughSubsystem(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRPassthroughSubsystem_Statics; \
	friend OCULUSXRPASSTHROUGH_API UClass* ::Z_Construct_UClass_UOculusXRPassthroughSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRPassthroughSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRPassthroughSubsystem) \
	DECLARE_SERIALIZER(UOculusXRPassthroughSubsystem)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPassthroughSubsystem(UOculusXRPassthroughSubsystem&&) = delete; \
	UOculusXRPassthroughSubsystem(const UOculusXRPassthroughSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRPassthroughSubsystem) \
	NO_API virtual ~UOculusXRPassthroughSubsystem();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_35_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPassthroughSubsystem;

// ********** End Class UOculusXRPassthroughSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LookOut_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
