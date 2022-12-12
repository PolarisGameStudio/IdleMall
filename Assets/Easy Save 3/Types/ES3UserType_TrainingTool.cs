using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("protCount", "type", "amount", "maxAmount")]
	public class ES3UserType_TrainingTool : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_TrainingTool() : base(typeof(TrainingTool)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (TrainingTool)obj;
			
			writer.WriteProperty("protCount", instance.protCount, ES3Type_int.Instance);
			writer.WriteProperty("type", instance.type, ES3Type_enum.Instance);
			writer.WriteProperty("amount", instance.amount, ES3Type_int.Instance);
			writer.WriteProperty("maxAmount", instance.maxAmount, ES3Type_int.Instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (TrainingTool)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "protCount":
						instance.protCount = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "type":
						instance.type = reader.Read<ShopType>(ES3Type_enum.Instance);
						break;
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


	public class ES3UserType_TrainingToolArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_TrainingToolArray() : base(typeof(TrainingTool[]), ES3UserType_TrainingTool.Instance)
		{
			Instance = this;
		}
	}
}