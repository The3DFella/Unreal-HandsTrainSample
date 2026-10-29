// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSceneGlobalMeshComponent.h"
#include "Engine/CollisionProfile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneGlobalMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OculusXRScene(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneGlobalMeshComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneAnchorComponent(ETypeConstructPhase);
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneGlobalMeshComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOculusXRSceneGlobalMeshComponent ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOculusXRSceneGlobalMeshComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * DEPRECATED: AOculusXRSceneActor and associated classes are deprecated (v65), please use MR Utility Kit instead\n * (https://developer.oculus.com/documentation/unreal/unreal-mr-utility-kit-overview)\n */" },
		{ "DisplayName", "OculusXR Scene Global Mesh Component" },
		{ "IncludePath", "OculusXRSceneGlobalMeshComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneGlobalMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "DEPRECATED: AOculusXRSceneActor and associated classes are deprecated (v65), please use MR Utility Kit instead\n(https://developer.oculus.com/documentation/unreal/unreal-mr-utility-kit-overview)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXRSceneGlobalMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXRSceneGlobalMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXRSceneGlobalMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXRSceneGlobalMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneAnchorComponent_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXRSceneGlobalMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSceneGlobalMeshComponent constinit property declarations ********
	static void NewProp_Collision_SetBit(void* Obj)
	{
		((UOculusXRSceneGlobalMeshComponent*)Obj)->Collision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfileName;
	static void NewProp_Visible_SetBit(void* Obj)
	{
		((UOculusXRSceneGlobalMeshComponent*)Obj)->Visible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SceneAnchorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOculusXRSceneGlobalMeshComponent constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSceneGlobalMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOculusXRSceneGlobalMeshComponent Property Definitions *******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRSceneGlobalMeshComponent), &UHT_STATICS::NewProp_Collision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSceneGlobalMeshComponent, CollisionProfileName), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfileName_MetaData), NewProp_CollisionProfileName_MetaData) }; // 3ffda89774681cdf418fededaf207d16f6ea4e89
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRSceneGlobalMeshComponent), &UHT_STATICS::NewProp_Visible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visible_MetaData), NewProp_Visible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSceneGlobalMeshComponent, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_SceneAnchorComponent = { "SceneAnchorComponent", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSceneGlobalMeshComponent, SceneAnchorComponent), Z_Construct_UClass_UOculusXRSceneAnchorComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneAnchorComponent_MetaData), NewProp_SceneAnchorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Visible,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneAnchorComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOculusXRSceneGlobalMeshComponent Property Definitions *********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOculusXRSceneGlobalMeshComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSceneGlobalMeshComponent;
UClass* Z_Construct_UClass_UOculusXRSceneGlobalMeshComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOculusXRSceneGlobalMeshComponent;
		if (!Z_Registration_Info_UClass_UOculusXRSceneGlobalMeshComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OculusXRSceneGlobalMeshComponent"),
				Z_Registration_Info_UClass_UOculusXRSceneGlobalMeshComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOculusXRSceneGlobalMeshComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOculusXRSceneGlobalMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSceneGlobalMeshComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSceneGlobalMeshComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSceneGlobalMeshComponent);
UOculusXRSceneGlobalMeshComponent::~UOculusXRSceneGlobalMeshComponent() {}
// ********** End Class UOculusXRSceneGlobalMeshComponent ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneGlobalMeshComponent_h__Script_OculusXRScene_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSceneGlobalMeshComponent, TEXT("UOculusXRSceneGlobalMeshComponent"), &Z_Registration_Info_UClass_UOculusXRSceneGlobalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSceneGlobalMeshComponent), 1934343313U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_B_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneGlobalMeshComponent_h__Script_OculusXRScene_5f7561c9c722f359cb06f3774091af6254f052ce{
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
