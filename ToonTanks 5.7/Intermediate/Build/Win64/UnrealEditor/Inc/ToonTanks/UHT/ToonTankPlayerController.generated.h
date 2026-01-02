// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToonTankPlayerController.h"

#ifdef TOONTANKS_ToonTankPlayerController_generated_h
#error "ToonTankPlayerController.generated.h already included, missing '#pragma once' in ToonTankPlayerController.h"
#endif
#define TOONTANKS_ToonTankPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AToonTankPlayerController ************************************************
struct Z_Construct_UClass_AToonTankPlayerController_Statics;
TOONTANKS_API UClass* Z_Construct_UClass_AToonTankPlayerController_NoRegister();

#define FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToonTankPlayerController(); \
	friend struct ::Z_Construct_UClass_AToonTankPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOONTANKS_API UClass* ::Z_Construct_UClass_AToonTankPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AToonTankPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), Z_Construct_UClass_AToonTankPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AToonTankPlayerController)


#define FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AToonTankPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AToonTankPlayerController(AToonTankPlayerController&&) = delete; \
	AToonTankPlayerController(const AToonTankPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToonTankPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToonTankPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AToonTankPlayerController) \
	NO_API virtual ~AToonTankPlayerController();


#define FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h_12_PROLOG
#define FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AToonTankPlayerController;

// ********** End Class AToonTankPlayerController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
