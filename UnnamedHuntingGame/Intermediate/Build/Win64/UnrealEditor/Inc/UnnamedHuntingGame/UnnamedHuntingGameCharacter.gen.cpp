// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnnamedHuntingGame/UnnamedHuntingGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnnamedHuntingGameCharacter() {}
// Cross Module References
	UNNAMEDHUNTINGGAME_API UFunction* Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnnamedHuntingGame();
	UNNAMEDHUNTINGGAME_API UClass* Z_Construct_UClass_AUnnamedHuntingGameCharacter_NoRegister();
	UNNAMEDHUNTINGGAME_API UClass* Z_Construct_UClass_AUnnamedHuntingGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnnamedHuntingGame, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AUnnamedHuntingGameCharacter::StaticRegisterNativesAUnnamedHuntingGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnnamedHuntingGameCharacter);
	UClass* Z_Construct_UClass_AUnnamedHuntingGameCharacter_NoRegister()
	{
		return AUnnamedHuntingGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startingWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_startingWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FP_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FP_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cam_Skell_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cam_Skell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Offset_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cam_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cam_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasWeapon_MetaData[];
#endif
		static void NewProp_hasWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnnamedHuntingGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnnamedHuntingGameCharacter.h" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, OnUseItem), Z_Construct_UDelegateFunction_UnnamedHuntingGame_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 2565669423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_startingWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_startingWeapon = { "startingWeapon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, startingWeapon), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_startingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_startingWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FP_Root_MetaData[] = {
		{ "Category", "Rig" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FP_Root = { "FP_Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, FP_Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FP_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FP_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Skell_MetaData[] = {
		{ "Category", "Rig" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Skell = { "Cam_Skell", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, Cam_Skell), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Skell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Skell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh_Root_MetaData[] = {
		{ "Category", "Rig" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh_Root = { "Mesh_Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, Mesh_Root), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Offset_Root_MetaData[] = {
		{ "Category", "Rig" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Offset_Root = { "Offset_Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, Offset_Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Offset_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Offset_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Root_MetaData[] = {
		{ "Category", "Rig" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Root = { "Cam_Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, Cam_Root), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_hasWeapon_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_hasWeapon_SetBit(void* Obj)
	{
		((AUnnamedHuntingGameCharacter*)Obj)->hasWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_hasWeapon = { "hasWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnnamedHuntingGameCharacter), &Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_hasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_hasWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_hasWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_currentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "UnnamedHuntingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_currentWeapon = { "currentWeapon", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnnamedHuntingGameCharacter, currentWeapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_currentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_currentWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_startingWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_FP_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Skell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Mesh_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Offset_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_Cam_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_hasWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::NewProp_currentWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnnamedHuntingGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::ClassParams = {
		&AUnnamedHuntingGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnnamedHuntingGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AUnnamedHuntingGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnnamedHuntingGameCharacter.OuterSingleton, Z_Construct_UClass_AUnnamedHuntingGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnnamedHuntingGameCharacter.OuterSingleton;
	}
	template<> UNNAMEDHUNTINGGAME_API UClass* StaticClass<AUnnamedHuntingGameCharacter>()
	{
		return AUnnamedHuntingGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnnamedHuntingGameCharacter);
	struct Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnnamedHuntingGameCharacter, AUnnamedHuntingGameCharacter::StaticClass, TEXT("AUnnamedHuntingGameCharacter"), &Z_Registration_Info_UClass_AUnnamedHuntingGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnnamedHuntingGameCharacter), 3003157773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameCharacter_h_1662541877(TEXT("/Script/UnnamedHuntingGame"),
		Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnnamedHuntingGame_Source_UnnamedHuntingGame_UnnamedHuntingGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
