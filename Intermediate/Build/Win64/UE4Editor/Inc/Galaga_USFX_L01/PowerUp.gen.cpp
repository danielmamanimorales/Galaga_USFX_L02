// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/PowerUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUp() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APowerUp_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APowerUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void APowerUp::StaticRegisterNativesAPowerUp()
	{
	}
	UClass* Z_Construct_UClass_APowerUp_NoRegister()
	{
		return APowerUp::StaticClass();
	}
	struct Z_Construct_UClass_APowerUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUp.h" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerUp_Statics::ClassParams = {
		&APowerUp::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerUp, 1361664465);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<APowerUp>()
	{
		return APowerUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerUp(Z_Construct_UClass_APowerUp, &APowerUp::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("APowerUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
