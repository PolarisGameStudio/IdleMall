using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("upgradeUIs")]
	public class ES3UserType_UpgradeHandler : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_UpgradeHandler() : base(typeof(UpgradeHandler)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (UpgradeHandler)obj;
			
			writer.WritePrivateField("upgradeUIs", instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (UpgradeHandler)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "upgradeUIs":
					reader.SetPrivateField("upgradeUIs", reader.Read<System.Collections.Generic.List<UpgradeUI>>(), instance);
					break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_UpgradeHandlerArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_UpgradeHandlerArray() : base(typeof(UpgradeHandler[]), ES3UserType_UpgradeHandler.Instance)
		{
			Instance = this;
		}
	}
}