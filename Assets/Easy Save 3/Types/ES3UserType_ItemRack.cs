using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("amount", "maxAmount")]
	public class ES3UserType_ItemRack : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_ItemRack() : base(typeof(ItemRack)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (ItemRack)obj;
			
			writer.WriteProperty("amount", instance.amount, ES3Type_int.Instance);
			writer.WriteProperty("maxAmount", instance.maxAmount, ES3Type_int.Instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (ItemRack)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "amount":
						instance.amount = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "maxAmount":
						instance.maxAmount = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_ItemRackArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_ItemRackArray() : base(typeof(ItemRack[]), ES3UserType_ItemRack.Instance)
		{
			Instance = this;
		}
	}
}