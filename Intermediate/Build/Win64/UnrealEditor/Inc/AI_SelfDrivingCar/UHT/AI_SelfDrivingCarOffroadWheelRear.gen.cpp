// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_SelfDrivingCar/AI_SelfDrivingCarOffroadWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SelfDrivingCarOffroadWheelRear() {}
// Cross Module References
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_NoRegister();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarWheelRear();
	UPackage* Z_Construct_UPackage__Script_AI_SelfDrivingCar();
// End Cross Module References
	void UAI_SelfDrivingCarOffroadWheelRear::StaticRegisterNativesUAI_SelfDrivingCarOffroadWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAI_SelfDrivingCarOffroadWheelRear);
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_NoRegister()
	{
		return UAI_SelfDrivingCarOffroadWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAI_SelfDrivingCarWheelRear,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_SelfDrivingCar,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "AI_SelfDrivingCarOffroadWheelRear.h" },
		{ "ModuleRelativePath", "AI_SelfDrivingCarOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI_SelfDrivingCarOffroadWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics::ClassParams = {
		&UAI_SelfDrivingCarOffroadWheelRear::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear()
	{
		if (!Z_Registration_Info_UClass_UAI_SelfDrivingCarOffroadWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAI_SelfDrivingCarOffroadWheelRear.OuterSingleton, Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAI_SelfDrivingCarOffroadWheelRear.OuterSingleton;
	}
	template<> AI_SELFDRIVINGCAR_API UClass* StaticClass<UAI_SelfDrivingCarOffroadWheelRear>()
	{
		return UAI_SelfDrivingCarOffroadWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI_SelfDrivingCarOffroadWheelRear);
	UAI_SelfDrivingCarOffroadWheelRear::~UAI_SelfDrivingCarOffroadWheelRear() {}
	struct Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAI_SelfDrivingCarOffroadWheelRear, UAI_SelfDrivingCarOffroadWheelRear::StaticClass, TEXT("UAI_SelfDrivingCarOffroadWheelRear"), &Z_Registration_Info_UClass_UAI_SelfDrivingCarOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAI_SelfDrivingCarOffroadWheelRear), 3341310918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelRear_h_55830221(TEXT("/Script/AI_SelfDrivingCar"),
		Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarOffroadWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
