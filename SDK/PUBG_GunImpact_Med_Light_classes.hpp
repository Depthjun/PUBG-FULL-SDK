#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Med_Light_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GunImpact_Med_Light.GunImpact_Med_Light_C
// 0x0008 (0x09B8 - 0x09B0)
class AGunImpact_Med_Light_C : public ATslImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GunImpact_Med_Light.GunImpact_Med_Light_C");
		return ptr;
	}


	struct FDecalEffectDataSet GetAdjustedDecalEffectDataSet_BP();
	void UserConstructionScript();
	void PreWakeUp_BP(struct FTransform* InitialTransform);
	void AdjustDecalEffectDataSet_BP();
	void ExecuteUbergraph_GunImpact_Med_Light(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
