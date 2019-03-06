#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CameraKeyFrameSetting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.SetSliderValueAndText
struct UCameraKeyframeSetting_C_SetSliderValueAndText_Params
{
	class USlider**                                    RefSlider;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox**                           RefTextBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InputValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.MakePreviewReplayCameraEventItem
struct UCameraKeyframeSetting_C_MakePreviewReplayCameraEventItem_Params
{
	struct FReplayCameraEventItem                      _;                                                        // (Parm, OutParm)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.DofSettingOpen
struct UCameraKeyframeSetting_C_DofSettingOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.TextBoxCommit
struct UCameraKeyframeSetting_C_TextBoxCommit_Params
{
	class USlider**                                    Slider;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox**                           TextBox;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InputVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.UpdateCurReplaySpeedValIdx
struct UCameraKeyframeSetting_C_UpdateCurReplaySpeedValIdx_Params
{
	float*                                             ReplaySpeedVal;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.EffectSettingOpen
struct UCameraKeyframeSetting_C_EffectSettingOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.UpdateTargetPlayerList
struct UCameraKeyframeSetting_C_UpdateTargetPlayerList_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.OnClickResetButton
struct UCameraKeyframeSetting_C_OnClickResetButton_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.OnClickApplyButton
struct UCameraKeyframeSetting_C_OnClickApplyButton_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.SetData
struct UCameraKeyframeSetting_C_SetData_Params
{
	struct FReplayCameraEventItem*                     Data;                                                     // (Parm)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.Construct
struct UCameraKeyframeSetting_C_Construct_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.Tick
struct UCameraKeyframeSetting_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Button_Reset_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Button_Reset_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__ComboBox_TargetPlayer_K2Node_ComponentBoundEvent_235_OnOpeningEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__ComboBox_TargetPlayer_K2Node_ComponentBoundEvent_235_OnOpeningEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__ButtonEffectOpen_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__ButtonEffectOpen_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__ButtonEffectClose_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__ButtonEffectClose_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Dof_Aperture_K2Node_ComponentBoundEvent_402_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Dof_Aperture_K2Node_ComponentBoundEvent_402_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_DoF_FocalDistance_K2Node_ComponentBoundEvent_439_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_DoF_FocalDistance_K2Node_ComponentBoundEvent_439_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Bloom_K2Node_ComponentBoundEvent_478_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Bloom_K2Node_ComponentBoundEvent_478_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Vignette_K2Node_ComponentBoundEvent_495_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Vignette_K2Node_ComponentBoundEvent_495_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Fov_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Fov_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Fov_K2Node_ComponentBoundEvent_124_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Fov_K2Node_ComponentBoundEvent_124_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_DoF_FocalRegion_K2Node_ComponentBoundEvent_237_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_DoF_FocalRegion_K2Node_ComponentBoundEvent_237_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Dof_FocalDistance_K2Node_ComponentBoundEvent_387_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Dof_FocalDistance_K2Node_ComponentBoundEvent_387_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Bloom_K2Node_ComponentBoundEvent_551_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Bloom_K2Node_ComponentBoundEvent_551_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Vignette_K2Node_ComponentBoundEvent_676_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Vignette_K2Node_ComponentBoundEvent_676_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Roll_K2Node_ComponentBoundEvent_346_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Roll_K2Node_ComponentBoundEvent_346_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_ColorGrading_Intensity_K2Node_ComponentBoundEvent_221_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_ColorGrading_Intensity_K2Node_ComponentBoundEvent_221_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_ColorGrading_Intensity_K2Node_ComponentBoundEvent_247_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_ColorGrading_Intensity_K2Node_ComponentBoundEvent_247_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Button_13_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Dof_NearTransitionRegion_K2Node_ComponentBoundEvent_72_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Dof_NearTransitionRegion_K2Node_ComponentBoundEvent_72_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Dof_NearTransitionRegion_K2Node_ComponentBoundEvent_117_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Dof_NearTransitionRegion_K2Node_ComponentBoundEvent_117_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Dof_FarTransitionRegion_K2Node_ComponentBoundEvent_163_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Dof_FarTransitionRegion_K2Node_ComponentBoundEvent_163_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Dof_FarTransitionRegion_K2Node_ComponentBoundEvent_203_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Dof_FarTransitionRegion_K2Node_ComponentBoundEvent_203_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Dof_BokehScale_K2Node_ComponentBoundEvent_354_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Dof_BokehScale_K2Node_ComponentBoundEvent_354_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Dof_BokehScale_K2Node_ComponentBoundEvent_368_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Dof_BokehScale_K2Node_ComponentBoundEvent_368_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Dof_BokehMaxSize_K2Node_ComponentBoundEvent_410_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Dof_BokehMaxSize_K2Node_ComponentBoundEvent_410_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Dof_BokehMaxSize_K2Node_ComponentBoundEvent_454_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Dof_BokehMaxSize_K2Node_ComponentBoundEvent_454_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Dof_GaussianNearBlurSize_K2Node_ComponentBoundEvent_493_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Dof_GaussianNearBlurSize_K2Node_ComponentBoundEvent_493_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Dof_GaussianNearBlurSize_K2Node_ComponentBoundEvent_539_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Dof_GaussianNearBlurSize_K2Node_ComponentBoundEvent_539_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__Slider_Dof_GaussianFarBlurSize_K2Node_ComponentBoundEvent_580_OnFloatValueChangedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__Slider_Dof_GaussianFarBlurSize_K2Node_ComponentBoundEvent_580_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.BndEvt__TextBox_Dof_GaussianFarBlurSize_K2Node_ComponentBoundEvent_627_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCameraKeyframeSetting_C_BndEvt__TextBox_Dof_GaussianFarBlurSize_K2Node_ComponentBoundEvent_627_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraKeyFrameSetting.CameraKeyframeSetting_C.ExecuteUbergraph_CameraKeyframeSetting
struct UCameraKeyframeSetting_C_ExecuteUbergraph_CameraKeyframeSetting_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
