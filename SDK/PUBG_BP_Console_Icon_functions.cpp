// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Console_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Console_Icon.BP_Console_Icon_C.PreConstruct
// (BlueprintCosmetic, Event)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Console_Icon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Console_Icon.BP_Console_Icon_C.PreConstruct");

	UBP_Console_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Console_Icon.BP_Console_Icon_C.Construct
// (BlueprintCosmetic, Event)

void UBP_Console_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Console_Icon.BP_Console_Icon_C.Construct");

	UBP_Console_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Console_Icon.BP_Console_Icon_C.ExecuteUbergraph_BP_Console_Icon
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Console_Icon_C::ExecuteUbergraph_BP_Console_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Console_Icon.BP_Console_Icon_C.ExecuteUbergraph_BP_Console_Icon");

	UBP_Console_Icon_C_ExecuteUbergraph_BP_Console_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
