// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_MyPlayerCharacter_generated_h
#error "MyPlayerCharacter.generated.h already included, missing '#pragma once' in MyPlayerCharacter.h"
#endif
#define SHOOTER_MyPlayerCharacter_generated_h

#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_RPC_WRAPPERS
#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerCharacter(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_AMyPlayerCharacter(); \
public: \
	DECLARE_CLASS(AMyPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerCharacter(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_AMyPlayerCharacter(); \
public: \
	DECLARE_CLASS(AMyPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCharacter(AMyPlayerCharacter&&); \
	NO_API AMyPlayerCharacter(const AMyPlayerCharacter&); \
public:


#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCharacter(AMyPlayerCharacter&&); \
	NO_API AMyPlayerCharacter(const AMyPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerCharacter)


#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BulletSpawn() { return STRUCT_OFFSET(AMyPlayerCharacter, BulletSpawn); }


#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_9_PROLOG
#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_RPC_WRAPPERS \
	BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_INCLASS \
	BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BrandonShooter_Source_Shooter_MyPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BrandonShooter_Source_Shooter_MyPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
