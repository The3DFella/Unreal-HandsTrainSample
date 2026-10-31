// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRAnchorLatentActions.h"

#ifdef OCULUSXRANCHORS_OculusXRAnchorLatentActions_generated_h
#error "OculusXRAnchorLatentActions.generated.h already included, missing '#pragma once' in OculusXRAnchorLatentActions.h"
#endif
#define OCULUSXRANCHORS_OculusXRAnchorLatentActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UOculusXRAnchorComponent;
class UOculusXRAsyncAction_CreateSpatialAnchor;
class UOculusXRAsyncAction_DiscoverAnchors;
class UOculusXRAsyncAction_EraseAnchor;
class UOculusXRAsyncAction_EraseAnchors;
class UOculusXRAsyncAction_GetSharedAnchors;
class UOculusXRAsyncAction_GetSharedAnchorsFromGroup;
class UOculusXRAsyncAction_QueryAnchors;
class UOculusXRAsyncAction_SaveAnchor;
class UOculusXRAsyncAction_SaveAnchorList;
class UOculusXRAsyncAction_SaveAnchors;
class UOculusXRAsyncAction_SetAnchorComponentStatus;
class UOculusXRAsyncAction_SetComponentStatus;
class UOculusXRAsyncAction_ShareAnchors;
class UOculusXRAsyncAction_ShareAnchorsWithGroups;
class UOculusXRBaseAnchorComponent;
enum class EOculusXRSpaceComponentType : uint8;
enum class EOculusXRSpaceStorageLocation : uint8;
struct FOculusXRAnchor;
struct FOculusXRAnchorsDiscoverResult;
struct FOculusXRSpaceDiscoveryInfo;
struct FOculusXRSpaceQueryInfo;
struct FOculusXRSpaceQueryResult;
struct FOculusXRUInt64;
struct FOculusXRUUID;

// ********** Begin Class UOculusXRAsyncAction_CreateSpatialAnchor *********************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncCreateSpatialAnchor);


struct Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_CreateSpatialAnchor, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_CreateSpatialAnchor)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_CreateSpatialAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_CreateSpatialAnchor(UOculusXRAsyncAction_CreateSpatialAnchor&&) = delete; \
	UOculusXRAsyncAction_CreateSpatialAnchor(const UOculusXRAsyncAction_CreateSpatialAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_CreateSpatialAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_CreateSpatialAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_CreateSpatialAnchor) \
	NO_API virtual ~UOculusXRAsyncAction_CreateSpatialAnchor();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_56_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_CreateSpatialAnchor;

// ********** End Class UOculusXRAsyncAction_CreateSpatialAnchor ***********************************

// ********** Begin Class UOculusXRAsyncAction_EraseAnchor *****************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncEraseAnchor);


struct Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_EraseAnchor, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_EraseAnchor)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_EraseAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_EraseAnchor(UOculusXRAsyncAction_EraseAnchor&&) = delete; \
	UOculusXRAsyncAction_EraseAnchor(const UOculusXRAsyncAction_EraseAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_EraseAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_EraseAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_EraseAnchor) \
	NO_API virtual ~UOculusXRAsyncAction_EraseAnchor();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_85_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_EraseAnchor;

// ********** End Class UOculusXRAsyncAction_EraseAnchor *******************************************

// ********** Begin Class UOculusXRAsyncAction_SaveAnchor ******************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSaveAnchor);


struct Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SaveAnchor, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SaveAnchor)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SaveAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SaveAnchor(UOculusXRAsyncAction_SaveAnchor&&) = delete; \
	UOculusXRAsyncAction_SaveAnchor(const UOculusXRAsyncAction_SaveAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SaveAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SaveAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SaveAnchor) \
	NO_API virtual ~UOculusXRAsyncAction_SaveAnchor();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_114_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SaveAnchor;

// ********** End Class UOculusXRAsyncAction_SaveAnchor ********************************************

