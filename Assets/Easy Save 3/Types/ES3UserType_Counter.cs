using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("money")]
	public class ES3UserType_Counter : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_Counter() : base(typeof(Counter)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (Counter)obj;
			
			writer.WriteProperty("money", instance.money);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (Counter)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "money":
						instance.money = reader.Read<System.Collections.Generic.List<MoneyScript>>();
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_CounterArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_CounterArray() : base(typeof(Counter[]), ES3UserType_Counter.Instance)
		{
			Instance = this;
		}
	}
}