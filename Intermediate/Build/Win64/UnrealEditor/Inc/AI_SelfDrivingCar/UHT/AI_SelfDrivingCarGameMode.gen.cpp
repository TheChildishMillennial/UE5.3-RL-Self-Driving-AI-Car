// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_SelfDrivingCar/AI_SelfDrivingCarGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SelfDrivingCarGameMode() {}
// Cross Module References
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_AAI_SelfDrivingCarGameMode();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_AAI_SelfDrivingCarGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AI_SelfDrivingCar();
// End Cross Module References
	void AAI_SelfDrivingCarGameMode::StaticRegisterNativesAAI_SelfDrivingCarGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_SelfDrivingCarGameMode);
	UClass* Z_Construct_UClass_AAI_SelfDrivingCarGameMode_NoRegister()
	{
		return AAI_SelfDrivingCarGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_SelfDrivingCar,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AI_SelfDrivingCarGameMode.h" },
		{ "ModuleRelativePath", "AI_SelfDrivingCarGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_SelfDrivingCarGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics::ClassParams = {
		&AAI_SelfDrivingCarGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAI_SelfDrivingCarGameMode()
	{
		if (!Z_Registration_Info_UClass_AAI_SelfDrivingCarGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_SelfDrivingCarGameMode.OuterSingleton, Z_Construct_UClass_AAI_SelfDrivingCarGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAI_SelfDrivingCarGameMode.OuterSingleton;
	}
	template<> AI_SELFDRIVINGCAR_API UClass* StaticClass<AAI_SelfDrivingCarGameMode>()
	{
		return AAI_SelfDrivingCarGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_SelfDrivingCarGameMode);
	AAI_SelfDrivingCarGameMode::~AAI_SelfDrivingCarGameMode() {}
	struct Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAI_SelfDrivingCarGameMode, AAI_SelfDrivingCarGameMode::StaticClass, TEXT("AAI_SelfDrivingCarGameMode"), &Z_Registration_Info_UClass_AAI_SelfDrivingCarGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_SelfDrivingCarGameMode), 3559676142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarGameMode_h_1725302815(TEXT("/Script/AI_SelfDrivingCar"),
		Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