// ********** Begin Class UOculusXRAsyncAction_SaveAnchorList **************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSaveAnchorList);


struct Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SaveAnchorList, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SaveAnchorList)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SaveAnchorList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SaveAnchorList(UOculusXRAsyncAction_SaveAnchorList&&) = delete; \
	UOculusXRAsyncAction_SaveAnchorList(const UOculusXRAsyncAction_SaveAnchorList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SaveAnchorList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SaveAnchorList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SaveAnchorList) \
	NO_API virtual ~UOculusXRAsyncAction_SaveAnchorList();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_143_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SaveAnchorList;

// ********** End Class UOculusXRAsyncAction_SaveAnchorList ****************************************

// ********** Begin Class UOculusXRAsyncAction_QueryAnchors ****************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncQueryAnchorsAdvanced); \
	DECLARE_FUNCTION(execOculusXRAsyncQueryAnchors);


struct Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_QueryAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_QueryAnchors)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_QueryAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_QueryAnchors(UOculusXRAsyncAction_QueryAnchors&&) = delete; \
	UOculusXRAsyncAction_QueryAnchors(const UOculusXRAsyncAction_QueryAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_QueryAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_QueryAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_QueryAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_QueryAnchors();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_171_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_QueryAnchors;

// ********** End Class UOculusXRAsyncAction_QueryAnchors ******************************************

// ********** Begin Class UOculusXRAsyncAction_SetAnchorComponentStatus ****************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSetAnchorComponentStatus);


struct Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SetAnchorComponentStatus, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SetAnchorComponentStatus)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SetAnchorComponentStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SetAnchorComponentStatus(UOculusXRAsyncAction_SetAnchorComponentStatus&&) = delete; \
	UOculusXRAsyncAction_SetAnchorComponentStatus(const UOculusXRAsyncAction_SetAnchorComponentStatus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SetAnchorComponentStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SetAnchorComponentStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SetAnchorComponentStatus) \
	NO_API virtual ~UOculusXRAsyncAction_SetAnchorComponentStatus();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_200_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SetAnchorComponentStatus;

// ********** End Class UOculusXRAsyncAction_SetAnchorComponentStatus ******************************

// ********** Begin Class UOculusXRAsyncAction_SetComponentStatus **********************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSetComponentStatus);


struct Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SetComponentStatus, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SetComponentStatus)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SetComponentStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SetComponentStatus(UOculusXRAsyncAction_SetComponentStatus&&) = delete; \
	UOculusXRAsyncAction_SetComponentStatus(const UOculusXRAsyncAction_SetComponentStatus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SetComponentStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SetComponentStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SetComponentStatus) \
	NO_API virtual ~UOculusXRAsyncAction_SetComponentStatus();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_233_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SetComponentStatus;

// ********** End Class UOculusXRAsyncAction_SetComponentStatus ************************************

// ********** Begin Class UOculusXRAsyncAction_ShareAnchors ****************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncShareAnchors);


