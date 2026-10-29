// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRRoomLayoutManagerComponent.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRRoomLayoutManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout(ETypeConstructPhase);
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64(ETypeConstructPhase);
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UFunction* Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOculusXRRoomLayoutSceneCaptureCompleteDelegate ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics
struct UHT_STATICS
{
	struct OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms
	{
		FOculusXRUInt64 requestId;
		bool result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOculusXRRoomLayoutSceneCaptureCompleteDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_requestId;
	static void NewProp_result_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms*)Obj)->result = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOculusXRRoomLayoutSceneCaptureCompleteDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOculusXRRoomLayoutSceneCaptureCompleteDelegate Property Definitions **
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_requestId = { "requestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms, requestId), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms), &UHT_STATICS::NewProp_result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_requestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_result,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOculusXRRoomLayoutSceneCaptureCompleteDelegate Property Definitions ****
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOculusXRRoomLayoutSceneCaptureCompleteDelegate *************************

// ********** Begin Class UOculusXRRoomLayoutManagerComponent Function GetRoomLayout ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics
struct UHT_STATICS
{
	struct OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms
	{
		FOculusXRUInt64 Space;
		FOculusXRRoomLayout RoomLayoutOut;
		int32 MaxWallsCapacity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Room Layout Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets room layout for a specific space\n" },
#endif
		{ "CPP_Default_MaxWallsCapacity", "64" },
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets room layout for a specific space" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomLayout constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayoutOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWallsCapacity;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomLayout constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomLayout Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomLayoutOut = { "RoomLayoutOut", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms, RoomLayoutOut), Z_Construct_UScriptStruct_FOculusXRRoomLayout, METADATA_PARAMS(0, nullptr) }; // 14f9f9ea3873ab538f6a0cceac92dfa0949fc1d4
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxWallsCapacity = { "MaxWallsCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms, MaxWallsCapacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayoutOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxWallsCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoomLayout Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "GetRoomLayout", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRRoomLayoutManagerComponent::execGetRoomLayout)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Space);
	P_GET_STRUCT_REF(FOculusXRRoomLayout,Z_Param_Out_RoomLayoutOut);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxWallsCapacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRoomLayout(Z_Param_Space,Z_Param_Out_RoomLayoutOut,Z_Param_MaxWallsCapacity);
	P_NATIVE_END;
}
// ********** End Class UOculusXRRoomLayoutManagerComponent Function GetRoomLayout *****************

// ********** Begin Class UOculusXRRoomLayoutManagerComponent Function LaunchCaptureFlow ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics
struct UHT_STATICS
{
	struct OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Room Layout Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requests to launch Capture Flow\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests to launch Capture Flow" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LaunchCaptureFlow constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LaunchCaptureFlow constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LaunchCaptureFlow Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LaunchCaptureFlow Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "LaunchCaptureFlow", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRRoomLayoutManagerComponent::execLaunchCaptureFlow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LaunchCaptureFlow();
	P_NATIVE_END;
}
// ********** End Class UOculusXRRoomLayoutManagerComponent Function LaunchCaptureFlow *************

// ********** Begin Class UOculusXRRoomLayoutManagerComponent Function LoadTriangleMesh ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics
struct UHT_STATICS
{
	struct OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms
	{
		FOculusXRUInt64 Space;
		UProceduralMeshComponent* Mesh;
		bool CreateCollision;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OculusXR|Room Layout Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Loads mesh data (vertices, indeces) associated with the space into UProceduralMeshComponent\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads mesh data (vertices, indeces) associated with the space into UProceduralMeshComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadTriangleMesh constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static void NewProp_CreateCollision_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms*)Obj)->CreateCollision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateCollision;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadTriangleMesh constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadTriangleMesh Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms, Mesh), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_CreateCollision = { "CreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms), &UHT_STATICS::NewProp_CreateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadTriangleMesh Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "LoadTriangleMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRRoomLayoutManagerComponent::execLoadTriangleMesh)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Space);
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_Mesh);
	P_GET_UBOOL(Z_Param_CreateCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadTriangleMesh(Z_Param_Space,Z_Param_Mesh,Z_Param_CreateCollision);
	P_NATIVE_END;
}
// ********** End Class UOculusXRRoomLayoutManagerComponent Function LoadTriangleMesh **************

