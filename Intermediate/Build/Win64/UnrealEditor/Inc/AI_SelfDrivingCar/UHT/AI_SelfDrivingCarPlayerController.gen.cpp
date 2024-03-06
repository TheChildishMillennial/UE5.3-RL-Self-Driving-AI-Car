// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_SelfDrivingCar/AI_SelfDrivingCarPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SelfDrivingCarPlayerController() {}
// Cross Module References
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_AAI_SelfDrivingCarPlayerController();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_NoRegister();
	AI_SELFDRIVINGCAR_API UClass* Z_Construct_UClass_UAI_SelfDrivingCarUI_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AI_SelfDrivingCar();
// End Cross Module References
	void AAI_SelfDrivingCarPlayerController::StaticRegisterNativesAAI_SelfDrivingCarPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_SelfDrivingCarPlayerController);
	UClass* Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_NoRegister()
	{
		return AAI_SelfDrivingCarPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VehicleUIClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_SelfDrivingCar,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Player Controller class\n *  Handles input mapping and user interface\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI_SelfDrivingCarPlayerController.h" },
		{ "ModuleRelativePath", "AI_SelfDrivingCarPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Player Controller class\nHandles input mapping and user interface" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "AI_SelfDrivingCarPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_SelfDrivingCarPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_VehicleUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the UI to spawn */" },
#endif
		{ "ModuleRelativePath", "AI_SelfDrivingCarPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the UI to spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_VehicleUIClass = { "VehicleUIClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_SelfDrivingCarPlayerController, VehicleUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAI_SelfDrivingCarUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_VehicleUIClass_MetaData), Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_VehicleUIClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::NewProp_VehicleUIClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_SelfDrivingCarPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::ClassParams = {
		&AAI_SelfDrivingCarPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAI_SelfDrivingCarPlayerController()
	{
		if (!Z_Registration_Info_UClass_AAI_SelfDrivingCarPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_SelfDrivingCarPlayerController.OuterSingleton, Z_Construct_UClass_AAI_SelfDrivingCarPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAI_SelfDrivingCarPlayerController.OuterSingleton;
	}
	template<> AI_SELFDRIVINGCAR_API UClass* StaticClass<AAI_SelfDrivingCarPlayerController>()
	{
		return AAI_SelfDrivingCarPlayerController::StaticClass();
	}
	AAI_SelfDrivingCarPlayerController::AAI_SelfDrivingCarPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_SelfDrivingCarPlayerController);
	AAI_SelfDrivingCarPlayerController::~AAI_SelfDrivingCarPlayerController() {}
	struct Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAI_SelfDrivingCarPlayerController, AAI_SelfDrivingCarPlayerController::StaticClass, TEXT("AAI_SelfDrivingCarPlayerController"), &Z_Registration_Info_UClass_AAI_SelfDrivingCarPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_SelfDrivingCarPlayerController), 3374735423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarPlayerController_h_1942764602(TEXT("/Script/AI_SelfDrivingCar"),
		Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AI_SelfDrivingCar_Source_AI_SelfDrivingCar_AI_SelfDrivingCarPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
