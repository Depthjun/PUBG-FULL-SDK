// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_QualityComboBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QualityComboBox.QualityComboBox_C.GetDisplayTextByOption
// ()
// Parameters:
// struct FText                   DisplayText                    (Parm, OutParm)

void UQualityComboBox_C::GetDisplayTextByOption(struct FText* DisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.GetDisplayTextByOption");

	UQualityComboBox_C_GetDisplayTextByOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayText != nullptr)
		*DisplayText = params.DisplayText;
}


// Function QualityComboBox.QualityComboBox_C.Get_ComboBox_bIsEnabled_1
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQualityComboBox_C::Get_ComboBox_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.Get_ComboBox_bIsEnabled_1");

	UQualityComboBox_C_Get_ComboBox_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualityComboBox.QualityComboBox_C.On_ComboBox_GenerateWidget_1
// ()
// Parameters:
// class FString*                 Item                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UQualityComboBox_C::On_ComboBox_GenerateWidget_1(class FString* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.On_ComboBox_GenerateWidget_1");

	UQualityComboBox_C_On_ComboBox_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualityComboBox.QualityComboBox_C.RemoveOption
// ()
// Parameters:
// class FString*                 Option                         (Parm, ZeroConstructor)

void UQualityComboBox_C::RemoveOption(class FString* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.RemoveOption");

	UQualityComboBox_C_RemoveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.GetSelectedOption
// ()
// Parameters:
// class FString                  SelectedOption                 (Parm, OutParm, ZeroConstructor)

void UQualityComboBox_C::GetSelectedOption(class FString* SelectedOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.GetSelectedOption");

	UQualityComboBox_C_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedOption != nullptr)
		*SelectedOption = params.SelectedOption;
}


// Function QualityComboBox.QualityComboBox_C.SetSelectedOption
// ()
// Parameters:
// class FString*                 Option                         (Parm, ZeroConstructor)

void UQualityComboBox_C::SetSelectedOption(class FString* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.SetSelectedOption");

	UQualityComboBox_C_SetSelectedOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.ClearOptions
// ()

void UQualityComboBox_C::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.ClearOptions");

	UQualityComboBox_C_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.AddOption
// ()
// Parameters:
// class FString*                 OptionName                     (Parm, ZeroConstructor)
// struct FText*                  DisplayOptionName              (Parm)

void UQualityComboBox_C::AddOption(class FString* OptionName, struct FText* DisplayOptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.AddOption");

	UQualityComboBox_C_AddOption_Params params;
	params.OptionName = OptionName;
	params.DisplayOptionName = DisplayOptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// ()
// Parameters:
// class FString*                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualityComboBox_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UQualityComboBox_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.ExecuteUbergraph_QualityComboBox
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQualityComboBox_C::ExecuteUbergraph_QualityComboBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.ExecuteUbergraph_QualityComboBox");

	UQualityComboBox_C_ExecuteUbergraph_QualityComboBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.OnSelectionChanged__DelegateSignature
// ()
// Parameters:
// class FString*                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualityComboBox_C::OnSelectionChanged__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.OnSelectionChanged__DelegateSignature");

	UQualityComboBox_C_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
