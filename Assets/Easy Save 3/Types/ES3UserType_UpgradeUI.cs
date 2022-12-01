using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("type", "cashierCount", "workerCount", "maxCashierCount", "maxWorkerCount", "workerLevel", "canvas", "cashierButton", "helperButton", "helperUpgradeButton", "cashierPrice", "helperPrice", "helperUpgradePrice", "cashierText", "helperText", "helperUpgradeText")]
	public class ES3UserType_UpgradeUI : ES3ObjectType
	{
		public static ES3Type Instance = null;

		public ES3UserType_UpgradeUI() : base(typeof(UpgradeUI)){ Instance = this; priority = 1; }


		protected override void WriteObject(object obj, ES3Writer writer)
		{
			var instance = (UpgradeUI)obj;
			
			writer.WriteProperty("type", instance.type, ES3Type_enum.Instance);
			writer.WriteProperty("cashierCount", instance.cashierCount, ES3Type_int.Instance);
			writer.WriteProperty("workerCount", instance.workerCount, ES3Type_int.Instance);
			writer.WriteProperty("maxCashierCount", instance.maxCashierCount, ES3Type_int.Instance);
			writer.WriteProperty("maxWorkerCount", instance.maxWorkerCount, ES3Type_int.Instance);
			writer.WriteProperty("workerLevel", instance.workerLevel, ES3Type_int.Instance);
			writer.WritePropertyByRef("canvas", instance.canvas);
			writer.WritePropertyByRef("cashierButton", instance.cashierButton);
			writer.WritePropertyByRef("helperButton", instance.helperButton);
			writer.WritePropertyByRef("helperUpgradeButton", instance.helperUpgradeButton);
			writer.WritePropertyByRef("cashierPrice", instance.cashierPrice);
			writer.WritePropertyByRef("helperPrice", instance.helperPrice);
			writer.WritePropertyByRef("helperUpgradePrice", instance.helperUpgradePrice);
			writer.WritePropertyByRef("cashierText", instance.cashierText);
			writer.WritePropertyByRef("helperText", instance.helperText);
			writer.WritePropertyByRef("helperUpgradeText", instance.helperUpgradeText);
		}

		protected override void ReadObject<T>(ES3Reader reader, object obj)
		{
			var instance = (UpgradeUI)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "type":
						instance.type = reader.Read<ShopType>(ES3Type_enum.Instance);
						break;
					case "cashierCount":
						instance.cashierCount = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "workerCount":
						instance.workerCount = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "maxCashierCount":
						instance.maxCashierCount = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "maxWorkerCount":
						instance.maxWorkerCount = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "workerLevel":
						instance.workerLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "canvas":
						instance.canvas = reader.Read<UnityEngine.CanvasGroup>();
						break;
					case "cashierButton":
						instance.cashierButton = reader.Read<UnityEngine.UI.Button>();
						break;
					case "helperButton":
						instance.helperButton = reader.Read<UnityEngine.UI.Button>();
						break;
					case "helperUpgradeButton":
						instance.helperUpgradeButton = reader.Read<UnityEngine.UI.Button>();
						break;
					case "cashierPrice":
						instance.cashierPrice = reader.Read<TMPro.TMP_Text>();
						break;
					case "helperPrice":
						instance.helperPrice = reader.Read<TMPro.TMP_Text>();
						break;
					case "helperUpgradePrice":
						instance.helperUpgradePrice = reader.Read<TMPro.TMP_Text>();
						break;
					case "cashierText":
						instance.cashierText = reader.Read<TMPro.TMP_Text>();
						break;
					case "helperText":
						instance.helperText = reader.Read<TMPro.TMP_Text>();
						break;
					case "helperUpgradeText":
						instance.helperUpgradeText = reader.Read<TMPro.TMP_Text>();
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}

		protected override object ReadObject<T>(ES3Reader reader)
		{
			var instance = new UpgradeUI();
			ReadObject<T>(reader, instance);
			return instance;
		}
	}


	public class ES3UserType_UpgradeUIArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_UpgradeUIArray() : base(typeof(UpgradeUI[]), ES3UserType_UpgradeUI.Instance)
		{
			Instance = this;
		}
	}
}