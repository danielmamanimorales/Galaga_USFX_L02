// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ProyectilEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilEnemigo() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilEnemigo_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AProyectilEnemigo::StaticRegisterNativesAProyectilEnemigo()
	{
	}
	UClass* Z_Construct_UClass_AProyectilEnemigo_NoRegister()
	{
		return AProyectilEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemigo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProyectilEnemigo.h" },
		{ "ModuleRelativePath", "ProyectilEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectilEnemigo_Statics::ClassParams = {
		&AProyectilEnemigo::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectilEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectilEnemigo, 1087828425);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AProyectilEnemigo>()
	{
		return AProyectilEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectilEnemigo(Z_Construct_UClass_AProyectilEnemigo, &AProyectilEnemigo::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AProyectilEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif