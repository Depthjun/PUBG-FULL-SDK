// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ConsoleGuideWidget_v3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.SetActiveWidget
// (Event)
// Parameters:
// EGuideLineType*                LineType                       (Parm, ZeroConstructor, IsPlainOldData)
// EGuideKeyType*                 GuideKeyType                   (Parm, ZeroConstructor, IsPlainOldData)

void UConsoleGuideWidget_v3_C::SetActiveWidget(EGuideLineType* LineType, EGuideKeyType* GuideKeyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.SetActiveWidget");

	UConsoleGuideWidget_v3_C_SetActiveWidget_Params params;
	params.LineType = LineType;
	params.GuideKeyType = GuideKeyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.ExecuteUbergraph_ConsoleGuideWidget_v3
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UConsoleGuideWidget_v3_C::ExecuteUbergraph_ConsoleGuideWidget_v3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.ExecuteUbergraph_ConsoleGuideWidget_v3");

	UConsoleGuideWidget_v3_C_ExecuteUbergraph_ConsoleGuideWidget_v3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
