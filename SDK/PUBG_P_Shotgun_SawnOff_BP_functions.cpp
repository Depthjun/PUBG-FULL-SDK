// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Shotgun_SawnOff_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslParticle.SetParticleParameter
// (Final, Native)
// Parameters:
// class FString*                 Name                           (Parm, ZeroConstructor)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableRTPC                    (Parm, ZeroConstructor, IsPlainOldData)

void AP_Shotgun_SawnOff_BP_C::SetParticleParameter(class FString* Name, float* Value, bool* bEnableRTPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.SetParticleParameter");

	AP_Shotgun_SawnOff_BP_C_SetParticleParameter_Params params;
	params.Name = Name;
	params.Value = Value;
	params.bEnableRTPC = bEnableRTPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleFinish
// (Final, Native)
// Parameters:
// class UParticleSystemComponent** PSystem                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AP_Shotgun_SawnOff_BP_C::OnParticleFinish(class UParticleSystemComponent** PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParticleFinish");

	AP_Shotgun_SawnOff_BP_C_OnParticleFinish_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleCollide
// (Final, Native)
// Parameters:
// struct FName*                  EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, IsPlainOldData)
// struct FVector*                Velocity                       (Parm, IsPlainOldData)
// struct FVector*                Direction                      (Parm, IsPlainOldData)
// struct FVector*                Normal                         (Parm, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicalMaterial**      PhysMat                        (Parm, ZeroConstructor, IsPlainOldData)

void AP_Shotgun_SawnOff_BP_C::OnParticleCollide(struct FName* EventName, float* EmitterTime, int* ParticleTime, struct FVector* Location, struct FVector* Velocity, struct FVector* Direction, struct FVector* Normal, struct FName* BoneName, class UPhysicalMaterial** PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParticleCollide");

	AP_Shotgun_SawnOff_BP_C_OnParticleCollide_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParameterUpdated
// (Event)

void AP_Shotgun_SawnOff_BP_C::OnParameterUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParameterUpdated");

	AP_Shotgun_SawnOff_BP_C_OnParameterUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.GetParticleParamter
// (Final, Native)
// Parameters:
// class FString*                 Name                           (Parm, ZeroConstructor)
// float*                         DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AP_Shotgun_SawnOff_BP_C::GetParticleParamter(class FString* Name, float* DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetParticleParamter");

	AP_Shotgun_SawnOff_BP_C_GetParticleParamter_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
// (Final, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AP_Shotgun_SawnOff_BP_C::STATIC_GetEmitterGlobalSpawnRateScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale");

	AP_Shotgun_SawnOff_BP_C_GetEmitterGlobalSpawnRateScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.ForceSpawn
// (Final, Native)
// Parameters:
// int*                           emitterIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InLocation                     (ConstParm, Parm, IsPlainOldData)

void AP_Shotgun_SawnOff_BP_C::ForceSpawn(int* emitterIndex, struct FVector* InLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.ForceSpawn");

	AP_Shotgun_SawnOff_BP_C_ForceSpawn_Params params;
	params.emitterIndex = emitterIndex;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.AttachToParent
// (Final, Native)

void AP_Shotgun_SawnOff_BP_C::AttachToParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.AttachToParent");

	AP_Shotgun_SawnOff_BP_C_AttachToParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
