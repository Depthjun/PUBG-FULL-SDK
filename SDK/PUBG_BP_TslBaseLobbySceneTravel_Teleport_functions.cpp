// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_TslBaseLobbySceneTravel_Teleport_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.UserConstructionScript
// (Event)

void ABP_TslBaseLobbySceneTravel_Teleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.UserConstructionScript");

	ABP_TslBaseLobbySceneTravel_Teleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.OnStartTravel
// (Event)

void ABP_TslBaseLobbySceneTravel_Teleport_C::OnStartTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.OnStartTravel");

	ABP_TslBaseLobbySceneTravel_Teleport_C_OnStartTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TslBaseLobbySceneTravel_Teleport_C::ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport");

	ABP_TslBaseLobbySceneTravel_Teleport_C_ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
