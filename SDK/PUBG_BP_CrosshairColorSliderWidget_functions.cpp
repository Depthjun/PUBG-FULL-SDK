// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_CrosshairColorSliderWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CrosshairColorSliderWidget.BP_CrosshairColorSliderWidget_C.UpdateDesign_Normal
// (Event)

void UBP_CrosshairColorSliderWidget_C::UpdateDesign_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorSliderWidget.BP_CrosshairColorSliderWidget_C.UpdateDesign_Normal");

	UBP_CrosshairColorSliderWidget_C_UpdateDesign_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorSliderWidget.BP_CrosshairColorSliderWidget_C.UpdateDesign_Focused
// (Event)

void UBP_CrosshairColorSliderWidget_C::UpdateDesign_Focused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorSliderWidget.BP_CrosshairColorSliderWidget_C.UpdateDesign_Focused");

	UBP_CrosshairColorSliderWidget_C_UpdateDesign_Focused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorSliderWidget.BP_CrosshairColorSliderWidget_C.ExecuteUbergraph_BP_CrosshairColorSliderWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrosshairColorSliderWidget_C::ExecuteUbergraph_BP_CrosshairColorSliderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorSliderWidget.BP_CrosshairColorSliderWidget_C.ExecuteUbergraph_BP_CrosshairColorSliderWidget");

	UBP_CrosshairColorSliderWidget_C_ExecuteUbergraph_BP_CrosshairColorSliderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif