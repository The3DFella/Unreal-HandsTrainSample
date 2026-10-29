// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXREditorSettings.h"

#ifdef OCULUSXREDITOR_OculusXREditorSettings_generated_h
#error "OculusXREditorSettings.generated.h already included, missing '#pragma once' in OculusXREditorSettings.h"
#endif
#define OCULUSXREDITOR_OculusXREditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOculusXREditorSettings **************************************************
struct Z_Construct_UClass_UOculusXREditorSettings_Statics;
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXREditorSettings(ETypeConstructPhase);

#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOculusXREditorSettings_Statics; \
	friend OCULUSXREDITOR_API UClass* ::Z_Construct_UClass_UOculusXREditorSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOculusXREditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXREditor"), Z_Construct_UClass_UOculusXREditorSettings) \
	DECLARE_SERIALIZER(UOculusXREditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXREditorSettings(UOculusXREditorSettings&&) = delete; \
	UOculusXREditorSettings(const UOculusXREditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXREditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXREditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXREditorSettings) \
	NO_API virtual ~UOculusXREditorSettings();


#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_21_PROLOG
#define FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXREditorSettings;

// ********** End Class UOculusXREditorSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_B_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h

// ********** Begin Enum EOculusXRPlatform *********************************************************
#define FOREACH_ENUM_EOCULUSXRPLATFORM(op) \
	op(EOculusXRPlatform::PC) \
	op(EOculusXRPlatform::Mobile) \
	op(EOculusXRPlatform::Length) 

enum class EOculusXRPlatform : uint8;
template<> struct TIsUEnumClass<EOculusXRPlatform> { enum { Value = true }; };
template<> UE_NODEBUG OCULUSXREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusXRPlatform>();
// ********** End Enum EOculusXRPlatform ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