// ********** Begin Class UOculusXRRoomLayoutManagerComponent Function OculusRoomLayoutSceneCaptureComplete_Handler 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics
struct UHT_STATICS
{
	struct OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms
	{
		FOculusXRUInt64 RequestId;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OculusRoomLayoutSceneCaptureComplete_Handler constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestId;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OculusRoomLayoutSceneCaptureComplete_Handler constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OculusRoomLayoutSceneCaptureComplete_Handler Property Definitions *****
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms, RequestId), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OculusRoomLayoutSceneCaptureComplete_Handler Property Definitions *******
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "OculusRoomLayoutSceneCaptureComplete_Handler", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOculusXRRoomLayoutManagerComponent::execOculusRoomLayoutSceneCaptureComplete_Handler)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_RequestId);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OculusRoomLayoutSceneCaptureComplete_Handler(Z_Param_RequestId,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UOculusXRRoomLayoutManagerComponent Function OculusRoomLayoutSceneCaptureComplete_Handler 

// ********** Begin Class UOculusXRRoomLayoutManagerComponent **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "DisplayName", "OculusXR Room Layout Manager Component" },
		{ "IncludePath", "OculusXRRoomLayoutManagerComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusXRRoomLayoutSceneCaptureComplete_MetaData[] = {
		{ "Category", "OculusXR|Room Layout Manager" },
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityRequestList_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLayouts_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRRoomLayoutManagerComponent constinit property declarations ******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OculusXRRoomLayoutSceneCaptureComplete;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_EntityRequestList_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_EntityRequestList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayouts_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayouts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RoomLayouts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRRoomLayoutManagerComponent constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRoomLayout"), .Pointer = &UOculusXRRoomLayoutManagerComponent::execGetRoomLayout },
		{ .NameUTF8 = UTF8TEXT("LaunchCaptureFlow"), .Pointer = &UOculusXRRoomLayoutManagerComponent::execLaunchCaptureFlow },
		{ .NameUTF8 = UTF8TEXT("LoadTriangleMesh"), .Pointer = &UOculusXRRoomLayoutManagerComponent::execLoadTriangleMesh },
		{ .NameUTF8 = UTF8TEXT("OculusRoomLayoutSceneCaptureComplete_Handler"), .Pointer = &UOculusXRRoomLayoutManagerComponent::execOculusRoomLayoutSceneCaptureComplete_Handler },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout, "GetRoomLayout" }, // 6390aef4eefd3e3c3948f8c5a6226a8c763d2d6e
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow, "LaunchCaptureFlow" }, // 9d52995012df4b4d55beff5aecbf05ecc6c22463
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh, "LoadTriangleMesh" }, // 506bf0d174282cd994b9a2fa43ae02886e931e70
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler, "OculusRoomLayoutSceneCaptureComplete_Handler" }, // 6f05c7ce8a2e0820c7247d5329dd91a3b79c47a3
		{ &Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature, "OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature" }, // 745af91f2918079832d3aabaab615f959f4fb5f1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRoomLayoutManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRRoomLayoutManagerComponent Property Definitions *****************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OculusXRRoomLayoutSceneCaptureComplete = { "OculusXRRoomLayoutSceneCaptureComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRRoomLayoutManagerComponent, OculusXRRoomLayoutSceneCaptureComplete), Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusXRRoomLayoutSceneCaptureComplete_MetaData), NewProp_OculusXRRoomLayoutSceneCaptureComplete_MetaData) }; // 745af91f2918079832d3aabaab615f959f4fb5f1
const UECodeGen_Private::FUInt64PropertyParams UHT_STATICS::NewProp_EntityRequestList_ElementProp = { "EntityRequestList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_EntityRequestList = { "EntityRequestList", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRRoomLayoutManagerComponent, EntityRequestList), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityRequestList_MetaData), NewProp_EntityRequestList_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomLayouts_ValueProp = { "RoomLayouts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOculusXRRoomLayout, METADATA_PARAMS(0, nullptr) }; // 14f9f9ea3873ab538f6a0cceac92dfa0949fc1d4
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoomLayouts_Key_KeyProp = { "RoomLayouts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_RoomLayouts = { "RoomLayouts", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRRoomLayoutManagerComponent, RoomLayouts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLayouts_MetaData), NewProp_RoomLayouts_MetaData) }; // 0ab4709cb2804e21f162f0dd5de2faa610085c80 14f9f9ea3873ab538f6a0cceac92dfa0949fc1d4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OculusXRRoomLayoutSceneCaptureComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EntityRequestList_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EntityRequestList,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayouts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayouts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomLayouts,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRRoomLayoutManagerComponent Property Definitions *******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOculusXRRoomLayoutManagerComponent_StaticRegisterNativesUOculusXRRoomLayoutManagerComponent()
{
	UClass* Class = UOculusXRRoomLayoutManagerComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent;
UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRRoomLayoutManagerComponent;
		if (!Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRRoomLayoutManagerComponent"),
				Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.InnerSingleton,
				UOculusXRRoomLayoutManagerComponent_StaticRegisterNativesUOculusXRRoomLayoutManagerComponent,
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
		return Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRRoomLayoutManagerComponent);
UOculusXRRoomLayoutManagerComponent::~UOculusXRRoomLayoutManagerComponent() {}
// ********** End Class UOculusXRRoomLayoutManagerComponent ****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h__Script_OculusXRScene_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, TEXT("UOculusXRRoomLayoutManagerComponent"), &Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRoomLayoutManagerComponent), 431656152U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h__Script_OculusXRScene_5b480d71f1bc42de5bbd8dcaa9c503b00899b6f0{
	TEXT("/Script/OculusXRScene"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
