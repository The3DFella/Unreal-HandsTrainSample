// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitDebugComponent.h"

#ifdef MRUTILITYKIT_MRUtilityKitDebugComponent_generated_h
#error "MRUtilityKitDebugComponent.generated.h already included, missing '#pragma once' in MRUtilityKitDebugComponent.h"
#endif
#define MRUTILITYKIT_MRUtilityKitDebugComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMRUKDebugComponent ******************************************************
#define FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHideAnchorSpace); \
	DECLARE_FUNCTION(execShowAnchorSpaceAtRayHit); \
	DECLARE_FUNCTION(execHideAnchor); \
	DECLARE_FUNCTION(execShowAnchorAtRayHit);


struct Z_Construct_UClass_UMRUKDebugComponent_Statics;
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKDebugComponent(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UMRUKDebugComponent_Statics; \
	friend MRUTILITYKIT_API UClass* ::Z_Construct_UClass_UMRUKDebugComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UMRUKDebugComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKDebugComponent) \
	DECLARE_SERIALIZER(UMRUKDebugComponent)


#define FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKDebugComponent(UMRUKDebugComponent&&) = delete; \
	UMRUKDebugComponent(const UMRUKDebugComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKDebugComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKDebugComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMRUKDebugComponent) \
	NO_API virtual ~UMRUKDebugComponent();


#define FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h_13_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKDebugComponent;

// ********** End Class UMRUKDebugComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDebugComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