struct Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_ShareAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_ShareAnchors)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_ShareAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_ShareAnchors(UOculusXRAsyncAction_ShareAnchors&&) = delete; \
	UOculusXRAsyncAction_ShareAnchors(const UOculusXRAsyncAction_ShareAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_ShareAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_ShareAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_ShareAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_ShareAnchors();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_261_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_ShareAnchors;

// ********** End Class UOculusXRAsyncAction_ShareAnchors ******************************************

// ********** Begin Class UOculusXRAsyncAction_SaveAnchors *****************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSaveAnchors);


struct Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SaveAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SaveAnchors)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SaveAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SaveAnchors(UOculusXRAsyncAction_SaveAnchors&&) = delete; \
	UOculusXRAsyncAction_SaveAnchors(const UOculusXRAsyncAction_SaveAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SaveAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SaveAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SaveAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_SaveAnchors();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_293_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SaveAnchors;

// ********** End Class UOculusXRAsyncAction_SaveAnchors *******************************************

// ********** Begin Class UOculusXRAsyncAction_EraseAnchors ****************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncEraseAnchors);


struct Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_EraseAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_EraseAnchors)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_EraseAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_EraseAnchors(UOculusXRAsyncAction_EraseAnchors&&) = delete; \
	UOculusXRAsyncAction_EraseAnchors(const UOculusXRAsyncAction_EraseAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_EraseAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_EraseAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_EraseAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_EraseAnchors();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_319_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_EraseAnchors;

// ********** End Class UOculusXRAsyncAction_EraseAnchors ******************************************

// ********** Begin Class UOculusXRAsyncAction_DiscoverAnchors *************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncDiscoverAnchors);


struct Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_DiscoverAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_DiscoverAnchors)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_DiscoverAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_DiscoverAnchors(UOculusXRAsyncAction_DiscoverAnchors&&) = delete; \
	UOculusXRAsyncAction_DiscoverAnchors(const UOculusXRAsyncAction_DiscoverAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_DiscoverAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_DiscoverAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_DiscoverAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_DiscoverAnchors();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_348_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_DiscoverAnchors;

// ********** End Class UOculusXRAsyncAction_DiscoverAnchors ***************************************

// ********** Begin Class UOculusXRAsyncAction_GetSharedAnchors ************************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncGetSharedAnchors);


struct Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_GetSharedAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_GetSharedAnchors)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_GetSharedAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_GetSharedAnchors(UOculusXRAsyncAction_GetSharedAnchors&&) = delete; \
	UOculusXRAsyncAction_GetSharedAnchors(const UOculusXRAsyncAction_GetSharedAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_GetSharedAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_GetSharedAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_GetSharedAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_GetSharedAnchors();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_378_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_GetSharedAnchors;

// ********** End Class UOculusXRAsyncAction_GetSharedAnchors **************************************

// ********** Begin Class UOculusXRAsyncAction_ShareAnchorsWithGroups ******************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRShareAnchorsWithGroupsAsync);


struct Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_ShareAnchorsWithGroups, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_ShareAnchorsWithGroups)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_ShareAnchorsWithGroups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_ShareAnchorsWithGroups(UOculusXRAsyncAction_ShareAnchorsWithGroups&&) = delete; \
	UOculusXRAsyncAction_ShareAnchorsWithGroups(const UOculusXRAsyncAction_ShareAnchorsWithGroups&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_ShareAnchorsWithGroups); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_ShareAnchorsWithGroups); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_ShareAnchorsWithGroups) \
	NO_API virtual ~UOculusXRAsyncAction_ShareAnchorsWithGroups();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_404_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_ShareAnchorsWithGroups;

// ********** End Class UOculusXRAsyncAction_ShareAnchorsWithGroups ********************************

// ********** Begin Class UOculusXRAsyncAction_GetSharedAnchorsFromGroup ***************************
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRGetSharedAnchorsFromGroupAsync);


struct Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup(ETypeConstructPhase);

#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_GetSharedAnchorsFromGroup, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_GetSharedAnchorsFromGroup)


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_GetSharedAnchorsFromGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_GetSharedAnchorsFromGroup(UOculusXRAsyncAction_GetSharedAnchorsFromGroup&&) = delete; \
	UOculusXRAsyncAction_GetSharedAnchorsFromGroup(const UOculusXRAsyncAction_GetSharedAnchorsFromGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_GetSharedAnchorsFromGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_GetSharedAnchorsFromGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_GetSharedAnchorsFromGroup) \
	NO_API virtual ~UOculusXRAsyncAction_GetSharedAnchorsFromGroup();


#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_427_PROLOG
#define FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_INCLASS_NO_PURE_DECLS \
	FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_GetSharedAnchorsFromGroup;

// ********** End Class UOculusXRAsyncAction_GetSharedAnchorsFromGroup *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LookOut_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
