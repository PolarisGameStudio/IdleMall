using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("stockCurrent", "stockLimit")]
	public class ES3UserType_StockScript : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_StockScript() : base(typeof(StockScript)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (StockScript)obj;
			
			writer.WritePrivateField("stockCurrent", instance);
			writer.WritePrivateField("stockLimit", instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (StockScript)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "stockCurrent":
					reader.SetPrivateField("stockCurrent", reader.Read<System.Int32>(), instance);
					break;
					case "stockLimit":
					reader.SetPrivateField("stockLimit", reader.Read<System.Int32>(), instance);
					break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_StockScriptArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_StockScriptArray() : base(typeof(StockScript[]), ES3UserType_StockScript.Instance)
		{
			Instance = this;
		}
	}
}