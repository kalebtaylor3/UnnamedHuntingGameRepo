// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnnamedHuntingGame_init() {}
	UNNAMEDHUNTINGGAME_API UFunction* Z_Construct_UDelegateFunction_UnnamedHuntingGame_AttachWeapon__DelegateSignature();
	UNNAMEDHUNTINGGAME_API UFunction* Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnPickUp__DelegateSignature();
	UNNAMEDHUNTINGGAME_API UFunction* Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature();
	UNNAMEDHUNTINGGAME_API UFunction* Z_Construct_UDelegateFunction_UnnamedHuntingGame_WeaponFiredDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnnamedHuntingGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnnamedHuntingGame()
	{
		if (!Z_Registration_Info_UPackage__Script_UnnamedHuntingGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnnamedHuntingGame_AttachWeapon__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnnamedHuntingGame_WeaponFiredDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnnamedHuntingGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x717AED4D,
				0x9726BE59,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnnamedHuntingGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnnamedHuntingGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnnamedHuntingGame(Z_Construct_UPackage__Script_UnnamedHuntingGame, TEXT("/Script/UnnamedHuntingGame"), Z_Registration_Info_UPackage__Script_UnnamedHuntingGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x717AED4D, 0x9726BE59));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
