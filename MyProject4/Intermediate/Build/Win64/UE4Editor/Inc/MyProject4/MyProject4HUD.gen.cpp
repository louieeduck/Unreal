// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject4/MyProject4HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject4HUD() {}
// Cross Module References
	MYPROJECT4_API UClass* Z_Construct_UClass_AMyProject4HUD_NoRegister();
	MYPROJECT4_API UClass* Z_Construct_UClass_AMyProject4HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyProject4();
// End Cross Module References
	void AMyProject4HUD::StaticRegisterNativesAMyProject4HUD()
	{
	}
	UClass* Z_Construct_UClass_AMyProject4HUD_NoRegister()
	{
		return AMyProject4HUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject4HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject4HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject4HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyProject4HUD.h" },
		{ "ModuleRelativePath", "MyProject4HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject4HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject4HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject4HUD_Statics::ClassParams = {
		&AMyProject4HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject4HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject4HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject4HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject4HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject4HUD, 3536731835);
	template<> MYPROJECT4_API UClass* StaticClass<AMyProject4HUD>()
	{
		return AMyProject4HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject4HUD(Z_Construct_UClass_AMyProject4HUD, &AMyProject4HUD::StaticClass, TEXT("/Script/MyProject4"), TEXT("AMyProject4HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject4HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
