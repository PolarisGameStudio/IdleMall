using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("built", "capacity", "mat")]
	public class ES3UserType_BuyObject : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_BuyObject() : base(typeof(BuyObject)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (BuyObject)obj;
			
			writer.WritePrivateField("built", instance);
			writer.WritePrivateField("capacity", instance);
			writer.WritePrivateFieldByRef("mat", instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (BuyObject)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "built":
					reader.SetPrivateField("built", reader.Read<System.Boolean>(), instance);
					break;
					case "capacity":
					reader.SetPrivateField("capacity", reader.Read<System.Int32>(), instance);
					break;
					case "mat":
					reader.SetPrivateField("mat", reader.Read<UnityEngine.Material>(), instance);
					break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_BuyObjectArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_BuyObjectArray() : base(typeof(BuyObject[]), ES3UserType_BuyObject.Instance)
		{
			Instance = this;
		}
	}
}