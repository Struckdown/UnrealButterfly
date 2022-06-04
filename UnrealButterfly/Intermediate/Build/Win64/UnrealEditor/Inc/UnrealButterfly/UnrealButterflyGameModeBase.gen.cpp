// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealButterfly/UnrealButterflyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealButterflyGameModeBase() {}
// Cross Module References
	UNREALBUTTERFLY_API UClass* Z_Construct_UClass_AUnrealButterflyGameModeBase_NoRegister();
	UNREALBUTTERFLY_API UClass* Z_Construct_UClass_AUnrealButterflyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealButterfly();
// End Cross Module References
	void AUnrealButterflyGameModeBase::StaticRegisterNativesAUnrealButterflyGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealButterflyGameModeBase);
	UClass* Z_Construct_UClass_AUnrealButterflyGameModeBase_NoRegister()
	{
		return AUnrealButterflyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealButterflyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealButterflyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealButterfly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealButterflyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealButterflyGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealButterflyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealButterflyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealButterflyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealButterflyGameModeBase_Statics::ClassParams = {
		&AUnrealButterflyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealButterflyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealButterflyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealButterflyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealButterflyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealButterflyGameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealButterflyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealButterflyGameModeBase.OuterSingleton;
	}
	template<> UNREALBUTTERFLY_API UClass* StaticClass<AUnrealButterflyGameModeBase>()
	{
		return AUnrealButterflyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealButterflyGameModeBase);
	struct Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_UnrealButterflyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_UnrealButterflyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealButterflyGameModeBase, AUnrealButterflyGameModeBase::StaticClass, TEXT("AUnrealButterflyGameModeBase"), &Z_Registration_Info_UClass_AUnrealButterflyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealButterflyGameModeBase), 608710867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_UnrealButterflyGameModeBase_h_624190090(TEXT("/Script/UnrealButterfly"),
		Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_UnrealButterflyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealButterfly_Source_UnrealButterfly_UnrealButterflyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
