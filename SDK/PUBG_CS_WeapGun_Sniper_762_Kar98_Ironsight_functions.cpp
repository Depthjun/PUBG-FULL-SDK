// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CS_WeapGun_Sniper_762_Kar98_Ironsight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.CameraShake.ReceiveStopShake
// (Event)
// Parameters:
// bool                           bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)

void UCS_WeapGun_Sniper_762_Kar98_Ironsight_C::ReceiveStopShake(bool bImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceiveStopShake");

	UCS_WeapGun_Sniper_762_Kar98_Ironsight_C_ReceiveStopShake_Params params;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CameraShake.ReceivePlayShake
// (Event)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UCS_WeapGun_Sniper_762_Kar98_Ironsight_C::ReceivePlayShake(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceivePlayShake");

	UCS_WeapGun_Sniper_762_Kar98_Ironsight_C_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CameraShake.ReceiveIsFinished
// (Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCS_WeapGun_Sniper_762_Kar98_Ironsight_C::ReceiveIsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceiveIsFinished");

	UCS_WeapGun_Sniper_762_Kar98_Ironsight_C_ReceiveIsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.CameraShake.BlueprintUpdateCameraShake
// (Event)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ALPHA                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMinimalViewInfo*       POV                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMinimalViewInfo        ModifiedPOV                    (Parm, OutParm)

void UCS_WeapGun_Sniper_762_Kar98_Ironsight_C::BlueprintUpdateCameraShake(float* DeltaTime, float* ALPHA, struct FMinimalViewInfo* POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.BlueprintUpdateCameraShake");

	UCS_WeapGun_Sniper_762_Kar98_Ironsight_C_BlueprintUpdateCameraShake_Params params;
	params.DeltaTime = DeltaTime;
	params.ALPHA = ALPHA;
	params.POV = POV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = params.ModifiedPOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
