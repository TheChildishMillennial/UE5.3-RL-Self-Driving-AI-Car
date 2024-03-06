// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_SelfDrivingCar/AI_SelfDrivingCarOffroadWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SelfDrivingCarOffroadWheelFront() {}
// Cross Module References
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_NoRegister();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelFront();
	UPackage* Z_Construct_UPackage__Script_AI_SelfDrivingCar();
// End Cross Module References
	void UAI_SelfDrivingCarOffroadWheelFront::StaticRegisterNativesUAI_SelfDrivingCarOffroadWheelFront()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAI_SelfDrivingCarOffroadWheelFront);
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_NoRegister()
	{
		return UAI_SelfDrivingCarOffroadWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAI_SelfDrivingCarWheelFront,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_SelfDrivingCar,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "AI_SelfDrivingCarOffroadWheelFront.h" },
		{ "ModuleRelativePath", "AI_SelfDrivingCarOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI_SelfDrivingCarOffroadWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics::ClassParams = {
		&UAI_SelfDrivingCarOffroadWheelFront::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront()
	{
		if (!Z_Registration_Info_UClass_UAI_SelfDrivingCarOffroadWheelFront.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAI_SelfDrivingCarOffroadWheelFront.OuterSingleton, Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAI_SelfDrivingCarOffroadWheelFront.OuterSingleton;
	}
	template<> AI_SELFDRIVINGCAR_API UClass* StaticClass<UAI_SelfDrivingCarOffroadWheelFront>()
	{
		return UAI_SelfDrivingCarOffroadWheelFront::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI_SelfDrivingCarOffroadWheelFront);
	UAI_SelfDrivingCarOffroadWheelFront::~UAI_SelfDrivingCarOffroadWheelFront() {}
	struct Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelFront_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelFront_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelFront, UAI_SelfDrivingCarOffroadWheelFront::StaticClass, TEXT("UAI_SelfDrivingCarOffroadWheelFront"), &Z_Registration_Info_UClass_UAI_SelfDrivingCarOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAI_SelfDrivingCarOffroadWheelFront), 4135914063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelFront_h_1507423880(TEXT("/Script/AI_SelfDrivingCar"),
		Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelFront_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
