// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_SelfDrivingCar/AI_SelfDrivingCarWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SelfDrivingCarWheelRear() {}
// Cross Module References
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelRear();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_AI_SelfDrivingCar();
// End Cross Module References
	void UAI_SelfDrivingCarWheelRear::StaticRegisterNativesUAI_SelfDrivingCarWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAI_SelfDrivingCarWheelRear);
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_NoRegister()
	{
		return UAI_SelfDrivingCarWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_SelfDrivingCar,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "AI_SelfDrivingCarWheelRear.h" },
		{ "ModuleRelativePath", "AI_SelfDrivingCarWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI_SelfDrivingCarWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics::ClassParams = {
		&UAI_SelfDrivingCarWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelRear()
	{
		if (!Z_Registration_Info_UClass_UAI_SelfDrivingCarWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAI_SelfDrivingCarWheelRear.OuterSingleton, Z_Construct_UClass_UAI_SelfDrivingCarWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAI_SelfDrivingCarWheelRear.OuterSingleton;
	}
	template<> AI_SELFDRIVINGCAR_API UClass* StaticClass<UAI_SelfDrivingCarWheelRear>()
	{
		return UAI_SelfDrivingCarWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI_SelfDrivingCarWheelRear);
	UAI_SelfDrivingCarWheelRear::~UAI_SelfDrivingCarWheelRear() {}
	struct Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAI_SelfDrivingCarWheelRear, UAI_SelfDrivingCarWheelRear::StaticClass, TEXT("UAI_SelfDrivingCarWheelRear"), &Z_Registration_Info_UClass_UAI_SelfDrivingCarWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAI_SelfDrivingCarWheelRear), 2052420509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelRear_h_1629431044(TEXT("/Script/AI_SelfDrivingCar"),
		Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
