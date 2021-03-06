#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_RoadRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RoadRuntime.CrossActor
// 0x0030 (0x0420 - 0x03F0)
class ACrossActor : public AStaticMeshActor
{
public:
	class FString                                      UniqueKey;                                                // 0x03F0(0x0010) (ZeroConstructor)
	TArray<struct FCrossActorManager>                  SideActors;                                               // 0x0400(0x0010) (ZeroConstructor)
	TArray<struct FCrossMeshManager>                   SideMeshes;                                               // 0x0410(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RoadRuntime.CrossActor");
		return ptr;
	}


	void UpdateSideMesh(class UStaticMesh** InPrototype, struct FVector* MeshRelativeLocation, struct FRotator* MeshRelativeRotation, struct FVector* MeshRelativeScale, int* SocketIndex, bool* IsEnable, bool* IsNormalized);
	void UpdateSideActor(class UClass** InPrototype, struct FVector* ActorRelativeLocation, struct FRotator* ActorRelativeRotation, struct FVector* ActorRelativeScale, int* SocketIndex, bool* IsEnable, bool* IsNormalized);
	void PushSideMesh(class UStaticMesh** InPrototype, struct FVector* MeshRelativeLocation, struct FRotator* MeshRelativeRotation, struct FVector* MeshRelativeScale, int* SocketIndex, bool* IsEnable, bool* IsNormalized);
	void PushSideActor(class UClass** InPrototype, struct FVector* ActorRelativeLocation, struct FRotator* ActorRelativeRotation, struct FVector* ActorRelativeScale, int* SocketIndex, bool* IsEnable, bool* IsNormalized);
	void DestroySideObjects();
};


// Class RoadRuntime.RoadActor
// 0x0088 (0x0468 - 0x03E0)
class ARoadActor : public AActor
{
public:
	TEnumAsByte<ESplineMeshAxis>                       SplineMeshAxis;                                           // 0x03E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	struct FVector                                     LocalOffset;                                              // 0x03E4(0x000C) (IsPlainOldData)
	class ARoadActor*                                  Father;                                                   // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      UniqueKey;                                                // 0x03F8(0x0010) (ZeroConstructor)
	class USplineComponent*                            Spline;                                                   // 0x0408(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Segmentation;                                             // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StepGeneration;                                           // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 RoadMesh;                                                 // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                RoadMeshesComp;                                           // 0x0428(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FSideActorManager>                   SideActors;                                               // 0x0438(0x0010) (ZeroConstructor)
	TArray<struct FSideMeshManager>                    SideMeshes;                                               // 0x0448(0x0010) (ZeroConstructor)
	TArray<struct FCurbsManager>                       SideCurbs;                                                // 0x0458(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RoadRuntime.RoadActor");
		return ptr;
	}


	void UpdateSplineMesh(int* MeshIndex);
	void UpdateSideMeshes(class UStaticMesh** InPrototype, struct FVector* MeshRelativeLocation, struct FRotator* MeshRelativeRotation, struct FVector* MeshRelativeScale, int* SocketIndex, int* InShift, int* InSpacing, bool* IsEnable, bool* IsNormalized);
	void UpdateSideActor(class UClass** InPrototype, struct FVector* ActorRelativeLocation, struct FRotator* ActorRelativeRotation, struct FVector* ActorRelativeScale, int* SocketIndex, int* InShift, int* InSpacing, bool* IsEnable, bool* IsNormalized);
	void UpdateSegment(int* SegmentIndex, class USplineComponent** SplineComponent, class UStaticMesh** StaticMesh, TEnumAsByte<ESplineMeshAxis>* InAxis);
	void PushSideMesh(class UStaticMesh** InPrototype, struct FVector* MeshRelativeLocation, struct FRotator* MeshRelativeRotation, struct FVector* MeshRelativeScale, int* SocketIndex, int* InShift, int* InSpacing, bool* IsEnable, bool* IsNormalized);
	void PushSideActor(class UClass** InPrototype, struct FVector* ActorRelativeLocation, struct FRotator* ActorRelativeRotation, struct FVector* ActorRelativeScale, int* SocketIndex, int* InShift, int* InSpacing, bool* IsEnable, bool* IsNormalized);
	void PushCurbsMeshes(class UStaticMesh** InPrototype, class UStaticMesh** InStartPrototype, class UStaticMesh** InEndPrototype, struct FVector* MeshRelativeLocation, struct FVector* MeshRelativeScale, int* SocketIndex, bool* IsEnable, bool* InStartEnable, bool* InEndEnable);
	void DestroySideObjects();
	void DestroySideCurbs();
	void ClearSplineMeshes();
	float STATIC_ApproxLength(struct FInterpCurveVector* SplineInfo, float* Start, float* End, int* ApproxSections);
	void AddSplineMesh(int* MeshIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
