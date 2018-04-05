// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerCharacter() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AMyPlayerCharacter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AMyPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AMyPlayerCharacter::StaticRegisterNativesAMyPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerCharacter_NoRegister()
	{
		return AMyPlayerCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyPlayerCharacter.h" },
				{ "ModuleRelativePath", "MyPlayerCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawn_MetaData[] = {
				{ "Category", "MyPlayerCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyPlayerCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletSpawn = { UE4CodeGen_Private::EPropertyClass::Object, "BulletSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080009, 1, nullptr, STRUCT_OFFSET(AMyPlayerCharacter, BulletSpawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_BulletSpawn_MetaData, ARRAY_COUNT(NewProp_BulletSpawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletSpawn,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyPlayerCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyPlayerCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerCharacter, 2504356943);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerCharacter(Z_Construct_UClass_AMyPlayerCharacter, &AMyPlayerCharacter::StaticClass, TEXT("/Script/Shooter"), TEXT("AMyPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
