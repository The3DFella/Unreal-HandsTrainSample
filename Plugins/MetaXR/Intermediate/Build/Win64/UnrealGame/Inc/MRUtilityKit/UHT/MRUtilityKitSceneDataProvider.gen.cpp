// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitSceneDataProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitSceneDataProvider() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDataTable(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FJSONData(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKSceneDataProvider(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKSceneDataProvider(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AMRUKSceneDataProvider Function GetRoom **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics
struct UHT_STATICS
{
	struct MRUKSceneDataProvider_eventGetRoom_Parms
	{
		FString RoomJSON;
		FString RoomName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/*\n\x09 * Gets you a room from the list of rooms, if bUseRandomRoom is true, a random room will be returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
		{ "ToolTip", "Gets you a room from the list of rooms, if bUseRandomRoom is true, a random room will be returned." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoom constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomJSON;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoom constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoom Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RoomJSON = { "RoomJSON", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSceneDataProvider_eventGetRoom_Parms, RoomJSON), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RoomName = { "RoomName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSceneDataProvider_eventGetRoom_Parms, RoomName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoom Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKSceneDataProvider, nullptr, "GetRoom", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKSceneDataProvider_eventGetRoom_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKSceneDataProvider_eventGetRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKSceneDataProvider::execGetRoom)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_RoomJSON);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_RoomName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRoom(Z_Param_Out_RoomJSON,Z_Param_Out_RoomName);
	P_NATIVE_END;
}
// ********** End Class AMRUKSceneDataProvider Function GetRoom ************************************

// ********** Begin Class AMRUKSceneDataProvider ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUKSceneDataProvider_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "DisplayName", "MR Utility Kit Scene Data Provider" },
		{ "IncludePath", "MRUtilityKitSceneDataProvider.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/*\n\x09 * This list holds the rooms that can be loaded, the key is the room type and the value is a data table that contains multiple rooms.\n\x09 * Roomtypes such as Bedrooms, Livingrooms, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
		{ "ToolTip", "This list holds the rooms that can be loaded, the key is the room type and the value is a data table that contains multiple rooms.\nRoomtypes such as Bedrooms, Livingrooms, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomRoom_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/*\n\x09 * When this is true, a random room will be loaded from the list of rooms.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
		{ "ToolTip", "When this is true, a random room will be loaded from the list of rooms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomRoomFromClass_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/*\n\x09 * When this is true, a random room will be loaded a specific room class, defined in Rooms (Bedrooms, Offices, ..).\n\x09 */" },
		{ "EditCondition", "!bUseRandomRoom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
		{ "ToolTip", "When this is true, a random room will be loaded a specific room class, defined in Rooms (Bedrooms, Offices, ..)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificRoomClass_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/*\n\x09 * Use this property to define a specific room class to load, only visible when bUseRandomRoomFromClass is true.\n\x09 * This can be a room class such as Bedrooms, Offices, ..\n\x09 */" },
		{ "EditCondition", "bUseRandomRoomFromClass && !bUseRandomRoom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
		{ "ToolTip", "Use this property to define a specific room class to load, only visible when bUseRandomRoomFromClass is true.\nThis can be a room class such as Bedrooms, Offices, .." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificRoomName_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/*\n\x09 * Define a specific room to load, only visible when bUseRandomRoom is false.\n\x09 */" },
		{ "EditCondition", "!bUseRandomRoom && !bUseRandomRoomFromClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
		{ "ToolTip", "Define a specific room to load, only visible when bUseRandomRoom is false." },
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKSceneDataProvider constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Rooms_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Rooms;
	static void NewProp_bUseRandomRoom_SetBit(void* Obj)
	{
		((AMRUKSceneDataProvider*)Obj)->bUseRandomRoom = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomRoom;
	static void NewProp_bUseRandomRoomFromClass_SetBit(void* Obj)
	{
		((AMRUKSceneDataProvider*)Obj)->bUseRandomRoomFromClass = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomRoomFromClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecificRoomClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecificRoomName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKSceneDataProvider constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRoom"), .Pointer = &AMRUKSceneDataProvider::execGetRoom },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom, "GetRoom" }, // 7604c3107a128163a9afc785e65f9cb45f534083
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKSceneDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUKSceneDataProvider Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Rooms_ValueProp = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Rooms_Key_KeyProp = { "Rooms_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKSceneDataProvider, Rooms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseRandomRoom = { "bUseRandomRoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKSceneDataProvider), &UHT_STATICS::NewProp_bUseRandomRoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomRoom_MetaData), NewProp_bUseRandomRoom_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseRandomRoomFromClass = { "bUseRandomRoomFromClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKSceneDataProvider), &UHT_STATICS::NewProp_bUseRandomRoomFromClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomRoomFromClass_MetaData), NewProp_bUseRandomRoomFromClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SpecificRoomClass = { "SpecificRoomClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKSceneDataProvider, SpecificRoomClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificRoomClass_MetaData), NewProp_SpecificRoomClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SpecificRoomName = { "SpecificRoomName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKSceneDataProvider, SpecificRoomName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificRoomName_MetaData), NewProp_SpecificRoomName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rooms_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rooms_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseRandomRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseRandomRoomFromClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpecificRoomClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpecificRoomName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUKSceneDataProvider Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUKSceneDataProvider,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AMRUKSceneDataProvider_StaticRegisterNativesAMRUKSceneDataProvider()
{
	UClass* Class = AMRUKSceneDataProvider::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKSceneDataProvider;
UClass* Z_Construct_UClass_AMRUKSceneDataProvider(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUKSceneDataProvider;
		if (!Z_Registration_Info_UClass_AMRUKSceneDataProvider.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKSceneDataProvider"),
				Z_Registration_Info_UClass_AMRUKSceneDataProvider.InnerSingleton,
				AMRUKSceneDataProvider_StaticRegisterNativesAMRUKSceneDataProvider,
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
		return Z_Registration_Info_UClass_AMRUKSceneDataProvider.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUKSceneDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKSceneDataProvider.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKSceneDataProvider.OuterSingleton;
}
#undef UHT_STATICS
AMRUKSceneDataProvider::AMRUKSceneDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKSceneDataProvider);
AMRUKSceneDataProvider::~AMRUKSceneDataProvider() {}
// ********** End Class AMRUKSceneDataProvider *****************************************************

// ********** Begin ScriptStruct FJSONData *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FJSONData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FJSONData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJSONData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJSONData constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJSONData constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSONData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FJSONData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FJSONData cannot be polymorphic unless super FTableRowBase is polymorphic");

// ********** Begin ScriptStruct FJSONData Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FJSONData, JSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSON_MetaData), NewProp_JSON_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JSON,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FJSONData Property Definitions **************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"JSONData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FJSONData>(),
	alignof(FJSONData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSONData;
UScriptStruct* Z_Construct_UScriptStruct_FJSONData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FJSONData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FJSONData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSONData, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase::Outer), TEXT("JSONData"));
		}
		return Z_Registration_Info_UScriptStruct_FJSONData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FJSONData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSONData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJSONData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FJSONData ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FJSONData, Z_Construct_UScriptStruct_FJSONData_Statics::NewStructOps, TEXT("JSONData"),&Z_Registration_Info_UScriptStruct_FJSONData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSONData), 972786404U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKSceneDataProvider, TEXT("AMRUKSceneDataProvider"), &Z_Registration_Info_UClass_AMRUKSceneDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKSceneDataProvider), 4114040917U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h__Script_MRUtilityKit_bf3856db6e3da446ac5db61ef5ee528a97ab7b70{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
