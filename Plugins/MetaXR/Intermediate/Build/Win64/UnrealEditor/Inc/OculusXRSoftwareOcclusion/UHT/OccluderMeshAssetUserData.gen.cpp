// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OccluderMeshAssetUserData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOccluderMeshAssetUserData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRSoftwareOcclusion(ETypeConstructPhase);
OCULUSXRSOFTWAREOCCLUSION_API UClass* Z_Construct_UClass_UOccluderMeshAssetUserData(ETypeConstructPhase);
OCULUSXRSOFTWAREOCCLUSION_API UClass* Z_Construct_UClass_UOccluderMeshAssetUserData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOccluderMeshAssetUserData ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOccluderMeshAssetUserData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This AssertUserData is used to hold both LODForOccluderMesh and CustomOccluderMesh for UStaticMeshes or USkeletalMeshes.\n * Note that LODForOccluderMesh and CustomOccluderMesh are exclusive.\n */" },
#endif
		{ "IncludePath", "OccluderMeshAssetUserData.h" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This AssertUserData is used to hold both LODForOccluderMesh and CustomOccluderMesh for UStaticMeshes or USkeletalMeshes.\nNote that LODForOccluderMesh and CustomOccluderMesh are exclusive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOccluderMesh_MetaData[] = {
		{ "Category", "CustomOccluder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Specifies the custom occluder mesh for software occlusion\n\x09 *  Mutually exclusive with LODForOccluderMesh\n\x09 */" },
#endif
		{ "DisplayName", "Custom Occluder Mesh" },
		{ "EditCondition", "LODForOccluderMesh < 0" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the custom occluder mesh for software occlusion\nMutually exclusive with LODForOccluderMesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOccluderMeshScale_MetaData[] = {
		{ "Category", "CustomOccluder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Specifies the custom occluder mesh scale if different with that of the parent component\n\x09 */" },
#endif
		{ "DisplayName", "Custom Occluder Mesh Scale" },
		{ "EditCondition", "CustomOccluderMesh != nullptr" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the custom occluder mesh scale if different with that of the parent component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOccluderMeshOffset_MetaData[] = {
		{ "Category", "CustomOccluder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Specifies the custom occluder mesh offset if different with that of the parent component\n\x09 */" },
#endif
		{ "DisplayName", "Custom Occluder Mesh Offset" },
		{ "EditCondition", "CustomOccluderMesh != nullptr" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the custom occluder mesh offset if different with that of the parent component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODForOccluderMesh_MetaData[] = {
		{ "Category", "LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Specifies which staticmesh LOD to use as occluder geometry for software occlusion. Not suitable for skeletal meshes.\n\x09 *  Mutually exclusive with CustomOccluderMesh\n\x09 *  Set to -1 to not use this mesh as occluder\n\x09 */" },
#endif
		{ "DisplayName", "Parent StaticMesh LOD For Occluder Mesh" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies which staticmesh LOD to use as occluder geometry for software occlusion. Not suitable for skeletal meshes.\nMutually exclusive with CustomOccluderMesh\nSet to -1 to not use this mesh as occluder" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOccluderMeshAssetUserData constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomOccluderMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOccluderMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOccluderMeshOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODForOccluderMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOccluderMeshAssetUserData constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOccluderMeshAssetUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOccluderMeshAssetUserData Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomOccluderMesh = { "CustomOccluderMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UOccluderMeshAssetUserData, CustomOccluderMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOccluderMesh_MetaData), NewProp_CustomOccluderMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CustomOccluderMeshScale = { "CustomOccluderMeshScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOccluderMeshAssetUserData, CustomOccluderMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOccluderMeshScale_MetaData), NewProp_CustomOccluderMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CustomOccluderMeshOffset = { "CustomOccluderMeshOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOccluderMeshAssetUserData, CustomOccluderMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOccluderMeshOffset_MetaData), NewProp_CustomOccluderMeshOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LODForOccluderMesh = { "LODForOccluderMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UOccluderMeshAssetUserData, LODForOccluderMesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODForOccluderMesh_MetaData), NewProp_LODForOccluderMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomOccluderMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomOccluderMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomOccluderMeshOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODForOccluderMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOccluderMeshAssetUserData Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAssetUserData,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRSoftwareOcclusion,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOccluderMeshAssetUserData,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOccluderMeshAssetUserData;
UClass* Z_Construct_UClass_UOccluderMeshAssetUserData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOccluderMeshAssetUserData;
		if (!Z_Registration_Info_UClass_UOccluderMeshAssetUserData.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OccluderMeshAssetUserData"),
				Z_Registration_Info_UClass_UOccluderMeshAssetUserData.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UOccluderMeshAssetUserData.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOccluderMeshAssetUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOccluderMeshAssetUserData.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOccluderMeshAssetUserData.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOccluderMeshAssetUserData);
UOccluderMeshAssetUserData::~UOccluderMeshAssetUserData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOccluderMeshAssetUserData)
// ********** End Class UOccluderMeshAssetUserData *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRSoftwareOcclusion_Private_OccluderMeshAssetUserData_h__Script_OculusXRSoftwareOcclusion_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOccluderMeshAssetUserData, TEXT("UOccluderMeshAssetUserData"), &Z_Registration_Info_UClass_UOccluderMeshAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOccluderMeshAssetUserData), 2268862131U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_HandsTrainSample_Plugins_MetaXR_Source_OculusXRSoftwareOcclusion_Private_OccluderMeshAssetUserData_h__Script_OculusXRSoftwareOcclusion_ee134519d32a6f0efa26d2dbaf43b281baf3538a{
	TEXT("/Script/OculusXRSoftwareOcclusion"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
