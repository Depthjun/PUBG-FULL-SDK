// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Small_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GunImpact_Small.GunImpact_Small_C.GetAdjustedDecalEffectDataSet_BP
// (Event)
// Parameters:
// struct FDecalEffectDataSet     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDecalEffectDataSet AGunImpact_Small_C::GetAdjustedDecalEffectDataSet_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Small.GunImpact_Small_C.GetAdjustedDecalEffectDataSet_BP");

	AGunImpact_Small_C_GetAdjustedDecalEffectDataSet_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunImpact_Small.GunImpact_Small_C.UserConstructionScript
// (Event)

void AGunImpact_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Small.GunImpact_Small_C.UserConstructionScript");

	AGunImpact_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Small.GunImpact_Small_C.PreWakeUp_BP
// (Event)
// Parameters:
// struct FTransform*             InitialTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGunImpact_Small_C::PreWakeUp_BP(struct FTransform* InitialTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Small.GunImpact_Small_C.PreWakeUp_BP");

	AGunImpact_Small_C_PreWakeUp_BP_Params params;
	params.InitialTransform = InitialTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Small.GunImpact_Small_C.AdjustDecalEffectDataSet_BP
// (Event)

void AGunImpact_Small_C::AdjustDecalEffectDataSet_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Small.GunImpact_Small_C.AdjustDecalEffectDataSet_BP");

	AGunImpact_Small_C_AdjustDecalEffectDataSet_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Small.GunImpact_Small_C.ExecuteUbergraph_GunImpact_Small
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGunImpact_Small_C::ExecuteUbergraph_GunImpact_Small(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Small.GunImpact_Small_C.ExecuteUbergraph_GunImpact_Small");

	AGunImpact_Small_C_ExecuteUbergraph_GunImpact_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
