// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPersistentPassthroughInstance.h"

#ifdef OCULUSXRPASSTHROUGH_OculusXRPersistentPassthroughInstance_generated_h
#error "OculusXRPersistentPassthroughInstance.generated.h already included, missing '#pragma once' in OculusXRPersistentPassthroughInstance.h"
#endif
#define OCULUSXRPASSTHROUGH_OculusXRPersistentPassthroughInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusXRStereoLayerShapeReconstructed;

// ********** Begin ScriptStruct FOculusXRPersistentPassthroughParameters **************************
struct Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters_Statics;
OCULUSXRPASSTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters(ETypeConstructPhase::Inner); }


struct FOculusXRPersistentPassthroughParameters;
// ********** End ScriptStruct FOculusXRPersistentPassthroughParameters ****************************

// ********** Begin Class UOculusXRPersistentPassthroughInstance ***********************************
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAnyLayerResumedEvent); \
	DECLARE_FUNCTION(execGetShape); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execSetVisible);


struct Z_Construct_UClass_UOculusXRPersistentPassthroughInstance_Statics;
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPersistentPassthroughInstance(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRPersistentPassthroughInstance_Statics; \
	friend OCULUSXRPASSTHROUGH_API UClass* ::Z_Construct_UClass_UOculusXRPersistentPassthroughInstance(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRPersistentPassthroughInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRPersistentPassthroughInstance) \
	DECLARE_SERIALIZER(UOculusXRPersistentPassthroughInstance)


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPersistentPassthroughInstance(UOculusXRPersistentPassthroughInstance&&) = delete; \
	UOculusXRPersistentPassthroughInstance(const UOculusXRPersistentPassthroughInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPersistentPassthroughInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPersistentPassthroughInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPersistentPassthroughInstance) \
	NO_API virtual ~UOculusXRPersistentPassthroughInstance();


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_99_PROLOG
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_INCLASS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPersistentPassthroughInstance;

// ********** End Class UOculusXRPersistentPassthroughInstance *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_B_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
