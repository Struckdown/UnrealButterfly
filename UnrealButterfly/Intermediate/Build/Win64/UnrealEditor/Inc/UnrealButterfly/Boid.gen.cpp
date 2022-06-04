// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealButterfly/Public/Boid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoid() {}
// Cross Module References
	UNREALBUTTERFLY_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	UNREALBUTTERFLY_API UClass* Z_Construct_UClass_ABoid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealButterfly();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase_NoRegister();
// End Cross Module References
	void ABoid::StaticRegisterNativesABoid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoid);
	UClass* Z_Construct_UClass_ABoid_NoRegister()
	{
		return ABoid::StaticClass();
	}
	struct Z_Construct_UClass_ABoid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MIN_SPEED_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MIN_SPEED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MAX_SPEED_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MAX_SPEED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_COHERENCE_WEIGHT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_COHERENCE_WEIGHT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SEPERATION_WEIGHT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SEPERATION_WEIGHT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALIGNMENT_WEIGHT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ALIGNMENT_WEIGHT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DEBUG_MetaData[];
#endif
		static void NewProp_DEBUG_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DEBUG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VISION_DOT_PRODUCT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VISION_DOT_PRODUCT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_visionRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_visionRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stayAwayRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stayAwayRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxToStayWithin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boxToStayWithin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealButterfly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boid.h" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_MIN_SPEED_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_MIN_SPEED = { "MIN_SPEED", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, MIN_SPEED), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_MIN_SPEED_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_MIN_SPEED_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_MAX_SPEED_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_MAX_SPEED = { "MAX_SPEED", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, MAX_SPEED), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_MAX_SPEED_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_MAX_SPEED_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_COHERENCE_WEIGHT_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_COHERENCE_WEIGHT = { "COHERENCE_WEIGHT", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, COHERENCE_WEIGHT), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_COHERENCE_WEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_COHERENCE_WEIGHT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_SEPERATION_WEIGHT_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_SEPERATION_WEIGHT = { "SEPERATION_WEIGHT", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, SEPERATION_WEIGHT), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_SEPERATION_WEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_SEPERATION_WEIGHT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_ALIGNMENT_WEIGHT_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_ALIGNMENT_WEIGHT = { "ALIGNMENT_WEIGHT", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, ALIGNMENT_WEIGHT), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_ALIGNMENT_WEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_ALIGNMENT_WEIGHT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_DEBUG_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	void Z_Construct_UClass_ABoid_Statics::NewProp_DEBUG_SetBit(void* Obj)
	{
		((ABoid*)Obj)->DEBUG = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_DEBUG = { "DEBUG", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABoid), &Z_Construct_UClass_ABoid_Statics::NewProp_DEBUG_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_DEBUG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_DEBUG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_VISION_DOT_PRODUCT_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_VISION_DOT_PRODUCT = { "VISION_DOT_PRODUCT", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, VISION_DOT_PRODUCT), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_VISION_DOT_PRODUCT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_VISION_DOT_PRODUCT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_visionRange_MetaData[] = {
		{ "Category", "Variables" },
		{ "Comment", "// between -1 and 1\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "between -1 and 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_visionRange = { "visionRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, visionRange), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_visionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_visionRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_stayAwayRange_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_stayAwayRange = { "stayAwayRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, stayAwayRange), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_stayAwayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_stayAwayRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_boxToStayWithin_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_boxToStayWithin = { "boxToStayWithin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, boxToStayWithin), Z_Construct_UClass_ATriggerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_boxToStayWithin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_boxToStayWithin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_MIN_SPEED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_MAX_SPEED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_COHERENCE_WEIGHT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_SEPERATION_WEIGHT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_ALIGNMENT_WEIGHT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_DEBUG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_VISION_DOT_PRODUCT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_visionRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_stayAwayRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_boxToStayWithin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoid_Statics::ClassParams = {
		&ABoid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoid()
	{
		if (!Z_Registration_Info_UClass_ABoid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoid.OuterSingleton, Z_Construct_UClass_ABoid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoid.OuterSingleton;
	}
	template<> UNREALBUTTERFLY_API UClass* StaticClass<ABoid>()
	{
		return ABoid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoid);
	struct Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_Public_Boid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_Public_Boid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoid, ABoid::StaticClass, TEXT("ABoid"), &Z_Registration_Info_UClass_ABoid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoid), 2879646616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_Public_Boid_h_2304911497(TEXT("/Script/UnrealButterfly"),
		Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_Public_Boid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_Public_Boid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
