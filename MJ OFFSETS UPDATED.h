#pragma once
#include <Windows.h>

// Some many Offsets shit made by MJMODZZ#9999 (MJMODZZ#6094), should be updated and work.
// DISCORD!!!!!! https://dsc.gg/mjservices

/*
LICENSE
MIT License

Copyright(c) 2022 MJMODZZ, https://github.com/mjmodzz, MJMODZZ#6094

Permission is hereby granted, free of charge, to any person obtaining a copy
of this softwareand associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright noticeand this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/




// GWORLD
#define GWorld: 0xce48238

// OBJECT ARRAY
#define UObjectArray : 0xc376110

// BONE MATRIX (Probably not working)
#define GetBoneMatrix : 0xf77c08

// WORLD TO SCREEN
#define ProjectWorldToScreen : 0x829d314




///////////////////////////////////////// GNames ///////////////////////////////////////////////////////
// Old GNames
// #define GNames                                   : 0xc67df00;

// New GNames
#define GNames                                   : 0xCE9BD80;

///////////////////////////////////////// UWorld ///////////////////////////////////////////////////////
#define uWorld                                   : 0xCE48238;


////////////////////////////////////// Local Players ///////////////////////////////////////////////////
#define LocalPlayers                            : 0x38;


///////////////////////////////////// PlayerController /////////////////////////////////////////////////
#define PlayerController                       : 0x30;


///////////////////////////////////// AcknowledgedPawn /////////////////////////////////////////////////
#define AcknowledgedPawn                      : 0x310;


///////////////////////////////////// RootComponent /////////////////////////////////////////////////
#define RootComponent                         : 0x188;


///////////////////////////////////// ActorComponent /////////////////////////////////////////////////
#define ActorComponent                        : 0x98;


///////////////////////////////////// ActorCount /////////////////////////////////////////////////
#define ActorCount                            : 0xA0;


///////////////////////////////////// TeamIndex /////////////////////////////////////////////////
#define TeamIndex                             : 0x1070;

namespace Offsets {
	        uintptr_t GetPlayerViewPoint = 0x7A8
	        uintptr_t SetControlRotation = 0x718
	        uintptr_t GetCameraLocation = 0x7B8
	        uintptr_t GetCameraRotation = 0x7B0
	        uintptr_t ProcessEvent = 0x4D
	        uintptr_t GetViewPoint = 0x2D8
	        uintptr_t GetFOVAngle = 0x770
	        uintptr_t LineOfSightTo = 0x728
	        uintptr_t VirtualProtect = 0x2B8
	        uintptr_t Post Render = 110
	        uintptr_t BoneArray = 0x590;
	        uintptr_t CompToWorld = 0x240;
	
	// Old GameInstance
	//        uintptr_t GameInstance = 0x1A8;
	// New GameInstance
	        uintptr_t GameInstance = 0x1a8;
	
	        uintptr_t RootComp = 0x188;
	        uintptr_t AcknowledgedPawn = 0x310;//LocalPawn
	        uintptr_t RelativeLocation = 0x128;
	        uintptr_t RelativeRotation = 0x140;
	        uintptr_t TeamIndex = 0x1070;
	        uintptr_t CurrentWeapon = 0x7f0; //AFortPawn
	        uintptr_t PlayerState = 0x290;
	        uintptr_t Mesh = 0x2F0;
	        uintptr_t bIsDBNO = 0x74A;
	        uintptr_t bIsDying = 0x6d8;
	        uintptr_t ReviveFromDBNOTime = 0x4060;
	        uintptr_t bUseGravity =  0x672;
	        uintptr_t WeaponData  =  0x3d8;
	        uintptr_t bAlreadySearched  =  0xfb9;
	        uintptr_t PrimaryPickupItemEntry  =  0x2f8;
                uintptr_t ItemDefinition = 0x18;
	
	        // Maybe outdated 
	        uintptr_t UGameViewportClient = 0x78;
		uintptr_t PersistentLevel = 0x30;
		uintptr_t NetDriver = 0x38;
		uintptr_t LineBatcher = 0x40;
		uintptr_t PersistentLineBatcher = 0x48;
		uintptr_t ForegroundLineBatcher = 0x50;
		uintptr_t NetworkManager = 0x58;
		uintptr_t PhysicsCollisionHandler = 0x60;
		uintptr_t ExtraReferencedObjects = 0x68;
		uintptr_t PerModuleDataObjects = 0x78;
		uintptr_t StreamingLevels = 0x88;
		uintptr_t StreamingLevelsToConsider = 0x98;
		uintptr_t StreamingLevelsPrefix = 0xc0;
		uintptr_t CurrentLevelPendingVisibility = 0xd0;
		uintptr_t CurrentLevelPendingInvisibility = 0xd8;
		uintptr_t DemoNetDriver = 0xe0;
		uintptr_t MyParticleEventManager = 0xe8;
		uintptr_t DefaultPhysicsVolume = 0xf0;
		uintptr_t bAreConstraintsDirty : 1 = 10x12a;
		uintptr_t NavigationSystem = 0x138;
		uintptr_t AuthorityGameMode = 0x140;
		uintptr_t GameState = 0x148;
		uintptr_t AISystem = 0x150;
		uintptr_t AvoidanceManager = 0x158;
		uintptr_t Levels = 0x160;
		uintptr_t LevelCollections = 0x170;
		uintptr_t OwningGameInstance = 0x1a8;
		uintptr_t ParameterCollectionInstances = 0x1b0;
		uintptr_t CanvasForRenderingToTarget = 0x1c0;
		uintptr_t CanvasForDrawMaterialToRenderTarget = 0x1c8;
		uintptr_t PhysicsField = 0x240;
		uintptr_t LWILastAssignedUID = 0x248;
		uintptr_t ComponentsThatNeedPreEndOfFrameSync = 0x250;
		uintptr_t ComponentsThatNeedEndOfFrameUpdate = 0x2a0;
		uintptr_t ComponentsThatNeedEndOfFrameUpdate_OnGameThread = 0x2b;
		uintptr_t WorldComposition = 0x670;
		uintptr_t PSCPool = 0x720;
		uintptr_t TileGroups = 0x30;
		uintptr_t FillerTileGroup = 0x40;
		uintptr_t MaxCircuitSize = 0x48;
		uintptr_t BorderWorld_I = 0x50;
		uintptr_t BorderWorld_IO = 0x78;
		uintptr_t BorderWorld_O = 0xa0;
		uintptr_t BorderWorld_OO = 0xc8;
		uintptr_t BorderWorld_OOO = 0xf0;
		uintptr_t BorderWorld_OOOO = 0x118;
		uintptr_t BorderWorld_S = 0x140;
		uintptr_t BorderWorld_SS = 0x168;
		uintptr_t BorderWorld_OS = 0x190;
		uintptr_t BorderWorld_SO = 0x1b8;
		uintptr_t BorderWorld_SOO = 0x1e0;
		uintptr_t BorderWorld_U = 0x208;
		uintptr_t BorderWorld_R = 0x230;
		uintptr_t TileID = 0x30;
		uintptr_t bOnlyPlaceDiagonalWithAdjacent : 1 = 0x40;
		uintptr_t FlatMapInfos = 0x48;
		uintptr_t InnerMapInfos = 0x58;
		uintptr_t OuterMapInfos = 0x68;
		uintptr_t StraightMapInfos = 0x78;
		uintptr_t Sim_FlatWorld = 0x88;
		uintptr_t Sim_InnerWorld = 0xb0;
		uintptr_t Sim_OuterWorld = 0xd8;
		uintptr_t Sim_StraightWorld = 0x100;
		uintptr_t WorldManager = 0x28;
		uintptr_t TileID = 0x30;
		uintptr_t TileGroups = 0x40;
		uintptr_t TileWeight = 0x50;
		uintptr_t North = 0x54;
		uintptr_t East = 0x55;
		uintptr_t South = 0x56;
		uintptr_t West = 0x57;
		uintptr_t MapNames = 0x58;
		uintptr_t CachedWorld = 0x320;
		uintptr_t BulletNum = 0x0;
		uintptr_t MinVertical = 0x4;
		uintptr_t MaxVertical = 0x8;
		uintptr_t MinHorizontal = 0xc;
		uintptr_t MaxHorizonta = l0x10;
		uintptr_t Spread = 0x14c;
		uintptr_t OverrideBaseSpread = 0x150;
		uintptr_t SpreadDownsights = 0x154;
		uintptr_t StandingStillSpreadMultiplier = 0x158;
		uintptr_t AthenaCrouchingSpreadMultiplier = 0x15c;
		uintptr_t AthenaSlidingSpreadMultiplier = 0x160;
		uintptr_t AthenaJumpingFallingSpreadMultiplier = 0x164;
		uintptr_t AthenaSprintingSpreadMultiplier = 0x168;
		uintptr_t MinSpeedForSpreadMultiplier = 0x16c;
		uintptr_t MaxSpeedForSpreadMultiplier = 0x170;
		uintptr_t SpreadDownsightsAdditionalCooldownTime = 0x174;
		uintptr_t SpreadExponent = 0x178;
		uintptr_t HeatX1 = 0x17c;
		uintptr_t HeatX2 = 0x184;
		uintptr_t HeatX3 = 0x18c;
		uintptr_t HeatY1 = 0x180;
		uintptr_t HeatY2 = 0x188;
		uintptr_t HeatY3 = 0x190;
		uintptr_t HeatXScale = 0x194;
		uintptr_t HeatYScale = 0x198;
		uintptr_t CoolX1 = 0x19c;
		uintptr_t CoolX2 = 0x1a4;
		uintptr_t CoolX3 = 0x1ac;
		uintptr_t CoolY1 = 0x1a0;
		uintptr_t CoolY2 = 0x1a8;
		uintptr_t CoolY3 = 0x1b0;
		uintptr_t CoolXScale = 0x1b4;
		uintptr_t CoolYScale = 0x1b8;
		uintptr_t PerfectAimCooldown = 0x1bc;
		uintptr_t BulletsPerCartridge = 0x1c0;
		uintptr_t MinHitsPerCartridge = 0x1c4;
		uintptr_t FiringRate = 0x1c8;
		uintptr_t ROFScale = 0x1cc;
		uintptr_t BurstFiringRate = 0x1d0;
		uintptr_t FiringRateDownsightsMultiplier = 0x1d4;
		uintptr_t AutofireRange = 0x1d8;
		uintptr_t AutofireAcquisitionDelay = 0x1dc;
		uintptr_t AutofireDBNOAcquisitionDelay = 0x1e0;
		uintptr_t AutofireAcquisitionRechargeTime = 0x1e4;
		uintptr_t AutofireReleaseTime = 0x1e8;
		uintptr_t AutofireCooldown = 0x1ec;
		uintptr_t RecoilVert = 0x1f0;
		uintptr_t RecoilVertScale = 0x1f4;
		uintptr_t RecoilVertScaleGamepad = 0x1f8;
		uintptr_t VertRecoilDownChance = 0x1fc;
		uintptr_t RecoilHoriz = 0x200;
		uintptr_t RecoilHorizScale = 0x204;
		uintptr_t RecoilHorizScaleGamepad = 0x208;
		uintptr_t RecoilInterpSpeed = 0x20c;
		uintptr_t RecoilRecoveryInterpSpeed = 0x210;
		uintptr_t RecoilRecoveryDelay = 0x214;
		uintptr_t RecoilRecoveryFraction = 0x218;
		uintptr_t RecoilDownsightsMultiplier = 0x21c;
		uintptr_t AthenaRecoilMagnitudeMin = 0x220;
		uintptr_t AthenaRecoilMagnitudeMax = 0x224;
		uintptr_t AthenaRecoilMagnitudeScale = 0x228;
		uintptr_t AthenaRecoilAngleMin = 0x22c;
		uintptr_t AthenaRecoilAngleMax = 0x230;
		uintptr_t AthenaRecoilRollMagnitudeMin = 0x234;
		uintptr_t AthenaRecoilRollMagnitudeMax = 0x238;
		uintptr_t AthenaRecoilInterpSpeed = 0x23c;
		uintptr_t AthenaRecoilRecoveryInterpSpeed = 0x240;
		uintptr_t AthenaRecoilDownsightsMultiplier = 0x244;
		uintptr_t AthenaRecoilHipFireMultiplier = 0x248;
		uintptr_t PitchLimitForPerBulletRecoil = 0x24c;
		uintptr_t bPerBulletRecoilRecoveryWhileFiring = 0x250;
		uintptr_t AthenaAimAssistRange = 0x254;
		uintptr_t ADSTransitionInTime = 0x258;
		uintptr_t ADSTransitionOutTime = 0x25c;
		uintptr_t MaxSpareAmmo = 0x260;
		uintptr_t BulletsPerTracer = 0x264;
		uintptr_t AIDelayBeforeFiringMin = 0x268;
		uintptr_t AIDelayBeforeFiringMax = 0x26c;
		uintptr_t AIFireDurationMin = 0x270;
		uintptr_t AIFireDurationMax = 0x274;
		uintptr_t AIMinSpreadDuration = 0x278;
		uintptr_t AIMaxSpreadDuration = 0x27c;
		uintptr_t AIDurationSpreadMultiplier = 0x280;
		uintptr_t AIAdditionalSpreadForTargetMovingLaterally = 0x284;
		uintptr_t AIAthenaHearFiringNoiseRange = 0x288;
		uintptr_t EQSDensity = 0x28c;
		uintptr_t MinApproachRange = 0x290;
		uintptr_t MinActualRange = 0x294;
		uintptr_t MinPreferredRange = 0x298;
		uintptr_t MinPreferredRangeEQS = 0x29c;
		uintptr_t MaxPreferredRangeEQS = 0x2a0;
		uintptr_t MaxPreferredRange = 0x2a4;
		uintptr_t MaxActualRange = 0x2a8;
		uintptr_t MaxApproachRange = 0x2ac;
		uintptr_t RangeToAutomaticallyAddEnemyPawnGoals = 0x2b0;
		uintptr_t SweepRadius = 0x2b4;
		uintptr_t AutoReloadDelayOverride = 0x2b8;
		uintptr_t OverheatingMaxValue = 0x2bc;
		uintptr_t OverheatHeatingValue = 0x2c0;
		uintptr_t FullChargeOverheatHeatingValue = 0x2c4;
		uintptr_t OverheatingCoolingValue = 0x2c8;
		uintptr_t FullyOverheatedCoolingValue = 0x2cc;
		uintptr_t HeatingCooldownDelay = 0x2d0;
		uintptr_t OverheatedCooldownDelay = 0x2d4;
		uintptr_t bCoolOverheatWhileCharging = 0x2d8;
		uintptr_t FortHomingTurnSpeedMin = 0x2dc;
		uintptr_t FortHomingTurnSpeedMax = 0x2e0;
		uintptr_t FortHomingTimeUntilMaxTurnSpeed = 0x2e4;
		uintptr_t AimAssistPullStrengthMultiplier = 0x2e8;
		uintptr_t AimAssistSlowStrengthMultiplier = 0x2ec;
		uintptr_t BulletsPerBulletFireFX = 0x2f0;
		uintptr_t MaxDamagePerCartridge = 0x2f4;
		uintptr_t PerBulletRecoil = 0x300;
		uintptr_t bUseBaseChanged : 1 = 0x680;
		uintptr_t bIgnoreNextFallingDamage : 1 = 0x680;
		uintptr_t bAllowDeathFromFallingDamage : 1 = 0x680;
		uintptr_t bIsDying : 1 = 0x680;
		uintptr_t bPlayedDying : 1 = 0x680;
		uintptr_t bIsHiddenForDeath : 1 = 0x680;
		uintptr_t bIsKnockedback : 1 = 0x680;
		uintptr_t bIsStaggered : 1 = 0x681;
		uintptr_t bCanCapsuleBeUsedForTargeting : 1 = 0x681;
		uintptr_t bUseLineTestForDamageZoneBoneDetection : 1 = 0x681;
		uintptr_t bMovingEmote : 1 = 0x681;
		uintptr_t bMovingEmoteForwardOnly : 1 = 0x681;
		uintptr_t bMovingEmoteFollowingOnly : 1 = 0x681;
		uintptr_t bMovingEmoteSkipLandingFX : 1 = 0x682;
		uintptr_t bIsInvulnerable : 1 = 0x682;
		uintptr_t bSpotted : 1 = 0x682;
		uintptr_t bRegisterWithAISight : 1 = 0x682;
		uintptr_t bRegisterWithAimAssist : 1 = 0x682;
		uintptr_t bPrimaryInputHeld : 1 = 0x682;
		uintptr_t bSecondaryInputHeld : 1 = 0x682;
		uintptr_t bPrimaryInputQueued : 1 = 0x682;
		uintptr_t bWeaponActivated : 1 = 0x683;
		uintptr_t bIsInGoop : 1 = 0x683;
		uintptr_t bReplicatedIsInGoop : 1 = 0x683;
		uintptr_t bIsSliding : 1 = 0x683;
		uintptr_t bIsSwinging : 1 = 0x683;
		uintptr_t bIsSynchedAction : 1 = 0x683;
		uintptr_t bSwingingAttached : 1 = 0x683;
		uintptr_t SwingAttachLocation = 0x688;
		uintptr_t SwingAttachLocationUpdateDistanceThreshold = 0x6a0;
		uintptr_t SynchedActionLocation = 0x6a8;
		uintptr_t SynchedActionRotator = 0x6c0;
		uintptr_t bSkipAnalogJump : 1 = 0x6d8;
		uintptr_t FootstepTraceTypeQuery = 0x6d9;
		uintptr_t FootstepSurfaceType = 0x6da;
		uintptr_t SoundIndicatorComponent = 0x6e0;
		uintptr_t UroShiftBucket = 0x6f0;
		uintptr_t bUpdateMeshComponentUpdateFlagOnServer : 1 = 0x6f1;
		uintptr_t bUROCanTieToLODs : 1 = 0x6f1;
		uintptr_t bPostProcessNavLocation : 1 = 0x6f1;
		uintptr_t bHealthSynced : 1 = 0x6f1;
		uintptr_t bWeaponHolstered : 1 = 0x6f1;
		uintptr_t bSkipReticleColorTrace : 1 = 0x6f1;
		uintptr_t bPrioritizePawnCollisionsOnAbilityTargetSelectionVisibilityTest : 1 = 0x6f1;
		uintptr_t bTreatAsPawnForHitMarkers : 1 = 0x6f2;
		uintptr_t bDisplayPawnHitMarkersForChildActors : 1 = 0x6f2;
		uintptr_t bUsesStats : 1 = 0x6f2;
		uintptr_t bAllowBuildingActorTeleport : 1 = 0x6f2;
		uintptr_t bIsDBNO : 1 = 0x6f2;
		uintptr_t bWasDBNOOnDeath : 1 = 0x6f2;
		uintptr_t bCachedIsInAthena : 1 = 0x6f2;
		uintptr_t bShouldUseCharacterMovementIdleFastPath : 1 = 0x6f2;
		uintptr_t CurrentMovementStyle = 0x6f3;
		uintptr_t ControlRecoveryBehavior = 0x6f4;
		uintptr_t TeleportCounter = 0x6f5;
		uintptr_t PawnStatHandle = 0x6f8;
		uintptr_t SlidingFriction = 0x708;
		uintptr_t SlidingBrakingDeceleration = 0x70c;
		uintptr_t StormShieldComponent = 0x710;
		uintptr_t OnStormShieldComponentCreated = 0x718;
		uintptr_t PushSize = 0x728;
		uintptr_t LastSurfaceTraceTime = 0x734;
		uintptr_t LastSurfaceTraceLocation = 0x738;
		uintptr_t OnPawnJumped = 0x778;
		uintptr_t PawnUniqueID = 0x788;
		uintptr_t CurrentWeapon = 0x790;
		uintptr_t PreviousWeapon = 0x798;
		uintptr_t CurrentWeaponList = 0x7a0;
		uintptr_t PreviousAbilityWeaponNameForTelemetry = 0x7b0;
		uintptr_t WeaponHandSocketName = 0x7c0;
		uintptr_t LeftHandWeaponHandSocketName = 0x7c4;
		uintptr_t SpawnSpot = 0x7c8;
		uintptr_t DeathTags = 0x7d0;
		uintptr_t SpawnImmunityTime = 0x7f0;
		uintptr_t CurrentWaterBody = 0x7f8;
		uintptr_t bShouldSupportSurfaceSwimming = 0x800;
		uintptr_t ReplicatedWaterBody = 0x808;
		uintptr_t IncomingPickups = 0x810;
		uintptr_t PickupDirectionData = 0x820;
		uintptr_t bIsStunned = 0x830;
		uintptr_t VortexParams = 0x840;
		uintptr_t bIsInVortex : 1 = 0x8c0;
		uintptr_t bReplicatedIsInVortex : 1 = 0x8c0;
		uintptr_t CurrentSkyTube = 0x8c8;
		uintptr_t ReplicatedSkyTube = 0x8d0;
		uintptr_t OverlappedSkyTubes = 0x8d8;
		uintptr_t bPrioritizeEarlierTubes = 0x8e8;
		uintptr_t OnSkyTubeChanged = 0x910;
		uintptr_t AdditiveCringeCount = 0x920;
		uintptr_t AdditiveCringeDuration = 0x924;
		uintptr_t bSupportsDamageNumbersAtHitLocation = 0x928;
		uintptr_t PushMomentum = 0x930;
		uintptr_t LocalSpin = 0x94c;
		uintptr_t bTurnTransitionActiveAndControllingRotation = 0x951;
		uintptr_t DeathCueTag = 0x9ac;
		uintptr_t DeathStatTags = 0x9b0;
		uintptr_t DeathHitSocket = 0x9c0;
		uintptr_t OnPlayerStartDBNO = 0x9c8;
		uintptr_t OnDBNOStateChanged = 0x9d8;
		uintptr_t DefaultLifespanAfterDeath = 0x9e8;
		uintptr_t TeamBeaconMaxDist = 0x9ec;
		uintptr_t TeamBeaconTextColor = 0x9f0;
		uintptr_t LastTakeHitTimeTimeout = 0x9f4;
		uintptr_t LastDamagedTime = 0x9f8;
		uintptr_t CurrentlyAttachedWeapon = 0xa00;
		uintptr_t CachedNavFloor = 0xa08;
		uintptr_t MaxFootstepDistance = 0xa10;
		uintptr_t DBNOLandingSound = 0xa18;
		uintptr_t DefaultFootstepSound = 0xa20;
		uintptr_t DefaultFastFootstepSound = 0xa28;
		uintptr_t DefaultLandingSound = 0xa30;
		uintptr_t DefaultHardLandingSound = 0xa38;
		uintptr_t DefaultJumpSound = 0xa40;
		uintptr_t DefaultHitNotifyAudioBank = 0xa48;
		uintptr_t DefaultSwimmingAudioBank = 0xa50;
		uintptr_t LineTestForDamageZoneBoneDetectionRadius = 0xa58;
		uintptr_t DamageZones[0x4] = 0xa60;
		uintptr_t DamageZoneActiveBitMask = 0xac0;
		uintptr_t TargettingZOffset = 0xac4;
		uintptr_t JumpFlashCountPacked = 0xac8;
		uintptr_t LandingFlashCountPacked = 0xac9;
		uintptr_t EmoteAudioComps = 0xad0;
		uintptr_t FrontEndEmoteAudioAttenuation = 0xb20;
		uintptr_t InGameEmoteAudioAttenuation = 0xb28;
		uintptr_t InGameEmoteSoundEffectSoundPresetChain = 0xb30;
		uintptr_t EmoteMeshComps = 0xb38;
		uintptr_t EmotePropActors = 0xb88;
		uintptr_t EmoteParticleSystemComps = 0xbd8;
		uintptr_t EmoteCount = 0xc28;
		uintptr_t LastEmoteTime = 0xc2c;
		uintptr_t LastEmoteEndTime = 0xc30;
		uintptr_t LastEmoteItemDef = 0xc38;
		uintptr_t LastReplicatedEmoteExecuted = 0xc40;
		uintptr_t bFireBlockedByEmoteCooldown = 0xc48;
		uintptr_t EmoteToFireCooldownTime = 0xc4c;
		uintptr_t EmoteWalkSpeed = 0xc50;
		uintptr_t DynamicComponents = 0xc58;
		uintptr_t AdditionalModifierDefinitions = 0xc68;
		uintptr_t OnPawnTeleported = 0xc78;
		uintptr_t OnPawnLanded = 0xc88;
		uintptr_t OnPawnStartedEmote = 0xc98;
		uintptr_t OnPawnStoppedEmote = 0xca8;
		uintptr_t OnHitPawn = 0xcb8;
		uintptr_t OnDied = 0xcc8;
		uintptr_t OnDeathEffects = 0xcd8;
		uintptr_t OnDamaged = 0xd18;
		uintptr_t OnDidDamage = 0xd28;
		uintptr_t FootstepBank = 0xd38;
		uintptr_t CachedStepSurfaceNormal = 0xd50;
		uintptr_t FoleyFootstepContext = 0xd68;
		uintptr_t FoleyHitContext = 0xd70;
		uintptr_t FortFootstepComponent = 0xd78;
		uintptr_t OnWeaponEquippedDelegate = 0xd80;
		uintptr_t OnWeaponUnEquippedDelegate = 0xd90;
		uintptr_t OnWeaponAttachmentChangedDelegate = 0xda0;
		uintptr_t HealthRegenDelayGameplayEffect = 0xdb0;
		uintptr_t HealthRegenGameplayEffect = 0xdb8;
		uintptr_t ShieldRegenDelayGameplayEffect = 0xdc0;
		uintptr_t ShieldRegenGameplayEffect = 0xdc8;
		uintptr_t CurrentWeaponAnimLayerOverlayClass = 0xdd0;
		uintptr_t OnHolsteredEvent = 0xdd8;
		uintptr_t OnUnholsteredEvent = 0xde8;
		uintptr_t WeaponHolsterCounter = 0xe10;
		uintptr_t WeaponHolsterIds = 0xe18;
		uintptr_t StaySpottedTime = 0xe28;
		uintptr_t SpottedEvent = 0xe2c;
		uintptr_t DefaultFeedback = 0xe30;
		uintptr_t ActiveSoundIndicators = 0xe38;
		uintptr_t DefaultSoundTrackingVisual = 0xe48;
		uintptr_t SoundTrackingVisibilityTags = 0xe50;
		uintptr_t PriorityModifiers = 0xe70;
		uintptr_t VocalChords = 0xec0;
		uintptr_t bIsDisconnectedPawn = 0xf28;
		uintptr_t MaxHealthApplicationHandle = 0xf2c;
		uintptr_t MaxHealthApplicationGameplayEffect = 0xf38;
		uintptr_t HealthSet = 0xf40;
		uintptr_t ControlResistanceSet = 0xf48;
		uintptr_t DamageSet = 0xf50;
		uintptr_t MovementSet = 0xf58;
		uintptr_t AdvancedMovementSet = 0xf60;
		uintptr_t OnAbilityDecisionWindowStackUpdated = 0xf70;
		uintptr_t AbilitySystemComponent = 0xfb0;
		uintptr_t DecisionWindowStack = 0xfb8;
		uintptr_t GameplayTags = 0xfc8;
		uintptr_t DisplayName = 0xfe8;
		uintptr_t DisplayName = 0x90;
		uintptr_t Damagers = 0x1000;
		uintptr_t DamageDone = 0x1010;
		uintptr_t TotalDamageDoneTrackers = 0x1020;
		uintptr_t TargetDamageDoneTrackers = 0x1030;
		uintptr_t TotalDamageTakenTrackers = 0x1040;
		uintptr_t TargetDamageTakenTrackers = 0x1050;
		uintptr_t DamageDoneLastAtTime = 0x1060;
		uintptr_t DamageTakenLastAtTime = 0x1064;
		uintptr_t LastHitTime = 0x1068;
		uintptr_t TotalPlayerDamageDealt = 0x106c;
		uintptr_t HealthBarIndicator = 0x1070;
		uintptr_t CurrentCalloutTag = 0x1078;
		uintptr_t CalloutEntries = 0x1080;
		uintptr_t HealthBarWidth = 0x1090;
		uintptr_t HealthBarHeightMultiplier = 0x1094;
		uintptr_t SpottedBrush = 0x10a0;
		uintptr_t SpottedIconOffset = 0x1160;
		uintptr_t ClientNonRenderedAnimUpdateRate = 0x1178;
		uintptr_t MaxEvalRateForInterpolation = 0x117c;
		uintptr_t AnimUpdateRateVisibleMaxDistanceFactor = 0x1180;
		uintptr_t LODToFrameSkipMap = 0x1190;
		uintptr_t CurrentSentence = 0x11f0;
		uintptr_t OnPawnHealthChanged = 0x12c8;
		uintptr_t OnPawnMaxOvershieldChanged = 0x12d8;
		uintptr_t AccumulatedBatchData_Shared = 0x12e8;
		uintptr_t AccumulatedBatchData_NonShared = 0x1360;
		uintptr_t BatchedGameplayCueParameters = 0x1378;
		uintptr_t ReplayItemActions = 0x1448;
		uintptr_t HidingVisibilityTags = 0x1488;
		uintptr_t HidingTransitionVisibilityTags = 0x14a8;
		uintptr_t PegasusTimelineCollector = 0x14c8;
		uintptr_t AILODComponent = 0x14d0;
		uintptr_t ClientAILODSettings = 0x14f8;
		uintptr_t FallbackTag = 0x17e8;
		uintptr_t DebugType = 0x17f0;
		uintptr_t RecordedGunshots = 0x1800;
		uintptr_t OnPawnComponentAttachedEvent = 0x1890;
		uintptr_t OverlappingBuildings = 0x18b8;
		uintptr_t TetheredFollower = 0x2eb0;
		uintptr_t SkeletalMesh = 0x570;
		uintptr_t MasterPoseComponent = 0x578;
		uintptr_t SkinCacheUsage = 0x580;
		uintptr_t PhysicsAssetOverride = 0x698;
		uintptr_t ForcedLodModel = 0x6a0;
		uintptr_t MinLodModel = 0x6a4;
		uintptr_t StreamingDistanceMultiplier = 0x6b0;
		uintptr_t LODInfo = 0x6c0;
		uintptr_t VisibilityBasedAnimTickOption = 0x6f4;
		uintptr_t bOverrideMinLOD : 1 = 0x6f6;
		uintptr_t bUseBoundsFromMasterPoseComponent : 1 = 0x6f6;
		uintptr_t bForceWireframe : 1 = 0x6f6;
		uintptr_t bDisplayBones : 1 = 0x6f6;
		uintptr_t bDisableMorphTarget : 1 = 0x6f6;
		uintptr_t bHideSkin : 1 = 0x6f7;
		uintptr_t bPerBoneMotionBlur : 1 = 0x6f7;
		uintptr_t bComponentUseFixedSkelBounds : 1 = 0x6f7;
		uintptr_t bConsiderAllBodiesForBounds : 1 = 0x6f7;
		uintptr_t bSyncAttachParentLOD : 1 = 0x6f7;
		uintptr_t bCanHighlightSelectedSections : 1 = 0x6f7;
		uintptr_t bRecentlyRendered : 1 = 0x6f7;
		uintptr_t bCastCapsuleDirectShadow : 1 = 0x6f7;
		uintptr_t bCastCapsuleIndirectShadow : 1 = 0x6f8;
		uintptr_t bCPUSkinning : 1 = 0x6f8;
		uintptr_t bEnableUpdateRateOptimizations : 1 = 0x6f8;
		uintptr_t bDisplayDebugUpdateRateOptimizations : 1 = 0x6f8;
		uintptr_t bRenderStatic : 1 = 0x6f8;
		uintptr_t bIgnoreMasterPoseComponentLOD : 1 = 0x6f8;
		uintptr_t bCachedLocalBoundsUpToDate : 1 = 0x6f9;
		uintptr_t bForceMeshObjectUpdate : 1 = 0x6f9;
		uintptr_t CapsuleIndirectShadowMinVisibility = 0x6fc;
		uintptr_t CachedWorldSpaceBounds = 0x738;
		uintptr_t CachedWorldToLocalTransform = 0x770;
		uintptr_t PlayerOwner = 0x270;
		uintptr_t PlayerController = 0x30;
		uintptr_t PendingLevelPlayerControllerClass = 0xb8;
		uintptr_t Player = 0x308;
		uintptr_t AcknowledgedPawn = 0x310;
		uintptr_t ControllingDirTrackInst = 0x318;
		uintptr_t MyHUD = 0x320;
		uintptr_t PlayerCameraManager = 0x328;
		uintptr_t PlayerCameraManagerClass = 0x330;
		uintptr_t bAutoManageActiveCameraTarget = 0x338;
		uintptr_t TargetViewRotation = 0x340;
		uintptr_t SmoothTargetViewRotationSpeed = 0x370;
		uintptr_t HiddenActors = 0x378;
		uintptr_t HiddenPrimitiveComponents = 0x388;
		uintptr_t LastSpectatorStateSynchTime = 0x39c;
		uintptr_t LastSpectatorSyncLocation = 0x3a0;
		uintptr_t LastSpectatorSyncRotation = 0x3b8;
		uintptr_t ClientCap = 0x3d0;
		uintptr_t CheatManager = 0x3d8;
		uintptr_t CheatClass = 0x3e0;
		uintptr_t PlayerInput = 0x3e8;
		uintptr_t ActiveForceFeedbackEffects = 0x3f0;
		uintptr_t bPlayerIsWaiting : 1 = 0x480;
		uintptr_t NetPlayerIndex = 0x484;
		uintptr_t PendingSwapConnection = 0x4e0;
		uintptr_t NetConnection = 0x4e8;
		uintptr_t InputYawScale = 0x508;
		uintptr_t InputPitchScale = 0x50c;
		uintptr_t InputRollScale = 0x510;
		uintptr_t bShowMouseCursor : 1 = 0x514;
		uintptr_t bEnableClickEvents : 1 = 0x514;
		uintptr_t bEnableTouchEvents : 1 = 0x514;
		uintptr_t bEnableMouseOverEvents : 1 = 0x514;
		uintptr_t bEnableTouchOverEvents : 1 = 0x514;
		uintptr_t bForceFeedbackEnabled : 1 = 0x514;
		uintptr_t bEnableStreamingSource : 1 = 0x514;
		uintptr_t bStreamingSourceShouldActivate : 1 = 0x514;
		uintptr_t ForceFeedbackScale = 0x518;
		uintptr_t ClickEventKeys = 0x520;
		uintptr_t DefaultMouseCursor = 0x530;
		uintptr_t CurrentMouseCursor = 0x531;
		uintptr_t DefaultClickTraceChannel = 0x532;
		uintptr_t CurrentClickTraceChannel = 0x533;
		uintptr_t HitResultTraceDistance = 0x534;
		uintptr_t SeamlessTravelCount = 0x538;
		uintptr_t LastCompletedSeamlessTravelCount = 0x53a;
		uintptr_t InactiveStateInputComponent = 0x5b0;
		uintptr_t bShouldPerformFullTickWhenPaused : 1 = 0x5b8;
		uintptr_t CurrentTouchInterface = 0x5d0;
		uintptr_t SpectatorPawn = 0x650;
		uintptr_t bIsLocalPlayerController = 0x65c;
		uintptr_t SpawnLocation = 0x660;
		uintptr_t PlayerControllerClass = 0x290;
		uintptr_t ReplaySpectatorPlayerControllerClass = 0x2b8;
		uintptr_t OriginalControllerRef = 0x8c0;
		uintptr_t PCOwner = 0x270;
		uintptr_t SpectatorControllers = 0x870;
		uintptr_t ContextualPlayerController = 0x450;
		uintptr_t OwningPlayerController = 0x28;
		uintptr_t MasterPC = 0x350;
		uintptr_t MasterPC = 0x290;
		uintptr_t InitializedPlayerControllers = 0x2c0;
		uintptr_t LocalControllers = 0x100;
		uintptr_t HiringHistory = 0xcb0;
		uintptr_t DrivingPlayerController = 0x1a08;
		uintptr_t Athen = 0x120;
		uintptr_t LocalControllers = 0x120;
		uintptr_t LocalControllers = 0x68;
		uintptr_t PlayerControllerCache = 0x68;
		uintptr_t OnWeaponRateOfFireChanged = 0x298;
		uintptr_t OnPressTrigger = 0x2c0;
		uintptr_t OnReleaseTrigger = 0x2d0;
		uintptr_t TimeToEquip = 0x300;
		uintptr_t bIsEquippingWeapon = 0x310;
		uintptr_t bIsReloadingWeapon = 0x311;
		uintptr_t bIsgingWeapon = 0x312;
		uintptr_t bDisableEquipAnimation = 0x313;
		uintptr_t bIsAimingConsumable = 0x315;
		uintptr_t OnLocalAmmoChanged = 0x338;
		uintptr_t OnLocalReloadStarted = 0x348;
		uintptr_t OnLocalReloadCancelled = 0x358;
		uintptr_t OnLocalTargetingChanged = 0x368;
		uintptr_t OnSecondaryAbilityToggled = 0x378;
		uintptr_t OnWeaponFireAudioVisuals = 0x388;
		uintptr_t OnReticleColorChanged = 0x3b0;
		uintptr_t bUseAttributeCaching = 0x3d4;
		uintptr_t WeaponData = 0x3d8;
		uintptr_t CosmeticOverrideWeaponData = 0x3e0;
		uintptr_t bImpactFXAttachedToHitActor = 0x3e8;
		uintptr_t GameplayAbilityBehaviorDistanceData = 0x3f0;
		uintptr_t HitNotifyAudioBank = 0x400;
		uintptr_t bRemoveAbilitiesWhenRemovedFromInventory = 0x420;
		uintptr_t GrantedAbilityRemovalPolicy[0x3] = 0x421;
		uintptr_t EquippedWeaponDestroyWrapperRepCounter = 0x468;
		uintptr_t OnPlayImpactFXDelegate = 0x4a0;
		uintptr_t PersistentFXStartTime = 0x548;
		uintptr_t MinimumTimeForPersistentFX = 0x54c;
		uintptr_t OverrideItemWrapSoftPtr = 0x550;
		uintptr_t WeaponReduceMeshWorkSetting = 0x588;
		uintptr_t bWeaponSupportsQuartzGunfire = 0x589;
		uintptr_t QuartzGunfireComp = 0x590;
		uintptr_t bShouldDrawNativeReticle = 0x598;
		uintptr_t ReticleImage = 0x5a0;
		uintptr_t AutoFireReticleImage = 0x5a8;
		uintptr_t ReticleDefaultColor = 0x5b0;
		uintptr_t ReticleEnemyColor = 0x5b4;
		uintptr_t ReticleBuildingColor = 0x5b8;
		uintptr_t ReticleNoTargetColor = 0x5bc;
		uintptr_t HitNotifyReticleImage = 0x5c0;
		uintptr_t HitNotifyLocationReticleImage = 0x5c8;
		uintptr_t CriticalHitNotifyLocationReticleImage = 0x5d0;
		uintptr_t ReticleCenterImage = 0x5d8;
		uintptr_t ReticleCenterPerfectAimImage = 0x5e0;
		uintptr_t ReticleInvalidTargetImage = 0x5e8;
		uintptr_t MuzzleBlockedReticleImage = 0x5f0;
		uintptr_t ReticleAltCenterImage = 0x5f8;
		uintptr_t ReticleOuterImage = 0x600;
		uintptr_t ReticleAltOuterImage = 0x608;
		uintptr_t ReticleDefaultPrimaryStrikeAngle = 0x610;
		uintptr_t ReticleDefaultSecondaryStrikeAngle = 0x614;
		uintptr_t bSupportsAutofireAtReticleTarget = 0x618;
		uintptr_t CameraBase3PClass = 0x620;
		uintptr_t CameraTargeting3PClass = 0x628;
		uintptr_t CameraBase1PClass = 0x630;
		uintptr_t CameraTargeting1PClass = 0x638;
		uintptr_t DestroyedSound = 0x640;
		uintptr_t OutOfAmmoSound = 0x648;
		uintptr_t ReloadSounds[0x3] = 0x650;
		uintptr_t PrimaryFireSound1P = 0x668;
		uintptr_t PrimaryFireSound[0x3] = 0x670;
		uintptr_t PrimaryFireStopSound1P = 0x688;
		uintptr_t PrimaryFireStopSound[0x3] = 0x690;
		uintptr_t SecondaryFireSound[0x3] = 0x6a8;
		uintptr_t SecondaryFireStopSound[0x3] = 0x6c0;
		uintptr_t geFireSound1P[0x3] = 0x6d8;
		uintptr_t geFireSound[0x3] = 0x6f0;
		uintptr_t TargetingStartSound = 0x708;
		uintptr_t TargetingEndSound = 0x710;
		uintptr_t PrimaryFireSoundFadeOutTime = 0x718;
		uintptr_t ImpactPhysicalSurfaceSounds[0x1c] = 0x720;
		uintptr_t ImpactPhysicalSurfaceEffects[0x1c] = 0x808;
		uintptr_t ImpactNiagaraPhysicalSurfaceEffectAssets = 0x8e8;
		uintptr_t ImpactCameraShake = 0x8f8;
		uintptr_t PrimaryForceFeedbackEffect = 0x900;
		uintptr_t SecondaryForceFeedbackEffect = 0x908;
		uintptr_t PrimaryImpactForceFeedbackEffect = 0x910;
		uintptr_t SecondaryImpactForceFeedbackEffect = 0x918;
		uintptr_t ImpactNiagaraPhysicalSurfaceEffectInstances = 0x920;
		uintptr_t DataStoreManager = 0x930;
		uintptr_t FireAudioChannels[0x4] = 0x938;
		uintptr_t ReloadAudioChannels[0x3] = 0x958;
		uintptr_t TargetingAudioChannels[0x2] = 0x970;
		uintptr_t SoundIndicatorComponent = 0x980;
		uintptr_t CurrentGunFireIndex = 0x988;
		uintptr_t WeaponMesh = 0x990;
		uintptr_t AllWeaponMeshes = 0x998;
		uintptr_t DefaultWeaponMaterials = 0x9a8;
		uintptr_t OriginalMaterialMap = 0x9b8;
		uintptr_t FireAudioChannelWantsToPlay[0x4] = 0xa08;
		uintptr_t WrapSectionMask = 0xa18;
		uintptr_t bUsingSecondaryFireAudio = 0xa1c;
		uintptr_t bHasCachedAdditionalMeshes = 0xa1d;
		uintptr_t CurrentReticleColor = 0xa20;
		uintptr_t CurrentDamageStartLocation = 0xa28;
		uintptr_t CurrentAdjustedAimDirection = 0xa40;
		uintptr_t FireFXSignificance = 0xa58;
		uintptr_t LastFireTime = 0xa70;
		uintptr_t LastFireTimeVerified = 0xa74;
		uintptr_t bIsPlayingFireFX = 0xa78;
		uintptr_t bFireFXTriggered = 0xa79;
		uintptr_t TimerIntervalAdjustment = 0xa7c;
		uintptr_t InputQueueTimePercent = 0xa80;
		uintptr_t bAllowTargeting = 0xa84;
		uintptr_t bIsTargeting = 0xa85;
		uintptr_t LastTargetingTransitionTime = 0xa88;
		uintptr_t TargetSourceOffset = 0xa90;
		uintptr_t TargetSourceOffsetWhileCrouched = 0xaa8;
		uintptr_t TargetSourceOffsetWhileTargeting = 0xac0;
		uintptr_t bTraceThroughPawns = 0xad8;
		uintptr_t bTraceThroughWorld = 0xad9;
		uintptr_t TraceThroughPawnsLimit = 0xadc;
		uintptr_t TraceThroughBuildingsLimit = 0xae0;
		uintptr_t TraceThroughLandscapeLimit = 0xae4;
		uintptr_t bUseProjectileTrace = 0xae8;
		uintptr_t bUseVariableFocalDistanceTargeting = 0xae9;
		uintptr_t bUseWeaponTraceForReticle = 0xaea;
		uintptr_t ProjectilePitchOffset = 0xaec;
		uintptr_t LastReloadTime = 0xaf0;
		uintptr_t LastSuccessfulReloadTime = 0xaf4;
		uintptr_t CurrentReloadDuration = 0xaf8;
		uintptr_t ItemEntryGuid = 0xb00;
		uintptr_t TrackerGuid = 0xb10;
		uintptr_t WeaponLevel = 0xb20;
		uintptr_t AmmoCount = 0xb24;
		uintptr_t PhantomReserveAmmo = 0xb28;
		uintptr_t BurstFireCounter = 0xb34;
		uintptr_t geTime = 0xb38;
		uintptr_t AccumulatedgeTime = 0xb3c;
		uintptr_t LastgeTime = 0xb40;
		uintptr_t StartgeGameplayCue = 0xb44;
		uintptr_t MaxgeGameplayCue = 0xb48;
		uintptr_t OutOfAmmoTextOverrideFailTag = 0xb4c;
		uintptr_t NoSpareAmmoToReloadTextOverrideFailTag = 0xb50;
		uintptr_t CurrentShotLogIndex = 0xb54;
		uintptr_t ShotLogFlags = 0xb58;
		uintptr_t bInitializedWeaponItem : 1 = 0xb68;
		uintptr_t bPendingDestroyDueToDurabilityOrStackCount : 1 = 0xb68;
		uintptr_t bCompletedAppliedAlterationsLoad : 1 = 0xb69;
		uintptr_t bCompletedWeaponLoad : 1 = 0xb69;
		uintptr_t bIsCosmeticLimited : 1 = 0xb69;
		uintptr_t bReplicatedAppliedAlterationsWithNoInstigator : 1 = 0xb69;
		uintptr_t bShouldFullyApplyVariantsOnEquip : 1 = 0xb69;
		uintptr_t bSecondaryFireAlwaysCancelSwimSprint : 1 = 0xb69;
		uintptr_t geStatusPack = 0xb6c;
		uintptr_t AttachedTrajectoryIndicator = 0xb7c;
		uintptr_t ActiveAbility = 0xb88;
		uintptr_t PrimaryAbilitySpecHandle = 0xb90;
		uintptr_t SecondaryAbilitySpecHandle = 0xb94;
		uintptr_t ReloadAbilitySpecHandle = 0xb98;
		uintptr_t ImpactAbilitySpecHandle = 0xb9c;
		uintptr_t ReticleTraceOverrideSpecHandle = 0xba0;
		uintptr_t EquippedAbilityHandles = 0xba8;
		uintptr_t EquippedAbilitySetHandles = 0xbb8;
		uintptr_t AppliedAlterations = 0xbc8;
		uintptr_t WeaponModSlots = 0xbd8;
		uintptr_t EquippedWeaponModSlots = 0xbe8;
		uintptr_t PreviousWeaponVariants = 0xbf8;
		uintptr_t AppliedItemWrap = 0xc30;
		uintptr_t CachedFXManager = 0xc38;
		uintptr_t CachedSignificanceManager = 0xc40;
		uintptr_t MuzzleSocketName = 0xc48;
		uintptr_t MuzzleFalloffSocketName = 0xc4c;
		uintptr_t WeaponHandSocketNameOverride = 0xc50;
		uintptr_t LeftHandWeaponHandSocketNameOverride = 0xc54;
		uintptr_t WeaponHandSocketPartOverrides = 0xc58;
		uintptr_t bForceOverrideGenerateOverlapEvents : 1 = 0xc70;
		uintptr_t MaxWeaponSwitchNetworkWaitTime = 0xd5c;
		uintptr_t LastFireAbilityTime = 0xd60;
		uintptr_t EquipAnimation = 0xd98;
		uintptr_t ReloadAnimation = 0xda0;
		uintptr_t CustomReloadAnimationPerAmmoToFill = 0xda8;
		uintptr_t PrimaryAbilityAnimation = 0xdb8;
		uintptr_t SecondaryAbilityAnimation = 0xdc0;
		uintptr_t WeaponEquipMontage = 0xdc8;
		uintptr_t WeaponReloadMontage = 0xdd0;
		uintptr_t CustomWeaponReloadMontagePerAmmoToFill = 0xdd8;
		uintptr_t WeaponPrimaryAbilityMontage = 0xde8;
		uintptr_t WeaponSecondaryAbilityMontage = 0xdf0;
		uintptr_t PoseOffsetAnimSequence = 0xdf8;
		uintptr_t PoseOffsetAnimSequenceFemaleOverride = 0xe00;
		uintptr_t WeaponCoreAnimation = 0xe08;
		uintptr_t WeaponPawnAnimSet = 0xe10;
		uintptr_t WeaponPawnAnimLayerOverlayClass = 0xe18;
		uintptr_t WeaponAdditiveAnimSet = 0xe20;
		uintptr_t WeaponPawnAnimsetOverride = 0xe28;
		uintptr_t UnableToPerformActionMontageOverride = 0xe60;
		uintptr_t ActiveFireMode = 0xe68;
		uintptr_t FireModeData_HipFire = 0xe90;
		uintptr_t FireModeData_AimDownSight = 0xeb8;
		uintptr_t FireModeData_Override = 0xee0;
		uintptr_t ItemWrapModifier = 0xf18;
		uintptr_t LockOnTargetCandidate = 0xf38;
		uintptr_t bIgnoreTryToFireSlotCooldownRestriction = 0xf41;
		uintptr_t bFireConsumableAnalyticEvent = 0xf43;
		uintptr_t OnWeaponHudKeyActionUpdated = 0xf48;
		uintptr_t HudKeyActionData = 0xf58;
		uintptr_t BaseLevel = 0xc;
		uintptr_t NamedWeightRow = 0x10;
		uintptr_t DmgPB = 0x14;
		uintptr_t DmgMid = 0x18;
		uintptr_t DmgLong = 0x1c;
		uintptr_t DmgMaxRange = 0x20;
		uintptr_t EnvDmgPB = 0x24;
		uintptr_t EnvDmgMid = 0x28;
		uintptr_t EnvDmgLong = 0x2c;
		uintptr_t EnvDmgMaxRange = 0x30;
		uintptr_t ImpactDmgPB = 0x34;
		uintptr_t ImpactDmgMid = 0x38;
		uintptr_t ImpactDmgLong = 0x3c;
		uintptr_t ImpactDmgMaxRange = 0x40;
		uintptr_t bForceControl = 0x44;
		uintptr_t RngPB = 0x48;
		uintptr_t RngMid = 0x4c;
		uintptr_t RngLong = 0x50;
		uintptr_t RngMax = 0x54;
		uintptr_t DmgScaleTable = 0x58;
		uintptr_t DmgScaleTableRow = 0x60;
		uintptr_t DmgScale = 0x64;
		uintptr_t EnvDmgScaleTable = 0x68;
		uintptr_t EnvDmgScaleTableRow = 0x70;
		uintptr_t EnvDmgScale = 0x74;
		uintptr_t ImpactDmgScaleTable = 0x78;
		uintptr_t ImpactDmgScaleTableRow = 0x80;
		uintptr_t ImpactDmgScale = 0x84;
		uintptr_t SurfaceRatioRowName = 0x88;
		uintptr_t DamageZone_Light = 0x8c;
		uintptr_t DamageZone_Normal = 0x90;
		uintptr_t DamageZone_Critical = 0x94;
		uintptr_t DamageZone_Vulnerability = 0x98;
		uintptr_t KnockbackMagnitude = 0x9c;
		uintptr_t MidRangeKnockbackMagnitude = 0xa0;
		uintptr_t LongRangeKnockbackMagnitude = 0xa4;
		uintptr_t KnockbackZAngle = 0xa8;
		uintptr_t ShortRangeHitImpulseMagnitude = 0xac;
		uintptr_t MidRangeHitImpulseMagnitude = 0xb0;
		uintptr_t LongRangeHitImpulseMagnitude = 0xb4;
		uintptr_t HitImpulseZBias = 0xb8;
		uintptr_t StunTime = 0xbc;
		uintptr_t StunScale = 0xc0;
		uintptr_t Durability = 0xc8;
		uintptr_t DurabilityRowName = 0xd0;
		uintptr_t DurabilityScale = 0xd4;
		uintptr_t DurabilityPerUse = 0xd8;
		uintptr_t FullChargeDurabilityPerUse = 0xdc;
		uintptr_t DiceCritChance = 0xe0;
		uintptr_t DiceCritDamageMultiplier = 0xe4;
		uintptr_t ReloadTime = 0xe8;
		uintptr_t ReloadScale = 0xec;
		uintptr_t ReloadType = 0xf0;
		uintptr_t bAllowReloadInterrupt = 0xf1;
		uintptr_t bReloadInterruptIsImmediate = 0xf2;
		uintptr_t NumIndividualBulletsToReload = 0xf4;
		uintptr_t ClipSize = 0xf8;
		uintptr_t ClipScale = 0xfc;
		uintptr_t InitialClips = 0x100;
		uintptr_t CartridgePerFire = 0x104;
		uintptr_t AmmoCostPerFire = 0x108;
		uintptr_t MaxAmmoCostPerFire = 0x10c;
		uintptr_t MinChargeTime = 0x110;
		uintptr_t MaxChargeTime = 0x114;
		uintptr_t ChargeDownTime = 0x118;
		uintptr_t bAutoDischarge = 0x11c;
		uintptr_t MaxChargeTimeUntilDischarge = 0x120;
		uintptr_t MinChargeDamageMultiplier = 0x124;
		uintptr_t MaxChargeDamageMultiplier = 0x128;
		uintptr_t ChargeDamageMultiplierCurve = 0x130;
		uintptr_t EquipAnimRate = 0x138;
		uintptr_t QuickBarSlotCooldownDuration = 0x13c;

}
