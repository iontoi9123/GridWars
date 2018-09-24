// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT1_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define PROJECT1_MyPawn_generated_h

#define GridWars_Source_project1_MyPawn_h_12_RPC_WRAPPERS
#define GridWars_Source_project1_MyPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GridWars_Source_project1_MyPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend PROJECT1_API class UClass* Z_Construct_UClass_AMyPawn(); \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/project1"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GridWars_Source_project1_MyPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend PROJECT1_API class UClass* Z_Construct_UClass_AMyPawn(); \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/project1"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GridWars_Source_project1_MyPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define GridWars_Source_project1_MyPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define GridWars_Source_project1_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define GridWars_Source_project1_MyPawn_h_9_PROLOG
#define GridWars_Source_project1_MyPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GridWars_Source_project1_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	GridWars_Source_project1_MyPawn_h_12_RPC_WRAPPERS \
	GridWars_Source_project1_MyPawn_h_12_INCLASS \
	GridWars_Source_project1_MyPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GridWars_Source_project1_MyPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GridWars_Source_project1_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	GridWars_Source_project1_MyPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GridWars_Source_project1_MyPawn_h_12_INCLASS_NO_PURE_DECLS \
	GridWars_Source_project1_MyPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GridWars_Source_project1_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS