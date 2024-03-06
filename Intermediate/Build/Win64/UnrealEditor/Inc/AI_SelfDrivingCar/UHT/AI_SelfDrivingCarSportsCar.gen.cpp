// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_SelfDrivingCar/AI_SelfDrivingCarSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SelfDrivingCarSportsCar() {}
// Cross Module References
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_AAI_SelfDrivingCarPawn();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_AAI_SelfDrivingCarSportsCar();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AI_SelfDrivingCar();
// End Cross Module References
	void AAI_SelfDrivingCarSportsCar::StaticRegisterNativesAAI_SelfDrivingCarSportsCar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_SelfDrivingCarSportsCar);
	UClass* Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_NoRegister()
	{
		return AAI_SelfDrivingCarSportsCar::StaticClass();
	}
	struct Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAI_SelfDrivingCarPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_SelfDrivingCar,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_SelfDrivingCarSportsCar.h" },
		{ "ModuleRelativePath", "AI_SelfDrivingCarSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_SelfDrivingCarSportsCar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics::ClassParams = {
		&AAI_SelfDrivingCarSportsCar::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAI_SelfDrivingCarSportsCar()
	{
		if (!Z_Registration_Info_UClass_AAI_SelfDrivingCarSportsCar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_SelfDrivingCarSportsCar.OuterSingleton, Z_Construct_UClass_AAI_SelfDrivingCarSportsCar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAI_SelfDrivingCarSportsCar.OuterSingleton;
	}
	template<> AI_SELFDRIVINGCAR_API UClass* StaticClass<AAI_SelfDrivingCarSportsCar>()
	{
		return AAI_SelfDrivingCarSportsCar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_SelfDrivingCarSportsCar);
	AAI_SelfDrivingCarSportsCar::~AAI_SelfDrivingCarSportsCar() {}
	struct Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsCar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsCar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAI_SelfDrivingCarSportsCar, AAI_SelfDrivingCarSportsCar::StaticClass, TEXT("AAI_SelfDrivingCarSportsCar"), &Z_Registration_Info_UClass_AAI_SelfDrivingCarSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_SelfDrivingCarSportsCar), 2643572764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsCar_h_1753977223(TEXT("/Script/AI_SelfDrivingCar"),
		Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsCar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
