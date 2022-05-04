#pragma once
#include <Windows.h>

// UWORLD
#define OFFSET_UWORLD 0xb78bc70
// GWORLD
#define GWorld: 0xc526e18
// FNAME
#define FNamePool : 0xc563880
// OBJECT ARRAY
#define UObjectArray : 0xc376110
// BONE MATRIX
#define GetBoneMatrix : 0xf77c08
// WORLD TO SCREEN
#define ProjectWorldToScreen : 0x829d314

namespace Offsets {

	// Used for UD Fly Hack
	uintptr_t bUseGravity = 0x668;

	uintptr_t GameInstance = 0x190;
	uintptr_t LocalPlayers = 0x38;
	uintptr_t PlayerController = 0x30;
	uintptr_t LocalPawn = 0x2A8;
	uintptr_t ProcessEvent index = 0x4B;

	// Camera
	uintptr_t GetLastFrameCameraCachePOV = 0x6F0;
	uintptr_t GetCameraCachePOV = 0x6E8;
	uintptr_t GetCameraRotation = 0x798;
	uintptr_t GetCameraLocation = 0x7A0;
	uintptr_t GetPlayerViewpoint = 0x790;
	uintptr_t SetControlRotation = 0x700;

	uintptr_t CurrentActor = 0x8;
	uintptr_t Velocity = 0x140;
	uintptr_t RelativeRotation = 0x040;
	uintptr_t Persistentlevel = 0x30;
	uintptr_t AcotrCount = 0xA0;
	uintptr_t AAcotrs = 0x98;


	// These 2 PlayerState are the same. One of the Offset code is true.
	uintptr_t PlayerState = 0x238;
	uintptr_t PlayerState = 0x290;

	// These 2 ComponentToWorld are the same. One of the Offset code is true.
	uintptr_t RootComponent = 0x130;
	uintptr_t RootComponent = 0x188;

	// These 2 TeamIndex are the same. One of the Offset code is true.
	uintptr_t TeamIndex = 0xF28;
	uintptr_t TeamIndex = 0x1010;

	// These 2 Mesh are the same. One of the Offset code is true.
	uintptr_t Mesh = 0x280;
	uintptr_t Mesh = 0x2F0;

	// These 2 RelativeLocation are the same. One of the Offset code is true.
	uintptr_t RelativeLocation = 0x11C;
	uintptr_t RelativeLocation = 0x128;

	// These 2 ComponentToWorld are the same. One of the Offset code is true.
	uintptr_t ComponentToWorld = 0x1C0;
	uintptr_t ComponentToWorld = 0x240;

	// These 2 BoneArray are the same. One of the Offset code is true.
	uintptr_t BoneArray = 0x4B0;
	uintptr_t BoneArray = 0x590;

	// These 2 bIsDying are the same. One of the Offset code is true.
	uintptr_t bIsDying = 0x548;
	uintptr_t bIsDying = 0x680;

	// These 2 bIsDBNO are the same. One of the Offset code is true.
	uintptr_t bIsDBNO = 0x572;
	uintptr_t bIsDBNO = 0x6F2;
}

namespace W2S {
	uintptr_t chain69 = 0xA8;
	uintptr_t chain699 = 0x7E8;
	uintptr_t chain = 0x70;
	uintptr_t chain1 = 0x98;
	uintptr_t chain2 = 0x140;
	uintptr_t vDelta = 0x10;
	uintptr_t zoom = 0x580;
}
namespace NATIVESNEW {
	uintptr_t World.Levels = 0x148;
	uintptr_t World.PersistentLevel = 0x30;
	uintptr_t GameInstance.LocalPlayers = 0x38;
	uintptr_t World.OwningGameInstance = 0x190;
	uintptr_t Controller.ControlRotation = 0x310;
	uintptr_t PlayerController.PlayerCameraManager = 0x350;
	// These 2 AcknowledgedPawn are the same. One of the Offset code is true.
	uintptr_t PlayerController.AcknowledgedPawn = 0x338;
	uintptr_t PlayerController.AcknowledgedPawn = 0x310;

	uintptr_t Pawn.PlayerState = 0x2B8;
	uintptr_t Actor.RootComponent = 0x190;
	uintptr_t Character.Mesh = 0x318;
	uintptr_t SceneComponent.RelativeLocation = 0x138;
	uintptr_t SceneComponent.ComponentVelocity = 0x180;
	uintptr_t StaticMeshComponent.StaticMesh = 0x588;
	uintptr_t StaticMeshComponent.ComponentToWorld = 0x0;
	uintptr_t SkinnedMeshComponent.CachedWorldSpaceBounds = 0x748;
	uintptr_t Actor.CustomTimeDilation = 0xD4;
	uintptr_t FortWeapon.LastFireTimeVerified = 0xA8C;
	uintptr_t FortPawn.bIsDBNO = 0x712;
	uintptr_t FortPawn.bIsDying = 0x6A0;
	uintptr_t FortPlayerStateAthena.TeamIndex = 0x1018;
	uintptr_t FortPickup.PrimaryPickupItemEntry = 0x320;
	uintptr_t FortItemDefinition.DisplayName = 0x90;
	uintptr_t FortItemEntry.ItemDefinition = 0x18;
	uintptr_t FortPawn.CurrentWeapon = 0x7B0;
	uintptr_t FortWeapon.WeaponData = 0x400;
	uintptr_t Pawn.RemoteViewPitch = 0x2AA;
	uintptr_t FortWeapon.LastFireAbilityTime = 0x1378;
	uintptr_t FortWeaponItemDefinition.WeaponStatHandle = 0x998;
	uintptr_t FortProjectileAthena.FireStartLoc = 0xA18;
	uintptr_t FortBaseWeaponStats.ReloadTime = 0xE8;
	uintptr_t FortBaseWeaponStats.ReloadScale = 0xEC;
	uintptr_t FortBaseWeaponStats.ChargeDownTime = 0x118;
	uintptr_t FortRangedWeaponStats.RecoilHoriz = 0x1FC;
	uintptr_t FortRangedWeaponStats.RecoilVert = 0x1EC;
	uintptr_t FortRangedWeaponStats.RecoilDownsightsMultiplier = 0x218;
	// These FortPlayerPawnAthena.ReviveFromDBNOTime are the same, one of these is the newer Offset code
	uintptr_t FortPlayerPawnAthena.ReviveFromDBNOTime = 0x3CE0;	
	uintptr_t FortPlayerPawnAthena.ReviveFromDBNOTime = 0x3EE8;

	uintptr_t FortPlayerPawnAthena.bADSWhileNotOnGround = 0x4585;
	uintptr_t FortWeapon.WeaponReloadMontage = 0x13E8;
	uintptr_t FortWeapon.ReloadAnimation = 0x13B8;



}
