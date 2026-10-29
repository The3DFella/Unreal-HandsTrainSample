// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRAnchorComponents.h"

#ifdef OCULUSXRANCHORS_OculusXRAnchorComponents_generated_h
#error "OculusXRAnchorComponents.generated.h already included, missing '#pragma once' in OculusXRAnchorComponents.h"
#endif
#define OCULUSXRANCHORS_OculusXRAnchorComponents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOculusXRSpaceComponentType : uint8;
struct FOculusXRUUID;

// ********** Begin Class UOculusXRBaseAnchorComponent *********************************************
#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execIsComponentEnabled);


struct Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent(ETypeConstructPhase);

#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRBaseAnchorComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRBaseAnchorComponent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRBaseAnchorComponent) \
	DECLARE_SERIALIZER(UOculusXRBaseAnchorComponent)


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRBaseAnchorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRBaseAnchorComponent(UOculusXRBaseAnchorComponent&&) = delete; \
	UOculusXRBaseAnchorComponent(const UOculusXRBaseAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRBaseAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRBaseAnchorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRBaseAnchorComponent) \
	NO_API virtual ~UOculusXRBaseAnchorComponent();


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_8_PROLOG
#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRBaseAnchorComponent;

// ********** End Class UOculusXRBaseAnchorComponent ***********************************************

// ********** Begin Class UOculusXRLocatableAnchorComponent ****************************************
#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTransform);


struct Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent(ETypeConstructPhase);

#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRLocatableAnchorComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRLocatableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRLocatableAnchorComponent) \
	DECLARE_SERIALIZER(UOculusXRLocatableAnchorComponent)


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRLocatableAnchorComponent(UOculusXRLocatableAnchorComponent&&) = delete; \
	UOculusXRLocatableAnchorComponent(const UOculusXRLocatableAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRLocatableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRLocatableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRLocatableAnchorComponent) \
	NO_API virtual ~UOculusXRLocatableAnchorComponent();


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_34_PROLOG
#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_INCLASS_NO_PURE_DECLS \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRLocatableAnchorComponent;

// ********** End Class UOculusXRLocatableAnchorComponent ******************************************

// ********** Begin Class UOculusXRSpaceContainerAnchorComponent ***********************************
#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUUIDs);


struct Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent(ETypeConstructPhase);

#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRSpaceContainerAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent) \
	DECLARE_SERIALIZER(UOculusXRSpaceContainerAnchorComponent)


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRSpaceContainerAnchorComponent(UOculusXRSpaceContainerAnchorComponent&&) = delete; \
	UOculusXRSpaceContainerAnchorComponent(const UOculusXRSpaceContainerAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSpaceContainerAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSpaceContainerAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSpaceContainerAnchorComponent) \
	NO_API virtual ~UOculusXRSpaceContainerAnchorComponent();


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_48_PROLOG
#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_INCLASS_NO_PURE_DECLS \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRSpaceContainerAnchorComponent;

// ********** End Class UOculusXRSpaceContainerAnchorComponent *************************************

// ********** Begin Class UOculusXRSharableAnchorComponent *****************************************
struct Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent(ETypeConstructPhase);

#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRSharableAnchorComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRSharableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRSharableAnchorComponent) \
	DECLARE_SERIALIZER(UOculusXRSharableAnchorComponent)


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRSharableAnchorComponent(UOculusXRSharableAnchorComponent&&) = delete; \
	UOculusXRSharableAnchorComponent(const UOculusXRSharableAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSharableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSharableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSharableAnchorComponent) \
	NO_API virtual ~UOculusXRSharableAnchorComponent();


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_62_PROLOG
#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_INCLASS_NO_PURE_DECLS \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRSharableAnchorComponent;

// ********** End Class UOculusXRSharableAnchorComponent *******************************************

// ********** Begin Class UOculusXRStorableAnchorComponent *****************************************
struct Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics;
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent(ETypeConstructPhase);

#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics; \
	friend OCULUSXRANCHORS_API UClass* ::Z_Construct_UClass_UOculusXRStorableAnchorComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRStorableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRStorableAnchorComponent) \
	DECLARE_SERIALIZER(UOculusXRStorableAnchorComponent)


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRStorableAnchorComponent(UOculusXRStorableAnchorComponent&&) = delete; \
	UOculusXRStorableAnchorComponent(const UOculusXRStorableAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStorableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStorableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRStorableAnchorComponent) \
	NO_API virtual ~UOculusXRStorableAnchorComponent();


#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_73_PROLOG
#define FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_INCLASS_NO_PURE_DECLS \
	FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRStorableAnchorComponent;

// ********** End Class UOculusXRStorableAnchorComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
