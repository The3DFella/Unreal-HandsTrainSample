// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRColocationLatentActions.h"

#ifdef OCULUSXRCOLOCATION_OculusXRColocationLatentActions_generated_h
#error "OculusXRColocationLatentActions.generated.h already included, missing '#pragma once' in OculusXRColocationLatentActions.h"
#endif
#define OCULUSXRCOLOCATION_OculusXRColocationLatentActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusXRAsyncAction_DiscoverColocationSessions;
class UOculusXRAsyncAction_StartColocationSessionAdvertisement;
class UOculusXRAsyncAction_StopColocationSessionAdvertisement;
struct FOculusXRColocationSession;

// ********** Begin Class UOculusXRAsyncAction_DiscoverColocationSessions **************************
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncDiscoverColocationSessions);


struct Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics;
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics; \
	friend OCULUSXRCOLOCATION_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_DiscoverColocationSessions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_DiscoverColocationSessions)


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_DiscoverColocationSessions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_DiscoverColocationSessions(UOculusXRAsyncAction_DiscoverColocationSessions&&) = delete; \
	UOculusXRAsyncAction_DiscoverColocationSessions(const UOculusXRAsyncAction_DiscoverColocationSessions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_DiscoverColocationSessions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_DiscoverColocationSessions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_DiscoverColocationSessions) \
	NO_API virtual ~UOculusXRAsyncAction_DiscoverColocationSessions();


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_19_PROLOG
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_INCLASS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_DiscoverColocationSessions;

// ********** End Class UOculusXRAsyncAction_DiscoverColocationSessions ****************************

// ********** Begin Class UOculusXRAsyncAction_StartColocationSessionAdvertisement *****************
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncStartColocationSessionAdvertisement);


struct Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics;
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics; \
	friend OCULUSXRCOLOCATION_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_StartColocationSessionAdvertisement, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_StartColocationSessionAdvertisement)


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_StartColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_StartColocationSessionAdvertisement(UOculusXRAsyncAction_StartColocationSessionAdvertisement&&) = delete; \
	UOculusXRAsyncAction_StartColocationSessionAdvertisement(const UOculusXRAsyncAction_StartColocationSessionAdvertisement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_StartColocationSessionAdvertisement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_StartColocationSessionAdvertisement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_StartColocationSessionAdvertisement) \
	NO_API virtual ~UOculusXRAsyncAction_StartColocationSessionAdvertisement();


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_43_PROLOG
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_INCLASS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_StartColocationSessionAdvertisement;

// ********** End Class UOculusXRAsyncAction_StartColocationSessionAdvertisement *******************

// ********** Begin Class UOculusXRAsyncAction_StopColocationSessionAdvertisement ******************
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncStopColocationSessionAdvertisement);


struct Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics;
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics; \
	friend OCULUSXRCOLOCATION_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_StopColocationSessionAdvertisement, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_StopColocationSessionAdvertisement)


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_StopColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_StopColocationSessionAdvertisement(UOculusXRAsyncAction_StopColocationSessionAdvertisement&&) = delete; \
	UOculusXRAsyncAction_StopColocationSessionAdvertisement(const UOculusXRAsyncAction_StopColocationSessionAdvertisement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_StopColocationSessionAdvertisement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_StopColocationSessionAdvertisement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_StopColocationSessionAdvertisement) \
	NO_API virtual ~UOculusXRAsyncAction_StopColocationSessionAdvertisement();


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_65_PROLOG
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_INCLASS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_StopColocationSessionAdvertisement;

// ********** End Class UOculusXRAsyncAction_StopColocationSessionAdvertisement ********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_B_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
