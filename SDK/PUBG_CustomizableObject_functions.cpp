// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomizableObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
// (Final, Native)
// Parameters:
// bool                           bNeverSkipUpdate               (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync");

	UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params params;
	params.bNeverSkipUpdate = bNeverSkipUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
// (Final, Native)
// Parameters:
// bool*                          bIgnoreCloseDist               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceHighPriority             (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(bool* bIgnoreCloseDist, bool* bForceHighPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync");

	UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params params;
	params.bIgnoreCloseDist = bIgnoreCloseDist;
	params.bForceHighPriority = bForceHighPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
// (Final, Native)
// Parameters:
// class FString*                 VectorParamName                (Parm, ZeroConstructor)
// struct FLinearColor*           VectorValue                    (Parm, IsPlainOldData)

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(class FString* VectorParamName, struct FLinearColor* VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption");

	UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params params;
	params.VectorParamName = VectorParamName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
// (Final, Native)

void UCustomizableObjectInstance::SetRandomValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetRandomValues");

	UCustomizableObjectInstance_SetRandomValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
// (Final, Native)
// Parameters:
// class FString*                 ProjectorParamName             (Parm, ZeroConstructor)
// float*                         posX                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         posY                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         posZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dirX                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dirY                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dirZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         upX                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         upY                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         upZ                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleZ                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// ECustomizableObjectProjectorType* ProjectionType                 (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableObjectInstance::SetProjectorValue(class FString* ProjectorParamName, float* posX, float* posY, float* posZ, float* dirX, float* dirY, float* dirZ, float* upX, float* upY, float* upZ, float* ScaleX, float* ScaleY, float* ScaleZ, float* Angle, ECustomizableObjectProjectorType* ProjectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue");

	UCustomizableObjectInstance_SetProjectorValue_Params params;
	params.ProjectorParamName = ProjectorParamName;
	params.posX = posX;
	params.posY = posY;
	params.posZ = posZ;
	params.dirX = dirX;
	params.dirY = dirY;
	params.dirZ = dirZ;
	params.upX = upX;
	params.upY = upY;
	params.upZ = upZ;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;
	params.ScaleZ = ScaleZ;
	params.Angle = Angle;
	params.ProjectionType = ProjectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// ECustomizableObjectProjectorType* Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableObjectInstance::SetProjectorParameterType(class FString* ParamName, ECustomizableObjectProjectorType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType");

	UCustomizableObjectInstance_SetProjectorParameterType_Params params;
	params.ParamName = ParamName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// class FString*                 SelectedOptionName             (Parm, ZeroConstructor)

void UCustomizableObjectInstance::SetIntParameterSelectedOption(class FString* ParamName, class FString* SelectedOptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption");

	UCustomizableObjectInstance_SetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;
	params.SelectedOptionName = SelectedOptionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
// (Final, Native)
// Parameters:
// class FString*                 FloatParamName                 (Parm, ZeroConstructor)
// float*                         FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(class FString* FloatParamName, float* FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption");

	UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
// (Final, Native)
// Parameters:
// class FString*                 StateName                      (Parm, ZeroConstructor)

void UCustomizableObjectInstance::SetCurrentState(class FString* StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetCurrentState");

	UCustomizableObjectInstance_SetCurrentState_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
// (Final, Native)
// Parameters:
// class FString*                 BoolParamName                  (Parm, ZeroConstructor)
// bool*                          BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(class FString* BoolParamName, bool* BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption");

	UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params params;
	params.BoolParamName = BoolParamName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomizableObjectInstance::IsParameterRelevant(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant");

	UCustomizableObjectInstance_IsParameterRelevant_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// ECustomizableObjectProjectorType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECustomizableObjectProjectorType UCustomizableObjectInstance::GetProjectorParameterType(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType");

	UCustomizableObjectInstance_GetProjectorParameterType_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// int*                           DescIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UCustomizableObjectInstance::GetParameterDescription(class FString* ParamName, int* DescIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription");

	UCustomizableObjectInstance_GetParameterDescription_Params params;
	params.ParamName = ParamName;
	params.DescIndex = DescIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UCustomizableObjectInstance::GetIntParameterSelectedOption(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption");

	UCustomizableObjectInstance_GetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
// (Final, Native)
// Parameters:
// class FString*                 FloatParamName                 (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCustomizableObjectInstance::GetFloatParameterSelectedOption(class FString* FloatParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption");

	UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
// (Final, Native)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UCustomizableObjectInstance::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetCurrentState");

	UCustomizableObjectInstance_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
// (Final, Native)
// Parameters:
// class FString*                 BoolParamName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomizableObjectInstance::GetBoolParameterSelectedOption(class FString* BoolParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption");

	UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params params;
	params.BoolParamName = BoolParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindVectorParameterNameIndex(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex");

	UCustomizableObjectInstance_FindVectorParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindProjectorParameterNameIndex(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex");

	UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindIntParameterNameIndex(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex");

	UCustomizableObjectInstance_FindIntParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindFloatParameterNameIndex(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex");

	UCustomizableObjectInstance_FindFloatParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindBoolParameterNameIndex(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex");

	UCustomizableObjectInstance_FindBoolParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
// (Final, Native)
// Parameters:
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex");

	UCustomizableObject_GetStateUIMetadataFromIndex_Params params;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
// (Final, Native)
// Parameters:
// class FString*                 StateName                      (Parm, ZeroConstructor)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FParameterUIData UCustomizableObject::GetStateUIMetadata(class FString* StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateUIMetadata");

	UCustomizableObject_GetStateUIMetadata_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateParameterName
// (Final, Native)
// Parameters:
// class FString*                 StateName                      (Parm, ZeroConstructor)
// int*                           ParameterIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UCustomizableObject::GetStateParameterName(class FString* StateName, int* ParameterIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateParameterName");

	UCustomizableObject_GetStateParameterName_Params params;
	params.StateName = StateName;
	params.ParameterIndex = ParameterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateParameterCount
// (Final, Native)
// Parameters:
// class FString*                 StateName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::GetStateParameterCount(class FString* StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateParameterCount");

	UCustomizableObject_GetStateParameterCount_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateName
// (Final, Native)
// Parameters:
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UCustomizableObject::GetStateName(int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateName");

	UCustomizableObject_GetStateName_Params params;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateCount
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::GetStateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateCount");

	UCustomizableObject_GetStateCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
// (Final, Native)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int* ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex");

	UCustomizableObject_GetParameterUIMetadataFromIndex_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FParameterUIData UCustomizableObject::GetParameterUIMetadata(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterUIMetadata");

	UCustomizableObject_GetParameterUIMetadata_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
// (Final, Native)
// Parameters:
// class FString*                 Name                           (Parm, ZeroConstructor)
// EMutableParameterType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMutableParameterType UCustomizableObject::GetParameterTypeByName(class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterTypeByName");

	UCustomizableObject_GetParameterTypeByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterType
// (Final, Native)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// EMutableParameterType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMutableParameterType UCustomizableObject::GetParameterType(int* ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterType");

	UCustomizableObject_GetParameterType_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterName
// (Final, Native)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UCustomizableObject::GetParameterName(int* ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterName");

	UCustomizableObject_GetParameterName_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
// (Final, Native)
// Parameters:
// class FString*                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::GetParameterDescriptionCount(class FString* ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount");

	UCustomizableObject_GetParameterDescriptionCount_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterCount
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::GetParameterCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterCount");

	UCustomizableObject_GetParameterCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
// (Final, Native)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::GetIntParameterNumOptions(int* ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions");

	UCustomizableObject_GetIntParameterNumOptions_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
// (Final, Native)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           K                              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UCustomizableObject::GetIntParameterAvailableOption(int* ParamIndex, int* K)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption");

	UCustomizableObject_GetIntParameterAvailableOption_Params params;
	params.ParamIndex = ParamIndex;
	params.K = K;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.FindParameter
// (Final, Native)
// Parameters:
// class FString*                 Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::FindParameter(class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.FindParameter");

	UCustomizableObject_FindParameter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
