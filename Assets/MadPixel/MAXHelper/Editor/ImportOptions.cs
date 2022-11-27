using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace MAXHelper.Editor {
    [InitializeOnLoad]
    public class ImportOptions : MonoBehaviour {
        private const string MAXSettingsPath = "Assets/MadPixel/MAXHelper/Configs";
        private const string MAXSettingsAssetName = "MAXCustomSettings.asset";
        private const string ImportSettinsName = "ImportOptions.asset";
        private const string AdsManagerPrefabPath = "Assets/MadPixel/MAXHelper/Ads.prefab";

        static ImportOptions() {
            CheckForImport();
        }

        public static void CheckForImport() {
            if (!EditorPrefs.HasKey("CheckedForInmportedAlready")) {
                if (!Directory.Exists($"{MAXSettingsPath}")) {
                    Debug.LogError($"Directory {MAXSettingsPath} doesn't exist. Did you move MAXHelper directory somewhere else?");
                } else {
                    MAXCustomSettings CustomSettingsAsset = AssetDatabase.LoadAssetAtPath<MAXCustomSettings>($"{MAXSettingsPath}/{MAXSettingsAssetName}");
                    if (CustomSettingsAsset != null) {
                        //Debug.Log("MAXCustomSettings already exist");
                        return;
                    }

                    MAXCustomSettings ImportSettings = AssetDatabase.LoadAssetAtPath<MAXCustomSettings>($"{MAXSettingsPath}/{ImportSettinsName}");
                    if (ImportSettings == null) {
                        Debug.LogError($"No ImportOptions at {MAXSettingsPath}! Did you move MAXHelper directory somewhere else?");
                        return;
                    }

                    CustomSettingsAsset = (MAXCustomSettings)ScriptableObject.CreateInstance(typeof(MAXCustomSettings));

                    CustomSettingsAsset.name = MAXSettingsAssetName;
                    CustomSettingsAsset.bUseBanners = ImportSettings.bUseBanners;
                    CustomSettingsAsset.bUseInters = ImportSettings.bUseInters;
                    CustomSettingsAsset.bUseRewardeds = ImportSettings.bUseRewardeds;
                    CustomSettingsAsset.BannerID = ImportSettings.BannerID;
                    CustomSettingsAsset.BannerID_IOS = ImportSettings.BannerID_IOS;
                    CustomSettingsAsset.BannerBackground = ImportSettings.BannerBackground;
                    CustomSettingsAsset.InterstitialID = ImportSettings.InterstitialID;
                    CustomSettingsAsset.InterstitialID_IOS = ImportSettings.InterstitialID_IOS;
                    CustomSettingsAsset.RewardedID = ImportSettings.RewardedID;
                    CustomSettingsAsset.RewardedID_IOS = ImportSettings.RewardedID_IOS;
                    CustomSettingsAsset.SDKKey = ImportSettings.SDKKey;
                    CustomSettingsAsset.bShowMediationDebugger = ImportSettings.bShowMediationDebugger;

                    AssetDatabase.CreateAsset(CustomSettingsAsset, $"{MAXSettingsPath}/{MAXSettingsAssetName}");

                    AdsManager AdsManagerPrefab = AssetDatabase.LoadAssetAtPath<AdsManager>($"{AdsManagerPrefabPath}");
                    if (AdsManagerPrefab != null) {
                        AdsManagerPrefab.SetCustomSettings(CustomSettingsAsset);
                    }

                    AssetDatabase.SaveAssets();

                    Debug.Log($"MAXCustomSettings for the game created");

                    AssetDatabase.Refresh();
                }
            }
        }
    }
}
