// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPlatformToolSettings.h"

#ifdef OCULUSXREDITOR_OculusXRPlatformToolSettings_generated_h
#error "OculusXRPlatformToolSettings.generated.h already included, missing '#pragma once' in OculusXRPlatformToolSettings.h"
#endif
#define OCULUSXREDITOR_OculusXRPlatformToolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOculusXRRedistPackage ********************************************
struct Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics;
OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRedistPackage(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FOculusXRRedistPackage(ETypeConstructPhase::Inner); }


struct FOculusXRRedistPackage;
// ********** End ScriptStruct FOculusXRRedistPackage **********************************************

// ********** Begin ScriptStruct FOculusXRAssetConfig **********************************************
struct Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics;
OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfig(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FOculusXRAssetConfig(ETypeConstructPhase::Inner); }


struct FOculusXRAssetConfig;
// ********** End ScriptStruct FOculusXRAssetConfig ************************************************

// ********** Begin ScriptStruct FOculusXRAssetConfigArray *****************************************
struct Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics;
OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfigArray(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FOculusXRAssetConfigArray(ETypeConstructPhase::Inner); }


struct FOculusXRAssetConfigArray;
// ********** End ScriptStruct FOculusXRAssetConfigArray *******************************************

// ********** Begin Class UOculusXRPlatformToolSettings ********************************************
struct Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics;
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRPlatformToolSettings(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics; \
	friend OCULUSXREDITOR_API UClass* ::Z_Construct_UClass_UOculusXRPlatformToolSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXRPlatformToolSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXREditor"), Z_Construct_UClass_UOculusXRPlatformToolSettings) \
	DECLARE_SERIALIZER(UOculusXRPlatformToolSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPlatformToolSettings(UOculusXRPlatformToolSettings&&) = delete; \
	UOculusXRPlatformToolSettings(const UOculusXRPlatformToolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPlatformToolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPlatformToolSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRPlatformToolSettings) \
	NO_API virtual ~UOculusXRPlatformToolSettings();


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_82_PROLOG
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_INCLASS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPlatformToolSettings;

// ********** End Class UOculusXRPlatformToolSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h

// ********** Begin Enum EOculusXRPlatformTarget ***************************************************
#define FOREACH_ENUM_EOCULUSXRPLATFORMTARGET(op) \
	op(EOculusXRPlatformTarget::Rift) \
	op(EOculusXRPlatformTarget::Quest) \
	op(EOculusXRPlatformTarget::Length) 

enum class EOculusXRPlatformTarget : uint8;
template<> struct TIsUEnumClass<EOculusXRPlatformTarget> { enum { Value = true }; };
template<> UE_NODEBUG OCULUSXREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRPlatformTarget>();
// ********** End Enum EOculusXRPlatformTarget *****************************************************

// ********** Begin Enum EOculusXRGamepadEmulation *************************************************
#define FOREACH_ENUM_EOCULUSXRGAMEPADEMULATION(op) \
	op(EOculusXRGamepadEmulation::Off) \
	op(EOculusXRGamepadEmulation::Twinstick) \
	op(EOculusXRGamepadEmulation::RightDPad) \
	op(EOculusXRGamepadEmulation::LeftDPad) \
	op(EOculusXRGamepadEmulation::Length) 

enum class EOculusXRGamepadEmulation : uint8;
template<> struct TIsUEnumClass<EOculusXRGamepadEmulation> { enum { Value = true }; };
template<> UE_NODEBUG OCULUSXREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRGamepadEmulation>();
// ********** End Enum EOculusXRGamepadEmulation ***************************************************

// ********** Begin Enum EOculusXRAssetType ********************************************************
#define FOREACH_ENUM_EOCULUSXRASSETTYPE(op) \
	op(EOculusXRAssetType::Default) \
	op(EOculusXRAssetType::Store) \
	op(EOculusXRAssetType::Language_Pack) \
	op(EOculusXRAssetType::Length) 

enum class EOculusXRAssetType : uint8;
template<> struct TIsUEnumClass<EOculusXRAssetType> { enum { Value = true }; };
template<> UE_NODEBUG OCULUSXREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRAssetType>();
// ********** End Enum EOculusXRAssetType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
