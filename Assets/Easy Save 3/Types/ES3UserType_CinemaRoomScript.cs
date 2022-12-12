using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("unlocked", "off", "timer")]
	public class ES3UserType_CinemaRoomScript : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_CinemaRoomScript() : base(typeof(CinemaRoomScript)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (CinemaRoomScript)obj;
			
			writer.WriteProperty("unlocked", instance.unlocked, ES3Type_bool.Instance);
			writer.WriteProperty("off", instance.off, ES3Type_bool.Instance);
			writer.WriteProperty("timer", instance.timer, ES3Type_float.Instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (CinemaRoomScript)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "unlocked":
						instance.unlocked = reader.Read<System.Boolean>(ES3Type_bool.Instance);
						break;
					case "off":
						instance.off = reader.Read<System.Boolean>(ES3Type_bool.Instance);
						break;
					case "timer":
						instance.timer = reader.Read<System.Single>(ES3Type_float.Instance);
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_CinemaRoomScriptArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_CinemaRoomScriptArray() : base(typeof(CinemaRoomScript[]), ES3UserType_CinemaRoomScript.Instance)
		{
			Instance = this;
		}
	}
}