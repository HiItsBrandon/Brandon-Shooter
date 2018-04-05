// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_Robot_generated_h
#error "Robot.generated.h already included, missing '#pragma once' in Robot.h"
#endif
#define SHOOTER_Robot_generated_h

#define BrandonShooter_Source_Shooter_Robot_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TakeDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define BrandonShooter_Source_Shooter_Robot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TakeDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define BrandonShooter_Source_Shooter_Robot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobot(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ARobot(); \
public: \
	DECLARE_CLASS(ARobot, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ARobot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BrandonShooter_Source_Shooter_Robot_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARobot(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ARobot(); \
public: \
	DECLARE_CLASS(ARobot, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ARobot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BrandonShooter_Source_Shooter_Robot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARobot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobot(ARobot&&); \
	NO_API ARobot(const ARobot&); \
public:


#define BrandonShooter_Source_Shooter_Robot_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobot(ARobot&&); \
	NO_API ARobot(const ARobot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARobot)


#define BrandonShooter_Source_Shooter_Robot_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ARobot, Health); }


#define BrandonShooter_Source_Shooter_Robot_h_9_PROLOG
#define BrandonShooter_Source_Shooter_Robot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrandonShooter_Source_Shooter_Robot_h_12_PRIVATE_PROPERTY_OFFSET \
	BrandonShooter_Source_Shooter_Robot_h_12_RPC_WRAPPERS \
	BrandonShooter_Source_Shooter_Robot_h_12_INCLASS \
	BrandonShooter_Source_Shooter_Robot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BrandonShooter_Source_Shooter_Robot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrandonShooter_Source_Shooter_Robot_h_12_PRIVATE_PROPERTY_OFFSET \
	BrandonShooter_Source_Shooter_Robot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BrandonShooter_Source_Shooter_Robot_h_12_INCLASS_NO_PURE_DECLS \
	BrandonShooter_Source_Shooter_Robot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BrandonShooter_Source_Shooter_Robot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
