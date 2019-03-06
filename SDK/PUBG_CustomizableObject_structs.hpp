#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8_t
{
	ECustomizableObjectProjectorType__Planar = 0,
	ECustomizableObjectProjectorType__Cylindrical = 1,
	ECustomizableObjectProjectorType__ECustomizableObjectProjectorType_MAX = 2
};


// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8_t
{
	EMutableCompileMeshType__Full  = 0,
	EMutableCompileMeshType__Local = 1,
	EMutableCompileMeshType__LocalAndChildren = 2,
	EMutableCompileMeshType__AddWorkingSetNoChildren = 3,
	EMutableCompileMeshType__AddWorkingSetAndChildren = 4,
	EMutableCompileMeshType__EMutableCompileMeshType_MAX = 5
};


// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8_t
{
	COGT_TOGGLE                    = 0,
	COGT_ALL                       = 1,
	COGT_ONE                       = 2,
	COGT_ONE_OR_NONE               = 3,
	COGT_MAX                       = 4
};


// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t
{
	EMutableParameterType__None    = 0,
	EMutableParameterType__Bool    = 1,
	EMutableParameterType__Int     = 2,
	EMutableParameterType__Float   = 3,
	EMutableParameterType__Color   = 4,
	EMutableParameterType__Projector = 5,
	EMutableParameterType__Texture = 6,
	EMutableParameterType__EMutableParameterType_MAX = 7
};


// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t
{
	ECustomizableObjectRelevancy__All = 0,
	ECustomizableObjectRelevancy__ClientOnly = 1,
	ECustomizableObjectRelevancy__ECustomizableObjectRelevancy_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
// 0x0028
struct FCustomizableObjectBoolParameterValue
{
	class FString                                      ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               ParameterValue;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class FString                                      Uid;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
// 0x0030
struct FCustomizableObjectIntParameterValue
{
	class FString                                      ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	class FString                                      ParameterValueName;                                       // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      Uid;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
// 0x0028
struct FCustomizableObjectFloatParameterValue
{
	class FString                                      ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      Uid;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectTextureParameterValue
// 0x0028
struct FCustomizableObjectTextureParameterValue
{
	class FString                                      ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	uint64_t                                           ParameterValue;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class FString                                      Uid;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
// 0x0030
struct FCustomizableObjectVectorParameterValue
{
	class FString                                      ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (Edit, EditConst, IsPlainOldData)
	class FString                                      Uid;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
// 0x0038
struct FCustomizableObjectProjector
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x0018(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0024(0x000C) (Edit, IsPlainOldData)
	ECustomizableObjectProjectorType                   ProjectionType;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Angle;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
// 0x0058
struct FCustomizableObjectProjectorParameterValue
{
	class FString                                      ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FCustomizableObjectProjector                Value;                                                    // 0x0010(0x0038) (Edit, EditConst)
	class FString                                      Uid;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.GeneratedTexture
// 0x0020
struct FGeneratedTexture
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.GeneratedMaterial
// 0x0010
struct FGeneratedMaterial
{
	TArray<struct FGeneratedTexture>                   Textures;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.GeneratedMesh
// 0x0010
struct FGeneratedMesh
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.ParameterDecorations
// 0x0010
struct FParameterDecorations
{
	TArray<class UTexture2D*>                          Images;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct CustomizableObject.MutableModelImageProperties
// 0x0020
struct FMutableModelImageProperties
{
	class FString                                      TextureParameterName;                                     // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	unsigned char                                      SRGB : 1;                                                 // 0x0014(0x0001)
	unsigned char                                      bDitherMipMapAlpha : 1;                                   // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                LODBias;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
// 0x0020
struct FCustomizableObjectIdPair
{
	class FString                                      CustomizableObjectGroupName;                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CustomizableObjectName;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct CustomizableObject.CompilationOptions
// 0x0018
struct FCompilationOptions
{
	bool                                               bPackaging;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTextureCompression;                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                OptimizationLevel;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct CustomizableObject.CustomizableObjectExportOptions
// 0x0018
struct FCustomizableObjectExportOptions
{
	bool                                               bTextureCompression;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      TargetPlatform;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomizableObject.MutableModelParameterValue
// 0x0018
struct FMutableModelParameterValue
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CustomizableObject.MutableParamUIMetadata
// 0x00E8
struct FMutableParamUIMetadata
{
	class FString                                      ObjectFriendlyName;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      UISectionName;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                UIOrder;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        UIThumbnail;                                              // 0x0028(0x0020) (Edit, BlueprintVisible)
	TMap<class FString, class FString>                 ExtraInformation;                                         // 0x0048(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class FString, TAssetPtr<class UObject>>      ExtraAssets;                                              // 0x0098(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
// 0x0110
struct FMutableModelParameterProperties
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	EMutableParameterType                              Type;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ImageDescriptionCount;                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMutableModelParameterValue>         PossibleValues;                                           // 0x0018(0x0010) (ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0028(0x00E8)
};

// ScriptStruct CustomizableObject.IntegerParameterUIData
// 0x00F8
struct FIntegerParameterUIData
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0010(0x00E8) (BlueprintVisible)
};

// ScriptStruct CustomizableObject.ParameterUIData
// 0x0118
struct FParameterUIData
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0010(0x00E8) (BlueprintVisible)
	EMutableParameterType                              Type;                                                     // 0x00F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<struct FIntegerParameterUIData>             ArrayIntegerParameterOption;                              // 0x0100(0x0010) (BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ECustomizableObjectGroupType>          IntegerParameterGroupType;                                // 0x0110(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
// 0x0010
struct FPendingReleaseSkeletalMeshInfo
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Timestamp;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// 0x0030
struct FCustomizableObjectIdentifier
{
	class FString                                      CustomizableObjectGroupName;                              // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      CustomizableObjectName;                                   // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      Guid;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
// 0x0010
struct FCustomizedMaterialTexture2D
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
