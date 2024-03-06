// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_SelfDrivingCar/AI_SelfDrivingCarWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SelfDrivingCarWheelFront() {}
// Cross Module References
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelFront();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_AI_SelfDrivingCar();
// End Cross Module References
	void UAI_SelfDrivingCarWheelFront::StaticRegisterNativesUAI_SelfDrivingCarWheelFront()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAI_SelfDrivingCarWheelFront);
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_NoRegister()
	{
		return UAI_SelfDrivingCarWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_SelfDrivingCar,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "AI_SelfDrivingCarWheelFront.h" },
		{ "ModuleRelativePath", "AI_SelfDrivingCarWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI_SelfDrivingCarWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics::ClassParams = {
		&UAI_SelfDrivingCarWheelFront::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelFront()
	{
		if (!Z_Registration_Info_UClass_UAI_SelfDrivingCarWheelFront.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAI_SelfDrivingCarWheelFront.OuterSingleton, Z_Construct_UClass_UAI_SelfDrivingCarWheelFront_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAI_SelfDrivingCarWheelFront.OuterSingleton;
	}
	template<> AI_SELFDRIVINGCAR_API UClass* StaticClass<UAI_SelfDrivingCarWheelFront>()
	{
		return UAI_SelfDrivingCarWheelFront::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI_SelfDrivingCarWheelFront);
	UAI_SelfDrivingCarWheelFront::~UAI_SelfDrivingCarWheelFront() {}
	struct Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelFront_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelFront_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAI_SelfDrivingCarWheelFront, UAI_SelfDrivingCarWheelFront::StaticClass, TEXT("UAI_SelfDrivingCarWheelFront"), &Z_Registration_Info_UClass_UAI_SelfDrivingCarWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAI_SelfDrivingCarWheelFront), 3635290643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelFront_h_349815102(TEXT("/Script/AI_SelfDrivingCar"),
		Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarWheelFront_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
