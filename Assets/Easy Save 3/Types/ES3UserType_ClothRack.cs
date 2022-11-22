using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("amount", "maxAmount")]
	public class ES3UserType_ClothRack : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_ClothRack() : base(typeof(ClothRack)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (ClothRack)obj;
			
			writer.WriteProperty("amount", instance.amount, ES3Type_int.Instance);
			writer.WriteProperty("maxAmount", instance.maxAmount, ES3Type_int.Instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (ClothRack)obj;
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


	public class ES3UserType_ClothRackArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_ClothRackArray() : base(typeof(ClothRack[]), ES3UserType_ClothRack.Instance)
		{
			Instance = this;
		}
	}
}