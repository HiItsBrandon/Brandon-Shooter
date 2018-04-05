// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Robot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobot() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ARobot_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ARobot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UFunction* Z_Construct_UFunction_ARobot_TakeDamage();
// End Cross Module References
	void ARobot::StaticRegisterNativesARobot()
	{
		UClass* Class = ARobot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", (Native)&ARobot::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ARobot_TakeDamage()
	{
		struct Robot_eventTakeDamage_Parms
		{
			int32 Damage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Int, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Robot_eventTakeDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Robot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, "TakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Robot_eventTakeDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARobot_NoRegister()
	{
		return ARobot::StaticClass();
	}
	UClass* Z_Construct_UClass_ARobot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ARobot_TakeDamage, "TakeDamage" }, // 170190873
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Robot.h" },
				{ "ModuleRelativePath", "Robot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "Robot" },
				{ "ModuleRelativePath", "Robot.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Int, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ARobot, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARobot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARobot::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ARobot, 3247841733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobot(Z_Construct_UClass_ARobot, &ARobot::StaticClass, TEXT("/Script/Shooter"), TEXT("ARobot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
