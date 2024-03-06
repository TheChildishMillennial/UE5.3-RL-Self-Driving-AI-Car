// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_SelfDrivingCar/AI_SelfDrivingCarSportsWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SelfDrivingCarSportsWheelFront() {}
// Cross Module References
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_NoRegister();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelFront();
	UPackage* Z_Construct_UPackage__Script_AI_SelfDrivingCar();
// End Cross Module References
	void UAI_SelfDrivingCarSportsWheelFront::StaticRegisterNativesUAI_SelfDrivingCarSportsWheelFront()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAI_SelfDrivingCarSportsWheelFront);
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_NoRegister()
	{
		return UAI_SelfDrivingCarSportsWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAI_SelfDrivingCarWheelFront,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_SelfDrivingCar,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "AI_SelfDrivingCarSportsWheelFront.h" },
		{ "ModuleRelativePath", "AI_SelfDrivingCarSportsWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Sports Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI_SelfDrivingCarSportsWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics::ClassParams = {
		&UAI_SelfDrivingCarSportsWheelFront::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront()
	{
		if (!Z_Registration_Info_UClass_UAI_SelfDrivingCarSportsWheelFront.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAI_SelfDrivingCarSportsWheelFront.OuterSingleton, Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAI_SelfDrivingCarSportsWheelFront.OuterSingleton;
	}
	template<> AI_SELFDRIVINGCAR_API UClass* StaticClass<UAI_SelfDrivingCarSportsWheelFront>()
	{
		return UAI_SelfDrivingCarSportsWheelFront::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI_SelfDrivingCarSportsWheelFront);
	UAI_SelfDrivingCarSportsWheelFront::~UAI_SelfDrivingCarSportsWheelFront() {}
	struct Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsWheelFront_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsWheelFront_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAI_SelfDrivingCarSportsWheelFront, UAI_SelfDrivingCarSportsWheelFront::StaticClass, TEXT("UAI_SelfDrivingCarSportsWheelFront"), &Z_Registration_Info_UClass_UAI_SelfDrivingCarSportsWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAI_SelfDrivingCarSportsWheelFront), 3755997684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsWheelFront_h_3168142524(TEXT("/Script/AI_SelfDrivingCar"),
		Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarSportsWheelFront_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
