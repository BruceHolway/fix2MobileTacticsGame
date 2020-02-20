[33mcommit 82823ff5ec9574d38ea928200205faa34a97c2cc[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: Noah Mitchell <21.noah.mitchell@ksd.org>
Date:   Wed Feb 19 10:24:32 2020 -0800

    Battle test

[1mdiff --git a/fixMobileTactics/Assets/PreFabs.meta b/fixMobileTactics/Assets/PreFabs.meta[m
[1mnew file mode 100644[m
[1mindex 0000000..0e28952[m
[1m--- /dev/null[m
[1m+++ b/fixMobileTactics/Assets/PreFabs.meta[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32mfileFormatVersion: 2[m
[32m+[m[32mguid: 0b69b239e0f5c6a4a970badce34d1b21[m
[32m+[m[32mfolderAsset: yes[m
[32m+[m[32mDefaultImporter:[m
[32m+[m[32m  externalObjects: {}[m
[32m+[m[32m  userData:[m[41m [m
[32m+[m[32m  assetBundleName:[m[41m [m
[32m+[m[32m  assetBundleVariant:[m[41m [m
[1mdiff --git a/fixMobileTactics/Assets/PreFabs/LanceFighter_0.prefab b/fixMobileTactics/Assets/PreFabs/LanceFighter_0.prefab[m
[1mnew file mode 100644[m
[1mindex 0000000..a84d819[m
[1m--- /dev/null[m
[1m+++ b/fixMobileTactics/Assets/PreFabs/LanceFighter_0.prefab[m
[36m@@ -0,0 +1,101 @@[m
[32m+[m[32m%YAML 1.1[m
[32m+[m[32m%TAG !u! tag:unity3d.com,2011:[m
[32m+[m[32m--- !u!1 &1793312306358244484[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 1793312306358244485}[m
[32m+[m[32m  - component: {fileID: 1793312306358244486}[m
[32m+[m[32m  - component: {fileID: 5333075987986308953}[m
[32m+[m[32m  m_Layer: 12[m
[32m+[m[32m  m_Name: LanceFighter_0[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!4 &1793312306358244485[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1793312306358244484}[m
[32m+[m[32m  m_LocalRotation: {x: -0, y: -0, z: -0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 7.85, y: -3.47, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 10, y: 10, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 0[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!212 &1793312306358244486[m
[32m+[m[32mSpriteRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1793312306358244484}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_CastShadows: 0[m
[32m+[m[32m  m_ReceiveShadows: 0[m
[32m+[m[32m  m_DynamicOccludee: 1[m
[32m+[m[32m  m_MotionVectors: 1[m
[32m+[m[32m  m_LightProbeUsage: 1[m
[32m+[m[32m  m_ReflectionProbeUsage: 1[m
[32m+[m[32m  m_RayTracingMode: 0[m
[32m+[m[32m  m_RenderingLayerMask: 1[m
[32m+[m[32m  m_RendererPriority: 0[m
[32m+[m[32m  m_Materials:[m
[32m+[m[32m  - {fileID: 10754, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_StaticBatchInfo:[m
[32m+[m[32m    firstSubMesh: 0[m
[32m+[m[32m    subMeshCount: 0[m
[32m+[m[32m  m_StaticBatchRoot: {fileID: 0}[m
[32m+[m[32m  m_ProbeAnchor: {fileID: 0}[m
[32m+[m[32m  m_LightProbeVolumeOverride: {fileID: 0}[m
[32m+[m[32m  m_ScaleInLightmap: 1[m
[32m+[m[32m  m_ReceiveGI: 1[m
[32m+[m[32m  m_PreserveUVs: 0[m
[32m+[m[32m  m_IgnoreNormalsForChartDetection: 0[m
[32m+[m[32m  m_ImportantGI: 0[m
[32m+[m[32m  m_StitchLightmapSeams: 1[m
[32m+[m[32m  m_SelectedEditorRenderState: 0[m
[32m+[m[32m  m_MinimumChartSize: 4[m
[32m+[m[32m  m_AutoUVMaxDistance: 0.5[m
[32m+[m[32m  m_AutoUVMaxAngle: 89[m
[32m+[m[32m  m_LightmapParameters: {fileID: 0}[m
[32m+[m[32m  m_SortingLayerID: -1434728607[m
[32m+[m[32m  m_SortingLayer: 1[m
[32m+[m[32m  m_SortingOrder: 5[m
[32m+[m[32m  m_Sprite: {fileID: 953179488939560030, guid: 9528ca2cc95ee4a42901b23258335bb8, type: 3}[m
[32m+[m[32m  m_Color: {r: 1, g: 1, b: 1, a: 1}[m
[32m+[m[32m  m_FlipX: 1[m
[32m+[m[32m  m_FlipY: 0[m
[32m+[m[32m  m_DrawMode: 0[m
[32m+[m[32m  m_Size: {x: 1, y: 1}[m
[32m+[m[32m  m_AdaptiveModeThreshold: 0.5[m
[32m+[m[32m  m_SpriteTileMode: 0[m
[32m+[m[32m  m_WasSpriteAssigned: 1[m
[32m+[m[32m  m_MaskInteraction: 0[m
[32m+[m[32m  m_SpriteSortPoint: 0[m
[32m+[m[32m--- !u!114 &5333075987986308953[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1793312306358244484}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: e335f510a626ac344a0052363ba4bcec, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  unitName: Lancer[m
[32m+[m[32m  unitLevel: 2[m
[32m+[m[32m  damage: 2[m
[32m+[m[32m  maxHP: 10[m
[32m+[m[32m  currentHP: 10[m
[1mdiff --git a/fixMobileTactics/Assets/PreFabs/LanceFighter_0.prefab.meta b/fixMobileTactics/Assets/PreFabs/LanceFighter_0.prefab.meta[m
[1mnew file mode 100644[m
[1mindex 0000000..3f9bac0[m
[1m--- /dev/null[m
[1m+++ b/fixMobileTactics/Assets/PreFabs/LanceFighter_0.prefab.meta[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32mfileFormatVersion: 2[m
[32m+[m[32mguid: 9d76538498aec5a42bb26ebe5fa342e7[m
[32m+[m[32mPrefabImporter:[m
[32m+[m[32m  externalObjects: {}[m
[32m+[m[32m  userData:[m[41m [m
[32m+[m[32m  assetBundleName:[m[41m [m
[32m+[m[32m  assetBundleVariant:[m[41m [m
[1mdiff --git a/fixMobileTactics/Assets/PreFabs/TopDownKnight_0.prefab b/fixMobileTactics/Assets/PreFabs/TopDownKnight_0.prefab[m
[1mnew file mode 100644[m
[1mindex 0000000..6271f4f[m
[1m--- /dev/null[m
[1m+++ b/fixMobileTactics/Assets/PreFabs/TopDownKnight_0.prefab[m
[36m@@ -0,0 +1,102 @@[m
[32m+[m[32m%YAML 1.1[m
[32m+[m[32m%TAG !u! tag:unity3d.com,2011:[m
[32m+[m[32m--- !u!1 &5615545790570035350[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 5615545790570035348}[m
[32m+[m[32m  - component: {fileID: 5615545790570035351}[m
[32m+[m[32m  - component: {fileID: 4405510402180224743}[m
[32m+[m[32m  m_Layer: 11[m
[32m+[m[32m  m_Name: TopDownKnight_0[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!4 &5615545790570035348[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 5615545790570035350}[m
[32m+[m[32m  m_LocalRotation: {x: -0, y: -0, z: -0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: -8.22, y: -3.48, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 10, y: 10, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 0[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!212 &5615545790570035351[m
[32m+[m[32mSpriteRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 5615545790570035350}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_CastShadows: 0[m
[32m+[m[32m  m_ReceiveShadows: 0[m
[32m+[m[32m  m_DynamicOccludee: 1[m
[32m+[m[32m  m_MotionVectors: 1[m
[32m+[m[32m  m_LightProbeUsage: 1[m
[32m+[m[32m  m_ReflectionProbeUsage: 1[m
[32m+[m[32m  m_RayTracingMode: 0[m
[32m+[m[32m  m_RenderingLayerMask: 1[m
[32m+[m[32m  m_RendererPriority: 0[m
[32m+[m[32m  m_Materials:[m
[32m+[m[32m  - {fileID: 10754, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_StaticBatchInfo:[m
[32m+[m[32m    firstSubMesh: 0[m
[32m+[m[32m    subMeshCount: 0[m
[32m+[m[32m  m_StaticBatchRoot: {fileID: 0}[m
[32m+[m[32m  m_ProbeAnchor: {fileID: 0}[m
[32m+[m[32m  m_LightProbeVolumeOverride: {fileID: 0}[m
[32m+[m[32m  m_ScaleInLightmap: 1[m
[32m+[m[32m  m_ReceiveGI: 1[m
[32m+[m[32m  m_PreserveUVs: 0[m
[32m+[m[32m  m_IgnoreNormalsForChartDetection: 0[m
[32m+[m[32m  m_ImportantGI: 0[m
[32m+[m[32m  m_StitchLightmapSeams: 1[m
[32m+[m[32m  m_SelectedEditorRenderState: 0[m
[32m+[m[32m  m_MinimumChartSize: 4[m
[32m+[m[32m  m_AutoUVMaxDistance: 0.5[m
[32m+[m[32m  m_AutoUVMaxAngle: 89[m
[32m+[m[32m  m_LightmapParameters: {fileID: 0}[m
[32m+[m[32m  m_SortingLayerID: -1434728607[m
[32m+[m[32m  m_SortingLayer: 1[m
[32m+[m[32m  m_SortingOrder: 5[m
[32m+[m[32m  m_Sprite: {fileID: -5767438723441877538, guid: 1698d45b007297b4b9658ad07eb542d6,[m
[32m+[m[32m    type: 3}[m
[32m+[m[32m  m_Color: {r: 1, g: 1, b: 1, a: 1}[m
[32m+[m[32m  m_FlipX: 0[m
[32m+[m[32m  m_FlipY: 0[m
[32m+[m[32m  m_DrawMode: 0[m
[32m+[m[32m  m_Size: {x: 1, y: 1}[m
[32m+[m[32m  m_AdaptiveModeThreshold: 0.5[m
[32m+[m[32m  m_SpriteTileMode: 0[m
[32m+[m[32m  m_WasSpriteAssigned: 1[m
[32m+[m[32m  m_MaskInteraction: 0[m
[32m+[m[32m  m_SpriteSortPoint: 0[m
[32m+[m[32m--- !u!114 &4405510402180224743[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 5615545790570035350}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: e335f510a626ac344a0052363ba4bcec, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  unitName: Braxton[m
[32m+[m[32m  unitLevel: 1[m
[32m+[m[32m  damage: 5[m
[32m+[m[32m  maxHP: 15[m
[32m+[m[32m  currentHP: 15[m
[1mdiff --git a/fixMobileTactics/Assets/PreFabs/TopDownKnight_0.prefab.meta b/fixMobileTactics/Assets/PreFabs/TopDownKnight_0.prefab.meta[m
[1mnew file mode 100644[m
[1mindex 0000000..2067984[m
[1m--- /dev/null[m
[1m+++ b/fixMobileTactics/Assets/PreFabs/TopDownKnight_0.prefab.meta[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32mfileFormatVersion: 2[m
[32m+[m[32mguid: c0dd681560264234eb07d0818a532870[m
[32m+[m[32mPrefabImporter:[m
[32m+[m[32m  externalObjects: {}[m
[32m+[m[32m  userData:[m[41m [m
[32m+[m[32m  assetBundleName:[m[41m [m
[32m+[m[32m  assetBundleVariant:[m[41m [m
[1mdiff --git a/fixMobileTactics/Assets/Scenes/Mitchell's Scene.unity b/fixMobileTactics/Assets/Scenes/Mitchell's Scene.unity[m
[1mindex f2302cb..59b437d 100644[m
[1m--- a/fixMobileTactics/Assets/Scenes/Mitchell's Scene.unity[m	
[1m+++ b/fixMobileTactics/Assets/Scenes/Mitchell's Scene.unity[m	
[36m@@ -121,6 +121,83 @@[m [mNavMeshSettings:[m
     debug:[m
       m_Flags: 0[m
   m_NavMeshData: {fileID: 0}[m
[32m+[m[32m--- !u!1 &187347647[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 187347648}[m
[32m+[m[32m  - component: {fileID: 187347650}[m
[32m+[m[32m  - component: {fileID: 187347649}[m
[32m+[m[32m  m_Layer: 5[m
[32m+[m[32m  m_Name: Level[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!224 &187347648[m
[32m+[m[32mRectTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 187347647}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 493320385}[m
[32m+[m[32m  m_RootOrder: 3[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_AnchorMin: {x: 0.5, y: 0.5}[m
[32m+[m[32m  m_AnchorMax: {x: 0.5, y: 0.5}[m
[32m+[m[32m  m_AnchoredPosition: {x: -358.6, y: 155}[m
[32m+[m[32m  m_SizeDelta: {x: 212.7, y: 66}[m
[32m+[m[32m  m_Pivot: {x: 0.5, y: 0.5}[m
[32m+[m[32m--- !u!114 &187347649[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 187347647}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 5f7201a12d95ffc409449d95f23cf332, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_Material: {fileID: 0}[m
[32m+[m[32m  m_Color: {r: 1, g: 0.99563575, b: 0.3254717, a: 1}[m
[32m+[m[32m  m_RaycastTarget: 1[m
[32m+[m[32m  m_OnCullStateChanged:[m
[32m+[m[32m    m_PersistentCalls:[m
[32m+[m[32m      m_Calls: [][m
[32m+[m[32m  m_FontData:[m
[32m+[m[32m    m_Font: {fileID: 10102, guid: 0000000000000000e000000000000000, type: 0}[m
[32m+[m[32m    m_FontSize: 25[m
[32m+[m[32m    m_FontStyle: 0[m
[32m+[m[32m    m_BestFit: 0[m
[32m+[m[32m    m_MinSize: 0[m
[32m+[m[32m    m_MaxSize: 40[m
[32m+[m[32m    m_Alignment: 0[m
[32m+[m[32m    m_AlignByGeometry: 0[m
[32m+[m[32m    m_RichText: 1[m
[32m+[m[32m    m_HorizontalOverflow: 0[m
[32m+[m[32m    m_VerticalOverflow: 0[m
[32m+[m[32m    m_LineSpacing: 1[m
[32m+[m[32m  m_Text: 'Player Level: '[m
[32m+[m[32m--- !u!222 &187347650[m
[32m+[m[32mCanvasRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 187347647}[m
[32m+[m[32m  m_CullTransparentMesh: 0[m
 --- !u!1 &370140081[m
 GameObject:[m
   m_ObjectHideFlags: 0[m
[36m@@ -14606,6 +14683,109 @@[m [mTilemap:[m
     e31: 0[m
     e32: 0[m
     e33: 1[m
[32m+[m[32m--- !u!1 &493320381[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 493320385}[m
[32m+[m[32m  - component: {fileID: 493320384}[m
[32m+[m[32m  - component: {fileID: 493320383}[m
[32m+[m[32m  - component: {fileID: 493320382}[m
[32m+[m[32m  m_Layer: 5[m
[32m+[m[32m  m_Name: Battle test[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!114 &493320382[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 493320381}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: dc42784cf147c0c48a680349fa168899, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_IgnoreReversedGraphics: 1[m
[32m+[m[32m  m_BlockingObjects: 0[m
[32m+[m[32m  m_BlockingMask:[m
[32m+[m[32m    serializedVersion: 2[m
[32m+[m[32m    m_Bits: 4294967295[m
[32m+[m[32m--- !u!114 &493320383[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 493320381}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 0cd44c1031e13a943bb63640046fad76, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_UiScaleMode: 0[m
[32m+[m[32m  m_ReferencePixelsPerUnit: 100[m
[32m+[m[32m  m_ScaleFactor: 1[m
[32m+[m[32m  m_ReferenceResolution: {x: 800, y: 600}[m
[32m+[m[32m  m_ScreenMatchMode: 0[m
[32m+[m[32m  m_MatchWidthOrHeight: 0[m
[32m+[m[32m  m_PhysicalUnit: 3[m
[32m+[m[32m  m_FallbackScreenDPI: 96[m
[32m+[m[32m  m_DefaultSpriteDPI: 96[m
[32m+[m[32m  m_DynamicPixelsPerUnit: 1[m
[32m+[m[32m--- !u!223 &493320384[m
[32m+[m[32mCanvas:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 493320381}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  serializedVersion: 3[m
[32m+[m[32m  m_RenderMode: 0[m
[32m+[m[32m  m_Camera: {fileID: 0}[m
[32m+[m[32m  m_PlaneDistance: 100[m
[32m+[m[32m  m_PixelPerfect: 0[m
[32m+[m[32m  m_ReceivesEvents: 1[m
[32m+[m[32m  m_OverrideSorting: 0[m
[32m+[m[32m  m_OverridePixelPerfect: 0[m
[32m+[m[32m  m_SortingBucketNormalizedSize: 0[m
[32m+[m[32m  m_AdditionalShaderChannelsFlag: 0[m
[32m+[m[32m  m_SortingLayerID: 0[m
[32m+[m[32m  m_SortingOrder: 0[m
[32m+[m[32m  m_TargetDisplay: 0[m
[32m+[m[32m--- !u!224 &493320385[m
[32m+[m[32mRectTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 493320381}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_Children:[m
[32m+[m[32m  - {fileID: 2063828603}[m
[32m+[m[32m  - {fileID: 1887754885}[m
[32m+[m[32m  - {fileID: 944491778}[m
[32m+[m[32m  - {fileID: 187347648}[m
[32m+[m[32m  - {fileID: 773468418}[m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 1[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_AnchorMin: {x: 0, y: 0}[m
[32m+[m[32m  m_AnchorMax: {x: 0, y: 0}[m
[32m+[m[32m  m_AnchoredPosition: {x: 0, y: 0}[m
[32m+[m[32m  m_SizeDelta: {x: 0, y: 0}[m
[32m+[m[32m  m_Pivot: {x: 0, y: 0}[m
 --- !u!1 &533677208[m
 GameObject:[m
   m_ObjectHideFlags: 0[m
[36m@@ -21374,8 +21554,85 @@[m [mTransform:[m
   m_Children:[m
   - {fileID: 370140082}[m
   m_Father: {fileID: 0}[m
[31m-  m_RootOrder: 2[m
[32m+[m[32m  m_RootOrder: 3[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!1 &773468415[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 773468418}[m
[32m+[m[32m  - component: {fileID: 773468417}[m
[32m+[m[32m  - component: {fileID: 773468416}[m
[32m+[m[32m  m_Layer: 5[m
[32m+[m[32m  m_Name: Game text[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!114 &773468416[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 773468415}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 5f7201a12d95ffc409449d95f23cf332, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_Material: {fileID: 0}[m
[32m+[m[32m  m_Color: {r: 1, g: 0, b: 0, a: 1}[m
[32m+[m[32m  m_RaycastTarget: 1[m
[32m+[m[32m  m_OnCullStateChanged:[m
[32m+[m[32m    m_PersistentCalls:[m
[32m+[m[32m      m_Calls: [][m
[32m+[m[32m  m_FontData:[m
[32m+[m[32m    m_Font: {fileID: 10102, guid: 0000000000000000e000000000000000, type: 0}[m
[32m+[m[32m    m_FontSize: 30[m
[32m+[m[32m    m_FontStyle: 0[m
[32m+[m[32m    m_BestFit: 0[m
[32m+[m[32m    m_MinSize: 2[m
[32m+[m[32m    m_MaxSize: 40[m
[32m+[m[32m    m_Alignment: 1[m
[32m+[m[32m    m_AlignByGeometry: 0[m
[32m+[m[32m    m_RichText: 1[m
[32m+[m[32m    m_HorizontalOverflow: 0[m
[32m+[m[32m    m_VerticalOverflow: 0[m
[32m+[m[32m    m_LineSpacing: 1[m
[32m+[m[32m  m_Text:[m[41m [m
[32m+[m[32m--- !u!222 &773468417[m
[32m+[m[32mCanvasRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 773468415}[m
[32m+[m[32m  m_CullTransparentMesh: 0[m
[32m+[m[32m--- !u!224 &773468418[m
[32m+[m[32mRectTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 773468415}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 493320385}[m
[32m+[m[32m  m_RootOrder: 4[m
   m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_AnchorMin: {x: 0.5, y: 0.5}[m
[32m+[m[32m  m_AnchorMax: {x: 0.5, y: 0.5}[m
[32m+[m[32m  m_AnchoredPosition: {x: 0.0000076294, y: 168}[m
[32m+[m[32m  m_SizeDelta: {x: 271.9, y: 132.9}[m
[32m+[m[32m  m_Pivot: {x: 0.5, y: 0.5}[m
 --- !u!1 &870628174[m
 GameObject:[m
   m_ObjectHideFlags: 0[m
[36m@@ -22309,6 +22566,206 @@[m [mTilemap:[m
     e31: 0[m
     e32: 0[m
     e33: 1[m
[32m+[m[32m--- !u!1 &939541122[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 939541124}[m
[32m+[m[32m  - component: {fileID: 939541123}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: 2nd ground[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!212 &939541123[m
[32m+[m[32mSpriteRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 939541122}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_CastShadows: 0[m
[32m+[m[32m  m_ReceiveShadows: 0[m
[32m+[m[32m  m_DynamicOccludee: 1[m
[32m+[m[32m  m_MotionVectors: 1[m
[32m+[m[32m  m_LightProbeUsage: 1[m
[32m+[m[32m  m_ReflectionProbeUsage: 1[m
[32m+[m[32m  m_RayTracingMode: 0[m
[32m+[m[32m  m_RenderingLayerMask: 1[m
[32m+[m[32m  m_RendererPriority: 0[m
[32m+[m[32m  m_Materials:[m
[32m+[m[32m  - {fileID: 10754, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_StaticBatchInfo:[m
[32m+[m[32m    firstSubMesh: 0[m
[32m+[m[32m    subMeshCount: 0[m
[32m+[m[32m  m_StaticBatchRoot: {fileID: 0}[m
[32m+[m[32m  m_ProbeAnchor: {fileID: 0}[m
[32m+[m[32m  m_LightProbeVolumeOverride: {fileID: 0}[m
[32m+[m[32m  m_ScaleInLightmap: 1[m
[32m+[m[32m  m_ReceiveGI: 1[m
[32m+[m[32m  m_PreserveUVs: 0[m
[32m+[m[32m  m_IgnoreNormalsForChartDetection: 0[m
[32m+[m[32m  m_ImportantGI: 0[m
[32m+[m[32m  m_StitchLightmapSeams: 1[m
[32m+[m[32m  m_SelectedEditorRenderState: 0[m
[32m+[m[32m  m_MinimumChartSize: 4[m
[32m+[m[32m  m_AutoUVMaxDistance: 0.5[m
[32m+[m[32m  m_AutoUVMaxAngle: 89[m
[32m+[m[32m  m_LightmapParameters: {fileID: 0}[m
[32m+[m[32m  m_SortingLayerID: 0[m
[32m+[m[32m  m_SortingLayer: 0[m
[32m+[m[32m  m_SortingOrder: 5[m
[32m+[m[32m  m_Sprite: {fileID: -380116962628048113, guid: 624823eb8f109dd4393e92d3ca805fe6,[m
[32m+[m[32m    type: 3}[m
[32m+[m[32m  m_Color: {r: 0.8302411, g: 1, b: 0.8066038, a: 1}[m
[32m+[m[32m  m_FlipX: 0[m
[32m+[m[32m  m_FlipY: 0[m
[32m+[m[32m  m_DrawMode: 0[m
[32m+[m[32m  m_Size: {x: 0.16, y: 0.16}[m
[32m+[m[32m  m_AdaptiveModeThreshold: 0.5[m
[32m+[m[32m  m_SpriteTileMode: 0[m
[32m+[m[32m  m_WasSpriteAssigned: 1[m
[32m+[m[32m  m_MaskInteraction: 0[m
[32m+[m[32m  m_SpriteSortPoint: 0[m
[32m+[m[32m--- !u!4 &939541124[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 939541122}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: -8.33, y: -5.31, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 16.07, y: 6, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 8[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!1 &944491777[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 944491778}[m
[32m+[m[32m  - component: {fileID: 944491781}[m
[32m+[m[32m  - component: {fileID: 944491780}[m
[32m+[m[32m  - component: {fileID: 944491779}[m
[32m+[m[32m  m_Layer: 5[m
[32m+[m[32m  m_Name: Heal[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!224 &944491778[m
[32m+[m[32mRectTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 944491777}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children:[m
[32m+[m[32m  - {fileID: 1689542745}[m
[32m+[m[32m  m_Father: {fileID: 493320385}[m
[32m+[m[32m  m_RootOrder: 2[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_AnchorMin: {x: 0.5, y: 0.5}[m
[32m+[m[32m  m_AnchorMax: {x: 0.5, y: 0.5}[m
[32m+[m[32m  m_AnchoredPosition: {x: -371, y: 32}[m
[32m+[m[32m  m_SizeDelta: {x: 160, y: 30}[m
[32m+[m[32m  m_Pivot: {x: 0.5, y: 0.5}[m
[32m+[m[32m--- !u!114 &944491779[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 944491777}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 4e29b1a8efbd4b44bb3f3716e73f07ff, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_Navigation:[m
[32m+[m[32m    m_Mode: 3[m
[32m+[m[32m    m_SelectOnUp: {fileID: 0}[m
[32m+[m[32m    m_SelectOnDown: {fileID: 0}[m
[32m+[m[32m    m_SelectOnLeft: {fileID: 0}[m
[32m+[m[32m    m_SelectOnRight: {fileID: 0}[m
[32m+[m[32m  m_Transition: 1[m
[32m+[m[32m  m_Colors:[m
[32m+[m[32m    m_NormalColor: {r: 1, g: 1, b: 1, a: 1}[m
[32m+[m[32m    m_HighlightedColor: {r: 0.9607843, g: 0.9607843, b: 0.9607843, a: 1}[m
[32m+[m[32m    m_PressedColor: {r: 0.78431374, g: 0.78431374, b: 0.78431374, a: 1}[m
[32m+[m[32m    m_SelectedColor: {r: 0.9607843, g: 0.9607843, b: 0.9607843, a: 1}[m
[32m+[m[32m    m_DisabledColor: {r: 0.78431374, g: 0.78431374, b: 0.78431374, a: 0.5019608}[m
[32m+[m[32m    m_ColorMultiplier: 1[m
[32m+[m[32m    m_FadeDuration: 0.1[m
[32m+[m[32m  m_SpriteState:[m
[32m+[m[32m    m_HighlightedSprite: {fileID: 0}[m
[32m+[m[32m    m_PressedSprite: {fileID: 0}[m
[32m+[m[32m    m_SelectedSprite: {fileID: 0}[m
[32m+[m[32m    m_DisabledSprite: {fileID: 0}[m
[32m+[m[32m  m_AnimationTriggers:[m
[32m+[m[32m    m_NormalTrigger: Normal[m
[32m+[m[32m    m_HighlightedTrigger: Highlighted[m
[32m+[m[32m    m_PressedTrigger: Pressed[m
[32m+[m[32m    m_SelectedTrigger: Selected[m
[32m+[m[32m    m_DisabledTrigger: Disabled[m
[32m+[m[32m  m_Interactable: 1[m
[32m+[m[32m  m_TargetGraphic: {fileID: 944491780}[m
[32m+[m[32m  m_OnClick:[m
[32m+[m[32m    m_PersistentCalls:[m
[32m+[m[32m      m_Calls: [][m
[32m+[m[32m--- !u!114 &944491780[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 944491777}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: fe87c0e1cc204ed48ad3b37840f39efc, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_Material: {fileID: 0}[m
[32m+[m[32m  m_Color: {r: 1, g: 1, b: 1, a: 1}[m
[32m+[m[32m  m_RaycastTarget: 1[m
[32m+[m[32m  m_OnCullStateChanged:[m
[32m+[m[32m    m_PersistentCalls:[m
[32m+[m[32m      m_Calls: [][m
[32m+[m[32m  m_Sprite: {fileID: 10905, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_Type: 1[m
[32m+[m[32m  m_PreserveAspect: 0[m
[32m+[m[32m  m_FillCenter: 1[m
[32m+[m[32m  m_FillMethod: 4[m
[32m+[m[32m  m_FillAmount: 1[m
[32m+[m[32m  m_FillClockwise: 1[m
[32m+[m[32m  m_FillOrigin: 0[m
[32m+[m[32m  m_UseSpriteMesh: 0[m
[32m+[m[32m  m_PixelsPerUnitMultiplier: 1[m
[32m+[m[32m--- !u!222 &944491781[m
[32m+[m[32mCanvasRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 944491777}[m
[32m+[m[32m  m_CullTransparentMesh: 0[m
 --- !u!1 &1318763105[m
 GameObject:[m
   m_ObjectHideFlags: 0[m
[36m@@ -22351,7 +22808,7 @@[m [mTransform:[m
   m_Children:[m
   - {fileID: 533677209}[m
   m_Father: {fileID: 0}[m
[31m-  m_RootOrder: 1[m
[32m+[m[32m  m_RootOrder: 2[m
   m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
 --- !u!1 &1406248945[m
 GameObject:[m
[36m@@ -22395,9 +22852,9 @@[m [mTransform:[m
   m_Children:[m
   - {fileID: 870628175}[m
   m_Father: {fileID: 0}[m
[31m-  m_RootOrder: 3[m
[32m+[m[32m  m_RootOrder: 4[m
   m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[31m---- !u!1 &2129055830[m
[32m+[m[32m--- !u!1 &1489242616[m
 GameObject:[m
   m_ObjectHideFlags: 0[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -22405,41 +22862,657 @@[m [mGameObject:[m
   m_PrefabAsset: {fileID: 0}[m
   serializedVersion: 6[m
   m_Component:[m
[31m-  - component: {fileID: 2129055833}[m
[31m-  - component: {fileID: 2129055832}[m
[31m-  - component: {fileID: 2129055831}[m
[32m+[m[32m  - component: {fileID: 1489242618}[m
[32m+[m[32m  - component: {fileID: 1489242617}[m
   m_Layer: 0[m
[31m-  m_Name: Main Camera[m
[31m-  m_TagString: MainCamera[m
[32m+[m[32m  m_Name: Ground[m
[32m+[m[32m  m_TagString: Untagged[m
   m_Icon: {fileID: 0}[m
   m_NavMeshLayer: 0[m
   m_StaticEditorFlags: 0[m
   m_IsActive: 1[m
[31m---- !u!81 &2129055831[m
[31m-AudioListener:[m
[32m+[m[32m--- !u!212 &1489242617[m
[32m+[m[32mSpriteRenderer:[m
   m_ObjectHideFlags: 0[m
   m_CorrespondingSourceObject: {fileID: 0}[m
   m_PrefabInstance: {fileID: 0}[m
   m_PrefabAsset: {fileID: 0}[m
[31m-  m_GameObject: {fileID: 2129055830}[m
[32m+[m[32m  m_GameObject: {fileID: 1489242616}[m
   m_Enabled: 1[m
[31m---- !u!20 &2129055832[m
[31m-Camera:[m
[32m+[m[32m  m_CastShadows: 0[m
[32m+[m[32m  m_ReceiveShadows: 0[m
[32m+[m[32m  m_DynamicOccludee: 1[m
[32m+[m[32m  m_MotionVectors: 1[m
[32m+[m[32m  m_LightProbeUsage: 1[m
[32m+[m[32m  m_ReflectionProbeUsage: 1[m
[32m+[m[32m  m_RayTracingMode: 0[m
[32m+[m[32m  m_RenderingLayerMask: 1[m
[32m+[m[32m  m_RendererPriority: 0[m
[32m+[m[32m  m_Materials:[m
[32m+[m[32m  - {fileID: 10754, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_StaticBatchInfo:[m
[32m+[m[32m    firstSubMesh: 0[m
[32m+[m[32m    subMeshCount: 0[m
[32m+[m[32m  m_StaticBatchRoot: {fileID: 0}[m
[32m+[m[32m  m_ProbeAnchor: {fileID: 0}[m
[32m+[m[32m  m_LightProbeVolumeOverride: {fileID: 0}[m
[32m+[m[32m  m_ScaleInLightmap: 1[m
[32m+[m[32m  m_ReceiveGI: 1[m
[32m+[m[32m  m_PreserveUVs: 0[m
[32m+[m[32m  m_IgnoreNormalsForChartDetection: 0[m
[32m+[m[32m  m_ImportantGI: 0[m
[32m+[m[32m  m_StitchLightmapSeams: 1[m
[32m+[m[32m  m_SelectedEditorRenderState: 0[m
[32m+[m[32m  m_MinimumChartSize: 4[m
[32m+[m[32m  m_AutoUVMaxDistance: 0.5[m
[32m+[m[32m  m_AutoUVMaxAngle: 89[m
[32m+[m[32m  m_LightmapParameters: {fileID: 0}[m
[32m+[m[32m  m_SortingLayerID: 0[m
[32m+[m[32m  m_SortingLayer: 0[m
[32m+[m[32m  m_SortingOrder: 5[m
[32m+[m[32m  m_Sprite: {fileID: -380116962628048113, guid: 624823eb8f109dd4393e92d3ca805fe6,[m
[32m+[m[32m    type: 3}[m
[32m+[m[32m  m_Color: {r: 0.8302411, g: 1, b: 0.8066038, a: 1}[m
[32m+[m[32m  m_FlipX: 0[m
[32m+[m[32m  m_FlipY: 0[m
[32m+[m[32m  m_DrawMode: 0[m
[32m+[m[32m  m_Size: {x: 0.16, y: 0.16}[m
[32m+[m[32m  m_AdaptiveModeThreshold: 0.5[m
[32m+[m[32m  m_SpriteTileMode: 0[m
[32m+[m[32m  m_WasSpriteAssigned: 1[m
[32m+[m[32m  m_MaskInteraction: 0[m
[32m+[m[32m  m_SpriteSortPoint: 0[m
[32m+[m[32m--- !u!4 &1489242618[m
[32m+[m[32mTransform:[m
   m_ObjectHideFlags: 0[m
   m_CorrespondingSourceObject: {fileID: 0}[m
   m_PrefabInstance: {fileID: 0}[m
   m_PrefabAsset: {fileID: 0}[m
[31m-  m_GameObject: {fileID: 2129055830}[m
[31m-  m_Enabled: 1[m
[31m-  serializedVersion: 2[m
[31m-  m_ClearFlags: 1[m
[31m-  m_BackGroundColor: {r: 0.19215687, g: 0.3019608, b: 0.4745098, a: 0}[m
[31m-  m_projectionMatrixMode: 1[m
[31m-  m_GateFitMode: 2[m
[31m-  m_FOVAxisMode: 0[m
[31m-  m_SensorSize: {x: 36, y: 24}[m
[31m-  m_LensShift: {x: 0, y: 0}[m
[31m-  m_FocalLength: 50[m
[32m+[m[32m  m_GameObject: {fileID: 1489242616}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 7.62, y: -5.31, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 16, y: 6, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 7[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!1 &1569666518[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 1569666519}[m
[32m+[m[32m  - component: {fileID: 1569666521}[m
[32m+[m[32m  - component: {fileID: 1569666520}[m
[32m+[m[32m  m_Layer: 5[m
[32m+[m[32m  m_Name: Text[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!224 &1569666519[m
[32m+[m[32mRectTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1569666518}[m
[32m+[m[32m  m_LocalRotation: {x: -0, y: -0, z: -0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 1887754885}[m
[32m+[m[32m  m_RootOrder: 0[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_AnchorMin: {x: 0, y: 0}[m
[32m+[m[32m  m_AnchorMax: {x: 1, y: 1}[m
[32m+[m[32m  m_AnchoredPosition: {x: 0, y: 0}[m
[32m+[m[32m  m_SizeDelta: {x: 0, y: 0}[m
[32m+[m[32m  m_Pivot: {x: 0.5, y: 0.5}[m
[32m+[m[32m--- !u!114 &1569666520[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1569666518}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 5f7201a12d95ffc409449d95f23cf332, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_Material: {fileID: 0}[m
[32m+[m[32m  m_Color: {r: 0.19607843, g: 0.19607843, b: 0.19607843, a: 1}[m
[32m+[m[32m  m_RaycastTarget: 1[m
[32m+[m[32m  m_OnCullStateChanged:[m
[32m+[m[32m    m_PersistentCalls:[m
[32m+[m[32m      m_Calls: [][m
[32m+[m[32m  m_FontData:[m
[32m+[m[32m    m_Font: {fileID: 10102, guid: 0000000000000000e000000000000000, type: 0}[m
[32m+[m[32m    m_FontSize: 14[m
[32m+[m[32m    m_FontStyle: 0[m
[32m+[m[32m    m_BestFit: 0[m
[32m+[m[32m    m_MinSize: 10[m
[32m+[m[32m    m_MaxSize: 40[m
[32m+[m[32m    m_Alignment: 4[m
[32m+[m[32m    m_AlignByGeometry: 0[m
[32m+[m[32m    m_RichText: 1[m
[32m+[m[32m    m_HorizontalOverflow: 0[m
[32m+[m[32m    m_VerticalOverflow: 0[m
[32m+[m[32m    m_LineSpacing: 1[m
[32m+[m[32m  m_Text: Attack[m
[32m+[m[32m--- !u!222 &1569666521[m
[32m+[m[32mCanvasRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1569666518}[m
[32m+[m[32m  m_CullTransparentMesh: 0[m
[32m+[m[32m--- !u!1 &1613945740[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 1613945741}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: Spawn enemy[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!4 &1613945741[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1613945740}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 10[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!1 &1635335882[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 1635335885}[m
[32m+[m[32m  - component: {fileID: 1635335884}[m
[32m+[m[32m  - component: {fileID: 1635335883}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: EventSystem[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!114 &1635335883[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1635335882}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 4f231c4fb786f3946a6b90b886c48677, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_HorizontalAxis: Horizontal[m
[32m+[m[32m  m_VerticalAxis: Vertical[m
[32m+[m[32m  m_SubmitButton: Submit[m
[32m+[m[32m  m_CancelButton: Cancel[m
[32m+[m[32m  m_InputActionsPerSecond: 10[m
[32m+[m[32m  m_RepeatDelay: 0.5[m
[32m+[m[32m  m_ForceModuleActive: 0[m
[32m+[m[32m--- !u!114 &1635335884[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1635335882}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 76c392e42b5098c458856cdf6ecaaaa1, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_FirstSelected: {fileID: 0}[m
[32m+[m[32m  m_sendNavigationEvents: 1[m
[32m+[m[32m  m_DragThreshold: 10[m
[32m+[m[32m--- !u!4 &1635335885[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1635335882}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 5[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!1 &1689542744[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 1689542745}[m
[32m+[m[32m  - component: {fileID: 1689542747}[m
[32m+[m[32m  - component: {fileID: 1689542746}[m
[32m+[m[32m  m_Layer: 5[m
[32m+[m[32m  m_Name: Text[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!224 &1689542745[m
[32m+[m[32mRectTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1689542744}[m
[32m+[m[32m  m_LocalRotation: {x: -0, y: -0, z: -0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 944491778}[m
[32m+[m[32m  m_RootOrder: 0[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_AnchorMin: {x: 0, y: 0}[m
[32m+[m[32m  m_AnchorMax: {x: 1, y: 1}[m
[32m+[m[32m  m_AnchoredPosition: {x: 0, y: 0}[m
[32m+[m[32m  m_SizeDelta: {x: 0, y: 0}[m
[32m+[m[32m  m_Pivot: {x: 0.5, y: 0.5}[m
[32m+[m[32m--- !u!114 &1689542746[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1689542744}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 5f7201a12d95ffc409449d95f23cf332, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_Material: {fileID: 0}[m
[32m+[m[32m  m_Color: {r: 0.19607843, g: 0.19607843, b: 0.19607843, a: 1}[m
[32m+[m[32m  m_RaycastTarget: 1[m
[32m+[m[32m  m_OnCullStateChanged:[m
[32m+[m[32m    m_PersistentCalls:[m
[32m+[m[32m      m_Calls: [][m
[32m+[m[32m  m_FontData:[m
[32m+[m[32m    m_Font: {fileID: 10102, guid: 0000000000000000e000000000000000, type: 0}[m
[32m+[m[32m    m_FontSize: 14[m
[32m+[m[32m    m_FontStyle: 0[m
[32m+[m[32m    m_BestFit: 0[m
[32m+[m[32m    m_MinSize: 10[m
[32m+[m[32m    m_MaxSize: 40[m
[32m+[m[32m    m_Alignment: 4[m
[32m+[m[32m    m_AlignByGeometry: 0[m
[32m+[m[32m    m_RichText: 1[m
[32m+[m[32m    m_HorizontalOverflow: 0[m
[32m+[m[32m    m_VerticalOverflow: 0[m
[32m+[m[32m    m_LineSpacing: 1[m
[32m+[m[32m  m_Text: 'Heal[m
[32m+[m
[32m+[m[32m'[m
[32m+[m[32m--- !u!222 &1689542747[m
[32m+[m[32mCanvasRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1689542744}[m
[32m+[m[32m  m_CullTransparentMesh: 0[m
[32m+[m[32m--- !u!1 &1757470124[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 1757470125}[m
[32m+[m[32m  - component: {fileID: 1757470126}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: battle system[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!4 &1757470125[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1757470124}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 297, y: 218, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 6[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!114 &1757470126[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1757470124}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 88df836894e3e8a4f99f4e127933f2d4, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  playerPrefab: {fileID: 5615545790570035350, guid: c0dd681560264234eb07d0818a532870,[m
[32m+[m[32m    type: 3}[m
[32m+[m[32m  enemyPrefab: {fileID: 1793312306358244484, guid: 9d76538498aec5a42bb26ebe5fa342e7,[m
[32m+[m[32m    type: 3}[m
[32m+[m[32m  playerBattleStation: {fileID: 1911292930}[m
[32m+[m[32m  enemyBattleStation: {fileID: 1613945741}[m
[32m+[m[32m  dialogueText: {fileID: 773468416}[m
[32m+[m[32m  playerHUD: {fileID: 0}[m
[32m+[m[32m  enemyHUD: {fileID: 0}[m
[32m+[m[32m  state: 0[m
[32m+[m[32m--- !u!1 &1887754884[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 1887754885}[m
[32m+[m[32m  - component: {fileID: 1887754888}[m
[32m+[m[32m  - component: {fileID: 1887754887}[m
[32m+[m[32m  - component: {fileID: 1887754886}[m
[32m+[m[32m  m_Layer: 5[m
[32m+[m[32m  m_Name: Attack[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!224 &1887754885[m
[32m+[m[32mRectTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1887754884}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children:[m
[32m+[m[32m  - {fileID: 1569666519}[m
[32m+[m[32m  m_Father: {fileID: 493320385}[m
[32m+[m[32m  m_RootOrder: 1[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_AnchorMin: {x: 0.5, y: 0.5}[m
[32m+[m[32m  m_AnchorMax: {x: 0.5, y: 0.5}[m
[32m+[m[32m  m_AnchoredPosition: {x: -371, y: 72}[m
[32m+[m[32m  m_SizeDelta: {x: 160, y: 30}[m
[32m+[m[32m  m_Pivot: {x: 0.5, y: 0.5}[m
[32m+[m[32m--- !u!114 &1887754886[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1887754884}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: 4e29b1a8efbd4b44bb3f3716e73f07ff, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_Navigation:[m
[32m+[m[32m    m_Mode: 3[m
[32m+[m[32m    m_SelectOnUp: {fileID: 0}[m
[32m+[m[32m    m_SelectOnDown: {fileID: 0}[m
[32m+[m[32m    m_SelectOnLeft: {fileID: 0}[m
[32m+[m[32m    m_SelectOnRight: {fileID: 0}[m
[32m+[m[32m  m_Transition: 1[m
[32m+[m[32m  m_Colors:[m
[32m+[m[32m    m_NormalColor: {r: 1, g: 1, b: 1, a: 1}[m
[32m+[m[32m    m_HighlightedColor: {r: 0.9607843, g: 0.9607843, b: 0.9607843, a: 1}[m
[32m+[m[32m    m_PressedColor: {r: 0.78431374, g: 0.78431374, b: 0.78431374, a: 1}[m
[32m+[m[32m    m_SelectedColor: {r: 0.9607843, g: 0.9607843, b: 0.9607843, a: 1}[m
[32m+[m[32m    m_DisabledColor: {r: 0.78431374, g: 0.78431374, b: 0.78431374, a: 0.5019608}[m
[32m+[m[32m    m_ColorMultiplier: 1[m
[32m+[m[32m    m_FadeDuration: 0.1[m
[32m+[m[32m  m_SpriteState:[m
[32m+[m[32m    m_HighlightedSprite: {fileID: 0}[m
[32m+[m[32m    m_PressedSprite: {fileID: 0}[m
[32m+[m[32m    m_SelectedSprite: {fileID: 0}[m
[32m+[m[32m    m_DisabledSprite: {fileID: 0}[m
[32m+[m[32m  m_AnimationTriggers:[m
[32m+[m[32m    m_NormalTrigger: Normal[m
[32m+[m[32m    m_HighlightedTrigger: Highlighted[m
[32m+[m[32m    m_PressedTrigger: Pressed[m
[32m+[m[32m    m_SelectedTrigger: Selected[m
[32m+[m[32m    m_DisabledTrigger: Disabled[m
[32m+[m[32m  m_Interactable: 1[m
[32m+[m[32m  m_TargetGraphic: {fileID: 1887754887}[m
[32m+[m[32m  m_OnClick:[m
[32m+[m[32m    m_PersistentCalls:[m
[32m+[m[32m      m_Calls: [][m
[32m+[m[32m--- !u!114 &1887754887[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1887754884}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 11500000, guid: fe87c0e1cc204ed48ad3b37840f39efc, type: 3}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_Material: {fileID: 0}[m
[32m+[m[32m  m_Color: {r: 1, g: 1, b: 1, a: 1}[m
[32m+[m[32m  m_RaycastTarget: 1[m
[32m+[m[32m  m_OnCullStateChanged:[m
[32m+[m[32m    m_PersistentCalls:[m
[32m+[m[32m      m_Calls: [][m
[32m+[m[32m  m_Sprite: {fileID: 10905, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_Type: 1[m
[32m+[m[32m  m_PreserveAspect: 0[m
[32m+[m[32m  m_FillCenter: 1[m
[32m+[m[32m  m_FillMethod: 4[m
[32m+[m[32m  m_FillAmount: 1[m
[32m+[m[32m  m_FillClockwise: 1[m
[32m+[m[32m  m_FillOrigin: 0[m
[32m+[m[32m  m_UseSpriteMesh: 0[m
[32m+[m[32m  m_PixelsPerUnitMultiplier: 1[m
[32m+[m[32m--- !u!222 &1887754888[m
[32m+[m[32mCanvasRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1887754884}[m
[32m+[m[32m  m_CullTransparentMesh: 0[m
[32m+[m[32m--- !u!1 &1911292929[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 1911292930}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: Spawn player[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!4 &1911292930[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 1911292929}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 9[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!1 &2063828602[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 2063828603}[m
[32m+[m[32m  - component: {fileID: 2063828604}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: New Sprite[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!4 &2063828603[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 2063828602}[m
[32m+[m[32m  m_LocalRotation: {x: -0, y: -0, z: -0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: -20, y: -33, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 70000, y: 70000, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 493320385}[m
[32m+[m[32m  m_RootOrder: 0[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!212 &2063828604[m
[32m+[m[32mSpriteRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 2063828602}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_CastShadows: 0[m
[32m+[m[32m  m_ReceiveShadows: 0[m
[32m+[m[32m  m_DynamicOccludee: 1[m
[32m+[m[32m  m_MotionVectors: 1[m
[32m+[m[32m  m_LightProbeUsage: 1[m
[32m+[m[32m  m_ReflectionProbeUsage: 1[m
[32m+[m[32m  m_RayTracingMode: 0[m
[32m+[m[32m  m_RenderingLayerMask: 1[m
[32m+[m[32m  m_RendererPriority: 0[m
[32m+[m[32m  m_Materials:[m
[32m+[m[32m  - {fileID: 10754, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_StaticBatchInfo:[m
[32m+[m[32m    firstSubMesh: 0[m
[32m+[m[32m    subMeshCount: 0[m
[32m+[m[32m  m_StaticBatchRoot: {fileID: 0}[m
[32m+[m[32m  m_ProbeAnchor: {fileID: 0}[m
[32m+[m[32m  m_LightProbeVolumeOverride: {fileID: 0}[m
[32m+[m[32m  m_ScaleInLightmap: 1[m
[32m+[m[32m  m_ReceiveGI: 1[m
[32m+[m[32m  m_PreserveUVs: 0[m
[32m+[m[32m  m_IgnoreNormalsForChartDetection: 0[m
[32m+[m[32m  m_ImportantGI: 0[m
[32m+[m[32m  m_StitchLightmapSeams: 1[m
[32m+[m[32m  m_SelectedEditorRenderState: 0[m
[32m+[m[32m  m_MinimumChartSize: 4[m
[32m+[m[32m  m_AutoUVMaxDistance: 0.5[m
[32m+[m[32m  m_AutoUVMaxAngle: 89[m
[32m+[m[32m  m_LightmapParameters: {fileID: 0}[m
[32m+[m[32m  m_SortingLayerID: 0[m
[32m+[m[32m  m_SortingLayer: 0[m
[32m+[m[32m  m_SortingOrder: 4[m
[32m+[m[32m  m_Sprite: {fileID: 10905, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_Color: {r: 0.26415092, g: 0.26415092, b: 0.26415092, a: 0.6117647}[m
[32m+[m[32m  m_FlipX: 0[m
[32m+[m[32m  m_FlipY: 0[m
[32m+[m[32m  m_DrawMode: 0[m
[32m+[m[32m  m_Size: {x: 0.16, y: 0.16}[m
[32m+[m[32m  m_AdaptiveModeThreshold: 0.5[m
[32m+[m[32m  m_SpriteTileMode: 0[m
[32m+[m[32m  m_WasSpriteAssigned: 1[m
[32m+[m[32m  m_MaskInteraction: 0[m
[32m+[m[32m  m_SpriteSortPoint: 0[m
[32m+[m[32m--- !u!1 &2129055830[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 2129055833}[m
[32m+[m[32m  - component: {fileID: 2129055832}[m
[32m+[m[32m  - component: {fileID: 2129055831}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: Main Camera[m
[32m+[m[32m  m_TagString: MainCamera[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!81 &2129055831[m
[32m+[m[32mAudioListener:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 2129055830}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m--- !u!20 &2129055832[m
[32m+[m[32mCamera:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 2129055830}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  serializedVersion: 2[m
[32m+[m[32m  m_ClearFlags: 1[m
[32m+[m[32m  m_BackGroundColor: {r: 0, g: 0.2669897, b: 1, a: 0}[m
[32m+[m[32m  m_projectionMatrixMode: 1[m
[32m+[m[32m  m_GateFitMode: 2[m
[32m+[m[32m  m_FOVAxisMode: 0[m
[32m+[m[32m  m_SensorSize: {x: 36, y: 24}[m
[32m+[m[32m  m_LensShift: {x: 0, y: 0}[m
[32m+[m[32m  m_FocalLength: 50[m
   m_NormalizedViewPortRect:[m
     serializedVersion: 2[m
     x: 0[m
[36m@@ -22450,11 +23523,11 @@[m [mCamera:[m
   far clip plane: 1000[m
   field of view: 60[m
   orthographic: 1[m
[31m-  orthographic size: 8.38682[m
[32m+[m[32m  orthographic size: 9[m
   m_Depth: -1[m
   m_CullingMask:[m
     serializedVersion: 2[m
[31m-    m_Bits: 4294967295[m
[32m+[m[32m    m_Bits: 6167[m
   m_RenderingPath: -1[m
   m_TargetTexture: {fileID: 0}[m
   m_TargetDisplay: 0[m
[1mdiff --git a/fixMobileTactics/Assets/Scenes/SampleScene.unity b/fixMobileTactics/Assets/Scenes/SampleScene.unity[m
[1mindex e5ecd0a..7cbe576 100644[m
[1m--- a/fixMobileTactics/Assets/Scenes/SampleScene.unity[m
[1m+++ b/fixMobileTactics/Assets/Scenes/SampleScene.unity[m
[36m@@ -50,12 +50,11 @@[m [mLightmapSettings:[m
     m_BounceScale: 1[m
     m_IndirectOutputScale: 1[m
     m_AlbedoBoost: 1[m
[31m-    m_TemporalCoherenceThreshold: 1[m
     m_EnvironmentLightingMode: 0[m
     m_EnableBakedLightmaps: 0[m
     m_EnableRealtimeLightmaps: 0[m
   m_LightmapEditorSettings:[m
[31m-    serializedVersion: 10[m
[32m+[m[32m    serializedVersion: 12[m
     m_Resolution: 2[m
     m_BakeResolution: 40[m
     m_AtlasSize: 1024[m
[36m@@ -63,6 +62,7 @@[m [mLightmapSettings:[m
     m_AOMaxDistance: 1[m
     m_CompAOExponent: 1[m
     m_CompAOExponentDirect: 0[m
[32m+[m[32m    m_ExtractAmbientOcclusion: 0[m
     m_Padding: 2[m
     m_LightmapParameters: {fileID: 0}[m
     m_LightmapsBakeMode: 1[m
[36m@@ -77,10 +77,16 @@[m [mLightmapSettings:[m
     m_PVRDirectSampleCount: 32[m
     m_PVRSampleCount: 500[m
     m_PVRBounces: 2[m
[32m+[m[32m    m_PVREnvironmentSampleCount: 500[m
[32m+[m[32m    m_PVREnvironmentReferencePointCount: 2048[m
[32m+[m[32m    m_PVRFilteringMode: 2[m
[32m+[m[32m    m_PVRDenoiserTypeDirect: 0[m
[32m+[m[32m    m_PVRDenoiserTypeIndirect: 0[m
[32m+[m[32m    m_PVRDenoiserTypeAO: 0[m
     m_PVRFilterTypeDirect: 0[m
     m_PVRFilterTypeIndirect: 0[m
     m_PVRFilterTypeAO: 0[m
[31m-    m_PVRFilteringMode: 1[m
[32m+[m[32m    m_PVREnvironmentMIS: 0[m
     m_PVRCulling: 1[m
     m_PVRFilteringGaussRadiusDirect: 1[m
     m_PVRFilteringGaussRadiusIndirect: 5[m
[36m@@ -88,7 +94,9 @@[m [mLightmapSettings:[m
     m_PVRFilteringAtrousPositionSigmaDirect: 0.5[m
     m_PVRFilteringAtrousPositionSigmaIndirect: 2[m
     m_PVRFilteringAtrousPositionSigmaAO: 1[m
[31m-    m_ShowResolutionOverlay: 1[m
[32m+[m[32m    m_ExportTrainingData: 0[m
[32m+[m[32m    m_TrainingDataDestination: TrainingData[m
[32m+[m[32m    m_LightProbeSampleCountMultiplier: 4[m
   m_LightingDataAsset: {fileID: 0}[m
   m_UseShadowmask: 1[m
 --- !u!196 &4[m
[36m@@ -116,9 +124,10 @@[m [mNavMeshSettings:[m
 --- !u!1 &519420028[m
 GameObject:[m
   m_ObjectHideFlags: 0[m
[31m-  m_PrefabParentObject: {fileID: 0}[m
[31m-  m_PrefabInternal: {fileID: 0}[m
[31m-  serializedVersion: 5[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
   m_Component:[m
   - component: {fileID: 519420032}[m
   - component: {fileID: 519420031}[m
[36m@@ -133,20 +142,28 @@[m [mGameObject:[m
 --- !u!81 &519420029[m
 AudioListener:[m
   m_ObjectHideFlags: 0[m
[31m-  m_PrefabParentObject: {fileID: 0}[m
[31m-  m_PrefabInternal: {fileID: 0}[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
   m_GameObject: {fileID: 519420028}[m
   m_Enabled: 1[m
 --- !u!20 &519420031[m
 Camera:[m
   m_ObjectHideFlags: 0[m
[31m-  m_PrefabParentObject: {fileID: 0}[m
[31m-  m_PrefabInternal: {fileID: 0}[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
   m_GameObject: {fileID: 519420028}[m
   m_Enabled: 1[m
   serializedVersion: 2[m
   m_ClearFlags: 2[m
   m_BackGroundColor: {r: 0.19215687, g: 0.3019608, b: 0.4745098, a: 0}[m
[32m+[m[32m  m_projectionMatrixMode: 1[m
[32m+[m[32m  m_GateFitMode: 2[m
[32m+[m[32m  m_FOVAxisMode: 0[m
[32m+[m[32m  m_SensorSize: {x: 36, y: 24}[m
[32m+[m[32m  m_LensShift: {x: 0, y: 0}[m
[32m+[m[32m  m_FocalLength: 50[m
   m_NormalizedViewPortRect:[m
     serializedVersion: 2[m
     x: 0[m
[36m@@ -176,8 +193,9 @@[m [mCamera:[m
 --- !u!4 &519420032[m
 Transform:[m
   m_ObjectHideFlags: 0[m
[31m-  m_PrefabParentObject: {fileID: 0}[m
[31m-  m_PrefabInternal: {fileID: 0}[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
   m_GameObject: {fileID: 519420028}[m
   m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
   m_LocalPosition: {x: 0, y: 0, z: -10}[m
[36m@@ -186,3 +204,164 @@[m [mTransform:[m
   m_Father: {fileID: 0}[m
   m_RootOrder: 0[m
   m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!1 &828487087[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 828487088}[m
[32m+[m[32m  - component: {fileID: 828487090}[m
[32m+[m[32m  - component: {fileID: 828487089}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: Tilemap[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!4 &828487088[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 828487087}[m
[32m+[m[32m  m_LocalRotation: {x: -0, y: -0, z: -0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children: [][m
[32m+[m[32m  m_Father: {fileID: 897229509}[m
[32m+[m[32m  m_RootOrder: 0[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[32m+[m[32m--- !u!483693784 &828487089[m
[32m+[m[32mTilemapRenderer:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 828487087}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_CastShadows: 0[m
[32m+[m[32m  m_ReceiveShadows: 0[m
[32m+[m[32m  m_DynamicOccludee: 1[m
[32m+[m[32m  m_MotionVectors: 1[m
[32m+[m[32m  m_LightProbeUsage: 0[m
[32m+[m[32m  m_ReflectionProbeUsage: 0[m
[32m+[m[32m  m_RayTracingMode: 0[m
[32m+[m[32m  m_RenderingLayerMask: 1[m
[32m+[m[32m  m_RendererPriority: 0[m
[32m+[m[32m  m_Materials:[m
[32m+[m[32m  - {fileID: 10754, guid: 0000000000000000f000000000000000, type: 0}[m
[32m+[m[32m  m_StaticBatchInfo:[m
[32m+[m[32m    firstSubMesh: 0[m
[32m+[m[32m    subMeshCount: 0[m
[32m+[m[32m  m_StaticBatchRoot: {fileID: 0}[m
[32m+[m[32m  m_ProbeAnchor: {fileID: 0}[m
[32m+[m[32m  m_LightProbeVolumeOverride: {fileID: 0}[m
[32m+[m[32m  m_ScaleInLightmap: 1[m
[32m+[m[32m  m_ReceiveGI: 1[m
[32m+[m[32m  m_PreserveUVs: 0[m
[32m+[m[32m  m_IgnoreNormalsForChartDetection: 0[m
[32m+[m[32m  m_ImportantGI: 0[m
[32m+[m[32m  m_StitchLightmapSeams: 1[m
[32m+[m[32m  m_SelectedEditorRenderState: 0[m
[32m+[m[32m  m_MinimumChartSize: 4[m
[32m+[m[32m  m_AutoUVMaxDistance: 0.5[m
[32m+[m[32m  m_AutoUVMaxAngle: 89[m
[32m+[m[32m  m_LightmapParameters: {fileID: 0}[m
[32m+[m[32m  m_SortingLayerID: 0[m
[32m+[m[32m  m_SortingLayer: 0[m
[32m+[m[32m  m_SortingOrder: 0[m
[32m+[m[32m  m_ChunkSize: {x: 32, y: 32, z: 32}[m
[32m+[m[32m  m_ChunkCullingBounds: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_MaxChunkCount: 16[m
[32m+[m[32m  m_MaxFrameAge: 16[m
[32m+[m[32m  m_SortOrder: 0[m
[32m+[m[32m  m_Mode: 0[m
[32m+[m[32m  m_DetectChunkCullingBounds: 0[m
[32m+[m[32m  m_MaskInteraction: 0[m
[32m+[m[32m--- !u!1839735485 &828487090[m
[32m+[m[32mTilemap:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 828487087}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_Tiles: {}[m
[32m+[m[32m  m_AnimatedTiles: {}[m
[32m+[m[32m  m_TileAssetArray: [][m
[32m+[m[32m  m_TileSpriteArray: [][m
[32m+[m[32m  m_TileMatrixArray: [][m
[32m+[m[32m  m_TileColorArray: [][m
[32m+[m[32m  m_TileObjectToInstantiateArray: [][m
[32m+[m[32m  m_AnimationFrameRate: 1[m
[32m+[m[32m  m_Color: {r: 1, g: 1, b: 1, a: 1}[m
[32m+[m[32m  m_Origin: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_Size: {x: 0, y: 0, z: 1}[m
[32m+[m[32m  m_TileAnchor: {x: 0.5, y: 0.5, z: 0}[m
[32m+[m[32m  m_TileOrientation: 0[m
[32m+[m[32m  m_TileOrientationMatrix:[m
[32m+[m[32m    e00: 1[m
[32m+[m[32m    e01: 0[m
[32m+[m[32m    e02: 0[m
[32m+[m[32m    e03: 0[m
[32m+[m[32m    e10: 0[m
[32m+[m[32m    e11: 1[m
[32m+[m[32m    e12: 0[m
[32m+[m[32m    e13: 0[m
[32m+[m[32m    e20: 0[m
[32m+[m[32m    e21: 0[m
[32m+[m[32m    e22: 1[m
[32m+[m[32m    e23: 0[m
[32m+[m[32m    e30: 0[m
[32m+[m[32m    e31: 0[m
[32m+[m[32m    e32: 0[m
[32m+[m[32m    e33: 1[m
[32m+[m[32m--- !u!1 &897229507[m
[32m+[m[32mGameObject:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  serializedVersion: 6[m
[32m+[m[32m  m_Component:[m
[32m+[m[32m  - component: {fileID: 897229509}[m
[32m+[m[32m  - component: {fileID: 897229508}[m
[32m+[m[32m  m_Layer: 0[m
[32m+[m[32m  m_Name: Grid[m
[32m+[m[32m  m_TagString: Untagged[m
[32m+[m[32m  m_Icon: {fileID: 0}[m
[32m+[m[32m  m_NavMeshLayer: 0[m
[32m+[m[32m  m_StaticEditorFlags: 0[m
[32m+[m[32m  m_IsActive: 1[m
[32m+[m[32m--- !u!156049354 &897229508[m
[32m+[m[32mGrid:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 897229507}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_CellSize: {x: 1, y: 1, z: 0}[m
[32m+[m[32m  m_CellGap: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_CellLayout: 0[m
[32m+[m[32m  m_CellSwizzle: 0[m
[32m+[m[32m--- !u!4 &897229509[m
[32m+[m[32mTransform:[m
[32m+[m[32m  m_ObjectHideFlags: 0[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 897229507}[m
[32m+[m[32m  m_LocalRotation: {x: 0, y: 0, z: 0, w: 1}[m
[32m+[m[32m  m_LocalPosition: {x: 0, y: 0, z: 0}[m
[32m+[m[32m  m_LocalScale: {x: 1, y: 1, z: 1}[m
[32m+[m[32m  m_Children:[m
[32m+[m[32m  - {fileID: 828487088}[m
[32m+[m[32m  m_Father: {fileID: 0}[m
[32m+[m[32m  m_RootOrder: 1[m
[32m+[m[32m  m_LocalEulerAnglesHint: {x: 0, y: 0, z: 0}[m
[1mdiff --git a/fixMobileTactics/Library/ArtifactDB b/fixMobileTactics/Library/ArtifactDB[m
[1mindex 3e24e1e..7c1cdec 100644[m
Binary files a/fixMobileTactics/Library/ArtifactDB and b/fixMobileTactics/Library/ArtifactDB differ
[1mdiff --git a/fixMobileTactics/Library/Artifacts/21/21060c59cca87ebe26069bb4004717ca b/fixMobileTactics/Library/Artifacts/21/21060c59cca87ebe26069bb4004717ca[m
[1mdeleted file mode 100644[m
[1mindex c5b4e5b..0000000[m
Binary files a/fixMobileTactics/Library/Artifacts/21/21060c59cca87ebe26069bb4004717ca and /dev/null differ
[1mdiff --git a/fixMobileTactics/Library/Artifacts/32/32cae87b6ca48e4ac8fa0fc3e63ffa99 b/fixMobileTactics/Library/Artifacts/32/32cae87b6ca48e4ac8fa0fc3e63ffa99[m
[1mnew file mode 100644[m
[1mindex 0000000..704345f[m
Binary files /dev/null and b/fixMobileTactics/Library/Artifacts/32/32cae87b6ca48e4ac8fa0fc3e63ffa99 differ
[1mdiff --git a/fixMobileTactics/Library/Artifacts/c7/c779caf98c1710b8e884e07e5665275c b/fixMobileTactics/Library/Artifacts/c7/c779caf98c1710b8e884e07e5665275c[m
[1mnew file mode 100644[m
[1mindex 0000000..3e672f9[m
Binary files /dev/null and b/fixMobileTactics/Library/Artifacts/c7/c779caf98c1710b8e884e07e5665275c differ
[1mdiff --git a/fixMobileTactics/Library/Artifacts/d5/d5cfe2dc01392d405518102499e1e2be b/fixMobileTactics/Library/Artifacts/d5/d5cfe2dc01392d405518102499e1e2be[m
[1mnew file mode 100644[m
[1mindex 0000000..c295365[m
Binary files /dev/null and b/fixMobileTactics/Library/Artifacts/d5/d5cfe2dc01392d405518102499e1e2be differ
[1mdiff --git a/fixMobileTactics/Library/Artifacts/e3/e3c8c247454b6a271a2118259ccdab8e b/fixMobileTactics/Library/Artifacts/e3/e3c8c247454b6a271a2118259ccdab8e[m
[1mnew file mode 100644[m
[1mindex 0000000..c61a0a3[m
Binary files /dev/null and b/fixMobileTactics/Library/Artifacts/e3/e3c8c247454b6a271a2118259ccdab8e differ
[1mdiff --git a/fixMobileTactics/Library/Artifacts/ef/ef976a1b03f7acc8e5821077f9506dee b/fixMobileTactics/Library/Artifacts/ef/ef976a1b03f7acc8e5821077f9506dee[m
[1mdeleted file mode 100644[m
[1mindex c0a050d..0000000[m
Binary files a/fixMobileTactics/Library/Artifacts/ef/ef976a1b03f7acc8e5821077f9506dee and /dev/null differ
[1mdiff --git a/fixMobileTactics/Library/Artifacts/f0/f0973ec6f7ab67ba8a63f650ec8fc4d5 b/fixMobileTactics/Library/Artifacts/f0/f0973ec6f7ab67ba8a63f650ec8fc4d5[m
[1mnew file mode 100644[m
[1mindex 0000000..75f8ffe[m
Binary files /dev/null and b/fixMobileTactics/Library/Artifacts/f0/f0973ec6f7ab67ba8a63f650ec8fc4d5 differ
[1mdiff --git a/fixMobileTactics/Library/CurrentLayout-default.dwlt b/fixMobileTactics/Library/CurrentLayout-default.dwlt[m
[1mindex 2a7d034..e595d57 100644[m
[1m--- a/fixMobileTactics/Library/CurrentLayout-default.dwlt[m
[1m+++ b/fixMobileTactics/Library/CurrentLayout-default.dwlt[m
[36m@@ -14,16 +14,16 @@[m [mMonoBehaviour:[m
   m_EditorClassIdentifier: [m
   m_PixelRect:[m
     serializedVersion: 2[m
[31m-    x: 0[m
[31m-    y: 43[m
[32m+[m[32m    x: -1[m
[32m+[m[32m    y: 51[m
     width: 1920[m
[31m-    height: 997[m
[32m+[m[32m    height: 988[m
   m_ShowMode: 4[m
   m_Title: [m
   m_RootView: {fileID: 6}[m
   m_MinSize: {x: 875, y: 542}[m
   m_MaxSize: {x: 10000, y: 10000}[m
[31m-  m_Maximized: 1[m
[32m+[m[32m  m_Maximized: 0[m
 --- !u!114 &2[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
[36m@@ -44,11 +44,11 @@[m [mMonoBehaviour:[m
     x: 0[m
     y: 30[m
     width: 1920[m
[31m-    height: 947[m
[31m-  m_MinSize: {x: 642, y: 492}[m
[32m+[m[32m    height: 938[m
[32m+[m[32m  m_MinSize: {x: 677, y: 492}[m
   m_MaxSize: {x: 14001, y: 14042}[m
   vertical: 0[m
[31m-  controlID: 69[m
[32m+[m[32m  controlID: 210[m
 --- !u!114 &3[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
[36m@@ -59,7 +59,7 @@[m [mMonoBehaviour:[m
   m_Enabled: 1[m
   m_EditorHideFlags: 1[m
   m_Script: {fileID: 12006, guid: 0000000000000000e000000000000000, type: 0}[m
[31m-  m_Name: GridPaintPaletteWindow[m
[32m+[m[32m  m_Name: InspectorWindow[m
   m_EditorClassIdentifier: [m
   m_Children: [][m
   m_Position:[m
[36m@@ -67,15 +67,15 @@[m [mMonoBehaviour:[m
     x: 1367[m
     y: 0[m
     width: 553[m
[31m-    height: 947[m
[31m-  m_MinSize: {x: 240, y: 200}[m
[32m+[m[32m    height: 938[m
[32m+[m[32m  m_MinSize: {x: 275, y: 50}[m
   m_MaxSize: {x: 4000, y: 4000}[m
[31m-  m_ActualView: {fileID: 13}[m
[32m+[m[32m  m_ActualView: {fileID: 17}[m
   m_Panes:[m
[31m-  - {fileID: 16}[m
[31m-  - {fileID: 13}[m
[31m-  m_Selected: 1[m
[31m-  m_LastSelected: 0[m
[32m+[m[32m  - {fileID: 17}[m
[32m+[m[32m  - {fileID: 14}[m
[32m+[m[32m  m_Selected: 0[m
[32m+[m[32m  m_LastSelected: 1[m
 --- !u!114 &4[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
[36m@@ -94,12 +94,12 @@[m [mMonoBehaviour:[m
     x: 0[m
     y: 0[m
     width: 405[m
[31m-    height: 573[m
[32m+[m[32m    height: 568[m
   m_MinSize: {x: 200, y: 200}[m
   m_MaxSize: {x: 4000, y: 4000}[m
[31m-  m_ActualView: {fileID: 17}[m
[32m+[m[32m  m_ActualView: {fileID: 18}[m
   m_Panes:[m
[31m-  - {fileID: 17}[m
[32m+[m[32m  - {fileID: 18}[m
   m_Selected: 0[m
   m_LastSelected: 0[m
 --- !u!114 &5[m
[36m@@ -118,16 +118,16 @@[m [mMonoBehaviour:[m
   m_Position:[m
     serializedVersion: 2[m
     x: 0[m
[31m-    y: 573[m
[32m+[m[32m    y: 568[m
     width: 1367[m
[31m-    height: 374[m
[32m+[m[32m    height: 370[m
   m_MinSize: {x: 231, y: 271}[m
   m_MaxSize: {x: 10001, y: 10021}[m
[31m-  m_ActualView: {fileID: 15}[m
[32m+[m[32m  m_ActualView: {fileID: 16}[m
   m_Panes:[m
[31m-  - {fileID: 15}[m
[31m-  - {fileID: 20}[m
[31m-  - {fileID: 12}[m
[32m+[m[32m  - {fileID: 16}[m
[32m+[m[32m  - {fileID: 21}[m
[32m+[m[32m  - {fileID: 13}[m
   m_Selected: 0[m
   m_LastSelected: 1[m
 --- !u!114 &6[m
[36m@@ -151,7 +151,7 @@[m [mMonoBehaviour:[m
     x: 0[m
     y: 0[m
     width: 1920[m
[31m-    height: 997[m
[32m+[m[32m    height: 988[m
   m_MinSize: {x: 875, y: 300}[m
   m_MaxSize: {x: 10000, y: 10000}[m
 --- !u!114 &7[m
[36m@@ -192,7 +192,7 @@[m [mMonoBehaviour:[m
   m_Position:[m
     serializedVersion: 2[m
     x: 0[m
[31m-    y: 977[m
[32m+[m[32m    y: 968[m
     width: 1920[m
     height: 20[m
   m_MinSize: {x: 0, y: 0}[m
[36m@@ -217,11 +217,11 @@[m [mMonoBehaviour:[m
     x: 0[m
     y: 0[m
     width: 1367[m
[31m-    height: 947[m
[32m+[m[32m    height: 938[m
   m_MinSize: {x: 402, y: 492}[m
   m_MaxSize: {x: 10001, y: 14042}[m
   vertical: 1[m
[31m-  controlID: 43[m
[32m+[m[32m  controlID: 93[m
 --- !u!114 &10[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
[36m@@ -242,11 +242,11 @@[m [mMonoBehaviour:[m
     x: 0[m
     y: 0[m
     width: 1367[m
[31m-    height: 573[m
[32m+[m[32m    height: 568[m
   m_MinSize: {x: 402, y: 221}[m
   m_MaxSize: {x: 8002, y: 4021}[m
   vertical: 0[m
[31m-  controlID: 44[m
[32m+[m[32m  controlID: 94[m
 --- !u!114 &11[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
[36m@@ -265,17 +265,48 @@[m [mMonoBehaviour:[m
     x: 405[m
     y: 0[m
     width: 962[m
[31m-    height: 573[m
[31m-  m_MinSize: {x: 200, y: 200}[m
[31m-  m_MaxSize: {x: 4000, y: 4000}[m
[31m-  m_ActualView: {fileID: 18}[m
[32m+[m[32m    height: 568[m
[32m+[m[32m  m_MinSize: {x: 202, y: 221}[m
[32m+[m[32m  m_MaxSize: {x: 4002, y: 4021}[m
[32m+[m[32m  m_ActualView: {fileID: 19}[m
   m_Panes:[m
[31m-  - {fileID: 18}[m
   - {fileID: 19}[m
[31m-  - {fileID: 14}[m
[32m+[m[32m  - {fileID: 20}[m
[32m+[m[32m  - {fileID: 12}[m
[32m+[m[32m  - {fileID: 15}[m
   m_Selected: 0[m
   m_LastSelected: 1[m
 --- !u!114 &12[m
[32m+[m[32mMonoBehaviour:[m
[32m+[m[32m  m_ObjectHideFlags: 52[m
[32m+[m[32m  m_CorrespondingSourceObject: {fileID: 0}[m
[32m+[m[32m  m_PrefabInstance: {fileID: 0}[m
[32m+[m[32m  m_PrefabAsset: {fileID: 0}[m
[32m+[m[32m  m_GameObject: {fileID: 0}[m
[32m+[m[32m  m_Enabled: 1[m
[32m+[m[32m  m_EditorHideFlags: 0[m
[32m+[m[32m  m_Script: {fileID: 13854, guid: 0000000000000000e000000000000000, type: 0}[m
[32m+[m[32m  m_Name:[m[41m [m
[32m+[m[32m  m_EditorClassIdentifier:[m[41m [m
[32m+[m[32m  m_MinSize: {x: 300, y: 200}[m
[32m+[m[32m  m_MaxSize: {x: 4000, y: 4000}[m
[32m+[m[32m  m_TitleContent:[m
[32m+[m[32m    m_Text: Project Settings[m
[32m+[m[32m    m_Image: {fileID: 8487775502441791945, guid: 0000000000000000d000000000000000,[m
[32m+[m[32m      type: 0}[m
[32m+[m[32m    m_Tooltip:[m[41m [m
[32m+[m[32m  m_Pos:[m
[32m+[m[32m    serializedVersion: 2[m
[32m+[m[32m    x: 404[m
[32m+[m[32m    y: 81[m
[32m+[m[32m    width: 960[m
[32m+[m[32m    height: 552[m
[32m+[m[32m  m_ViewDataDictionary: {fileID: 0}[m
[32m+[m[32m  m_PosLeft: {x: 0, y: 0}[m
[32m+[m[32m  m_PosRight: {x: 0, y: 0}[m
[32m+[m[32m  m_Scope: 1[m
[32m+[m[32m  m_SplitterFlex: 0.2[m
[32m+[m[32m--- !u!114 &13[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -407,7 +438,7 @@[m [mMonoBehaviour:[m
   m_CurrentEditor: 1[m
   m_LayerEditor:[m
     m_SelectedLayerIndex: 0[m
[31m---- !u!114 &13[m
[32m+[m[32m--- !u!114 &14[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -427,8 +458,8 @@[m [mMonoBehaviour:[m
     m_Tooltip: [m
   m_Pos:[m
     serializedVersion: 2[m
[31m-    x: 1367[m
[31m-    y: 73[m
[32m+[m[32m    x: 1366[m
[32m+[m[32m    y: 81[m
     width: 552[m
     height: 926[m
   m_ViewDataDictionary: {fileID: 0}[m
[36m@@ -438,7 +469,7 @@[m [mMonoBehaviour:[m
     m_PrefName: Preview_TilemapBrushInspector[m
   m_Palette: {fileID: 3488490856410036014, guid: 4babd4f809f70b545b68bbea9ee9d17f,[m
     type: 3}[m
[31m---- !u!114 &14[m
[32m+[m[32m--- !u!114 &15[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -464,7 +495,7 @@[m [mMonoBehaviour:[m
     width: 973[m
     height: 501[m
   m_ViewDataDictionary: {fileID: 0}[m
[31m---- !u!114 &15[m
[32m+[m[32m--- !u!114 &16[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -485,10 +516,10 @@[m [mMonoBehaviour:[m
     m_Tooltip: [m
   m_Pos:[m
     serializedVersion: 2[m
[31m-    x: 0[m
[31m-    y: 646[m
[32m+[m[32m    x: -1[m
[32m+[m[32m    y: 649[m
     width: 1366[m
[31m-    height: 353[m
[32m+[m[32m    height: 349[m
   m_ViewDataDictionary: {fileID: 0}[m
   m_SearchFilter:[m
     m_NameFilter: [m
[36m@@ -503,36 +534,36 @@[m [mMonoBehaviour:[m
     m_SkipHidden: 0[m
     m_SearchArea: 1[m
     m_Folders:[m
[31m-    - Assets/Scripts[m
[32m+[m[32m    - Assets/PreFabs[m
   m_ViewMode: 1[m
[31m-  m_StartGridSize: 49[m
[32m+[m[32m  m_StartGridSize: 64[m
   m_LastFolders:[m
[31m-  - Assets/Scripts[m
[32m+[m[32m  - Assets/PreFabs[m
   m_LastFoldersGridSize: -1[m
   m_LastProjectPath: D:\2019\AM\NM\Repo\fix2MobileTacticsGame\fixMobileTactics[m
   m_LockTracker:[m
     m_IsLocked: 0[m
   m_FolderTreeState:[m
     scrollPos: {x: 0, y: 0}[m
[31m-    m_SelectedIDs: 96390000[m
[31m-    m_LastClickedID: 14742[m
[31m-    m_ExpandedIDs: 000000007e390000803900008839000000ca9a3b[m
[32m+[m[32m    m_SelectedIDs: da390000[m
[32m+[m[32m    m_LastClickedID: 14810[m
[32m+[m[32m    m_ExpandedIDs: 000000001e360000203600002236000000ca9a3b[m
     m_RenameOverlay:[m
       m_UserAcceptedRename: 0[m
[31m-      m_Name: [m
[31m-      m_OriginalName: [m
[32m+[m[32m      m_Name: LanceFighter[m
[32m+[m[32m      m_OriginalName: LanceFighter[m
       m_EditFieldRect:[m
         serializedVersion: 2[m
         x: 0[m
         y: 0[m
         width: 0[m
         height: 0[m
[31m-      m_UserData: 0[m
[32m+[m[32m      m_UserData: 13922[m
       m_IsWaitingForDelay: 0[m
       m_IsRenaming: 0[m
[31m-      m_OriginalEventType: 11[m
[32m+[m[32m      m_OriginalEventType: 0[m
       m_IsRenamingFilename: 1[m
[31m-      m_ClientGUIView: {fileID: 0}[m
[32m+[m[32m      m_ClientGUIView: {fileID: 5}[m
     m_SearchString: [m
     m_CreateAssetUtility:[m
       m_EndAction: {fileID: 0}[m
[36m@@ -544,7 +575,7 @@[m [mMonoBehaviour:[m
     scrollPos: {x: 0, y: 0}[m
     m_SelectedIDs: [m
     m_LastClickedID: 0[m
[31m-    m_ExpandedIDs: 000000007e39000080390000[m
[32m+[m[32m    m_ExpandedIDs: 000000001e3600002036000022360000[m
     m_RenameOverlay:[m
       m_UserAcceptedRename: 0[m
       m_Name: [m
[36m@@ -572,7 +603,7 @@[m [mMonoBehaviour:[m
     m_SelectedInstanceIDs: [m
     m_LastClickedInstanceID: 0[m
     m_HadKeyboardFocusLastEvent: 1[m
[31m-    m_ExpandedInstanceIDs: c623000042380000c0370000[m
[32m+[m[32m    m_ExpandedInstanceIDs: c623000042380000c03700003a380000e0380000fe37000000000000[m
     m_RenameOverlay:[m
       m_UserAcceptedRename: 0[m
       m_Name: [m
[36m@@ -588,7 +619,7 @@[m [mMonoBehaviour:[m
       m_IsRenaming: 0[m
       m_OriginalEventType: 11[m
       m_IsRenamingFilename: 1[m
[31m-      m_ClientGUIView: {fileID: 5}[m
[32m+[m[32m      m_ClientGUIView: {fileID: 3}[m
     m_CreateAssetUtility:[m
       m_EndAction: {fileID: 0}[m
       m_InstanceID: 0[m
[36m@@ -597,10 +628,10 @@[m [mMonoBehaviour:[m
       m_ResourceFile: [m
     m_NewAssetIndexInList: -1[m
     m_ScrollPosition: {x: 0, y: 0}[m
[31m-    m_GridSize: 49[m
[32m+[m[32m    m_GridSize: 64[m
   m_SkipHiddenPackages: 0[m
[31m-  m_DirectoriesAreaWidth: 115[m
[31m---- !u!114 &16[m
[32m+[m[32m  m_DirectoriesAreaWidth: 151[m
[32m+[m[32m--- !u!114 &17[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -621,10 +652,10 @@[m [mMonoBehaviour:[m
     m_Tooltip: [m
   m_Pos:[m
     serializedVersion: 2[m
[31m-    x: 1367[m
[31m-    y: 73[m
[32m+[m[32m    x: 1366[m
[32m+[m[32m    y: 81[m
     width: 552[m
[31m-    height: 926[m
[32m+[m[32m    height: 917[m
   m_ViewDataDictionary: {fileID: 0}[m
   m_OpenAddComponentMenu: 0[m
   m_ObjectsLockedBeforeSerialization: [][m
[36m@@ -636,9 +667,9 @@[m [mMonoBehaviour:[m
     m_ControlHash: -371814159[m
     m_PrefName: Preview_InspectorPreview[m
   m_PreviewWindow: {fileID: 0}[m
[31m-  m_LastInspectedObjectInstanceID: 15706[m
[32m+[m[32m  m_LastInspectedObjectInstanceID: -1[m
   m_LastVerticalScrollValue: 0[m
[31m---- !u!114 &17[m
[32m+[m[32m--- !u!114 &18[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -659,17 +690,17 @@[m [mMonoBehaviour:[m
     m_Tooltip: [m
   m_Pos:[m
     serializedVersion: 2[m
[31m-    x: 0[m
[31m-    y: 73[m
[32m+[m[32m    x: -1[m
[32m+[m[32m    y: 81[m
     width: 404[m
[31m-    height: 552[m
[32m+[m[32m    height: 547[m
   m_ViewDataDictionary: {fileID: 0}[m
   m_SceneHierarchy:[m
     m_TreeViewState:[m
       scrollPos: {x: 0, y: 0}[m
[31m-      m_SelectedIDs: [m
[31m-      m_LastClickedID: 0[m
[31m-      m_ExpandedIDs: bef6ffff12f8ffff543b0000623b0000683b0000[m
[32m+[m[32m      m_SelectedIDs: 1eb7ffff[m
[32m+[m[32m      m_LastClickedID: -18658[m
[32m+[m[32m      m_ExpandedIDs: 14d4ffff5cf9ffff70fbffff[m
       m_RenameOverlay:[m
         m_UserAcceptedRename: 0[m
         m_Name: [m
[36m@@ -693,7 +724,7 @@[m [mMonoBehaviour:[m
       m_IsLocked: 0[m
     m_CurrentSortingName: TransformSorting[m
   m_WindowGUID: 87e011e872e7b6647b3a571d8870d95b[m
[31m---- !u!114 &18[m
[32m+[m[32m--- !u!114 &19[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -714,10 +745,10 @@[m [mMonoBehaviour:[m
     m_Tooltip: [m
   m_Pos:[m
     serializedVersion: 2[m
[31m-    x: 405[m
[31m-    y: 73[m
[32m+[m[32m    x: 404[m
[32m+[m[32m    y: 81[m
     width: 960[m
[31m-    height: 552[m
[32m+[m[32m    height: 547[m
   m_ViewDataDictionary: {fileID: 0}[m
   m_ShowContextualTools: 0[m
   m_WindowGUID: 49a4c1af5db17104ba7c089bc4ed4e01[m
[36m@@ -729,9 +760,9 @@[m [mMonoBehaviour:[m
   m_PlayAudio: 0[m
   m_AudioPlay: 0[m
   m_Position:[m
[31m-    m_Target: {x: -18.304512, y: 19.34561, z: -121.89844}[m
[32m+[m[32m    m_Target: {x: 333.5282, y: 340.04346, z: -743}[m
     speed: 2[m
[31m-    m_Value: {x: -18.304512, y: 19.34561, z: -121.89844}[m
[32m+[m[32m    m_Value: {x: 333.5282, y: 340.04346, z: -743}[m
   m_RenderMode: 0[m
   m_CameraMode:[m
     drawMode: 0[m
[36m@@ -781,9 +812,9 @@[m [mMonoBehaviour:[m
     speed: 2[m
     m_Value: {x: 0, y: 0, z: 0, w: 1}[m
   m_Size:[m
[31m-    m_Target: 18.65286[m
[32m+[m[32m    m_Target: 560.985[m
     speed: 2[m
[31m-    m_Value: 18.65286[m
[32m+[m[32m    m_Value: 560.985[m
   m_Ortho:[m
     m_Target: 1[m
     speed: 2[m
[36m@@ -808,7 +839,7 @@[m [mMonoBehaviour:[m
   m_SceneVisActive: 1[m
   m_LastLockedObject: {fileID: 0}[m
   m_ViewIsLockedToObject: 0[m
[31m---- !u!114 &19[m
[32m+[m[32m--- !u!114 &20[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[36m@@ -829,10 +860,10 @@[m [mMonoBehaviour:[m
     m_Tooltip: [m
   m_Pos:[m
     serializedVersion: 2[m
[31m-    x: 405[m
[31m-    y: 73[m
[32m+[m[32m    x: 404[m
[32m+[m[32m    y: 81[m
     width: 960[m
[31m-    height: 552[m
[32m+[m[32m    height: 547[m
   m_ViewDataDictionary: {fileID: 0}[m
   m_SerializedViewsNames: [][m
   m_SerializedViewsValues: [][m
[36m@@ -840,7 +871,7 @@[m [mMonoBehaviour:[m
   m_ShowGizmos: 0[m
   m_TargetDisplay: 0[m
   m_ClearColor: {r: 0, g: 0, b: 0, a: 0}[m
[31m-  m_TargetSize: {x: 944, y: 531}[m
[32m+[m[32m  m_TargetSize: {x: 935, y: 526}[m
   m_TextureFilterMode: 0[m
   m_TextureHideFlags: 61[m
   m_RenderIMGUI: 1[m
[36m@@ -854,10 +885,10 @@[m [mMonoBehaviour:[m
     m_VRangeLocked: 0[m
     hZoomLockedByDefault: 0[m
     vZoomLockedByDefault: 0[m
[31m-    m_HBaseRangeMin: -472[m
[31m-    m_HBaseRangeMax: 472[m
[31m-    m_VBaseRangeMin: -265.5[m
[31m-    m_VBaseRangeMax: 265.5[m
[32m+[m[32m    m_HBaseRangeMin: -467.5[m
[32m+[m[32m    m_HBaseRangeMax: 467.5[m
[32m+[m[32m    m_VBaseRangeMin: -263[m
[32m+[m[32m    m_VBaseRangeMax: 263[m
     m_HAllowExceedBaseRangeMin: 1[m
     m_HAllowExceedBaseRangeMax: 1[m
     m_VAllowExceedBaseRangeMin: 1[m
[36m@@ -866,7 +897,7 @@[m [mMonoBehaviour:[m
     m_HSlider: 0[m
     m_VSlider: 0[m
     m_IgnoreScrollWheelUntilClicked: 0[m
[31m-    m_EnableMouseInput: 1[m
[32m+[m[32m    m_EnableMouseInput: 0[m
     m_EnableSliderZoomHorizontal: 0[m
     m_EnableSliderZoomVertical: 0[m
     m_UniformScale: 1[m
[36m@@ -876,9 +907,9 @@[m [mMonoBehaviour:[m
       x: 0[m
       y: 21[m
       width: 960[m
[31m-      height: 531[m
[32m+[m[32m      height: 526[m
     m_Scale: {x: 1, y: 1}[m
[31m-    m_Translation: {x: 480, y: 265.5}[m
[32m+[m[32m    m_Translation: {x: 480, y: 263}[m
     m_MarginLeft: 0[m
     m_MarginRight: 0[m
     m_MarginTop: 0[m
[36m@@ -886,18 +917,18 @@[m [mMonoBehaviour:[m
     m_LastShownAreaInsideMargins:[m
       serializedVersion: 2[m
       x: -480[m
[31m-      y: -265.5[m
[32m+[m[32m      y: -263[m
       width: 960[m
[31m-      height: 531[m
[32m+[m[32m      height: 526[m
     m_MinimalGUI: 1[m
   m_defaultScale: 1[m
[31m-  m_LastWindowPixelSize: {x: 960, y: 552}[m
[32m+[m[32m  m_LastWindowPixelSize: {x: 960, y: 547}[m
   m_ClearInEditMode: 1[m
   m_NoCameraWarning: 1[m
   m_LowResolutionForAspectRatios: 01000000000000000000[m
   m_XRRenderMode: 0[m
   m_RenderTexture: {fileID: 0}[m
[31m---- !u!114 &20[m
[32m+[m[32m--- !u!114 &21[m
 MonoBehaviour:[m
   m_ObjectHideFlags: 52[m
   m_CorrespondingSourceObject: {fileID: 0}[m
[1mdiff --git a/fixMobileTactics/Library/GridBrush/UnityEditor.Tilemaps.GridBrush.asset b/fixMobileTactics/Library/GridBrush/UnityEditor.Tilemaps.GridBrush.asset[m
[1mindex 97946c3..376af8f 100644[m
[1m--- a/fixMobileTactics/Library/GridBrush/UnityEditor.Tilemaps.GridBrush.asset[m
[1m+++ b/fixMobileTactics/Library/GridBrush/UnityEditor.Tilemaps.GridBrush.asset[m
[36m@@ -13,7 +13,7 @@[m [mMonoBehaviour:[m
   m_Name: Default Brush[m
   m_EditorClassIdentifier: [m
   m_Cells:[m
[31m-  - m_Tile: {fileID: 11400000, guid: f5af92708bc6c1d45a41e8eec933204a, type: 2}[m
[32m+[m[32m  - m_Tile: {fileID: 0}[m
     m_Matrix:[m
       e00: 1[m
       e01: 0[m
[1mdiff --git a/fixMobileTactics/Library/InspectorExpandedItems.asset b/fixMobileTactics/Library/InspectorExpandedItems.asset[m
[1mindex 68c639d..043a050 100644[m
Binary files a/fixMobileTactics/Library/InspectorExpandedItems.asset and b/fixMobileTactics/Library/InspectorExpandedItems.asset differ
[1mdiff --git a/fixMobileTactics/Library/SceneVisibilityState.asset b/fixMobileTactics/Library/SceneVisibilityState.asset[m
[1mindex be6d233..313564e 100644[m
Binary files a/fixMobileTactics/Library/SceneVisibilityState.asset and b/fixMobileTactics/Library/SceneVisibilityState.asset differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/1/1656a97d2b03d6fef16ccd1ba1eae930.bin b/fixMobileTactics/Library/ShaderCache/1/1656a97d2b03d6fef16ccd1ba1eae930.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..800fb87[m
Binary files /dev/null and b/fixMobileTactics/Library/ShaderCache/1/1656a97d2b03d6fef16ccd1ba1eae930.bin differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/2/2395ee98e264aa6fa6447b4436d8b68c.bin b/fixMobileTactics/Library/ShaderCache/2/2395ee98e264aa6fa6447b4436d8b68c.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..1c65340[m
Binary files /dev/null and b/fixMobileTactics/Library/ShaderCache/2/2395ee98e264aa6fa6447b4436d8b68c.bin differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/7/74e8dd6c8690d19349f482d9334738a2.bin b/fixMobileTactics/Library/ShaderCache/7/74e8dd6c8690d19349f482d9334738a2.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..c06d4dc[m
Binary files /dev/null and b/fixMobileTactics/Library/ShaderCache/7/74e8dd6c8690d19349f482d9334738a2.bin differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/7/76db278f1bdbefefa38062ded9fe4464.bin b/fixMobileTactics/Library/ShaderCache/7/76db278f1bdbefefa38062ded9fe4464.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..7066067[m
Binary files /dev/null and b/fixMobileTactics/Library/ShaderCache/7/76db278f1bdbefefa38062ded9fe4464.bin differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/8/813b8969526729394a0c92f9f9c0537e.bin b/fixMobileTactics/Library/ShaderCache/8/813b8969526729394a0c92f9f9c0537e.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..03f6162[m
Binary files /dev/null and b/fixMobileTactics/Library/ShaderCache/8/813b8969526729394a0c92f9f9c0537e.bin differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/EditorEncounteredVariants b/fixMobileTactics/Library/ShaderCache/EditorEncounteredVariants[m
[1mindex 18ff14e..60b7f3f 100644[m
Binary files a/fixMobileTactics/Library/ShaderCache/EditorEncounteredVariants and b/fixMobileTactics/Library/ShaderCache/EditorEncounteredVariants differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/b/b8e5236ff6890d2d6172bb14ad309b91.bin b/fixMobileTactics/Library/ShaderCache/b/b8e5236ff6890d2d6172bb14ad309b91.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..2158f4c[m
Binary files /dev/null and b/fixMobileTactics/Library/ShaderCache/b/b8e5236ff6890d2d6172bb14ad309b91.bin differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/c/c868d5e07d73c242965fae0a3e3da05a.bin b/fixMobileTactics/Library/ShaderCache/c/c868d5e07d73c242965fae0a3e3da05a.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..f53661d[m
Binary files /dev/null and b/fixMobileTactics/Library/ShaderCache/c/c868d5e07d73c242965fae0a3e3da05a.bin differ
[1mdiff --git a/fixMobileTactics/Library/ShaderCache/f/fb22dd777129c909732feb4e1ef83dc5.bin b/fixMobileTactics/Library/ShaderCache/f/fb22dd777129c909732feb4e1ef83dc5.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..3f1c844[m
Binary files /dev/null and b/fixMobileTactics/Library/ShaderCache/f/fb22dd777129c909732feb4e1ef83dc5.bin differ
[1mdiff --git a/fixMobileTactics/Library/SourceAssetDB b/fixMobileTactics/Library/SourceAssetDB[m
[1mindex 164a19a..15145d6 100644[m
Binary files a/fixMobileTactics/Library/SourceAssetDB and b/fixMobileTactics/Library/SourceAssetDB differ
[1mdiff --git a/fixMobileTactics/Library/StateCache/SceneView/49a4c1-mainStage.json b/fixMobileTactics/Library/StateCache/SceneView/49a4c1-mainStage.json[m
[1mindex c6abdc2..27c1bb2 100644[m
[1m--- a/fixMobileTactics/Library/StateCache/SceneView/49a4c1-mainStage.json[m
[1m+++ b/fixMobileTactics/Library/StateCache/SceneView/49a4c1-mainStage.json[m
[36m@@ -1 +1 @@[m
[31m-﻿{"cameraMode":{"drawMode":0,"name":"Shaded","section":"Shading Mode"},"sceneLighting":true,"audioPlay":false,"sceneViewState":{"showFog":true,"showMaterialUpdate":false,"showSkybox":true,"showFlares":true,"showImageEffects":true,"showParticleSystems":true},"in2DMode":true,"pivot":{"x":-18.30451202392578,"y":19.345609664916993,"z":-121.8984375},"rotation":{"x":0.0,"y":0.0,"z":0.0,"w":1.0},"size":18.652860641479493,"orthographic":true}[m
\ No newline at end of file[m
[32m+[m[32m﻿{"cameraMode":{"drawMode":0,"name":"Shaded","section":"Shading Mode"},"sceneLighting":true,"audioPlay":false,"sceneViewState":{"showFog":true,"showMaterialUpdate":false,"showSkybox":true,"showFlares":true,"showImageEffects":true,"showParticleSystems":true},"in2DMode":true,"pivot":{"x":333.5281982421875,"y":340.04345703125,"z":-743.0},"rotation":{"x":0.0,"y":0.0,"z":0.0,"w":1.0},"size":560.9849853515625,"orthographic":true}[m
\ No newline at end of file[m
[1mdiff --git a/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe0.log b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe0.log[m
[1mindex a17c0fe..064da6f 100644[m
[1m--- a/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe0.log[m
[1m+++ b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe0.log[m
[36m@@ -1,2 +1,10 @@[m
 Base path: 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data', plugins path 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data/PlaybackEngines'[m
 Cmd: initializeCompiler[m
[32m+[m[32mCmd: compileSnippet[m
[32m+[m[32m  api=4 type=0 insize=2295 outsize=858 kw= pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32mCmd: compileSnippet[m
[32m+[m[32m  api=4 type=1 insize=2295 outsize=446 kw= pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32mCmd: disassembleShader[m
[32m+[m[32m  api=4 insize=858 outsize=1793 ok=1[m
[32m+[m[32mCmd: disassembleShader[m
[32m+[m[32m  api=4 insize=446 outsize=1186 ok=1[m
[1mdiff --git a/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe1.log b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe1.log[m
[1mindex 56ca6ee..63e75e6 100644[m
[1m--- a/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe1.log[m
[1m+++ b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe1.log[m
[36m@@ -1,4 +1,6 @@[m
 Base path: 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data', plugins path 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data/PlaybackEngines'[m
 Cmd: initializeCompiler[m
 Cmd: compileSnippet[m
[31m-  api=4 type=0 insize=731 outsize=858 kw=ETC1_EXTERNAL_ALPHA pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32m  api=4 type=0 insize=2295 outsize=858 kw=UNITY_UI_ALPHACLIP pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32mCmd: disassembleShader[m
[32m+[m[32m  api=4 insize=858 outsize=1793 ok=1[m
[1mdiff --git a/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe2.log b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe2.log[m
[1mindex e6ed8ba..2a66f88 100644[m
[1m--- a/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe2.log[m
[1m+++ b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe2.log[m
[36m@@ -1,4 +1,10 @@[m
 Base path: 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data', plugins path 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data/PlaybackEngines'[m
 Cmd: initializeCompiler[m
 Cmd: compileSnippet[m
[31m-  api=4 type=1 insize=731 outsize=574 kw=ETC1_EXTERNAL_ALPHA pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32m  api=4 type=0 insize=2295 outsize=858 kw=UNITY_UI_CLIP_RECT pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32mCmd: disassembleShader[m
[32m+[m[32m  api=4 insize=858 outsize=1793 ok=1[m
[32m+[m[32mCmd: compileSnippet[m
[32m+[m[32m  api=4 type=1 insize=2295 outsize=762 kw=UNITY_UI_CLIP_RECT UNITY_UI_ALPHACLIP pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32mCmd: disassembleShader[m
[32m+[m[32m  api=4 insize=762 outsize=1601 ok=1[m
[1mdiff --git a/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe3.log b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe3.log[m
[1mnew file mode 100644[m
[1mindex 0000000..bc8def5[m
[1m--- /dev/null[m
[1m+++ b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe3.log[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32mBase path: 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data', plugins path 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data/PlaybackEngines'[m
[32m+[m[32mCmd: initializeCompiler[m
[32m+[m[32mCmd: compileSnippet[m
[32m+[m[32m  api=4 type=0 insize=2295 outsize=858 kw=UNITY_UI_CLIP_RECT UNITY_UI_ALPHACLIP pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32mCmd: disassembleShader[m
[32m+[m[32m  api=4 insize=858 outsize=1793 ok=1[m
[32m+[m[32mCmd: compileSnippet[m
[32m+[m[32m  api=4 type=1 insize=2295 outsize=666 kw=UNITY_UI_CLIP_RECT pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32mCmd: disassembleShader[m
[32m+[m[32m  api=4 insize=666 outsize=1484 ok=1[m
[1mdiff --git a/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe4.log b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe4.log[m
[1mnew file mode 100644[m
[1mindex 0000000..d83e05e[m
[1m--- /dev/null[m
[1m+++ b/fixMobileTactics/Library/shadercompiler-UnityShaderCompiler.exe4.log[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32mBase path: 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data', plugins path 'C:/Program Files/Unity/Hub/Editor/2019.3.0f3/Editor/Data/PlaybackEngines'[m
[32m+[m[32mCmd: initializeCompiler[m
[32m+[m[32mCmd: compileSnippet[m
[32m+[m[32m  api=4 type=1 insize=2295 outsize=542 kw=UNITY_UI_ALPHACLIP pd=UNITY_ENABLE_REFLECTION_BUFFERS UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS UNITY_PBS_USE_BRDF1 UNITY_SPECCUBE_BOX_PROJECTION UNITY_SPECCUBE_BLENDING UNITY_ENABLE_DETAIL_NORMALMAP SHADER_API_DESKTOP UNITY_COLORSPACE_GAMMA UNITY_LIGHT_PROBE_PROXY_VOLUME UNITY_LIGHTMAP_FULL_HDR ok=1[m
[32m+[m[32mCmd: disassembleShader[m
[32m+[m[32m  api=4 insize=542 outsize=1309 ok=1[m
[1mdiff --git a/fixMobileTactics/ProjectSettings/TagManager.asset b/fixMobileTactics/ProjectSettings/TagManager.asset[m
[1mindex 1c92a78..decb9f9 100644[m
[1m--- a/fixMobileTactics/ProjectSettings/TagManager.asset[m
[1m+++ b/fixMobileTactics/ProjectSettings/TagManager.asset[m
[36m@@ -16,8 +16,8 @@[m [mTagManager:[m
   - [m
   - [m
   - [m
[31m-  - [m
[31m-  - [m
[32m+[m[32m  - Player[m
[32m+[m[32m  - Enemy[m
   - [m
   - [m
   - [m
[36m@@ -41,3 +41,6 @@[m [mTagManager:[m
   - name: Default[m
     uniqueID: 0[m
     locked: 0[m
[32m+[m[32m  - name: Above Default[m
[32m+[m[32m    uniqueID: 2860238689[m
[32m+[m[32m    locked: 0[m
