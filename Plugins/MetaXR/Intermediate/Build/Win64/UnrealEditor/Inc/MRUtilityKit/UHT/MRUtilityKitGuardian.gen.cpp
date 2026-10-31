// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitGuardian.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitGuardian() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MRUtilityKit(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardian(ETypeConstructPhase);
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardian(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AMRUKGuardian Function CreateGuardian ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics
struct UHT_STATICS
{
	struct MRUKGuardian_eventCreateGuardian_Parms
	{
		UProceduralMeshComponent* GuardianMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Attaches the procedural mesh component to this actor.\n\x09 * @param GuardianMesh The mesh to attach.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardian.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches the procedural mesh component to this actor.\n@param GuardianMesh The mesh to attach." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardianMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateGuardian constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardianMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateGuardian constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateGuardian Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GuardianMesh = { "GuardianMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardian_eventCreateGuardian_Parms, GuardianMesh), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardianMesh_MetaData), NewProp_GuardianMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GuardianMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateGuardian Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMRUKGuardian, nullptr, "CreateGuardian", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MRUKGuardian_eventCreateGuardian_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MRUKGuardian_eventCreateGuardian_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKGuardian_CreateGuardian(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMRUKGuardian::execCreateGuardian)
{
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_GuardianMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGuardian(Z_Param_GuardianMesh);
	P_NATIVE_END;
}
// ********** End Class AMRUKGuardian Function CreateGuardian **************************************

// ********** Begin Class AMRUKGuardian ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMRUKGuardian_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Guardian is a procedural mesh that is generated from the anchor geometry and has the guardian material applied.\n * It is used to show the player where the walls and furniture. It prevents the player from walking into walls or furniture.\n * It uses TryGetClosestSurfacePosition to determine if the player is close to the walls or furniture.\n * This can be beneficial if your application has a full VR mode.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Guardian Actor" },
		{ "IncludePath", "MRUtilityKitGuardian.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardian.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Guardian is a procedural mesh that is generated from the anchor geometry and has the guardian material applied.\nIt is used to show the player where the walls and furniture. It prevents the player from walking into walls or furniture.\nIt uses TryGetClosestSurfacePosition to determine if the player is close to the walls or furniture.\nThis can be beneficial if your application has a full VR mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardianMeshComponent_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Procedural mesh that is generated from the anchor geometry and has the guardian material applied.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardian.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Procedural mesh that is generated from the anchor geometry and has the guardian material applied." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKGuardian constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardianMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKGuardian constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateGuardian"), .Pointer = &AMRUKGuardian::execCreateGuardian },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKGuardian_CreateGuardian, "CreateGuardian" }, // d055cda6ec8e019f0bd0575c80fb3958f11fc566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKGuardian>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMRUKGuardian Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GuardianMeshComponent = { "GuardianMeshComponent", nullptr, (EPropertyFlags)0x01140000000a281d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardian, GuardianMeshComponent), Z_Construct_UClass_UProceduralMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardianMeshComponent_MetaData), NewProp_GuardianMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GuardianMeshComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMRUKGuardian Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMRUKGuardian,
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
static void AMRUKGuardian_StaticRegisterNativesAMRUKGuardian()
{
	UClass* Class = AMRUKGuardian::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKGuardian;
UClass* Z_Construct_UClass_AMRUKGuardian(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMRUKGuardian;
		if (!Z_Registration_Info_UClass_AMRUKGuardian.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MRUKGuardian"),
				Z_Registration_Info_UClass_AMRUKGuardian.InnerSingleton,
				AMRUKGuardian_StaticRegisterNativesAMRUKGuardian,
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
		return Z_Registration_Info_UClass_AMRUKGuardian.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMRUKGuardian.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKGuardian.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKGuardian.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKGuardian);
AMRUKGuardian::~AMRUKGuardian() {}
// ********** End Class AMRUKGuardian **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardian_h__Script_MRUtilityKit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKGuardian, TEXT("AMRUKGuardian"), &Z_Registration_Info_UClass_AMRUKGuardian, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKGuardian), 1079489691U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LookOut_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardian_h__Script_MRUtilityKit_ded9577c3c65f8ede496af94c6c812bd22a3b79a{
	TEXT("/Script/MRUtilityKit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
