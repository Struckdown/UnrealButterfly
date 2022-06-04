// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNREALBUTTERFLY_AContainmentBox_generated_h
#error "AContainmentBox.generated.h already included, missing '#pragma once' in AContainmentBox.h"
#endif
#define UNREALBUTTERFLY_AContainmentBox_generated_h

#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_SPARSE_DATA
#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAContainmentBox(); \
	friend struct Z_Construct_UClass_AAContainmentBox_Statics; \
public: \
	DECLARE_CLASS(AAContainmentBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealButterfly"), NO_API) \
	DECLARE_SERIALIZER(AAContainmentBox)


#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAContainmentBox(); \
	friend struct Z_Construct_UClass_AAContainmentBox_Statics; \
public: \
	DECLARE_CLASS(AAContainmentBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealButterfly"), NO_API) \
	DECLARE_SERIALIZER(AAContainmentBox)


#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAContainmentBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAContainmentBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAContainmentBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAContainmentBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAContainmentBox(AAContainmentBox&&); \
	NO_API AAContainmentBox(const AAContainmentBox&); \
public:


#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAContainmentBox(AAContainmentBox&&); \
	NO_API AAContainmentBox(const AAContainmentBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAContainmentBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAContainmentBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAContainmentBox)


#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_11_PROLOG
#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_SPARSE_DATA \
	FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_RPC_WRAPPERS \
	FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_INCLASS \
	FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_SPARSE_DATA \
	FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALBUTTERFLY_API UClass* StaticClass<class AAContainmentBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealButterfly_Source_UnrealButterfly_Public_AContainmentBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
