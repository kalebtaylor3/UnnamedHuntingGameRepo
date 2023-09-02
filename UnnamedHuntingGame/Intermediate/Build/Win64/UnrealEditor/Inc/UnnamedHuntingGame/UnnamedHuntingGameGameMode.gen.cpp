// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnnamedHuntingGame/UnnamedHuntingGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnnamedHuntingGameGameMode() {}
// Cross Module References
	UNNAMEDHUNTINGGAME_API UClass* Z_Construct_UClass_AUnnamedHuntingGameGameMode_NoRegister();
	UNNAMEDHUNTINGGAME_API UClass* Z_Construct_UClass_AUnnamedHuntingGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnnamedHuntingGame();
// End Cross Module References
	void AUnnamedHuntingGameGameMode::StaticRegisterNativesAUnnamedHuntingGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnnamedHuntingGameGameMode);
	UClass* Z_Construct_UClass_AUnnamedHuntingGameGameMode_NoRegister()
	{
		return AUnnamedHuntingGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnnamedHuntingGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnnamedHuntingGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnnamedHuntingGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnnamedHuntingGameGameMode.h" },
		{ "ModuleRelativePath", "UnnamedHuntingGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnnamedHuntingGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnnamedHuntingGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnnamedHuntingGameGameMode_Statics::ClassParams = {
		&AUnnamedHuntingGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnnamedHuntingGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AUnnamedHuntingGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnnamedHuntingGameGameMode.OuterSingleton, Z_Construct_UClass_AUnnamedHuntingGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnnamedHuntingGameGameMode.OuterSingleton;
	}
	template<> UNNAMEDHUNTINGGAME_API UClass* StaticClass<AUnnamedHuntingGameGameMode>()
	{
		return AUnnamedHuntingGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnnamedHuntingGameGameMode);
	struct Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnnamedHuntingGameGameMode, AUnnamedHuntingGameGameMode::StaticClass, TEXT("AUnnamedHuntingGameGameMode"), &Z_Registration_Info_UClass_AUnnamedHuntingGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnnamedHuntingGameGameMode), 544053625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameGameMode_h_2079133051(TEXT("/Script/UnnamedHuntingGame"),
		Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
