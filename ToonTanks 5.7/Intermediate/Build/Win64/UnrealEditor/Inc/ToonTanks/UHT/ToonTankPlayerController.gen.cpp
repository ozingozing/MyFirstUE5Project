// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ToonTankPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeToonTankPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TOONTANKS_API UClass* Z_Construct_UClass_AToonTankPlayerController();
TOONTANKS_API UClass* Z_Construct_UClass_AToonTankPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AToonTankPlayerController ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AToonTankPlayerController;
UClass* AToonTankPlayerController::GetPrivateStaticClass()
{
	using TClass = AToonTankPlayerController;
	if (!Z_Registration_Info_UClass_AToonTankPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ToonTankPlayerController"),
			Z_Registration_Info_UClass_AToonTankPlayerController.InnerSingleton,
			StaticRegisterNativesAToonTankPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AToonTankPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AToonTankPlayerController_NoRegister()
{
	return AToonTankPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AToonTankPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ToonTankPlayerController.h" },
		{ "ModuleRelativePath", "ToonTankPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AToonTankPlayerController constinit property declarations ****************
// ********** End Class AToonTankPlayerController constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToonTankPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AToonTankPlayerController_Statics
UObject* (*const Z_Construct_UClass_AToonTankPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTankPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToonTankPlayerController_Statics::ClassParams = {
	&AToonTankPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTankPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AToonTankPlayerController_Statics::Class_MetaDataParams)
};
void AToonTankPlayerController::StaticRegisterNativesAToonTankPlayerController()
{
}
UClass* Z_Construct_UClass_AToonTankPlayerController()
{
	if (!Z_Registration_Info_UClass_AToonTankPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToonTankPlayerController.OuterSingleton, Z_Construct_UClass_AToonTankPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToonTankPlayerController.OuterSingleton;
}
AToonTankPlayerController::AToonTankPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AToonTankPlayerController);
AToonTankPlayerController::~AToonTankPlayerController() {}
// ********** End Class AToonTankPlayerController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h__Script_ToonTanks_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToonTankPlayerController, AToonTankPlayerController::StaticClass, TEXT("AToonTankPlayerController"), &Z_Registration_Info_UClass_AToonTankPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToonTankPlayerController), 725591101U) },
	};
}; // Z_CompiledInDeferFile_FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h__Script_ToonTanks_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h__Script_ToonTanks_2297273251{
	TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h__Script_ToonTanks_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToonTanks_5_7_Source_ToonTanks_ToonTankPlayerController_h__Script_ToonTanks_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
