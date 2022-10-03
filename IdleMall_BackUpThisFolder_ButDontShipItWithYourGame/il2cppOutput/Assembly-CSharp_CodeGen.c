#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 IYandexAppMetrica AppMetrica::get_Instance()
extern void AppMetrica_get_Instance_m5EB615F21606FEDEF7F6B8B0319689ECC158B4C7 (void);
// 0x00000002 System.Void AppMetrica::Awake()
extern void AppMetrica_Awake_m5DBDA7E169B0B6D729898C98AD1CAC678E7B763C (void);
// 0x00000003 System.Void AppMetrica::Start()
extern void AppMetrica_Start_m4227B9206EF0DE1753E4A5687402C6E9DAF69EFF (void);
// 0x00000004 System.Void AppMetrica::OnEnable()
extern void AppMetrica_OnEnable_m55694E9FE00FF0D66D32C5EC5EF7A39DA0EF6319 (void);
// 0x00000005 System.Void AppMetrica::OnDisable()
extern void AppMetrica_OnDisable_m0FC036E0B92B985040D9E200EB36876216E561F2 (void);
// 0x00000006 System.Void AppMetrica::OnApplicationPause(System.Boolean)
extern void AppMetrica_OnApplicationPause_m6F8A17B737F2D9D3E3B1DC458B65B9A844635634 (void);
// 0x00000007 System.Void AppMetrica::SetupMetrica()
extern void AppMetrica_SetupMetrica_m501B61D5B792CCF44AA9E1CCB954BE9EF8742ACE (void);
// 0x00000008 System.Void AppMetrica::HandleLog(System.String,System.String,UnityEngine.LogType)
extern void AppMetrica_HandleLog_m5854426FF167D14B0A3E74EF494CC30CF78861AB (void);
// 0x00000009 System.Void AppMetrica::.ctor()
extern void AppMetrica__ctor_m5B7D252993797CB916179B095B80914B247365D6 (void);
// 0x0000000A System.Void AppMetrica::.cctor()
extern void AppMetrica__cctor_mD201631287959F894644DAAE68F3BF8D3B3DD324 (void);
// 0x0000000B System.Void BaseYandexAppMetrica::add_OnActivation(ConfigUpdateHandler)
extern void BaseYandexAppMetrica_add_OnActivation_mE925443792B17ACC016ABB93EF54098121976705 (void);
// 0x0000000C System.Void BaseYandexAppMetrica::remove_OnActivation(ConfigUpdateHandler)
extern void BaseYandexAppMetrica_remove_OnActivation_m6E0C02E4696C797132351E2B88299A04311D2C30 (void);
// 0x0000000D System.Nullable`1<YandexAppMetricaConfig> BaseYandexAppMetrica::get_ActivationConfig()
extern void BaseYandexAppMetrica_get_ActivationConfig_m6F9B498B12BBF9EF2879103B2BE60C1A36E33E7B (void);
// 0x0000000E System.Void BaseYandexAppMetrica::set_ActivationConfig(System.Nullable`1<YandexAppMetricaConfig>)
extern void BaseYandexAppMetrica_set_ActivationConfig_mA9EC61A5043E97D3389810FA1CC98C4D7D679396 (void);
// 0x0000000F System.Void BaseYandexAppMetrica::ActivateWithConfiguration(YandexAppMetricaConfig)
extern void BaseYandexAppMetrica_ActivateWithConfiguration_mB7480711FBEBF9C945C5C10826D23FE1F2BD5F46 (void);
// 0x00000010 System.Void BaseYandexAppMetrica::ResumeSession()
// 0x00000011 System.Void BaseYandexAppMetrica::PauseSession()
// 0x00000012 System.Void BaseYandexAppMetrica::ReportEvent(System.String)
// 0x00000013 System.Void BaseYandexAppMetrica::ReportEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// 0x00000014 System.Void BaseYandexAppMetrica::ReportEvent(System.String,System.String)
// 0x00000015 System.Void BaseYandexAppMetrica::ReportError(System.String,System.String)
// 0x00000016 System.Void BaseYandexAppMetrica::ReportError(System.String,System.String,System.String)
// 0x00000017 System.Void BaseYandexAppMetrica::ReportError(System.String,System.String,System.Exception)
// 0x00000018 System.Void BaseYandexAppMetrica::ReportError(System.String,System.String,YandexAppMetricaErrorDetails)
// 0x00000019 System.Void BaseYandexAppMetrica::ReportError(System.Exception,System.String)
// 0x0000001A System.Void BaseYandexAppMetrica::ReportError(YandexAppMetricaErrorDetails,System.String)
// 0x0000001B System.Void BaseYandexAppMetrica::ReportUnhandledException(System.Exception)
// 0x0000001C System.Void BaseYandexAppMetrica::ReportUnhandledException(YandexAppMetricaErrorDetails)
// 0x0000001D System.Void BaseYandexAppMetrica::ReportErrorFromLogCallback(System.String,System.String)
// 0x0000001E System.Void BaseYandexAppMetrica::SetLocationTracking(System.Boolean)
// 0x0000001F System.Void BaseYandexAppMetrica::SetLocation(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
// 0x00000020 System.String BaseYandexAppMetrica::get_LibraryVersion()
// 0x00000021 System.Int32 BaseYandexAppMetrica::get_LibraryApiLevel()
// 0x00000022 System.Void BaseYandexAppMetrica::SetUserProfileID(System.String)
// 0x00000023 System.Void BaseYandexAppMetrica::ReportUserProfile(YandexAppMetricaUserProfile)
// 0x00000024 System.Void BaseYandexAppMetrica::ReportRevenue(YandexAppMetricaRevenue)
// 0x00000025 System.Void BaseYandexAppMetrica::SetStatisticsSending(System.Boolean)
// 0x00000026 System.Void BaseYandexAppMetrica::SendEventsBuffer()
// 0x00000027 System.Void BaseYandexAppMetrica::RequestAppMetricaDeviceID(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
// 0x00000028 System.Void BaseYandexAppMetrica::ReportReferralUrl(System.String)
// 0x00000029 System.Void BaseYandexAppMetrica::ReportAppOpen(System.String)
// 0x0000002A System.Void BaseYandexAppMetrica::PutErrorEnvironmentValue(System.String,System.String)
// 0x0000002B System.Void BaseYandexAppMetrica::RequestTrackingAuthorization(System.Action`1<YandexAppMetricaRequestTrackingStatus>)
// 0x0000002C System.Void BaseYandexAppMetrica::UpdateConfiguration(YandexAppMetricaConfig)
extern void BaseYandexAppMetrica_UpdateConfiguration_mC825E37FFAFD4B1FC173FC15760FD7D440515414 (void);
// 0x0000002D System.Void BaseYandexAppMetrica::.ctor()
extern void BaseYandexAppMetrica__ctor_mDEED10287F9551B410A31EE144B414B4546BC13B (void);
// 0x0000002E System.Void ConfigUpdateHandler::.ctor(System.Object,System.IntPtr)
extern void ConfigUpdateHandler__ctor_m36F90B4DDDAC65D9981C40C9D3F3A28BC05AD164 (void);
// 0x0000002F System.Void ConfigUpdateHandler::Invoke(YandexAppMetricaConfig)
extern void ConfigUpdateHandler_Invoke_m8E918DAFE7EE9507A2257200C4394D456449C4A3 (void);
// 0x00000030 System.IAsyncResult ConfigUpdateHandler::BeginInvoke(YandexAppMetricaConfig,System.AsyncCallback,System.Object)
extern void ConfigUpdateHandler_BeginInvoke_m5731E165F907F1F98380A9A985330CA059429F04 (void);
// 0x00000031 System.Void ConfigUpdateHandler::EndInvoke(System.IAsyncResult)
extern void ConfigUpdateHandler_EndInvoke_mF634D3F33A43E2A07E34785203CDE6945A4595E9 (void);
// 0x00000032 System.Nullable`1<YandexAppMetricaConfig> IYandexAppMetrica::get_ActivationConfig()
// 0x00000033 System.String IYandexAppMetrica::get_LibraryVersion()
// 0x00000034 System.Int32 IYandexAppMetrica::get_LibraryApiLevel()
// 0x00000035 System.Void IYandexAppMetrica::add_OnActivation(ConfigUpdateHandler)
// 0x00000036 System.Void IYandexAppMetrica::remove_OnActivation(ConfigUpdateHandler)
// 0x00000037 System.Void IYandexAppMetrica::ActivateWithConfiguration(YandexAppMetricaConfig)
// 0x00000038 System.Void IYandexAppMetrica::ResumeSession()
// 0x00000039 System.Void IYandexAppMetrica::PauseSession()
// 0x0000003A System.Void IYandexAppMetrica::ReportEvent(System.String)
// 0x0000003B System.Void IYandexAppMetrica::ReportEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// 0x0000003C System.Void IYandexAppMetrica::ReportEvent(System.String,System.String)
// 0x0000003D System.Void IYandexAppMetrica::ReportError(System.String,System.String)
// 0x0000003E System.Void IYandexAppMetrica::ReportError(System.String,System.String,System.String)
// 0x0000003F System.Void IYandexAppMetrica::ReportError(System.String,System.String,System.Exception)
// 0x00000040 System.Void IYandexAppMetrica::ReportError(System.String,System.String,YandexAppMetricaErrorDetails)
// 0x00000041 System.Void IYandexAppMetrica::ReportError(System.Exception,System.String)
// 0x00000042 System.Void IYandexAppMetrica::ReportError(YandexAppMetricaErrorDetails,System.String)
// 0x00000043 System.Void IYandexAppMetrica::ReportUnhandledException(System.Exception)
// 0x00000044 System.Void IYandexAppMetrica::ReportUnhandledException(YandexAppMetricaErrorDetails)
// 0x00000045 System.Void IYandexAppMetrica::ReportErrorFromLogCallback(System.String,System.String)
// 0x00000046 System.Void IYandexAppMetrica::SetLocationTracking(System.Boolean)
// 0x00000047 System.Void IYandexAppMetrica::SetLocation(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
// 0x00000048 System.Void IYandexAppMetrica::SetUserProfileID(System.String)
// 0x00000049 System.Void IYandexAppMetrica::ReportUserProfile(YandexAppMetricaUserProfile)
// 0x0000004A System.Void IYandexAppMetrica::ReportRevenue(YandexAppMetricaRevenue)
// 0x0000004B System.Void IYandexAppMetrica::SetStatisticsSending(System.Boolean)
// 0x0000004C System.Void IYandexAppMetrica::SendEventsBuffer()
// 0x0000004D System.Void IYandexAppMetrica::RequestAppMetricaDeviceID(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
// 0x0000004E System.Void IYandexAppMetrica::ReportReferralUrl(System.String)
// 0x0000004F System.Void IYandexAppMetrica::ReportAppOpen(System.String)
// 0x00000050 System.Void IYandexAppMetrica::PutErrorEnvironmentValue(System.String,System.String)
// 0x00000051 System.Void IYandexAppMetrica::RequestTrackingAuthorization(System.Action`1<YandexAppMetricaRequestTrackingStatus>)
// 0x00000052 YandexAppMetricaBirthDateAttribute YandexAppMetricaAttribute::BirthDate()
extern void YandexAppMetricaAttribute_BirthDate_m940F5E6923E117B7B0619ABC5E0E4109E62C8E51 (void);
// 0x00000053 YandexAppMetricaGenderAttribute YandexAppMetricaAttribute::Gender()
extern void YandexAppMetricaAttribute_Gender_m9A02B789945EF58EC88AED208940D076EAAC51C1 (void);
// 0x00000054 YandexAppMetricaNameAttribute YandexAppMetricaAttribute::Name()
extern void YandexAppMetricaAttribute_Name_m4E1BA13C5E1C358925D9E07B4024F351E8DFAC7D (void);
// 0x00000055 YandexAppMetricaNotificationsEnabledAttribute YandexAppMetricaAttribute::NotificationsEnabled()
extern void YandexAppMetricaAttribute_NotificationsEnabled_mFA5914B046C47AD63C00B20937BA3B82646F963F (void);
// 0x00000056 YandexAppMetricaBooleanAttribute YandexAppMetricaAttribute::CustomBoolean(System.String)
extern void YandexAppMetricaAttribute_CustomBoolean_m368F70F1967804C347DAC4CDFD0E81A8510C9362 (void);
// 0x00000057 YandexAppMetricaCounterAttribute YandexAppMetricaAttribute::CustomCounter(System.String)
extern void YandexAppMetricaAttribute_CustomCounter_m37612DD78B1256655CA115432D15E11B6AA1E703 (void);
// 0x00000058 YandexAppMetricaNumberAttribute YandexAppMetricaAttribute::CustomNumber(System.String)
extern void YandexAppMetricaAttribute_CustomNumber_m6D7A7F27AD7470D6D0FFD701EF6F41D9288E278B (void);
// 0x00000059 YandexAppMetricaStringAttribute YandexAppMetricaAttribute::CustomString(System.String)
extern void YandexAppMetricaAttribute_CustomString_mB837A3A4C7645F167B21AD1944AA6D2831A39B42 (void);
// 0x0000005A System.Void YandexAppMetricaAttribute::.ctor()
extern void YandexAppMetricaAttribute__ctor_m5A647386010BF13E8F99674A8733B88D2F7B1D3F (void);
// 0x0000005B YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithAge(System.Int32)
extern void YandexAppMetricaBirthDateAttribute_WithAge_m0C771B731C3BCF41F88C0140FA1A2444DA8B0B10 (void);
// 0x0000005C YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithBirthDate(System.DateTime)
extern void YandexAppMetricaBirthDateAttribute_WithBirthDate_m18FC24496982FC933F8670DCACEC52EA3B342A0E (void);
// 0x0000005D YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithBirthDate(System.Int32)
extern void YandexAppMetricaBirthDateAttribute_WithBirthDate_mA11761F7AE84434D984A80D539961E5D06C0528B (void);
// 0x0000005E YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithBirthDate(System.Int32,System.Int32)
extern void YandexAppMetricaBirthDateAttribute_WithBirthDate_m29EBA21927093D5A65A5864855CE54AF5ADEB55C (void);
// 0x0000005F YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithBirthDate(System.Int32,System.Int32,System.Int32)
extern void YandexAppMetricaBirthDateAttribute_WithBirthDate_m30A5F955325E558A2940E2EFCB0388168BD33298 (void);
// 0x00000060 YandexAppMetricaUserProfileUpdate YandexAppMetricaBirthDateAttribute::WithValueReset()
extern void YandexAppMetricaBirthDateAttribute_WithValueReset_m730305211DC7E81A347C4308BCC8A6954DEC6C30 (void);
// 0x00000061 System.Void YandexAppMetricaBirthDateAttribute::.ctor()
extern void YandexAppMetricaBirthDateAttribute__ctor_m64060851390EC187EB959622802023492D1F8899 (void);
// 0x00000062 System.Void YandexAppMetricaBooleanAttribute::.ctor(System.String)
extern void YandexAppMetricaBooleanAttribute__ctor_m73B86BF16008315C5DBC5FFA155097BC901219BF (void);
// 0x00000063 YandexAppMetricaUserProfileUpdate YandexAppMetricaBooleanAttribute::WithValue(System.Boolean)
extern void YandexAppMetricaBooleanAttribute_WithValue_m72F14C9186D8839CAF9AE3D38470EA73B86D6FC0 (void);
// 0x00000064 YandexAppMetricaUserProfileUpdate YandexAppMetricaBooleanAttribute::WithValueIfUndefined(System.Boolean)
extern void YandexAppMetricaBooleanAttribute_WithValueIfUndefined_mB4BCF4671C23A53BC271733B98AE65FD561372A8 (void);
// 0x00000065 YandexAppMetricaUserProfileUpdate YandexAppMetricaBooleanAttribute::WithValueReset()
extern void YandexAppMetricaBooleanAttribute_WithValueReset_mF1ABFF5F4F5004E3C4C2CEB67B00DEF4A2C43C9E (void);
// 0x00000066 System.Void YandexAppMetricaCounterAttribute::.ctor(System.String)
extern void YandexAppMetricaCounterAttribute__ctor_mC95D8E05C76A8AF6480ED5B5F69A5904CF60906B (void);
// 0x00000067 YandexAppMetricaUserProfileUpdate YandexAppMetricaCounterAttribute::WithDelta(System.Double)
extern void YandexAppMetricaCounterAttribute_WithDelta_m7465A2743220C2C6888870B1A8CE90124BF7D184 (void);
// 0x00000068 YandexAppMetricaUserProfileUpdate YandexAppMetricaGenderAttribute::WithValue(YandexAppMetricaGenderAttribute/Gender)
extern void YandexAppMetricaGenderAttribute_WithValue_m434A83E78D313872AFF18311717CF227944C0BE7 (void);
// 0x00000069 YandexAppMetricaUserProfileUpdate YandexAppMetricaGenderAttribute::WithValueReset()
extern void YandexAppMetricaGenderAttribute_WithValueReset_mDD72761DC6F6409CAEE291176FED21FB58DD400A (void);
// 0x0000006A System.Void YandexAppMetricaGenderAttribute::.ctor()
extern void YandexAppMetricaGenderAttribute__ctor_mC519505AC6A85A3A8FE277508A2EC1565AB7E57A (void);
// 0x0000006B YandexAppMetricaUserProfileUpdate YandexAppMetricaNameAttribute::WithValue(System.String)
extern void YandexAppMetricaNameAttribute_WithValue_m0EEC5D1F557DAA8F3607C18AF41D9645C1A24FBE (void);
// 0x0000006C YandexAppMetricaUserProfileUpdate YandexAppMetricaNameAttribute::WithValueReset()
extern void YandexAppMetricaNameAttribute_WithValueReset_m2276032DEE0C6E2DABE7BAB7C604C26AFD3F6F40 (void);
// 0x0000006D System.Void YandexAppMetricaNameAttribute::.ctor()
extern void YandexAppMetricaNameAttribute__ctor_mCDAA237E85DA4E8147637C16817C296A6FF398E3 (void);
// 0x0000006E YandexAppMetricaUserProfileUpdate YandexAppMetricaNotificationsEnabledAttribute::WithValue(System.Boolean)
extern void YandexAppMetricaNotificationsEnabledAttribute_WithValue_m7A37CA6B9D0AFC753AC82E9C603DA554565AED45 (void);
// 0x0000006F YandexAppMetricaUserProfileUpdate YandexAppMetricaNotificationsEnabledAttribute::WithValueReset()
extern void YandexAppMetricaNotificationsEnabledAttribute_WithValueReset_mD91041866C6FA3D3CE43D0A4A5316E78269EF222 (void);
// 0x00000070 System.Void YandexAppMetricaNotificationsEnabledAttribute::.ctor()
extern void YandexAppMetricaNotificationsEnabledAttribute__ctor_mDB95771E3D9E6EDF5CD702313883C1D973676E22 (void);
// 0x00000071 System.Void YandexAppMetricaNumberAttribute::.ctor(System.String)
extern void YandexAppMetricaNumberAttribute__ctor_mEAA52D4E7DEC953C1B806078CB31EC5C2D3DFD9F (void);
// 0x00000072 YandexAppMetricaUserProfileUpdate YandexAppMetricaNumberAttribute::WithValue(System.Double)
extern void YandexAppMetricaNumberAttribute_WithValue_m6D6C31092CDA461FE6FE251860C8BD3BD0683D40 (void);
// 0x00000073 YandexAppMetricaUserProfileUpdate YandexAppMetricaNumberAttribute::WithValueIfUndefined(System.Double)
extern void YandexAppMetricaNumberAttribute_WithValueIfUndefined_mBB564239EF84EFA6306802982539E662B1A83116 (void);
// 0x00000074 YandexAppMetricaUserProfileUpdate YandexAppMetricaNumberAttribute::WithValueReset()
extern void YandexAppMetricaNumberAttribute_WithValueReset_m6AC56300891C43EEEA4A366DC2709F9BA3DAB480 (void);
// 0x00000075 System.Void YandexAppMetricaStringAttribute::.ctor(System.String)
extern void YandexAppMetricaStringAttribute__ctor_m54DE5D82EEFC0D4AC02FA1FC873524FFD4B1012A (void);
// 0x00000076 YandexAppMetricaUserProfileUpdate YandexAppMetricaStringAttribute::WithValue(System.String)
extern void YandexAppMetricaStringAttribute_WithValue_mAC56CBAA84C15FD0A5C1BEA6C00E6D647E8A9918 (void);
// 0x00000077 YandexAppMetricaUserProfileUpdate YandexAppMetricaStringAttribute::WithValueIfUndefined(System.String)
extern void YandexAppMetricaStringAttribute_WithValueIfUndefined_mB3BDEE8214F295C07D3D65764DCF35256AD78926 (void);
// 0x00000078 YandexAppMetricaUserProfileUpdate YandexAppMetricaStringAttribute::WithValueReset()
extern void YandexAppMetricaStringAttribute_WithValueReset_mD3A166BEBF470E1E27D7667BC67B424C9DFB00A4 (void);
// 0x00000079 System.Collections.Generic.List`1<YandexAppMetricaUserProfileUpdate> YandexAppMetricaUserProfile::GetUserProfileUpdates()
extern void YandexAppMetricaUserProfile_GetUserProfileUpdates_m6B1311B7ED6F7AC449420D786F59018EE85FB7BB (void);
// 0x0000007A YandexAppMetricaUserProfile YandexAppMetricaUserProfile::Apply(YandexAppMetricaUserProfileUpdate)
extern void YandexAppMetricaUserProfile_Apply_m27F43850CE1AC7E50A7E1748A420DBFE3274BAF2 (void);
// 0x0000007B YandexAppMetricaUserProfile YandexAppMetricaUserProfile::ApplyFromArray(System.Collections.Generic.List`1<YandexAppMetricaUserProfileUpdate>)
extern void YandexAppMetricaUserProfile_ApplyFromArray_m35A3EA902F9EC11F0B777494CFC18A152A65DE17 (void);
// 0x0000007C System.Void YandexAppMetricaUserProfile::.ctor()
extern void YandexAppMetricaUserProfile__ctor_m971F44583D1869C13C4B81E0026D94959B2AADF6 (void);
// 0x0000007D System.String YandexAppMetricaUserProfileUpdate::get_AttributeName()
extern void YandexAppMetricaUserProfileUpdate_get_AttributeName_mAADFE603D501DD46D59FB6A2159276770BA31B86 (void);
// 0x0000007E System.Void YandexAppMetricaUserProfileUpdate::set_AttributeName(System.String)
extern void YandexAppMetricaUserProfileUpdate_set_AttributeName_m4191CC9A6655953F2B454199301F67F772B7AEA1 (void);
// 0x0000007F System.String YandexAppMetricaUserProfileUpdate::get_MethodName()
extern void YandexAppMetricaUserProfileUpdate_get_MethodName_m9E1EF786B3D8E2E7684245B08660901DD294BD26 (void);
// 0x00000080 System.Void YandexAppMetricaUserProfileUpdate::set_MethodName(System.String)
extern void YandexAppMetricaUserProfileUpdate_set_MethodName_mD740C005661BF86B5C8350D33EF63D5B19AD8228 (void);
// 0x00000081 System.String YandexAppMetricaUserProfileUpdate::get_Key()
extern void YandexAppMetricaUserProfileUpdate_get_Key_mB162CFCC7C53CFF963FD454F74D758AF064A588D (void);
// 0x00000082 System.Void YandexAppMetricaUserProfileUpdate::set_Key(System.String)
extern void YandexAppMetricaUserProfileUpdate_set_Key_m33EE5D283CF342AA0ED524972932ADD147FEDE88 (void);
// 0x00000083 System.Object[] YandexAppMetricaUserProfileUpdate::get_Values()
extern void YandexAppMetricaUserProfileUpdate_get_Values_m49078DBE6E048B602316BFDBFF787F6D4ECD562D (void);
// 0x00000084 System.Void YandexAppMetricaUserProfileUpdate::set_Values(System.Object[])
extern void YandexAppMetricaUserProfileUpdate_set_Values_m9B309958C5FF83058B1A198A5500E4160C8797A2 (void);
// 0x00000085 System.Void YandexAppMetricaUserProfileUpdate::.ctor(System.String,System.String,System.String,System.Object[])
extern void YandexAppMetricaUserProfileUpdate__ctor_m58616DC6E7A79A57922D05F3B02A9DA447E94CD2 (void);
// 0x00000086 System.String YandexAppMetricaAndroid::JsonStringFromDictionary(System.Collections.IEnumerable)
extern void YandexAppMetricaAndroid_JsonStringFromDictionary_m1BAEE09C16FEAF4362C0D63815421F1CDEB37947 (void);
// 0x00000087 UnityEngine.AndroidJavaObject YandexAppMetricaAndroid::ThrowableFromStringStackTrace(System.String)
extern void YandexAppMetricaAndroid_ThrowableFromStringStackTrace_m44D9A531BB4CD92D5E1C1E41FA51501EEFC20C89 (void);
// 0x00000088 System.Void YandexAppMetricaAndroid::CallAppMetrica(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Object[])
extern void YandexAppMetricaAndroid_CallAppMetrica_mD913E7708019833E2777050300BB404BBD427522 (void);
// 0x00000089 System.Void YandexAppMetricaAndroid::CallYandexMetricaPlugins(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Object[])
extern void YandexAppMetricaAndroid_CallYandexMetricaPlugins_m24B9CC0C69B66A2D253BE6E81C30065698198984 (void);
// 0x0000008A System.String YandexAppMetricaAndroid::GetSignatureFromTypeNames(System.Collections.Generic.IEnumerable`1<System.String>)
extern void YandexAppMetricaAndroid_GetSignatureFromTypeNames_mF47E65AFBEC86B20D622718EB5A5AA6FD890E984 (void);
// 0x0000008B System.Void YandexAppMetricaAndroid::ActivateWithConfiguration(YandexAppMetricaConfig)
extern void YandexAppMetricaAndroid_ActivateWithConfiguration_m9AEA491CD86A9B4CA4145C1DE369652DE7E354D9 (void);
// 0x0000008C System.Void YandexAppMetricaAndroid::ResumeSession()
extern void YandexAppMetricaAndroid_ResumeSession_mAAF5A13CDC981D10526F923D9489B48CD006B622 (void);
// 0x0000008D System.Void YandexAppMetricaAndroid::PauseSession()
extern void YandexAppMetricaAndroid_PauseSession_mE00FE65302C17999E82CF443C526400C14B14424 (void);
// 0x0000008E System.Void YandexAppMetricaAndroid::ReportEvent(System.String)
extern void YandexAppMetricaAndroid_ReportEvent_m9797C3E1C2A21B49F410B1443E07FF5A3815E05F (void);
// 0x0000008F System.Void YandexAppMetricaAndroid::ReportEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern void YandexAppMetricaAndroid_ReportEvent_m1287F782DC0B11449CC33276372B31A00D0433F0 (void);
// 0x00000090 System.Void YandexAppMetricaAndroid::ReportEvent(System.String,System.String)
extern void YandexAppMetricaAndroid_ReportEvent_m1AFDFB874F37EBFFDD5106D626D6C2B61AFC2751 (void);
// 0x00000091 System.Void YandexAppMetricaAndroid::ReportError(System.String,System.String)
extern void YandexAppMetricaAndroid_ReportError_mB0D97D230E3DBF1BEAAFEDC707F1B5F3CAD3CB01 (void);
// 0x00000092 System.Void YandexAppMetricaAndroid::ReportError(System.String,System.String,System.String)
extern void YandexAppMetricaAndroid_ReportError_m3781303E08712941BEE862946663B91505B5FAE6 (void);
// 0x00000093 System.Void YandexAppMetricaAndroid::ReportError(System.String,System.String,System.Exception)
extern void YandexAppMetricaAndroid_ReportError_mEE5AB04E1A4B9A38F2E28B1713FE9CFF3C68E86D (void);
// 0x00000094 System.Void YandexAppMetricaAndroid::ReportError(System.String,System.String,YandexAppMetricaErrorDetails)
extern void YandexAppMetricaAndroid_ReportError_m095A53099D7AA9D202ECE75313A82D8A062527A2 (void);
// 0x00000095 System.Void YandexAppMetricaAndroid::ReportError(System.Exception,System.String)
extern void YandexAppMetricaAndroid_ReportError_mF672932C825B13FF65FB1D3FB04F01581CD42AFA (void);
// 0x00000096 System.Void YandexAppMetricaAndroid::ReportError(YandexAppMetricaErrorDetails,System.String)
extern void YandexAppMetricaAndroid_ReportError_mF60163F2A17F931246748875120DE79BA24C6D31 (void);
// 0x00000097 System.Void YandexAppMetricaAndroid::ReportUnhandledException(System.Exception)
extern void YandexAppMetricaAndroid_ReportUnhandledException_m9C1FB8E7A3847049F4A9E9CCC61C76A1A30D3876 (void);
// 0x00000098 System.Void YandexAppMetricaAndroid::ReportUnhandledException(YandexAppMetricaErrorDetails)
extern void YandexAppMetricaAndroid_ReportUnhandledException_m1273DAD576FC6767076D96065F1FEBEBDC094F09 (void);
// 0x00000099 System.Void YandexAppMetricaAndroid::ReportErrorFromLogCallback(System.String,System.String)
extern void YandexAppMetricaAndroid_ReportErrorFromLogCallback_mE4BA429806CAEA059EBDB74D64C9D7180BE2F771 (void);
// 0x0000009A System.Void YandexAppMetricaAndroid::SetLocationTracking(System.Boolean)
extern void YandexAppMetricaAndroid_SetLocationTracking_m142BDF168D811AAF642F8E1AB9A492A14D249072 (void);
// 0x0000009B System.Void YandexAppMetricaAndroid::SetLocation(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
extern void YandexAppMetricaAndroid_SetLocation_m11DCA672B8CA0D9F7F7E9225B80D3D4300E821B3 (void);
// 0x0000009C System.Int32 YandexAppMetricaAndroid::get_LibraryApiLevel()
extern void YandexAppMetricaAndroid_get_LibraryApiLevel_m3DC68E5156B90D2979A3D5A177E9C051A0F721E2 (void);
// 0x0000009D System.String YandexAppMetricaAndroid::get_LibraryVersion()
extern void YandexAppMetricaAndroid_get_LibraryVersion_m6A08313064BD693C76582476435C6B2D459E6CF8 (void);
// 0x0000009E System.Void YandexAppMetricaAndroid::SetUserProfileID(System.String)
extern void YandexAppMetricaAndroid_SetUserProfileID_m8EB1151D563089E8C70DDB20C7941015618A5429 (void);
// 0x0000009F System.Void YandexAppMetricaAndroid::ReportUserProfile(YandexAppMetricaUserProfile)
extern void YandexAppMetricaAndroid_ReportUserProfile_mB6C896883793D47847AB4C2595A61F91AEA796B3 (void);
// 0x000000A0 System.Void YandexAppMetricaAndroid::ReportRevenue(YandexAppMetricaRevenue)
extern void YandexAppMetricaAndroid_ReportRevenue_m3F2050BCB8C2A37CBEC0BE04F8E83B8F3A43FAFE (void);
// 0x000000A1 System.Void YandexAppMetricaAndroid::SetStatisticsSending(System.Boolean)
extern void YandexAppMetricaAndroid_SetStatisticsSending_m14D5A28D885173FB6019D35C09FB61656F00EC0A (void);
// 0x000000A2 System.Void YandexAppMetricaAndroid::SendEventsBuffer()
extern void YandexAppMetricaAndroid_SendEventsBuffer_mBFD658286BE42404E656C82A4760E0E9EC6CE5E3 (void);
// 0x000000A3 System.Void YandexAppMetricaAndroid::RequestAppMetricaDeviceID(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
extern void YandexAppMetricaAndroid_RequestAppMetricaDeviceID_m5951B8047BD1271B6D5D7BDBFA067199F53A4464 (void);
// 0x000000A4 System.Void YandexAppMetricaAndroid::ReportAppOpen(System.String)
extern void YandexAppMetricaAndroid_ReportAppOpen_mCD5DE2F1DAD7F850E55AA905E79BB8F13ABE3D76 (void);
// 0x000000A5 System.Void YandexAppMetricaAndroid::PutErrorEnvironmentValue(System.String,System.String)
extern void YandexAppMetricaAndroid_PutErrorEnvironmentValue_m87FDE9268C9B7E4AC5D6AE5DF9F3361261C9706E (void);
// 0x000000A6 System.Void YandexAppMetricaAndroid::ReportReferralUrl(System.String)
extern void YandexAppMetricaAndroid_ReportReferralUrl_m45A02B7D78DF39B2D5546E7F5004D29131EC5933 (void);
// 0x000000A7 System.Void YandexAppMetricaAndroid::RequestTrackingAuthorization(System.Action`1<YandexAppMetricaRequestTrackingStatus>)
extern void YandexAppMetricaAndroid_RequestTrackingAuthorization_m4DE6E1B07342047AB83043C395DC7AEFA02E5DC9 (void);
// 0x000000A8 System.Void YandexAppMetricaAndroid::.ctor()
extern void YandexAppMetricaAndroid__ctor_m6E35197AA7DDF34EBFFDE31152DA85F49EBC423A (void);
// 0x000000A9 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidAppMetricaConfig(YandexAppMetricaConfig)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidAppMetricaConfig_m9DF6D16C32D02F87C98F239B2B32CDD5DE2FDA9B (void);
// 0x000000AA UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidLocation(YandexAppMetricaConfig/Coordinates)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidLocation_mCF5F8D02166476102C2A28482E7E475E6768886F (void);
// 0x000000AB UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidGender(System.String)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidGender_mE28D497019D78EB181718108B6F950C3580DAA6D (void);
// 0x000000AC UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidUserProfileUpdate(YandexAppMetricaUserProfileUpdate)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidUserProfileUpdate_mC54DA883F54492F5C7F8FBD4321DE05D1AEEBFA1 (void);
// 0x000000AD UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidUserProfile(YandexAppMetricaUserProfile)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidUserProfile_mDAB1493464850EFA792A233E9AEEF2A6C90880FB (void);
// 0x000000AE UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidReceipt(System.Nullable`1<YandexAppMetricaReceipt>)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidReceipt_m6C775712DEEBD152BD56185F5704857586135B6E (void);
// 0x000000AF UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidInteger(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidInteger_mF2DAC7691F76C1D8950115553CC5BD4042827BE9 (void);
// 0x000000B0 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidCurrency(System.String)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidCurrency_m896BE4ABCE77819573CDFD25AF7752274626C23A (void);
// 0x000000B1 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidRevenue(YandexAppMetricaRevenue)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidRevenue_m1A5AD7464479D8A2361B5F9FC556E975D71ED5AB (void);
// 0x000000B2 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidThrowable(System.Exception)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidThrowable_mF8C810A444E3F8B7108B4873EFEBFDAB4C272678 (void);
// 0x000000B3 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidPluginErrorDetails(YandexAppMetricaErrorDetails)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidPluginErrorDetails_mDEFDB3F133007ED189420F03F061018FC81D534A (void);
// 0x000000B4 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidStackTraceItem(YandexAppMetricaStackTraceItem)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidStackTraceItem_mEC77A6DE004E86A7D47F19F0CD747A3E51036E4E (void);
// 0x000000B5 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::CreateAndroidList()
extern void YandexAppMetricaExtensionsAndroid_CreateAndroidList_m056F1E4A1DFBDA6FC387E2481AACD721C70978B4 (void);
// 0x000000B6 UnityEngine.AndroidJavaObject YandexAppMetricaExtensionsAndroid::ToAndroidMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void YandexAppMetricaExtensionsAndroid_ToAndroidMap_mABCA71874FD8EB99EE6F0E76818CCB7CE80FAC59 (void);
// 0x000000B7 System.Void YandexAppMetricaDeviceIDListenerAndroid::.ctor(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
extern void YandexAppMetricaDeviceIDListenerAndroid__ctor_mB7982DD2FF721ED8BC6B3195C923D89DAA9AFC19 (void);
// 0x000000B8 System.Void YandexAppMetricaDeviceIDListenerAndroid::onLoaded(System.String)
extern void YandexAppMetricaDeviceIDListenerAndroid_onLoaded_m8922BDD2CF98A40096C874C9025FA1F605932D65 (void);
// 0x000000B9 System.Void YandexAppMetricaDeviceIDListenerAndroid::onError(UnityEngine.AndroidJavaObject)
extern void YandexAppMetricaDeviceIDListenerAndroid_onError_m87AF86A8C39A39F137CD6C43429EE356A514E391 (void);
// 0x000000BA System.Nullable`1<YandexAppMetricaRequestDeviceIDError> YandexAppMetricaDeviceIDListenerAndroid::ErrorFromAndroidReason(UnityEngine.AndroidJavaObject)
extern void YandexAppMetricaDeviceIDListenerAndroid_ErrorFromAndroidReason_m5448D291C732C6533962EC4355C9E9D73109ADF2 (void);
// 0x000000BB System.Void YandexAppMetricaConfig::.ctor(System.String)
extern void YandexAppMetricaConfig__ctor_m46CD397B0518F464E09C5F2038FA3F15C91FE872 (void);
// 0x000000BC System.String YandexAppMetricaConfig::get_ApiKey()
extern void YandexAppMetricaConfig_get_ApiKey_m147BC417752FEA8D98C0F0A752BF9E3E00064C10 (void);
// 0x000000BD System.Void YandexAppMetricaConfig::set_ApiKey(System.String)
extern void YandexAppMetricaConfig_set_ApiKey_m727866EB46A1123B84F7E5A2068C41F3AC9F48DB (void);
// 0x000000BE System.String YandexAppMetricaConfig::get_AppVersion()
extern void YandexAppMetricaConfig_get_AppVersion_mED1821FDBD6E949FE587315530F27C4E17AC2E91 (void);
// 0x000000BF System.Void YandexAppMetricaConfig::set_AppVersion(System.String)
extern void YandexAppMetricaConfig_set_AppVersion_mF02728C0411AF6F7E861F2F59EFDDA9440A4BCEA (void);
// 0x000000C0 System.Nullable`1<YandexAppMetricaConfig/Coordinates> YandexAppMetricaConfig::get_Location()
extern void YandexAppMetricaConfig_get_Location_mB53C928A0BBC78A4F40C28586D9F90890B2BE806 (void);
// 0x000000C1 System.Void YandexAppMetricaConfig::set_Location(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
extern void YandexAppMetricaConfig_set_Location_mDDD47FCFE2F8C9277DCFBB8F5D59CB8B6FD54E6B (void);
// 0x000000C2 System.Nullable`1<System.Int32> YandexAppMetricaConfig::get_SessionTimeout()
extern void YandexAppMetricaConfig_get_SessionTimeout_mF528D3798A45EB12C0CED466038D5DC620E163B5 (void);
// 0x000000C3 System.Void YandexAppMetricaConfig::set_SessionTimeout(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaConfig_set_SessionTimeout_m9ADB8370334372932C9BAC1620BD3B444A7B6204 (void);
// 0x000000C4 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_CrashReporting()
extern void YandexAppMetricaConfig_get_CrashReporting_m39794ACC39D7A7B8348B1A10028A0BEE31794C97 (void);
// 0x000000C5 System.Void YandexAppMetricaConfig::set_CrashReporting(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_CrashReporting_m10DEBB344FC60DBF52674A40B9B9ACD6FF171B03 (void);
// 0x000000C6 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_LocationTracking()
extern void YandexAppMetricaConfig_get_LocationTracking_m40F248A4B9874C6509C59BB35CCA9417F0F0A0A7 (void);
// 0x000000C7 System.Void YandexAppMetricaConfig::set_LocationTracking(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_LocationTracking_mA00064D255151AFF0476827221E2A13A9824DD92 (void);
// 0x000000C8 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_Logs()
extern void YandexAppMetricaConfig_get_Logs_mF3234BCD81011BB75DDFE87D6CDD105F8EB2411B (void);
// 0x000000C9 System.Void YandexAppMetricaConfig::set_Logs(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_Logs_mD0CAD7EE386AE6FBDC643EF357D946A52CA5F6EE (void);
// 0x000000CA System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_HandleFirstActivationAsUpdate()
extern void YandexAppMetricaConfig_get_HandleFirstActivationAsUpdate_m3C837F5D1B6EBAF5F25D836705DD6932AA6226F5 (void);
// 0x000000CB System.Void YandexAppMetricaConfig::set_HandleFirstActivationAsUpdate(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_HandleFirstActivationAsUpdate_mC8A24E7B4F0067E2D44081C1B5C6DD31856629D1 (void);
// 0x000000CC System.Nullable`1<YandexAppMetricaPreloadInfo> YandexAppMetricaConfig::get_PreloadInfo()
extern void YandexAppMetricaConfig_get_PreloadInfo_m934E72D370ABB9E2243D4EBCFCA461144C05A2C4 (void);
// 0x000000CD System.Void YandexAppMetricaConfig::set_PreloadInfo(System.Nullable`1<YandexAppMetricaPreloadInfo>)
extern void YandexAppMetricaConfig_set_PreloadInfo_mFCF94F7B016C8C708921864ACD244232A8E2CC70 (void);
// 0x000000CE System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_StatisticsSending()
extern void YandexAppMetricaConfig_get_StatisticsSending_mF8E5291F277DB595D3CD0D0DDDDD80864BC0D840 (void);
// 0x000000CF System.Void YandexAppMetricaConfig::set_StatisticsSending(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_StatisticsSending_m838878DCE15864B27001F0D4102BD3906C42367B (void);
// 0x000000D0 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_AppForKids()
extern void YandexAppMetricaConfig_get_AppForKids_mCE85C0B41FFD5C3E604B01D02290A7B42BD46F72 (void);
// 0x000000D1 System.Void YandexAppMetricaConfig::set_AppForKids(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_AppForKids_m0E62895DEEFD58865564FA0BEE83B30E96C6E8DA (void);
// 0x000000D2 System.String YandexAppMetricaConfig::get_UserProfileID()
extern void YandexAppMetricaConfig_get_UserProfileID_mAC80B41BDF1927A959013AA6F42A2B83DD466235 (void);
// 0x000000D3 System.Void YandexAppMetricaConfig::set_UserProfileID(System.String)
extern void YandexAppMetricaConfig_set_UserProfileID_mA3EBF3741E03C538E234AF6C85B05A7B87480DF1 (void);
// 0x000000D4 System.Nullable`1<System.Boolean> YandexAppMetricaConfig::get_RevenueAutoTrackingEnabled()
extern void YandexAppMetricaConfig_get_RevenueAutoTrackingEnabled_m800674A3671F391DE265B4B3AA48B527EC17F99E (void);
// 0x000000D5 System.Void YandexAppMetricaConfig::set_RevenueAutoTrackingEnabled(System.Nullable`1<System.Boolean>)
extern void YandexAppMetricaConfig_set_RevenueAutoTrackingEnabled_mAF14BA869A4CA489D05B51F30027729B55545FBC (void);
// 0x000000D6 System.Double YandexAppMetricaConfig/Coordinates::get_Latitude()
extern void Coordinates_get_Latitude_m07E70B9DEDEF37DDF2850D24D0ED1E7A1826C0AA (void);
// 0x000000D7 System.Void YandexAppMetricaConfig/Coordinates::set_Latitude(System.Double)
extern void Coordinates_set_Latitude_mB5495F18B4EAB660550D614F47193266AFC04958 (void);
// 0x000000D8 System.Double YandexAppMetricaConfig/Coordinates::get_Longitude()
extern void Coordinates_get_Longitude_m225773A24459764B74431E09F66A415551F7B403 (void);
// 0x000000D9 System.Void YandexAppMetricaConfig/Coordinates::set_Longitude(System.Double)
extern void Coordinates_set_Longitude_m4E24236DFF7C6505A1BB0F8B67A36CCD1A314D17 (void);
// 0x000000DA System.Void YandexAppMetricaPreloadInfo::.ctor(System.String)
extern void YandexAppMetricaPreloadInfo__ctor_mA08D07DD83284D8F038DA55B187D716655D15A82 (void);
// 0x000000DB System.String YandexAppMetricaPreloadInfo::get_TrackingId()
extern void YandexAppMetricaPreloadInfo_get_TrackingId_m9D47806A199F7E7F0D413FC8DA4CE4CC0578B716 (void);
// 0x000000DC System.Void YandexAppMetricaPreloadInfo::set_TrackingId(System.String)
extern void YandexAppMetricaPreloadInfo_set_TrackingId_m4F186B83B0CC244EC20FC57DB1AF0CC6C17F8189 (void);
// 0x000000DD System.Collections.Generic.Dictionary`2<System.String,System.String> YandexAppMetricaPreloadInfo::get_AdditionalInfo()
extern void YandexAppMetricaPreloadInfo_get_AdditionalInfo_mA15DFA87FDD7845B281B5D68B0EAACD8BCE33D53 (void);
// 0x000000DE System.Void YandexAppMetricaPreloadInfo::set_AdditionalInfo(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void YandexAppMetricaPreloadInfo_set_AdditionalInfo_m2BB980DCA77C372066E57803A273E1D68316F1EF (void);
// 0x000000DF System.Void YandexAppMetricaDummy::ActivateWithConfiguration(YandexAppMetricaConfig)
extern void YandexAppMetricaDummy_ActivateWithConfiguration_mF4F7CC100A9A71036C5175990933BED3FC3C7DE9 (void);
// 0x000000E0 System.Void YandexAppMetricaDummy::ResumeSession()
extern void YandexAppMetricaDummy_ResumeSession_m72F87852E83F0D32515843217EA98B1AE71325E3 (void);
// 0x000000E1 System.Void YandexAppMetricaDummy::PauseSession()
extern void YandexAppMetricaDummy_PauseSession_mDEA63747851A33E5BFCA94AD684E2374C0AA749B (void);
// 0x000000E2 System.Void YandexAppMetricaDummy::ReportEvent(System.String)
extern void YandexAppMetricaDummy_ReportEvent_mCA8B31A5B8CBC43AC22AB03BFDB490028EDE4F4D (void);
// 0x000000E3 System.Void YandexAppMetricaDummy::ReportEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern void YandexAppMetricaDummy_ReportEvent_mDA835B54FC220CF4E89CF7EC8A19CEAF704C9598 (void);
// 0x000000E4 System.Void YandexAppMetricaDummy::ReportEvent(System.String,System.String)
extern void YandexAppMetricaDummy_ReportEvent_mF711B6E76C3B5180BBDE1B8DC2112C24822FA80A (void);
// 0x000000E5 System.Void YandexAppMetricaDummy::ReportError(System.String,System.String)
extern void YandexAppMetricaDummy_ReportError_mCCC548F07ECA29B5DF2447A0B5F1FFC6EF778FCF (void);
// 0x000000E6 System.Void YandexAppMetricaDummy::ReportError(System.String,System.String,System.String)
extern void YandexAppMetricaDummy_ReportError_m7E5E5A7C0C7A42955CB3E78877FB453CE91A5DA6 (void);
// 0x000000E7 System.Void YandexAppMetricaDummy::ReportError(System.String,System.String,System.Exception)
extern void YandexAppMetricaDummy_ReportError_mDD789B98A0A324F9EF93007C7F2B60D8A85FC3C3 (void);
// 0x000000E8 System.Void YandexAppMetricaDummy::ReportError(System.String,System.String,YandexAppMetricaErrorDetails)
extern void YandexAppMetricaDummy_ReportError_mD953AF2688D519B5E6A280DE3F0F450D57FDCCBB (void);
// 0x000000E9 System.Void YandexAppMetricaDummy::ReportError(System.Exception,System.String)
extern void YandexAppMetricaDummy_ReportError_mFBE5566FE561774058E6028007601FC3B3848751 (void);
// 0x000000EA System.Void YandexAppMetricaDummy::ReportError(YandexAppMetricaErrorDetails,System.String)
extern void YandexAppMetricaDummy_ReportError_mE39364CA4228864DA5D5AB2A5F8EDED17AFE2BC2 (void);
// 0x000000EB System.Void YandexAppMetricaDummy::ReportUnhandledException(System.Exception)
extern void YandexAppMetricaDummy_ReportUnhandledException_m98BB8774BE34AA58294C54DEB95D7757B9700F4C (void);
// 0x000000EC System.Void YandexAppMetricaDummy::ReportUnhandledException(YandexAppMetricaErrorDetails)
extern void YandexAppMetricaDummy_ReportUnhandledException_mE053E77DD1A74C53ABA5F97D1447842F714F23EF (void);
// 0x000000ED System.Void YandexAppMetricaDummy::ReportErrorFromLogCallback(System.String,System.String)
extern void YandexAppMetricaDummy_ReportErrorFromLogCallback_m992701136648DE7C9EDCB05540992A1D31B28E59 (void);
// 0x000000EE System.Void YandexAppMetricaDummy::SetLocationTracking(System.Boolean)
extern void YandexAppMetricaDummy_SetLocationTracking_mCFC5612CCF2909614A2F44EE26E24606F9BEB2D7 (void);
// 0x000000EF System.Void YandexAppMetricaDummy::SetLocation(System.Nullable`1<YandexAppMetricaConfig/Coordinates>)
extern void YandexAppMetricaDummy_SetLocation_mC38E20F136E85FA1AF45C01BB5C642FBD86C1700 (void);
// 0x000000F0 System.String YandexAppMetricaDummy::get_LibraryVersion()
extern void YandexAppMetricaDummy_get_LibraryVersion_m4E1A5FD6CC5F96FB24AC48124C0848A967BD2AA7 (void);
// 0x000000F1 System.Int32 YandexAppMetricaDummy::get_LibraryApiLevel()
extern void YandexAppMetricaDummy_get_LibraryApiLevel_m4A6FB5B8BA2CEECAFF51B6DC06C48E133C4178EA (void);
// 0x000000F2 System.Void YandexAppMetricaDummy::SetUserProfileID(System.String)
extern void YandexAppMetricaDummy_SetUserProfileID_m3D59E7EFDDD4A71048BD5902112954E7B914D605 (void);
// 0x000000F3 System.Void YandexAppMetricaDummy::ReportUserProfile(YandexAppMetricaUserProfile)
extern void YandexAppMetricaDummy_ReportUserProfile_m316552F557D1B4BF567CDBD0CCE01AA3D4C1D7CF (void);
// 0x000000F4 System.Void YandexAppMetricaDummy::ReportRevenue(YandexAppMetricaRevenue)
extern void YandexAppMetricaDummy_ReportRevenue_m07485ACACECC025BC7FD6BD465F727B9DA478751 (void);
// 0x000000F5 System.Void YandexAppMetricaDummy::SetStatisticsSending(System.Boolean)
extern void YandexAppMetricaDummy_SetStatisticsSending_m60E36412BACECF9C3F40B280020E1D94408F3A63 (void);
// 0x000000F6 System.Void YandexAppMetricaDummy::SendEventsBuffer()
extern void YandexAppMetricaDummy_SendEventsBuffer_m5514DFD644305C5200F7D65D18B3BB76E269B561 (void);
// 0x000000F7 System.Void YandexAppMetricaDummy::RequestAppMetricaDeviceID(System.Action`2<System.String,System.Nullable`1<YandexAppMetricaRequestDeviceIDError>>)
extern void YandexAppMetricaDummy_RequestAppMetricaDeviceID_m2344C2B031A16C7FD29E407FD0A80533EC511679 (void);
// 0x000000F8 System.Void YandexAppMetricaDummy::ReportReferralUrl(System.String)
extern void YandexAppMetricaDummy_ReportReferralUrl_m09C52CAA1D416B69F5D920459C0DEF404DF09C14 (void);
// 0x000000F9 System.Void YandexAppMetricaDummy::ReportAppOpen(System.String)
extern void YandexAppMetricaDummy_ReportAppOpen_m9E3E355BEF1253529AA19140BC0E6E5F40952803 (void);
// 0x000000FA System.Void YandexAppMetricaDummy::PutErrorEnvironmentValue(System.String,System.String)
extern void YandexAppMetricaDummy_PutErrorEnvironmentValue_m3FB76C8DBCB3D82A639ED26FF8F4836BE5A67CBE (void);
// 0x000000FB System.Void YandexAppMetricaDummy::RequestTrackingAuthorization(System.Action`1<YandexAppMetricaRequestTrackingStatus>)
extern void YandexAppMetricaDummy_RequestTrackingAuthorization_m1D797B70AA028DF598C6DEF7B53A106AC7677020 (void);
// 0x000000FC System.Void YandexAppMetricaDummy::.ctor()
extern void YandexAppMetricaDummy__ctor_mC7268479DA37B337858AD22EA14162B5C818D659 (void);
// 0x000000FD System.Void YandexAppMetricaErrorDetails::.ctor()
extern void YandexAppMetricaErrorDetails__ctor_mDC1BDC8F6C13C61669071D7A2CB1D6C5E22124F9 (void);
// 0x000000FE System.String YandexAppMetricaErrorDetails::get_ExceptionClass()
extern void YandexAppMetricaErrorDetails_get_ExceptionClass_m21DC3005EF21B07F36177D88714C3F834635FD49 (void);
// 0x000000FF System.Void YandexAppMetricaErrorDetails::set_ExceptionClass(System.String)
extern void YandexAppMetricaErrorDetails_set_ExceptionClass_m43DA4DA19847759D91C7C0F0B08938E28E99E7AE (void);
// 0x00000100 System.String YandexAppMetricaErrorDetails::get_Message()
extern void YandexAppMetricaErrorDetails_get_Message_m8D9BA1F2AD14F6A68451AF64A1BBEF59F3937E36 (void);
// 0x00000101 System.Void YandexAppMetricaErrorDetails::set_Message(System.String)
extern void YandexAppMetricaErrorDetails_set_Message_m5EADD2ADCE9BAD1EB51AC354BD0FB0EE251071C1 (void);
// 0x00000102 System.Collections.Generic.List`1<YandexAppMetricaStackTraceItem> YandexAppMetricaErrorDetails::get_Stacktrace()
extern void YandexAppMetricaErrorDetails_get_Stacktrace_m6053DC39D10D57107770C63CBF41D9ED4003E1E7 (void);
// 0x00000103 System.Void YandexAppMetricaErrorDetails::set_Stacktrace(System.Collections.Generic.List`1<YandexAppMetricaStackTraceItem>)
extern void YandexAppMetricaErrorDetails_set_Stacktrace_m121E0C5106B60574D0B1AC23A2AFCD034498B12E (void);
// 0x00000104 System.String YandexAppMetricaErrorDetails::get_Platform()
extern void YandexAppMetricaErrorDetails_get_Platform_mC1251AA6A3D9F6E18828550A8C2AC51264789118 (void);
// 0x00000105 System.Void YandexAppMetricaErrorDetails::set_Platform(System.String)
extern void YandexAppMetricaErrorDetails_set_Platform_mE15421EEA72CFAE27918BD083737059E323BF88A (void);
// 0x00000106 System.String YandexAppMetricaErrorDetails::get_VirtualMachineVersion()
extern void YandexAppMetricaErrorDetails_get_VirtualMachineVersion_m70CF8DB1717C47198846BD36CA97E56CE503DB35 (void);
// 0x00000107 System.Void YandexAppMetricaErrorDetails::set_VirtualMachineVersion(System.String)
extern void YandexAppMetricaErrorDetails_set_VirtualMachineVersion_m1CD5CBC716E07F52FB0E8289B39FDDFBF5F90BF3 (void);
// 0x00000108 System.Collections.Generic.Dictionary`2<System.String,System.String> YandexAppMetricaErrorDetails::get_PluginEnvironment()
extern void YandexAppMetricaErrorDetails_get_PluginEnvironment_mE2FD13854E760DF9DDB80D768404081F6B2AB8AD (void);
// 0x00000109 System.Void YandexAppMetricaErrorDetails::set_PluginEnvironment(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void YandexAppMetricaErrorDetails_set_PluginEnvironment_m583755CBD506FDBFB6A901EE7AFDBE7E557557BC (void);
// 0x0000010A YandexAppMetricaErrorDetails YandexAppMetricaErrorDetails::From(System.Exception)
extern void YandexAppMetricaErrorDetails_From_m7513633DB0F4A8FBFCF6D5E94D8B7ED0BFCD635B (void);
// 0x0000010B YandexAppMetricaErrorDetails YandexAppMetricaErrorDetails::FromLogCallback(System.String,System.String)
extern void YandexAppMetricaErrorDetails_FromLogCallback_mB1749516E2F0DA59E187B6B0C43853D2963DAB39 (void);
// 0x0000010C System.String YandexAppMetricaErrorDetails::ToString()
extern void YandexAppMetricaErrorDetails_ToString_m61FC75211E80DADF84A409E5091B0B0CFB7660C3 (void);
// 0x0000010D System.Void YandexAppMetricaErrorDetails/<>c__DisplayClass25_0::.ctor()
extern void U3CU3Ec__DisplayClass25_0__ctor_m5D173CCCEFE38B9A3C3E4CA94B263AD38ECDFD3F (void);
// 0x0000010E System.Boolean YandexAppMetricaErrorDetails/<>c__DisplayClass25_0::<From>b__1(System.String)
extern void U3CU3Ec__DisplayClass25_0_U3CFromU3Eb__1_m6C69953E15BD0EE9CCD211E75ACD5B84F6402F9E (void);
// 0x0000010F System.Void YandexAppMetricaErrorDetails/<>c::.cctor()
extern void U3CU3Ec__cctor_mA3593E29485D3D54990E20088F75DB5978C93758 (void);
// 0x00000110 System.Void YandexAppMetricaErrorDetails/<>c::.ctor()
extern void U3CU3Ec__ctor_m4F1071D6BB570BA1C8D3D8FF5F1782A16C64C6A6 (void);
// 0x00000111 System.Boolean YandexAppMetricaErrorDetails/<>c::<From>b__25_0(System.String)
extern void U3CU3Ec_U3CFromU3Eb__25_0_m4A98D783011D4559824B2DE3C1EE2F839005478F (void);
// 0x00000112 System.Boolean YandexAppMetricaErrorDetails/<>c::<FromLogCallback>b__26_0(System.String)
extern void U3CU3Ec_U3CFromLogCallbackU3Eb__26_0_m80C4B2CB4577B171EAEF10186F2856AA2E36F8DB (void);
// 0x00000113 System.String YandexAppMetricaErrorDetails/<>c::<ToString>b__27_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
extern void U3CU3Ec_U3CToStringU3Eb__27_0_m70B14C191081D073C3F3F91A979D3174532F51FC (void);
// 0x00000114 System.String YandexAppMetricaErrorDetails/<>c::<ToString>b__27_1(YandexAppMetricaStackTraceItem)
extern void U3CU3Ec_U3CToStringU3Eb__27_1_m0F731ADDED441A0DD43EA31459EC7C7A6B717F3C (void);
// 0x00000115 System.Void YandexAppMetricaErrorDetails/<>c__DisplayClass26_0::.ctor()
extern void U3CU3Ec__DisplayClass26_0__ctor_mE758F5A3E79B0CBE4788BAE6FA18BB4C6955E9BA (void);
// 0x00000116 System.Boolean YandexAppMetricaErrorDetails/<>c__DisplayClass26_0::<FromLogCallback>b__1(System.String)
extern void U3CU3Ec__DisplayClass26_0_U3CFromLogCallbackU3Eb__1_m9A2F371A5DE63C2D4F027EAB5A57D30C6A624B3A (void);
// 0x00000117 System.String YandexAppMetricaStackTraceItem::get_ClassName()
extern void YandexAppMetricaStackTraceItem_get_ClassName_m946663DBAD4CCC5FE1A293E80FF8E61ABF724E75 (void);
// 0x00000118 System.Void YandexAppMetricaStackTraceItem::set_ClassName(System.String)
extern void YandexAppMetricaStackTraceItem_set_ClassName_m5EEFA29DD15CCDF567A85633826BB7BB8700AFD5 (void);
// 0x00000119 System.String YandexAppMetricaStackTraceItem::get_MethodName()
extern void YandexAppMetricaStackTraceItem_get_MethodName_m3637BAADC88285596D4096E4A1531DA6F95A7D8F (void);
// 0x0000011A System.Void YandexAppMetricaStackTraceItem::set_MethodName(System.String)
extern void YandexAppMetricaStackTraceItem_set_MethodName_m2732C8389BCAEC8B89AECE4CAA08D1C132819802 (void);
// 0x0000011B System.String YandexAppMetricaStackTraceItem::get_FileName()
extern void YandexAppMetricaStackTraceItem_get_FileName_mB00A61B97A6F105194D0EAE3B54F77B525D1F357 (void);
// 0x0000011C System.Void YandexAppMetricaStackTraceItem::set_FileName(System.String)
extern void YandexAppMetricaStackTraceItem_set_FileName_m8EDA02A46D4A4377951B83FC67B4F530F2B56B0D (void);
// 0x0000011D System.Nullable`1<System.Int32> YandexAppMetricaStackTraceItem::get_Line()
extern void YandexAppMetricaStackTraceItem_get_Line_m47028D86A4C6E6D6FB5148963F56EBDBAB202F0A (void);
// 0x0000011E System.Void YandexAppMetricaStackTraceItem::set_Line(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaStackTraceItem_set_Line_m13C5C828B1682CFC01DD90113E3675CFE72CCE9A (void);
// 0x0000011F System.Nullable`1<System.Int32> YandexAppMetricaStackTraceItem::get_Column()
extern void YandexAppMetricaStackTraceItem_get_Column_m4D1E2CE061688D6A779D61E0DAD3F66AE19D5332 (void);
// 0x00000120 System.Void YandexAppMetricaStackTraceItem::set_Column(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaStackTraceItem_set_Column_m9CD343280DB2716828D408477995C6C0703AD434 (void);
// 0x00000121 YandexAppMetricaStackTraceItem YandexAppMetricaStackTraceItem::From(System.String)
extern void YandexAppMetricaStackTraceItem_From_m04570D149AB6E01023505E8721700A80C8F382D1 (void);
// 0x00000122 System.String YandexAppMetricaStackTraceItem::GetGroupValueOrNull(System.Text.RegularExpressions.Match,System.String)
extern void YandexAppMetricaStackTraceItem_GetGroupValueOrNull_m275A1EE217D7761E879FEC23B897716B19B8975F (void);
// 0x00000123 System.String YandexAppMetricaStackTraceItem::ToString()
extern void YandexAppMetricaStackTraceItem_ToString_mF25A7B5729E735081DD38B31D6591AC416C082BC (void);
// 0x00000124 System.Void YandexAppMetricaStackTraceItem::.ctor()
extern void YandexAppMetricaStackTraceItem__ctor_m1DDB7BEC07800298D9567042D1023B28CA59C293 (void);
// 0x00000125 System.Void YandexAppMetricaRevenue::.ctor(System.Double,System.String)
extern void YandexAppMetricaRevenue__ctor_mEFCFDB0686F78514C45021102EABF1C58FD08BEA (void);
// 0x00000126 System.Void YandexAppMetricaRevenue::.ctor(System.Decimal,System.String)
extern void YandexAppMetricaRevenue__ctor_m7A36F4E6A089659BE2C9A38FB411D4A5E00FB8B0 (void);
// 0x00000127 System.Nullable`1<System.Double> YandexAppMetricaRevenue::get_Price()
extern void YandexAppMetricaRevenue_get_Price_m00320990C2107FB0A3AD7CEBDDCA6E840A760030 (void);
// 0x00000128 System.Void YandexAppMetricaRevenue::set_Price(System.Nullable`1<System.Double>)
extern void YandexAppMetricaRevenue_set_Price_mAD3F94FCEC1E66D09DE0396941932D9E4F7AAFA4 (void);
// 0x00000129 System.Nullable`1<System.Decimal> YandexAppMetricaRevenue::get_PriceDecimal()
extern void YandexAppMetricaRevenue_get_PriceDecimal_mB279A2BE633D3566C2361667496AB4E3468033ED (void);
// 0x0000012A System.Void YandexAppMetricaRevenue::set_PriceDecimal(System.Nullable`1<System.Decimal>)
extern void YandexAppMetricaRevenue_set_PriceDecimal_mF70A4373DD76AAD3D9172912C44A99A950733351 (void);
// 0x0000012B System.String YandexAppMetricaRevenue::get_Currency()
extern void YandexAppMetricaRevenue_get_Currency_m3FA5BCE2DC30757C824F157D3198B4B5638C26CA (void);
// 0x0000012C System.Void YandexAppMetricaRevenue::set_Currency(System.String)
extern void YandexAppMetricaRevenue_set_Currency_mEB5437F9FD8CC650791713DE40233158399550D0 (void);
// 0x0000012D System.Nullable`1<System.Int32> YandexAppMetricaRevenue::get_Quantity()
extern void YandexAppMetricaRevenue_get_Quantity_mA405E5D1A6E7C6C34B35F51F518E443D3E880ABB (void);
// 0x0000012E System.Void YandexAppMetricaRevenue::set_Quantity(System.Nullable`1<System.Int32>)
extern void YandexAppMetricaRevenue_set_Quantity_mD219197536505B4A7431F7DEAB37C65D8FB6AE3C (void);
// 0x0000012F System.String YandexAppMetricaRevenue::get_ProductID()
extern void YandexAppMetricaRevenue_get_ProductID_m6BA1288B427B5ACB125C634C2DF41FC29E0F2246 (void);
// 0x00000130 System.Void YandexAppMetricaRevenue::set_ProductID(System.String)
extern void YandexAppMetricaRevenue_set_ProductID_mA1CEECADC302ED6A7A6BD38CF9D130BF59391727 (void);
// 0x00000131 System.Nullable`1<YandexAppMetricaReceipt> YandexAppMetricaRevenue::get_Receipt()
extern void YandexAppMetricaRevenue_get_Receipt_mD6BE3E2ECFD475796DCAF792DB96E9025FCC8101 (void);
// 0x00000132 System.Void YandexAppMetricaRevenue::set_Receipt(System.Nullable`1<YandexAppMetricaReceipt>)
extern void YandexAppMetricaRevenue_set_Receipt_mFC5DF642121EA3BBE45D5188D9D3C4FFDE4F8092 (void);
// 0x00000133 System.String YandexAppMetricaRevenue::get_Payload()
extern void YandexAppMetricaRevenue_get_Payload_m4BB18D93F9A96CC8C104E2311E28259512F7475E (void);
// 0x00000134 System.Void YandexAppMetricaRevenue::set_Payload(System.String)
extern void YandexAppMetricaRevenue_set_Payload_mE50D0D2D624D7F134182FA70E4065B5F83FCA1AF (void);
// 0x00000135 System.String YandexAppMetricaReceipt::get_Data()
extern void YandexAppMetricaReceipt_get_Data_m14E7C7A6A19436B92F0AEDC21AEBF0D598E51FDA (void);
// 0x00000136 System.Void YandexAppMetricaReceipt::set_Data(System.String)
extern void YandexAppMetricaReceipt_set_Data_m6E43F9474F83C1825BC0CD2536E7028341469447 (void);
// 0x00000137 System.String YandexAppMetricaReceipt::get_Signature()
extern void YandexAppMetricaReceipt_get_Signature_m586F08DBD0AB661DF9D4C8D7154C5921B4F23ED2 (void);
// 0x00000138 System.Void YandexAppMetricaReceipt::set_Signature(System.String)
extern void YandexAppMetricaReceipt_set_Signature_m6CFA349C225137EFC2B686916FB2390FE03911A1 (void);
// 0x00000139 System.String YandexAppMetricaReceipt::get_TransactionID()
extern void YandexAppMetricaReceipt_get_TransactionID_m9C4736645755549FBA3C2FA711879BEE669BD8C7 (void);
// 0x0000013A System.Void YandexAppMetricaReceipt::set_TransactionID(System.String)
extern void YandexAppMetricaReceipt_set_TransactionID_m2E469887FC93DE2133C185AB100BEE920A510CEC (void);
// 0x0000013B System.Void ETFXProjectileScript::Start()
extern void ETFXProjectileScript_Start_m0E1FB70AED6DE06208444A4B1EE0095D4495A5C0 (void);
// 0x0000013C System.Void ETFXProjectileScript::FixedUpdate()
extern void ETFXProjectileScript_FixedUpdate_m2FB7E63B404F5C701112656F5A4913E022A1553A (void);
// 0x0000013D System.Void ETFXProjectileScript::.ctor()
extern void ETFXProjectileScript__ctor_mA40725837A6D1433D09D449D6AAFD1B47C127268 (void);
// 0x0000013E System.Void ETFXSceneManager::LoadScene2DDemo()
extern void ETFXSceneManager_LoadScene2DDemo_m166AEE719B3CBEC9FC515335DE96024A63A85DDE (void);
// 0x0000013F System.Void ETFXSceneManager::LoadSceneCards()
extern void ETFXSceneManager_LoadSceneCards_mB6F24EFE58EF75B76ABA00ACEA57378F02431E05 (void);
// 0x00000140 System.Void ETFXSceneManager::LoadSceneCombat()
extern void ETFXSceneManager_LoadSceneCombat_mCE714064D2C42D885FC23182E28D712841776A3D (void);
// 0x00000141 System.Void ETFXSceneManager::LoadSceneDecals()
extern void ETFXSceneManager_LoadSceneDecals_mA158CAC129C42A88BEC4D62E13E95AAAAFFE6AFA (void);
// 0x00000142 System.Void ETFXSceneManager::LoadSceneDecals2()
extern void ETFXSceneManager_LoadSceneDecals2_m184A79CC375CA61C1758EBAD3CAE31AB22910990 (void);
// 0x00000143 System.Void ETFXSceneManager::LoadSceneEmojis()
extern void ETFXSceneManager_LoadSceneEmojis_m6B2D44847F224B852EE92930A1899AE0B668C82E (void);
// 0x00000144 System.Void ETFXSceneManager::LoadSceneEmojis2()
extern void ETFXSceneManager_LoadSceneEmojis2_m666659BC62458A3476CB5FAEDFE82DAAB0767348 (void);
// 0x00000145 System.Void ETFXSceneManager::LoadSceneExplosions()
extern void ETFXSceneManager_LoadSceneExplosions_mD769ACD162F37878BA03F1087C3F54C452218EDB (void);
// 0x00000146 System.Void ETFXSceneManager::LoadSceneExplosions2()
extern void ETFXSceneManager_LoadSceneExplosions2_m5DAA46AB9C03E980D042D43A9E4DF0098239A9E7 (void);
// 0x00000147 System.Void ETFXSceneManager::LoadSceneFire()
extern void ETFXSceneManager_LoadSceneFire_m265A0FE056A7394B2703C490DA983BAD77088070 (void);
// 0x00000148 System.Void ETFXSceneManager::LoadSceneFire2()
extern void ETFXSceneManager_LoadSceneFire2_mC60D6D1346670AFB87EBF57CB7A9E3EF006FBABE (void);
// 0x00000149 System.Void ETFXSceneManager::LoadSceneFire3()
extern void ETFXSceneManager_LoadSceneFire3_m612F02454CCBA7586A07E0F9CD22036A781D748C (void);
// 0x0000014A System.Void ETFXSceneManager::LoadSceneFireworks()
extern void ETFXSceneManager_LoadSceneFireworks_m7A3BDB3A9EFBD640FDB55EFF76AECBA710D67DF4 (void);
// 0x0000014B System.Void ETFXSceneManager::LoadSceneFlares()
extern void ETFXSceneManager_LoadSceneFlares_mBA39D71D779C26CC664E29DFF6E271A129948AD8 (void);
// 0x0000014C System.Void ETFXSceneManager::LoadSceneMagic()
extern void ETFXSceneManager_LoadSceneMagic_m4FD8415183E84CE25BEBBA3F8F11C51837971543 (void);
// 0x0000014D System.Void ETFXSceneManager::LoadSceneMagic2()
extern void ETFXSceneManager_LoadSceneMagic2_mE2E16D49C06756F213CF11AB7B4A41CA9B4F150C (void);
// 0x0000014E System.Void ETFXSceneManager::LoadSceneMagic3()
extern void ETFXSceneManager_LoadSceneMagic3_mD289F0F5997DB1F43766BA61FD263FC4394A664B (void);
// 0x0000014F System.Void ETFXSceneManager::LoadSceneMainDemo()
extern void ETFXSceneManager_LoadSceneMainDemo_m70F4C7C5EE4597D9E841C29AECCFD0CA81C28E37 (void);
// 0x00000150 System.Void ETFXSceneManager::LoadSceneMissiles()
extern void ETFXSceneManager_LoadSceneMissiles_mB99EAF3004F5DEA20BE35072805A10ECA57448E7 (void);
// 0x00000151 System.Void ETFXSceneManager::LoadScenePortals()
extern void ETFXSceneManager_LoadScenePortals_m1B2413CADCA92522BDDD627784DF16FD60D2F689 (void);
// 0x00000152 System.Void ETFXSceneManager::LoadScenePortals2()
extern void ETFXSceneManager_LoadScenePortals2_m3ACA5707C45EFFA6CF56DF4C46FA463F5A0C8234 (void);
// 0x00000153 System.Void ETFXSceneManager::LoadScenePowerups()
extern void ETFXSceneManager_LoadScenePowerups_m17C376EDD497476395E80F44059E697969F02E45 (void);
// 0x00000154 System.Void ETFXSceneManager::LoadScenePowerups2()
extern void ETFXSceneManager_LoadScenePowerups2_m794E525131173D846FF3E93E8D5EE43C2ED1F0E8 (void);
// 0x00000155 System.Void ETFXSceneManager::LoadSceneSparkles()
extern void ETFXSceneManager_LoadSceneSparkles_m88CDB8CDE008657DA1B5067FCA0DC212FD33F5FF (void);
// 0x00000156 System.Void ETFXSceneManager::LoadSceneSwordCombat()
extern void ETFXSceneManager_LoadSceneSwordCombat_m9894108F9A1F0F0F3C41E949B971C3FC69D9F18E (void);
// 0x00000157 System.Void ETFXSceneManager::LoadSceneSwordCombat2()
extern void ETFXSceneManager_LoadSceneSwordCombat2_m0DB358EDEA5A3878935D46106295FE0896252325 (void);
// 0x00000158 System.Void ETFXSceneManager::LoadSceneMoney()
extern void ETFXSceneManager_LoadSceneMoney_mBECE1A285111F033F4C07471B6E4C6D0D23A4BF4 (void);
// 0x00000159 System.Void ETFXSceneManager::LoadSceneHealing()
extern void ETFXSceneManager_LoadSceneHealing_mBEC91CD262B682CB6FCBDCA9CF9547E9B487B197 (void);
// 0x0000015A System.Void ETFXSceneManager::LoadSceneWind()
extern void ETFXSceneManager_LoadSceneWind_mA896516E55DAF0CB0D04ECED1EFFDBEBA833FF69 (void);
// 0x0000015B System.Void ETFXSceneManager::Update()
extern void ETFXSceneManager_Update_m837F7099F9821C1978177139C1DC56D8DDFC132E (void);
// 0x0000015C System.Void ETFXSceneManager::.ctor()
extern void ETFXSceneManager__ctor_m60E2AAFF19268179EAC55C8580C43FF2EB93FEFB (void);
// 0x0000015D System.Void ParticleEffectsLibrary::Awake()
extern void ParticleEffectsLibrary_Awake_mF2AC0D83644D9429E668B1603C7F23D803AEEA46 (void);
// 0x0000015E System.Void ParticleEffectsLibrary::Start()
extern void ParticleEffectsLibrary_Start_mEB46C3D6FAF9CDCE0C134F6E807DBF702519CDC9 (void);
// 0x0000015F System.String ParticleEffectsLibrary::GetCurrentPENameString()
extern void ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50 (void);
// 0x00000160 System.Void ParticleEffectsLibrary::PreviousParticleEffect()
extern void ParticleEffectsLibrary_PreviousParticleEffect_m64E26B750D13C94BBA08E689744844E190550830 (void);
// 0x00000161 System.Void ParticleEffectsLibrary::NextParticleEffect()
extern void ParticleEffectsLibrary_NextParticleEffect_mC2497E960308324CF6ED87F2248E5ABBBFAC372D (void);
// 0x00000162 System.Void ParticleEffectsLibrary::SpawnParticleEffect(UnityEngine.Vector3)
extern void ParticleEffectsLibrary_SpawnParticleEffect_m245CE977A9E3D2A85EC1B9A96C559FC78E5A4F57 (void);
// 0x00000163 System.Void ParticleEffectsLibrary::.ctor()
extern void ParticleEffectsLibrary__ctor_m79285CB8E8EC1C6689AC297F476DC97D2B19620B (void);
// 0x00000164 System.Void PEButtonScript::Start()
extern void PEButtonScript_Start_mBAE6F283CF1BF849003C4A07636457CD26794A4A (void);
// 0x00000165 System.Void PEButtonScript::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern void PEButtonScript_OnPointerEnter_m13D52C4BBB849EEFBFE03A6150CCB45CBF76B661 (void);
// 0x00000166 System.Void PEButtonScript::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern void PEButtonScript_OnPointerExit_m74437A2567B5F27EA507688085E363B1DA9B9DD7 (void);
// 0x00000167 System.Void PEButtonScript::OnButtonClicked()
extern void PEButtonScript_OnButtonClicked_mAAE0BE73FD4EE3BCE49D05419C3CF9C90CB3F6B1 (void);
// 0x00000168 System.Void PEButtonScript::.ctor()
extern void PEButtonScript__ctor_mF6CD7E0AB9B93D2AC0CD5B782A58ADBB40FE968E (void);
// 0x00000169 System.Void UICanvasManager::Awake()
extern void UICanvasManager_Awake_mC3050903833E679EAD258432288E2E1AEF262F90 (void);
// 0x0000016A System.Void UICanvasManager::Start()
extern void UICanvasManager_Start_mF34E919B169144CB9C8666C9A8DCE009F5E6BD68 (void);
// 0x0000016B System.Void UICanvasManager::Update()
extern void UICanvasManager_Update_mFD93AA63AD21FF943446DAD0C8BF3AD4275CD482 (void);
// 0x0000016C System.Void UICanvasManager::UpdateToolTip(ButtonTypes)
extern void UICanvasManager_UpdateToolTip_mFA1330F8A25B3437AADA88116C2B3AF9B9A43256 (void);
// 0x0000016D System.Void UICanvasManager::ClearToolTip()
extern void UICanvasManager_ClearToolTip_m49C6117C20B9614BB602042D8A9DECF1AB68BC9C (void);
// 0x0000016E System.Void UICanvasManager::SelectPreviousPE()
extern void UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781 (void);
// 0x0000016F System.Void UICanvasManager::SelectNextPE()
extern void UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4 (void);
// 0x00000170 System.Void UICanvasManager::SpawnCurrentParticleEffect()
extern void UICanvasManager_SpawnCurrentParticleEffect_m2A1BB27F11451D24EE32BB3F30A8E9A3B007DDB5 (void);
// 0x00000171 System.Void UICanvasManager::UIButtonClick(ButtonTypes)
extern void UICanvasManager_UIButtonClick_m46983844912FADCFDDBA0455339B5E2162CB801C (void);
// 0x00000172 System.Void UICanvasManager::.ctor()
extern void UICanvasManager__ctor_mB927EAA45E53F674F466CFDF2205E5A29ED838DD (void);
// 0x00000173 System.Void FBWindowsA2UNotificationsManager::ScheduleButton()
extern void FBWindowsA2UNotificationsManager_ScheduleButton_m1E1DB09435A056565A733DD84847C9019D531892 (void);
// 0x00000174 System.Void FBWindowsA2UNotificationsManager::A2UNotificationCallback(Facebook.Unity.IScheduleAppToUserNotificationResult)
extern void FBWindowsA2UNotificationsManager_A2UNotificationCallback_mD5ECDC40A31DAAEAC969831DAF910E263C81A599 (void);
// 0x00000175 System.Void FBWindowsA2UNotificationsManager::.ctor()
extern void FBWindowsA2UNotificationsManager__ctor_mBCCEB3851695C75D2130EC70E1438AA15BFCD502 (void);
// 0x00000176 System.Void FBWindowsADSManager::LoadRewardedVideo(System.String)
extern void FBWindowsADSManager_LoadRewardedVideo_mA63B80E8909311DBBCDF248EEB2BDF40D1E13121 (void);
// 0x00000177 System.Void FBWindowsADSManager::ShowRewardedVideo(System.String)
extern void FBWindowsADSManager_ShowRewardedVideo_m1F84BE9B1757734C8BF3D3428774151748078886 (void);
// 0x00000178 System.Void FBWindowsADSManager::LoadInterstitialAd(System.String)
extern void FBWindowsADSManager_LoadInterstitialAd_m53B50AE6BB0B60147A5A8DC927DAE4F1957A175E (void);
// 0x00000179 System.Void FBWindowsADSManager::ShowInterstitialAd(System.String)
extern void FBWindowsADSManager_ShowInterstitialAd_m6E0127956CFF5DFED5F49E659735C8038CBAB664 (void);
// 0x0000017A System.Void FBWindowsADSManager::OnButtonLoadInterstitialAd()
extern void FBWindowsADSManager_OnButtonLoadInterstitialAd_mDA58548F3C90AFACD1F1FDBB5C88C76F5F394479 (void);
// 0x0000017B System.Void FBWindowsADSManager::OnButtonShowInterstitialAd()
extern void FBWindowsADSManager_OnButtonShowInterstitialAd_mC7791FE9006248604DC070887C57366CF0024A98 (void);
// 0x0000017C System.Void FBWindowsADSManager::OnButtonLoadRewardedVideo()
extern void FBWindowsADSManager_OnButtonLoadRewardedVideo_mBBEA74C400BA6BECD814B462177CB674F44032C6 (void);
// 0x0000017D System.Void FBWindowsADSManager::OnButtonShowRewardedVideo()
extern void FBWindowsADSManager_OnButtonShowRewardedVideo_m7476AEB159331175737AB663A0E84FA5A610FDF4 (void);
// 0x0000017E System.Void FBWindowsADSManager::.ctor()
extern void FBWindowsADSManager__ctor_m4E8E20D79CD84A71462FBC991B65E4589C22F021 (void);
// 0x0000017F System.Void FBWindowsADSManager/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m251A453E3B43DC6BC2112C50F95F77DC4875B3F3 (void);
// 0x00000180 System.Void FBWindowsADSManager/<>c__DisplayClass3_0::<LoadRewardedVideo>b__0(Facebook.Unity.IRewardedVideoResult)
extern void U3CU3Ec__DisplayClass3_0_U3CLoadRewardedVideoU3Eb__0_m754D9117465C8FB5F9100C1B117BF12E70440E1D (void);
// 0x00000181 System.Void FBWindowsADSManager/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m42B9115CD1146D2372A92D081BCE05985CD5204F (void);
// 0x00000182 System.Void FBWindowsADSManager/<>c__DisplayClass4_0::<ShowRewardedVideo>b__0(Facebook.Unity.IRewardedVideoResult)
extern void U3CU3Ec__DisplayClass4_0_U3CShowRewardedVideoU3Eb__0_m9809B444B20301ABA2F3E2B07C07B94A1EA562C3 (void);
// 0x00000183 System.Void FBWindowsADSManager/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m0DF6D9DEDA40D111C9BBA2E495E5E481E8AFFA38 (void);
// 0x00000184 System.Void FBWindowsADSManager/<>c__DisplayClass5_0::<LoadInterstitialAd>b__0(Facebook.Unity.IInterstitialAdResult)
extern void U3CU3Ec__DisplayClass5_0_U3CLoadInterstitialAdU3Eb__0_m4882E26A44D427FA7A811871207580F982465593 (void);
// 0x00000185 System.Void FBWindowsADSManager/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m56DB25DABAACEC78C71EC089971A0F4C1433CCA7 (void);
// 0x00000186 System.Void FBWindowsADSManager/<>c__DisplayClass6_0::<ShowInterstitialAd>b__0(Facebook.Unity.IInterstitialAdResult)
extern void U3CU3Ec__DisplayClass6_0_U3CShowInterstitialAdU3Eb__0_mB08457A09A7B46DE8D3F14B88EC4A84953115319 (void);
// 0x00000187 System.Void FBWindowsExampleTabsManager::Start()
extern void FBWindowsExampleTabsManager_Start_m8C61AD09CF633B711F483722EE00C57900D21D04 (void);
// 0x00000188 System.Void FBWindowsExampleTabsManager::ShowTab(System.Int32)
extern void FBWindowsExampleTabsManager_ShowTab_mE7CF605BF66BBEB5819398C232EDBECC90EFB4CC (void);
// 0x00000189 System.Void FBWindowsExampleTabsManager::.ctor()
extern void FBWindowsExampleTabsManager__ctor_mEB5F2889C9C25E2BE84D3FDA9E7A0B80B29E5E8E (void);
// 0x0000018A System.Void FBWindowsFriendsManager::Button_OpenReceivedInvitations()
extern void FBWindowsFriendsManager_Button_OpenReceivedInvitations_m758D303C1B87688B9EDA9FFE5FFC5CAD7676E2D7 (void);
// 0x0000018B System.Void FBWindowsFriendsManager::OpenFriendsDialogCallBack(Facebook.Unity.IGamingServicesFriendFinderResult)
extern void FBWindowsFriendsManager_OpenFriendsDialogCallBack_mD72E11E4C98EBDA98BAAEEB09AE370569DF76035 (void);
// 0x0000018C System.Void FBWindowsFriendsManager::Button_GetFriendFinderInvitations()
extern void FBWindowsFriendsManager_Button_GetFriendFinderInvitations_mB1577285B99213DCBB689720D5F1E083B63F58E6 (void);
// 0x0000018D System.Void FBWindowsFriendsManager::GetFriendFinderInvitationsCallback(Facebook.Unity.IFriendFinderInvitationResult)
extern void FBWindowsFriendsManager_GetFriendFinderInvitationsCallback_mF72BAFB745CAF465316CD1166A506529ED5FA2DE (void);
// 0x0000018E System.Void FBWindowsFriendsManager::DeleteFriendFinderInvitationCallback(Facebook.Unity.IFriendFinderInvitationResult)
extern void FBWindowsFriendsManager_DeleteFriendFinderInvitationCallback_m4EE9D1FB91B9AA763D4D0A68DA31A75874A5C76A (void);
// 0x0000018F System.Void FBWindowsFriendsManager::.ctor()
extern void FBWindowsFriendsManager__ctor_mC18D6A75FC2D9B17802011A41FB2EA03BD531B73 (void);
// 0x00000190 System.Void FBWindowsFriendsManager/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mD279371C9EA619A765000E3FD7EF87AFED864920 (void);
// 0x00000191 System.Void FBWindowsFriendsManager/<>c__DisplayClass6_0::<GetFriendFinderInvitationsCallback>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CGetFriendFinderInvitationsCallbackU3Eb__0_m4BC19A757542CB9B0139840529E7D9C34DB03D95 (void);
// 0x00000192 System.Void FBWindowsGraphAPIManager::Start()
extern void FBWindowsGraphAPIManager_Start_m6DD4F1E460767F0BB7458C73341E32B236BE821E (void);
// 0x00000193 System.Void FBWindowsGraphAPIManager::OnEnable()
extern void FBWindowsGraphAPIManager_OnEnable_m09429F8371FF238D0890A5905EA6F78B63719A6C (void);
// 0x00000194 System.Void FBWindowsGraphAPIManager::GraphAPI()
extern void FBWindowsGraphAPIManager_GraphAPI_mED08E62FF2549BB7F42D77DB74349B2F91B6B4AA (void);
// 0x00000195 System.Void FBWindowsGraphAPIManager::SetGraphAPiVersion()
extern void FBWindowsGraphAPIManager_SetGraphAPiVersion_m1EBD08D3D823FCCEB2D683CE55953ED5D09BD189 (void);
// 0x00000196 System.Void FBWindowsGraphAPIManager::.ctor()
extern void FBWindowsGraphAPIManager__ctor_mA2C5E55465E8939693FFCDEE0491D7AE821BA967 (void);
// 0x00000197 System.Void FBWindowsGraphAPIManager::<GraphAPI>b__8_0(Facebook.Unity.IGraphResult)
extern void FBWindowsGraphAPIManager_U3CGraphAPIU3Eb__8_0_m0E7B4C156EBF6318FAC13F8D7CC91D9FE86ADC95 (void);
// 0x00000198 System.Void FBWindowsInitManager::InitButton()
extern void FBWindowsInitManager_InitButton_m91585B7DDF180D6DC885ED0698860F4C2BC55C4E (void);
// 0x00000199 System.Void FBWindowsInitManager::InitCallback()
extern void FBWindowsInitManager_InitCallback_m9C355A126124B28332B2E50C87AEF92353909500 (void);
// 0x0000019A System.Void FBWindowsInitManager::OnHideUnity(System.Boolean)
extern void FBWindowsInitManager_OnHideUnity_mEA7D93BF70509FD8D85613E7B328F21047B09C40 (void);
// 0x0000019B System.Void FBWindowsInitManager::.ctor()
extern void FBWindowsInitManager__ctor_mE3DF8EE9E8FA9BE75F842720E968914DE8D45C8D (void);
// 0x0000019C System.Void FBWindowsLoginManager::LogInReadButton()
extern void FBWindowsLoginManager_LogInReadButton_mD464AA50450B8DCF2BF31AE166EDE4E6EDB78452 (void);
// 0x0000019D System.Void FBWindowsLoginManager::LogInPublishButton()
extern void FBWindowsLoginManager_LogInPublishButton_mF4A5194A80AA8E3513F8D072E92A0E8693790293 (void);
// 0x0000019E System.Void FBWindowsLoginManager::LogOutButton()
extern void FBWindowsLoginManager_LogOutButton_mE63114361311C63C41D30BAEDD7D25837F2EA0BC (void);
// 0x0000019F System.Void FBWindowsLoginManager::AuthCallback(Facebook.Unity.ILoginResult)
extern void FBWindowsLoginManager_AuthCallback_m1EA6C32AE674B4507BB9AF164B65D5B1F10D4448 (void);
// 0x000001A0 System.Void FBWindowsLoginManager::GetCurrentProfile()
extern void FBWindowsLoginManager_GetCurrentProfile_m286865D50DF36DD633A27B3BA88B4129E93FC458 (void);
// 0x000001A1 System.Void FBWindowsLoginManager::GetUserLocale()
extern void FBWindowsLoginManager_GetUserLocale_mFC499F14C482D25EC8E63CBEE811AE2231AE716D (void);
// 0x000001A2 System.Collections.IEnumerator FBWindowsLoginManager::LoadPictureFromUrl(System.String,UnityEngine.UI.RawImage)
extern void FBWindowsLoginManager_LoadPictureFromUrl_mC19CD6E89FEBFC0AE1360BA22D255BC4AFF3FB29 (void);
// 0x000001A3 System.Void FBWindowsLoginManager::.ctor()
extern void FBWindowsLoginManager__ctor_m341EF79AEF1BCDB243A3045D2CDE6FF9DCE47137 (void);
// 0x000001A4 System.Void FBWindowsLoginManager::<GetCurrentProfile>b__8_0(Facebook.Unity.IProfileResult)
extern void FBWindowsLoginManager_U3CGetCurrentProfileU3Eb__8_0_m170EA42BAD2A057D3413A29A91A6F05FD065A5C4 (void);
// 0x000001A5 System.Void FBWindowsLoginManager::<GetUserLocale>b__9_0(Facebook.Unity.ILocaleResult)
extern void FBWindowsLoginManager_U3CGetUserLocaleU3Eb__9_0_m695B3860401653E9CD71D3F6BC016E565500C04D (void);
// 0x000001A6 System.Void FBWindowsLoginManager/<LoadPictureFromUrl>d__10::.ctor(System.Int32)
extern void U3CLoadPictureFromUrlU3Ed__10__ctor_m9EEB7A63008A932E079C0A3EDEFFB926F0745D4E (void);
// 0x000001A7 System.Void FBWindowsLoginManager/<LoadPictureFromUrl>d__10::System.IDisposable.Dispose()
extern void U3CLoadPictureFromUrlU3Ed__10_System_IDisposable_Dispose_mF6AA89FF0A768DDDCD3D16DFB8BEE290C43AFD37 (void);
// 0x000001A8 System.Boolean FBWindowsLoginManager/<LoadPictureFromUrl>d__10::MoveNext()
extern void U3CLoadPictureFromUrlU3Ed__10_MoveNext_m49F1F8C7737731DD774E4070550E2D7746EA93E5 (void);
// 0x000001A9 System.Object FBWindowsLoginManager/<LoadPictureFromUrl>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CLoadPictureFromUrlU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB3FA154E2B68AE513F7B0A987C6C4AC77C6C0D35 (void);
// 0x000001AA System.Void FBWindowsLoginManager/<LoadPictureFromUrl>d__10::System.Collections.IEnumerator.Reset()
extern void U3CLoadPictureFromUrlU3Ed__10_System_Collections_IEnumerator_Reset_mB1EE45887C3F812C92F230C0E43C498C88BC625E (void);
// 0x000001AB System.Object FBWindowsLoginManager/<LoadPictureFromUrl>d__10::System.Collections.IEnumerator.get_Current()
extern void U3CLoadPictureFromUrlU3Ed__10_System_Collections_IEnumerator_get_Current_m50EBA0B4A78657063B0B26E5E41E26B8378EEACF (void);
// 0x000001AC System.Void FBWindowsLogsManager::Awake()
extern void FBWindowsLogsManager_Awake_mDA9315E97E655112AAF12CE8DC662295101E3776 (void);
// 0x000001AD System.Void FBWindowsLogsManager::DebugLog(System.String)
extern void FBWindowsLogsManager_DebugLog_m3B4802A0C38BC8BA51F4CE22D774DFC48A2B1B7D (void);
// 0x000001AE System.Void FBWindowsLogsManager::DebugErrorLog(System.String)
extern void FBWindowsLogsManager_DebugErrorLog_m113DD71EC8DE8EC5C4763796B6C47E14CD4F3F11 (void);
// 0x000001AF System.Void FBWindowsLogsManager::DebugWarningLog(System.String)
extern void FBWindowsLogsManager_DebugWarningLog_mB3950B0DB164858F93DA7E26A7AF770EEB3B7430 (void);
// 0x000001B0 System.Void FBWindowsLogsManager::DebugClean()
extern void FBWindowsLogsManager_DebugClean_mDD86E796937794CA11126DE45D17C12B39BEB659 (void);
// 0x000001B1 System.Void FBWindowsLogsManager::ScrollToTheBottom()
extern void FBWindowsLogsManager_ScrollToTheBottom_mA235CC0E40A34876554DDD563DF7C7DC7FF178A6 (void);
// 0x000001B2 System.Void FBWindowsLogsManager::.ctor()
extern void FBWindowsLogsManager__ctor_m2CDF3DCD98FDEFC87A323950CC22C38C837B1F19 (void);
// 0x000001B3 System.Void FBWindowsPhysicalGamepadManager::Start()
extern void FBWindowsPhysicalGamepadManager_Start_m0D7AE798B36C464F70E10970926D44B0B53B0D3B (void);
// 0x000001B4 System.Void FBWindowsPhysicalGamepadManager::.ctor()
extern void FBWindowsPhysicalGamepadManager__ctor_m9E9E1CDE0E4211430B25C1D7677547E5EB1B6CE3 (void);
// 0x000001B5 System.Void FBWindowsPurchaseManager::GetCatalogButton()
extern void FBWindowsPurchaseManager_GetCatalogButton_mB285FE3F2C1AE92041601DE223130E205DE91769 (void);
// 0x000001B6 System.Void FBWindowsPurchaseManager::ProcessGetCatalog(Facebook.Unity.ICatalogResult)
extern void FBWindowsPurchaseManager_ProcessGetCatalog_mBC691143EF994F995AF20C4185E0E3DBA6F9FCE8 (void);
// 0x000001B7 System.Collections.IEnumerator FBWindowsPurchaseManager::LoadPictureFromUrl(System.String,UnityEngine.UI.RawImage)
extern void FBWindowsPurchaseManager_LoadPictureFromUrl_m8F576F8433A34198C9775644188EFCADBC0C6E6F (void);
// 0x000001B8 System.Void FBWindowsPurchaseManager::ProcessPurchase(Facebook.Unity.IPurchaseResult)
extern void FBWindowsPurchaseManager_ProcessPurchase_mA20D49D3AAB967C089CE41DF3DA8A0351A6D6CD2 (void);
// 0x000001B9 System.Void FBWindowsPurchaseManager::GetPurchases()
extern void FBWindowsPurchaseManager_GetPurchases_mCB24A00C33F68F6CB1ADFF31F3840F124338750A (void);
// 0x000001BA System.Void FBWindowsPurchaseManager::processPurchases(Facebook.Unity.IPurchasesResult)
extern void FBWindowsPurchaseManager_processPurchases_m4751E163AB4A2B005B1D84EFBC2A2D37C3BF535C (void);
// 0x000001BB System.Void FBWindowsPurchaseManager::.ctor()
extern void FBWindowsPurchaseManager__ctor_m67504549059953A95E28473A82D9071D40D5A84A (void);
// 0x000001BC System.Void FBWindowsPurchaseManager/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m8E0D79554FD9F8DDF8F151F779BEC80486594EC0 (void);
// 0x000001BD System.Void FBWindowsPurchaseManager/<>c__DisplayClass5_0::<ProcessGetCatalog>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CProcessGetCatalogU3Eb__0_m4CF890B17D5B9D50CD263816F450456E16AFD1FE (void);
// 0x000001BE System.Void FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::.ctor(System.Int32)
extern void U3CLoadPictureFromUrlU3Ed__6__ctor_mFCAC1E0CD9AFEF9D4FC7C2B08FC7525F559DA8A2 (void);
// 0x000001BF System.Void FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::System.IDisposable.Dispose()
extern void U3CLoadPictureFromUrlU3Ed__6_System_IDisposable_Dispose_m8C674AE011C63B72DCEFF7368DA58D764B79C3EA (void);
// 0x000001C0 System.Boolean FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::MoveNext()
extern void U3CLoadPictureFromUrlU3Ed__6_MoveNext_m1A03D1B07139C8798F268EAA92134F89793604AF (void);
// 0x000001C1 System.Object FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CLoadPictureFromUrlU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F863DD15052B9E3A586A1328846AF3C233EBA15 (void);
// 0x000001C2 System.Void FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::System.Collections.IEnumerator.Reset()
extern void U3CLoadPictureFromUrlU3Ed__6_System_Collections_IEnumerator_Reset_m89151C82740561EB785AF5B2A4AB8303F214CF0A (void);
// 0x000001C3 System.Object FBWindowsPurchaseManager/<LoadPictureFromUrl>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CLoadPictureFromUrlU3Ed__6_System_Collections_IEnumerator_get_Current_m44D460CB604C85FBE166902DEE8B3AF96DF5E19B (void);
// 0x000001C4 System.Void FBWindowsPurchaseManager/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m56D4F574162DAA0DC9EA9494462CCD617008F901 (void);
// 0x000001C5 System.Void FBWindowsPurchaseManager/<>c__DisplayClass9_0::<processPurchases>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3CprocessPurchasesU3Eb__0_m672EF6F8DAEF89BA3DD0BFA610B30D9F01130E6B (void);
// 0x000001C6 System.Void FBWindowsPurchaseManager/<>c__DisplayClass9_0::<processPurchases>b__1(Facebook.Unity.IConsumePurchaseResult)
extern void U3CU3Ec__DisplayClass9_0_U3CprocessPurchasesU3Eb__1_m16A8CAD55992864B2DE76CFC1ECE2B903727225B (void);
// 0x000001C7 System.Void FBWindowsShareManager::Button_UploadImage()
extern void FBWindowsShareManager_Button_UploadImage_m1FFD7CDC7EF00577C2D8DE56396794E10A6338EC (void);
// 0x000001C8 System.Void FBWindowsShareManager::Button_UploadVideo()
extern void FBWindowsShareManager_Button_UploadVideo_m71548715579F703D2AAAD7BD9EAC85B03E96CAF5 (void);
// 0x000001C9 System.Void FBWindowsShareManager::CallbackUploadImage(Facebook.Unity.IMediaUploadResult)
extern void FBWindowsShareManager_CallbackUploadImage_m23D3F141ABD3F7B5C1ED2495125B844A04271A51 (void);
// 0x000001CA System.Void FBWindowsShareManager::CallbackUploadVideo(Facebook.Unity.IMediaUploadResult)
extern void FBWindowsShareManager_CallbackUploadVideo_mD73A78415B614804367AC60041621D43CAA62B2D (void);
// 0x000001CB System.Void FBWindowsShareManager::.ctor()
extern void FBWindowsShareManager__ctor_m71A6FCB04FFEF4335E4A2871F560DF65149043A2 (void);
// 0x000001CC System.Void FBWindowsSoftKeyboardManager::SetSoftKeyboardOpenButton()
extern void FBWindowsSoftKeyboardManager_SetSoftKeyboardOpenButton_m017F41AE3D6EB831CAC37D5B5B08EE542C4553FB (void);
// 0x000001CD System.Void FBWindowsSoftKeyboardManager::CallbackSetSoftKeyboardOpen(Facebook.Unity.ISoftKeyboardOpenResult)
extern void FBWindowsSoftKeyboardManager_CallbackSetSoftKeyboardOpen_m5BC943873544190661B30749EB4E212E39272E13 (void);
// 0x000001CE System.Void FBWindowsSoftKeyboardManager::.ctor()
extern void FBWindowsSoftKeyboardManager__ctor_m3ED26295A8E16065E7B132B22E6888B01A96B6D7 (void);
// 0x000001CF System.Collections.Generic.Dictionary`2<System.String,System.String> FBWindowsTournamentsManager::ConvertDataToDict(System.String)
extern void FBWindowsTournamentsManager_ConvertDataToDict_m957B59DCBCBBA8ADB9BF14CAC897915650000123 (void);
// 0x000001D0 System.Void FBWindowsTournamentsManager::Button_CreateTournament()
extern void FBWindowsTournamentsManager_Button_CreateTournament_m48593D0E8A103A49FCE369372C59D67668D79E63 (void);
// 0x000001D1 System.Void FBWindowsTournamentsManager::CallbackCreateTournament(Facebook.Unity.ITournamentResult)
extern void FBWindowsTournamentsManager_CallbackCreateTournament_mA8C1C64D80F7D1092EF621BDB587E3856FB16219 (void);
// 0x000001D2 System.Void FBWindowsTournamentsManager::Button_PostSessionScore()
extern void FBWindowsTournamentsManager_Button_PostSessionScore_m9D92F41F413320DB5633DFF143DA3649D975FBE6 (void);
// 0x000001D3 System.Void FBWindowsTournamentsManager::CallbackPostSessionScore(Facebook.Unity.ISessionScoreResult)
extern void FBWindowsTournamentsManager_CallbackPostSessionScore_mB9180114F19BE46EBC92B4093577F1DC4ECFCAFA (void);
// 0x000001D4 System.Void FBWindowsTournamentsManager::Button_PostTournamentScore()
extern void FBWindowsTournamentsManager_Button_PostTournamentScore_mCDDDD7549C629288461E228D9A6CB2CBE8792BAB (void);
// 0x000001D5 System.Void FBWindowsTournamentsManager::CallbackPostTournamentScore(Facebook.Unity.ITournamentScoreResult)
extern void FBWindowsTournamentsManager_CallbackPostTournamentScore_mE8DF6C42C53FBCE134D892AA48C5379CEF8B7BBF (void);
// 0x000001D6 System.Void FBWindowsTournamentsManager::Button_ShareTournament()
extern void FBWindowsTournamentsManager_Button_ShareTournament_m2993547EA9296BF2A66B87BB4BDBBED59AFB5F33 (void);
// 0x000001D7 System.Void FBWindowsTournamentsManager::CallbackShareTournament(Facebook.Unity.ITournamentScoreResult)
extern void FBWindowsTournamentsManager_CallbackShareTournament_m42520665AC25B3C5AA001A98A7AC9F63E114D720 (void);
// 0x000001D8 System.Void FBWindowsTournamentsManager::Button_GetTournament()
extern void FBWindowsTournamentsManager_Button_GetTournament_mF86D25202EA500123CC2A1A0E910E467627FA915 (void);
// 0x000001D9 System.Void FBWindowsTournamentsManager::CallbackGetTournament(Facebook.Unity.ITournamentResult)
extern void FBWindowsTournamentsManager_CallbackGetTournament_m62C3F26B7629D13AD79547392BF904925A5B7FF0 (void);
// 0x000001DA System.Void FBWindowsTournamentsManager::.ctor()
extern void FBWindowsTournamentsManager__ctor_m65AFDD841835BB7A8550C12F089A9A5CC6D1ACE4 (void);
// 0x000001DB System.Void FBWindowsVirtualGamepadManager::SetVirtualGamepadLayout()
extern void FBWindowsVirtualGamepadManager_SetVirtualGamepadLayout_mDE6BE733314A7BA7A039F1ADE930948BDD491619 (void);
// 0x000001DC System.Void FBWindowsVirtualGamepadManager::CallbackSetVirtualGamepadLayout(Facebook.Unity.IVirtualGamepadLayoutResult)
extern void FBWindowsVirtualGamepadManager_CallbackSetVirtualGamepadLayout_m048B38EA808953D897CC2599977DF0DFE7BBABBA (void);
// 0x000001DD System.Void FBWindowsVirtualGamepadManager::.ctor()
extern void FBWindowsVirtualGamepadManager__ctor_mF19C463251E64906F96CDD79C29649B2E379A2AF (void);
// 0x000001DE System.Void JoystickPlayerExample::FixedUpdate()
extern void JoystickPlayerExample_FixedUpdate_m9AEDBA111F95D67A006A5D3821956048224541B7 (void);
// 0x000001DF System.Void JoystickPlayerExample::.ctor()
extern void JoystickPlayerExample__ctor_m702422E0AE29402330CF41FDDBEE76F0506342E2 (void);
// 0x000001E0 System.Void JoystickSetterExample::ModeChanged(System.Int32)
extern void JoystickSetterExample_ModeChanged_m35AF30EE3E6C8CEBF064A7AB80F5795E9AF06D23 (void);
// 0x000001E1 System.Void JoystickSetterExample::AxisChanged(System.Int32)
extern void JoystickSetterExample_AxisChanged_m5CA220FEA14E06BD8A445E31C5B66E4601C5E404 (void);
// 0x000001E2 System.Void JoystickSetterExample::SnapX(System.Boolean)
extern void JoystickSetterExample_SnapX_m25A77C3DE4C6DBBE3B4A58E2DE8CD44B1773D6A1 (void);
// 0x000001E3 System.Void JoystickSetterExample::SnapY(System.Boolean)
extern void JoystickSetterExample_SnapY_m54FE8DCB2CE8D2BF5D2CDF84C68DE263F0E25B1B (void);
// 0x000001E4 System.Void JoystickSetterExample::Update()
extern void JoystickSetterExample_Update_m99B2432D22FE669B4DC3209696AD4A62096C7D41 (void);
// 0x000001E5 System.Void JoystickSetterExample::.ctor()
extern void JoystickSetterExample__ctor_m2A3D66E05BCDF78D0F116348094717BEBA73EC91 (void);
// 0x000001E6 System.Single Joystick::get_Horizontal()
extern void Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (void);
// 0x000001E7 System.Single Joystick::get_Vertical()
extern void Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (void);
// 0x000001E8 UnityEngine.Vector2 Joystick::get_Direction()
extern void Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (void);
// 0x000001E9 System.Single Joystick::get_HandleRange()
extern void Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77 (void);
// 0x000001EA System.Void Joystick::set_HandleRange(System.Single)
extern void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (void);
// 0x000001EB System.Single Joystick::get_DeadZone()
extern void Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC (void);
// 0x000001EC System.Void Joystick::set_DeadZone(System.Single)
extern void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (void);
// 0x000001ED AxisOptions Joystick::get_AxisOptions()
extern void Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (void);
// 0x000001EE System.Void Joystick::set_AxisOptions(AxisOptions)
extern void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (void);
// 0x000001EF System.Boolean Joystick::get_SnapX()
extern void Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40 (void);
// 0x000001F0 System.Void Joystick::set_SnapX(System.Boolean)
extern void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (void);
// 0x000001F1 System.Boolean Joystick::get_SnapY()
extern void Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613 (void);
// 0x000001F2 System.Void Joystick::set_SnapY(System.Boolean)
extern void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (void);
// 0x000001F3 System.Void Joystick::Start()
extern void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (void);
// 0x000001F4 System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (void);
// 0x000001F5 System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (void);
// 0x000001F6 System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
extern void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (void);
// 0x000001F7 System.Void Joystick::FormatInput()
extern void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (void);
// 0x000001F8 System.Single Joystick::SnapFloat(System.Single,AxisOptions)
extern void Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (void);
// 0x000001F9 System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (void);
// 0x000001FA UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
extern void Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (void);
// 0x000001FB System.Void Joystick::.ctor()
extern void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (void);
// 0x000001FC System.Single DynamicJoystick::get_MoveThreshold()
extern void DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A (void);
// 0x000001FD System.Void DynamicJoystick::set_MoveThreshold(System.Single)
extern void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (void);
// 0x000001FE System.Void DynamicJoystick::Start()
extern void DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72 (void);
// 0x000001FF System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern void DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136 (void);
// 0x00000200 System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern void DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C (void);
// 0x00000201 System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
extern void DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506 (void);
// 0x00000202 System.Void DynamicJoystick::.ctor()
extern void DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB (void);
// 0x00000203 System.Void FixedJoystick::.ctor()
extern void FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24 (void);
// 0x00000204 System.Void FloatingJoystick::Start()
extern void FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81 (void);
// 0x00000205 System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern void FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54 (void);
// 0x00000206 System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern void FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D (void);
// 0x00000207 System.Void FloatingJoystick::.ctor()
extern void FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C (void);
// 0x00000208 System.Single VariableJoystick::get_MoveThreshold()
extern void VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99 (void);
// 0x00000209 System.Void VariableJoystick::set_MoveThreshold(System.Single)
extern void VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A (void);
// 0x0000020A System.Void VariableJoystick::SetMode(JoystickType)
extern void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (void);
// 0x0000020B System.Void VariableJoystick::Start()
extern void VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D (void);
// 0x0000020C System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern void VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5 (void);
// 0x0000020D System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern void VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526 (void);
// 0x0000020E System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
extern void VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB (void);
// 0x0000020F System.Void VariableJoystick::.ctor()
extern void VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852 (void);
// 0x00000210 System.Void ArrowScript::Update()
extern void ArrowScript_Update_m4747202A0415B5CB7F2F859B24D76DD173F7FDDF (void);
// 0x00000211 System.Void ArrowScript::.ctor()
extern void ArrowScript__ctor_m49CA01FF02363891A4F87C9B9FEB66798F181794 (void);
// 0x00000212 System.Void BoothVisitorScript::ChangeSuit()
extern void BoothVisitorScript_ChangeSuit_m5B8675B5517A3D3F5AD769C4FA9A7E5176F5D977 (void);
// 0x00000213 System.Void BoothVisitorScript::Jumped()
extern void BoothVisitorScript_Jumped_m0E04080ED9F598EBC0D6F0DD680B369AEA7FB496 (void);
// 0x00000214 System.Void BoothVisitorScript::.ctor()
extern void BoothVisitorScript__ctor_m8A2541301E49333E8FBFC11AFB3D403E569673DC (void);
// 0x00000215 System.Void BuyCinemaRoomScript::AddMoney(UnityEngine.Transform)
extern void BuyCinemaRoomScript_AddMoney_m1278122F7334980075B453B7EA6EECC27A3A3339 (void);
// 0x00000216 System.Void BuyCinemaRoomScript::.ctor()
extern void BuyCinemaRoomScript__ctor_m365CBEFA85F0CF5E8B453A817DF9D3AF235E7D83 (void);
// 0x00000217 System.Void BuyCinemaRoomScript::<AddMoney>b__2_0()
extern void BuyCinemaRoomScript_U3CAddMoneyU3Eb__2_0_mA9D62D60C81D7FB9E2E973676C21BEED868564FE (void);
// 0x00000218 System.Void BuyCinemaRoomScript/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m7449648191D772A8C33A8E0EF47A4149CFE2F6C6 (void);
// 0x00000219 System.Void BuyCinemaRoomScript/<>c__DisplayClass2_0::<AddMoney>b__1()
extern void U3CU3Ec__DisplayClass2_0_U3CAddMoneyU3Eb__1_m350F6C9BA94351D6A3EA5B35E099F51CB6886F0F (void);
// 0x0000021A System.Void BuyElevatorScript::AddMoney(UnityEngine.Transform)
extern void BuyElevatorScript_AddMoney_m3EC231C6BB7817FC8DFBC35D1E3457C99B46DF85 (void);
// 0x0000021B System.Void BuyElevatorScript::.ctor()
extern void BuyElevatorScript__ctor_m90E5E5586C790A825B1BF6270CBB5CE9A9A694FE (void);
// 0x0000021C System.Void BuyElevatorScript::<AddMoney>b__2_0()
extern void BuyElevatorScript_U3CAddMoneyU3Eb__2_0_m37A3D36CEA822B259E5661A546D476F73A5FFCF9 (void);
// 0x0000021D System.Void BuyElevatorScript::<AddMoney>b__2_2()
extern void BuyElevatorScript_U3CAddMoneyU3Eb__2_2_mF61541E9FC3C3C1A249561AE143B0B87A5A7C4B9 (void);
// 0x0000021E System.Void BuyElevatorScript/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m678AE92CE04CE95D423A8E27E192CBB0EAB47D77 (void);
// 0x0000021F System.Void BuyElevatorScript/<>c__DisplayClass2_0::<AddMoney>b__1()
extern void U3CU3Ec__DisplayClass2_0_U3CAddMoneyU3Eb__1_m88C5149777BA33BD4DF28DF3611D2E866B773E83 (void);
// 0x00000220 System.Void BuyExtensionScript::AddMoney(UnityEngine.Transform)
extern void BuyExtensionScript_AddMoney_mF55F9788AB8A92370331969E226FC20ED65F1273 (void);
// 0x00000221 System.Void BuyExtensionScript::.ctor()
extern void BuyExtensionScript__ctor_m1809A1C3071F6460F4B2ECBA3D48642E1F5F8627 (void);
// 0x00000222 System.Void BuyExtensionScript::<AddMoney>b__2_0()
extern void BuyExtensionScript_U3CAddMoneyU3Eb__2_0_mB2A477A5D03B953FDA5DD981A9FB79D3F3A020F5 (void);
// 0x00000223 System.Void BuyExtensionScript/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m0B1537ECE65414C4C126AE03305BD31FA290B762 (void);
// 0x00000224 System.Void BuyExtensionScript/<>c__DisplayClass2_0::<AddMoney>b__1()
extern void U3CU3Ec__DisplayClass2_0_U3CAddMoneyU3Eb__1_m3532FFBA3071B38537E490502A00512DFB140C3A (void);
// 0x00000225 System.Void BuyExtensionScript/<>c::.cctor()
extern void U3CU3Ec__cctor_mDB3945D9E6F3B23025C905344BD9FE34811A2DB3 (void);
// 0x00000226 System.Void BuyExtensionScript/<>c::.ctor()
extern void U3CU3Ec__ctor_m82BB2D22461339A2A59E5C65A8A29D6AB44E2F33 (void);
// 0x00000227 System.Void BuyExtensionScript/<>c::<AddMoney>b__2_2()
extern void U3CU3Ec_U3CAddMoneyU3Eb__2_2_m945C68211196A31DFE66EC1F9B7CA72DD01722F1 (void);
// 0x00000228 System.Void BuyLiftScript::AddMoney(UnityEngine.Transform)
extern void BuyLiftScript_AddMoney_mAD6C7B68F008CB1C7AC3669E2D34D3D9D4501CA0 (void);
// 0x00000229 System.Void BuyLiftScript::.ctor()
extern void BuyLiftScript__ctor_mE210BF5EFB1866B6C0E38E84349D296E632BCCAD (void);
// 0x0000022A System.Void BuyLiftScript::<AddMoney>b__1_0()
extern void BuyLiftScript_U3CAddMoneyU3Eb__1_0_m1AADBEE1B28B46661646FFC38937B7A63045CA56 (void);
// 0x0000022B System.Void BuyLiftScript/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mC0485871A3B34C27FDB603569EEA2B25DFF45CDC (void);
// 0x0000022C System.Void BuyLiftScript/<>c__DisplayClass1_0::<AddMoney>b__1()
extern void U3CU3Ec__DisplayClass1_0_U3CAddMoneyU3Eb__1_m746D1E31ED2336EAC256B6DA0820BDD20D05E3C6 (void);
// 0x0000022D System.Void BuyObject::Start()
extern void BuyObject_Start_mCD5AF81D3CEB51450F7B4ADE3E6B7D3E6D6B144D (void);
// 0x0000022E System.Void BuyObject::OnEnable()
extern void BuyObject_OnEnable_m98E5A89CE1679CDFE2B12B3196824ADBA5C4D6F5 (void);
// 0x0000022F System.Void BuyObject::CheckLevel()
extern void BuyObject_CheckLevel_mDF5AB3BB5296483FEC7642C7031295B54EF35300 (void);
// 0x00000230 System.Void BuyObject::AddMoney(UnityEngine.Transform)
extern void BuyObject_AddMoney_mFF126D8C72651DB409DEBDD8CACFBB7AFAD3130E (void);
// 0x00000231 System.Void BuyObject::OnTriggerEnter(UnityEngine.Collider)
extern void BuyObject_OnTriggerEnter_m17872DEC942CA5A3AFD2444127797E865F1A701F (void);
// 0x00000232 System.Void BuyObject::OnTriggerStay(UnityEngine.Collider)
extern void BuyObject_OnTriggerStay_mE063565E5391B8719F39273EB8D4CDB06ED86697 (void);
// 0x00000233 System.Boolean BuyObject::IsPossible(UnityEngine.Collider)
extern void BuyObject_IsPossible_m282A0D5044DCC54F5A5218E5472C35A98A4F00BC (void);
// 0x00000234 System.Void BuyObject::.ctor()
extern void BuyObject__ctor_mF5E20725C6DD840B678E044F92E1A147D0F2E34A (void);
// 0x00000235 System.Void BuyObject::<AddMoney>b__16_0()
extern void BuyObject_U3CAddMoneyU3Eb__16_0_mB5E832AC57F4DD2D86038AA59D3B846FE5726724 (void);
// 0x00000236 System.Void BuyObject/<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_mED4B3DBA75B6C9B0B17146D07F3ACCC15945CA17 (void);
// 0x00000237 System.Void BuyObject/<>c__DisplayClass16_0::<AddMoney>b__1()
extern void U3CU3Ec__DisplayClass16_0_U3CAddMoneyU3Eb__1_m95A0A191923C5BA0389419CD8ABA6D396EBB77B3 (void);
// 0x00000238 System.Void BuyObject/<>c::.cctor()
extern void U3CU3Ec__cctor_mD189FE53D92F220A6167AFF5A0FF3C8FE4DB37A3 (void);
// 0x00000239 System.Void BuyObject/<>c::.ctor()
extern void U3CU3Ec__ctor_m84F4C38D5FF4BCA1B973F23DF881D88C4CDF0100 (void);
// 0x0000023A System.Void BuyObject/<>c::<AddMoney>b__16_2()
extern void U3CU3Ec_U3CAddMoneyU3Eb__16_2_m237B9C5EAF6AEC01F3CBFD8C5325A557871E0868 (void);
// 0x0000023B System.Void BuyRoomScript::Awake()
extern void BuyRoomScript_Awake_mF81276719534588540BA430FC47526377FA9879A (void);
// 0x0000023C System.Void BuyRoomScript::AddMoney(UnityEngine.Transform)
extern void BuyRoomScript_AddMoney_m080162E019310319B21C951D266CADA994C5E043 (void);
// 0x0000023D System.Void BuyRoomScript::.ctor()
extern void BuyRoomScript__ctor_mCAF7799EB5032D40C8BE348C99CF4E9A6EEEE1D5 (void);
// 0x0000023E System.Void BuyRoomScript::<AddMoney>b__2_0()
extern void BuyRoomScript_U3CAddMoneyU3Eb__2_0_m786EACC84C1011057EDFBD54F8B5B35D8C5B356C (void);
// 0x0000023F System.Void BuyRoomScript/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m3DBCF6F872803E09ED2C154A40125C322911F892 (void);
// 0x00000240 System.Void BuyRoomScript/<>c__DisplayClass2_0::<AddMoney>b__1()
extern void U3CU3Ec__DisplayClass2_0_U3CAddMoneyU3Eb__1_m061071241B5E359D866B3C819654963F52CBE69E (void);
// 0x00000241 System.Void BuyScript::Start()
extern void BuyScript_Start_m26142813D4BFC5FA69CD711D9A7BC8ADE83AFC8C (void);
// 0x00000242 System.Void BuyScript::OnEnable()
extern void BuyScript_OnEnable_mC0EDFC073A9E24CED4618A0880AC5EAA209C9D79 (void);
// 0x00000243 System.Void BuyScript::CheckLevel()
extern void BuyScript_CheckLevel_m27D9A7403EFC304D3445F3BDB0787CFAC06CFA3E (void);
// 0x00000244 ShopType BuyScript::GetType()
extern void BuyScript_GetType_m5F786B22F359F2C85859BA71DC68420680B9022D (void);
// 0x00000245 UnityEngine.GameObject BuyScript::ToBuild()
extern void BuyScript_ToBuild_m17A499DE53168D01C85DDC7B25C49F7577E30C8C (void);
// 0x00000246 System.Void BuyScript::AddMoney(UnityEngine.Transform)
extern void BuyScript_AddMoney_m6C4C5215C173BB8CE4B57A4AED3986FC506552B7 (void);
// 0x00000247 System.Void BuyScript::OnTriggerEnter(UnityEngine.Collider)
extern void BuyScript_OnTriggerEnter_mEDE82623EC0981C9589A53F6563FED55F0572341 (void);
// 0x00000248 System.Void BuyScript::OnTriggerStay(UnityEngine.Collider)
extern void BuyScript_OnTriggerStay_m18D811E8672CCE0DC23BA78C1829B7A50DB790DF (void);
// 0x00000249 System.Boolean BuyScript::IsPossible(UnityEngine.Collider)
extern void BuyScript_IsPossible_m20BE5EA29DAB2E3F261F0896C6E7178B853A0EAF (void);
// 0x0000024A System.Void BuyScript::.ctor()
extern void BuyScript__ctor_mDAA6AA19D6EF7DE7982B1BF2A21CA1DF1FE4D5A5 (void);
// 0x0000024B System.Void BuyScript::<AddMoney>b__19_0()
extern void BuyScript_U3CAddMoneyU3Eb__19_0_mF704CCDFBC57CE5A1A112195EFA60AA9467D1E77 (void);
// 0x0000024C System.Void BuyScript/<>c__DisplayClass19_0::.ctor()
extern void U3CU3Ec__DisplayClass19_0__ctor_mD224750D3621E910C3E1AC3D5D7BF72B96BCC63F (void);
// 0x0000024D System.Void BuyScript/<>c__DisplayClass19_0::<AddMoney>b__1()
extern void U3CU3Ec__DisplayClass19_0_U3CAddMoneyU3Eb__1_mF07D6F9B2BE209B9BA19F7A25DA8938B688E378A (void);
// 0x0000024E System.Void BuyScript/<>c::.cctor()
extern void U3CU3Ec__cctor_mC95221003B4A8FFFB1B88442D22793538D51A786 (void);
// 0x0000024F System.Void BuyScript/<>c::.ctor()
extern void U3CU3Ec__ctor_m37A877214FBF48663F1630D3A4B05271E81C1850 (void);
// 0x00000250 System.Void BuyScript/<>c::<AddMoney>b__19_2()
extern void U3CU3Ec_U3CAddMoneyU3Eb__19_2_mD64E787B6ED4EBFF15B8F5ED3C8E4CBFC486E127 (void);
// 0x00000251 System.Void CameraController::Start()
extern void CameraController_Start_m8EAAC188934ECCBD009EC00751280DCFF4D96C71 (void);
// 0x00000252 System.Collections.IEnumerator CameraController::CinematicStart()
extern void CameraController_CinematicStart_m15328A35F2E834DC2FAB8BBCF0EF86D238B69317 (void);
// 0x00000253 System.Void CameraController::SetOldPlayer(UnityEngine.Transform)
extern void CameraController_SetOldPlayer_m5EC044A2D8E08459F02B248F1E1828512E2823B3 (void);
// 0x00000254 System.Void CameraController::Focus(UnityEngine.Transform,System.Single)
extern void CameraController_Focus_mF4A2B46B7A1DD2151873E9C6DFA59E283F39F20A (void);
// 0x00000255 System.Collections.IEnumerator CameraController::Return(System.Single)
extern void CameraController_Return_m32CD15A9AA00A47226ABDB175E3BE8208B059344 (void);
// 0x00000256 System.Void CameraController::Update()
extern void CameraController_Update_mBCB871B23DBA60444D43AB56D780478BA3D355E6 (void);
// 0x00000257 System.Void CameraController::FocusOnPlayer()
extern void CameraController_FocusOnPlayer_mCED2D54B2BF4113F5A6BD30278885A372CB05E03 (void);
// 0x00000258 System.Void CameraController::FocusOnPlayerUpgrade()
extern void CameraController_FocusOnPlayerUpgrade_mE3A4B6F39A3DAE21999AAC468EE6457E51424E75 (void);
// 0x00000259 System.Void CameraController::.ctor()
extern void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (void);
// 0x0000025A System.Void CameraController/<CinematicStart>d__14::.ctor(System.Int32)
extern void U3CCinematicStartU3Ed__14__ctor_m44EF82BDAF1340EE5A8BAFDA57E0A56D64D5ED4E (void);
// 0x0000025B System.Void CameraController/<CinematicStart>d__14::System.IDisposable.Dispose()
extern void U3CCinematicStartU3Ed__14_System_IDisposable_Dispose_m44FA77E1B713129830BE0576A58EC051B695A58A (void);
// 0x0000025C System.Boolean CameraController/<CinematicStart>d__14::MoveNext()
extern void U3CCinematicStartU3Ed__14_MoveNext_m5CFD65976A85DBE7937CF65DDC8E37AB028EB3E1 (void);
// 0x0000025D System.Object CameraController/<CinematicStart>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CCinematicStartU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m444FF95CD84A5BD4F2234AC8345B141D9262E61D (void);
// 0x0000025E System.Void CameraController/<CinematicStart>d__14::System.Collections.IEnumerator.Reset()
extern void U3CCinematicStartU3Ed__14_System_Collections_IEnumerator_Reset_m78AC4C61EF75DF09F60AD929CC2602BD2840A6BF (void);
// 0x0000025F System.Object CameraController/<CinematicStart>d__14::System.Collections.IEnumerator.get_Current()
extern void U3CCinematicStartU3Ed__14_System_Collections_IEnumerator_get_Current_m263D4123D2232DFA5C773E03A3FA87A1A4AD7CFC (void);
// 0x00000260 System.Void CameraController/<Return>d__17::.ctor(System.Int32)
extern void U3CReturnU3Ed__17__ctor_m752E78B67633B4F238789A7A065302755AC9B089 (void);
// 0x00000261 System.Void CameraController/<Return>d__17::System.IDisposable.Dispose()
extern void U3CReturnU3Ed__17_System_IDisposable_Dispose_m4536A981A107937700EBB7924AAAFE42AE231EF0 (void);
// 0x00000262 System.Boolean CameraController/<Return>d__17::MoveNext()
extern void U3CReturnU3Ed__17_MoveNext_mFC4FFEB32AF98C723A1F8156624F2FA6A46ABEB6 (void);
// 0x00000263 System.Object CameraController/<Return>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CReturnU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m47572178C0943DFEBB5B84C7A25C705A5A9B9F0C (void);
// 0x00000264 System.Void CameraController/<Return>d__17::System.Collections.IEnumerator.Reset()
extern void U3CReturnU3Ed__17_System_Collections_IEnumerator_Reset_m412E16D79488836E425A1E01636F450C737C05D7 (void);
// 0x00000265 System.Object CameraController/<Return>d__17::System.Collections.IEnumerator.get_Current()
extern void U3CReturnU3Ed__17_System_Collections_IEnumerator_get_Current_m622F43E1D01A668C0BF7FA2CDFB82AE2F3E2EDE2 (void);
// 0x00000266 System.Void CameraSettings::.ctor()
extern void CameraSettings__ctor_mA590BD08F145ACA884C965BD8B7DEE27994727D7 (void);
// 0x00000267 System.Void CinematicPoint::.ctor()
extern void CinematicPoint__ctor_m6CA656FF4BC79692381A34275420A8D0074C6705 (void);
// 0x00000268 System.Void CashierScript::Start()
extern void CashierScript_Start_mA31E09F13D542332527323A9E2BC9B1EB23E3ED0 (void);
// 0x00000269 System.Boolean CashierScript::DestinationReached()
extern void CashierScript_DestinationReached_m5847B1052553CABB0360E740038A56C492E322C5 (void);
// 0x0000026A System.Void CashierScript::Update()
extern void CashierScript_Update_mA60527083EAFCB0F6D2E0291E84FE9D6B29983E2 (void);
// 0x0000026B System.Void CashierScript::SetShop()
extern void CashierScript_SetShop_m4269574AEE6B22DE443779EE4643ADD43DA33083 (void);
// 0x0000026C System.Void CashierScript::.ctor()
extern void CashierScript__ctor_mAF0E8D13ED7871036F0D6E035B488D6EC98B7F2A (void);
// 0x0000026D System.Boolean CashierScript::<SetShop>b__8_0(CounterCircle)
extern void CashierScript_U3CSetShopU3Eb__8_0_m34761854358CE75A4FA38A4547DA89B0C7EE107C (void);
// 0x0000026E System.Void ChairScript::.ctor()
extern void ChairScript__ctor_mFFB35582C41C25AB6AAFB935B1274FCFC04F91CE (void);
// 0x0000026F System.Void CinemaButtonScript::Start()
extern void CinemaButtonScript_Start_m19415E75DA5260BCF1224CBDF8C179113016DD40 (void);
// 0x00000270 System.Void CinemaButtonScript::ActivateCircle()
extern void CinemaButtonScript_ActivateCircle_m6E6D3760E0ED7AFC0117993B1629FABCB6CE2F6F (void);
// 0x00000271 System.Void CinemaButtonScript::Press()
extern void CinemaButtonScript_Press_m613553AA8963584ED216AFF73F90EFCE0F1257D4 (void);
// 0x00000272 System.Void CinemaButtonScript::Pressed()
extern void CinemaButtonScript_Pressed_m103FF17E9BA87BAC02B2A6C4067B64D463D0E1C1 (void);
// 0x00000273 System.Void CinemaButtonScript::.ctor()
extern void CinemaButtonScript__ctor_m48209EADCC61D02CCEDE224D03797F2A22EFD4BD (void);
// 0x00000274 System.Void CinemaButtonScript::<Start>b__3_0()
extern void CinemaButtonScript_U3CStartU3Eb__3_0_m7FAE8DDBF753E1C860C38764593F36D9B0FB419C (void);
// 0x00000275 System.Void CinemaButtonScript::<Pressed>b__6_0()
extern void CinemaButtonScript_U3CPressedU3Eb__6_0_m58BF97E19AFDAD61CB2605C86990ED731ED22DC5 (void);
// 0x00000276 System.Void CinemaCircle::Start()
extern void CinemaCircle_Start_m5E2DBC6869700BD3B62782FE9A1D3C597D071798 (void);
// 0x00000277 System.Void CinemaCircle::Activate()
extern void CinemaCircle_Activate_m1C32A80D8DD0DE864A0F4B4C537D10BBE0C34027 (void);
// 0x00000278 System.Void CinemaCircle::Update()
extern void CinemaCircle_Update_mAC1FFD348CE2FC1979FF3C2926B96C2D71C0CE07 (void);
// 0x00000279 System.Void CinemaCircle::Pressed()
extern void CinemaCircle_Pressed_mDC6523DE37ACECA5CCDC505075C950DE77C9F373 (void);
// 0x0000027A System.Void CinemaCircle::OnTriggerStay(UnityEngine.Collider)
extern void CinemaCircle_OnTriggerStay_m8116E94276F41172C158B771B351AA531B5F2D25 (void);
// 0x0000027B System.Void CinemaCircle::OnTriggerExit(UnityEngine.Collider)
extern void CinemaCircle_OnTriggerExit_m5AD86301B853DAF2B92305FC1486666AA567198F (void);
// 0x0000027C System.Collections.IEnumerator CinemaCircle::Scale()
extern void CinemaCircle_Scale_mFB3DE94ACD381B0BBD082436C535F673B51B7177 (void);
// 0x0000027D System.Void CinemaCircle::.ctor()
extern void CinemaCircle__ctor_m1CA201587EA701979BB1630E8445D37018435FF9 (void);
// 0x0000027E System.Void CinemaCircle::<Scale>b__15_0()
extern void CinemaCircle_U3CScaleU3Eb__15_0_m5770C2587AD2005B1809A7AEED4539BA8AC34C89 (void);
// 0x0000027F System.Void CinemaCircle/<Scale>d__15::.ctor(System.Int32)
extern void U3CScaleU3Ed__15__ctor_m51A461E14A488AC5BE7836B458306116F7968F2F (void);
// 0x00000280 System.Void CinemaCircle/<Scale>d__15::System.IDisposable.Dispose()
extern void U3CScaleU3Ed__15_System_IDisposable_Dispose_m402EFB2637540BB1A1EF7633D1170900312E2845 (void);
// 0x00000281 System.Boolean CinemaCircle/<Scale>d__15::MoveNext()
extern void U3CScaleU3Ed__15_MoveNext_m08658C7371E32001F4EE0A403AD8A8F117AFE913 (void);
// 0x00000282 System.Object CinemaCircle/<Scale>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CScaleU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCFE4A8D2C1ED7DAA84534A4A0B3F972A6E7AA9A8 (void);
// 0x00000283 System.Void CinemaCircle/<Scale>d__15::System.Collections.IEnumerator.Reset()
extern void U3CScaleU3Ed__15_System_Collections_IEnumerator_Reset_mC16F30516E1BF5AB20B35B103733106CBD5C2E70 (void);
// 0x00000284 System.Object CinemaCircle/<Scale>d__15::System.Collections.IEnumerator.get_Current()
extern void U3CScaleU3Ed__15_System_Collections_IEnumerator_get_Current_m2345A6EC0825B763982C8E617DC0D7DBC96D157E (void);
// 0x00000285 System.Void CinemaRoomScript::Start()
extern void CinemaRoomScript_Start_m9F9EA215C0E779D800EAEA1DB4BA341521C6E5B2 (void);
// 0x00000286 CinemaButtonScript CinemaRoomScript::GetButton()
extern void CinemaRoomScript_GetButton_m381EA95741643819D0C730CEDF3B2DC0068FC336 (void);
// 0x00000287 System.Boolean CinemaRoomScript::IsUsable()
extern void CinemaRoomScript_IsUsable_mBA213F001D7C65EEA9D415A70A3B70471E4C4F45 (void);
// 0x00000288 System.Void CinemaRoomScript::Update()
extern void CinemaRoomScript_Update_m99A0B7EA53B2F3DE93BADDC883DC7003C232BBAF (void);
// 0x00000289 System.Void CinemaRoomScript::Unlock()
extern void CinemaRoomScript_Unlock_mFA814EF78EE6195D41EB3FD014F2E32AB605B09A (void);
// 0x0000028A System.Void CinemaRoomScript::Recharge()
extern void CinemaRoomScript_Recharge_m45603054BEEA8373D47DDA7D63CCC324CC036EF9 (void);
// 0x0000028B System.Void CinemaRoomScript::.ctor()
extern void CinemaRoomScript__ctor_mFDA8C99ABF54DAD3B23DB68A6A02ED6EF7EA6CD5 (void);
// 0x0000028C System.Void CinemaWorkerScript::Start()
extern void CinemaWorkerScript_Start_m0EE1EF66CFD2CAFB989EB97D869B4A553D680C00 (void);
// 0x0000028D System.Void CinemaWorkerScript::Update()
extern void CinemaWorkerScript_Update_m9F024D865598F6104FDB64EED062FD9FB606E062 (void);
// 0x0000028E System.Void CinemaWorkerScript::FindButton()
extern void CinemaWorkerScript_FindButton_mE64C7E11654381E0A77C1448F0DBB7BF9B81947E (void);
// 0x0000028F System.Void CinemaWorkerScript::SetShop()
extern void CinemaWorkerScript_SetShop_mB6E1B47FC8824BE27B512B25E3AA81FCD5E50430 (void);
// 0x00000290 System.Void CinemaWorkerScript::.ctor()
extern void CinemaWorkerScript__ctor_m2C791E6BD78DB7D5B0617312233C9DEC10214431 (void);
// 0x00000291 System.Void ClothRack::Start()
extern void ClothRack_Start_mA4488BBEC58AD4365A76C788D7B6A5C03A0D94F8 (void);
// 0x00000292 System.Void ClothRack::Update()
extern void ClothRack_Update_mFF9BC582B2942A0F2735E6F0BCC3F1F8382FF4EA (void);
// 0x00000293 System.Void ClothRack::GiveItem(WorkerScript)
extern void ClothRack_GiveItem_mE2752161182B7897C3D07E32AAD1214E560AFC63 (void);
// 0x00000294 System.Void ClothRack::.ctor()
extern void ClothRack__ctor_m8EA4BC0D0975910DE2499604836B7285E9144567 (void);
// 0x00000295 System.Void ClothRackCircle::Start()
extern void ClothRackCircle_Start_mCE2890210CAB3C282EFFF76E2E7552CC3CDD0096 (void);
// 0x00000296 System.Void ClothRackCircle::OnTriggerStay(UnityEngine.Collider)
extern void ClothRackCircle_OnTriggerStay_m2A4493408843FC59D1BFF553BFD7425055382EE8 (void);
// 0x00000297 System.Void ClothRackCircle::OnTriggerExit(UnityEngine.Collider)
extern void ClothRackCircle_OnTriggerExit_m71B5EBC319AED553B3E629BC3574B476DE9CB3B2 (void);
// 0x00000298 System.Collections.IEnumerator ClothRackCircle::Scale()
extern void ClothRackCircle_Scale_m58A23A40F4431DB0D6E1D89FDBD46475EA0AC2BF (void);
// 0x00000299 System.Void ClothRackCircle::.ctor()
extern void ClothRackCircle__ctor_m19C69418BFB9E7FB9DFD2CC1F5FF4757D9352787 (void);
// 0x0000029A System.Void ClothRackCircle::<Scale>b__5_0()
extern void ClothRackCircle_U3CScaleU3Eb__5_0_mD2AE36CCAFC56ACDD1E0D45C07CBFA9FAFFBE228 (void);
// 0x0000029B System.Void ClothRackCircle/<Scale>d__5::.ctor(System.Int32)
extern void U3CScaleU3Ed__5__ctor_mA4947C88BF9990A64E9ACC3E2654EA277F75B2E1 (void);
// 0x0000029C System.Void ClothRackCircle/<Scale>d__5::System.IDisposable.Dispose()
extern void U3CScaleU3Ed__5_System_IDisposable_Dispose_m6010638C34344AEB6F6527BC3B08DB860158AA39 (void);
// 0x0000029D System.Boolean ClothRackCircle/<Scale>d__5::MoveNext()
extern void U3CScaleU3Ed__5_MoveNext_mA31F8C61D3CB162CD68C38E24CE649B2530C74EC (void);
// 0x0000029E System.Object ClothRackCircle/<Scale>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CScaleU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD4A6F1DC51436A3A9BA93606432E5973CCD13DF9 (void);
// 0x0000029F System.Void ClothRackCircle/<Scale>d__5::System.Collections.IEnumerator.Reset()
extern void U3CScaleU3Ed__5_System_Collections_IEnumerator_Reset_m7ACD7C5B7704E162945F859E7A3F88FF00E0C6DD (void);
// 0x000002A0 System.Object ClothRackCircle/<Scale>d__5::System.Collections.IEnumerator.get_Current()
extern void U3CScaleU3Ed__5_System_Collections_IEnumerator_get_Current_mE27B88D28235B43FB36BE1DF1237278F41F77596 (void);
// 0x000002A1 System.Void Counter::Start()
extern void Counter_Start_m722A97F6D6947030F4480E84D9E1C8BD5C9CD0EF (void);
// 0x000002A2 System.Boolean Counter::IsAvailable(ShopType)
extern void Counter_IsAvailable_m46664840B3A2DE0397EA8228D15671280FE61A5C (void);
// 0x000002A3 UnityEngine.Vector3 Counter::GetPos()
extern void Counter_GetPos_m9651A33F0CDA3AB2EDDE2ED37538BD0FC2E07C19 (void);
// 0x000002A4 UnityEngine.Vector3 Counter::GetPos(System.Int32)
extern void Counter_GetPos_mAD90C47F7BC9B15AB3F0AA64F5B217090D963228 (void);
// 0x000002A5 System.Void Counter::AddMoney(MoneyScript)
extern void Counter_AddMoney_mA157E6D27397E6570FA69369E9DEB840615AB7D7 (void);
// 0x000002A6 System.Void Counter::RemoveMoney(MoneyScript)
extern void Counter_RemoveMoney_m4548760F55B6FBEEB504E4E818F9638E481A6180 (void);
// 0x000002A7 UnityEngine.Vector3 Counter::MoneyPos()
extern void Counter_MoneyPos_m3570829F786C4509E0042B1EDCF54336503DC9A2 (void);
// 0x000002A8 System.Void Counter::Update()
extern void Counter_Update_mF6CD53B46094E9543E0C96FA786173018A0307FC (void);
// 0x000002A9 System.Void Counter::AddQueue(VisitorScript)
extern void Counter_AddQueue_m040ABC28D505FC2B13369EF29C4EABD7F6C0B3DA (void);
// 0x000002AA System.Void Counter::RemoveQueue(VisitorScript)
extern void Counter_RemoveQueue_m815EF861521795DCC67C1220D2E90D1007F437DE (void);
// 0x000002AB System.Void Counter::UpdateQueue()
extern void Counter_UpdateQueue_m218CF6073FF759CECFDC9316865E34262F1054CB (void);
// 0x000002AC System.Collections.IEnumerator Counter::UpdatingQueue()
extern void Counter_UpdatingQueue_m9CC6A67522046A53D3EBBDD9713B75F2CAC357E7 (void);
// 0x000002AD System.Void Counter::.ctor()
extern void Counter__ctor_m8268512C5E82F5E698855F4CC1B317750CF97558 (void);
// 0x000002AE System.Void Counter/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m3E7FD8A23B35799DC737450E93482F1EC29AA6CA (void);
// 0x000002AF System.Boolean Counter/<>c__DisplayClass13_0::<IsAvailable>b__0(VisitorScript)
extern void U3CU3Ec__DisplayClass13_0_U3CIsAvailableU3Eb__0_mC6A31879E770929D2131DE5FDD8C1486769CC6D4 (void);
// 0x000002B0 System.Void Counter/<UpdatingQueue>d__23::.ctor(System.Int32)
extern void U3CUpdatingQueueU3Ed__23__ctor_mB574924CC746D7A5B66D07DD74A5294002777080 (void);
// 0x000002B1 System.Void Counter/<UpdatingQueue>d__23::System.IDisposable.Dispose()
extern void U3CUpdatingQueueU3Ed__23_System_IDisposable_Dispose_m259F04593E769354EB4EFE947CA1E763BB36E36D (void);
// 0x000002B2 System.Boolean Counter/<UpdatingQueue>d__23::MoveNext()
extern void U3CUpdatingQueueU3Ed__23_MoveNext_mC525E5FA3A7888294D7CC064DC294E97FDEBAE2C (void);
// 0x000002B3 System.Object Counter/<UpdatingQueue>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CUpdatingQueueU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB61B18227D0BBA714F85FAA5B790B4ABDC7EF963 (void);
// 0x000002B4 System.Void Counter/<UpdatingQueue>d__23::System.Collections.IEnumerator.Reset()
extern void U3CUpdatingQueueU3Ed__23_System_Collections_IEnumerator_Reset_mC2461AD37C3AA4B0A9C1901CB779041BB7C2DBB7 (void);
// 0x000002B5 System.Object Counter/<UpdatingQueue>d__23::System.Collections.IEnumerator.get_Current()
extern void U3CUpdatingQueueU3Ed__23_System_Collections_IEnumerator_get_Current_m3A474030513BD3EF7299605FE48E309BEE56BCB2 (void);
// 0x000002B6 System.Void CounterCircle::Start()
extern void CounterCircle_Start_mF227095DDB961B7265A658CCA7600CDA5BA80305 (void);
// 0x000002B7 System.Void CounterCircle::OnTriggerStay(UnityEngine.Collider)
extern void CounterCircle_OnTriggerStay_m902263A4DE8EAA6A9566FBE6BC8318412D2FA270 (void);
// 0x000002B8 System.Void CounterCircle::OnTriggerExit(UnityEngine.Collider)
extern void CounterCircle_OnTriggerExit_m33A804848A55A70EB103DFCED17EC19FA060067D (void);
// 0x000002B9 System.Collections.IEnumerator CounterCircle::Scale()
extern void CounterCircle_Scale_m8AD81A705E6E040EA565BC0A12FDAE3B5A4AB51D (void);
// 0x000002BA System.Void CounterCircle::.ctor()
extern void CounterCircle__ctor_mC7ADC03D5C38F3FCB19B6F745E6928388D3E9554 (void);
// 0x000002BB System.Void CounterCircle::<Scale>b__6_0()
extern void CounterCircle_U3CScaleU3Eb__6_0_mF44D430E1085E45DB15020F98F55F535DB1DAA6F (void);
// 0x000002BC System.Void CounterCircle/<Scale>d__6::.ctor(System.Int32)
extern void U3CScaleU3Ed__6__ctor_m27BE73B2E1430F0A6C1EF653CA6957539BBC4F3F (void);
// 0x000002BD System.Void CounterCircle/<Scale>d__6::System.IDisposable.Dispose()
extern void U3CScaleU3Ed__6_System_IDisposable_Dispose_m5F15E402705C6893C39C89B634C55F77E6E99F04 (void);
// 0x000002BE System.Boolean CounterCircle/<Scale>d__6::MoveNext()
extern void U3CScaleU3Ed__6_MoveNext_m69EC4FCCA4BC3A235DE3498BB0AE227132D5FF62 (void);
// 0x000002BF System.Object CounterCircle/<Scale>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CScaleU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1B92559AA8767154408218D1AA05E1C4F7856587 (void);
// 0x000002C0 System.Void CounterCircle/<Scale>d__6::System.Collections.IEnumerator.Reset()
extern void U3CScaleU3Ed__6_System_Collections_IEnumerator_Reset_m64F59C2286345D2235A3DA9F6F886B4DCAC69D45 (void);
// 0x000002C1 System.Object CounterCircle/<Scale>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CScaleU3Ed__6_System_Collections_IEnumerator_get_Current_m7F1813A91D4D687B8B9478E7670D3E7983E34751 (void);
// 0x000002C2 System.Void ElevatorScript::Start()
extern void ElevatorScript_Start_mEF94744877F2AB897097805ABE7A4D3B8384F46C (void);
// 0x000002C3 System.Collections.IEnumerator ElevatorScript::Spawn()
extern void ElevatorScript_Spawn_m2A0195BCC40F141D9A970070205478F6FE9A1E97 (void);
// 0x000002C4 System.Void ElevatorScript::Activate()
extern void ElevatorScript_Activate_mDB8E03EF84B99B177F7334857C782579D7026C97 (void);
// 0x000002C5 System.Void ElevatorScript::.ctor()
extern void ElevatorScript__ctor_m7A58CCB368E2D327E763D5D177CA03DEF4C96182 (void);
// 0x000002C6 System.Void ElevatorScript/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m77B6DD5B9DA74C0E0FE247321BE58F4D959A5956 (void);
// 0x000002C7 System.Void ElevatorScript/<>c__DisplayClass5_0::<Spawn>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CSpawnU3Eb__0_m654A8DCD4ABFE3036E23CC3AA545EFF76051B859 (void);
// 0x000002C8 System.Void ElevatorScript/<Spawn>d__5::.ctor(System.Int32)
extern void U3CSpawnU3Ed__5__ctor_m206892584C6470C5DCB963241CEC2FE4EED93AF0 (void);
// 0x000002C9 System.Void ElevatorScript/<Spawn>d__5::System.IDisposable.Dispose()
extern void U3CSpawnU3Ed__5_System_IDisposable_Dispose_mFA193611273476C4D87F274DF7B940B7E00EA289 (void);
// 0x000002CA System.Boolean ElevatorScript/<Spawn>d__5::MoveNext()
extern void U3CSpawnU3Ed__5_MoveNext_mAB45AE60CC18439D0DE737D8607A623C37D23D35 (void);
// 0x000002CB System.Object ElevatorScript/<Spawn>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CSpawnU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m216228D74ED7555290A295A8DC61140FA6159733 (void);
// 0x000002CC System.Void ElevatorScript/<Spawn>d__5::System.Collections.IEnumerator.Reset()
extern void U3CSpawnU3Ed__5_System_Collections_IEnumerator_Reset_m0BA83BB839425B8C8ABA72FC9C378F7A5FDC2030 (void);
// 0x000002CD System.Object ElevatorScript/<Spawn>d__5::System.Collections.IEnumerator.get_Current()
extern void U3CSpawnU3Ed__5_System_Collections_IEnumerator_get_Current_mD8944A100B50492800EF42D4AB3E69EA1B731F43 (void);
// 0x000002CE System.Void EscalatorScript::Start()
extern void EscalatorScript_Start_m00F43B5A19FDA5090EB29D6AB67C64F95A8E430B (void);
// 0x000002CF System.Collections.IEnumerator EscalatorScript::Spawn()
extern void EscalatorScript_Spawn_m3EDCDD37B944872FB50BF4D8897ECA5E925ACA3B (void);
// 0x000002D0 System.Void EscalatorScript::Activate()
extern void EscalatorScript_Activate_m5160BCA945DCA4677C5D29E6BF9F44E18CD3D5B1 (void);
// 0x000002D1 System.Void EscalatorScript::.ctor()
extern void EscalatorScript__ctor_m3D3E67B03482FAF01DECB61973C058BF084C936B (void);
// 0x000002D2 System.Void EscalatorScript/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m358FC845C587B7C06EFAC70AD892313EDF0D489E (void);
// 0x000002D3 System.Void EscalatorScript/<>c__DisplayClass6_0::<Spawn>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CSpawnU3Eb__0_m06470CAF22714A9535C4108D161E0DC372A15A2A (void);
// 0x000002D4 System.Void EscalatorScript/<>c__DisplayClass6_0::<Spawn>b__1()
extern void U3CU3Ec__DisplayClass6_0_U3CSpawnU3Eb__1_m0426B8E2A2DBDA39BEE641EECBA853CFFC1FCABA (void);
// 0x000002D5 System.Void EscalatorScript/<Spawn>d__6::.ctor(System.Int32)
extern void U3CSpawnU3Ed__6__ctor_mFE65502D64A3E342D5AECEB3EBEC013F3DB364D8 (void);
// 0x000002D6 System.Void EscalatorScript/<Spawn>d__6::System.IDisposable.Dispose()
extern void U3CSpawnU3Ed__6_System_IDisposable_Dispose_mF4EC0ABC8F100E1C5B3554D7356E4051655EDA12 (void);
// 0x000002D7 System.Boolean EscalatorScript/<Spawn>d__6::MoveNext()
extern void U3CSpawnU3Ed__6_MoveNext_mA4D8E86FEB7C5CA5D18F85F1AFD7848FAB624F5D (void);
// 0x000002D8 System.Object EscalatorScript/<Spawn>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CSpawnU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1E30B3EB5849E05739CC91A545B84A70F411DA34 (void);
// 0x000002D9 System.Void EscalatorScript/<Spawn>d__6::System.Collections.IEnumerator.Reset()
extern void U3CSpawnU3Ed__6_System_Collections_IEnumerator_Reset_m2803EC70E84CFE9569709CD2B941F067D2F2D753 (void);
// 0x000002DA System.Object EscalatorScript/<Spawn>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CSpawnU3Ed__6_System_Collections_IEnumerator_get_Current_m2EEC10E4791AA3C1B906A0B32287B9F581063356 (void);
// 0x000002DB System.Void ItemRack::Start()
extern void ItemRack_Start_m5FC92EE37D16FE2CEBBA4684DA71B9D4BB2E91B3 (void);
// 0x000002DC System.Boolean ItemRack::HasSpace()
extern void ItemRack_HasSpace_m0980AA08BF4551F9B689A44D8E099DE6DFA0C6B3 (void);
// 0x000002DD ChairScript ItemRack::GetChair()
extern void ItemRack_GetChair_mFAA10C3878769CD20CF6FAE9F476AAB38F9A1078 (void);
// 0x000002DE UnityEngine.Vector3 ItemRack::GetPosition()
extern void ItemRack_GetPosition_mC9733E54B0F09775A6323D724971E123D70379B6 (void);
// 0x000002DF UnityEngine.Vector3 ItemRack::GetItemPosition()
extern void ItemRack_GetItemPosition_m6D70B35BD135D8C58716E6946355680BAB48C0A2 (void);
// 0x000002E0 System.Boolean ItemRack::IsUsable()
extern void ItemRack_IsUsable_m3D1B28B4214CBCDFAA8B3819F416F17269BAAB83 (void);
// 0x000002E1 System.Boolean ItemRack::IsAvailable()
extern void ItemRack_IsAvailable_m73CD7237F6FC23423ECA4FB1FAF424F77E7751ED (void);
// 0x000002E2 System.Void ItemRack::GetItem(UnityEngine.Transform)
extern void ItemRack_GetItem_m193BAB58FEC1867D755A9C87429814FE90E84535 (void);
// 0x000002E3 System.Void ItemRack::Update()
extern void ItemRack_Update_mE227C9A5C12ECB40C11C156C41A859C29C817EE8 (void);
// 0x000002E4 System.Void ItemRack::AddItem()
extern void ItemRack_AddItem_m4D022C766E7C9BB11E15593F9D375437EC5D8BA7 (void);
// 0x000002E5 System.Void ItemRack::.ctor()
extern void ItemRack__ctor_m3E5AB73E6BFD0B34AA52F45C13E72A472646A192 (void);
// 0x000002E6 System.Void ItemScript::Pick(UnityEngine.Vector3)
extern void ItemScript_Pick_m9954CD321DC9612EB2524D1EBF4CB610EBCD1556 (void);
// 0x000002E7 System.Void ItemScript::UpdatePos(UnityEngine.Vector3)
extern void ItemScript_UpdatePos_m72912BD6014DB3B9A06DC56B9040790A6C2D8351 (void);
// 0x000002E8 System.Void ItemScript::.ctor()
extern void ItemScript__ctor_mD0C27A82864B25A6B2E989140B6FD0CC2FE88AFB (void);
// 0x000002E9 System.Void MoneyScript::Start()
extern void MoneyScript_Start_m53748A4F16BB2B1FAF30002DE69D9DBA92FB1D48 (void);
// 0x000002EA System.Collections.IEnumerator MoneyScript::MyUpdate()
extern void MoneyScript_MyUpdate_m0ED65F5409966B6BB8C002A3458579EFEEF2FE60 (void);
// 0x000002EB System.Void MoneyScript::.ctor()
extern void MoneyScript__ctor_m76FCB94213B6F1EF36052C0132062EC1C7BC9546 (void);
// 0x000002EC System.Void MoneyScript::<MyUpdate>b__4_0()
extern void MoneyScript_U3CMyUpdateU3Eb__4_0_m106284024A76FD714603F367603D7A77DFFCAB32 (void);
// 0x000002ED System.Void MoneyScript/<MyUpdate>d__4::.ctor(System.Int32)
extern void U3CMyUpdateU3Ed__4__ctor_m565FF0DADDAFBB55C9F225FA39B23F0BDBE0686E (void);
// 0x000002EE System.Void MoneyScript/<MyUpdate>d__4::System.IDisposable.Dispose()
extern void U3CMyUpdateU3Ed__4_System_IDisposable_Dispose_m6B0715EA0068867A931E22F1DEAFB5886E3BD432 (void);
// 0x000002EF System.Boolean MoneyScript/<MyUpdate>d__4::MoveNext()
extern void U3CMyUpdateU3Ed__4_MoveNext_mEF417C46355BDC6E8FA3BBD94F4DAD7352EC1059 (void);
// 0x000002F0 System.Object MoneyScript/<MyUpdate>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CMyUpdateU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9A2E8C750CCDBB2D6C7261A57CA25951EEC69F55 (void);
// 0x000002F1 System.Void MoneyScript/<MyUpdate>d__4::System.Collections.IEnumerator.Reset()
extern void U3CMyUpdateU3Ed__4_System_Collections_IEnumerator_Reset_m6D11D612CC0E3D99A8476F5D1DBF31A6E3BFABA8 (void);
// 0x000002F2 System.Object MoneyScript/<MyUpdate>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CMyUpdateU3Ed__4_System_Collections_IEnumerator_get_Current_m4FD802A1AA967B03105CCE6CF699DF71EE593AC0 (void);
// 0x000002F3 System.Void NavmeshBaker::Start()
extern void NavmeshBaker_Start_m460AAC2128632A2D23ED8C827E219E159C7474B0 (void);
// 0x000002F4 System.Void NavmeshBaker::UpdateNavmesh()
extern void NavmeshBaker_UpdateNavmesh_m3B6A08F1A12F9189BFF1BCA9C2B3298D40304462 (void);
// 0x000002F5 System.Void NavmeshBaker::NextFrame()
extern void NavmeshBaker_NextFrame_mCEAA54CF6E713EEBE7781289012DBF5569859521 (void);
// 0x000002F6 System.Void NavmeshBaker::.ctor()
extern void NavmeshBaker__ctor_m0F0BE8C2587A45F6564CAA0253586FB8F0DBF568 (void);
// 0x000002F7 System.Void ParticlesScript::Start()
extern void ParticlesScript_Start_mF14388BF1DC88ED4B76EB5AABC5C657296D22FC3 (void);
// 0x000002F8 System.Void ParticlesScript::Destruction()
extern void ParticlesScript_Destruction_m70B03C8AA17B8935FB07C2BC1CABC2B8345CB33B (void);
// 0x000002F9 System.Void ParticlesScript::.ctor()
extern void ParticlesScript__ctor_m30CA993ACE4C0477180C6344406A7F45D40772E9 (void);
// 0x000002FA T SerializedSingleton`1::get_Instance()
// 0x000002FB System.Void SerializedSingleton`1::Awake()
// 0x000002FC System.Void SerializedSingleton`1::.ctor()
// 0x000002FD System.Void ShopHandler::Start()
extern void ShopHandler_Start_m216E771D9E39F14582C6B330DCD953AFF407A165 (void);
// 0x000002FE Shop ShopHandler::GetShop(ShopType)
extern void ShopHandler_GetShop_mDDE75A8F17DA06B0D5353FEABBE00C01D95D7E5B (void);
// 0x000002FF System.Boolean ShopHandler::HasSpace()
extern void ShopHandler_HasSpace_m8E53C73EAEFFA79580B7B3572AF9024778E6208F (void);
// 0x00000300 System.Void ShopHandler::AddRack(ShopType,ItemRack)
extern void ShopHandler_AddRack_m0CCC99D30547C7B8AA6F8246341A4EEAC9B02101 (void);
// 0x00000301 System.Int32 ShopHandler::ShopCapacity()
extern void ShopHandler_ShopCapacity_m85417F0FF03F4BAEA195E230D018B40AA6CC29C6 (void);
// 0x00000302 Shop ShopHandler::RandomShop()
extern void ShopHandler_RandomShop_m56963F71778390021FA07FE17154AA0EA77E5C54 (void);
// 0x00000303 System.Void ShopHandler::OpenShop(ShopType)
extern void ShopHandler_OpenShop_mF0A080B507E1E399AB858274036ED3250B7870A4 (void);
// 0x00000304 System.Void ShopHandler::.ctor()
extern void ShopHandler__ctor_m50ECAB0D3D5CE67183BA5495237A6B28348B34C1 (void);
// 0x00000305 System.Void ShopHandler/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mCDAEBCDEDB9E359A6B7773CD7126A09907336C93 (void);
// 0x00000306 System.Boolean ShopHandler/<>c__DisplayClass2_0::<GetShop>b__0(Shop)
extern void U3CU3Ec__DisplayClass2_0_U3CGetShopU3Eb__0_mF76D81F1673E75FAFAB82829583E1AD44092BD30 (void);
// 0x00000307 System.Void ShopHandler/<>c::.cctor()
extern void U3CU3Ec__cctor_m54E2F9BF65707E7CBE0D22DD487672B96805086F (void);
// 0x00000308 System.Void ShopHandler/<>c::.ctor()
extern void U3CU3Ec__ctor_m48F577BAE0E555476F9B91E61BE433F7861BD56B (void);
// 0x00000309 System.Boolean ShopHandler/<>c::<HasSpace>b__3_0(Shop)
extern void U3CU3Ec_U3CHasSpaceU3Eb__3_0_mEFA4495AF50BCE7105033B91945D78F822E00352 (void);
// 0x0000030A System.Boolean ShopHandler/<>c::<RandomShop>b__6_0(Shop)
extern void U3CU3Ec_U3CRandomShopU3Eb__6_0_mC0B7D96D9B1B1A0E627CAA11EE239404C55D695A (void);
// 0x0000030B System.Void ShopHandler/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mA5F5062D7E2E5029306FB6E84F438C0680E124A4 (void);
// 0x0000030C System.Boolean ShopHandler/<>c__DisplayClass4_0::<AddRack>b__0(Shop)
extern void U3CU3Ec__DisplayClass4_0_U3CAddRackU3Eb__0_mA9B9E8B62C17ACD119CC714D793A49C5DDC81D8F (void);
// 0x0000030D System.Void ShopHandler/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mC4F025AB6FB440BA0ACC2A5A59345158E512348E (void);
// 0x0000030E System.Boolean ShopHandler/<>c__DisplayClass7_0::<OpenShop>b__0(Shop)
extern void U3CU3Ec__DisplayClass7_0_U3COpenShopU3Eb__0_m4AE32DCCA2A3C4C872F3410DB78CAD97042B5D02 (void);
// 0x0000030F System.Boolean Shop::IsAvailable()
extern void Shop_IsAvailable_m54D4218B84B85442D9577C585DB53DECFB13686F (void);
// 0x00000310 System.Void Shop::AddRack(ItemRack)
extern void Shop_AddRack_m1475BFD3AC253D53725E0186AA52741D11A9780D (void);
// 0x00000311 ClothRack Shop::GetClothRack()
extern void Shop_GetClothRack_m43245678AB8582E088C721EEC1D43BA0D5E14B81 (void);
// 0x00000312 System.Int32 Shop::CinemaRoomCount()
extern void Shop_CinemaRoomCount_mDE3F1D41BC67DC5F3FEC00BB7EAE29AFC4234890 (void);
// 0x00000313 ChairScript Shop::GetRandomChair()
extern void Shop_GetRandomChair_m60A0F71E5F69FD8BB571661607FE124AAB995F69 (void);
// 0x00000314 System.Boolean Shop::HasAvailableRack()
extern void Shop_HasAvailableRack_m5E10ACBA3B6B22713E8FD1F49C9707B3F0DF136B (void);
// 0x00000315 ItemRack Shop::GetRandomRack()
extern void Shop_GetRandomRack_mA7FB42CE4B92CF2B51BB6F2ECE2F759E6C53F567 (void);
// 0x00000316 ItemRack Shop::GetEmptyRack(ShopType)
extern void Shop_GetEmptyRack_m65EC8AC2590527342B7239FE329789A6DBA8B0F1 (void);
// 0x00000317 Counter Shop::GetCounter()
extern void Shop_GetCounter_m34469F7317189BA531D60BEF38C8673E3B7FE137 (void);
// 0x00000318 System.Void Shop::.ctor()
extern void Shop__ctor_m7BDEDC38368666EB9081CB3C46CE0BDB7380566E (void);
// 0x00000319 System.Void Shop/<>c::.cctor()
extern void U3CU3Ec__cctor_m6F1BE5DDA14D9AC9F1ABC9DD6E1166423305B262 (void);
// 0x0000031A System.Void Shop/<>c::.ctor()
extern void U3CU3Ec__ctor_m4B05EC1CB7CDE6DBB88001C0D204AC393368F1B2 (void);
// 0x0000031B System.Boolean Shop/<>c::<HasAvailableRack>b__12_0(ItemRack)
extern void U3CU3Ec_U3CHasAvailableRackU3Eb__12_0_m73AACD3E595E93F80A348AA7603AD64BCE5F3C8E (void);
// 0x0000031C System.Boolean Shop/<>c::<GetRandomRack>b__13_0(ItemRack)
extern void U3CU3Ec_U3CGetRandomRackU3Eb__13_0_mC1A5288B122E79E051E4435D1AFBAD8ECC6D77E9 (void);
// 0x0000031D System.Boolean Shop/<>c::<GetRandomRack>b__13_1(ItemRack)
extern void U3CU3Ec_U3CGetRandomRackU3Eb__13_1_m911FBCF6AE2CB69FAABC1C51AEBF55E5A932ADDD (void);
// 0x0000031E System.Boolean Shop/<>c::<GetEmptyRack>b__14_0(ItemRack)
extern void U3CU3Ec_U3CGetEmptyRackU3Eb__14_0_m71B552307398996116A3254461E9558FFCC5538B (void);
// 0x0000031F System.Boolean Shop/<>c::<GetEmptyRack>b__14_1(ItemRack)
extern void U3CU3Ec_U3CGetEmptyRackU3Eb__14_1_mB527FF191252677AB6F8C6332F77473ECEF7D15D (void);
// 0x00000320 T Singleton`1::get_Instance()
// 0x00000321 System.Void Singleton`1::Awake()
// 0x00000322 System.Void Singleton`1::.ctor()
// 0x00000323 System.Void StickmanController::Start()
extern void StickmanController_Start_m900753C0E60D73950CE34CE0FD39134BA803FC6F (void);
// 0x00000324 System.Boolean StickmanController::IsMoving()
extern void StickmanController_IsMoving_m63F4580982FEB62DE4058396A767BF0CE57E5E3B (void);
// 0x00000325 System.Boolean StickmanController::IsFull()
extern void StickmanController_IsFull_mB66A12A14743F2157E2B1BC9C3A33C9FD3BB05A3 (void);
// 0x00000326 System.Void StickmanController::AddSpeed()
extern void StickmanController_AddSpeed_m3FECB0BC52CE27535DD95537C78264BE103CD57A (void);
// 0x00000327 System.Boolean StickmanController::CanMove(UnityEngine.Vector3)
extern void StickmanController_CanMove_m0ABC1DA0017050E33EA224A2B07C74227E4C685F (void);
// 0x00000328 System.Void StickmanController::Update()
extern void StickmanController_Update_mF57AD44E157E9B926191F94CB8B204BCAD0D1D2E (void);
// 0x00000329 System.Void StickmanController::LateUpdate()
extern void StickmanController_LateUpdate_m93B23327466F42F471C983D80BDD0430E68ACD0E (void);
// 0x0000032A System.Int32 StickmanController::GetDollars()
extern void StickmanController_GetDollars_mF21573A7B5E6991DF6BA4A1C24A8CD1942356CDE (void);
// 0x0000032B System.Boolean StickmanController::EnoughMoney(System.Int32)
extern void StickmanController_EnoughMoney_m5C885DC478B03A328C2E05AEBB21D2E8FFE7869E (void);
// 0x0000032C System.Void StickmanController::AddDollars(System.Int32,UnityEngine.Transform)
extern void StickmanController_AddDollars_m14EB20CC02B008DEA8ACD472B3ACFE9D1FA189EF (void);
// 0x0000032D System.Void StickmanController::RemoveDollars(System.Int32)
extern void StickmanController_RemoveDollars_m4ABE15D4EDF2C558A465189F5C7F448C21DC2B95 (void);
// 0x0000032E System.Collections.IEnumerator StickmanController::AddingMoney(System.Int32,System.Int32,UnityEngine.Transform)
extern void StickmanController_AddingMoney_m30C60FE997BE1430DD7AF73CA599B3705EEF7D72 (void);
// 0x0000032F System.Boolean StickmanController::HasItems()
extern void StickmanController_HasItems_m97B4C31056D2C521CE467D112888A1E6AC8C2B6A (void);
// 0x00000330 System.Boolean StickmanController::HasItem(ShopType)
extern void StickmanController_HasItem_m01250BF6DBAA576010CE0109303CBC5690D58976 (void);
// 0x00000331 System.Void StickmanController::GiveItem(ShopType,ItemRack)
extern void StickmanController_GiveItem_m813BC5BB93DD4BD6D525753E42E18FA5A80A25B3 (void);
// 0x00000332 System.Void StickmanController::GiveItem(TrashbinScript)
extern void StickmanController_GiveItem_m59F21BB2AC8EC45EA1D34AD3CA92CCF05D16C30C (void);
// 0x00000333 System.Void StickmanController::AddItem(ItemScript)
extern void StickmanController_AddItem_mD7BF5C35E6FCA7605E11979F852B8583D563A2E0 (void);
// 0x00000334 UnityEngine.Vector3 StickmanController::GetItemPos()
extern void StickmanController_GetItemPos_m1A62195BB8BEA791AC9B941BB7EA2EBC89C28A73 (void);
// 0x00000335 UnityEngine.Vector3 StickmanController::GetItemPos(System.Int32)
extern void StickmanController_GetItemPos_mC80862B5266C15BB7019D752286385AEC4D0D67F (void);
// 0x00000336 System.Void StickmanController::.ctor()
extern void StickmanController__ctor_m16414A28CB5DE24803631118B2FBFF82326DD8C4 (void);
// 0x00000337 System.Void StickmanController/<>c__DisplayClass28_0::.ctor()
extern void U3CU3Ec__DisplayClass28_0__ctor_m5A8FDAC978B06887F35F30B1FE86B4C7B36362A7 (void);
// 0x00000338 System.Void StickmanController/<>c__DisplayClass28_0::<AddingMoney>b__0()
extern void U3CU3Ec__DisplayClass28_0_U3CAddingMoneyU3Eb__0_m67F62D748B80E9249D374CBB221BE22DA9444FF7 (void);
// 0x00000339 System.Void StickmanController/<>c__DisplayClass28_0::<AddingMoney>b__1()
extern void U3CU3Ec__DisplayClass28_0_U3CAddingMoneyU3Eb__1_m5ECD4A03C60AA9FB71BFE31A32F785FF0A1D9307 (void);
// 0x0000033A System.Void StickmanController/<AddingMoney>d__28::.ctor(System.Int32)
extern void U3CAddingMoneyU3Ed__28__ctor_m7F0F58E1A3495DC0CE54AEB10D24FCC2A00F1E6E (void);
// 0x0000033B System.Void StickmanController/<AddingMoney>d__28::System.IDisposable.Dispose()
extern void U3CAddingMoneyU3Ed__28_System_IDisposable_Dispose_m973355EFAA3425AA6ADE455F7809142A9741BE04 (void);
// 0x0000033C System.Boolean StickmanController/<AddingMoney>d__28::MoveNext()
extern void U3CAddingMoneyU3Ed__28_MoveNext_mEFFF9371FFD106E6BB18E3A63211D94CFD75F130 (void);
// 0x0000033D System.Object StickmanController/<AddingMoney>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAddingMoneyU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m21CB6729066D7448E99028EAAFB2215FED673FAF (void);
// 0x0000033E System.Void StickmanController/<AddingMoney>d__28::System.Collections.IEnumerator.Reset()
extern void U3CAddingMoneyU3Ed__28_System_Collections_IEnumerator_Reset_m498B9ED78DD0DF3B292046396E625B9931258210 (void);
// 0x0000033F System.Object StickmanController/<AddingMoney>d__28::System.Collections.IEnumerator.get_Current()
extern void U3CAddingMoneyU3Ed__28_System_Collections_IEnumerator_get_Current_mE1CFE25B56300D9135B7797CC714E43B96039572 (void);
// 0x00000340 System.Void StickmanController/<>c__DisplayClass30_0::.ctor()
extern void U3CU3Ec__DisplayClass30_0__ctor_mDB4AFA0848F0BC47B6AD077D2BF42BE517C09323 (void);
// 0x00000341 System.Boolean StickmanController/<>c__DisplayClass30_0::<HasItem>b__0(ItemScript)
extern void U3CU3Ec__DisplayClass30_0_U3CHasItemU3Eb__0_m7EFBF6197856FDB625265F5B52A15519B9FD11EE (void);
// 0x00000342 System.Void StickmanController/<>c__DisplayClass31_0::.ctor()
extern void U3CU3Ec__DisplayClass31_0__ctor_m10A46C5D2F642211F94623ECBD1D931D20F0588F (void);
// 0x00000343 System.Boolean StickmanController/<>c__DisplayClass31_0::<GiveItem>b__0(ItemScript)
extern void U3CU3Ec__DisplayClass31_0_U3CGiveItemU3Eb__0_mCDD72F2529F6F61FE42E0561F5DC73E632213EB5 (void);
// 0x00000344 System.Void StickmanController/<>c__DisplayClass31_0::<GiveItem>b__1()
extern void U3CU3Ec__DisplayClass31_0_U3CGiveItemU3Eb__1_mD8F455CDAE7200BF4D658D337CDA026C29999422 (void);
// 0x00000345 System.Void StickmanController/<>c__DisplayClass32_0::.ctor()
extern void U3CU3Ec__DisplayClass32_0__ctor_m3F5C3AAE304089E7AF4B0440412B58C784E760C0 (void);
// 0x00000346 System.Void StickmanController/<>c__DisplayClass32_0::<GiveItem>b__0()
extern void U3CU3Ec__DisplayClass32_0_U3CGiveItemU3Eb__0_m565BB93B9652D0FD450CCB699CD2C5DCBF7CAB1C (void);
// 0x00000347 System.Void StockScript::Start()
extern void StockScript_Start_mE13A05F6B931BCE253B5FA3836B509C4A727A838 (void);
// 0x00000348 System.Void StockScript::Update()
extern void StockScript_Update_mF0240342E5422546E6EF41F01E34F977FA2C94C9 (void);
// 0x00000349 System.Void StockScript::.ctor()
extern void StockScript__ctor_mBA0540617D36C189A82DA4EAB5A981FDB2080E68 (void);
// 0x0000034A System.Void Table::Start()
extern void Table_Start_m7C9368D59EBBB800C434042C9C7C4D2DCAFABDFD (void);
// 0x0000034B UnityEngine.Vector3 Table::GetPosition()
extern void Table_GetPosition_mAB0F56C58B829DAECACCB53976A4AADAF5ECAA86 (void);
// 0x0000034C System.Boolean Table::HasSpace()
extern void Table_HasSpace_mA6FD4BCF5A15BC95C0DCB19CCC22074A1BD29E4C (void);
// 0x0000034D UnityEngine.Vector3 Table::GetItemPosition()
extern void Table_GetItemPosition_m6B94E00DDD5172BE563B46B0415970D2F0293BFE (void);
// 0x0000034E System.Boolean Table::IsAvailable()
extern void Table_IsAvailable_mD0F1452B03796455136DF67D9F934CCD0A5486C4 (void);
// 0x0000034F System.Boolean Table::IsUsable()
extern void Table_IsUsable_mCCA41D548868D81BF46B309D76CFA2D2CE973EC8 (void);
// 0x00000350 ChairScript Table::GetChair()
extern void Table_GetChair_mE91B023B01F093F36E8CCA7339341502877211D1 (void);
// 0x00000351 System.Collections.Generic.List`1<ChairScript> Table::FreeChairs()
extern void Table_FreeChairs_m58E9992D27C2800929E8D7103C73FBD70B9CFE12 (void);
// 0x00000352 System.Void Table::GetItem(UnityEngine.Transform)
extern void Table_GetItem_m2A1CECD9CDE6D501038CB345964E8311FB40433A (void);
// 0x00000353 System.Void Table::Update()
extern void Table_Update_m528BA3D6E5DF9B76CEFC6969C1770D1CD304CB16 (void);
// 0x00000354 System.Void Table::AddItem()
extern void Table_AddItem_m4040A91B13645042EDB6105E04373295DC08E05F (void);
// 0x00000355 System.Void Table::.ctor()
extern void Table__ctor_m45402BF067520AC46B9B7FA279D9B96E7515A3C8 (void);
// 0x00000356 System.Void Table/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m1E563247B540DAC91869420E24D584E62FE72106 (void);
// 0x00000357 System.Void Table/<>c__DisplayClass11_0::<GetItem>b__0()
extern void U3CU3Ec__DisplayClass11_0_U3CGetItemU3Eb__0_m13FC0A0E5612D33760DDE82CE1D4D5F5C7960876 (void);
// 0x00000358 System.Void Table/<>c__DisplayClass11_0::<GetItem>b__1()
extern void U3CU3Ec__DisplayClass11_0_U3CGetItemU3Eb__1_m90F508A82378F65596C8E0810EC611CFAE08A7B3 (void);
// 0x00000359 System.Void Table/<>c__DisplayClass11_0::<GetItem>b__2()
extern void U3CU3Ec__DisplayClass11_0_U3CGetItemU3Eb__2_mFA64B10D8338EC552126C9A890F7D1866A185CC5 (void);
// 0x0000035A System.Void TrashbinScript::Start()
extern void TrashbinScript_Start_m3EFAD5AF85D52E4FDF669AE45C823CEFEA6B2D3B (void);
// 0x0000035B System.Void TrashbinScript::Update()
extern void TrashbinScript_Update_mCCB90848C696A4627E35E076185A4F9A276304F6 (void);
// 0x0000035C System.Void TrashbinScript::.ctor()
extern void TrashbinScript__ctor_m47C031EF4FF95266A5641D91CC0CF2839690202C (void);
// 0x0000035D System.Void TutorialHandler::Start()
extern void TutorialHandler_Start_mD7B652D3048FD174F5B974AE27D760A86EF70F31 (void);
// 0x0000035E System.Void TutorialHandler::QuestIncrement(System.Int32)
extern void TutorialHandler_QuestIncrement_m62B0E9210C008A55D67B59E00DB56D7D9A507773 (void);
// 0x0000035F System.Void TutorialHandler::CheckQuestsCompletion(System.Int32)
extern void TutorialHandler_CheckQuestsCompletion_m950D95ABB859B3DC185B34AED5023BF4A5318A44 (void);
// 0x00000360 System.Void TutorialHandler::ProceedTutorial()
extern void TutorialHandler_ProceedTutorial_m75F77321226CE4BE7FAD2C96C7FB85B518282717 (void);
// 0x00000361 System.Void TutorialHandler::CheckTutorialStatus()
extern void TutorialHandler_CheckTutorialStatus_m72E63B8F2B681CB04425FB1C4E1F4EDA3A4E06B5 (void);
// 0x00000362 System.Void TutorialHandler::ShowArrow(UnityEngine.Transform,System.Single)
extern void TutorialHandler_ShowArrow_m9CD5048B808CF3A98A9F16D0A91FB8343A6F9B0C (void);
// 0x00000363 System.Collections.IEnumerator TutorialHandler::HideArrow(System.Single)
extern void TutorialHandler_HideArrow_mF4C43F15F3599F60DCBF27489A6B3D54562E7721 (void);
// 0x00000364 System.Void TutorialHandler::Moved()
extern void TutorialHandler_Moved_mF88C2511A377DBB486EECF1589C71A131BBC5AE6 (void);
// 0x00000365 System.Void TutorialHandler::.ctor()
extern void TutorialHandler__ctor_mBE63E8D3D69F6EDF6BC873D42BB7F1B9478D9420 (void);
// 0x00000366 System.Void TutorialHandler::<CheckTutorialStatus>b__14_0()
extern void TutorialHandler_U3CCheckTutorialStatusU3Eb__14_0_m5E4C75994691178EC2E865207CCEF07B9D4C6FF4 (void);
// 0x00000367 System.Void TutorialHandler::<CheckTutorialStatus>b__14_8()
extern void TutorialHandler_U3CCheckTutorialStatusU3Eb__14_8_m90BFF70C8202B97231F5473EDC17129948DD00DB (void);
// 0x00000368 System.Void TutorialHandler::<HideArrow>b__16_0()
extern void TutorialHandler_U3CHideArrowU3Eb__16_0_mEC1563FC02D4FB86EC384D41FC0622FAD116612B (void);
// 0x00000369 System.Void TutorialHandler/<>c::.cctor()
extern void U3CU3Ec__cctor_mB609074DAD8F036800CEA91CF112D0D67A977F58 (void);
// 0x0000036A System.Void TutorialHandler/<>c::.ctor()
extern void U3CU3Ec__ctor_m59F1DFD70543F1D32332F26CE5887E55923C1CBA (void);
// 0x0000036B System.Boolean TutorialHandler/<>c::<CheckTutorialStatus>b__14_1(ClothRackCircle)
extern void U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_1_mB5B208D46BC07940EE073B98C205EBA38645FE6C (void);
// 0x0000036C System.Boolean TutorialHandler/<>c::<CheckTutorialStatus>b__14_2(ItemRack)
extern void U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_2_m74242D6FC8692AB47298D34BE1319E2241D74B88 (void);
// 0x0000036D System.Boolean TutorialHandler/<>c::<CheckTutorialStatus>b__14_3(CounterCircle)
extern void U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_3_m3AF90F02442E62078F4CC940FE7EF7874A42AE2C (void);
// 0x0000036E System.Boolean TutorialHandler/<>c::<CheckTutorialStatus>b__14_4(BuyScript)
extern void U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_4_m5BB35727DA0AC671904E17054B2EAFD98AA2B538 (void);
// 0x0000036F System.Boolean TutorialHandler/<>c::<CheckTutorialStatus>b__14_5(BuyExtensionScript)
extern void U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_5_m3D8B824D80FE3166E34F729DFBEBB071D98531BE (void);
// 0x00000370 System.Boolean TutorialHandler/<>c::<CheckTutorialStatus>b__14_6(UpgradeCircle)
extern void U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_6_mAA72F9DEA599800198270C53027961BEA42A4AFC (void);
// 0x00000371 System.Boolean TutorialHandler/<>c::<CheckTutorialStatus>b__14_7(BuyRoomScript)
extern void U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_7_m5F462466905AEE7402C6F813AEA2EA64BBD200F8 (void);
// 0x00000372 System.Void TutorialHandler/<HideArrow>d__16::.ctor(System.Int32)
extern void U3CHideArrowU3Ed__16__ctor_m145FD17768C0E9529F20E4ED13A7B5CFAFE2AEA6 (void);
// 0x00000373 System.Void TutorialHandler/<HideArrow>d__16::System.IDisposable.Dispose()
extern void U3CHideArrowU3Ed__16_System_IDisposable_Dispose_m6FB1817345E3F4B474B1ADFF3183A5F6AD6CED93 (void);
// 0x00000374 System.Boolean TutorialHandler/<HideArrow>d__16::MoveNext()
extern void U3CHideArrowU3Ed__16_MoveNext_m93AD60BF5AE7828BC36072BD37D69185356D6976 (void);
// 0x00000375 System.Object TutorialHandler/<HideArrow>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CHideArrowU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD341044B7B2DCE925E1189C842D07D65BA737BD (void);
// 0x00000376 System.Void TutorialHandler/<HideArrow>d__16::System.Collections.IEnumerator.Reset()
extern void U3CHideArrowU3Ed__16_System_Collections_IEnumerator_Reset_m0A2170F6B33C0DEE1D6A2A64CA338B843FDF1F1D (void);
// 0x00000377 System.Object TutorialHandler/<HideArrow>d__16::System.Collections.IEnumerator.get_Current()
extern void U3CHideArrowU3Ed__16_System_Collections_IEnumerator_get_Current_m3339FA789ECDF6113D9FDF41C48D81AD4AEBE640 (void);
// 0x00000378 System.Void Quest::.ctor()
extern void Quest__ctor_m8952599902E706C78A452CE9817AC64199B12621 (void);
// 0x00000379 System.Void UIHandler::SetCount(System.Int32)
extern void UIHandler_SetCount_m9A79BBB74FF7DC7D615D4A7764DCB9B15CDB67F0 (void);
// 0x0000037A System.Void UIHandler::OpenShop()
extern void UIHandler_OpenShop_m5FB9400321E0629316C77F3DED14F299F115BB42 (void);
// 0x0000037B System.Void UIHandler::CloseShop()
extern void UIHandler_CloseShop_m09DFC9DFCE30649C46D53604095BAAC3EF4BB836 (void);
// 0x0000037C System.Void UIHandler::ShowBuildingText()
extern void UIHandler_ShowBuildingText_mCAB36CE9D4F6089415279198B2009DA1FD19B393 (void);
// 0x0000037D System.Void UIHandler::ShowUpgradeText()
extern void UIHandler_ShowUpgradeText_m68874532DEE3EA79A59AC0B203CA6864E32409B4 (void);
// 0x0000037E System.Void UIHandler::ShowRoomText()
extern void UIHandler_ShowRoomText_m52B1219C4B6CA5C1BA70293EC49093681F2F02D6 (void);
// 0x0000037F System.Void UIHandler::ShowText(System.String)
extern void UIHandler_ShowText_mE84FE47627B60719F192D6B067A3058A2E7CF697 (void);
// 0x00000380 System.Collections.IEnumerator UIHandler::FadingOut()
extern void UIHandler_FadingOut_mFEDF5DF5E5FC85575EA9169D3375E5194DE62B01 (void);
// 0x00000381 System.Collections.IEnumerator UIHandler::ScaleOut()
extern void UIHandler_ScaleOut_mF596A3C7477E908FC4659B8D165E0E65957B575D (void);
// 0x00000382 System.Void UIHandler::.ctor()
extern void UIHandler__ctor_m546C9899F081C7913F3360DA872417C6B96CF1EE (void);
// 0x00000383 System.Void UIHandler::<CloseShop>b__7_0()
extern void UIHandler_U3CCloseShopU3Eb__7_0_mD254D74058521ADA744C7AC353C03F531ED4C24E (void);
// 0x00000384 System.Void UIHandler/<FadingOut>d__12::.ctor(System.Int32)
extern void U3CFadingOutU3Ed__12__ctor_m9B1A5BAEA80B35DDB5991C6621566E84FA0BE88C (void);
// 0x00000385 System.Void UIHandler/<FadingOut>d__12::System.IDisposable.Dispose()
extern void U3CFadingOutU3Ed__12_System_IDisposable_Dispose_mB183BEC4D844C9802FC54BA5818F5F91B6B7D2DB (void);
// 0x00000386 System.Boolean UIHandler/<FadingOut>d__12::MoveNext()
extern void U3CFadingOutU3Ed__12_MoveNext_mF13ACB60FF65F36DE03A3CBDE630509193C6EC31 (void);
// 0x00000387 System.Object UIHandler/<FadingOut>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CFadingOutU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA78BB56540759B2BEBC962ECCBD9E5B26C252ED3 (void);
// 0x00000388 System.Void UIHandler/<FadingOut>d__12::System.Collections.IEnumerator.Reset()
extern void U3CFadingOutU3Ed__12_System_Collections_IEnumerator_Reset_m9C6D67A403D33404D871D941A990A6C0C9B69859 (void);
// 0x00000389 System.Object UIHandler/<FadingOut>d__12::System.Collections.IEnumerator.get_Current()
extern void U3CFadingOutU3Ed__12_System_Collections_IEnumerator_get_Current_m3EC21967F19D31506FD5931D2606CEB27DC49A16 (void);
// 0x0000038A System.Void UIHandler/<ScaleOut>d__13::.ctor(System.Int32)
extern void U3CScaleOutU3Ed__13__ctor_m609A164437154441CC04DD98B24FDEEB72BCAA26 (void);
// 0x0000038B System.Void UIHandler/<ScaleOut>d__13::System.IDisposable.Dispose()
extern void U3CScaleOutU3Ed__13_System_IDisposable_Dispose_m7EC0F1CF2F10C98974EE50BACD90D15E9190756A (void);
// 0x0000038C System.Boolean UIHandler/<ScaleOut>d__13::MoveNext()
extern void U3CScaleOutU3Ed__13_MoveNext_mC4482DC725A875A1E1C49F7A6930CC2A57DE164F (void);
// 0x0000038D System.Object UIHandler/<ScaleOut>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CScaleOutU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m482EC8B3A1F6D3B8E5485415EC82F23EC8BA9F38 (void);
// 0x0000038E System.Void UIHandler/<ScaleOut>d__13::System.Collections.IEnumerator.Reset()
extern void U3CScaleOutU3Ed__13_System_Collections_IEnumerator_Reset_mC08E32F44D1CA222E935723B96453E08CFEF3618 (void);
// 0x0000038F System.Object UIHandler/<ScaleOut>d__13::System.Collections.IEnumerator.get_Current()
extern void U3CScaleOutU3Ed__13_System_Collections_IEnumerator_get_Current_m3B196BBE1A846CE2E0FF7E2DE107D725F118BC71 (void);
// 0x00000390 System.Void UpgradeCircle::Start()
extern void UpgradeCircle_Start_mBFA84E87AB5776C1907E5F33F8F4B490A7D98517 (void);
// 0x00000391 ShopType UpgradeCircle::GetType()
extern void UpgradeCircle_GetType_mC1178CE8214B09023E60EEF8303E7B1521DB5EB7 (void);
// 0x00000392 System.Void UpgradeCircle::OnTriggerStay(UnityEngine.Collider)
extern void UpgradeCircle_OnTriggerStay_mC402B79E21D87398C4753BB13E8425912556576E (void);
// 0x00000393 System.Void UpgradeCircle::OnTriggerExit(UnityEngine.Collider)
extern void UpgradeCircle_OnTriggerExit_m1B93CABE8D9C9385476501E706F950F844CAAF29 (void);
// 0x00000394 System.Collections.IEnumerator UpgradeCircle::Scale()
extern void UpgradeCircle_Scale_m4935B6DF489EC8A0003A0545954DB68BA47F09FD (void);
// 0x00000395 System.Void UpgradeCircle::.ctor()
extern void UpgradeCircle__ctor_m15A949DDEF94609E79FE9F3E4BB6D1334D946D3A (void);
// 0x00000396 System.Void UpgradeCircle::<Scale>b__7_0()
extern void UpgradeCircle_U3CScaleU3Eb__7_0_m7CEDF638ED322C7796D01B502D361349611B5518 (void);
// 0x00000397 System.Void UpgradeCircle/<Scale>d__7::.ctor(System.Int32)
extern void U3CScaleU3Ed__7__ctor_m2E43BC1442CB694C56E51252A2B12EA7075E3D56 (void);
// 0x00000398 System.Void UpgradeCircle/<Scale>d__7::System.IDisposable.Dispose()
extern void U3CScaleU3Ed__7_System_IDisposable_Dispose_m1A62A2866F5D9886A22AC179BF57C71F501635A0 (void);
// 0x00000399 System.Boolean UpgradeCircle/<Scale>d__7::MoveNext()
extern void U3CScaleU3Ed__7_MoveNext_m74AA2F38D85FAF1E6A8C56926C59E8160D16257F (void);
// 0x0000039A System.Object UpgradeCircle/<Scale>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CScaleU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m96709E83C20F9E2B3E5B4CB6D698898C98D1134E (void);
// 0x0000039B System.Void UpgradeCircle/<Scale>d__7::System.Collections.IEnumerator.Reset()
extern void U3CScaleU3Ed__7_System_Collections_IEnumerator_Reset_m48D28CD1EDA5FDD9EAF71F803FCF34ADB1C6966B (void);
// 0x0000039C System.Object UpgradeCircle/<Scale>d__7::System.Collections.IEnumerator.get_Current()
extern void U3CScaleU3Ed__7_System_Collections_IEnumerator_get_Current_m3ED9E054F327E7C20176CCCE38E8A0512198AC3E (void);
// 0x0000039D System.Void UpgradeHandler::Start()
extern void UpgradeHandler_Start_mD2E184547141482BADC5E64D37480E3991959F87 (void);
// 0x0000039E System.Void UpgradeHandler::LimitSet()
extern void UpgradeHandler_LimitSet_m578A43531A0BA57D4BEB0F3785C6F04FAD8B846F (void);
// 0x0000039F UpgradeUI UpgradeHandler::GetUpgradeUI(ShopType)
extern void UpgradeHandler_GetUpgradeUI_m31A8474DEE7BAA084C3792FFFC6234B77AA0EFE3 (void);
// 0x000003A0 System.Void UpgradeHandler::OpenCanvas(System.Int32)
extern void UpgradeHandler_OpenCanvas_mAB0F759A4726645759A51AE79FB57B4DA8633E6B (void);
// 0x000003A1 System.Void UpgradeHandler::CloseCanvas(System.Int32)
extern void UpgradeHandler_CloseCanvas_m28A17812C18D874EEADA250AEFAA9F2AFAD6A698 (void);
// 0x000003A2 System.Boolean UpgradeHandler::NeedsCashier(ShopType)
extern void UpgradeHandler_NeedsCashier_mB7D2E9EE64EC4C8E4E717FB8E0B3CC0AFFC15589 (void);
// 0x000003A3 System.Void UpgradeHandler::BuyCashier(System.Int32)
extern void UpgradeHandler_BuyCashier_m27DB37A7812A96BD1D09ACE2ABF2821819E58486 (void);
// 0x000003A4 System.Boolean UpgradeHandler::NeedsWorkers(ShopType)
extern void UpgradeHandler_NeedsWorkers_mDFB950E736E03B6E0222F6AAFA2B541DAE4A405A (void);
// 0x000003A5 System.Void UpgradeHandler::BuyWorker(System.Int32)
extern void UpgradeHandler_BuyWorker_mAF7262352AFB1EC1F1FE22610289F2EBBB4A2D4B (void);
// 0x000003A6 System.Boolean UpgradeHandler::NeedsUpgrade(ShopType)
extern void UpgradeHandler_NeedsUpgrade_m970FEAA9DD39871AD99F736D854821D59501A87C (void);
// 0x000003A7 System.Void UpgradeHandler::UpgradeWorkers(System.Int32)
extern void UpgradeHandler_UpgradeWorkers_m11DE68C7FA853CE6AFE67E3710DDFD8F6A15BB12 (void);
// 0x000003A8 System.Int32 UpgradeHandler::GetWorkerLevel(ShopType)
extern void UpgradeHandler_GetWorkerLevel_m02D4C9243BF807DC849916E601501A13115E6732 (void);
// 0x000003A9 System.Void UpgradeHandler::.ctor()
extern void UpgradeHandler__ctor_m76BF951BCF2C69DD48E068193BE9E0306E8CBD40 (void);
// 0x000003AA System.Void UpgradeHandler/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m3DF04C5024A11294B6DB992A8FB36D20E6EBCBF7 (void);
// 0x000003AB System.Boolean UpgradeHandler/<>c__DisplayClass4_0::<GetUpgradeUI>b__0(UpgradeUI)
extern void U3CU3Ec__DisplayClass4_0_U3CGetUpgradeUIU3Eb__0_m3A4045851AF94F0DFB0FB8EAA252EF637C127C79 (void);
// 0x000003AC System.Void UpgradeHandler/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m1A966E75655E5557A0F1A80A67053EFB5D4AAE9F (void);
// 0x000003AD System.Boolean UpgradeHandler/<>c__DisplayClass5_0::<OpenCanvas>b__0(UpgradeUI)
extern void U3CU3Ec__DisplayClass5_0_U3COpenCanvasU3Eb__0_m6B5E908631E4B87C51E2A5F48AF6559BD5496E0B (void);
// 0x000003AE System.Void UpgradeHandler/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m33124362D15309DD00C60D5764AB582313C444C8 (void);
// 0x000003AF System.Void UpgradeHandler/<>c__DisplayClass6_0::<CloseCanvas>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CCloseCanvasU3Eb__0_mFB35841FD3C7981BFAB91585D42DF86117136480 (void);
// 0x000003B0 System.Void UpgradeHandler/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m5640922E3FEF461274DD9034FC55FE1A1B407FD6 (void);
// 0x000003B1 System.Void UpgradeHandler/<>c__DisplayClass8_0::<BuyCashier>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CBuyCashierU3Eb__0_m91EBA152B451C43DE7624D693172D50C7018C4D2 (void);
// 0x000003B2 System.Void UpgradeHandler/<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_mD5600A0E023AAA1A991B5A3C0C6CDC46CF81EE19 (void);
// 0x000003B3 System.Void UpgradeHandler/<>c__DisplayClass10_0::<BuyWorker>b__0()
extern void U3CU3Ec__DisplayClass10_0_U3CBuyWorkerU3Eb__0_mB4EFC96EF873E25D795240549AA6B13E93236EF5 (void);
// 0x000003B4 System.Void UpgradeHandler/<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_m612B016221B5BC3259A0F2599D348DE5D9592CD8 (void);
// 0x000003B5 System.Boolean UpgradeHandler/<>c__DisplayClass12_0::<UpgradeWorkers>b__1(WorkerScript)
extern void U3CU3Ec__DisplayClass12_0_U3CUpgradeWorkersU3Eb__1_m4244C7920BDADCA807D5FC037D584E28FB3CEB66 (void);
// 0x000003B6 System.Void UpgradeHandler/<>c__DisplayClass12_0::<UpgradeWorkers>b__0()
extern void U3CU3Ec__DisplayClass12_0_U3CUpgradeWorkersU3Eb__0_m11F87A56C54898570FB735AC6D0D0F56A470C42B (void);
// 0x000003B7 System.Boolean UpgradeUI::NeedsCashiers()
extern void UpgradeUI_NeedsCashiers_m4E0D99A1A4B5D7E02588FB2BAD7F402F85534E00 (void);
// 0x000003B8 System.Boolean UpgradeUI::NeedsWorkers()
extern void UpgradeUI_NeedsWorkers_m4690A02A7A3BB7A481C3292D7CC6DD9D9B8B2997 (void);
// 0x000003B9 System.Void UpgradeUI::.ctor()
extern void UpgradeUI__ctor_mF19A34D61D4CF0E3E4701E4CEC95E92A60193DC4 (void);
// 0x000003BA System.Void VisitorScript::Start()
extern void VisitorScript_Start_mEBEEEF329ADC5F49BFEBC6DFFD1C369C7F56D5B0 (void);
// 0x000003BB ShopType VisitorScript::GetShopType()
extern void VisitorScript_GetShopType_m5238D30BAF04C904646C916C70BEC8BF7509E5E7 (void);
// 0x000003BC System.Boolean VisitorScript::DestinationReached()
extern void VisitorScript_DestinationReached_m93B469322B74A941BC668F3B52C13EEC168B8348 (void);
// 0x000003BD System.Void VisitorScript::Update()
extern void VisitorScript_Update_m664537032DAE211290BA5F5589ACE04DCD14E751 (void);
// 0x000003BE System.Void VisitorScript::ChangeSuit()
extern void VisitorScript_ChangeSuit_m0BF2616D3ED1E072512B5A37044C5200419BC360 (void);
// 0x000003BF System.Void VisitorScript::Jumped()
extern void VisitorScript_Jumped_mB8E61206BD5A2ADC7279D9B0578456F64D743D5C (void);
// 0x000003C0 System.Void VisitorScript::Ate()
extern void VisitorScript_Ate_m8C783D85D06BCE42D8C92B2DF4F0A9AE05431E7B (void);
// 0x000003C1 System.Void VisitorScript::IdleAnimation()
extern void VisitorScript_IdleAnimation_mCBF67411B1D5631A445770D7D233745E2001F6A6 (void);
// 0x000003C2 System.Void VisitorScript::ReturnAnimation()
extern void VisitorScript_ReturnAnimation_m31FFE1B1ED3B9ABB92C0B497AAB059800C2DBE05 (void);
// 0x000003C3 System.Void VisitorScript::Activate()
extern void VisitorScript_Activate_m26799EDC8386EF07928AC20BF4E97164A8033821 (void);
// 0x000003C4 System.Void VisitorScript::SetShop()
extern void VisitorScript_SetShop_m603547D10AD415F5C64DA42DE07A922EE6A9DDDA (void);
// 0x000003C5 System.Void VisitorScript::Leave(Counter)
extern void VisitorScript_Leave_m07290A310C76CB24F117FC0EF824F98ED31975CD (void);
// 0x000003C6 System.Collections.IEnumerator VisitorScript::LeavingSpawnMoney(System.Int32,Counter)
extern void VisitorScript_LeavingSpawnMoney_m28B83A493B3020FF40056E6F0B9C4F419B9CA75F (void);
// 0x000003C7 System.Void VisitorScript::SetQueuePos(UnityEngine.Vector3)
extern void VisitorScript_SetQueuePos_mAD7A788AF2102631C880B847E37DB2D7DB0C95BC (void);
// 0x000003C8 System.Void VisitorScript::.ctor()
extern void VisitorScript__ctor_m654C644B90CCC5EC6391EA7D836B934CE24529B1 (void);
// 0x000003C9 System.Void VisitorScript/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_mFA6A7C8298A6250AAABF82D792A4A62D23EE50B4 (void);
// 0x000003CA System.Void VisitorScript/<>c__DisplayClass33_0::<LeavingSpawnMoney>b__0()
extern void U3CU3Ec__DisplayClass33_0_U3CLeavingSpawnMoneyU3Eb__0_mF7E7A61C8B9ED79AFD1EFE7F1F0051E4C8A4D380 (void);
// 0x000003CB System.Void VisitorScript/<LeavingSpawnMoney>d__33::.ctor(System.Int32)
extern void U3CLeavingSpawnMoneyU3Ed__33__ctor_mCE03A35B1C4B6BB6B582264AA9B47417A3889AC9 (void);
// 0x000003CC System.Void VisitorScript/<LeavingSpawnMoney>d__33::System.IDisposable.Dispose()
extern void U3CLeavingSpawnMoneyU3Ed__33_System_IDisposable_Dispose_mCC3D1AA70FEE6C5F6430D5FED7CBBE4CA36A8271 (void);
// 0x000003CD System.Boolean VisitorScript/<LeavingSpawnMoney>d__33::MoveNext()
extern void U3CLeavingSpawnMoneyU3Ed__33_MoveNext_m112518BD64ED3E3748E931257A96DFD2B4849FC5 (void);
// 0x000003CE System.Object VisitorScript/<LeavingSpawnMoney>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CLeavingSpawnMoneyU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m768CE76B1763AE572939BFB14F5C14C4C2FA8209 (void);
// 0x000003CF System.Void VisitorScript/<LeavingSpawnMoney>d__33::System.Collections.IEnumerator.Reset()
extern void U3CLeavingSpawnMoneyU3Ed__33_System_Collections_IEnumerator_Reset_mA1F04CC86AB05DC13504FBBB1946739BFE513099 (void);
// 0x000003D0 System.Object VisitorScript/<LeavingSpawnMoney>d__33::System.Collections.IEnumerator.get_Current()
extern void U3CLeavingSpawnMoneyU3Ed__33_System_Collections_IEnumerator_get_Current_m683E9643C5396353588E129ABF8DB66890733DC3 (void);
// 0x000003D1 System.Void WorkerScript::Start()
extern void WorkerScript_Start_m5720A01A17730C3D1956FC8DDF2A8ED48EABF03D (void);
// 0x000003D2 ShopType WorkerScript::GetShopType()
extern void WorkerScript_GetShopType_m1796960FD87F3431F13B200BF72CE6004286DF5C (void);
// 0x000003D3 System.Boolean WorkerScript::DestinationReached()
extern void WorkerScript_DestinationReached_m3CCCAB86665C00E82499EA854BD76B2BFC381541 (void);
// 0x000003D4 System.Void WorkerScript::Update()
extern void WorkerScript_Update_m7271FBFC02731487AB627F77F891F55060A5B95D (void);
// 0x000003D5 System.Void WorkerScript::AddLevel()
extern void WorkerScript_AddLevel_mD1D4367FC17F8AF42E82623233E4DE1E69CBC9B1 (void);
// 0x000003D6 System.Void WorkerScript::AddItem(ItemScript)
extern void WorkerScript_AddItem_m8ED4F5A8418B8689EB5CAF49F49D759EE02AD84F (void);
// 0x000003D7 System.Void WorkerScript::FindRack()
extern void WorkerScript_FindRack_mA99F74B75A4703E4D193A6B5FEFEEBFE9E3B7577 (void);
// 0x000003D8 System.Void WorkerScript::IdleAnimation()
extern void WorkerScript_IdleAnimation_mE821B0BAA5AB2713861AA0E3075004CCD3E3282F (void);
// 0x000003D9 System.Void WorkerScript::WalkAnimation()
extern void WorkerScript_WalkAnimation_m1F2D013C72412B3742C4829595E396994EB57F75 (void);
// 0x000003DA System.Void WorkerScript::SetShop()
extern void WorkerScript_SetShop_mDB8C27FBA37B4ECA7777FECF379FB642BF118E36 (void);
// 0x000003DB System.Void WorkerScript::.ctor()
extern void WorkerScript__ctor_mCF79680AA0BCC0901A69164FDE2B20769CC11538 (void);
// 0x000003DC System.Void WorkerScript/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_m0B9226B266F07CB2B71CED6BAF41AF84AD4E8504 (void);
// 0x000003DD System.Void WorkerScript/<>c__DisplayClass14_0::<Update>b__0()
extern void U3CU3Ec__DisplayClass14_0_U3CUpdateU3Eb__0_m1041C4F6294C71EE35F106E7BAA27353098F8988 (void);
// 0x000003DE System.Int32 Facebook.Unity.Example.ConsoleBase::get_ButtonHeight()
extern void ConsoleBase_get_ButtonHeight_mF81259A974C9E3C4B24AFB8D95A18F0A03EE3396 (void);
// 0x000003DF System.Int32 Facebook.Unity.Example.ConsoleBase::get_MainWindowWidth()
extern void ConsoleBase_get_MainWindowWidth_m9D6DB2FC65DC5D7FA781E5CF2FDB945C760D3C1E (void);
// 0x000003E0 System.Int32 Facebook.Unity.Example.ConsoleBase::get_MainWindowFullWidth()
extern void ConsoleBase_get_MainWindowFullWidth_m7238BF9690E4397727DF038E6B185AFC2F7A1BF8 (void);
// 0x000003E1 System.Int32 Facebook.Unity.Example.ConsoleBase::get_MarginFix()
extern void ConsoleBase_get_MarginFix_m286762B25357CC839197F05CC557CCFA376B7DB3 (void);
// 0x000003E2 System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::get_MenuStack()
extern void ConsoleBase_get_MenuStack_mA1E88A5414EA46C243855D30F28FB58F507F7597 (void);
// 0x000003E3 System.Void Facebook.Unity.Example.ConsoleBase::set_MenuStack(System.Collections.Generic.Stack`1<System.String>)
extern void ConsoleBase_set_MenuStack_mDC687D0701EEDAD9D55A44AE9449326C5E6ADFDC (void);
// 0x000003E4 System.String Facebook.Unity.Example.ConsoleBase::get_Status()
extern void ConsoleBase_get_Status_m71AFE45D2F68B01846188F212D65923B5B341728 (void);
// 0x000003E5 System.Void Facebook.Unity.Example.ConsoleBase::set_Status(System.String)
extern void ConsoleBase_set_Status_mFD36D24FF2D3D6554F11859251BB325B750776D2 (void);
// 0x000003E6 UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::get_LastResponseTexture()
extern void ConsoleBase_get_LastResponseTexture_m02F8A694917953E5B184AC489DBE600009451DCE (void);
// 0x000003E7 System.Void Facebook.Unity.Example.ConsoleBase::set_LastResponseTexture(UnityEngine.Texture2D)
extern void ConsoleBase_set_LastResponseTexture_m8ED57EA554542EB683B1484F5DDE13ED983A146D (void);
// 0x000003E8 System.String Facebook.Unity.Example.ConsoleBase::get_LastResponse()
extern void ConsoleBase_get_LastResponse_m5BCC50E8189B285B0AE6244435A8A9F6E3D4CE85 (void);
// 0x000003E9 System.Void Facebook.Unity.Example.ConsoleBase::set_LastResponse(System.String)
extern void ConsoleBase_set_LastResponse_m847D45A344585AFCFCE231CF8993E2A750C76547 (void);
// 0x000003EA UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::get_ScrollPosition()
extern void ConsoleBase_get_ScrollPosition_m489494F56C1E8E36B530B9CEBF1973640D39A47D (void);
// 0x000003EB System.Void Facebook.Unity.Example.ConsoleBase::set_ScrollPosition(UnityEngine.Vector2)
extern void ConsoleBase_set_ScrollPosition_m7C2D74B4FF2432875A98B2F5A70F4D02494A9C84 (void);
// 0x000003EC System.Single Facebook.Unity.Example.ConsoleBase::get_ScaleFactor()
extern void ConsoleBase_get_ScaleFactor_m54D2E9E038B321F36372AB6284799232475B37F2 (void);
// 0x000003ED System.Int32 Facebook.Unity.Example.ConsoleBase::get_FontSize()
extern void ConsoleBase_get_FontSize_mBA25F85EA4D6916062FE3D049BDE8BF618D5189F (void);
// 0x000003EE UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_TextStyle()
extern void ConsoleBase_get_TextStyle_m08AB60C7174363AE850D9F15A5C606E73D766704 (void);
// 0x000003EF UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_ButtonStyle()
extern void ConsoleBase_get_ButtonStyle_m28EF2E33654CE9FC915EBECA78D93778517322E2 (void);
// 0x000003F0 UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_TextInputStyle()
extern void ConsoleBase_get_TextInputStyle_m99CA0D3F64E54CCF5DED958ACB141D07EEFB0C13 (void);
// 0x000003F1 UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_LabelStyle()
extern void ConsoleBase_get_LabelStyle_m97006D9788464D58A9BA885AD2348D784699C346 (void);
// 0x000003F2 System.Void Facebook.Unity.Example.ConsoleBase::Awake()
extern void ConsoleBase_Awake_m8068C221C280D202F4051E0CBFBF91C77568CCD7 (void);
// 0x000003F3 System.Boolean Facebook.Unity.Example.ConsoleBase::Button(System.String)
extern void ConsoleBase_Button_m8787498ECF036B9B3B5EB6B2FF49AFA154282D10 (void);
// 0x000003F4 System.Void Facebook.Unity.Example.ConsoleBase::LabelAndTextField(System.String,System.String&)
extern void ConsoleBase_LabelAndTextField_m72E1BBF75934CE747195CB87737A2D7EFC503A8A (void);
// 0x000003F5 System.Boolean Facebook.Unity.Example.ConsoleBase::IsHorizontalLayout()
extern void ConsoleBase_IsHorizontalLayout_m90873C8D21DF82E9733E95CD43BFB72A54912B1D (void);
// 0x000003F6 System.Void Facebook.Unity.Example.ConsoleBase::SwitchMenu(System.Type)
extern void ConsoleBase_SwitchMenu_mA4A6A237A2D4EE813268204D38391A9D2AB7BC34 (void);
// 0x000003F7 System.Void Facebook.Unity.Example.ConsoleBase::GoBack()
extern void ConsoleBase_GoBack_mA682B2317560D91C931680AA95C1AD390611304A (void);
// 0x000003F8 System.Void Facebook.Unity.Example.ConsoleBase::.ctor()
extern void ConsoleBase__ctor_m2295736CFFF716F434C20994E95820657BA9C751 (void);
// 0x000003F9 System.Void Facebook.Unity.Example.ConsoleBase::.cctor()
extern void ConsoleBase__cctor_mE537FEF66506B08BAF97CD2B40D29210C530F6BB (void);
// 0x000003FA System.Void Facebook.Unity.Example.LogView::AddLog(System.String)
extern void LogView_AddLog_mF87B865A91948F6D3F59502861BF67B6354B4A0E (void);
// 0x000003FB System.Void Facebook.Unity.Example.LogView::OnGUI()
extern void LogView_OnGUI_m6B78F78EC906C89DA0BE45F5D3C5571126542376 (void);
// 0x000003FC System.Void Facebook.Unity.Example.LogView::.ctor()
extern void LogView__ctor_m23A534F52CC925EE10260A5EC32DECBDADE2F35D (void);
// 0x000003FD System.Void Facebook.Unity.Example.LogView::.cctor()
extern void LogView__cctor_m112A3FBD481C9FC1A99F57426E9D79AC9E36F226 (void);
// 0x000003FE System.Void Facebook.Unity.Example.MenuBase::GetGui()
// 0x000003FF System.Boolean Facebook.Unity.Example.MenuBase::ShowDialogModeSelector()
extern void MenuBase_ShowDialogModeSelector_mB52DA9E57B0AF80ED97B7951B1815424F939A5D6 (void);
// 0x00000400 System.Boolean Facebook.Unity.Example.MenuBase::ShowBackButton()
extern void MenuBase_ShowBackButton_m33BAD66D85A5FA9E564FF8CF85E8920842238BAE (void);
// 0x00000401 System.Void Facebook.Unity.Example.MenuBase::HandleResult(Facebook.Unity.IResult)
extern void MenuBase_HandleResult_m0CB446ED4B8BDA605B140E61A4A1C6B442765E65 (void);
// 0x00000402 System.Void Facebook.Unity.Example.MenuBase::HandleLimitedLoginResult(Facebook.Unity.IResult)
extern void MenuBase_HandleLimitedLoginResult_m5A42F3F12FA695D59588DCC12004870D55C4ECB9 (void);
// 0x00000403 System.Void Facebook.Unity.Example.MenuBase::OnGUI()
extern void MenuBase_OnGUI_m2EDD4E22A69914B99CBDF039142129959C363D97 (void);
// 0x00000404 System.Void Facebook.Unity.Example.MenuBase::AddStatus()
extern void MenuBase_AddStatus_mA9B44C51B6D228B6EB901EA6FDEC17B6524FF98E (void);
// 0x00000405 System.Void Facebook.Unity.Example.MenuBase::AddBackButton()
extern void MenuBase_AddBackButton_m546C0ED7A454CD1CC80C9BCE27E56D924E6FCDC6 (void);
// 0x00000406 System.Void Facebook.Unity.Example.MenuBase::AddLogButton()
extern void MenuBase_AddLogButton_mDCB6003139C36CE1485D8F6C70C23BF7A13FB812 (void);
// 0x00000407 System.Void Facebook.Unity.Example.MenuBase::AddDialogModeButtons()
extern void MenuBase_AddDialogModeButtons_mCEA0B4B8B4C88A0A8F9A7B4737B4595B0FE5B208 (void);
// 0x00000408 System.Void Facebook.Unity.Example.MenuBase::AddDialogModeButton(Facebook.Unity.ShareDialogMode)
extern void MenuBase_AddDialogModeButton_m8F24FD4F294616E73BEC80B082FADB4D73BF1AC2 (void);
// 0x00000409 System.Void Facebook.Unity.Example.MenuBase::.ctor()
extern void MenuBase__ctor_mD1A153F6EBCE35B5990669A20787B391A5DEC0E2 (void);
// 0x0000040A System.Void Facebook.Unity.Example.AccessTokenMenu::GetGui()
extern void AccessTokenMenu_GetGui_mAFFC7AADE6A3C5A549A15922B3933F868690FBB7 (void);
// 0x0000040B System.Void Facebook.Unity.Example.AccessTokenMenu::.ctor()
extern void AccessTokenMenu__ctor_mA506557143C1CEB6F2D52ED9EECC44FB9058804C (void);
// 0x0000040C System.Void Facebook.Unity.Example.AppEvents::GetGui()
extern void AppEvents_GetGui_m4D6548C60C8A0B6B81EB16E4F20416013669AE09 (void);
// 0x0000040D System.Void Facebook.Unity.Example.AppEvents::.ctor()
extern void AppEvents__ctor_m633F317D3E69F6B62705498B7790C36075F3C09B (void);
// 0x0000040E System.Void Facebook.Unity.Example.AppLinks::GetGui()
extern void AppLinks_GetGui_mEF6BABE28307C19F823198102718BF2DCBE91FC2 (void);
// 0x0000040F System.Void Facebook.Unity.Example.AppLinks::.ctor()
extern void AppLinks__ctor_m2408DE5760F132BFD7437824410EE9FA14FE7F02 (void);
// 0x00000410 System.Void Facebook.Unity.Example.AppRequests::GetGui()
extern void AppRequests_GetGui_mF21A92393C08E39EA4404B8AD9DE1076A42A7060 (void);
// 0x00000411 System.Nullable`1<Facebook.Unity.OGActionType> Facebook.Unity.Example.AppRequests::GetSelectedOGActionType()
extern void AppRequests_GetSelectedOGActionType_m350F98087C7EB39851FC4562007A9EC26261BA1A (void);
// 0x00000412 System.Void Facebook.Unity.Example.AppRequests::.ctor()
extern void AppRequests__ctor_m22F0E79DD38013C0846E20AC2E9F96FCCE6356D8 (void);
// 0x00000413 System.Boolean Facebook.Unity.Example.DialogShare::ShowDialogModeSelector()
extern void DialogShare_ShowDialogModeSelector_mCF0A9C2537886392CC684FBD4939F14C6B8A1F87 (void);
// 0x00000414 System.Void Facebook.Unity.Example.DialogShare::GetGui()
extern void DialogShare_GetGui_m5A303622B0B9250A1C0E9570683CE6F5DC894783 (void);
// 0x00000415 System.Void Facebook.Unity.Example.DialogShare::.ctor()
extern void DialogShare__ctor_m18343E0A2E25DD13D50F65E99F855EE5CBB4A44F (void);
// 0x00000416 System.Void Facebook.Unity.Example.GraphRequest::GetGui()
extern void GraphRequest_GetGui_m04AC165B02447897B6210A4EEA01341C54A18E7E (void);
// 0x00000417 System.Void Facebook.Unity.Example.GraphRequest::ProfilePhotoCallback(Facebook.Unity.IGraphResult)
extern void GraphRequest_ProfilePhotoCallback_m377E44982A0745303405A4B2792BEAEA617DC962 (void);
// 0x00000418 System.Collections.IEnumerator Facebook.Unity.Example.GraphRequest::TakeScreenshot()
extern void GraphRequest_TakeScreenshot_mB6D07D0BD896A3FDA1B3A0CECD1F41A82BB71153 (void);
// 0x00000419 System.Void Facebook.Unity.Example.GraphRequest::.ctor()
extern void GraphRequest__ctor_m1893756902051EDCA6A648EFF3F8C79482D72F17 (void);
// 0x0000041A System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::.ctor(System.Int32)
extern void U3CTakeScreenshotU3Ed__4__ctor_mC5022BC2D6F58E67E8D34863FDDD01DB102192A9 (void);
// 0x0000041B System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.IDisposable.Dispose()
extern void U3CTakeScreenshotU3Ed__4_System_IDisposable_Dispose_m024CE39BF1690FA910DDA8A774BFC512D437756F (void);
// 0x0000041C System.Boolean Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::MoveNext()
extern void U3CTakeScreenshotU3Ed__4_MoveNext_m1BC8573BD27ED010119E112AA3BE6CA166C05D31 (void);
// 0x0000041D System.Object Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CTakeScreenshotU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF4F64034B62BD451ED5DB8EF972FC4B40806FC23 (void);
// 0x0000041E System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.IEnumerator.Reset()
extern void U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_Reset_m99D229E478D52F853F19ADCBCFFDAF25C148D899 (void);
// 0x0000041F System.Object Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_get_Current_m13E1B2CBD35D3D58C012334F0A4FD17B3930C030 (void);
// 0x00000420 System.Boolean Facebook.Unity.Example.MainMenu::ShowBackButton()
extern void MainMenu_ShowBackButton_m0AA293F10C340E46851503EF2B29E235FE61BBE8 (void);
// 0x00000421 System.Void Facebook.Unity.Example.MainMenu::GetGui()
extern void MainMenu_GetGui_mBEAC140C4E2DC7BEE3B2F1FA3AA744770B6BE1BF (void);
// 0x00000422 System.Void Facebook.Unity.Example.MainMenu::CallFBLogin(Facebook.Unity.LoginTracking,System.Collections.Generic.HashSet`1<Facebook.Unity.Example.MainMenu/Scope>)
extern void MainMenu_CallFBLogin_m07CFAA572C425B0EF1CDD4E7B7A906AA7DA8AD3E (void);
// 0x00000423 System.Void Facebook.Unity.Example.MainMenu::CallFBLoginForPublish()
extern void MainMenu_CallFBLoginForPublish_m5519242C5D4241EF52CA37F78A5BCEEF18973A19 (void);
// 0x00000424 System.Void Facebook.Unity.Example.MainMenu::CallFBLogout()
extern void MainMenu_CallFBLogout_mEE96298E9614D3F79009BB034E4DB1047A7855C3 (void);
// 0x00000425 System.Void Facebook.Unity.Example.MainMenu::OnInitComplete()
extern void MainMenu_OnInitComplete_m36800A94B891CDDCC9C4DAED0CC5639190C2E207 (void);
// 0x00000426 System.Void Facebook.Unity.Example.MainMenu::OnHideUnity(System.Boolean)
extern void MainMenu_OnHideUnity_mDE312A6C6A2FE6F756E72A64388E31F5BE626D84 (void);
// 0x00000427 System.Void Facebook.Unity.Example.MainMenu::.ctor()
extern void MainMenu__ctor_m15C7560C4A0296BB1D433FA3D8B1C82568B7179F (void);
// 0x00000428 System.Void Facebook.Unity.Example.Pay::GetGui()
extern void Pay_GetGui_m38BDD0E07950F97403560C5AAD4D35F4ABE590AA (void);
// 0x00000429 System.Void Facebook.Unity.Example.Pay::CallFBPay()
extern void Pay_CallFBPay_m6C1243E4AA248F715366AA5E8996D25431AA2A58 (void);
// 0x0000042A System.Void Facebook.Unity.Example.Pay::.ctor()
extern void Pay__ctor_mF524FF0E64FFA62C166094B9CFE640D276161A26 (void);
// 0x0000042B System.Void Facebook.Unity.Example.TournamentsMenu::GetGui()
extern void TournamentsMenu_GetGui_m2DB7B4FBCBB150B9A9AA56743F8AD986EAFDA459 (void);
// 0x0000042C System.Void Facebook.Unity.Example.TournamentsMenu::.ctor()
extern void TournamentsMenu__ctor_mA3069507B062E55BF40EA9C97FEDBF5C64B69705 (void);
// 0x0000042D System.Void Facebook.Unity.Example.UploadToMediaLibrary::GetGui()
extern void UploadToMediaLibrary_GetGui_m420ECCD445E271C81786F4637EBFBB9F9C44B5D9 (void);
// 0x0000042E System.Void Facebook.Unity.Example.UploadToMediaLibrary::.ctor()
extern void UploadToMediaLibrary__ctor_m4AA178830775ECF0D746C2C99DE10BA396FE4FB3 (void);
// 0x0000042F System.Void EpicToonFX.ETFXButtonScript::Start()
extern void ETFXButtonScript_Start_m0F7F0CFD5169405746F313FF1D7ED1534412844D (void);
// 0x00000430 System.Void EpicToonFX.ETFXButtonScript::Update()
extern void ETFXButtonScript_Update_m81BD65853D34C93426A7D596C3DE2194AA0DDE65 (void);
// 0x00000431 System.Void EpicToonFX.ETFXButtonScript::getProjectileNames()
extern void ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B (void);
// 0x00000432 System.Boolean EpicToonFX.ETFXButtonScript::overButton()
extern void ETFXButtonScript_overButton_m91409E8AD5D3F2F253116858FFC90E972C7BA9B2 (void);
// 0x00000433 System.Void EpicToonFX.ETFXButtonScript::.ctor()
extern void ETFXButtonScript__ctor_m517511C6802BD4A71C24EB8F22F6CDB5C429FECE (void);
// 0x00000434 System.Void EpicToonFX.ETFXFireProjectile::Start()
extern void ETFXFireProjectile_Start_m71FE79B72E21B59B68A10A40490B898D259A1E79 (void);
// 0x00000435 System.Void EpicToonFX.ETFXFireProjectile::Update()
extern void ETFXFireProjectile_Update_mA610052D76161FC9BE9184F05BC78C01D1D2664D (void);
// 0x00000436 System.Void EpicToonFX.ETFXFireProjectile::nextEffect()
extern void ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE (void);
// 0x00000437 System.Void EpicToonFX.ETFXFireProjectile::previousEffect()
extern void ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492 (void);
// 0x00000438 System.Void EpicToonFX.ETFXFireProjectile::AdjustSpeed(System.Single)
extern void ETFXFireProjectile_AdjustSpeed_m9A00824BF1347E0F8FE0E6126CF794676B7BB8FB (void);
// 0x00000439 System.Void EpicToonFX.ETFXFireProjectile::.ctor()
extern void ETFXFireProjectile__ctor_m0454A1D37EA11E608273AB3987BD6D93213A31A8 (void);
// 0x0000043A System.Void EpicToonFX.ETFXLoopScript::Start()
extern void ETFXLoopScript_Start_m8B9F608C71269FF287FF5CF6A0D12F728446FE59 (void);
// 0x0000043B System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
extern void ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB (void);
// 0x0000043C System.Collections.IEnumerator EpicToonFX.ETFXLoopScript::EffectLoop()
extern void ETFXLoopScript_EffectLoop_m9BD0D9DFE864FB2692165E94270E5CFB64CBE5BE (void);
// 0x0000043D System.Void EpicToonFX.ETFXLoopScript::.ctor()
extern void ETFXLoopScript__ctor_m7D358DD45F488706D4E3340A8540A6AF526BB6B7 (void);
// 0x0000043E System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
extern void U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C (void);
// 0x0000043F System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.IDisposable.Dispose()
extern void U3CEffectLoopU3Ed__6_System_IDisposable_Dispose_mE9D671CFBC0674F6D6F1E16BCD8DB26A1FCB4B57 (void);
// 0x00000440 System.Boolean EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::MoveNext()
extern void U3CEffectLoopU3Ed__6_MoveNext_m327965464B09214DB41A74AD12ACC109A74F1DDC (void);
// 0x00000441 System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CEffectLoopU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4095FEA0B6FAFD62E68FBC39B482787B6889936B (void);
// 0x00000442 System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.Reset()
extern void U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D (void);
// 0x00000443 System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_get_Current_m62DB043819328D994B722601E774742FB16DBE29 (void);
// 0x00000444 System.Void EpicToonFX.ETFXMouseOrbit::Start()
extern void ETFXMouseOrbit_Start_m883ED864D07ED2B013CBEC297E413AC4F7E8403A (void);
// 0x00000445 System.Void EpicToonFX.ETFXMouseOrbit::LateUpdate()
extern void ETFXMouseOrbit_LateUpdate_m88BAD2785B3447A239E1094CBEBEC160B1D5C270 (void);
// 0x00000446 System.Single EpicToonFX.ETFXMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
extern void ETFXMouseOrbit_ClampAngle_m0465F9A5E01116400F3D22596C9EFB68F949297D (void);
// 0x00000447 System.Void EpicToonFX.ETFXMouseOrbit::.ctor()
extern void ETFXMouseOrbit__ctor_mCCECFB7E06C2B4F0D1F93D142B8CA91738C63370 (void);
// 0x00000448 System.Void EpicToonFX.ETFXTarget::Start()
extern void ETFXTarget_Start_m4453DDD66DCD94DE34E122A858EF37B3622FBDDE (void);
// 0x00000449 System.Void EpicToonFX.ETFXTarget::SpawnTarget()
extern void ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9 (void);
// 0x0000044A System.Void EpicToonFX.ETFXTarget::OnTriggerEnter(UnityEngine.Collider)
extern void ETFXTarget_OnTriggerEnter_m02835C9D449C3DF9EF0F1ED51651FBB8B81EC58A (void);
// 0x0000044B System.Collections.IEnumerator EpicToonFX.ETFXTarget::Respawn()
extern void ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426 (void);
// 0x0000044C System.Void EpicToonFX.ETFXTarget::.ctor()
extern void ETFXTarget__ctor_m6D27B723D5EE302E348D7A5A7052A37FF09EFB33 (void);
// 0x0000044D System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::.ctor(System.Int32)
extern void U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1 (void);
// 0x0000044E System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::System.IDisposable.Dispose()
extern void U3CRespawnU3Ed__7_System_IDisposable_Dispose_m2A539129FAD324FCCFE7570356787FA4CE45616B (void);
// 0x0000044F System.Boolean EpicToonFX.ETFXTarget/<Respawn>d__7::MoveNext()
extern void U3CRespawnU3Ed__7_MoveNext_m98CEBFB0B767AF44163EF68F42B2F00DA7C99D1A (void);
// 0x00000450 System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRespawnU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E9C4DF0C87738322C436CFF672F3C0FDD320374 (void);
// 0x00000451 System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.IEnumerator.Reset()
extern void U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617 (void);
// 0x00000452 System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.IEnumerator.get_Current()
extern void U3CRespawnU3Ed__7_System_Collections_IEnumerator_get_Current_mFCD05AB83ED3E741E6D5D7F5F8B51CEA97F24FBF (void);
// 0x00000453 System.Void EpicToonFX.ETFXLightFade::Start()
extern void ETFXLightFade_Start_m0D678058F25EBDBD14494760618ED99E7EED9A60 (void);
// 0x00000454 System.Void EpicToonFX.ETFXLightFade::Update()
extern void ETFXLightFade_Update_mE8F13E85F7C1AD93E0B9D2CE9737638E9BD340AF (void);
// 0x00000455 System.Void EpicToonFX.ETFXLightFade::.ctor()
extern void ETFXLightFade__ctor_m1ED5D845611A6F5D0DEE7066BD50B26BCD197107 (void);
// 0x00000456 System.Void EpicToonFX.ETFXPitchRandomizer::Start()
extern void ETFXPitchRandomizer_Start_m59C6A78C8AEBFB7E0C1475BC3AC48D3EE0E96832 (void);
// 0x00000457 System.Void EpicToonFX.ETFXPitchRandomizer::.ctor()
extern void ETFXPitchRandomizer__ctor_m5A7D44A2501727B8D8CFA36DF1DAAD0652A78BD2 (void);
// 0x00000458 System.Void EpicToonFX.ETFXRotation::Start()
extern void ETFXRotation_Start_mE170B11ECA9897944DF1D88D87CE6C393707E7D5 (void);
// 0x00000459 System.Void EpicToonFX.ETFXRotation::Update()
extern void ETFXRotation_Update_mFEF375BFB4CEA01E6D71EF0CC11ADD6014784F6A (void);
// 0x0000045A System.Void EpicToonFX.ETFXRotation::.ctor()
extern void ETFXRotation__ctor_m819E8377B916CB68CEA35D318A4B1EFED3B1D007 (void);
// 0x0000045B System.Void ES3Types.ES3UserType_ItemRack::.ctor()
extern void ES3UserType_ItemRack__ctor_m2C865F575EF7F40467AE1FCFF613785211847040 (void);
// 0x0000045C System.Void ES3Types.ES3UserType_ItemRack::WriteComponent(System.Object,ES3Writer)
extern void ES3UserType_ItemRack_WriteComponent_mF598773809E4698BEF7C4CFCE60F52E491576037 (void);
// 0x0000045D System.Void ES3Types.ES3UserType_ItemRack::ReadComponent(ES3Reader,System.Object)
// 0x0000045E System.Void ES3Types.ES3UserType_ItemRackArray::.ctor()
extern void ES3UserType_ItemRackArray__ctor_m722B7C131F4C412915175F8A0B819C62E1ED462E (void);
// 0x0000045F System.Void ES3Types.ES3UserType_Table::.ctor()
extern void ES3UserType_Table__ctor_m6775A02AA90BB1955B8D3E66C4069A2527C2146D (void);
// 0x00000460 System.Void ES3Types.ES3UserType_Table::WriteComponent(System.Object,ES3Writer)
extern void ES3UserType_Table_WriteComponent_m3647D941F1D721B8A238523293C34E074F221C3F (void);
// 0x00000461 System.Void ES3Types.ES3UserType_Table::ReadComponent(ES3Reader,System.Object)
// 0x00000462 System.Void ES3Types.ES3UserType_TableArray::.ctor()
extern void ES3UserType_TableArray__ctor_m4F059DD24F084D5999568447031E7BB381B3D489 (void);
// 0x00000463 DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleAudio::DOFade(UnityEngine.AudioSource,System.Single,System.Single)
extern void DOTweenModuleAudio_DOFade_m33AC3DD19DD85217123B580C7A2BCF1D5A90E5D4 (void);
// 0x00000464 DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleAudio::DOPitch(UnityEngine.AudioSource,System.Single,System.Single)
extern void DOTweenModuleAudio_DOPitch_m9F61FEB8419EC9F62B1A60CC36914980430E1456 (void);
// 0x00000465 DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleAudio::DOSetFloat(UnityEngine.Audio.AudioMixer,System.String,System.Single,System.Single)
extern void DOTweenModuleAudio_DOSetFloat_mBA2509B5C802E771D824FBF098E131475FE27937 (void);
// 0x00000466 System.Int32 DG.Tweening.DOTweenModuleAudio::DOComplete(UnityEngine.Audio.AudioMixer,System.Boolean)
extern void DOTweenModuleAudio_DOComplete_mDFE49D8B71D95F8C3EE7568ADE0F0051DBA56323 (void);
// 0x00000467 System.Int32 DG.Tweening.DOTweenModuleAudio::DOKill(UnityEngine.Audio.AudioMixer,System.Boolean)
extern void DOTweenModuleAudio_DOKill_mF453317F96B7CA4F9C5344E4DF6CF2FFBCFBE538 (void);
// 0x00000468 System.Int32 DG.Tweening.DOTweenModuleAudio::DOFlip(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DOFlip_m7F1F6E6AEA8CFFBE6FABCCAAB2025B2887E17539 (void);
// 0x00000469 System.Int32 DG.Tweening.DOTweenModuleAudio::DOGoto(UnityEngine.Audio.AudioMixer,System.Single,System.Boolean)
extern void DOTweenModuleAudio_DOGoto_m24D7C34EFC1DFA1CE96792B8584CF060830CF066 (void);
// 0x0000046A System.Int32 DG.Tweening.DOTweenModuleAudio::DOPause(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DOPause_m125649DA4069CA21A7D0219FC33B35B9A6B0A367 (void);
// 0x0000046B System.Int32 DG.Tweening.DOTweenModuleAudio::DOPlay(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DOPlay_mEBD2ADDF0E4DBC462F53F1CA6F0DE8E928F3C94B (void);
// 0x0000046C System.Int32 DG.Tweening.DOTweenModuleAudio::DOPlayBackwards(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DOPlayBackwards_m6EBE459898E93DFB0E7FA7E959E88B3016E92080 (void);
// 0x0000046D System.Int32 DG.Tweening.DOTweenModuleAudio::DOPlayForward(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DOPlayForward_mAC90AEF47DBC4B1FC509BE40FEEB9CCC92BDB816 (void);
// 0x0000046E System.Int32 DG.Tweening.DOTweenModuleAudio::DORestart(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DORestart_m044617D37A19DED114558F22E1AB8784194BE514 (void);
// 0x0000046F System.Int32 DG.Tweening.DOTweenModuleAudio::DORewind(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DORewind_mA04F3C6E68A4E888BFFB6F7B27ABAFA201266D0B (void);
// 0x00000470 System.Int32 DG.Tweening.DOTweenModuleAudio::DOSmoothRewind(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DOSmoothRewind_m9311EB1FF7A31892537EFC587430EE03566C0810 (void);
// 0x00000471 System.Int32 DG.Tweening.DOTweenModuleAudio::DOTogglePause(UnityEngine.Audio.AudioMixer)
extern void DOTweenModuleAudio_DOTogglePause_m437CA4E9EB383779006AC19D86EBE51D58D67F2D (void);
// 0x00000472 System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m160A4BE74C4A0D2D75CE2C15B1F7E5E69163C973 (void);
// 0x00000473 System.Single DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__0_m8C4722C8715E07655B52CF10C76179595C3DAF28 (void);
// 0x00000474 System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0::<DOFade>b__1(System.Single)
extern void U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__1_m79B9F6415F81447E5D2F5BE5C0F47E39A8C66038 (void);
// 0x00000475 System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m709A9EE2A6B97DD5552A583951859A1C83FA2278 (void);
// 0x00000476 System.Single DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0::<DOPitch>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOPitchU3Eb__0_m137E279AEB9AE936DFD3C4158CED13A0C6079A37 (void);
// 0x00000477 System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0::<DOPitch>b__1(System.Single)
extern void U3CU3Ec__DisplayClass1_0_U3CDOPitchU3Eb__1_mF3FE1A2CC1F0A9CFD31297F1BE45C12E810DD00D (void);
// 0x00000478 System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mDBF428719391180E42C26EE06A2AC47547F13E99 (void);
// 0x00000479 System.Single DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0::<DOSetFloat>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CDOSetFloatU3Eb__0_m367153ADF53E32C8FC51F280B628B2A2190E64E4 (void);
// 0x0000047A System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0::<DOSetFloat>b__1(System.Single)
extern void U3CU3Ec__DisplayClass2_0_U3CDOSetFloatU3Eb__1_mBCC8DF43E3C17A45DC0CDD8FBB051F9F938F49A5 (void);
// 0x0000047B DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics::DOMove(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,System.Boolean)
extern void DOTweenModulePhysics_DOMove_m9218B91AF3CA4CB76EC980F3C19DC290C22DD0D3 (void);
// 0x0000047C DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics::DOMoveX(UnityEngine.Rigidbody,System.Single,System.Single,System.Boolean)
extern void DOTweenModulePhysics_DOMoveX_mDA0E3727E8E0A9CC8CA18919C55DBB67CC7E7618 (void);
// 0x0000047D DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics::DOMoveY(UnityEngine.Rigidbody,System.Single,System.Single,System.Boolean)
extern void DOTweenModulePhysics_DOMoveY_m4FA2CA0C0DE64203A16C528F12B7FA9EED027F87 (void);
// 0x0000047E DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics::DOMoveZ(UnityEngine.Rigidbody,System.Single,System.Single,System.Boolean)
extern void DOTweenModulePhysics_DOMoveZ_m4A8887E9003AD195C398DB344BD2400AF5527873 (void);
// 0x0000047F DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.DOTweenModulePhysics::DORotate(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
extern void DOTweenModulePhysics_DORotate_m34B2316F2E1B4FABB69B2F982D8D9DA5AC074DC6 (void);
// 0x00000480 DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.DOTweenModulePhysics::DOLookAt(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,DG.Tweening.AxisConstraint,System.Nullable`1<UnityEngine.Vector3>)
extern void DOTweenModulePhysics_DOLookAt_m35971281812CD6A5EA5B28427A009F2C2E4FE533 (void);
// 0x00000481 DG.Tweening.Sequence DG.Tweening.DOTweenModulePhysics::DOJump(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,System.Int32,System.Single,System.Boolean)
extern void DOTweenModulePhysics_DOJump_mD421D5659C38733B5E5B6891253257E5C425F47B (void);
// 0x00000482 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOPath(UnityEngine.Rigidbody,UnityEngine.Vector3[],System.Single,DG.Tweening.PathType,DG.Tweening.PathMode,System.Int32,System.Nullable`1<UnityEngine.Color>)
extern void DOTweenModulePhysics_DOPath_m8DA02562B715A7AA662FF9FE0960A11A61B15CD2 (void);
// 0x00000483 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOLocalPath(UnityEngine.Rigidbody,UnityEngine.Vector3[],System.Single,DG.Tweening.PathType,DG.Tweening.PathMode,System.Int32,System.Nullable`1<UnityEngine.Color>)
extern void DOTweenModulePhysics_DOLocalPath_mA9EFBF2E389456FB671468302622565E9F66F5EE (void);
// 0x00000484 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOPath(UnityEngine.Rigidbody,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
extern void DOTweenModulePhysics_DOPath_m420764C2597301E7048F11600713705AD0DADC1A (void);
// 0x00000485 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOLocalPath(UnityEngine.Rigidbody,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
extern void DOTweenModulePhysics_DOLocalPath_m720A2CA6D647E4D8AAA386F83F4FE96E08C73082 (void);
// 0x00000486 System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m6C8A8063B7CCC58E82305177538D7FBF1CE44935 (void);
// 0x00000487 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass0_0::<DOMove>b__0()
extern void U3CU3Ec__DisplayClass0_0_U3CDOMoveU3Eb__0_mB768E968FA1FD2B9AE13877E2692D758B495D013 (void);
// 0x00000488 System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m479175628F7D1842EE3DCF05C86FAD7B511ABBCB (void);
// 0x00000489 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass1_0::<DOMoveX>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOMoveXU3Eb__0_mE0FB6A6EF157A4BC22104D4F91C164AA574DB227 (void);
// 0x0000048A System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mB0ADB1BBDA7BF0DD9C2414079D2012E8D61404BE (void);
// 0x0000048B UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass2_0::<DOMoveY>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CDOMoveYU3Eb__0_m79746B44C774CACFDAFA83EFCC9E6D6D03AD82D6 (void);
// 0x0000048C System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_mBAA31984E2A716B3498B2B0D79CA25A892D748D0 (void);
// 0x0000048D UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass3_0::<DOMoveZ>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3CDOMoveZU3Eb__0_m11FF22865EE53FAB3B972AC3B34D3BB01526DF77 (void);
// 0x0000048E System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m71B8B5E5A7CFD905A28CFCEF9005FDBE70096CBF (void);
// 0x0000048F UnityEngine.Quaternion DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass4_0::<DORotate>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3CDORotateU3Eb__0_m253899ED69AC81AED8238765AD9C3F808B81F9B8 (void);
// 0x00000490 System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_mE16BED5275B5EEEF36A20B3C783CC4E7B0D580EE (void);
// 0x00000491 UnityEngine.Quaternion DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass5_0::<DOLookAt>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CDOLookAtU3Eb__0_m1C50D196B81BA62AC84D966F2515E56293697921 (void);
// 0x00000492 System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m6F040CE636E4D727C99FC1DF62BB42721707EC92 (void);
// 0x00000493 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__0_m777E7729EA52B752D4212827ED4DB839B6A1F93D (void);
// 0x00000494 System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__1()
extern void U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__1_mB7EEF6913E4971D9438101C2DBB950BB0877E640 (void);
// 0x00000495 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__2()
extern void U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__2_mC008279D66615921E8D8F95A88349CAAA4F3ACF3 (void);
// 0x00000496 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__3()
extern void U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__3_mA4E1F014B086C15F0D7F66564619553D524535D2 (void);
// 0x00000497 System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__4()
extern void U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__4_m7190E82AA00FCA218DE01487303AC2AAB966BA14 (void);
// 0x00000498 System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m36AD8AF752829C4A0601828F600EC8D181BB7F9E (void);
// 0x00000499 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass7_0::<DOPath>b__0()
extern void U3CU3Ec__DisplayClass7_0_U3CDOPathU3Eb__0_m424F1A2360CF360DEAEB2AE4B03929D8415D9D85 (void);
// 0x0000049A System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m75DF5195919998D6D0FA3C9F4EE2052A1856612B (void);
// 0x0000049B UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0::<DOLocalPath>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__0_mCAB97E4D7EB96AF59820216D2F20F3B32E9CE914 (void);
// 0x0000049C System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0::<DOLocalPath>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__1_m409709C8E90B9323B6467D70BF2E623079B9C8F8 (void);
// 0x0000049D System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m8B38DEC85AB1D858ED6289CA714E5A7DC6384424 (void);
// 0x0000049E UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass9_0::<DOPath>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3CDOPathU3Eb__0_m57E3DDA730AB3A0A591C16CA8F9FEFD864FBD23B (void);
// 0x0000049F System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_mEF982F61A1DB0156415F649C9BEA4F7D6BBB08AD (void);
// 0x000004A0 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0::<DOLocalPath>b__0()
extern void U3CU3Ec__DisplayClass10_0_U3CDOLocalPathU3Eb__0_m330A66B432859CDB4EFBABCA77577716AD33B665 (void);
// 0x000004A1 System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0::<DOLocalPath>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass10_0_U3CDOLocalPathU3Eb__1_mF002FDBED4B8F0AD918205030DF8CB3791415483 (void);
// 0x000004A2 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMove(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModulePhysics2D_DOMove_m129881ECAC47858FD6BDF4872DFC10009AA91774 (void);
// 0x000004A3 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMoveX(UnityEngine.Rigidbody2D,System.Single,System.Single,System.Boolean)
extern void DOTweenModulePhysics2D_DOMoveX_m58FD03E827955317D3A61BDE358C692C085BDC67 (void);
// 0x000004A4 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMoveY(UnityEngine.Rigidbody2D,System.Single,System.Single,System.Boolean)
extern void DOTweenModulePhysics2D_DOMoveY_m6CA0A894F764679E356EEAC3047063E66AE8507D (void);
// 0x000004A5 DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModulePhysics2D::DORotate(UnityEngine.Rigidbody2D,System.Single,System.Single)
extern void DOTweenModulePhysics2D_DORotate_m8FF3AA95400BD0ED1E539A13B9B33D8DCBE72CAE (void);
// 0x000004A6 DG.Tweening.Sequence DG.Tweening.DOTweenModulePhysics2D::DOJump(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
extern void DOTweenModulePhysics2D_DOJump_m2F08ADE05D23A793E24F4C9540D2159DADF8E655 (void);
// 0x000004A7 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m4CB0F23C2FD78ED18921BA431C11EC8841878845 (void);
// 0x000004A8 UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0::<DOMove>b__0()
extern void U3CU3Ec__DisplayClass0_0_U3CDOMoveU3Eb__0_mACB8350BB439EC9BDAE8AAA9042BA1D2C2260840 (void);
// 0x000004A9 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m51B26BC729B71979744C78CCF6EED60B2D14109B (void);
// 0x000004AA UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0::<DOMoveX>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOMoveXU3Eb__0_m57744501683F232996387D707B7BD355F4F01547 (void);
// 0x000004AB System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m657C45B791F1EA7BE1759E94B7B75A23390BA39A (void);
// 0x000004AC UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0::<DOMoveY>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CDOMoveYU3Eb__0_mB38D7BA656E8BFBDA07E30ADB33ED05B7EA2AAE5 (void);
// 0x000004AD System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m478EC1218BEF6E85E06C40AB67A0D7463E600D49 (void);
// 0x000004AE System.Single DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0::<DORotate>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3CDORotateU3Eb__0_m8C384490EBDB1B769B4D88A4182E40E46A2A380B (void);
// 0x000004AF System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mFF8025919ABCD075B0E67C3F07356DD3CFC60605 (void);
// 0x000004B0 UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__0_mE1774E966F8B4E8EC7EF821C59D3C5E8BF8FB071 (void);
// 0x000004B1 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__1_m72CB74348BBB9FF7126C8670CA7A9E858279DB46 (void);
// 0x000004B2 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__2()
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__2_mB82162455CF0857F8934DC23F558BC2C6B2A51B1 (void);
// 0x000004B3 UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__3()
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__3_m9EB716BAFAB813B716B78872E6249CE4405E4CEA (void);
// 0x000004B4 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__4(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__4_m6CF2D0D226343F9C2144DC7C2F468397EE74B74F (void);
// 0x000004B5 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__5()
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__5_m8A4065ED3871AB729FEC6C9B32F403681C9ED206 (void);
// 0x000004B6 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
extern void DOTweenModuleSprite_DOColor_m1D8613D58BC87177BBFB8F8C48803084362CC46F (void);
// 0x000004B7 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
extern void DOTweenModuleSprite_DOFade_mD42EB7C410F2D7E86EF154211E97C3D72FAB6D99 (void);
// 0x000004B8 DG.Tweening.Sequence DG.Tweening.DOTweenModuleSprite::DOGradientColor(UnityEngine.SpriteRenderer,UnityEngine.Gradient,System.Single)
extern void DOTweenModuleSprite_DOGradientColor_m1D99BA2B2479484B3104790FA7CF734042B56275 (void);
// 0x000004B9 DG.Tweening.Tweener DG.Tweening.DOTweenModuleSprite::DOBlendableColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
extern void DOTweenModuleSprite_DOBlendableColor_m1CD3ADB6D2A6C868FA9A25527B33D1D36D3918D7 (void);
// 0x000004BA System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mB3A38B7C4B2EBEC0CA4CB4BCD0996F70D0D38573 (void);
// 0x000004BB UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__0_m34BED3EF004629B2391C43F22D2ECC75EE20C056 (void);
// 0x000004BC System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__1_m8236490A867654780100440C6D27299ED4F26767 (void);
// 0x000004BD System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m9A4008AB7FCC8A503A7CAED6CBBACDADF8E0A2F0 (void);
// 0x000004BE UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__0_m5F0C4CC4570355DFDF8A0AC86BB45FA7127558B2 (void);
// 0x000004BF System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__1_m353548C0500E2640824FDC1FE767DF2645A3FFE4 (void);
// 0x000004C0 System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m3C72E35866D164666CDD16DA3FD45D2AE46D9E24 (void);
// 0x000004C1 UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::<DOBlendableColor>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__0_m424C5E007014DBEFF422D4E1C016F8D14B192DE8 (void);
// 0x000004C2 System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::<DOBlendableColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__1_mE1792C420EAF86DF15D7258F252C269F8931578E (void);
// 0x000004C3 DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_m70733D91ED98AB827DD5162868199BCA07B3C65F (void);
// 0x000004C4 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Graphic,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOColor_m9CCD69C96E0EC2AF9796758A83BCAE38E8A99257 (void);
// 0x000004C5 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Graphic,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_mCF2D26E252987610391CA58F42EBF89D497AB42C (void);
// 0x000004C6 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOColor_mAB44E96C3BE821A668FD934C349F33DB052BD34B (void);
// 0x000004C7 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Image,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_m6E4705A5E978F074AC027B2622447F16464797C8 (void);
// 0x000004C8 DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFillAmount(UnityEngine.UI.Image,System.Single,System.Single)
extern void DOTweenModuleUI_DOFillAmount_m1701806AB0CE37D1A7BA5E97AC2A1CF2FE381A64 (void);
// 0x000004C9 DG.Tweening.Sequence DG.Tweening.DOTweenModuleUI::DOGradientColor(UnityEngine.UI.Image,UnityEngine.Gradient,System.Single)
extern void DOTweenModuleUI_DOGradientColor_mD41A204AAA1149EFD8F63003EFB3B5B86851393F (void);
// 0x000004CA DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOFlexibleSize(UnityEngine.UI.LayoutElement,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOFlexibleSize_mC1B116AD5E04DEE061C879DB93173AF3BF7BAFA2 (void);
// 0x000004CB DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOMinSize(UnityEngine.UI.LayoutElement,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOMinSize_m43AE2B4C0C85152C1F0C1A1A07C7C6647BCA50FB (void);
// 0x000004CC DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOPreferredSize(UnityEngine.UI.LayoutElement,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOPreferredSize_m637389A7A4F0CAA593C1327F420E3F0CD7F4FBAC (void);
// 0x000004CD DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Outline,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOColor_mE71263080B1924D0D208D8D8B6E134726CF1C502 (void);
// 0x000004CE DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Outline,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_m9870943D62346E19D61067631D8E034995D0F093 (void);
// 0x000004CF DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOScale(UnityEngine.UI.Outline,UnityEngine.Vector2,System.Single)
extern void DOTweenModuleUI_DOScale_mC78CB7454A8AA9419E06B38472C5751284669753 (void);
// 0x000004D0 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos_m5771DC15ABB88CC37D1A22B035E4D2FB638356B7 (void);
// 0x000004D1 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPosX(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPosX_mFC8A1A246CDB7E120FAC42CA43A7356F1F1A26B3 (void);
// 0x000004D2 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPosY(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPosY_m8371486009B6D9D9E5496D940591EBBBDE78AB51 (void);
// 0x000004D3 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos3D_m9152258BD8EF0A999624C76BC8149BD46607EF33 (void);
// 0x000004D4 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3DX(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos3DX_mBC59977D6899FEAB2C3B45554EB28E27665577A3 (void);
// 0x000004D5 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3DY(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos3DY_mD242D5809B7F59D96655054309976DD8C8A45B2A (void);
// 0x000004D6 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3DZ(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos3DZ_m5CA72828C6290C08B5AE19AEEA4BACE05315583F (void);
// 0x000004D7 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorMax(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorMax_mF557034D626FD7CD2809F16F57071E5234A0A01D (void);
// 0x000004D8 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorMin(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorMin_m13FBF4F90CF58B50BDC27BAF0CBC7C4376DF4016 (void);
// 0x000004D9 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOPivot(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single)
extern void DOTweenModuleUI_DOPivot_m4294354A52355B2955965B3726DA2CC0A049F7A5 (void);
// 0x000004DA DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOPivotX(UnityEngine.RectTransform,System.Single,System.Single)
extern void DOTweenModuleUI_DOPivotX_mAF48236E3A05FA8787920BE4F939A4E652D6EA1D (void);
// 0x000004DB DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOPivotY(UnityEngine.RectTransform,System.Single,System.Single)
extern void DOTweenModuleUI_DOPivotY_m478C274ACECBE8C0C0D9D43FF49DFF41DD28595F (void);
// 0x000004DC DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOSizeDelta(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOSizeDelta_mC80355FB2E78330D2EC907DC14F8B6A8179CB09A (void);
// 0x000004DD DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOPunchAnchorPos_mA9B79DE480E85187CD9967AEAC55F29FB4C7B587 (void);
// 0x000004DE DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,System.Single,System.Int32,System.Single,System.Boolean,System.Boolean)
extern void DOTweenModuleUI_DOShakeAnchorPos_m44811D5F919207AB4ACA282656C76F690E41A2C4 (void);
// 0x000004DF DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean,System.Boolean)
extern void DOTweenModuleUI_DOShakeAnchorPos_mA36B5E94FEC480304F89946C695F8DCBF637DC72 (void);
// 0x000004E0 DG.Tweening.Sequence DG.Tweening.DOTweenModuleUI::DOJumpAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOJumpAnchorPos_m0D6AE7D1C70F77C307C2F74A7DE5575B38310323 (void);
// 0x000004E1 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DONormalizedPos(UnityEngine.UI.ScrollRect,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DONormalizedPos_mA0AAE9E65E8F1808464E0EFE63F26A76D4C4D86B (void);
// 0x000004E2 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOHorizontalNormalizedPos(UnityEngine.UI.ScrollRect,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOHorizontalNormalizedPos_mA1C4D197CF803EA1826D3D23A3A0DD665EDA535B (void);
// 0x000004E3 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOVerticalNormalizedPos(UnityEngine.UI.ScrollRect,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOVerticalNormalizedPos_m0CF6EC00B4AC886CEA5E8D99F9F5E26F254D52E0 (void);
// 0x000004E4 DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOValue(UnityEngine.UI.Slider,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOValue_mBD157558885F4CC9BB52696CA6E7FCFBBE289D31 (void);
// 0x000004E5 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOColor_mF7C94BF952B9549609B1F7A3892A6F02CEB56F04 (void);
// 0x000004E6 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_m86A4E7965D2563BB1530EB2343AB8DA2EF7FDF01 (void);
// 0x000004E7 DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions> DG.Tweening.DOTweenModuleUI::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
extern void DOTweenModuleUI_DOText_mB47F3908BD77013A7C5DF5CCFC2E3F4BB60E00F5 (void);
// 0x000004E8 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOBlendableColor(UnityEngine.UI.Graphic,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOBlendableColor_mF0936D1AF990F743A105B24F1D6988610F2496A9 (void);
// 0x000004E9 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOBlendableColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOBlendableColor_m0E5CC97374C3B817CB3A04FFA87DCBBA545DB147 (void);
// 0x000004EA DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOBlendableColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOBlendableColor_mAA670DFB22BE7C9256667D65F40FF487C2AECF14 (void);
// 0x000004EB UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/Utils::SwitchToRectTransform(UnityEngine.RectTransform,UnityEngine.RectTransform)
extern void Utils_SwitchToRectTransform_m927E0306521B99C5AF717563A4AB216A3846ACFC (void);
// 0x000004EC System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m02AC5FF72AD9F7271BAE9AB34F80D42AA9A9C484 (void);
// 0x000004ED System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__0_m160924332BA5EF66E12B6FE8BDA1DBC69059EAAD (void);
// 0x000004EE System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::<DOFade>b__1(System.Single)
extern void U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__1_mCF3914E7F3A8F729B174AA946341922991E381CC (void);
// 0x000004EF System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m1C5DB32757E72E49AF272F1384712046C6A00253 (void);
// 0x000004F0 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__0_m9467C7755B2D29380CDBCB4190BFC6A077E64C39 (void);
// 0x000004F1 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__1_m44B0F01B58106E8E85D97C2FBB8A460A0571FE77 (void);
// 0x000004F2 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m4D9DFB7EE2AAC12968C4DF238BD125C654548FF1 (void);
// 0x000004F3 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__0_mCAA3704209EDD53B81A477BF1AB73EA69F26F845 (void);
// 0x000004F4 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__1_m7B6FA582025F7A33540FA056A8EA424D3BD33BE7 (void);
// 0x000004F5 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_mC5C767AD26CB3FE0A493044C71B6CCEC8346C296 (void);
// 0x000004F6 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__0_m312CB07635E6BF7DDA4F7D69B3844ADDDF806465 (void);
// 0x000004F7 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__1_mC81F83EDCE139870DE9369D6478622169885365E (void);
// 0x000004F8 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m15E8C7F3799861E5CCA5AAD2CD1CD28224AA03E7 (void);
// 0x000004F9 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__0_m0B5F0F9301C56DDEB288ADD86745A1D635CE1416 (void);
// 0x000004FA System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__1_m18E36E9B1AFC305E378F79E25EE9A932B959588E (void);
// 0x000004FB System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m5DB0CA121DB5A86ADCD13BB04F71705F65B09E65 (void);
// 0x000004FC System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::<DOFillAmount>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__0_m424FEBA1D754E6D82F1013FC993B129F0175C745 (void);
// 0x000004FD System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::<DOFillAmount>b__1(System.Single)
extern void U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__1_m83B635790469064B562A721BEE7A6C83B43903C8 (void);
// 0x000004FE System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m3F4D7A459A8733E43E7A64A569F9EA52B535D2B6 (void);
// 0x000004FF UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::<DOFlexibleSize>b__0()
extern void U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__0_mF3831E19E398DAD98077121A417BFD6A74D3EBCB (void);
// 0x00000500 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::<DOFlexibleSize>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__1_m605F371D6A593F9F1A3A249368409471CEAEC646 (void);
// 0x00000501 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mA6BE9E902B051E8864004E9F53E0D01796C27BEC (void);
// 0x00000502 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::<DOMinSize>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__0_m24F632B6998489E51C1E60F23FE8A05B9F9BF80A (void);
// 0x00000503 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::<DOMinSize>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__1_m5E36BA70B14EBA24EE5150746690346E78F966B0 (void);
// 0x00000504 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m286D59D82E41B5281985D79E488198A7E3537ACC (void);
// 0x00000505 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::<DOPreferredSize>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__0_mF535C0871CF853AED0D5A8ACB39FC367D1CB0A64 (void);
// 0x00000506 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::<DOPreferredSize>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__1_m185139D594B32B631796CD61D79F0B48C5431765 (void);
// 0x00000507 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m11DD7C4B58AFC2CB99F683955907A640E74282C0 (void);
// 0x00000508 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__0_mAFCCC57700B3B00BDACF629FB898B3DEDF8C7668 (void);
// 0x00000509 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__1_m15F5B7ECAA029DC5E8A50857A16A48A8A6D6992B (void);
// 0x0000050A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m6D4ED0270AF0D5C0A75BF692250CB853EC2F6F79 (void);
// 0x0000050B UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__0_m2D6173B6882E022ADB4AC6CBA3173304B8E6164F (void);
// 0x0000050C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__1_mCE887CF626E5ACCB29B0E98C921AC7A3E9233A7E (void);
// 0x0000050D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_mD1F9075FEC29F490C6679A9D7598D759C0AB4DBE (void);
// 0x0000050E UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::<DOScale>b__0()
extern void U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__0_m2385A603E1E66F822FECD5CEACCE771B5758D7B7 (void);
// 0x0000050F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::<DOScale>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__1_m99EB252D563A798BEE0B5A31C659851CD0700BAE (void);
// 0x00000510 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m84FD04DEF9DEFE8BB6EE6B768471B2332B4E66EA (void);
// 0x00000511 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::<DOAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__0_mDEEE77743125A9F4AF071993A48C0883B8938147 (void);
// 0x00000512 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::<DOAnchorPos>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__1_mEB2040061609C631073D063D8BA71C5AE458CB63 (void);
// 0x00000513 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_m188221CF95D995E27ABFF9D447F3D54149D4B5F2 (void);
// 0x00000514 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::<DOAnchorPosX>b__0()
extern void U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__0_m18F22E4AA3CBA7FEFF94AA2AA7438EBC5C4DBF3D (void);
// 0x00000515 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::<DOAnchorPosX>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__1_m76DB47AD4C1DD0E522CD7E49E4C0BF890512FCC7 (void);
// 0x00000516 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m1D4F00D13860F242587ACB9888B000C3A767492B (void);
// 0x00000517 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::<DOAnchorPosY>b__0()
extern void U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__0_m61698EC758F0F82BBA818949C0BD2F3CFADFAA57 (void);
// 0x00000518 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::<DOAnchorPosY>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__1_mD35972634DF21705BA6A9B3DB5CF0D81CECC219B (void);
// 0x00000519 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_mC9174DECC9AB0C0FCA7E0BB5626F00A397552285 (void);
// 0x0000051A UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::<DOAnchorPos3D>b__0()
extern void U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__0_m04D393C6058D10956299620A3367587B40EADADF (void);
// 0x0000051B System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::<DOAnchorPos3D>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__1_m29D334493F9D5F6BCADC9E5725DF0A510EA47208 (void);
// 0x0000051C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_mDCEE61F98BC23EF18977566788E29085B0DC4B49 (void);
// 0x0000051D UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::<DOAnchorPos3DX>b__0()
extern void U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__0_m3F4080C62B849D50FF7C58A8257FFEE91BBAB680 (void);
// 0x0000051E System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::<DOAnchorPos3DX>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__1_m4263B6642D9E77CB38E01A24F3C737199ACC9F93 (void);
// 0x0000051F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::.ctor()
extern void U3CU3Ec__DisplayClass18_0__ctor_m8463A61BCCD89F89CBF0F79CF66FA4EBE2FD1E4F (void);
// 0x00000520 UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::<DOAnchorPos3DY>b__0()
extern void U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__0_m256585104D3EF107F980E00EBCA0AFE9AD81F6CF (void);
// 0x00000521 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::<DOAnchorPos3DY>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__1_m9A7522C9582F9572AF53FFCE8D3D745BE00DB9C0 (void);
// 0x00000522 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::.ctor()
extern void U3CU3Ec__DisplayClass19_0__ctor_m15B509E8ABCF2C177192FF9870B15FEE66F4D038 (void);
// 0x00000523 UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::<DOAnchorPos3DZ>b__0()
extern void U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__0_m7C246FCA6BAD4A13638C1361F6680CF5211DFD15 (void);
// 0x00000524 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::<DOAnchorPos3DZ>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__1_m49E6856829E99FE417EC50159BC5FB0D1A77CBD7 (void);
// 0x00000525 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_mDD65EA9F35AA085EDC5AB6EA7BCB430AB53E7C4C (void);
// 0x00000526 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::<DOAnchorMax>b__0()
extern void U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__0_mD207906E09F8A121195553ACBF187B8D0A3A6006 (void);
// 0x00000527 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::<DOAnchorMax>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__1_m25FD7BC6C81DCBCB7936948A09EA50E27D3DF5E1 (void);
// 0x00000528 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::.ctor()
extern void U3CU3Ec__DisplayClass21_0__ctor_m7CA9A2889EDB39EBF81C4320023731198C2E28F6 (void);
// 0x00000529 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::<DOAnchorMin>b__0()
extern void U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__0_mB7F92CB811EC69B78D4DB72A07EBFE0065B81A96 (void);
// 0x0000052A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::<DOAnchorMin>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__1_mE3580800BF86444C99AFAD3651A10A8BA87ACA3D (void);
// 0x0000052B System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_mE2C45E43AE15B030C3E9EA28C6FB89B27993353C (void);
// 0x0000052C UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::<DOPivot>b__0()
extern void U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__0_m965979FB6B275C69A73170025341021C75A3BD73 (void);
// 0x0000052D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::<DOPivot>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__1_m4A27FCA6236E27F8F1156DF1A947D5E14C97900E (void);
// 0x0000052E System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_mAFBDA472706665D20FBB1B5C8CE8C560842578A1 (void);
// 0x0000052F UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::<DOPivotX>b__0()
extern void U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__0_mB04DAF8BA4880841E68A83B7182EB53669831FFD (void);
// 0x00000530 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::<DOPivotX>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__1_mEE841F6ADEDD8942A5BAB79D9F181646759EE2B0 (void);
// 0x00000531 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_mC59776621BA36942C91F3BFED7DE4391B0625F07 (void);
// 0x00000532 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::<DOPivotY>b__0()
extern void U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__0_m1DF542C0FC15A842BC687B1294E2DE72BFF44B86 (void);
// 0x00000533 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::<DOPivotY>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__1_mB43317F02A9C33D46CE93B16DD1104D28BFFE75E (void);
// 0x00000534 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::.ctor()
extern void U3CU3Ec__DisplayClass25_0__ctor_mCF92B4AFC980734E8F9FBD06D7709D5B610C2AD8 (void);
// 0x00000535 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::<DOSizeDelta>b__0()
extern void U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__0_m2D894FC2DD5FE9C3641758DA07FBB2415E191750 (void);
// 0x00000536 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::<DOSizeDelta>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__1_mAB31C40435305381E674D7BCDD36C1FA2D944535 (void);
// 0x00000537 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::.ctor()
extern void U3CU3Ec__DisplayClass26_0__ctor_mE11542986539E00ECC4ACB110B932CB659280B9E (void);
// 0x00000538 UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::<DOPunchAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__0_m8C345DF5B27AE5B17D74FCDB6CC68D367576F8F5 (void);
// 0x00000539 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::<DOPunchAnchorPos>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__1_mF593BD39BAA9EA695EA52E6B025249916A3ACB21 (void);
// 0x0000053A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::.ctor()
extern void U3CU3Ec__DisplayClass27_0__ctor_m3F5D43CB088C6A3C4D6CC51DD761FA23F832B806 (void);
// 0x0000053B UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::<DOShakeAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__0_m0958BB22CF771F2BE804E7BDD83C361073F3581E (void);
// 0x0000053C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::<DOShakeAnchorPos>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__1_mA6D65C9BAD704941C13ACD1DE3D3A6E8FA58A6B1 (void);
// 0x0000053D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::.ctor()
extern void U3CU3Ec__DisplayClass28_0__ctor_m671FD2A8D4DC6429FA93C8A41C7AFC6B0CB50CCF (void);
// 0x0000053E UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::<DOShakeAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__0_m71D55809BE5527F7FA76198ADEAE5E5917555699 (void);
// 0x0000053F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::<DOShakeAnchorPos>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__1_m7A7AAA1B4D13FE941B7051A2395795B2019BA497 (void);
// 0x00000540 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::.ctor()
extern void U3CU3Ec__DisplayClass29_0__ctor_m6841EBC72678519402C9678A4903856BA01D3E3C (void);
// 0x00000541 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__0_mDD03C988E48C946E2051BBCB400D11AA475172C5 (void);
// 0x00000542 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__1_m0A7D3990B8A6B423B590109635761C4D7845AB7F (void);
// 0x00000543 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__2()
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__2_mB2EB9443C133F983C1AA76FAB66C80F28853B8F4 (void);
// 0x00000544 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__3()
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__3_m7E2202F4B18C4169BD217DE526E9543C40EF29C0 (void);
// 0x00000545 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__4(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__4_mDA917A9381F14BC3DACB27C22CAF05FE45DBAC90 (void);
// 0x00000546 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__5()
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__5_m3CC81967E2004B932868626D598B72943C76C21F (void);
// 0x00000547 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::.ctor()
extern void U3CU3Ec__DisplayClass30_0__ctor_m475CA4BAAE3F4C95D59EC2A5210019E22FD7E72D (void);
// 0x00000548 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::<DONormalizedPos>b__0()
extern void U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__0_m1F0943C5D1EA2BAE72905488B7BB7FD05AD5414B (void);
// 0x00000549 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::<DONormalizedPos>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__1_m8CE913B6CB904A504400097D0AA6EDDBD7AE0B45 (void);
// 0x0000054A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::.ctor()
extern void U3CU3Ec__DisplayClass31_0__ctor_m8CB90BDE592351E68684EB4D199BB309EC06F466 (void);
// 0x0000054B System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::<DOHorizontalNormalizedPos>b__0()
extern void U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__0_mDF3CB62908D4575E14BF7E98CA262F8149BB0E48 (void);
// 0x0000054C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::<DOHorizontalNormalizedPos>b__1(System.Single)
extern void U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__1_mEB5E8758E0EF969FFADC04CA3147F5A888B40064 (void);
// 0x0000054D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::.ctor()
extern void U3CU3Ec__DisplayClass32_0__ctor_m1A8D52B69FB8395ABBC9A4F7DF8E36466DB3BC95 (void);
// 0x0000054E System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::<DOVerticalNormalizedPos>b__0()
extern void U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__0_m71DE61BFA6209DB829836838A7F1EB7F5C1C951C (void);
// 0x0000054F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::<DOVerticalNormalizedPos>b__1(System.Single)
extern void U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__1_mCB1CE1E45A17FD19D929A7C3EA95C7B492AFCCA2 (void);
// 0x00000550 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_m0DF68C5C8156D45B1870272C41290E5B12FF8602 (void);
// 0x00000551 System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::<DOValue>b__0()
extern void U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__0_m145C72DAB8DD1E5AD043A2B5900812E0F0E58E83 (void);
// 0x00000552 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::<DOValue>b__1(System.Single)
extern void U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__1_mF3EAA5B02B860189FE7841E1642095AF9488F134 (void);
// 0x00000553 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::.ctor()
extern void U3CU3Ec__DisplayClass34_0__ctor_m4E36DF0E111FF20A584BABCB272C7514CBAF59A2 (void);
// 0x00000554 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__0_m47F62A48B92963FB32511F3875D566F8FC71480B (void);
// 0x00000555 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__1_m9541F5AD304519AFA79192889487ABC2E621EE3F (void);
// 0x00000556 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::.ctor()
extern void U3CU3Ec__DisplayClass35_0__ctor_mEB07972AA46E127DB75E68DDA3FB5A54DFE1A07C (void);
// 0x00000557 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass35_0_U3CDOFadeU3Eb__0_m8FFA77E8FB4FCE8F0125962D1192E052256AA512 (void);
// 0x00000558 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass35_0_U3CDOFadeU3Eb__1_m857FA607EA2B021E9A5DF0AFA774242459924E3E (void);
// 0x00000559 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::.ctor()
extern void U3CU3Ec__DisplayClass36_0__ctor_mD71C2FD9E280F3A4DC631CA425A24E1AE0265CC8 (void);
// 0x0000055A System.String DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::<DOText>b__0()
extern void U3CU3Ec__DisplayClass36_0_U3CDOTextU3Eb__0_mE1A296C1F72132B2BF559B54C734121CF98679DC (void);
// 0x0000055B System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::<DOText>b__1(System.String)
extern void U3CU3Ec__DisplayClass36_0_U3CDOTextU3Eb__1_mDB35377C8C2F3FCAA36BDC6104B6123A01C159E7 (void);
// 0x0000055C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_mDA142B56ABBC2597FCB543F5EA51FDE52DDA91E5 (void);
// 0x0000055D UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::<DOBlendableColor>b__0()
extern void U3CU3Ec__DisplayClass37_0_U3CDOBlendableColorU3Eb__0_mA59968C9C7B4E749CB08FBD0B6EEF08A1B66B362 (void);
// 0x0000055E System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::<DOBlendableColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass37_0_U3CDOBlendableColorU3Eb__1_m6FD982BE0D5D355F1C0CF61FEB38A244956BE6E8 (void);
// 0x0000055F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::.ctor()
extern void U3CU3Ec__DisplayClass38_0__ctor_mF5E51CB763FACE84BD5CD7EBDA60614BF88959E9 (void);
// 0x00000560 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::<DOBlendableColor>b__0()
extern void U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__0_m5CA9724149FCD3E48658442157DA3249D8966F6C (void);
// 0x00000561 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::<DOBlendableColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__1_m800BBDFF60B762B724C762D9C29F15474FB8A698 (void);
// 0x00000562 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::.ctor()
extern void U3CU3Ec__DisplayClass39_0__ctor_m309F737816844D4A4CDC9518D1DE826E30C6D271 (void);
// 0x00000563 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::<DOBlendableColor>b__0()
extern void U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__0_mFFFA826A2C8066C0B5695C8153E6788167CCAD86 (void);
// 0x00000564 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::<DOBlendableColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__1_m7C0B3D7601C4F8711E55BDE39FF63F235CE9F904 (void);
// 0x00000565 DG.Tweening.Sequence DG.Tweening.DOTweenModuleUnityVersion::DOGradientColor(UnityEngine.Material,UnityEngine.Gradient,System.Single)
extern void DOTweenModuleUnityVersion_DOGradientColor_mC9C2768747A9B142795620CF5501BCCB0385A64A (void);
// 0x00000566 DG.Tweening.Sequence DG.Tweening.DOTweenModuleUnityVersion::DOGradientColor(UnityEngine.Material,UnityEngine.Gradient,System.String,System.Single)
extern void DOTweenModuleUnityVersion_DOGradientColor_m8B5EA2127C5D9206A1BC6BAC15BD89D5D9077DCC (void);
// 0x00000567 UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForCompletion(DG.Tweening.Tween,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForCompletion_mCD910620513CFC66E6360BDF100567E534DA8C47 (void);
// 0x00000568 UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForRewind(DG.Tweening.Tween,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForRewind_m80AF71AC60E938C7E0D4FD01CCBF98667DEDB8A1 (void);
// 0x00000569 UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForKill(DG.Tweening.Tween,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForKill_m5D2A034D4E6912EE8FF0AE063329807F3399FF95 (void);
// 0x0000056A UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForElapsedLoops(DG.Tweening.Tween,System.Int32,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForElapsedLoops_m347E45F2B3E7F133E50D93DE5712D9FB0E828A79 (void);
// 0x0000056B UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForPosition(DG.Tweening.Tween,System.Single,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForPosition_m39F8AC8FBB5962A4CC8CEFB055C85B13284CC39F (void);
// 0x0000056C UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForStart(DG.Tweening.Tween,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForStart_mE7E9F02D5CAF079B0F1C2002B633EA88C18AF3D1 (void);
// 0x0000056D DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUnityVersion::DOOffset(UnityEngine.Material,UnityEngine.Vector2,System.Int32,System.Single)
extern void DOTweenModuleUnityVersion_DOOffset_m5FE227A1D7FE40DEBFD0D15E9E2E140611E49BD4 (void);
// 0x0000056E DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUnityVersion::DOTiling(UnityEngine.Material,UnityEngine.Vector2,System.Int32,System.Single)
extern void DOTweenModuleUnityVersion_DOTiling_m46B35DDADB688BEB85EB21A5593E240C5FD990A6 (void);
// 0x0000056F System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m4E9AD608BFA5058EA275819037B5EE4E384311AA (void);
// 0x00000570 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m313F8C26E8A72E7404065072AA78E9C737E35620 (void);
// 0x00000571 System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m4E8A169B481398D90A901BAD32A1CC0BDD77BAE8 (void);
// 0x00000572 System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m34A953C85477B2BD1B635BDAF8885267ACDAFEEA (void);
// 0x00000573 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m32DCD53537E5D9250D043396A6636431DA4AC5DE (void);
// 0x00000574 System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m586EE9E78A2967588A473314F2E4DDF7852A89A7 (void);
// 0x00000575 System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForCompletion::get_keepWaiting()
extern void WaitForCompletion_get_keepWaiting_mC42F1D87B76571FEF5C96EB25CD2F233A7FBDDE2 (void);
// 0x00000576 System.Void DG.Tweening.DOTweenCYInstruction/WaitForCompletion::.ctor(DG.Tweening.Tween)
extern void WaitForCompletion__ctor_m194FFB6935EC44D8EBF9596755B410A7F3CAECDA (void);
// 0x00000577 System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForRewind::get_keepWaiting()
extern void WaitForRewind_get_keepWaiting_mDC4ACCB00D1A64C9D59ED14620D3472036D2755E (void);
// 0x00000578 System.Void DG.Tweening.DOTweenCYInstruction/WaitForRewind::.ctor(DG.Tweening.Tween)
extern void WaitForRewind__ctor_m8FA908A77DFFAACB814B717915EAFBDA10B2FB36 (void);
// 0x00000579 System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForKill::get_keepWaiting()
extern void WaitForKill_get_keepWaiting_mC3BC5155F3822FA2486800624680EA65464044D4 (void);
// 0x0000057A System.Void DG.Tweening.DOTweenCYInstruction/WaitForKill::.ctor(DG.Tweening.Tween)
extern void WaitForKill__ctor_m13C20AC2C9C2809AD51B8CEA30F11AACB4ECC64C (void);
// 0x0000057B System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::get_keepWaiting()
extern void WaitForElapsedLoops_get_keepWaiting_mD62F90B0E8F34349F6CBCAD1DEE8C69F6AC9A4A0 (void);
// 0x0000057C System.Void DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::.ctor(DG.Tweening.Tween,System.Int32)
extern void WaitForElapsedLoops__ctor_mA2399269DDE36055552944650E8862464AAFF448 (void);
// 0x0000057D System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForPosition::get_keepWaiting()
extern void WaitForPosition_get_keepWaiting_mCE1EBD6DFC3462C603585CE8DD978F582FC0ADA6 (void);
// 0x0000057E System.Void DG.Tweening.DOTweenCYInstruction/WaitForPosition::.ctor(DG.Tweening.Tween,System.Single)
extern void WaitForPosition__ctor_m218039DD8AEC82CDB8BF269764EC8566A4E01F6F (void);
// 0x0000057F System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForStart::get_keepWaiting()
extern void WaitForStart_get_keepWaiting_mF6E49FFC399C5642C630865FCCB38FA56DCA890D (void);
// 0x00000580 System.Void DG.Tweening.DOTweenCYInstruction/WaitForStart::.ctor(DG.Tweening.Tween)
extern void WaitForStart__ctor_m733FFDFE0C36F20AA645593347BDAA8D0610D508 (void);
// 0x00000581 System.Void DG.Tweening.DOTweenModuleUtils::Init()
extern void DOTweenModuleUtils_Init_m9F7938AFFD814978DEE9140ED34B6E6647711324 (void);
// 0x00000582 System.Void DG.Tweening.DOTweenModuleUtils::Preserver()
extern void DOTweenModuleUtils_Preserver_m5BBFCFD03A1E22FF9651F2407FB32FBDACFBEFDD (void);
// 0x00000583 System.Void DG.Tweening.DOTweenModuleUtils/Physics::SetOrientationOnPath(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform)
extern void Physics_SetOrientationOnPath_m7909652CCC78E77ADE33C5BEB4BFF42AA536A7D1 (void);
// 0x00000584 System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody2D(UnityEngine.Component)
extern void Physics_HasRigidbody2D_m7B055F7D6B725DCE1616DE1BCAC6AF1E402946E6 (void);
// 0x00000585 System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody(UnityEngine.Component)
extern void Physics_HasRigidbody_m49C216B000D976B6AD22EA36C29BB922F4B02A2B (void);
// 0x00000586 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModuleUtils/Physics::CreateDOTweenPathTween(UnityEngine.MonoBehaviour,System.Boolean,System.Boolean,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
extern void Physics_CreateDOTweenPathTween_mFA2C0271A146797AB71CD136F2A56ECA3A5AAB5C (void);
// 0x00000587 System.Void DG.Tweening.DOTweenAnimation::add_OnReset(System.Action`1<DG.Tweening.DOTweenAnimation>)
extern void DOTweenAnimation_add_OnReset_mD7AC9EFC9BD3AB33F0D99B4A81D93F9D154AED00 (void);
// 0x00000588 System.Void DG.Tweening.DOTweenAnimation::remove_OnReset(System.Action`1<DG.Tweening.DOTweenAnimation>)
extern void DOTweenAnimation_remove_OnReset_m1CF0F7FD188F09050137BC0A3E84197EE84EC010 (void);
// 0x00000589 System.Void DG.Tweening.DOTweenAnimation::Dispatch_OnReset(DG.Tweening.DOTweenAnimation)
extern void DOTweenAnimation_Dispatch_OnReset_m9EB81885C06EAC1DB8153F1E9BACFDC1A36CF0B1 (void);
// 0x0000058A System.Void DG.Tweening.DOTweenAnimation::Awake()
extern void DOTweenAnimation_Awake_m8531F674633C180916C447ACF6C986EC18AF7B3B (void);
// 0x0000058B System.Void DG.Tweening.DOTweenAnimation::Start()
extern void DOTweenAnimation_Start_m908C8FD2C7336E4F04E22B4C7A821F22F621C905 (void);
// 0x0000058C System.Void DG.Tweening.DOTweenAnimation::Reset()
extern void DOTweenAnimation_Reset_m1A971B53301876CD61305BECD912B64B3766F76E (void);
// 0x0000058D System.Void DG.Tweening.DOTweenAnimation::OnDestroy()
extern void DOTweenAnimation_OnDestroy_mCE1919BF0059EA93C96345E2D2F7C0BE0F61B9AC (void);
// 0x0000058E System.Void DG.Tweening.DOTweenAnimation::CreateTween()
extern void DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2 (void);
// 0x0000058F System.Void DG.Tweening.DOTweenAnimation::DOPlay()
extern void DOTweenAnimation_DOPlay_m13FCD1B90C270CC6A4CDC37D45B9C7906759EB65 (void);
// 0x00000590 System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwards()
extern void DOTweenAnimation_DOPlayBackwards_m7DAD71BF7390EE5BB26CEE5E002A9F61BBD790BB (void);
// 0x00000591 System.Void DG.Tweening.DOTweenAnimation::DOPlayForward()
extern void DOTweenAnimation_DOPlayForward_m1C460584821358C681FFB2A3824D8F532B94A3D6 (void);
// 0x00000592 System.Void DG.Tweening.DOTweenAnimation::DOPause()
extern void DOTweenAnimation_DOPause_m579FECCC254EDE65F38B0BB132FA796876409547 (void);
// 0x00000593 System.Void DG.Tweening.DOTweenAnimation::DOTogglePause()
extern void DOTweenAnimation_DOTogglePause_m3976C710434A81CEF46C8202D6D43A4F09FAE91E (void);
// 0x00000594 System.Void DG.Tweening.DOTweenAnimation::DORewind()
extern void DOTweenAnimation_DORewind_m0ACC3EE9A69E368F08360B45500AF6417853AACF (void);
// 0x00000595 System.Void DG.Tweening.DOTweenAnimation::DORestart()
extern void DOTweenAnimation_DORestart_mA90E5090E585085C421A2A8D6E271D4A8EFBFBC0 (void);
// 0x00000596 System.Void DG.Tweening.DOTweenAnimation::DORestart(System.Boolean)
extern void DOTweenAnimation_DORestart_m3991D3973BAB757263F5B7DF49236854F7CFFDD6 (void);
// 0x00000597 System.Void DG.Tweening.DOTweenAnimation::DOComplete()
extern void DOTweenAnimation_DOComplete_mA22769F47C0477E80CEFD1278B2400F6944B6111 (void);
// 0x00000598 System.Void DG.Tweening.DOTweenAnimation::DOKill()
extern void DOTweenAnimation_DOKill_m58766FE1B51A4ACB4AADF618088B24CA8BB558BE (void);
// 0x00000599 System.Void DG.Tweening.DOTweenAnimation::DOPlayById(System.String)
extern void DOTweenAnimation_DOPlayById_mB1AD544F5E83C3E5EE30EC09F55E3034625DD1FB (void);
// 0x0000059A System.Void DG.Tweening.DOTweenAnimation::DOPlayAllById(System.String)
extern void DOTweenAnimation_DOPlayAllById_m17BFE4D2AC992F441DA7DE57B06E1D8226F3422F (void);
// 0x0000059B System.Void DG.Tweening.DOTweenAnimation::DOPauseAllById(System.String)
extern void DOTweenAnimation_DOPauseAllById_m69B4156769396D15F7917D08584B27BB8DB33061 (void);
// 0x0000059C System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsById(System.String)
extern void DOTweenAnimation_DOPlayBackwardsById_mF9C09452E4B6A01789AECFE65FEDE8FBE0BC99AA (void);
// 0x0000059D System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsAllById(System.String)
extern void DOTweenAnimation_DOPlayBackwardsAllById_m699DBBE571B55E8D2F46EFE7795132AEBFBAABF3 (void);
// 0x0000059E System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardById(System.String)
extern void DOTweenAnimation_DOPlayForwardById_mDE37334AB66BCB98A6CEF089E126F03308F7A3AB (void);
// 0x0000059F System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardAllById(System.String)
extern void DOTweenAnimation_DOPlayForwardAllById_m52998F61B2172E61AA7834823E68C8F3436BD20D (void);
// 0x000005A0 System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
extern void DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA (void);
// 0x000005A1 System.Void DG.Tweening.DOTweenAnimation::DORewindAndPlayNext()
extern void DOTweenAnimation_DORewindAndPlayNext_m72276B3E5704C60C1F3662786656A0CAA4A63756 (void);
// 0x000005A2 System.Void DG.Tweening.DOTweenAnimation::DORewindAllById(System.String)
extern void DOTweenAnimation_DORewindAllById_mE62FEDBE903BA4F5BBD184AF26CE173949C10FBC (void);
// 0x000005A3 System.Void DG.Tweening.DOTweenAnimation::DORestartById(System.String)
extern void DOTweenAnimation_DORestartById_m79A437D8087A41B5B1DB998B2D95ACBC06C92F34 (void);
// 0x000005A4 System.Void DG.Tweening.DOTweenAnimation::DORestartAllById(System.String)
extern void DOTweenAnimation_DORestartAllById_mB4956E8A288B61CE7BFD1E091BE0F0E75B360E20 (void);
// 0x000005A5 System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.DOTweenAnimation::GetTweens()
extern void DOTweenAnimation_GetTweens_mFA2D6C6863BE615A2D33B8D0E97C5FA40DF9B4EF (void);
// 0x000005A6 DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
extern void DOTweenAnimation_TypeToDOTargetType_mD0026308F78DB2907DAFA8B790AF57437D031D3C (void);
// 0x000005A7 DG.Tweening.Tween DG.Tweening.DOTweenAnimation::CreateEditorPreview()
extern void DOTweenAnimation_CreateEditorPreview_m71BB6F329F0A1A97C543F6DA20A9E2845F9E50FB (void);
// 0x000005A8 UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenGO()
extern void DOTweenAnimation_GetTweenGO_mAA4B88621B513AD6D7A76032131659A2453654CC (void);
// 0x000005A9 System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
extern void DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884 (void);
// 0x000005AA System.Void DG.Tweening.DOTweenAnimation::.ctor()
extern void DOTweenAnimation__ctor_m250D5B591D9CDF8F9F165FF1F355597D2E615715 (void);
// 0x000005AB System.Void DG.Tweening.DOTweenAnimation::<CreateTween>b__47_0()
extern void DOTweenAnimation_U3CCreateTweenU3Eb__47_0_mBD3557DDE92EE0029CF11BEFCEC3534AD5A5C283 (void);
// 0x000005AC System.Boolean DG.Tweening.DOTweenAnimationExtensions::IsSameOrSubclassOf(UnityEngine.Component)
// 0x000005AD System.Void DG.Tweening.DOTweenProShortcuts::.cctor()
extern void DOTweenProShortcuts__cctor_m5BA9B49D2E4C189ED49E39C3E5961B11B6B1BE8F (void);
// 0x000005AE DG.Tweening.Tweener DG.Tweening.DOTweenProShortcuts::DOSpiral(UnityEngine.Transform,System.Single,System.Nullable`1<UnityEngine.Vector3>,DG.Tweening.SpiralMode,System.Single,System.Single,System.Single,System.Boolean)
extern void DOTweenProShortcuts_DOSpiral_m545A153CD3A4F66CEF5D0376E959701D333FDE2B (void);
// 0x000005AF DG.Tweening.Tweener DG.Tweening.DOTweenProShortcuts::DOSpiral(UnityEngine.Rigidbody,System.Single,System.Nullable`1<UnityEngine.Vector3>,DG.Tweening.SpiralMode,System.Single,System.Single,System.Single,System.Boolean)
extern void DOTweenProShortcuts_DOSpiral_mBC25CF666EE124027A5E743CB99A490C1660CC24 (void);
// 0x000005B0 System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m806C59F8972EC150A820E385B593EA0B56B29B1F (void);
// 0x000005B1 UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_m1CCDACC82D59B9DD6DCEEE277BE3D1C410B40CEE (void);
// 0x000005B2 System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m2EA9119E181F78B27E9B32146D9861ABD0C3F7E8 (void);
// 0x000005B3 System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m7155F8E8DBB0B55CD44790BE6D26FFC39746D949 (void);
// 0x000005B4 UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::<DOSpiral>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mA0C2085BFC6B0541C15180DAD8844FAFBF8E303C (void);
// 0x000005B5 YMMJSONUtils.JObjectKind YMMJSONUtils.JObject::get_Kind()
extern void JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C (void);
// 0x000005B6 System.Void YMMJSONUtils.JObject::set_Kind(YMMJSONUtils.JObjectKind)
extern void JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55 (void);
// 0x000005B7 System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject> YMMJSONUtils.JObject::get_ObjectValue()
extern void JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706 (void);
// 0x000005B8 System.Void YMMJSONUtils.JObject::set_ObjectValue(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
extern void JObject_set_ObjectValue_mC1FC6DE92EC25FA91A918316481B05AC58ACCC7A (void);
// 0x000005B9 System.Collections.Generic.List`1<YMMJSONUtils.JObject> YMMJSONUtils.JObject::get_ArrayValue()
extern void JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D (void);
// 0x000005BA System.Void YMMJSONUtils.JObject::set_ArrayValue(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
extern void JObject_set_ArrayValue_mFB93C515E10CCD51A778A1F5E3A6E8625E957768 (void);
// 0x000005BB System.String YMMJSONUtils.JObject::get_StringValue()
extern void JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58 (void);
// 0x000005BC System.Void YMMJSONUtils.JObject::set_StringValue(System.String)
extern void JObject_set_StringValue_m0D9956200CEC32514C50C065145D6C07A538514B (void);
// 0x000005BD System.Boolean YMMJSONUtils.JObject::get_BooleanValue()
extern void JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542 (void);
// 0x000005BE System.Void YMMJSONUtils.JObject::set_BooleanValue(System.Boolean)
extern void JObject_set_BooleanValue_mCBD498B3264596F62B855602A850FEB4FA85F6FF (void);
// 0x000005BF System.Int32 YMMJSONUtils.JObject::get_Count()
extern void JObject_get_Count_mF9AF92947ACABC66F11C63C58693AEA05545EDF9 (void);
// 0x000005C0 System.Double YMMJSONUtils.JObject::get_DoubleValue()
extern void JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E (void);
// 0x000005C1 System.Void YMMJSONUtils.JObject::set_DoubleValue(System.Double)
extern void JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3 (void);
// 0x000005C2 System.Single YMMJSONUtils.JObject::get_FloatValue()
extern void JObject_get_FloatValue_mA3FFA45A05D8D82FEBBF01968D3C5E545D003782 (void);
// 0x000005C3 System.Void YMMJSONUtils.JObject::set_FloatValue(System.Single)
extern void JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0 (void);
// 0x000005C4 System.UInt64 YMMJSONUtils.JObject::get_ULongValue()
extern void JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4 (void);
// 0x000005C5 System.Void YMMJSONUtils.JObject::set_ULongValue(System.UInt64)
extern void JObject_set_ULongValue_m9654C958809EA25787D7D7372A902AB027E3B6FC (void);
// 0x000005C6 System.Int64 YMMJSONUtils.JObject::get_LongValue()
extern void JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036 (void);
// 0x000005C7 System.Void YMMJSONUtils.JObject::set_LongValue(System.Int64)
extern void JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840 (void);
// 0x000005C8 System.UInt32 YMMJSONUtils.JObject::get_UIntValue()
extern void JObject_get_UIntValue_m20AF155A1577719B5C67D5FC8F09B5AAF7C25E1D (void);
// 0x000005C9 System.Void YMMJSONUtils.JObject::set_UIntValue(System.UInt32)
extern void JObject_set_UIntValue_mAA1F90058E59ED87886D5D8E29D5C7966A73A790 (void);
// 0x000005CA System.Int32 YMMJSONUtils.JObject::get_IntValue()
extern void JObject_get_IntValue_mDB5384E73EDBA994CB3A4B840B201ED8B8373C64 (void);
// 0x000005CB System.Void YMMJSONUtils.JObject::set_IntValue(System.Int32)
extern void JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE (void);
// 0x000005CC System.UInt16 YMMJSONUtils.JObject::get_UShortValue()
extern void JObject_get_UShortValue_mEB27E08EB88B31CE82192C8F6294F1E374C1B384 (void);
// 0x000005CD System.Void YMMJSONUtils.JObject::set_UShortValue(System.UInt16)
extern void JObject_set_UShortValue_mD1B79F3A0F374218A07E9D691E6342EBDD70CF6D (void);
// 0x000005CE System.Int16 YMMJSONUtils.JObject::get_ShortValue()
extern void JObject_get_ShortValue_mE133387DB20068631DA7874BD278B57C3D0E3E0A (void);
// 0x000005CF System.Void YMMJSONUtils.JObject::set_ShortValue(System.Int16)
extern void JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909 (void);
// 0x000005D0 System.Byte YMMJSONUtils.JObject::get_ByteValue()
extern void JObject_get_ByteValue_m7895737CF1888EE4A42011AA0C276953746A6A68 (void);
// 0x000005D1 System.Void YMMJSONUtils.JObject::set_ByteValue(System.Byte)
extern void JObject_set_ByteValue_m747F43C9CFA9A2FBA947FB54E03E8BE24222F5CA (void);
// 0x000005D2 System.SByte YMMJSONUtils.JObject::get_SByteValue()
extern void JObject_get_SByteValue_m4440148C8FCE7D523D3D1CC9F85F6A3E171C7528 (void);
// 0x000005D3 System.Void YMMJSONUtils.JObject::set_SByteValue(System.SByte)
extern void JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE (void);
// 0x000005D4 System.Boolean YMMJSONUtils.JObject::get_IsNegative()
extern void JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1 (void);
// 0x000005D5 System.Void YMMJSONUtils.JObject::set_IsNegative(System.Boolean)
extern void JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD (void);
// 0x000005D6 System.Boolean YMMJSONUtils.JObject::get_IsFractional()
extern void JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470 (void);
// 0x000005D7 System.Void YMMJSONUtils.JObject::set_IsFractional(System.Boolean)
extern void JObject_set_IsFractional_m54D026ED3DC60C618E4F0B035EADBAA2F7F85322 (void);
// 0x000005D8 YMMJSONUtils.IntegerSize YMMJSONUtils.JObject::get_MinInteger()
extern void JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9 (void);
// 0x000005D9 System.Void YMMJSONUtils.JObject::set_MinInteger(YMMJSONUtils.IntegerSize)
extern void JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759 (void);
// 0x000005DA YMMJSONUtils.FloatSize YMMJSONUtils.JObject::get_MinFloat()
extern void JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83 (void);
// 0x000005DB System.Void YMMJSONUtils.JObject::set_MinFloat(YMMJSONUtils.FloatSize)
extern void JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649 (void);
// 0x000005DC YMMJSONUtils.JObject YMMJSONUtils.JObject::get_Item(System.String)
extern void JObject_get_Item_m46C334AB26DA340F719D09FCA60BCB60C9CD48CA (void);
// 0x000005DD YMMJSONUtils.JObject YMMJSONUtils.JObject::get_Item(System.Int32)
extern void JObject_get_Item_m812085ADF993D5888C5F69233195E5851C80C41A (void);
// 0x000005DE System.String YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m91CE744D7CD627E8A19B081D7CA029436BC82A2B (void);
// 0x000005DF System.Boolean YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m6BB0BE577426EC26C1D78D4A7BE321523AE35DAB (void);
// 0x000005E0 System.Double YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mCA528C9C1B2A5DE24DA8F54D4FF32D019B152DAF (void);
// 0x000005E1 System.Single YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m5C37537EB0C5F8C9F7D9A6E297229AD667050407 (void);
// 0x000005E2 System.UInt64 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mE6AD01C8C18717761A33CDE14188133DF1354678 (void);
// 0x000005E3 System.Int64 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mC4C1D472D280F55CBDA46139343207CD54FA09CD (void);
// 0x000005E4 System.UInt32 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m58BDB38F8D53BEC03DC2B585BC93619FB8008EA9 (void);
// 0x000005E5 System.Int32 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m8C4A8F99EC1181576CF506A9BDAE2EA2A7A461D3 (void);
// 0x000005E6 System.UInt16 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m95E4E424758D176CE5F782CB330753F69442F8A5 (void);
// 0x000005E7 System.Int16 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_m0783B9006A4371CCF2D2F07F2BFAB7C6B263E083 (void);
// 0x000005E8 System.Byte YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mB57EE7A3507305E88BD0DAF8C50520F13919A52A (void);
// 0x000005E9 System.SByte YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
extern void JObject_op_Explicit_mBD554A7AC5AF77C778FCB838F1F8030860EDE875 (void);
// 0x000005EA YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateString(System.String)
extern void JObject_CreateString_m2D29F5DF3DA461D2411DD5236006A2E818AF24FD (void);
// 0x000005EB YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateBoolean(System.Boolean)
extern void JObject_CreateBoolean_m19A41F29B2C89DA4BB613D8284923113A24CE4A8 (void);
// 0x000005EC YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateNull()
extern void JObject_CreateNull_mE6BF7B1637ACF216EAD4D562329913ED9EBC15AE (void);
// 0x000005ED YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateNumber(System.Boolean,System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
extern void JObject_CreateNumber_mDEDBB16F3828F4A3611D58ECFB19C54C06C8321A (void);
// 0x000005EE YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateArray(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
extern void JObject_CreateArray_mC94F63B6CA87C8CD7DF7D2E5A56F51A55860B873 (void);
// 0x000005EF YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateObject(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
extern void JObject_CreateObject_m11F3D06CA8A08362C226387F51D672F1AA224BF6 (void);
// 0x000005F0 System.Void YMMJSONUtils.JObject::.ctor(System.String)
extern void JObject__ctor_mC3F8118DC1B1D33330FCCCFE9AAADBFBE97B8917 (void);
// 0x000005F1 System.Void YMMJSONUtils.JObject::.ctor(System.Boolean)
extern void JObject__ctor_m84C13B77E472D391E1159CB615193999B13E0A27 (void);
// 0x000005F2 System.Void YMMJSONUtils.JObject::.ctor()
extern void JObject__ctor_m3F751D0346A8ED5B4900A1F09C9551E090423929 (void);
// 0x000005F3 System.Void YMMJSONUtils.JObject::.ctor(System.Boolean,System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
extern void JObject__ctor_m7C615C831B35544505EC8D11CA992452676EF0AA (void);
// 0x000005F4 System.Void YMMJSONUtils.JObject::.ctor(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
extern void JObject__ctor_m17011C1ACA3110B22E4B691913B2BB6DCFABEA90 (void);
// 0x000005F5 System.Void YMMJSONUtils.JObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
extern void JObject__ctor_m5E1C718DC194B62A2A9CE1735EDB311E330CED8D (void);
// 0x000005F6 System.Void YMMJSONUtils.JObject::MakeInteger(System.Boolean,System.UInt64)
extern void JObject_MakeInteger_m24713DDA28ACFCFDDAAFCD8C4753AC5D151314D3 (void);
// 0x000005F7 System.Void YMMJSONUtils.JObject::MakeFloat(System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
extern void JObject_MakeFloat_m1755505E51AE821225A8FED4833751165990EF09 (void);
// 0x000005F8 System.Boolean YMMJSONUtils.JObject::Equals(System.Object)
extern void JObject_Equals_m8D9A02DC9315E65D67684DD25A7FE20072E9ED4A (void);
// 0x000005F9 System.Int32 YMMJSONUtils.JObject::GetHashCode()
extern void JObject_GetHashCode_m91C908795F81B70ACF230C7E128CE8A9D8139423 (void);
// 0x000005FA System.Boolean YMMJSONUtils.JObject::EqualNumber(YMMJSONUtils.JObject,YMMJSONUtils.JObject)
extern void JObject_EqualNumber_m6ACB2B57B24104A3501EA94263D985B8A27000C7 (void);
// 0x000005FB System.String YMMJSONUtils.JSONEncoder::Encode(System.Object)
extern void JSONEncoder_Encode_mCC18CF69E4E2EE24AE5E713CE17FBC3DA6CF7756 (void);
// 0x000005FC System.Void YMMJSONUtils.JSONEncoder::.ctor()
extern void JSONEncoder__ctor_m7996D27E65BA8DEA8981B519CDA71CF7B1068A04 (void);
// 0x000005FD System.Void YMMJSONUtils.JSONEncoder::EncodeObject(System.Object)
extern void JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2 (void);
// 0x000005FE System.Void YMMJSONUtils.JSONEncoder::EncodeNull()
extern void JSONEncoder_EncodeNull_mB74CD302064B5C6DB11221CCBE016A9EB35222E0 (void);
// 0x000005FF System.Void YMMJSONUtils.JSONEncoder::EncodeString(System.String)
extern void JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1 (void);
// 0x00000600 System.Void YMMJSONUtils.JSONEncoder::EncodeFloat(System.Single)
extern void JSONEncoder_EncodeFloat_m211558D4E8A28E3E3A66FD4D93A6FEF7DCA78F46 (void);
// 0x00000601 System.Void YMMJSONUtils.JSONEncoder::EncodeDouble(System.Double)
extern void JSONEncoder_EncodeDouble_m9ADE6CBC4900C98ECE4BC350F85E790916060DCA (void);
// 0x00000602 System.Void YMMJSONUtils.JSONEncoder::EncodeLong(System.Int64)
extern void JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584 (void);
// 0x00000603 System.Void YMMJSONUtils.JSONEncoder::EncodeULong(System.UInt64)
extern void JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D (void);
// 0x00000604 System.Void YMMJSONUtils.JSONEncoder::EncodeBool(System.Boolean)
extern void JSONEncoder_EncodeBool_m833DAD684ED4AA287A0AE5AB6729C8BFF5318AF8 (void);
// 0x00000605 System.Void YMMJSONUtils.JSONEncoder::EncodeDictionary(System.Collections.IDictionary)
extern void JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D (void);
// 0x00000606 System.Void YMMJSONUtils.JSONEncoder::EncodeEnumerable(System.Collections.IEnumerable)
extern void JSONEncoder_EncodeEnumerable_mBBB301D592E22D694ACBE3FF317125DB0970814E (void);
// 0x00000607 System.Void YMMJSONUtils.JSONEncoder::.cctor()
extern void JSONEncoder__cctor_mE8F1C589FE0046B81EB5CF1C3B036D417E957EA5 (void);
static Il2CppMethodPointer s_methodPointers[1543] = 
{
	AppMetrica_get_Instance_m5EB615F21606FEDEF7F6B8B0319689ECC158B4C7,
	AppMetrica_Awake_m5DBDA7E169B0B6D729898C98AD1CAC678E7B763C,
	AppMetrica_Start_m4227B9206EF0DE1753E4A5687402C6E9DAF69EFF,
	AppMetrica_OnEnable_m55694E9FE00FF0D66D32C5EC5EF7A39DA0EF6319,
	AppMetrica_OnDisable_m0FC036E0B92B985040D9E200EB36876216E561F2,
	AppMetrica_OnApplicationPause_m6F8A17B737F2D9D3E3B1DC458B65B9A844635634,
	AppMetrica_SetupMetrica_m501B61D5B792CCF44AA9E1CCB954BE9EF8742ACE,
	AppMetrica_HandleLog_m5854426FF167D14B0A3E74EF494CC30CF78861AB,
	AppMetrica__ctor_m5B7D252993797CB916179B095B80914B247365D6,
	AppMetrica__cctor_mD201631287959F894644DAAE68F3BF8D3B3DD324,
	BaseYandexAppMetrica_add_OnActivation_mE925443792B17ACC016ABB93EF54098121976705,
	BaseYandexAppMetrica_remove_OnActivation_m6E0C02E4696C797132351E2B88299A04311D2C30,
	BaseYandexAppMetrica_get_ActivationConfig_m6F9B498B12BBF9EF2879103B2BE60C1A36E33E7B,
	BaseYandexAppMetrica_set_ActivationConfig_mA9EC61A5043E97D3389810FA1CC98C4D7D679396,
	BaseYandexAppMetrica_ActivateWithConfiguration_mB7480711FBEBF9C945C5C10826D23FE1F2BD5F46,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BaseYandexAppMetrica_UpdateConfiguration_mC825E37FFAFD4B1FC173FC15760FD7D440515414,
	BaseYandexAppMetrica__ctor_mDEED10287F9551B410A31EE144B414B4546BC13B,
	ConfigUpdateHandler__ctor_m36F90B4DDDAC65D9981C40C9D3F3A28BC05AD164,
	ConfigUpdateHandler_Invoke_m8E918DAFE7EE9507A2257200C4394D456449C4A3,
	ConfigUpdateHandler_BeginInvoke_m5731E165F907F1F98380A9A985330CA059429F04,
	ConfigUpdateHandler_EndInvoke_mF634D3F33A43E2A07E34785203CDE6945A4595E9,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	YandexAppMetricaAttribute_BirthDate_m940F5E6923E117B7B0619ABC5E0E4109E62C8E51,
	YandexAppMetricaAttribute_Gender_m9A02B789945EF58EC88AED208940D076EAAC51C1,
	YandexAppMetricaAttribute_Name_m4E1BA13C5E1C358925D9E07B4024F351E8DFAC7D,
	YandexAppMetricaAttribute_NotificationsEnabled_mFA5914B046C47AD63C00B20937BA3B82646F963F,
	YandexAppMetricaAttribute_CustomBoolean_m368F70F1967804C347DAC4CDFD0E81A8510C9362,
	YandexAppMetricaAttribute_CustomCounter_m37612DD78B1256655CA115432D15E11B6AA1E703,
	YandexAppMetricaAttribute_CustomNumber_m6D7A7F27AD7470D6D0FFD701EF6F41D9288E278B,
	YandexAppMetricaAttribute_CustomString_mB837A3A4C7645F167B21AD1944AA6D2831A39B42,
	YandexAppMetricaAttribute__ctor_m5A647386010BF13E8F99674A8733B88D2F7B1D3F,
	YandexAppMetricaBirthDateAttribute_WithAge_m0C771B731C3BCF41F88C0140FA1A2444DA8B0B10,
	YandexAppMetricaBirthDateAttribute_WithBirthDate_m18FC24496982FC933F8670DCACEC52EA3B342A0E,
	YandexAppMetricaBirthDateAttribute_WithBirthDate_mA11761F7AE84434D984A80D539961E5D06C0528B,
	YandexAppMetricaBirthDateAttribute_WithBirthDate_m29EBA21927093D5A65A5864855CE54AF5ADEB55C,
	YandexAppMetricaBirthDateAttribute_WithBirthDate_m30A5F955325E558A2940E2EFCB0388168BD33298,
	YandexAppMetricaBirthDateAttribute_WithValueReset_m730305211DC7E81A347C4308BCC8A6954DEC6C30,
	YandexAppMetricaBirthDateAttribute__ctor_m64060851390EC187EB959622802023492D1F8899,
	YandexAppMetricaBooleanAttribute__ctor_m73B86BF16008315C5DBC5FFA155097BC901219BF,
	YandexAppMetricaBooleanAttribute_WithValue_m72F14C9186D8839CAF9AE3D38470EA73B86D6FC0,
	YandexAppMetricaBooleanAttribute_WithValueIfUndefined_mB4BCF4671C23A53BC271733B98AE65FD561372A8,
	YandexAppMetricaBooleanAttribute_WithValueReset_mF1ABFF5F4F5004E3C4C2CEB67B00DEF4A2C43C9E,
	YandexAppMetricaCounterAttribute__ctor_mC95D8E05C76A8AF6480ED5B5F69A5904CF60906B,
	YandexAppMetricaCounterAttribute_WithDelta_m7465A2743220C2C6888870B1A8CE90124BF7D184,
	YandexAppMetricaGenderAttribute_WithValue_m434A83E78D313872AFF18311717CF227944C0BE7,
	YandexAppMetricaGenderAttribute_WithValueReset_mDD72761DC6F6409CAEE291176FED21FB58DD400A,
	YandexAppMetricaGenderAttribute__ctor_mC519505AC6A85A3A8FE277508A2EC1565AB7E57A,
	YandexAppMetricaNameAttribute_WithValue_m0EEC5D1F557DAA8F3607C18AF41D9645C1A24FBE,
	YandexAppMetricaNameAttribute_WithValueReset_m2276032DEE0C6E2DABE7BAB7C604C26AFD3F6F40,
	YandexAppMetricaNameAttribute__ctor_mCDAA237E85DA4E8147637C16817C296A6FF398E3,
	YandexAppMetricaNotificationsEnabledAttribute_WithValue_m7A37CA6B9D0AFC753AC82E9C603DA554565AED45,
	YandexAppMetricaNotificationsEnabledAttribute_WithValueReset_mD91041866C6FA3D3CE43D0A4A5316E78269EF222,
	YandexAppMetricaNotificationsEnabledAttribute__ctor_mDB95771E3D9E6EDF5CD702313883C1D973676E22,
	YandexAppMetricaNumberAttribute__ctor_mEAA52D4E7DEC953C1B806078CB31EC5C2D3DFD9F,
	YandexAppMetricaNumberAttribute_WithValue_m6D6C31092CDA461FE6FE251860C8BD3BD0683D40,
	YandexAppMetricaNumberAttribute_WithValueIfUndefined_mBB564239EF84EFA6306802982539E662B1A83116,
	YandexAppMetricaNumberAttribute_WithValueReset_m6AC56300891C43EEEA4A366DC2709F9BA3DAB480,
	YandexAppMetricaStringAttribute__ctor_m54DE5D82EEFC0D4AC02FA1FC873524FFD4B1012A,
	YandexAppMetricaStringAttribute_WithValue_mAC56CBAA84C15FD0A5C1BEA6C00E6D647E8A9918,
	YandexAppMetricaStringAttribute_WithValueIfUndefined_mB3BDEE8214F295C07D3D65764DCF35256AD78926,
	YandexAppMetricaStringAttribute_WithValueReset_mD3A166BEBF470E1E27D7667BC67B424C9DFB00A4,
	YandexAppMetricaUserProfile_GetUserProfileUpdates_m6B1311B7ED6F7AC449420D786F59018EE85FB7BB,
	YandexAppMetricaUserProfile_Apply_m27F43850CE1AC7E50A7E1748A420DBFE3274BAF2,
	YandexAppMetricaUserProfile_ApplyFromArray_m35A3EA902F9EC11F0B777494CFC18A152A65DE17,
	YandexAppMetricaUserProfile__ctor_m971F44583D1869C13C4B81E0026D94959B2AADF6,
	YandexAppMetricaUserProfileUpdate_get_AttributeName_mAADFE603D501DD46D59FB6A2159276770BA31B86,
	YandexAppMetricaUserProfileUpdate_set_AttributeName_m4191CC9A6655953F2B454199301F67F772B7AEA1,
	YandexAppMetricaUserProfileUpdate_get_MethodName_m9E1EF786B3D8E2E7684245B08660901DD294BD26,
	YandexAppMetricaUserProfileUpdate_set_MethodName_mD740C005661BF86B5C8350D33EF63D5B19AD8228,
	YandexAppMetricaUserProfileUpdate_get_Key_mB162CFCC7C53CFF963FD454F74D758AF064A588D,
	YandexAppMetricaUserProfileUpdate_set_Key_m33EE5D283CF342AA0ED524972932ADD147FEDE88,
	YandexAppMetricaUserProfileUpdate_get_Values_m49078DBE6E048B602316BFDBFF787F6D4ECD562D,
	YandexAppMetricaUserProfileUpdate_set_Values_m9B309958C5FF83058B1A198A5500E4160C8797A2,
	YandexAppMetricaUserProfileUpdate__ctor_m58616DC6E7A79A57922D05F3B02A9DA447E94CD2,
	YandexAppMetricaAndroid_JsonStringFromDictionary_m1BAEE09C16FEAF4362C0D63815421F1CDEB37947,
	YandexAppMetricaAndroid_ThrowableFromStringStackTrace_m44D9A531BB4CD92D5E1C1E41FA51501EEFC20C89,
	YandexAppMetricaAndroid_CallAppMetrica_mD913E7708019833E2777050300BB404BBD427522,
	YandexAppMetricaAndroid_CallYandexMetricaPlugins_m24B9CC0C69B66A2D253BE6E81C30065698198984,
	YandexAppMetricaAndroid_GetSignatureFromTypeNames_mF47E65AFBEC86B20D622718EB5A5AA6FD890E984,
	YandexAppMetricaAndroid_ActivateWithConfiguration_m9AEA491CD86A9B4CA4145C1DE369652DE7E354D9,
	YandexAppMetricaAndroid_ResumeSession_mAAF5A13CDC981D10526F923D9489B48CD006B622,
	YandexAppMetricaAndroid_PauseSession_mE00FE65302C17999E82CF443C526400C14B14424,
	YandexAppMetricaAndroid_ReportEvent_m9797C3E1C2A21B49F410B1443E07FF5A3815E05F,
	YandexAppMetricaAndroid_ReportEvent_m1287F782DC0B11449CC33276372B31A00D0433F0,
	YandexAppMetricaAndroid_ReportEvent_m1AFDFB874F37EBFFDD5106D626D6C2B61AFC2751,
	YandexAppMetricaAndroid_ReportError_mB0D97D230E3DBF1BEAAFEDC707F1B5F3CAD3CB01,
	YandexAppMetricaAndroid_ReportError_m3781303E08712941BEE862946663B91505B5FAE6,
	YandexAppMetricaAndroid_ReportError_mEE5AB04E1A4B9A38F2E28B1713FE9CFF3C68E86D,
	YandexAppMetricaAndroid_ReportError_m095A53099D7AA9D202ECE75313A82D8A062527A2,
	YandexAppMetricaAndroid_ReportError_mF672932C825B13FF65FB1D3FB04F01581CD42AFA,
	YandexAppMetricaAndroid_ReportError_mF60163F2A17F931246748875120DE79BA24C6D31,
	YandexAppMetricaAndroid_ReportUnhandledException_m9C1FB8E7A3847049F4A9E9CCC61C76A1A30D3876,
	YandexAppMetricaAndroid_ReportUnhandledException_m1273DAD576FC6767076D96065F1FEBEBDC094F09,
	YandexAppMetricaAndroid_ReportErrorFromLogCallback_mE4BA429806CAEA059EBDB74D64C9D7180BE2F771,
	YandexAppMetricaAndroid_SetLocationTracking_m142BDF168D811AAF642F8E1AB9A492A14D249072,
	YandexAppMetricaAndroid_SetLocation_m11DCA672B8CA0D9F7F7E9225B80D3D4300E821B3,
	YandexAppMetricaAndroid_get_LibraryApiLevel_m3DC68E5156B90D2979A3D5A177E9C051A0F721E2,
	YandexAppMetricaAndroid_get_LibraryVersion_m6A08313064BD693C76582476435C6B2D459E6CF8,
	YandexAppMetricaAndroid_SetUserProfileID_m8EB1151D563089E8C70DDB20C7941015618A5429,
	YandexAppMetricaAndroid_ReportUserProfile_mB6C896883793D47847AB4C2595A61F91AEA796B3,
	YandexAppMetricaAndroid_ReportRevenue_m3F2050BCB8C2A37CBEC0BE04F8E83B8F3A43FAFE,
	YandexAppMetricaAndroid_SetStatisticsSending_m14D5A28D885173FB6019D35C09FB61656F00EC0A,
	YandexAppMetricaAndroid_SendEventsBuffer_mBFD658286BE42404E656C82A4760E0E9EC6CE5E3,
	YandexAppMetricaAndroid_RequestAppMetricaDeviceID_m5951B8047BD1271B6D5D7BDBFA067199F53A4464,
	YandexAppMetricaAndroid_ReportAppOpen_mCD5DE2F1DAD7F850E55AA905E79BB8F13ABE3D76,
	YandexAppMetricaAndroid_PutErrorEnvironmentValue_m87FDE9268C9B7E4AC5D6AE5DF9F3361261C9706E,
	YandexAppMetricaAndroid_ReportReferralUrl_m45A02B7D78DF39B2D5546E7F5004D29131EC5933,
	YandexAppMetricaAndroid_RequestTrackingAuthorization_m4DE6E1B07342047AB83043C395DC7AEFA02E5DC9,
	YandexAppMetricaAndroid__ctor_m6E35197AA7DDF34EBFFDE31152DA85F49EBC423A,
	YandexAppMetricaExtensionsAndroid_ToAndroidAppMetricaConfig_m9DF6D16C32D02F87C98F239B2B32CDD5DE2FDA9B,
	YandexAppMetricaExtensionsAndroid_ToAndroidLocation_mCF5F8D02166476102C2A28482E7E475E6768886F,
	YandexAppMetricaExtensionsAndroid_ToAndroidGender_mE28D497019D78EB181718108B6F950C3580DAA6D,
	YandexAppMetricaExtensionsAndroid_ToAndroidUserProfileUpdate_mC54DA883F54492F5C7F8FBD4321DE05D1AEEBFA1,
	YandexAppMetricaExtensionsAndroid_ToAndroidUserProfile_mDAB1493464850EFA792A233E9AEEF2A6C90880FB,
	YandexAppMetricaExtensionsAndroid_ToAndroidReceipt_m6C775712DEEBD152BD56185F5704857586135B6E,
	YandexAppMetricaExtensionsAndroid_ToAndroidInteger_mF2DAC7691F76C1D8950115553CC5BD4042827BE9,
	YandexAppMetricaExtensionsAndroid_ToAndroidCurrency_m896BE4ABCE77819573CDFD25AF7752274626C23A,
	YandexAppMetricaExtensionsAndroid_ToAndroidRevenue_m1A5AD7464479D8A2361B5F9FC556E975D71ED5AB,
	YandexAppMetricaExtensionsAndroid_ToAndroidThrowable_mF8C810A444E3F8B7108B4873EFEBFDAB4C272678,
	YandexAppMetricaExtensionsAndroid_ToAndroidPluginErrorDetails_mDEFDB3F133007ED189420F03F061018FC81D534A,
	YandexAppMetricaExtensionsAndroid_ToAndroidStackTraceItem_mEC77A6DE004E86A7D47F19F0CD747A3E51036E4E,
	YandexAppMetricaExtensionsAndroid_CreateAndroidList_m056F1E4A1DFBDA6FC387E2481AACD721C70978B4,
	YandexAppMetricaExtensionsAndroid_ToAndroidMap_mABCA71874FD8EB99EE6F0E76818CCB7CE80FAC59,
	YandexAppMetricaDeviceIDListenerAndroid__ctor_mB7982DD2FF721ED8BC6B3195C923D89DAA9AFC19,
	YandexAppMetricaDeviceIDListenerAndroid_onLoaded_m8922BDD2CF98A40096C874C9025FA1F605932D65,
	YandexAppMetricaDeviceIDListenerAndroid_onError_m87AF86A8C39A39F137CD6C43429EE356A514E391,
	YandexAppMetricaDeviceIDListenerAndroid_ErrorFromAndroidReason_m5448D291C732C6533962EC4355C9E9D73109ADF2,
	YandexAppMetricaConfig__ctor_m46CD397B0518F464E09C5F2038FA3F15C91FE872,
	YandexAppMetricaConfig_get_ApiKey_m147BC417752FEA8D98C0F0A752BF9E3E00064C10,
	YandexAppMetricaConfig_set_ApiKey_m727866EB46A1123B84F7E5A2068C41F3AC9F48DB,
	YandexAppMetricaConfig_get_AppVersion_mED1821FDBD6E949FE587315530F27C4E17AC2E91,
	YandexAppMetricaConfig_set_AppVersion_mF02728C0411AF6F7E861F2F59EFDDA9440A4BCEA,
	YandexAppMetricaConfig_get_Location_mB53C928A0BBC78A4F40C28586D9F90890B2BE806,
	YandexAppMetricaConfig_set_Location_mDDD47FCFE2F8C9277DCFBB8F5D59CB8B6FD54E6B,
	YandexAppMetricaConfig_get_SessionTimeout_mF528D3798A45EB12C0CED466038D5DC620E163B5,
	YandexAppMetricaConfig_set_SessionTimeout_m9ADB8370334372932C9BAC1620BD3B444A7B6204,
	YandexAppMetricaConfig_get_CrashReporting_m39794ACC39D7A7B8348B1A10028A0BEE31794C97,
	YandexAppMetricaConfig_set_CrashReporting_m10DEBB344FC60DBF52674A40B9B9ACD6FF171B03,
	YandexAppMetricaConfig_get_LocationTracking_m40F248A4B9874C6509C59BB35CCA9417F0F0A0A7,
	YandexAppMetricaConfig_set_LocationTracking_mA00064D255151AFF0476827221E2A13A9824DD92,
	YandexAppMetricaConfig_get_Logs_mF3234BCD81011BB75DDFE87D6CDD105F8EB2411B,
	YandexAppMetricaConfig_set_Logs_mD0CAD7EE386AE6FBDC643EF357D946A52CA5F6EE,
	YandexAppMetricaConfig_get_HandleFirstActivationAsUpdate_m3C837F5D1B6EBAF5F25D836705DD6932AA6226F5,
	YandexAppMetricaConfig_set_HandleFirstActivationAsUpdate_mC8A24E7B4F0067E2D44081C1B5C6DD31856629D1,
	YandexAppMetricaConfig_get_PreloadInfo_m934E72D370ABB9E2243D4EBCFCA461144C05A2C4,
	YandexAppMetricaConfig_set_PreloadInfo_mFCF94F7B016C8C708921864ACD244232A8E2CC70,
	YandexAppMetricaConfig_get_StatisticsSending_mF8E5291F277DB595D3CD0D0DDDDD80864BC0D840,
	YandexAppMetricaConfig_set_StatisticsSending_m838878DCE15864B27001F0D4102BD3906C42367B,
	YandexAppMetricaConfig_get_AppForKids_mCE85C0B41FFD5C3E604B01D02290A7B42BD46F72,
	YandexAppMetricaConfig_set_AppForKids_m0E62895DEEFD58865564FA0BEE83B30E96C6E8DA,
	YandexAppMetricaConfig_get_UserProfileID_mAC80B41BDF1927A959013AA6F42A2B83DD466235,
	YandexAppMetricaConfig_set_UserProfileID_mA3EBF3741E03C538E234AF6C85B05A7B87480DF1,
	YandexAppMetricaConfig_get_RevenueAutoTrackingEnabled_m800674A3671F391DE265B4B3AA48B527EC17F99E,
	YandexAppMetricaConfig_set_RevenueAutoTrackingEnabled_mAF14BA869A4CA489D05B51F30027729B55545FBC,
	Coordinates_get_Latitude_m07E70B9DEDEF37DDF2850D24D0ED1E7A1826C0AA,
	Coordinates_set_Latitude_mB5495F18B4EAB660550D614F47193266AFC04958,
	Coordinates_get_Longitude_m225773A24459764B74431E09F66A415551F7B403,
	Coordinates_set_Longitude_m4E24236DFF7C6505A1BB0F8B67A36CCD1A314D17,
	YandexAppMetricaPreloadInfo__ctor_mA08D07DD83284D8F038DA55B187D716655D15A82,
	YandexAppMetricaPreloadInfo_get_TrackingId_m9D47806A199F7E7F0D413FC8DA4CE4CC0578B716,
	YandexAppMetricaPreloadInfo_set_TrackingId_m4F186B83B0CC244EC20FC57DB1AF0CC6C17F8189,
	YandexAppMetricaPreloadInfo_get_AdditionalInfo_mA15DFA87FDD7845B281B5D68B0EAACD8BCE33D53,
	YandexAppMetricaPreloadInfo_set_AdditionalInfo_m2BB980DCA77C372066E57803A273E1D68316F1EF,
	YandexAppMetricaDummy_ActivateWithConfiguration_mF4F7CC100A9A71036C5175990933BED3FC3C7DE9,
	YandexAppMetricaDummy_ResumeSession_m72F87852E83F0D32515843217EA98B1AE71325E3,
	YandexAppMetricaDummy_PauseSession_mDEA63747851A33E5BFCA94AD684E2374C0AA749B,
	YandexAppMetricaDummy_ReportEvent_mCA8B31A5B8CBC43AC22AB03BFDB490028EDE4F4D,
	YandexAppMetricaDummy_ReportEvent_mDA835B54FC220CF4E89CF7EC8A19CEAF704C9598,
	YandexAppMetricaDummy_ReportEvent_mF711B6E76C3B5180BBDE1B8DC2112C24822FA80A,
	YandexAppMetricaDummy_ReportError_mCCC548F07ECA29B5DF2447A0B5F1FFC6EF778FCF,
	YandexAppMetricaDummy_ReportError_m7E5E5A7C0C7A42955CB3E78877FB453CE91A5DA6,
	YandexAppMetricaDummy_ReportError_mDD789B98A0A324F9EF93007C7F2B60D8A85FC3C3,
	YandexAppMetricaDummy_ReportError_mD953AF2688D519B5E6A280DE3F0F450D57FDCCBB,
	YandexAppMetricaDummy_ReportError_mFBE5566FE561774058E6028007601FC3B3848751,
	YandexAppMetricaDummy_ReportError_mE39364CA4228864DA5D5AB2A5F8EDED17AFE2BC2,
	YandexAppMetricaDummy_ReportUnhandledException_m98BB8774BE34AA58294C54DEB95D7757B9700F4C,
	YandexAppMetricaDummy_ReportUnhandledException_mE053E77DD1A74C53ABA5F97D1447842F714F23EF,
	YandexAppMetricaDummy_ReportErrorFromLogCallback_m992701136648DE7C9EDCB05540992A1D31B28E59,
	YandexAppMetricaDummy_SetLocationTracking_mCFC5612CCF2909614A2F44EE26E24606F9BEB2D7,
	YandexAppMetricaDummy_SetLocation_mC38E20F136E85FA1AF45C01BB5C642FBD86C1700,
	YandexAppMetricaDummy_get_LibraryVersion_m4E1A5FD6CC5F96FB24AC48124C0848A967BD2AA7,
	YandexAppMetricaDummy_get_LibraryApiLevel_m4A6FB5B8BA2CEECAFF51B6DC06C48E133C4178EA,
	YandexAppMetricaDummy_SetUserProfileID_m3D59E7EFDDD4A71048BD5902112954E7B914D605,
	YandexAppMetricaDummy_ReportUserProfile_m316552F557D1B4BF567CDBD0CCE01AA3D4C1D7CF,
	YandexAppMetricaDummy_ReportRevenue_m07485ACACECC025BC7FD6BD465F727B9DA478751,
	YandexAppMetricaDummy_SetStatisticsSending_m60E36412BACECF9C3F40B280020E1D94408F3A63,
	YandexAppMetricaDummy_SendEventsBuffer_m5514DFD644305C5200F7D65D18B3BB76E269B561,
	YandexAppMetricaDummy_RequestAppMetricaDeviceID_m2344C2B031A16C7FD29E407FD0A80533EC511679,
	YandexAppMetricaDummy_ReportReferralUrl_m09C52CAA1D416B69F5D920459C0DEF404DF09C14,
	YandexAppMetricaDummy_ReportAppOpen_m9E3E355BEF1253529AA19140BC0E6E5F40952803,
	YandexAppMetricaDummy_PutErrorEnvironmentValue_m3FB76C8DBCB3D82A639ED26FF8F4836BE5A67CBE,
	YandexAppMetricaDummy_RequestTrackingAuthorization_m1D797B70AA028DF598C6DEF7B53A106AC7677020,
	YandexAppMetricaDummy__ctor_mC7268479DA37B337858AD22EA14162B5C818D659,
	YandexAppMetricaErrorDetails__ctor_mDC1BDC8F6C13C61669071D7A2CB1D6C5E22124F9,
	YandexAppMetricaErrorDetails_get_ExceptionClass_m21DC3005EF21B07F36177D88714C3F834635FD49,
	YandexAppMetricaErrorDetails_set_ExceptionClass_m43DA4DA19847759D91C7C0F0B08938E28E99E7AE,
	YandexAppMetricaErrorDetails_get_Message_m8D9BA1F2AD14F6A68451AF64A1BBEF59F3937E36,
	YandexAppMetricaErrorDetails_set_Message_m5EADD2ADCE9BAD1EB51AC354BD0FB0EE251071C1,
	YandexAppMetricaErrorDetails_get_Stacktrace_m6053DC39D10D57107770C63CBF41D9ED4003E1E7,
	YandexAppMetricaErrorDetails_set_Stacktrace_m121E0C5106B60574D0B1AC23A2AFCD034498B12E,
	YandexAppMetricaErrorDetails_get_Platform_mC1251AA6A3D9F6E18828550A8C2AC51264789118,
	YandexAppMetricaErrorDetails_set_Platform_mE15421EEA72CFAE27918BD083737059E323BF88A,
	YandexAppMetricaErrorDetails_get_VirtualMachineVersion_m70CF8DB1717C47198846BD36CA97E56CE503DB35,
	YandexAppMetricaErrorDetails_set_VirtualMachineVersion_m1CD5CBC716E07F52FB0E8289B39FDDFBF5F90BF3,
	YandexAppMetricaErrorDetails_get_PluginEnvironment_mE2FD13854E760DF9DDB80D768404081F6B2AB8AD,
	YandexAppMetricaErrorDetails_set_PluginEnvironment_m583755CBD506FDBFB6A901EE7AFDBE7E557557BC,
	YandexAppMetricaErrorDetails_From_m7513633DB0F4A8FBFCF6D5E94D8B7ED0BFCD635B,
	YandexAppMetricaErrorDetails_FromLogCallback_mB1749516E2F0DA59E187B6B0C43853D2963DAB39,
	YandexAppMetricaErrorDetails_ToString_m61FC75211E80DADF84A409E5091B0B0CFB7660C3,
	U3CU3Ec__DisplayClass25_0__ctor_m5D173CCCEFE38B9A3C3E4CA94B263AD38ECDFD3F,
	U3CU3Ec__DisplayClass25_0_U3CFromU3Eb__1_m6C69953E15BD0EE9CCD211E75ACD5B84F6402F9E,
	U3CU3Ec__cctor_mA3593E29485D3D54990E20088F75DB5978C93758,
	U3CU3Ec__ctor_m4F1071D6BB570BA1C8D3D8FF5F1782A16C64C6A6,
	U3CU3Ec_U3CFromU3Eb__25_0_m4A98D783011D4559824B2DE3C1EE2F839005478F,
	U3CU3Ec_U3CFromLogCallbackU3Eb__26_0_m80C4B2CB4577B171EAEF10186F2856AA2E36F8DB,
	U3CU3Ec_U3CToStringU3Eb__27_0_m70B14C191081D073C3F3F91A979D3174532F51FC,
	U3CU3Ec_U3CToStringU3Eb__27_1_m0F731ADDED441A0DD43EA31459EC7C7A6B717F3C,
	U3CU3Ec__DisplayClass26_0__ctor_mE758F5A3E79B0CBE4788BAE6FA18BB4C6955E9BA,
	U3CU3Ec__DisplayClass26_0_U3CFromLogCallbackU3Eb__1_m9A2F371A5DE63C2D4F027EAB5A57D30C6A624B3A,
	YandexAppMetricaStackTraceItem_get_ClassName_m946663DBAD4CCC5FE1A293E80FF8E61ABF724E75,
	YandexAppMetricaStackTraceItem_set_ClassName_m5EEFA29DD15CCDF567A85633826BB7BB8700AFD5,
	YandexAppMetricaStackTraceItem_get_MethodName_m3637BAADC88285596D4096E4A1531DA6F95A7D8F,
	YandexAppMetricaStackTraceItem_set_MethodName_m2732C8389BCAEC8B89AECE4CAA08D1C132819802,
	YandexAppMetricaStackTraceItem_get_FileName_mB00A61B97A6F105194D0EAE3B54F77B525D1F357,
	YandexAppMetricaStackTraceItem_set_FileName_m8EDA02A46D4A4377951B83FC67B4F530F2B56B0D,
	YandexAppMetricaStackTraceItem_get_Line_m47028D86A4C6E6D6FB5148963F56EBDBAB202F0A,
	YandexAppMetricaStackTraceItem_set_Line_m13C5C828B1682CFC01DD90113E3675CFE72CCE9A,
	YandexAppMetricaStackTraceItem_get_Column_m4D1E2CE061688D6A779D61E0DAD3F66AE19D5332,
	YandexAppMetricaStackTraceItem_set_Column_m9CD343280DB2716828D408477995C6C0703AD434,
	YandexAppMetricaStackTraceItem_From_m04570D149AB6E01023505E8721700A80C8F382D1,
	YandexAppMetricaStackTraceItem_GetGroupValueOrNull_m275A1EE217D7761E879FEC23B897716B19B8975F,
	YandexAppMetricaStackTraceItem_ToString_mF25A7B5729E735081DD38B31D6591AC416C082BC,
	YandexAppMetricaStackTraceItem__ctor_m1DDB7BEC07800298D9567042D1023B28CA59C293,
	YandexAppMetricaRevenue__ctor_mEFCFDB0686F78514C45021102EABF1C58FD08BEA,
	YandexAppMetricaRevenue__ctor_m7A36F4E6A089659BE2C9A38FB411D4A5E00FB8B0,
	YandexAppMetricaRevenue_get_Price_m00320990C2107FB0A3AD7CEBDDCA6E840A760030,
	YandexAppMetricaRevenue_set_Price_mAD3F94FCEC1E66D09DE0396941932D9E4F7AAFA4,
	YandexAppMetricaRevenue_get_PriceDecimal_mB279A2BE633D3566C2361667496AB4E3468033ED,
	YandexAppMetricaRevenue_set_PriceDecimal_mF70A4373DD76AAD3D9172912C44A99A950733351,
	YandexAppMetricaRevenue_get_Currency_m3FA5BCE2DC30757C824F157D3198B4B5638C26CA,
	YandexAppMetricaRevenue_set_Currency_mEB5437F9FD8CC650791713DE40233158399550D0,
	YandexAppMetricaRevenue_get_Quantity_mA405E5D1A6E7C6C34B35F51F518E443D3E880ABB,
	YandexAppMetricaRevenue_set_Quantity_mD219197536505B4A7431F7DEAB37C65D8FB6AE3C,
	YandexAppMetricaRevenue_get_ProductID_m6BA1288B427B5ACB125C634C2DF41FC29E0F2246,
	YandexAppMetricaRevenue_set_ProductID_mA1CEECADC302ED6A7A6BD38CF9D130BF59391727,
	YandexAppMetricaRevenue_get_Receipt_mD6BE3E2ECFD475796DCAF792DB96E9025FCC8101,
	YandexAppMetricaRevenue_set_Receipt_mFC5DF642121EA3BBE45D5188D9D3C4FFDE4F8092,
	YandexAppMetricaRevenue_get_Payload_m4BB18D93F9A96CC8C104E2311E28259512F7475E,
	YandexAppMetricaRevenue_set_Payload_mE50D0D2D624D7F134182FA70E4065B5F83FCA1AF,
	YandexAppMetricaReceipt_get_Data_m14E7C7A6A19436B92F0AEDC21AEBF0D598E51FDA,
	YandexAppMetricaReceipt_set_Data_m6E43F9474F83C1825BC0CD2536E7028341469447,
	YandexAppMetricaReceipt_get_Signature_m586F08DBD0AB661DF9D4C8D7154C5921B4F23ED2,
	YandexAppMetricaReceipt_set_Signature_m6CFA349C225137EFC2B686916FB2390FE03911A1,
	YandexAppMetricaReceipt_get_TransactionID_m9C4736645755549FBA3C2FA711879BEE669BD8C7,
	YandexAppMetricaReceipt_set_TransactionID_m2E469887FC93DE2133C185AB100BEE920A510CEC,
	ETFXProjectileScript_Start_m0E1FB70AED6DE06208444A4B1EE0095D4495A5C0,
	ETFXProjectileScript_FixedUpdate_m2FB7E63B404F5C701112656F5A4913E022A1553A,
	ETFXProjectileScript__ctor_mA40725837A6D1433D09D449D6AAFD1B47C127268,
	ETFXSceneManager_LoadScene2DDemo_m166AEE719B3CBEC9FC515335DE96024A63A85DDE,
	ETFXSceneManager_LoadSceneCards_mB6F24EFE58EF75B76ABA00ACEA57378F02431E05,
	ETFXSceneManager_LoadSceneCombat_mCE714064D2C42D885FC23182E28D712841776A3D,
	ETFXSceneManager_LoadSceneDecals_mA158CAC129C42A88BEC4D62E13E95AAAAFFE6AFA,
	ETFXSceneManager_LoadSceneDecals2_m184A79CC375CA61C1758EBAD3CAE31AB22910990,
	ETFXSceneManager_LoadSceneEmojis_m6B2D44847F224B852EE92930A1899AE0B668C82E,
	ETFXSceneManager_LoadSceneEmojis2_m666659BC62458A3476CB5FAEDFE82DAAB0767348,
	ETFXSceneManager_LoadSceneExplosions_mD769ACD162F37878BA03F1087C3F54C452218EDB,
	ETFXSceneManager_LoadSceneExplosions2_m5DAA46AB9C03E980D042D43A9E4DF0098239A9E7,
	ETFXSceneManager_LoadSceneFire_m265A0FE056A7394B2703C490DA983BAD77088070,
	ETFXSceneManager_LoadSceneFire2_mC60D6D1346670AFB87EBF57CB7A9E3EF006FBABE,
	ETFXSceneManager_LoadSceneFire3_m612F02454CCBA7586A07E0F9CD22036A781D748C,
	ETFXSceneManager_LoadSceneFireworks_m7A3BDB3A9EFBD640FDB55EFF76AECBA710D67DF4,
	ETFXSceneManager_LoadSceneFlares_mBA39D71D779C26CC664E29DFF6E271A129948AD8,
	ETFXSceneManager_LoadSceneMagic_m4FD8415183E84CE25BEBBA3F8F11C51837971543,
	ETFXSceneManager_LoadSceneMagic2_mE2E16D49C06756F213CF11AB7B4A41CA9B4F150C,
	ETFXSceneManager_LoadSceneMagic3_mD289F0F5997DB1F43766BA61FD263FC4394A664B,
	ETFXSceneManager_LoadSceneMainDemo_m70F4C7C5EE4597D9E841C29AECCFD0CA81C28E37,
	ETFXSceneManager_LoadSceneMissiles_mB99EAF3004F5DEA20BE35072805A10ECA57448E7,
	ETFXSceneManager_LoadScenePortals_m1B2413CADCA92522BDDD627784DF16FD60D2F689,
	ETFXSceneManager_LoadScenePortals2_m3ACA5707C45EFFA6CF56DF4C46FA463F5A0C8234,
	ETFXSceneManager_LoadScenePowerups_m17C376EDD497476395E80F44059E697969F02E45,
	ETFXSceneManager_LoadScenePowerups2_m794E525131173D846FF3E93E8D5EE43C2ED1F0E8,
	ETFXSceneManager_LoadSceneSparkles_m88CDB8CDE008657DA1B5067FCA0DC212FD33F5FF,
	ETFXSceneManager_LoadSceneSwordCombat_m9894108F9A1F0F0F3C41E949B971C3FC69D9F18E,
	ETFXSceneManager_LoadSceneSwordCombat2_m0DB358EDEA5A3878935D46106295FE0896252325,
	ETFXSceneManager_LoadSceneMoney_mBECE1A285111F033F4C07471B6E4C6D0D23A4BF4,
	ETFXSceneManager_LoadSceneHealing_mBEC91CD262B682CB6FCBDCA9CF9547E9B487B197,
	ETFXSceneManager_LoadSceneWind_mA896516E55DAF0CB0D04ECED1EFFDBEBA833FF69,
	ETFXSceneManager_Update_m837F7099F9821C1978177139C1DC56D8DDFC132E,
	ETFXSceneManager__ctor_m60E2AAFF19268179EAC55C8580C43FF2EB93FEFB,
	ParticleEffectsLibrary_Awake_mF2AC0D83644D9429E668B1603C7F23D803AEEA46,
	ParticleEffectsLibrary_Start_mEB46C3D6FAF9CDCE0C134F6E807DBF702519CDC9,
	ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50,
	ParticleEffectsLibrary_PreviousParticleEffect_m64E26B750D13C94BBA08E689744844E190550830,
	ParticleEffectsLibrary_NextParticleEffect_mC2497E960308324CF6ED87F2248E5ABBBFAC372D,
	ParticleEffectsLibrary_SpawnParticleEffect_m245CE977A9E3D2A85EC1B9A96C559FC78E5A4F57,
	ParticleEffectsLibrary__ctor_m79285CB8E8EC1C6689AC297F476DC97D2B19620B,
	PEButtonScript_Start_mBAE6F283CF1BF849003C4A07636457CD26794A4A,
	PEButtonScript_OnPointerEnter_m13D52C4BBB849EEFBFE03A6150CCB45CBF76B661,
	PEButtonScript_OnPointerExit_m74437A2567B5F27EA507688085E363B1DA9B9DD7,
	PEButtonScript_OnButtonClicked_mAAE0BE73FD4EE3BCE49D05419C3CF9C90CB3F6B1,
	PEButtonScript__ctor_mF6CD7E0AB9B93D2AC0CD5B782A58ADBB40FE968E,
	UICanvasManager_Awake_mC3050903833E679EAD258432288E2E1AEF262F90,
	UICanvasManager_Start_mF34E919B169144CB9C8666C9A8DCE009F5E6BD68,
	UICanvasManager_Update_mFD93AA63AD21FF943446DAD0C8BF3AD4275CD482,
	UICanvasManager_UpdateToolTip_mFA1330F8A25B3437AADA88116C2B3AF9B9A43256,
	UICanvasManager_ClearToolTip_m49C6117C20B9614BB602042D8A9DECF1AB68BC9C,
	UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781,
	UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4,
	UICanvasManager_SpawnCurrentParticleEffect_m2A1BB27F11451D24EE32BB3F30A8E9A3B007DDB5,
	UICanvasManager_UIButtonClick_m46983844912FADCFDDBA0455339B5E2162CB801C,
	UICanvasManager__ctor_mB927EAA45E53F674F466CFDF2205E5A29ED838DD,
	FBWindowsA2UNotificationsManager_ScheduleButton_m1E1DB09435A056565A733DD84847C9019D531892,
	FBWindowsA2UNotificationsManager_A2UNotificationCallback_mD5ECDC40A31DAAEAC969831DAF910E263C81A599,
	FBWindowsA2UNotificationsManager__ctor_mBCCEB3851695C75D2130EC70E1438AA15BFCD502,
	FBWindowsADSManager_LoadRewardedVideo_mA63B80E8909311DBBCDF248EEB2BDF40D1E13121,
	FBWindowsADSManager_ShowRewardedVideo_m1F84BE9B1757734C8BF3D3428774151748078886,
	FBWindowsADSManager_LoadInterstitialAd_m53B50AE6BB0B60147A5A8DC927DAE4F1957A175E,
	FBWindowsADSManager_ShowInterstitialAd_m6E0127956CFF5DFED5F49E659735C8038CBAB664,
	FBWindowsADSManager_OnButtonLoadInterstitialAd_mDA58548F3C90AFACD1F1FDBB5C88C76F5F394479,
	FBWindowsADSManager_OnButtonShowInterstitialAd_mC7791FE9006248604DC070887C57366CF0024A98,
	FBWindowsADSManager_OnButtonLoadRewardedVideo_mBBEA74C400BA6BECD814B462177CB674F44032C6,
	FBWindowsADSManager_OnButtonShowRewardedVideo_m7476AEB159331175737AB663A0E84FA5A610FDF4,
	FBWindowsADSManager__ctor_m4E8E20D79CD84A71462FBC991B65E4589C22F021,
	U3CU3Ec__DisplayClass3_0__ctor_m251A453E3B43DC6BC2112C50F95F77DC4875B3F3,
	U3CU3Ec__DisplayClass3_0_U3CLoadRewardedVideoU3Eb__0_m754D9117465C8FB5F9100C1B117BF12E70440E1D,
	U3CU3Ec__DisplayClass4_0__ctor_m42B9115CD1146D2372A92D081BCE05985CD5204F,
	U3CU3Ec__DisplayClass4_0_U3CShowRewardedVideoU3Eb__0_m9809B444B20301ABA2F3E2B07C07B94A1EA562C3,
	U3CU3Ec__DisplayClass5_0__ctor_m0DF6D9DEDA40D111C9BBA2E495E5E481E8AFFA38,
	U3CU3Ec__DisplayClass5_0_U3CLoadInterstitialAdU3Eb__0_m4882E26A44D427FA7A811871207580F982465593,
	U3CU3Ec__DisplayClass6_0__ctor_m56DB25DABAACEC78C71EC089971A0F4C1433CCA7,
	U3CU3Ec__DisplayClass6_0_U3CShowInterstitialAdU3Eb__0_mB08457A09A7B46DE8D3F14B88EC4A84953115319,
	FBWindowsExampleTabsManager_Start_m8C61AD09CF633B711F483722EE00C57900D21D04,
	FBWindowsExampleTabsManager_ShowTab_mE7CF605BF66BBEB5819398C232EDBECC90EFB4CC,
	FBWindowsExampleTabsManager__ctor_mEB5F2889C9C25E2BE84D3FDA9E7A0B80B29E5E8E,
	FBWindowsFriendsManager_Button_OpenReceivedInvitations_m758D303C1B87688B9EDA9FFE5FFC5CAD7676E2D7,
	FBWindowsFriendsManager_OpenFriendsDialogCallBack_mD72E11E4C98EBDA98BAAEEB09AE370569DF76035,
	FBWindowsFriendsManager_Button_GetFriendFinderInvitations_mB1577285B99213DCBB689720D5F1E083B63F58E6,
	FBWindowsFriendsManager_GetFriendFinderInvitationsCallback_mF72BAFB745CAF465316CD1166A506529ED5FA2DE,
	FBWindowsFriendsManager_DeleteFriendFinderInvitationCallback_m4EE9D1FB91B9AA763D4D0A68DA31A75874A5C76A,
	FBWindowsFriendsManager__ctor_mC18D6A75FC2D9B17802011A41FB2EA03BD531B73,
	U3CU3Ec__DisplayClass6_0__ctor_mD279371C9EA619A765000E3FD7EF87AFED864920,
	U3CU3Ec__DisplayClass6_0_U3CGetFriendFinderInvitationsCallbackU3Eb__0_m4BC19A757542CB9B0139840529E7D9C34DB03D95,
	FBWindowsGraphAPIManager_Start_m6DD4F1E460767F0BB7458C73341E32B236BE821E,
	FBWindowsGraphAPIManager_OnEnable_m09429F8371FF238D0890A5905EA6F78B63719A6C,
	FBWindowsGraphAPIManager_GraphAPI_mED08E62FF2549BB7F42D77DB74349B2F91B6B4AA,
	FBWindowsGraphAPIManager_SetGraphAPiVersion_m1EBD08D3D823FCCEB2D683CE55953ED5D09BD189,
	FBWindowsGraphAPIManager__ctor_mA2C5E55465E8939693FFCDEE0491D7AE821BA967,
	FBWindowsGraphAPIManager_U3CGraphAPIU3Eb__8_0_m0E7B4C156EBF6318FAC13F8D7CC91D9FE86ADC95,
	FBWindowsInitManager_InitButton_m91585B7DDF180D6DC885ED0698860F4C2BC55C4E,
	FBWindowsInitManager_InitCallback_m9C355A126124B28332B2E50C87AEF92353909500,
	FBWindowsInitManager_OnHideUnity_mEA7D93BF70509FD8D85613E7B328F21047B09C40,
	FBWindowsInitManager__ctor_mE3DF8EE9E8FA9BE75F842720E968914DE8D45C8D,
	FBWindowsLoginManager_LogInReadButton_mD464AA50450B8DCF2BF31AE166EDE4E6EDB78452,
	FBWindowsLoginManager_LogInPublishButton_mF4A5194A80AA8E3513F8D072E92A0E8693790293,
	FBWindowsLoginManager_LogOutButton_mE63114361311C63C41D30BAEDD7D25837F2EA0BC,
	FBWindowsLoginManager_AuthCallback_m1EA6C32AE674B4507BB9AF164B65D5B1F10D4448,
	FBWindowsLoginManager_GetCurrentProfile_m286865D50DF36DD633A27B3BA88B4129E93FC458,
	FBWindowsLoginManager_GetUserLocale_mFC499F14C482D25EC8E63CBEE811AE2231AE716D,
	FBWindowsLoginManager_LoadPictureFromUrl_mC19CD6E89FEBFC0AE1360BA22D255BC4AFF3FB29,
	FBWindowsLoginManager__ctor_m341EF79AEF1BCDB243A3045D2CDE6FF9DCE47137,
	FBWindowsLoginManager_U3CGetCurrentProfileU3Eb__8_0_m170EA42BAD2A057D3413A29A91A6F05FD065A5C4,
	FBWindowsLoginManager_U3CGetUserLocaleU3Eb__9_0_m695B3860401653E9CD71D3F6BC016E565500C04D,
	U3CLoadPictureFromUrlU3Ed__10__ctor_m9EEB7A63008A932E079C0A3EDEFFB926F0745D4E,
	U3CLoadPictureFromUrlU3Ed__10_System_IDisposable_Dispose_mF6AA89FF0A768DDDCD3D16DFB8BEE290C43AFD37,
	U3CLoadPictureFromUrlU3Ed__10_MoveNext_m49F1F8C7737731DD774E4070550E2D7746EA93E5,
	U3CLoadPictureFromUrlU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB3FA154E2B68AE513F7B0A987C6C4AC77C6C0D35,
	U3CLoadPictureFromUrlU3Ed__10_System_Collections_IEnumerator_Reset_mB1EE45887C3F812C92F230C0E43C498C88BC625E,
	U3CLoadPictureFromUrlU3Ed__10_System_Collections_IEnumerator_get_Current_m50EBA0B4A78657063B0B26E5E41E26B8378EEACF,
	FBWindowsLogsManager_Awake_mDA9315E97E655112AAF12CE8DC662295101E3776,
	FBWindowsLogsManager_DebugLog_m3B4802A0C38BC8BA51F4CE22D774DFC48A2B1B7D,
	FBWindowsLogsManager_DebugErrorLog_m113DD71EC8DE8EC5C4763796B6C47E14CD4F3F11,
	FBWindowsLogsManager_DebugWarningLog_mB3950B0DB164858F93DA7E26A7AF770EEB3B7430,
	FBWindowsLogsManager_DebugClean_mDD86E796937794CA11126DE45D17C12B39BEB659,
	FBWindowsLogsManager_ScrollToTheBottom_mA235CC0E40A34876554DDD563DF7C7DC7FF178A6,
	FBWindowsLogsManager__ctor_m2CDF3DCD98FDEFC87A323950CC22C38C837B1F19,
	FBWindowsPhysicalGamepadManager_Start_m0D7AE798B36C464F70E10970926D44B0B53B0D3B,
	FBWindowsPhysicalGamepadManager__ctor_m9E9E1CDE0E4211430B25C1D7677547E5EB1B6CE3,
	FBWindowsPurchaseManager_GetCatalogButton_mB285FE3F2C1AE92041601DE223130E205DE91769,
	FBWindowsPurchaseManager_ProcessGetCatalog_mBC691143EF994F995AF20C4185E0E3DBA6F9FCE8,
	FBWindowsPurchaseManager_LoadPictureFromUrl_m8F576F8433A34198C9775644188EFCADBC0C6E6F,
	FBWindowsPurchaseManager_ProcessPurchase_mA20D49D3AAB967C089CE41DF3DA8A0351A6D6CD2,
	FBWindowsPurchaseManager_GetPurchases_mCB24A00C33F68F6CB1ADFF31F3840F124338750A,
	FBWindowsPurchaseManager_processPurchases_m4751E163AB4A2B005B1D84EFBC2A2D37C3BF535C,
	FBWindowsPurchaseManager__ctor_m67504549059953A95E28473A82D9071D40D5A84A,
	U3CU3Ec__DisplayClass5_0__ctor_m8E0D79554FD9F8DDF8F151F779BEC80486594EC0,
	U3CU3Ec__DisplayClass5_0_U3CProcessGetCatalogU3Eb__0_m4CF890B17D5B9D50CD263816F450456E16AFD1FE,
	U3CLoadPictureFromUrlU3Ed__6__ctor_mFCAC1E0CD9AFEF9D4FC7C2B08FC7525F559DA8A2,
	U3CLoadPictureFromUrlU3Ed__6_System_IDisposable_Dispose_m8C674AE011C63B72DCEFF7368DA58D764B79C3EA,
	U3CLoadPictureFromUrlU3Ed__6_MoveNext_m1A03D1B07139C8798F268EAA92134F89793604AF,
	U3CLoadPictureFromUrlU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F863DD15052B9E3A586A1328846AF3C233EBA15,
	U3CLoadPictureFromUrlU3Ed__6_System_Collections_IEnumerator_Reset_m89151C82740561EB785AF5B2A4AB8303F214CF0A,
	U3CLoadPictureFromUrlU3Ed__6_System_Collections_IEnumerator_get_Current_m44D460CB604C85FBE166902DEE8B3AF96DF5E19B,
	U3CU3Ec__DisplayClass9_0__ctor_m56D4F574162DAA0DC9EA9494462CCD617008F901,
	U3CU3Ec__DisplayClass9_0_U3CprocessPurchasesU3Eb__0_m672EF6F8DAEF89BA3DD0BFA610B30D9F01130E6B,
	U3CU3Ec__DisplayClass9_0_U3CprocessPurchasesU3Eb__1_m16A8CAD55992864B2DE76CFC1ECE2B903727225B,
	FBWindowsShareManager_Button_UploadImage_m1FFD7CDC7EF00577C2D8DE56396794E10A6338EC,
	FBWindowsShareManager_Button_UploadVideo_m71548715579F703D2AAAD7BD9EAC85B03E96CAF5,
	FBWindowsShareManager_CallbackUploadImage_m23D3F141ABD3F7B5C1ED2495125B844A04271A51,
	FBWindowsShareManager_CallbackUploadVideo_mD73A78415B614804367AC60041621D43CAA62B2D,
	FBWindowsShareManager__ctor_m71A6FCB04FFEF4335E4A2871F560DF65149043A2,
	FBWindowsSoftKeyboardManager_SetSoftKeyboardOpenButton_m017F41AE3D6EB831CAC37D5B5B08EE542C4553FB,
	FBWindowsSoftKeyboardManager_CallbackSetSoftKeyboardOpen_m5BC943873544190661B30749EB4E212E39272E13,
	FBWindowsSoftKeyboardManager__ctor_m3ED26295A8E16065E7B132B22E6888B01A96B6D7,
	FBWindowsTournamentsManager_ConvertDataToDict_m957B59DCBCBBA8ADB9BF14CAC897915650000123,
	FBWindowsTournamentsManager_Button_CreateTournament_m48593D0E8A103A49FCE369372C59D67668D79E63,
	FBWindowsTournamentsManager_CallbackCreateTournament_mA8C1C64D80F7D1092EF621BDB587E3856FB16219,
	FBWindowsTournamentsManager_Button_PostSessionScore_m9D92F41F413320DB5633DFF143DA3649D975FBE6,
	FBWindowsTournamentsManager_CallbackPostSessionScore_mB9180114F19BE46EBC92B4093577F1DC4ECFCAFA,
	FBWindowsTournamentsManager_Button_PostTournamentScore_mCDDDD7549C629288461E228D9A6CB2CBE8792BAB,
	FBWindowsTournamentsManager_CallbackPostTournamentScore_mE8DF6C42C53FBCE134D892AA48C5379CEF8B7BBF,
	FBWindowsTournamentsManager_Button_ShareTournament_m2993547EA9296BF2A66B87BB4BDBBED59AFB5F33,
	FBWindowsTournamentsManager_CallbackShareTournament_m42520665AC25B3C5AA001A98A7AC9F63E114D720,
	FBWindowsTournamentsManager_Button_GetTournament_mF86D25202EA500123CC2A1A0E910E467627FA915,
	FBWindowsTournamentsManager_CallbackGetTournament_m62C3F26B7629D13AD79547392BF904925A5B7FF0,
	FBWindowsTournamentsManager__ctor_m65AFDD841835BB7A8550C12F089A9A5CC6D1ACE4,
	FBWindowsVirtualGamepadManager_SetVirtualGamepadLayout_mDE6BE733314A7BA7A039F1ADE930948BDD491619,
	FBWindowsVirtualGamepadManager_CallbackSetVirtualGamepadLayout_m048B38EA808953D897CC2599977DF0DFE7BBABBA,
	FBWindowsVirtualGamepadManager__ctor_mF19C463251E64906F96CDD79C29649B2E379A2AF,
	JoystickPlayerExample_FixedUpdate_m9AEDBA111F95D67A006A5D3821956048224541B7,
	JoystickPlayerExample__ctor_m702422E0AE29402330CF41FDDBEE76F0506342E2,
	JoystickSetterExample_ModeChanged_m35AF30EE3E6C8CEBF064A7AB80F5795E9AF06D23,
	JoystickSetterExample_AxisChanged_m5CA220FEA14E06BD8A445E31C5B66E4601C5E404,
	JoystickSetterExample_SnapX_m25A77C3DE4C6DBBE3B4A58E2DE8CD44B1773D6A1,
	JoystickSetterExample_SnapY_m54FE8DCB2CE8D2BF5D2CDF84C68DE263F0E25B1B,
	JoystickSetterExample_Update_m99B2432D22FE669B4DC3209696AD4A62096C7D41,
	JoystickSetterExample__ctor_m2A3D66E05BCDF78D0F116348094717BEBA73EC91,
	Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA,
	Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE,
	Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC,
	Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77,
	Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505,
	Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC,
	Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19,
	Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388,
	Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6,
	Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40,
	Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A,
	Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613,
	Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86,
	Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C,
	Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6,
	Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9,
	Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C,
	Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342,
	Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987,
	Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C,
	Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024,
	Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B,
	DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A,
	DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9,
	DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72,
	DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136,
	DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C,
	DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506,
	DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB,
	FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24,
	FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81,
	FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54,
	FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D,
	FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C,
	VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99,
	VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A,
	VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE,
	VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D,
	VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5,
	VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526,
	VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB,
	VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852,
	ArrowScript_Update_m4747202A0415B5CB7F2F859B24D76DD173F7FDDF,
	ArrowScript__ctor_m49CA01FF02363891A4F87C9B9FEB66798F181794,
	BoothVisitorScript_ChangeSuit_m5B8675B5517A3D3F5AD769C4FA9A7E5176F5D977,
	BoothVisitorScript_Jumped_m0E04080ED9F598EBC0D6F0DD680B369AEA7FB496,
	BoothVisitorScript__ctor_m8A2541301E49333E8FBFC11AFB3D403E569673DC,
	BuyCinemaRoomScript_AddMoney_m1278122F7334980075B453B7EA6EECC27A3A3339,
	BuyCinemaRoomScript__ctor_m365CBEFA85F0CF5E8B453A817DF9D3AF235E7D83,
	BuyCinemaRoomScript_U3CAddMoneyU3Eb__2_0_mA9D62D60C81D7FB9E2E973676C21BEED868564FE,
	U3CU3Ec__DisplayClass2_0__ctor_m7449648191D772A8C33A8E0EF47A4149CFE2F6C6,
	U3CU3Ec__DisplayClass2_0_U3CAddMoneyU3Eb__1_m350F6C9BA94351D6A3EA5B35E099F51CB6886F0F,
	BuyElevatorScript_AddMoney_m3EC231C6BB7817FC8DFBC35D1E3457C99B46DF85,
	BuyElevatorScript__ctor_m90E5E5586C790A825B1BF6270CBB5CE9A9A694FE,
	BuyElevatorScript_U3CAddMoneyU3Eb__2_0_m37A3D36CEA822B259E5661A546D476F73A5FFCF9,
	BuyElevatorScript_U3CAddMoneyU3Eb__2_2_mF61541E9FC3C3C1A249561AE143B0B87A5A7C4B9,
	U3CU3Ec__DisplayClass2_0__ctor_m678AE92CE04CE95D423A8E27E192CBB0EAB47D77,
	U3CU3Ec__DisplayClass2_0_U3CAddMoneyU3Eb__1_m88C5149777BA33BD4DF28DF3611D2E866B773E83,
	BuyExtensionScript_AddMoney_mF55F9788AB8A92370331969E226FC20ED65F1273,
	BuyExtensionScript__ctor_m1809A1C3071F6460F4B2ECBA3D48642E1F5F8627,
	BuyExtensionScript_U3CAddMoneyU3Eb__2_0_mB2A477A5D03B953FDA5DD981A9FB79D3F3A020F5,
	U3CU3Ec__DisplayClass2_0__ctor_m0B1537ECE65414C4C126AE03305BD31FA290B762,
	U3CU3Ec__DisplayClass2_0_U3CAddMoneyU3Eb__1_m3532FFBA3071B38537E490502A00512DFB140C3A,
	U3CU3Ec__cctor_mDB3945D9E6F3B23025C905344BD9FE34811A2DB3,
	U3CU3Ec__ctor_m82BB2D22461339A2A59E5C65A8A29D6AB44E2F33,
	U3CU3Ec_U3CAddMoneyU3Eb__2_2_m945C68211196A31DFE66EC1F9B7CA72DD01722F1,
	BuyLiftScript_AddMoney_mAD6C7B68F008CB1C7AC3669E2D34D3D9D4501CA0,
	BuyLiftScript__ctor_mE210BF5EFB1866B6C0E38E84349D296E632BCCAD,
	BuyLiftScript_U3CAddMoneyU3Eb__1_0_m1AADBEE1B28B46661646FFC38937B7A63045CA56,
	U3CU3Ec__DisplayClass1_0__ctor_mC0485871A3B34C27FDB603569EEA2B25DFF45CDC,
	U3CU3Ec__DisplayClass1_0_U3CAddMoneyU3Eb__1_m746D1E31ED2336EAC256B6DA0820BDD20D05E3C6,
	BuyObject_Start_mCD5AF81D3CEB51450F7B4ADE3E6B7D3E6D6B144D,
	BuyObject_OnEnable_m98E5A89CE1679CDFE2B12B3196824ADBA5C4D6F5,
	BuyObject_CheckLevel_mDF5AB3BB5296483FEC7642C7031295B54EF35300,
	BuyObject_AddMoney_mFF126D8C72651DB409DEBDD8CACFBB7AFAD3130E,
	BuyObject_OnTriggerEnter_m17872DEC942CA5A3AFD2444127797E865F1A701F,
	BuyObject_OnTriggerStay_mE063565E5391B8719F39273EB8D4CDB06ED86697,
	BuyObject_IsPossible_m282A0D5044DCC54F5A5218E5472C35A98A4F00BC,
	BuyObject__ctor_mF5E20725C6DD840B678E044F92E1A147D0F2E34A,
	BuyObject_U3CAddMoneyU3Eb__16_0_mB5E832AC57F4DD2D86038AA59D3B846FE5726724,
	U3CU3Ec__DisplayClass16_0__ctor_mED4B3DBA75B6C9B0B17146D07F3ACCC15945CA17,
	U3CU3Ec__DisplayClass16_0_U3CAddMoneyU3Eb__1_m95A0A191923C5BA0389419CD8ABA6D396EBB77B3,
	U3CU3Ec__cctor_mD189FE53D92F220A6167AFF5A0FF3C8FE4DB37A3,
	U3CU3Ec__ctor_m84F4C38D5FF4BCA1B973F23DF881D88C4CDF0100,
	U3CU3Ec_U3CAddMoneyU3Eb__16_2_m237B9C5EAF6AEC01F3CBFD8C5325A557871E0868,
	BuyRoomScript_Awake_mF81276719534588540BA430FC47526377FA9879A,
	BuyRoomScript_AddMoney_m080162E019310319B21C951D266CADA994C5E043,
	BuyRoomScript__ctor_mCAF7799EB5032D40C8BE348C99CF4E9A6EEEE1D5,
	BuyRoomScript_U3CAddMoneyU3Eb__2_0_m786EACC84C1011057EDFBD54F8B5B35D8C5B356C,
	U3CU3Ec__DisplayClass2_0__ctor_m3DBCF6F872803E09ED2C154A40125C322911F892,
	U3CU3Ec__DisplayClass2_0_U3CAddMoneyU3Eb__1_m061071241B5E359D866B3C819654963F52CBE69E,
	BuyScript_Start_m26142813D4BFC5FA69CD711D9A7BC8ADE83AFC8C,
	BuyScript_OnEnable_mC0EDFC073A9E24CED4618A0880AC5EAA209C9D79,
	BuyScript_CheckLevel_m27D9A7403EFC304D3445F3BDB0787CFAC06CFA3E,
	BuyScript_GetType_m5F786B22F359F2C85859BA71DC68420680B9022D,
	BuyScript_ToBuild_m17A499DE53168D01C85DDC7B25C49F7577E30C8C,
	BuyScript_AddMoney_m6C4C5215C173BB8CE4B57A4AED3986FC506552B7,
	BuyScript_OnTriggerEnter_mEDE82623EC0981C9589A53F6563FED55F0572341,
	BuyScript_OnTriggerStay_m18D811E8672CCE0DC23BA78C1829B7A50DB790DF,
	BuyScript_IsPossible_m20BE5EA29DAB2E3F261F0896C6E7178B853A0EAF,
	BuyScript__ctor_mDAA6AA19D6EF7DE7982B1BF2A21CA1DF1FE4D5A5,
	BuyScript_U3CAddMoneyU3Eb__19_0_mF704CCDFBC57CE5A1A112195EFA60AA9467D1E77,
	U3CU3Ec__DisplayClass19_0__ctor_mD224750D3621E910C3E1AC3D5D7BF72B96BCC63F,
	U3CU3Ec__DisplayClass19_0_U3CAddMoneyU3Eb__1_mF07D6F9B2BE209B9BA19F7A25DA8938B688E378A,
	U3CU3Ec__cctor_mC95221003B4A8FFFB1B88442D22793538D51A786,
	U3CU3Ec__ctor_m37A877214FBF48663F1630D3A4B05271E81C1850,
	U3CU3Ec_U3CAddMoneyU3Eb__19_2_mD64E787B6ED4EBFF15B8F5ED3C8E4CBFC486E127,
	CameraController_Start_m8EAAC188934ECCBD009EC00751280DCFF4D96C71,
	CameraController_CinematicStart_m15328A35F2E834DC2FAB8BBCF0EF86D238B69317,
	CameraController_SetOldPlayer_m5EC044A2D8E08459F02B248F1E1828512E2823B3,
	CameraController_Focus_mF4A2B46B7A1DD2151873E9C6DFA59E283F39F20A,
	CameraController_Return_m32CD15A9AA00A47226ABDB175E3BE8208B059344,
	CameraController_Update_mBCB871B23DBA60444D43AB56D780478BA3D355E6,
	CameraController_FocusOnPlayer_mCED2D54B2BF4113F5A6BD30278885A372CB05E03,
	CameraController_FocusOnPlayerUpgrade_mE3A4B6F39A3DAE21999AAC468EE6457E51424E75,
	CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950,
	U3CCinematicStartU3Ed__14__ctor_m44EF82BDAF1340EE5A8BAFDA57E0A56D64D5ED4E,
	U3CCinematicStartU3Ed__14_System_IDisposable_Dispose_m44FA77E1B713129830BE0576A58EC051B695A58A,
	U3CCinematicStartU3Ed__14_MoveNext_m5CFD65976A85DBE7937CF65DDC8E37AB028EB3E1,
	U3CCinematicStartU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m444FF95CD84A5BD4F2234AC8345B141D9262E61D,
	U3CCinematicStartU3Ed__14_System_Collections_IEnumerator_Reset_m78AC4C61EF75DF09F60AD929CC2602BD2840A6BF,
	U3CCinematicStartU3Ed__14_System_Collections_IEnumerator_get_Current_m263D4123D2232DFA5C773E03A3FA87A1A4AD7CFC,
	U3CReturnU3Ed__17__ctor_m752E78B67633B4F238789A7A065302755AC9B089,
	U3CReturnU3Ed__17_System_IDisposable_Dispose_m4536A981A107937700EBB7924AAAFE42AE231EF0,
	U3CReturnU3Ed__17_MoveNext_mFC4FFEB32AF98C723A1F8156624F2FA6A46ABEB6,
	U3CReturnU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m47572178C0943DFEBB5B84C7A25C705A5A9B9F0C,
	U3CReturnU3Ed__17_System_Collections_IEnumerator_Reset_m412E16D79488836E425A1E01636F450C737C05D7,
	U3CReturnU3Ed__17_System_Collections_IEnumerator_get_Current_m622F43E1D01A668C0BF7FA2CDFB82AE2F3E2EDE2,
	CameraSettings__ctor_mA590BD08F145ACA884C965BD8B7DEE27994727D7,
	CinematicPoint__ctor_m6CA656FF4BC79692381A34275420A8D0074C6705,
	CashierScript_Start_mA31E09F13D542332527323A9E2BC9B1EB23E3ED0,
	CashierScript_DestinationReached_m5847B1052553CABB0360E740038A56C492E322C5,
	CashierScript_Update_mA60527083EAFCB0F6D2E0291E84FE9D6B29983E2,
	CashierScript_SetShop_m4269574AEE6B22DE443779EE4643ADD43DA33083,
	CashierScript__ctor_mAF0E8D13ED7871036F0D6E035B488D6EC98B7F2A,
	CashierScript_U3CSetShopU3Eb__8_0_m34761854358CE75A4FA38A4547DA89B0C7EE107C,
	ChairScript__ctor_mFFB35582C41C25AB6AAFB935B1274FCFC04F91CE,
	CinemaButtonScript_Start_m19415E75DA5260BCF1224CBDF8C179113016DD40,
	CinemaButtonScript_ActivateCircle_m6E6D3760E0ED7AFC0117993B1629FABCB6CE2F6F,
	CinemaButtonScript_Press_m613553AA8963584ED216AFF73F90EFCE0F1257D4,
	CinemaButtonScript_Pressed_m103FF17E9BA87BAC02B2A6C4067B64D463D0E1C1,
	CinemaButtonScript__ctor_m48209EADCC61D02CCEDE224D03797F2A22EFD4BD,
	CinemaButtonScript_U3CStartU3Eb__3_0_m7FAE8DDBF753E1C860C38764593F36D9B0FB419C,
	CinemaButtonScript_U3CPressedU3Eb__6_0_m58BF97E19AFDAD61CB2605C86990ED731ED22DC5,
	CinemaCircle_Start_m5E2DBC6869700BD3B62782FE9A1D3C597D071798,
	CinemaCircle_Activate_m1C32A80D8DD0DE864A0F4B4C537D10BBE0C34027,
	CinemaCircle_Update_mAC1FFD348CE2FC1979FF3C2926B96C2D71C0CE07,
	CinemaCircle_Pressed_mDC6523DE37ACECA5CCDC505075C950DE77C9F373,
	CinemaCircle_OnTriggerStay_m8116E94276F41172C158B771B351AA531B5F2D25,
	CinemaCircle_OnTriggerExit_m5AD86301B853DAF2B92305FC1486666AA567198F,
	CinemaCircle_Scale_mFB3DE94ACD381B0BBD082436C535F673B51B7177,
	CinemaCircle__ctor_m1CA201587EA701979BB1630E8445D37018435FF9,
	CinemaCircle_U3CScaleU3Eb__15_0_m5770C2587AD2005B1809A7AEED4539BA8AC34C89,
	U3CScaleU3Ed__15__ctor_m51A461E14A488AC5BE7836B458306116F7968F2F,
	U3CScaleU3Ed__15_System_IDisposable_Dispose_m402EFB2637540BB1A1EF7633D1170900312E2845,
	U3CScaleU3Ed__15_MoveNext_m08658C7371E32001F4EE0A403AD8A8F117AFE913,
	U3CScaleU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCFE4A8D2C1ED7DAA84534A4A0B3F972A6E7AA9A8,
	U3CScaleU3Ed__15_System_Collections_IEnumerator_Reset_mC16F30516E1BF5AB20B35B103733106CBD5C2E70,
	U3CScaleU3Ed__15_System_Collections_IEnumerator_get_Current_m2345A6EC0825B763982C8E617DC0D7DBC96D157E,
	CinemaRoomScript_Start_m9F9EA215C0E779D800EAEA1DB4BA341521C6E5B2,
	CinemaRoomScript_GetButton_m381EA95741643819D0C730CEDF3B2DC0068FC336,
	CinemaRoomScript_IsUsable_mBA213F001D7C65EEA9D415A70A3B70471E4C4F45,
	CinemaRoomScript_Update_m99A0B7EA53B2F3DE93BADDC883DC7003C232BBAF,
	CinemaRoomScript_Unlock_mFA814EF78EE6195D41EB3FD014F2E32AB605B09A,
	CinemaRoomScript_Recharge_m45603054BEEA8373D47DDA7D63CCC324CC036EF9,
	CinemaRoomScript__ctor_mFDA8C99ABF54DAD3B23DB68A6A02ED6EF7EA6CD5,
	CinemaWorkerScript_Start_m0EE1EF66CFD2CAFB989EB97D869B4A553D680C00,
	CinemaWorkerScript_Update_m9F024D865598F6104FDB64EED062FD9FB606E062,
	CinemaWorkerScript_FindButton_mE64C7E11654381E0A77C1448F0DBB7BF9B81947E,
	CinemaWorkerScript_SetShop_mB6E1B47FC8824BE27B512B25E3AA81FCD5E50430,
	CinemaWorkerScript__ctor_m2C791E6BD78DB7D5B0617312233C9DEC10214431,
	ClothRack_Start_mA4488BBEC58AD4365A76C788D7B6A5C03A0D94F8,
	ClothRack_Update_mFF9BC582B2942A0F2735E6F0BCC3F1F8382FF4EA,
	ClothRack_GiveItem_mE2752161182B7897C3D07E32AAD1214E560AFC63,
	ClothRack__ctor_m8EA4BC0D0975910DE2499604836B7285E9144567,
	ClothRackCircle_Start_mCE2890210CAB3C282EFFF76E2E7552CC3CDD0096,
	ClothRackCircle_OnTriggerStay_m2A4493408843FC59D1BFF553BFD7425055382EE8,
	ClothRackCircle_OnTriggerExit_m71B5EBC319AED553B3E629BC3574B476DE9CB3B2,
	ClothRackCircle_Scale_m58A23A40F4431DB0D6E1D89FDBD46475EA0AC2BF,
	ClothRackCircle__ctor_m19C69418BFB9E7FB9DFD2CC1F5FF4757D9352787,
	ClothRackCircle_U3CScaleU3Eb__5_0_mD2AE36CCAFC56ACDD1E0D45C07CBFA9FAFFBE228,
	U3CScaleU3Ed__5__ctor_mA4947C88BF9990A64E9ACC3E2654EA277F75B2E1,
	U3CScaleU3Ed__5_System_IDisposable_Dispose_m6010638C34344AEB6F6527BC3B08DB860158AA39,
	U3CScaleU3Ed__5_MoveNext_mA31F8C61D3CB162CD68C38E24CE649B2530C74EC,
	U3CScaleU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD4A6F1DC51436A3A9BA93606432E5973CCD13DF9,
	U3CScaleU3Ed__5_System_Collections_IEnumerator_Reset_m7ACD7C5B7704E162945F859E7A3F88FF00E0C6DD,
	U3CScaleU3Ed__5_System_Collections_IEnumerator_get_Current_mE27B88D28235B43FB36BE1DF1237278F41F77596,
	Counter_Start_m722A97F6D6947030F4480E84D9E1C8BD5C9CD0EF,
	Counter_IsAvailable_m46664840B3A2DE0397EA8228D15671280FE61A5C,
	Counter_GetPos_m9651A33F0CDA3AB2EDDE2ED37538BD0FC2E07C19,
	Counter_GetPos_mAD90C47F7BC9B15AB3F0AA64F5B217090D963228,
	Counter_AddMoney_mA157E6D27397E6570FA69369E9DEB840615AB7D7,
	Counter_RemoveMoney_m4548760F55B6FBEEB504E4E818F9638E481A6180,
	Counter_MoneyPos_m3570829F786C4509E0042B1EDCF54336503DC9A2,
	Counter_Update_mF6CD53B46094E9543E0C96FA786173018A0307FC,
	Counter_AddQueue_m040ABC28D505FC2B13369EF29C4EABD7F6C0B3DA,
	Counter_RemoveQueue_m815EF861521795DCC67C1220D2E90D1007F437DE,
	Counter_UpdateQueue_m218CF6073FF759CECFDC9316865E34262F1054CB,
	Counter_UpdatingQueue_m9CC6A67522046A53D3EBBDD9713B75F2CAC357E7,
	Counter__ctor_m8268512C5E82F5E698855F4CC1B317750CF97558,
	U3CU3Ec__DisplayClass13_0__ctor_m3E7FD8A23B35799DC737450E93482F1EC29AA6CA,
	U3CU3Ec__DisplayClass13_0_U3CIsAvailableU3Eb__0_mC6A31879E770929D2131DE5FDD8C1486769CC6D4,
	U3CUpdatingQueueU3Ed__23__ctor_mB574924CC746D7A5B66D07DD74A5294002777080,
	U3CUpdatingQueueU3Ed__23_System_IDisposable_Dispose_m259F04593E769354EB4EFE947CA1E763BB36E36D,
	U3CUpdatingQueueU3Ed__23_MoveNext_mC525E5FA3A7888294D7CC064DC294E97FDEBAE2C,
	U3CUpdatingQueueU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB61B18227D0BBA714F85FAA5B790B4ABDC7EF963,
	U3CUpdatingQueueU3Ed__23_System_Collections_IEnumerator_Reset_mC2461AD37C3AA4B0A9C1901CB779041BB7C2DBB7,
	U3CUpdatingQueueU3Ed__23_System_Collections_IEnumerator_get_Current_m3A474030513BD3EF7299605FE48E309BEE56BCB2,
	CounterCircle_Start_mF227095DDB961B7265A658CCA7600CDA5BA80305,
	CounterCircle_OnTriggerStay_m902263A4DE8EAA6A9566FBE6BC8318412D2FA270,
	CounterCircle_OnTriggerExit_m33A804848A55A70EB103DFCED17EC19FA060067D,
	CounterCircle_Scale_m8AD81A705E6E040EA565BC0A12FDAE3B5A4AB51D,
	CounterCircle__ctor_mC7ADC03D5C38F3FCB19B6F745E6928388D3E9554,
	CounterCircle_U3CScaleU3Eb__6_0_mF44D430E1085E45DB15020F98F55F535DB1DAA6F,
	U3CScaleU3Ed__6__ctor_m27BE73B2E1430F0A6C1EF653CA6957539BBC4F3F,
	U3CScaleU3Ed__6_System_IDisposable_Dispose_m5F15E402705C6893C39C89B634C55F77E6E99F04,
	U3CScaleU3Ed__6_MoveNext_m69EC4FCCA4BC3A235DE3498BB0AE227132D5FF62,
	U3CScaleU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1B92559AA8767154408218D1AA05E1C4F7856587,
	U3CScaleU3Ed__6_System_Collections_IEnumerator_Reset_m64F59C2286345D2235A3DA9F6F886B4DCAC69D45,
	U3CScaleU3Ed__6_System_Collections_IEnumerator_get_Current_m7F1813A91D4D687B8B9478E7670D3E7983E34751,
	ElevatorScript_Start_mEF94744877F2AB897097805ABE7A4D3B8384F46C,
	ElevatorScript_Spawn_m2A0195BCC40F141D9A970070205478F6FE9A1E97,
	ElevatorScript_Activate_mDB8E03EF84B99B177F7334857C782579D7026C97,
	ElevatorScript__ctor_m7A58CCB368E2D327E763D5D177CA03DEF4C96182,
	U3CU3Ec__DisplayClass5_0__ctor_m77B6DD5B9DA74C0E0FE247321BE58F4D959A5956,
	U3CU3Ec__DisplayClass5_0_U3CSpawnU3Eb__0_m654A8DCD4ABFE3036E23CC3AA545EFF76051B859,
	U3CSpawnU3Ed__5__ctor_m206892584C6470C5DCB963241CEC2FE4EED93AF0,
	U3CSpawnU3Ed__5_System_IDisposable_Dispose_mFA193611273476C4D87F274DF7B940B7E00EA289,
	U3CSpawnU3Ed__5_MoveNext_mAB45AE60CC18439D0DE737D8607A623C37D23D35,
	U3CSpawnU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m216228D74ED7555290A295A8DC61140FA6159733,
	U3CSpawnU3Ed__5_System_Collections_IEnumerator_Reset_m0BA83BB839425B8C8ABA72FC9C378F7A5FDC2030,
	U3CSpawnU3Ed__5_System_Collections_IEnumerator_get_Current_mD8944A100B50492800EF42D4AB3E69EA1B731F43,
	EscalatorScript_Start_m00F43B5A19FDA5090EB29D6AB67C64F95A8E430B,
	EscalatorScript_Spawn_m3EDCDD37B944872FB50BF4D8897ECA5E925ACA3B,
	EscalatorScript_Activate_m5160BCA945DCA4677C5D29E6BF9F44E18CD3D5B1,
	EscalatorScript__ctor_m3D3E67B03482FAF01DECB61973C058BF084C936B,
	U3CU3Ec__DisplayClass6_0__ctor_m358FC845C587B7C06EFAC70AD892313EDF0D489E,
	U3CU3Ec__DisplayClass6_0_U3CSpawnU3Eb__0_m06470CAF22714A9535C4108D161E0DC372A15A2A,
	U3CU3Ec__DisplayClass6_0_U3CSpawnU3Eb__1_m0426B8E2A2DBDA39BEE641EECBA853CFFC1FCABA,
	U3CSpawnU3Ed__6__ctor_mFE65502D64A3E342D5AECEB3EBEC013F3DB364D8,
	U3CSpawnU3Ed__6_System_IDisposable_Dispose_mF4EC0ABC8F100E1C5B3554D7356E4051655EDA12,
	U3CSpawnU3Ed__6_MoveNext_mA4D8E86FEB7C5CA5D18F85F1AFD7848FAB624F5D,
	U3CSpawnU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1E30B3EB5849E05739CC91A545B84A70F411DA34,
	U3CSpawnU3Ed__6_System_Collections_IEnumerator_Reset_m2803EC70E84CFE9569709CD2B941F067D2F2D753,
	U3CSpawnU3Ed__6_System_Collections_IEnumerator_get_Current_m2EEC10E4791AA3C1B906A0B32287B9F581063356,
	ItemRack_Start_m5FC92EE37D16FE2CEBBA4684DA71B9D4BB2E91B3,
	ItemRack_HasSpace_m0980AA08BF4551F9B689A44D8E099DE6DFA0C6B3,
	ItemRack_GetChair_mFAA10C3878769CD20CF6FAE9F476AAB38F9A1078,
	ItemRack_GetPosition_mC9733E54B0F09775A6323D724971E123D70379B6,
	ItemRack_GetItemPosition_m6D70B35BD135D8C58716E6946355680BAB48C0A2,
	ItemRack_IsUsable_m3D1B28B4214CBCDFAA8B3819F416F17269BAAB83,
	ItemRack_IsAvailable_m73CD7237F6FC23423ECA4FB1FAF424F77E7751ED,
	ItemRack_GetItem_m193BAB58FEC1867D755A9C87429814FE90E84535,
	ItemRack_Update_mE227C9A5C12ECB40C11C156C41A859C29C817EE8,
	ItemRack_AddItem_m4D022C766E7C9BB11E15593F9D375437EC5D8BA7,
	ItemRack__ctor_m3E5AB73E6BFD0B34AA52F45C13E72A472646A192,
	ItemScript_Pick_m9954CD321DC9612EB2524D1EBF4CB610EBCD1556,
	ItemScript_UpdatePos_m72912BD6014DB3B9A06DC56B9040790A6C2D8351,
	ItemScript__ctor_mD0C27A82864B25A6B2E989140B6FD0CC2FE88AFB,
	MoneyScript_Start_m53748A4F16BB2B1FAF30002DE69D9DBA92FB1D48,
	MoneyScript_MyUpdate_m0ED65F5409966B6BB8C002A3458579EFEEF2FE60,
	MoneyScript__ctor_m76FCB94213B6F1EF36052C0132062EC1C7BC9546,
	MoneyScript_U3CMyUpdateU3Eb__4_0_m106284024A76FD714603F367603D7A77DFFCAB32,
	U3CMyUpdateU3Ed__4__ctor_m565FF0DADDAFBB55C9F225FA39B23F0BDBE0686E,
	U3CMyUpdateU3Ed__4_System_IDisposable_Dispose_m6B0715EA0068867A931E22F1DEAFB5886E3BD432,
	U3CMyUpdateU3Ed__4_MoveNext_mEF417C46355BDC6E8FA3BBD94F4DAD7352EC1059,
	U3CMyUpdateU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9A2E8C750CCDBB2D6C7261A57CA25951EEC69F55,
	U3CMyUpdateU3Ed__4_System_Collections_IEnumerator_Reset_m6D11D612CC0E3D99A8476F5D1DBF31A6E3BFABA8,
	U3CMyUpdateU3Ed__4_System_Collections_IEnumerator_get_Current_m4FD802A1AA967B03105CCE6CF699DF71EE593AC0,
	NavmeshBaker_Start_m460AAC2128632A2D23ED8C827E219E159C7474B0,
	NavmeshBaker_UpdateNavmesh_m3B6A08F1A12F9189BFF1BCA9C2B3298D40304462,
	NavmeshBaker_NextFrame_mCEAA54CF6E713EEBE7781289012DBF5569859521,
	NavmeshBaker__ctor_m0F0BE8C2587A45F6564CAA0253586FB8F0DBF568,
	ParticlesScript_Start_mF14388BF1DC88ED4B76EB5AABC5C657296D22FC3,
	ParticlesScript_Destruction_m70B03C8AA17B8935FB07C2BC1CABC2B8345CB33B,
	ParticlesScript__ctor_m30CA993ACE4C0477180C6344406A7F45D40772E9,
	NULL,
	NULL,
	NULL,
	ShopHandler_Start_m216E771D9E39F14582C6B330DCD953AFF407A165,
	ShopHandler_GetShop_mDDE75A8F17DA06B0D5353FEABBE00C01D95D7E5B,
	ShopHandler_HasSpace_m8E53C73EAEFFA79580B7B3572AF9024778E6208F,
	ShopHandler_AddRack_m0CCC99D30547C7B8AA6F8246341A4EEAC9B02101,
	ShopHandler_ShopCapacity_m85417F0FF03F4BAEA195E230D018B40AA6CC29C6,
	ShopHandler_RandomShop_m56963F71778390021FA07FE17154AA0EA77E5C54,
	ShopHandler_OpenShop_mF0A080B507E1E399AB858274036ED3250B7870A4,
	ShopHandler__ctor_m50ECAB0D3D5CE67183BA5495237A6B28348B34C1,
	U3CU3Ec__DisplayClass2_0__ctor_mCDAEBCDEDB9E359A6B7773CD7126A09907336C93,
	U3CU3Ec__DisplayClass2_0_U3CGetShopU3Eb__0_mF76D81F1673E75FAFAB82829583E1AD44092BD30,
	U3CU3Ec__cctor_m54E2F9BF65707E7CBE0D22DD487672B96805086F,
	U3CU3Ec__ctor_m48F577BAE0E555476F9B91E61BE433F7861BD56B,
	U3CU3Ec_U3CHasSpaceU3Eb__3_0_mEFA4495AF50BCE7105033B91945D78F822E00352,
	U3CU3Ec_U3CRandomShopU3Eb__6_0_mC0B7D96D9B1B1A0E627CAA11EE239404C55D695A,
	U3CU3Ec__DisplayClass4_0__ctor_mA5F5062D7E2E5029306FB6E84F438C0680E124A4,
	U3CU3Ec__DisplayClass4_0_U3CAddRackU3Eb__0_mA9B9E8B62C17ACD119CC714D793A49C5DDC81D8F,
	U3CU3Ec__DisplayClass7_0__ctor_mC4F025AB6FB440BA0ACC2A5A59345158E512348E,
	U3CU3Ec__DisplayClass7_0_U3COpenShopU3Eb__0_m4AE32DCCA2A3C4C872F3410DB78CAD97042B5D02,
	Shop_IsAvailable_m54D4218B84B85442D9577C585DB53DECFB13686F,
	Shop_AddRack_m1475BFD3AC253D53725E0186AA52741D11A9780D,
	Shop_GetClothRack_m43245678AB8582E088C721EEC1D43BA0D5E14B81,
	Shop_CinemaRoomCount_mDE3F1D41BC67DC5F3FEC00BB7EAE29AFC4234890,
	Shop_GetRandomChair_m60A0F71E5F69FD8BB571661607FE124AAB995F69,
	Shop_HasAvailableRack_m5E10ACBA3B6B22713E8FD1F49C9707B3F0DF136B,
	Shop_GetRandomRack_mA7FB42CE4B92CF2B51BB6F2ECE2F759E6C53F567,
	Shop_GetEmptyRack_m65EC8AC2590527342B7239FE329789A6DBA8B0F1,
	Shop_GetCounter_m34469F7317189BA531D60BEF38C8673E3B7FE137,
	Shop__ctor_m7BDEDC38368666EB9081CB3C46CE0BDB7380566E,
	U3CU3Ec__cctor_m6F1BE5DDA14D9AC9F1ABC9DD6E1166423305B262,
	U3CU3Ec__ctor_m4B05EC1CB7CDE6DBB88001C0D204AC393368F1B2,
	U3CU3Ec_U3CHasAvailableRackU3Eb__12_0_m73AACD3E595E93F80A348AA7603AD64BCE5F3C8E,
	U3CU3Ec_U3CGetRandomRackU3Eb__13_0_mC1A5288B122E79E051E4435D1AFBAD8ECC6D77E9,
	U3CU3Ec_U3CGetRandomRackU3Eb__13_1_m911FBCF6AE2CB69FAABC1C51AEBF55E5A932ADDD,
	U3CU3Ec_U3CGetEmptyRackU3Eb__14_0_m71B552307398996116A3254461E9558FFCC5538B,
	U3CU3Ec_U3CGetEmptyRackU3Eb__14_1_mB527FF191252677AB6F8C6332F77473ECEF7D15D,
	NULL,
	NULL,
	NULL,
	StickmanController_Start_m900753C0E60D73950CE34CE0FD39134BA803FC6F,
	StickmanController_IsMoving_m63F4580982FEB62DE4058396A767BF0CE57E5E3B,
	StickmanController_IsFull_mB66A12A14743F2157E2B1BC9C3A33C9FD3BB05A3,
	StickmanController_AddSpeed_m3FECB0BC52CE27535DD95537C78264BE103CD57A,
	StickmanController_CanMove_m0ABC1DA0017050E33EA224A2B07C74227E4C685F,
	StickmanController_Update_mF57AD44E157E9B926191F94CB8B204BCAD0D1D2E,
	StickmanController_LateUpdate_m93B23327466F42F471C983D80BDD0430E68ACD0E,
	StickmanController_GetDollars_mF21573A7B5E6991DF6BA4A1C24A8CD1942356CDE,
	StickmanController_EnoughMoney_m5C885DC478B03A328C2E05AEBB21D2E8FFE7869E,
	StickmanController_AddDollars_m14EB20CC02B008DEA8ACD472B3ACFE9D1FA189EF,
	StickmanController_RemoveDollars_m4ABE15D4EDF2C558A465189F5C7F448C21DC2B95,
	StickmanController_AddingMoney_m30C60FE997BE1430DD7AF73CA599B3705EEF7D72,
	StickmanController_HasItems_m97B4C31056D2C521CE467D112888A1E6AC8C2B6A,
	StickmanController_HasItem_m01250BF6DBAA576010CE0109303CBC5690D58976,
	StickmanController_GiveItem_m813BC5BB93DD4BD6D525753E42E18FA5A80A25B3,
	StickmanController_GiveItem_m59F21BB2AC8EC45EA1D34AD3CA92CCF05D16C30C,
	StickmanController_AddItem_mD7BF5C35E6FCA7605E11979F852B8583D563A2E0,
	StickmanController_GetItemPos_m1A62195BB8BEA791AC9B941BB7EA2EBC89C28A73,
	StickmanController_GetItemPos_mC80862B5266C15BB7019D752286385AEC4D0D67F,
	StickmanController__ctor_m16414A28CB5DE24803631118B2FBFF82326DD8C4,
	U3CU3Ec__DisplayClass28_0__ctor_m5A8FDAC978B06887F35F30B1FE86B4C7B36362A7,
	U3CU3Ec__DisplayClass28_0_U3CAddingMoneyU3Eb__0_m67F62D748B80E9249D374CBB221BE22DA9444FF7,
	U3CU3Ec__DisplayClass28_0_U3CAddingMoneyU3Eb__1_m5ECD4A03C60AA9FB71BFE31A32F785FF0A1D9307,
	U3CAddingMoneyU3Ed__28__ctor_m7F0F58E1A3495DC0CE54AEB10D24FCC2A00F1E6E,
	U3CAddingMoneyU3Ed__28_System_IDisposable_Dispose_m973355EFAA3425AA6ADE455F7809142A9741BE04,
	U3CAddingMoneyU3Ed__28_MoveNext_mEFFF9371FFD106E6BB18E3A63211D94CFD75F130,
	U3CAddingMoneyU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m21CB6729066D7448E99028EAAFB2215FED673FAF,
	U3CAddingMoneyU3Ed__28_System_Collections_IEnumerator_Reset_m498B9ED78DD0DF3B292046396E625B9931258210,
	U3CAddingMoneyU3Ed__28_System_Collections_IEnumerator_get_Current_mE1CFE25B56300D9135B7797CC714E43B96039572,
	U3CU3Ec__DisplayClass30_0__ctor_mDB4AFA0848F0BC47B6AD077D2BF42BE517C09323,
	U3CU3Ec__DisplayClass30_0_U3CHasItemU3Eb__0_m7EFBF6197856FDB625265F5B52A15519B9FD11EE,
	U3CU3Ec__DisplayClass31_0__ctor_m10A46C5D2F642211F94623ECBD1D931D20F0588F,
	U3CU3Ec__DisplayClass31_0_U3CGiveItemU3Eb__0_mCDD72F2529F6F61FE42E0561F5DC73E632213EB5,
	U3CU3Ec__DisplayClass31_0_U3CGiveItemU3Eb__1_mD8F455CDAE7200BF4D658D337CDA026C29999422,
	U3CU3Ec__DisplayClass32_0__ctor_m3F5C3AAE304089E7AF4B0440412B58C784E760C0,
	U3CU3Ec__DisplayClass32_0_U3CGiveItemU3Eb__0_m565BB93B9652D0FD450CCB699CD2C5DCBF7CAB1C,
	StockScript_Start_mE13A05F6B931BCE253B5FA3836B509C4A727A838,
	StockScript_Update_mF0240342E5422546E6EF41F01E34F977FA2C94C9,
	StockScript__ctor_mBA0540617D36C189A82DA4EAB5A981FDB2080E68,
	Table_Start_m7C9368D59EBBB800C434042C9C7C4D2DCAFABDFD,
	Table_GetPosition_mAB0F56C58B829DAECACCB53976A4AADAF5ECAA86,
	Table_HasSpace_mA6FD4BCF5A15BC95C0DCB19CCC22074A1BD29E4C,
	Table_GetItemPosition_m6B94E00DDD5172BE563B46B0415970D2F0293BFE,
	Table_IsAvailable_mD0F1452B03796455136DF67D9F934CCD0A5486C4,
	Table_IsUsable_mCCA41D548868D81BF46B309D76CFA2D2CE973EC8,
	Table_GetChair_mE91B023B01F093F36E8CCA7339341502877211D1,
	Table_FreeChairs_m58E9992D27C2800929E8D7103C73FBD70B9CFE12,
	Table_GetItem_m2A1CECD9CDE6D501038CB345964E8311FB40433A,
	Table_Update_m528BA3D6E5DF9B76CEFC6969C1770D1CD304CB16,
	Table_AddItem_m4040A91B13645042EDB6105E04373295DC08E05F,
	Table__ctor_m45402BF067520AC46B9B7FA279D9B96E7515A3C8,
	U3CU3Ec__DisplayClass11_0__ctor_m1E563247B540DAC91869420E24D584E62FE72106,
	U3CU3Ec__DisplayClass11_0_U3CGetItemU3Eb__0_m13FC0A0E5612D33760DDE82CE1D4D5F5C7960876,
	U3CU3Ec__DisplayClass11_0_U3CGetItemU3Eb__1_m90F508A82378F65596C8E0810EC611CFAE08A7B3,
	U3CU3Ec__DisplayClass11_0_U3CGetItemU3Eb__2_mFA64B10D8338EC552126C9A890F7D1866A185CC5,
	TrashbinScript_Start_m3EFAD5AF85D52E4FDF669AE45C823CEFEA6B2D3B,
	TrashbinScript_Update_mCCB90848C696A4627E35E076185A4F9A276304F6,
	TrashbinScript__ctor_m47C031EF4FF95266A5641D91CC0CF2839690202C,
	TutorialHandler_Start_mD7B652D3048FD174F5B974AE27D760A86EF70F31,
	TutorialHandler_QuestIncrement_m62B0E9210C008A55D67B59E00DB56D7D9A507773,
	TutorialHandler_CheckQuestsCompletion_m950D95ABB859B3DC185B34AED5023BF4A5318A44,
	TutorialHandler_ProceedTutorial_m75F77321226CE4BE7FAD2C96C7FB85B518282717,
	TutorialHandler_CheckTutorialStatus_m72E63B8F2B681CB04425FB1C4E1F4EDA3A4E06B5,
	TutorialHandler_ShowArrow_m9CD5048B808CF3A98A9F16D0A91FB8343A6F9B0C,
	TutorialHandler_HideArrow_mF4C43F15F3599F60DCBF27489A6B3D54562E7721,
	TutorialHandler_Moved_mF88C2511A377DBB486EECF1589C71A131BBC5AE6,
	TutorialHandler__ctor_mBE63E8D3D69F6EDF6BC873D42BB7F1B9478D9420,
	TutorialHandler_U3CCheckTutorialStatusU3Eb__14_0_m5E4C75994691178EC2E865207CCEF07B9D4C6FF4,
	TutorialHandler_U3CCheckTutorialStatusU3Eb__14_8_m90BFF70C8202B97231F5473EDC17129948DD00DB,
	TutorialHandler_U3CHideArrowU3Eb__16_0_mEC1563FC02D4FB86EC384D41FC0622FAD116612B,
	U3CU3Ec__cctor_mB609074DAD8F036800CEA91CF112D0D67A977F58,
	U3CU3Ec__ctor_m59F1DFD70543F1D32332F26CE5887E55923C1CBA,
	U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_1_mB5B208D46BC07940EE073B98C205EBA38645FE6C,
	U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_2_m74242D6FC8692AB47298D34BE1319E2241D74B88,
	U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_3_m3AF90F02442E62078F4CC940FE7EF7874A42AE2C,
	U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_4_m5BB35727DA0AC671904E17054B2EAFD98AA2B538,
	U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_5_m3D8B824D80FE3166E34F729DFBEBB071D98531BE,
	U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_6_mAA72F9DEA599800198270C53027961BEA42A4AFC,
	U3CU3Ec_U3CCheckTutorialStatusU3Eb__14_7_m5F462466905AEE7402C6F813AEA2EA64BBD200F8,
	U3CHideArrowU3Ed__16__ctor_m145FD17768C0E9529F20E4ED13A7B5CFAFE2AEA6,
	U3CHideArrowU3Ed__16_System_IDisposable_Dispose_m6FB1817345E3F4B474B1ADFF3183A5F6AD6CED93,
	U3CHideArrowU3Ed__16_MoveNext_m93AD60BF5AE7828BC36072BD37D69185356D6976,
	U3CHideArrowU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD341044B7B2DCE925E1189C842D07D65BA737BD,
	U3CHideArrowU3Ed__16_System_Collections_IEnumerator_Reset_m0A2170F6B33C0DEE1D6A2A64CA338B843FDF1F1D,
	U3CHideArrowU3Ed__16_System_Collections_IEnumerator_get_Current_m3339FA789ECDF6113D9FDF41C48D81AD4AEBE640,
	Quest__ctor_m8952599902E706C78A452CE9817AC64199B12621,
	UIHandler_SetCount_m9A79BBB74FF7DC7D615D4A7764DCB9B15CDB67F0,
	UIHandler_OpenShop_m5FB9400321E0629316C77F3DED14F299F115BB42,
	UIHandler_CloseShop_m09DFC9DFCE30649C46D53604095BAAC3EF4BB836,
	UIHandler_ShowBuildingText_mCAB36CE9D4F6089415279198B2009DA1FD19B393,
	UIHandler_ShowUpgradeText_m68874532DEE3EA79A59AC0B203CA6864E32409B4,
	UIHandler_ShowRoomText_m52B1219C4B6CA5C1BA70293EC49093681F2F02D6,
	UIHandler_ShowText_mE84FE47627B60719F192D6B067A3058A2E7CF697,
	UIHandler_FadingOut_mFEDF5DF5E5FC85575EA9169D3375E5194DE62B01,
	UIHandler_ScaleOut_mF596A3C7477E908FC4659B8D165E0E65957B575D,
	UIHandler__ctor_m546C9899F081C7913F3360DA872417C6B96CF1EE,
	UIHandler_U3CCloseShopU3Eb__7_0_mD254D74058521ADA744C7AC353C03F531ED4C24E,
	U3CFadingOutU3Ed__12__ctor_m9B1A5BAEA80B35DDB5991C6621566E84FA0BE88C,
	U3CFadingOutU3Ed__12_System_IDisposable_Dispose_mB183BEC4D844C9802FC54BA5818F5F91B6B7D2DB,
	U3CFadingOutU3Ed__12_MoveNext_mF13ACB60FF65F36DE03A3CBDE630509193C6EC31,
	U3CFadingOutU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA78BB56540759B2BEBC962ECCBD9E5B26C252ED3,
	U3CFadingOutU3Ed__12_System_Collections_IEnumerator_Reset_m9C6D67A403D33404D871D941A990A6C0C9B69859,
	U3CFadingOutU3Ed__12_System_Collections_IEnumerator_get_Current_m3EC21967F19D31506FD5931D2606CEB27DC49A16,
	U3CScaleOutU3Ed__13__ctor_m609A164437154441CC04DD98B24FDEEB72BCAA26,
	U3CScaleOutU3Ed__13_System_IDisposable_Dispose_m7EC0F1CF2F10C98974EE50BACD90D15E9190756A,
	U3CScaleOutU3Ed__13_MoveNext_mC4482DC725A875A1E1C49F7A6930CC2A57DE164F,
	U3CScaleOutU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m482EC8B3A1F6D3B8E5485415EC82F23EC8BA9F38,
	U3CScaleOutU3Ed__13_System_Collections_IEnumerator_Reset_mC08E32F44D1CA222E935723B96453E08CFEF3618,
	U3CScaleOutU3Ed__13_System_Collections_IEnumerator_get_Current_m3B196BBE1A846CE2E0FF7E2DE107D725F118BC71,
	UpgradeCircle_Start_mBFA84E87AB5776C1907E5F33F8F4B490A7D98517,
	UpgradeCircle_GetType_mC1178CE8214B09023E60EEF8303E7B1521DB5EB7,
	UpgradeCircle_OnTriggerStay_mC402B79E21D87398C4753BB13E8425912556576E,
	UpgradeCircle_OnTriggerExit_m1B93CABE8D9C9385476501E706F950F844CAAF29,
	UpgradeCircle_Scale_m4935B6DF489EC8A0003A0545954DB68BA47F09FD,
	UpgradeCircle__ctor_m15A949DDEF94609E79FE9F3E4BB6D1334D946D3A,
	UpgradeCircle_U3CScaleU3Eb__7_0_m7CEDF638ED322C7796D01B502D361349611B5518,
	U3CScaleU3Ed__7__ctor_m2E43BC1442CB694C56E51252A2B12EA7075E3D56,
	U3CScaleU3Ed__7_System_IDisposable_Dispose_m1A62A2866F5D9886A22AC179BF57C71F501635A0,
	U3CScaleU3Ed__7_MoveNext_m74AA2F38D85FAF1E6A8C56926C59E8160D16257F,
	U3CScaleU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m96709E83C20F9E2B3E5B4CB6D698898C98D1134E,
	U3CScaleU3Ed__7_System_Collections_IEnumerator_Reset_m48D28CD1EDA5FDD9EAF71F803FCF34ADB1C6966B,
	U3CScaleU3Ed__7_System_Collections_IEnumerator_get_Current_m3ED9E054F327E7C20176CCCE38E8A0512198AC3E,
	UpgradeHandler_Start_mD2E184547141482BADC5E64D37480E3991959F87,
	UpgradeHandler_LimitSet_m578A43531A0BA57D4BEB0F3785C6F04FAD8B846F,
	UpgradeHandler_GetUpgradeUI_m31A8474DEE7BAA084C3792FFFC6234B77AA0EFE3,
	UpgradeHandler_OpenCanvas_mAB0F759A4726645759A51AE79FB57B4DA8633E6B,
	UpgradeHandler_CloseCanvas_m28A17812C18D874EEADA250AEFAA9F2AFAD6A698,
	UpgradeHandler_NeedsCashier_mB7D2E9EE64EC4C8E4E717FB8E0B3CC0AFFC15589,
	UpgradeHandler_BuyCashier_m27DB37A7812A96BD1D09ACE2ABF2821819E58486,
	UpgradeHandler_NeedsWorkers_mDFB950E736E03B6E0222F6AAFA2B541DAE4A405A,
	UpgradeHandler_BuyWorker_mAF7262352AFB1EC1F1FE22610289F2EBBB4A2D4B,
	UpgradeHandler_NeedsUpgrade_m970FEAA9DD39871AD99F736D854821D59501A87C,
	UpgradeHandler_UpgradeWorkers_m11DE68C7FA853CE6AFE67E3710DDFD8F6A15BB12,
	UpgradeHandler_GetWorkerLevel_m02D4C9243BF807DC849916E601501A13115E6732,
	UpgradeHandler__ctor_m76BF951BCF2C69DD48E068193BE9E0306E8CBD40,
	U3CU3Ec__DisplayClass4_0__ctor_m3DF04C5024A11294B6DB992A8FB36D20E6EBCBF7,
	U3CU3Ec__DisplayClass4_0_U3CGetUpgradeUIU3Eb__0_m3A4045851AF94F0DFB0FB8EAA252EF637C127C79,
	U3CU3Ec__DisplayClass5_0__ctor_m1A966E75655E5557A0F1A80A67053EFB5D4AAE9F,
	U3CU3Ec__DisplayClass5_0_U3COpenCanvasU3Eb__0_m6B5E908631E4B87C51E2A5F48AF6559BD5496E0B,
	U3CU3Ec__DisplayClass6_0__ctor_m33124362D15309DD00C60D5764AB582313C444C8,
	U3CU3Ec__DisplayClass6_0_U3CCloseCanvasU3Eb__0_mFB35841FD3C7981BFAB91585D42DF86117136480,
	U3CU3Ec__DisplayClass8_0__ctor_m5640922E3FEF461274DD9034FC55FE1A1B407FD6,
	U3CU3Ec__DisplayClass8_0_U3CBuyCashierU3Eb__0_m91EBA152B451C43DE7624D693172D50C7018C4D2,
	U3CU3Ec__DisplayClass10_0__ctor_mD5600A0E023AAA1A991B5A3C0C6CDC46CF81EE19,
	U3CU3Ec__DisplayClass10_0_U3CBuyWorkerU3Eb__0_mB4EFC96EF873E25D795240549AA6B13E93236EF5,
	U3CU3Ec__DisplayClass12_0__ctor_m612B016221B5BC3259A0F2599D348DE5D9592CD8,
	U3CU3Ec__DisplayClass12_0_U3CUpgradeWorkersU3Eb__1_m4244C7920BDADCA807D5FC037D584E28FB3CEB66,
	U3CU3Ec__DisplayClass12_0_U3CUpgradeWorkersU3Eb__0_m11F87A56C54898570FB735AC6D0D0F56A470C42B,
	UpgradeUI_NeedsCashiers_m4E0D99A1A4B5D7E02588FB2BAD7F402F85534E00,
	UpgradeUI_NeedsWorkers_m4690A02A7A3BB7A481C3292D7CC6DD9D9B8B2997,
	UpgradeUI__ctor_mF19A34D61D4CF0E3E4701E4CEC95E92A60193DC4,
	VisitorScript_Start_mEBEEEF329ADC5F49BFEBC6DFFD1C369C7F56D5B0,
	VisitorScript_GetShopType_m5238D30BAF04C904646C916C70BEC8BF7509E5E7,
	VisitorScript_DestinationReached_m93B469322B74A941BC668F3B52C13EEC168B8348,
	VisitorScript_Update_m664537032DAE211290BA5F5589ACE04DCD14E751,
	VisitorScript_ChangeSuit_m0BF2616D3ED1E072512B5A37044C5200419BC360,
	VisitorScript_Jumped_mB8E61206BD5A2ADC7279D9B0578456F64D743D5C,
	VisitorScript_Ate_m8C783D85D06BCE42D8C92B2DF4F0A9AE05431E7B,
	VisitorScript_IdleAnimation_mCBF67411B1D5631A445770D7D233745E2001F6A6,
	VisitorScript_ReturnAnimation_m31FFE1B1ED3B9ABB92C0B497AAB059800C2DBE05,
	VisitorScript_Activate_m26799EDC8386EF07928AC20BF4E97164A8033821,
	VisitorScript_SetShop_m603547D10AD415F5C64DA42DE07A922EE6A9DDDA,
	VisitorScript_Leave_m07290A310C76CB24F117FC0EF824F98ED31975CD,
	VisitorScript_LeavingSpawnMoney_m28B83A493B3020FF40056E6F0B9C4F419B9CA75F,
	VisitorScript_SetQueuePos_mAD7A788AF2102631C880B847E37DB2D7DB0C95BC,
	VisitorScript__ctor_m654C644B90CCC5EC6391EA7D836B934CE24529B1,
	U3CU3Ec__DisplayClass33_0__ctor_mFA6A7C8298A6250AAABF82D792A4A62D23EE50B4,
	U3CU3Ec__DisplayClass33_0_U3CLeavingSpawnMoneyU3Eb__0_mF7E7A61C8B9ED79AFD1EFE7F1F0051E4C8A4D380,
	U3CLeavingSpawnMoneyU3Ed__33__ctor_mCE03A35B1C4B6BB6B582264AA9B47417A3889AC9,
	U3CLeavingSpawnMoneyU3Ed__33_System_IDisposable_Dispose_mCC3D1AA70FEE6C5F6430D5FED7CBBE4CA36A8271,
	U3CLeavingSpawnMoneyU3Ed__33_MoveNext_m112518BD64ED3E3748E931257A96DFD2B4849FC5,
	U3CLeavingSpawnMoneyU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m768CE76B1763AE572939BFB14F5C14C4C2FA8209,
	U3CLeavingSpawnMoneyU3Ed__33_System_Collections_IEnumerator_Reset_mA1F04CC86AB05DC13504FBBB1946739BFE513099,
	U3CLeavingSpawnMoneyU3Ed__33_System_Collections_IEnumerator_get_Current_m683E9643C5396353588E129ABF8DB66890733DC3,
	WorkerScript_Start_m5720A01A17730C3D1956FC8DDF2A8ED48EABF03D,
	WorkerScript_GetShopType_m1796960FD87F3431F13B200BF72CE6004286DF5C,
	WorkerScript_DestinationReached_m3CCCAB86665C00E82499EA854BD76B2BFC381541,
	WorkerScript_Update_m7271FBFC02731487AB627F77F891F55060A5B95D,
	WorkerScript_AddLevel_mD1D4367FC17F8AF42E82623233E4DE1E69CBC9B1,
	WorkerScript_AddItem_m8ED4F5A8418B8689EB5CAF49F49D759EE02AD84F,
	WorkerScript_FindRack_mA99F74B75A4703E4D193A6B5FEFEEBFE9E3B7577,
	WorkerScript_IdleAnimation_mE821B0BAA5AB2713861AA0E3075004CCD3E3282F,
	WorkerScript_WalkAnimation_m1F2D013C72412B3742C4829595E396994EB57F75,
	WorkerScript_SetShop_mDB8C27FBA37B4ECA7777FECF379FB642BF118E36,
	WorkerScript__ctor_mCF79680AA0BCC0901A69164FDE2B20769CC11538,
	U3CU3Ec__DisplayClass14_0__ctor_m0B9226B266F07CB2B71CED6BAF41AF84AD4E8504,
	U3CU3Ec__DisplayClass14_0_U3CUpdateU3Eb__0_m1041C4F6294C71EE35F106E7BAA27353098F8988,
	ConsoleBase_get_ButtonHeight_mF81259A974C9E3C4B24AFB8D95A18F0A03EE3396,
	ConsoleBase_get_MainWindowWidth_m9D6DB2FC65DC5D7FA781E5CF2FDB945C760D3C1E,
	ConsoleBase_get_MainWindowFullWidth_m7238BF9690E4397727DF038E6B185AFC2F7A1BF8,
	ConsoleBase_get_MarginFix_m286762B25357CC839197F05CC557CCFA376B7DB3,
	ConsoleBase_get_MenuStack_mA1E88A5414EA46C243855D30F28FB58F507F7597,
	ConsoleBase_set_MenuStack_mDC687D0701EEDAD9D55A44AE9449326C5E6ADFDC,
	ConsoleBase_get_Status_m71AFE45D2F68B01846188F212D65923B5B341728,
	ConsoleBase_set_Status_mFD36D24FF2D3D6554F11859251BB325B750776D2,
	ConsoleBase_get_LastResponseTexture_m02F8A694917953E5B184AC489DBE600009451DCE,
	ConsoleBase_set_LastResponseTexture_m8ED57EA554542EB683B1484F5DDE13ED983A146D,
	ConsoleBase_get_LastResponse_m5BCC50E8189B285B0AE6244435A8A9F6E3D4CE85,
	ConsoleBase_set_LastResponse_m847D45A344585AFCFCE231CF8993E2A750C76547,
	ConsoleBase_get_ScrollPosition_m489494F56C1E8E36B530B9CEBF1973640D39A47D,
	ConsoleBase_set_ScrollPosition_m7C2D74B4FF2432875A98B2F5A70F4D02494A9C84,
	ConsoleBase_get_ScaleFactor_m54D2E9E038B321F36372AB6284799232475B37F2,
	ConsoleBase_get_FontSize_mBA25F85EA4D6916062FE3D049BDE8BF618D5189F,
	ConsoleBase_get_TextStyle_m08AB60C7174363AE850D9F15A5C606E73D766704,
	ConsoleBase_get_ButtonStyle_m28EF2E33654CE9FC915EBECA78D93778517322E2,
	ConsoleBase_get_TextInputStyle_m99CA0D3F64E54CCF5DED958ACB141D07EEFB0C13,
	ConsoleBase_get_LabelStyle_m97006D9788464D58A9BA885AD2348D784699C346,
	ConsoleBase_Awake_m8068C221C280D202F4051E0CBFBF91C77568CCD7,
	ConsoleBase_Button_m8787498ECF036B9B3B5EB6B2FF49AFA154282D10,
	ConsoleBase_LabelAndTextField_m72E1BBF75934CE747195CB87737A2D7EFC503A8A,
	ConsoleBase_IsHorizontalLayout_m90873C8D21DF82E9733E95CD43BFB72A54912B1D,
	ConsoleBase_SwitchMenu_mA4A6A237A2D4EE813268204D38391A9D2AB7BC34,
	ConsoleBase_GoBack_mA682B2317560D91C931680AA95C1AD390611304A,
	ConsoleBase__ctor_m2295736CFFF716F434C20994E95820657BA9C751,
	ConsoleBase__cctor_mE537FEF66506B08BAF97CD2B40D29210C530F6BB,
	LogView_AddLog_mF87B865A91948F6D3F59502861BF67B6354B4A0E,
	LogView_OnGUI_m6B78F78EC906C89DA0BE45F5D3C5571126542376,
	LogView__ctor_m23A534F52CC925EE10260A5EC32DECBDADE2F35D,
	LogView__cctor_m112A3FBD481C9FC1A99F57426E9D79AC9E36F226,
	NULL,
	MenuBase_ShowDialogModeSelector_mB52DA9E57B0AF80ED97B7951B1815424F939A5D6,
	MenuBase_ShowBackButton_m33BAD66D85A5FA9E564FF8CF85E8920842238BAE,
	MenuBase_HandleResult_m0CB446ED4B8BDA605B140E61A4A1C6B442765E65,
	MenuBase_HandleLimitedLoginResult_m5A42F3F12FA695D59588DCC12004870D55C4ECB9,
	MenuBase_OnGUI_m2EDD4E22A69914B99CBDF039142129959C363D97,
	MenuBase_AddStatus_mA9B44C51B6D228B6EB901EA6FDEC17B6524FF98E,
	MenuBase_AddBackButton_m546C0ED7A454CD1CC80C9BCE27E56D924E6FCDC6,
	MenuBase_AddLogButton_mDCB6003139C36CE1485D8F6C70C23BF7A13FB812,
	MenuBase_AddDialogModeButtons_mCEA0B4B8B4C88A0A8F9A7B4737B4595B0FE5B208,
	MenuBase_AddDialogModeButton_m8F24FD4F294616E73BEC80B082FADB4D73BF1AC2,
	MenuBase__ctor_mD1A153F6EBCE35B5990669A20787B391A5DEC0E2,
	AccessTokenMenu_GetGui_mAFFC7AADE6A3C5A549A15922B3933F868690FBB7,
	AccessTokenMenu__ctor_mA506557143C1CEB6F2D52ED9EECC44FB9058804C,
	AppEvents_GetGui_m4D6548C60C8A0B6B81EB16E4F20416013669AE09,
	AppEvents__ctor_m633F317D3E69F6B62705498B7790C36075F3C09B,
	AppLinks_GetGui_mEF6BABE28307C19F823198102718BF2DCBE91FC2,
	AppLinks__ctor_m2408DE5760F132BFD7437824410EE9FA14FE7F02,
	AppRequests_GetGui_mF21A92393C08E39EA4404B8AD9DE1076A42A7060,
	AppRequests_GetSelectedOGActionType_m350F98087C7EB39851FC4562007A9EC26261BA1A,
	AppRequests__ctor_m22F0E79DD38013C0846E20AC2E9F96FCCE6356D8,
	DialogShare_ShowDialogModeSelector_mCF0A9C2537886392CC684FBD4939F14C6B8A1F87,
	DialogShare_GetGui_m5A303622B0B9250A1C0E9570683CE6F5DC894783,
	DialogShare__ctor_m18343E0A2E25DD13D50F65E99F855EE5CBB4A44F,
	GraphRequest_GetGui_m04AC165B02447897B6210A4EEA01341C54A18E7E,
	GraphRequest_ProfilePhotoCallback_m377E44982A0745303405A4B2792BEAEA617DC962,
	GraphRequest_TakeScreenshot_mB6D07D0BD896A3FDA1B3A0CECD1F41A82BB71153,
	GraphRequest__ctor_m1893756902051EDCA6A648EFF3F8C79482D72F17,
	U3CTakeScreenshotU3Ed__4__ctor_mC5022BC2D6F58E67E8D34863FDDD01DB102192A9,
	U3CTakeScreenshotU3Ed__4_System_IDisposable_Dispose_m024CE39BF1690FA910DDA8A774BFC512D437756F,
	U3CTakeScreenshotU3Ed__4_MoveNext_m1BC8573BD27ED010119E112AA3BE6CA166C05D31,
	U3CTakeScreenshotU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF4F64034B62BD451ED5DB8EF972FC4B40806FC23,
	U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_Reset_m99D229E478D52F853F19ADCBCFFDAF25C148D899,
	U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_get_Current_m13E1B2CBD35D3D58C012334F0A4FD17B3930C030,
	MainMenu_ShowBackButton_m0AA293F10C340E46851503EF2B29E235FE61BBE8,
	MainMenu_GetGui_mBEAC140C4E2DC7BEE3B2F1FA3AA744770B6BE1BF,
	MainMenu_CallFBLogin_m07CFAA572C425B0EF1CDD4E7B7A906AA7DA8AD3E,
	MainMenu_CallFBLoginForPublish_m5519242C5D4241EF52CA37F78A5BCEEF18973A19,
	MainMenu_CallFBLogout_mEE96298E9614D3F79009BB034E4DB1047A7855C3,
	MainMenu_OnInitComplete_m36800A94B891CDDCC9C4DAED0CC5639190C2E207,
	MainMenu_OnHideUnity_mDE312A6C6A2FE6F756E72A64388E31F5BE626D84,
	MainMenu__ctor_m15C7560C4A0296BB1D433FA3D8B1C82568B7179F,
	Pay_GetGui_m38BDD0E07950F97403560C5AAD4D35F4ABE590AA,
	Pay_CallFBPay_m6C1243E4AA248F715366AA5E8996D25431AA2A58,
	Pay__ctor_mF524FF0E64FFA62C166094B9CFE640D276161A26,
	TournamentsMenu_GetGui_m2DB7B4FBCBB150B9A9AA56743F8AD986EAFDA459,
	TournamentsMenu__ctor_mA3069507B062E55BF40EA9C97FEDBF5C64B69705,
	UploadToMediaLibrary_GetGui_m420ECCD445E271C81786F4637EBFBB9F9C44B5D9,
	UploadToMediaLibrary__ctor_m4AA178830775ECF0D746C2C99DE10BA396FE4FB3,
	ETFXButtonScript_Start_m0F7F0CFD5169405746F313FF1D7ED1534412844D,
	ETFXButtonScript_Update_m81BD65853D34C93426A7D596C3DE2194AA0DDE65,
	ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B,
	ETFXButtonScript_overButton_m91409E8AD5D3F2F253116858FFC90E972C7BA9B2,
	ETFXButtonScript__ctor_m517511C6802BD4A71C24EB8F22F6CDB5C429FECE,
	ETFXFireProjectile_Start_m71FE79B72E21B59B68A10A40490B898D259A1E79,
	ETFXFireProjectile_Update_mA610052D76161FC9BE9184F05BC78C01D1D2664D,
	ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE,
	ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492,
	ETFXFireProjectile_AdjustSpeed_m9A00824BF1347E0F8FE0E6126CF794676B7BB8FB,
	ETFXFireProjectile__ctor_m0454A1D37EA11E608273AB3987BD6D93213A31A8,
	ETFXLoopScript_Start_m8B9F608C71269FF287FF5CF6A0D12F728446FE59,
	ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB,
	ETFXLoopScript_EffectLoop_m9BD0D9DFE864FB2692165E94270E5CFB64CBE5BE,
	ETFXLoopScript__ctor_m7D358DD45F488706D4E3340A8540A6AF526BB6B7,
	U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C,
	U3CEffectLoopU3Ed__6_System_IDisposable_Dispose_mE9D671CFBC0674F6D6F1E16BCD8DB26A1FCB4B57,
	U3CEffectLoopU3Ed__6_MoveNext_m327965464B09214DB41A74AD12ACC109A74F1DDC,
	U3CEffectLoopU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4095FEA0B6FAFD62E68FBC39B482787B6889936B,
	U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D,
	U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_get_Current_m62DB043819328D994B722601E774742FB16DBE29,
	ETFXMouseOrbit_Start_m883ED864D07ED2B013CBEC297E413AC4F7E8403A,
	ETFXMouseOrbit_LateUpdate_m88BAD2785B3447A239E1094CBEBEC160B1D5C270,
	ETFXMouseOrbit_ClampAngle_m0465F9A5E01116400F3D22596C9EFB68F949297D,
	ETFXMouseOrbit__ctor_mCCECFB7E06C2B4F0D1F93D142B8CA91738C63370,
	ETFXTarget_Start_m4453DDD66DCD94DE34E122A858EF37B3622FBDDE,
	ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9,
	ETFXTarget_OnTriggerEnter_m02835C9D449C3DF9EF0F1ED51651FBB8B81EC58A,
	ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426,
	ETFXTarget__ctor_m6D27B723D5EE302E348D7A5A7052A37FF09EFB33,
	U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1,
	U3CRespawnU3Ed__7_System_IDisposable_Dispose_m2A539129FAD324FCCFE7570356787FA4CE45616B,
	U3CRespawnU3Ed__7_MoveNext_m98CEBFB0B767AF44163EF68F42B2F00DA7C99D1A,
	U3CRespawnU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E9C4DF0C87738322C436CFF672F3C0FDD320374,
	U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617,
	U3CRespawnU3Ed__7_System_Collections_IEnumerator_get_Current_mFCD05AB83ED3E741E6D5D7F5F8B51CEA97F24FBF,
	ETFXLightFade_Start_m0D678058F25EBDBD14494760618ED99E7EED9A60,
	ETFXLightFade_Update_mE8F13E85F7C1AD93E0B9D2CE9737638E9BD340AF,
	ETFXLightFade__ctor_m1ED5D845611A6F5D0DEE7066BD50B26BCD197107,
	ETFXPitchRandomizer_Start_m59C6A78C8AEBFB7E0C1475BC3AC48D3EE0E96832,
	ETFXPitchRandomizer__ctor_m5A7D44A2501727B8D8CFA36DF1DAAD0652A78BD2,
	ETFXRotation_Start_mE170B11ECA9897944DF1D88D87CE6C393707E7D5,
	ETFXRotation_Update_mFEF375BFB4CEA01E6D71EF0CC11ADD6014784F6A,
	ETFXRotation__ctor_m819E8377B916CB68CEA35D318A4B1EFED3B1D007,
	ES3UserType_ItemRack__ctor_m2C865F575EF7F40467AE1FCFF613785211847040,
	ES3UserType_ItemRack_WriteComponent_mF598773809E4698BEF7C4CFCE60F52E491576037,
	NULL,
	ES3UserType_ItemRackArray__ctor_m722B7C131F4C412915175F8A0B819C62E1ED462E,
	ES3UserType_Table__ctor_m6775A02AA90BB1955B8D3E66C4069A2527C2146D,
	ES3UserType_Table_WriteComponent_m3647D941F1D721B8A238523293C34E074F221C3F,
	NULL,
	ES3UserType_TableArray__ctor_m4F059DD24F084D5999568447031E7BB381B3D489,
	DOTweenModuleAudio_DOFade_m33AC3DD19DD85217123B580C7A2BCF1D5A90E5D4,
	DOTweenModuleAudio_DOPitch_m9F61FEB8419EC9F62B1A60CC36914980430E1456,
	DOTweenModuleAudio_DOSetFloat_mBA2509B5C802E771D824FBF098E131475FE27937,
	DOTweenModuleAudio_DOComplete_mDFE49D8B71D95F8C3EE7568ADE0F0051DBA56323,
	DOTweenModuleAudio_DOKill_mF453317F96B7CA4F9C5344E4DF6CF2FFBCFBE538,
	DOTweenModuleAudio_DOFlip_m7F1F6E6AEA8CFFBE6FABCCAAB2025B2887E17539,
	DOTweenModuleAudio_DOGoto_m24D7C34EFC1DFA1CE96792B8584CF060830CF066,
	DOTweenModuleAudio_DOPause_m125649DA4069CA21A7D0219FC33B35B9A6B0A367,
	DOTweenModuleAudio_DOPlay_mEBD2ADDF0E4DBC462F53F1CA6F0DE8E928F3C94B,
	DOTweenModuleAudio_DOPlayBackwards_m6EBE459898E93DFB0E7FA7E959E88B3016E92080,
	DOTweenModuleAudio_DOPlayForward_mAC90AEF47DBC4B1FC509BE40FEEB9CCC92BDB816,
	DOTweenModuleAudio_DORestart_m044617D37A19DED114558F22E1AB8784194BE514,
	DOTweenModuleAudio_DORewind_mA04F3C6E68A4E888BFFB6F7B27ABAFA201266D0B,
	DOTweenModuleAudio_DOSmoothRewind_m9311EB1FF7A31892537EFC587430EE03566C0810,
	DOTweenModuleAudio_DOTogglePause_m437CA4E9EB383779006AC19D86EBE51D58D67F2D,
	U3CU3Ec__DisplayClass0_0__ctor_m160A4BE74C4A0D2D75CE2C15B1F7E5E69163C973,
	U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__0_m8C4722C8715E07655B52CF10C76179595C3DAF28,
	U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__1_m79B9F6415F81447E5D2F5BE5C0F47E39A8C66038,
	U3CU3Ec__DisplayClass1_0__ctor_m709A9EE2A6B97DD5552A583951859A1C83FA2278,
	U3CU3Ec__DisplayClass1_0_U3CDOPitchU3Eb__0_m137E279AEB9AE936DFD3C4158CED13A0C6079A37,
	U3CU3Ec__DisplayClass1_0_U3CDOPitchU3Eb__1_mF3FE1A2CC1F0A9CFD31297F1BE45C12E810DD00D,
	U3CU3Ec__DisplayClass2_0__ctor_mDBF428719391180E42C26EE06A2AC47547F13E99,
	U3CU3Ec__DisplayClass2_0_U3CDOSetFloatU3Eb__0_m367153ADF53E32C8FC51F280B628B2A2190E64E4,
	U3CU3Ec__DisplayClass2_0_U3CDOSetFloatU3Eb__1_mBCC8DF43E3C17A45DC0CDD8FBB051F9F938F49A5,
	DOTweenModulePhysics_DOMove_m9218B91AF3CA4CB76EC980F3C19DC290C22DD0D3,
	DOTweenModulePhysics_DOMoveX_mDA0E3727E8E0A9CC8CA18919C55DBB67CC7E7618,
	DOTweenModulePhysics_DOMoveY_m4FA2CA0C0DE64203A16C528F12B7FA9EED027F87,
	DOTweenModulePhysics_DOMoveZ_m4A8887E9003AD195C398DB344BD2400AF5527873,
	DOTweenModulePhysics_DORotate_m34B2316F2E1B4FABB69B2F982D8D9DA5AC074DC6,
	DOTweenModulePhysics_DOLookAt_m35971281812CD6A5EA5B28427A009F2C2E4FE533,
	DOTweenModulePhysics_DOJump_mD421D5659C38733B5E5B6891253257E5C425F47B,
	DOTweenModulePhysics_DOPath_m8DA02562B715A7AA662FF9FE0960A11A61B15CD2,
	DOTweenModulePhysics_DOLocalPath_mA9EFBF2E389456FB671468302622565E9F66F5EE,
	DOTweenModulePhysics_DOPath_m420764C2597301E7048F11600713705AD0DADC1A,
	DOTweenModulePhysics_DOLocalPath_m720A2CA6D647E4D8AAA386F83F4FE96E08C73082,
	U3CU3Ec__DisplayClass0_0__ctor_m6C8A8063B7CCC58E82305177538D7FBF1CE44935,
	U3CU3Ec__DisplayClass0_0_U3CDOMoveU3Eb__0_mB768E968FA1FD2B9AE13877E2692D758B495D013,
	U3CU3Ec__DisplayClass1_0__ctor_m479175628F7D1842EE3DCF05C86FAD7B511ABBCB,
	U3CU3Ec__DisplayClass1_0_U3CDOMoveXU3Eb__0_mE0FB6A6EF157A4BC22104D4F91C164AA574DB227,
	U3CU3Ec__DisplayClass2_0__ctor_mB0ADB1BBDA7BF0DD9C2414079D2012E8D61404BE,
	U3CU3Ec__DisplayClass2_0_U3CDOMoveYU3Eb__0_m79746B44C774CACFDAFA83EFCC9E6D6D03AD82D6,
	U3CU3Ec__DisplayClass3_0__ctor_mBAA31984E2A716B3498B2B0D79CA25A892D748D0,
	U3CU3Ec__DisplayClass3_0_U3CDOMoveZU3Eb__0_m11FF22865EE53FAB3B972AC3B34D3BB01526DF77,
	U3CU3Ec__DisplayClass4_0__ctor_m71B8B5E5A7CFD905A28CFCEF9005FDBE70096CBF,
	U3CU3Ec__DisplayClass4_0_U3CDORotateU3Eb__0_m253899ED69AC81AED8238765AD9C3F808B81F9B8,
	U3CU3Ec__DisplayClass5_0__ctor_mE16BED5275B5EEEF36A20B3C783CC4E7B0D580EE,
	U3CU3Ec__DisplayClass5_0_U3CDOLookAtU3Eb__0_m1C50D196B81BA62AC84D966F2515E56293697921,
	U3CU3Ec__DisplayClass6_0__ctor_m6F040CE636E4D727C99FC1DF62BB42721707EC92,
	U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__0_m777E7729EA52B752D4212827ED4DB839B6A1F93D,
	U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__1_mB7EEF6913E4971D9438101C2DBB950BB0877E640,
	U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__2_mC008279D66615921E8D8F95A88349CAAA4F3ACF3,
	U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__3_mA4E1F014B086C15F0D7F66564619553D524535D2,
	U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__4_m7190E82AA00FCA218DE01487303AC2AAB966BA14,
	U3CU3Ec__DisplayClass7_0__ctor_m36AD8AF752829C4A0601828F600EC8D181BB7F9E,
	U3CU3Ec__DisplayClass7_0_U3CDOPathU3Eb__0_m424F1A2360CF360DEAEB2AE4B03929D8415D9D85,
	U3CU3Ec__DisplayClass8_0__ctor_m75DF5195919998D6D0FA3C9F4EE2052A1856612B,
	U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__0_mCAB97E4D7EB96AF59820216D2F20F3B32E9CE914,
	U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__1_m409709C8E90B9323B6467D70BF2E623079B9C8F8,
	U3CU3Ec__DisplayClass9_0__ctor_m8B38DEC85AB1D858ED6289CA714E5A7DC6384424,
	U3CU3Ec__DisplayClass9_0_U3CDOPathU3Eb__0_m57E3DDA730AB3A0A591C16CA8F9FEFD864FBD23B,
	U3CU3Ec__DisplayClass10_0__ctor_mEF982F61A1DB0156415F649C9BEA4F7D6BBB08AD,
	U3CU3Ec__DisplayClass10_0_U3CDOLocalPathU3Eb__0_m330A66B432859CDB4EFBABCA77577716AD33B665,
	U3CU3Ec__DisplayClass10_0_U3CDOLocalPathU3Eb__1_mF002FDBED4B8F0AD918205030DF8CB3791415483,
	DOTweenModulePhysics2D_DOMove_m129881ECAC47858FD6BDF4872DFC10009AA91774,
	DOTweenModulePhysics2D_DOMoveX_m58FD03E827955317D3A61BDE358C692C085BDC67,
	DOTweenModulePhysics2D_DOMoveY_m6CA0A894F764679E356EEAC3047063E66AE8507D,
	DOTweenModulePhysics2D_DORotate_m8FF3AA95400BD0ED1E539A13B9B33D8DCBE72CAE,
	DOTweenModulePhysics2D_DOJump_m2F08ADE05D23A793E24F4C9540D2159DADF8E655,
	U3CU3Ec__DisplayClass0_0__ctor_m4CB0F23C2FD78ED18921BA431C11EC8841878845,
	U3CU3Ec__DisplayClass0_0_U3CDOMoveU3Eb__0_mACB8350BB439EC9BDAE8AAA9042BA1D2C2260840,
	U3CU3Ec__DisplayClass1_0__ctor_m51B26BC729B71979744C78CCF6EED60B2D14109B,
	U3CU3Ec__DisplayClass1_0_U3CDOMoveXU3Eb__0_m57744501683F232996387D707B7BD355F4F01547,
	U3CU3Ec__DisplayClass2_0__ctor_m657C45B791F1EA7BE1759E94B7B75A23390BA39A,
	U3CU3Ec__DisplayClass2_0_U3CDOMoveYU3Eb__0_mB38D7BA656E8BFBDA07E30ADB33ED05B7EA2AAE5,
	U3CU3Ec__DisplayClass3_0__ctor_m478EC1218BEF6E85E06C40AB67A0D7463E600D49,
	U3CU3Ec__DisplayClass3_0_U3CDORotateU3Eb__0_m8C384490EBDB1B769B4D88A4182E40E46A2A380B,
	U3CU3Ec__DisplayClass4_0__ctor_mFF8025919ABCD075B0E67C3F07356DD3CFC60605,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__0_mE1774E966F8B4E8EC7EF821C59D3C5E8BF8FB071,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__1_m72CB74348BBB9FF7126C8670CA7A9E858279DB46,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__2_mB82162455CF0857F8934DC23F558BC2C6B2A51B1,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__3_m9EB716BAFAB813B716B78872E6249CE4405E4CEA,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__4_m6CF2D0D226343F9C2144DC7C2F468397EE74B74F,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__5_m8A4065ED3871AB729FEC6C9B32F403681C9ED206,
	DOTweenModuleSprite_DOColor_m1D8613D58BC87177BBFB8F8C48803084362CC46F,
	DOTweenModuleSprite_DOFade_mD42EB7C410F2D7E86EF154211E97C3D72FAB6D99,
	DOTweenModuleSprite_DOGradientColor_m1D99BA2B2479484B3104790FA7CF734042B56275,
	DOTweenModuleSprite_DOBlendableColor_m1CD3ADB6D2A6C868FA9A25527B33D1D36D3918D7,
	U3CU3Ec__DisplayClass0_0__ctor_mB3A38B7C4B2EBEC0CA4CB4BCD0996F70D0D38573,
	U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__0_m34BED3EF004629B2391C43F22D2ECC75EE20C056,
	U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__1_m8236490A867654780100440C6D27299ED4F26767,
	U3CU3Ec__DisplayClass1_0__ctor_m9A4008AB7FCC8A503A7CAED6CBBACDADF8E0A2F0,
	U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__0_m5F0C4CC4570355DFDF8A0AC86BB45FA7127558B2,
	U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__1_m353548C0500E2640824FDC1FE767DF2645A3FFE4,
	U3CU3Ec__DisplayClass3_0__ctor_m3C72E35866D164666CDD16DA3FD45D2AE46D9E24,
	U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__0_m424C5E007014DBEFF422D4E1C016F8D14B192DE8,
	U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__1_mE1792C420EAF86DF15D7258F252C269F8931578E,
	DOTweenModuleUI_DOFade_m70733D91ED98AB827DD5162868199BCA07B3C65F,
	DOTweenModuleUI_DOColor_m9CCD69C96E0EC2AF9796758A83BCAE38E8A99257,
	DOTweenModuleUI_DOFade_mCF2D26E252987610391CA58F42EBF89D497AB42C,
	DOTweenModuleUI_DOColor_mAB44E96C3BE821A668FD934C349F33DB052BD34B,
	DOTweenModuleUI_DOFade_m6E4705A5E978F074AC027B2622447F16464797C8,
	DOTweenModuleUI_DOFillAmount_m1701806AB0CE37D1A7BA5E97AC2A1CF2FE381A64,
	DOTweenModuleUI_DOGradientColor_mD41A204AAA1149EFD8F63003EFB3B5B86851393F,
	DOTweenModuleUI_DOFlexibleSize_mC1B116AD5E04DEE061C879DB93173AF3BF7BAFA2,
	DOTweenModuleUI_DOMinSize_m43AE2B4C0C85152C1F0C1A1A07C7C6647BCA50FB,
	DOTweenModuleUI_DOPreferredSize_m637389A7A4F0CAA593C1327F420E3F0CD7F4FBAC,
	DOTweenModuleUI_DOColor_mE71263080B1924D0D208D8D8B6E134726CF1C502,
	DOTweenModuleUI_DOFade_m9870943D62346E19D61067631D8E034995D0F093,
	DOTweenModuleUI_DOScale_mC78CB7454A8AA9419E06B38472C5751284669753,
	DOTweenModuleUI_DOAnchorPos_m5771DC15ABB88CC37D1A22B035E4D2FB638356B7,
	DOTweenModuleUI_DOAnchorPosX_mFC8A1A246CDB7E120FAC42CA43A7356F1F1A26B3,
	DOTweenModuleUI_DOAnchorPosY_m8371486009B6D9D9E5496D940591EBBBDE78AB51,
	DOTweenModuleUI_DOAnchorPos3D_m9152258BD8EF0A999624C76BC8149BD46607EF33,
	DOTweenModuleUI_DOAnchorPos3DX_mBC59977D6899FEAB2C3B45554EB28E27665577A3,
	DOTweenModuleUI_DOAnchorPos3DY_mD242D5809B7F59D96655054309976DD8C8A45B2A,
	DOTweenModuleUI_DOAnchorPos3DZ_m5CA72828C6290C08B5AE19AEEA4BACE05315583F,
	DOTweenModuleUI_DOAnchorMax_mF557034D626FD7CD2809F16F57071E5234A0A01D,
	DOTweenModuleUI_DOAnchorMin_m13FBF4F90CF58B50BDC27BAF0CBC7C4376DF4016,
	DOTweenModuleUI_DOPivot_m4294354A52355B2955965B3726DA2CC0A049F7A5,
	DOTweenModuleUI_DOPivotX_mAF48236E3A05FA8787920BE4F939A4E652D6EA1D,
	DOTweenModuleUI_DOPivotY_m478C274ACECBE8C0C0D9D43FF49DFF41DD28595F,
	DOTweenModuleUI_DOSizeDelta_mC80355FB2E78330D2EC907DC14F8B6A8179CB09A,
	DOTweenModuleUI_DOPunchAnchorPos_mA9B79DE480E85187CD9967AEAC55F29FB4C7B587,
	DOTweenModuleUI_DOShakeAnchorPos_m44811D5F919207AB4ACA282656C76F690E41A2C4,
	DOTweenModuleUI_DOShakeAnchorPos_mA36B5E94FEC480304F89946C695F8DCBF637DC72,
	DOTweenModuleUI_DOJumpAnchorPos_m0D6AE7D1C70F77C307C2F74A7DE5575B38310323,
	DOTweenModuleUI_DONormalizedPos_mA0AAE9E65E8F1808464E0EFE63F26A76D4C4D86B,
	DOTweenModuleUI_DOHorizontalNormalizedPos_mA1C4D197CF803EA1826D3D23A3A0DD665EDA535B,
	DOTweenModuleUI_DOVerticalNormalizedPos_m0CF6EC00B4AC886CEA5E8D99F9F5E26F254D52E0,
	DOTweenModuleUI_DOValue_mBD157558885F4CC9BB52696CA6E7FCFBBE289D31,
	DOTweenModuleUI_DOColor_mF7C94BF952B9549609B1F7A3892A6F02CEB56F04,
	DOTweenModuleUI_DOFade_m86A4E7965D2563BB1530EB2343AB8DA2EF7FDF01,
	DOTweenModuleUI_DOText_mB47F3908BD77013A7C5DF5CCFC2E3F4BB60E00F5,
	DOTweenModuleUI_DOBlendableColor_mF0936D1AF990F743A105B24F1D6988610F2496A9,
	DOTweenModuleUI_DOBlendableColor_m0E5CC97374C3B817CB3A04FFA87DCBBA545DB147,
	DOTweenModuleUI_DOBlendableColor_mAA670DFB22BE7C9256667D65F40FF487C2AECF14,
	Utils_SwitchToRectTransform_m927E0306521B99C5AF717563A4AB216A3846ACFC,
	U3CU3Ec__DisplayClass0_0__ctor_m02AC5FF72AD9F7271BAE9AB34F80D42AA9A9C484,
	U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__0_m160924332BA5EF66E12B6FE8BDA1DBC69059EAAD,
	U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__1_mCF3914E7F3A8F729B174AA946341922991E381CC,
	U3CU3Ec__DisplayClass1_0__ctor_m1C5DB32757E72E49AF272F1384712046C6A00253,
	U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__0_m9467C7755B2D29380CDBCB4190BFC6A077E64C39,
	U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__1_m44B0F01B58106E8E85D97C2FBB8A460A0571FE77,
	U3CU3Ec__DisplayClass2_0__ctor_m4D9DFB7EE2AAC12968C4DF238BD125C654548FF1,
	U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__0_mCAA3704209EDD53B81A477BF1AB73EA69F26F845,
	U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__1_m7B6FA582025F7A33540FA056A8EA424D3BD33BE7,
	U3CU3Ec__DisplayClass3_0__ctor_mC5C767AD26CB3FE0A493044C71B6CCEC8346C296,
	U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__0_m312CB07635E6BF7DDA4F7D69B3844ADDDF806465,
	U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__1_mC81F83EDCE139870DE9369D6478622169885365E,
	U3CU3Ec__DisplayClass4_0__ctor_m15E8C7F3799861E5CCA5AAD2CD1CD28224AA03E7,
	U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__0_m0B5F0F9301C56DDEB288ADD86745A1D635CE1416,
	U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__1_m18E36E9B1AFC305E378F79E25EE9A932B959588E,
	U3CU3Ec__DisplayClass5_0__ctor_m5DB0CA121DB5A86ADCD13BB04F71705F65B09E65,
	U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__0_m424FEBA1D754E6D82F1013FC993B129F0175C745,
	U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__1_m83B635790469064B562A721BEE7A6C83B43903C8,
	U3CU3Ec__DisplayClass7_0__ctor_m3F4D7A459A8733E43E7A64A569F9EA52B535D2B6,
	U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__0_mF3831E19E398DAD98077121A417BFD6A74D3EBCB,
	U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__1_m605F371D6A593F9F1A3A249368409471CEAEC646,
	U3CU3Ec__DisplayClass8_0__ctor_mA6BE9E902B051E8864004E9F53E0D01796C27BEC,
	U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__0_m24F632B6998489E51C1E60F23FE8A05B9F9BF80A,
	U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__1_m5E36BA70B14EBA24EE5150746690346E78F966B0,
	U3CU3Ec__DisplayClass9_0__ctor_m286D59D82E41B5281985D79E488198A7E3537ACC,
	U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__0_mF535C0871CF853AED0D5A8ACB39FC367D1CB0A64,
	U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__1_m185139D594B32B631796CD61D79F0B48C5431765,
	U3CU3Ec__DisplayClass10_0__ctor_m11DD7C4B58AFC2CB99F683955907A640E74282C0,
	U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__0_mAFCCC57700B3B00BDACF629FB898B3DEDF8C7668,
	U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__1_m15F5B7ECAA029DC5E8A50857A16A48A8A6D6992B,
	U3CU3Ec__DisplayClass11_0__ctor_m6D4ED0270AF0D5C0A75BF692250CB853EC2F6F79,
	U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__0_m2D6173B6882E022ADB4AC6CBA3173304B8E6164F,
	U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__1_mCE887CF626E5ACCB29B0E98C921AC7A3E9233A7E,
	U3CU3Ec__DisplayClass12_0__ctor_mD1F9075FEC29F490C6679A9D7598D759C0AB4DBE,
	U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__0_m2385A603E1E66F822FECD5CEACCE771B5758D7B7,
	U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__1_m99EB252D563A798BEE0B5A31C659851CD0700BAE,
	U3CU3Ec__DisplayClass13_0__ctor_m84FD04DEF9DEFE8BB6EE6B768471B2332B4E66EA,
	U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__0_mDEEE77743125A9F4AF071993A48C0883B8938147,
	U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__1_mEB2040061609C631073D063D8BA71C5AE458CB63,
	U3CU3Ec__DisplayClass14_0__ctor_m188221CF95D995E27ABFF9D447F3D54149D4B5F2,
	U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__0_m18F22E4AA3CBA7FEFF94AA2AA7438EBC5C4DBF3D,
	U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__1_m76DB47AD4C1DD0E522CD7E49E4C0BF890512FCC7,
	U3CU3Ec__DisplayClass15_0__ctor_m1D4F00D13860F242587ACB9888B000C3A767492B,
	U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__0_m61698EC758F0F82BBA818949C0BD2F3CFADFAA57,
	U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__1_mD35972634DF21705BA6A9B3DB5CF0D81CECC219B,
	U3CU3Ec__DisplayClass16_0__ctor_mC9174DECC9AB0C0FCA7E0BB5626F00A397552285,
	U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__0_m04D393C6058D10956299620A3367587B40EADADF,
	U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__1_m29D334493F9D5F6BCADC9E5725DF0A510EA47208,
	U3CU3Ec__DisplayClass17_0__ctor_mDCEE61F98BC23EF18977566788E29085B0DC4B49,
	U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__0_m3F4080C62B849D50FF7C58A8257FFEE91BBAB680,
	U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__1_m4263B6642D9E77CB38E01A24F3C737199ACC9F93,
	U3CU3Ec__DisplayClass18_0__ctor_m8463A61BCCD89F89CBF0F79CF66FA4EBE2FD1E4F,
	U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__0_m256585104D3EF107F980E00EBCA0AFE9AD81F6CF,
	U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__1_m9A7522C9582F9572AF53FFCE8D3D745BE00DB9C0,
	U3CU3Ec__DisplayClass19_0__ctor_m15B509E8ABCF2C177192FF9870B15FEE66F4D038,
	U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__0_m7C246FCA6BAD4A13638C1361F6680CF5211DFD15,
	U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__1_m49E6856829E99FE417EC50159BC5FB0D1A77CBD7,
	U3CU3Ec__DisplayClass20_0__ctor_mDD65EA9F35AA085EDC5AB6EA7BCB430AB53E7C4C,
	U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__0_mD207906E09F8A121195553ACBF187B8D0A3A6006,
	U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__1_m25FD7BC6C81DCBCB7936948A09EA50E27D3DF5E1,
	U3CU3Ec__DisplayClass21_0__ctor_m7CA9A2889EDB39EBF81C4320023731198C2E28F6,
	U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__0_mB7F92CB811EC69B78D4DB72A07EBFE0065B81A96,
	U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__1_mE3580800BF86444C99AFAD3651A10A8BA87ACA3D,
	U3CU3Ec__DisplayClass22_0__ctor_mE2C45E43AE15B030C3E9EA28C6FB89B27993353C,
	U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__0_m965979FB6B275C69A73170025341021C75A3BD73,
	U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__1_m4A27FCA6236E27F8F1156DF1A947D5E14C97900E,
	U3CU3Ec__DisplayClass23_0__ctor_mAFBDA472706665D20FBB1B5C8CE8C560842578A1,
	U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__0_mB04DAF8BA4880841E68A83B7182EB53669831FFD,
	U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__1_mEE841F6ADEDD8942A5BAB79D9F181646759EE2B0,
	U3CU3Ec__DisplayClass24_0__ctor_mC59776621BA36942C91F3BFED7DE4391B0625F07,
	U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__0_m1DF542C0FC15A842BC687B1294E2DE72BFF44B86,
	U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__1_mB43317F02A9C33D46CE93B16DD1104D28BFFE75E,
	U3CU3Ec__DisplayClass25_0__ctor_mCF92B4AFC980734E8F9FBD06D7709D5B610C2AD8,
	U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__0_m2D894FC2DD5FE9C3641758DA07FBB2415E191750,
	U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__1_mAB31C40435305381E674D7BCDD36C1FA2D944535,
	U3CU3Ec__DisplayClass26_0__ctor_mE11542986539E00ECC4ACB110B932CB659280B9E,
	U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__0_m8C345DF5B27AE5B17D74FCDB6CC68D367576F8F5,
	U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__1_mF593BD39BAA9EA695EA52E6B025249916A3ACB21,
	U3CU3Ec__DisplayClass27_0__ctor_m3F5D43CB088C6A3C4D6CC51DD761FA23F832B806,
	U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__0_m0958BB22CF771F2BE804E7BDD83C361073F3581E,
	U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__1_mA6D65C9BAD704941C13ACD1DE3D3A6E8FA58A6B1,
	U3CU3Ec__DisplayClass28_0__ctor_m671FD2A8D4DC6429FA93C8A41C7AFC6B0CB50CCF,
	U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__0_m71D55809BE5527F7FA76198ADEAE5E5917555699,
	U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__1_m7A7AAA1B4D13FE941B7051A2395795B2019BA497,
	U3CU3Ec__DisplayClass29_0__ctor_m6841EBC72678519402C9678A4903856BA01D3E3C,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__0_mDD03C988E48C946E2051BBCB400D11AA475172C5,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__1_m0A7D3990B8A6B423B590109635761C4D7845AB7F,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__2_mB2EB9443C133F983C1AA76FAB66C80F28853B8F4,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__3_m7E2202F4B18C4169BD217DE526E9543C40EF29C0,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__4_mDA917A9381F14BC3DACB27C22CAF05FE45DBAC90,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__5_m3CC81967E2004B932868626D598B72943C76C21F,
	U3CU3Ec__DisplayClass30_0__ctor_m475CA4BAAE3F4C95D59EC2A5210019E22FD7E72D,
	U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__0_m1F0943C5D1EA2BAE72905488B7BB7FD05AD5414B,
	U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__1_m8CE913B6CB904A504400097D0AA6EDDBD7AE0B45,
	U3CU3Ec__DisplayClass31_0__ctor_m8CB90BDE592351E68684EB4D199BB309EC06F466,
	U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__0_mDF3CB62908D4575E14BF7E98CA262F8149BB0E48,
	U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__1_mEB5E8758E0EF969FFADC04CA3147F5A888B40064,
	U3CU3Ec__DisplayClass32_0__ctor_m1A8D52B69FB8395ABBC9A4F7DF8E36466DB3BC95,
	U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__0_m71DE61BFA6209DB829836838A7F1EB7F5C1C951C,
	U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__1_mCB1CE1E45A17FD19D929A7C3EA95C7B492AFCCA2,
	U3CU3Ec__DisplayClass33_0__ctor_m0DF68C5C8156D45B1870272C41290E5B12FF8602,
	U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__0_m145C72DAB8DD1E5AD043A2B5900812E0F0E58E83,
	U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__1_mF3EAA5B02B860189FE7841E1642095AF9488F134,
	U3CU3Ec__DisplayClass34_0__ctor_m4E36DF0E111FF20A584BABCB272C7514CBAF59A2,
	U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__0_m47F62A48B92963FB32511F3875D566F8FC71480B,
	U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__1_m9541F5AD304519AFA79192889487ABC2E621EE3F,
	U3CU3Ec__DisplayClass35_0__ctor_mEB07972AA46E127DB75E68DDA3FB5A54DFE1A07C,
	U3CU3Ec__DisplayClass35_0_U3CDOFadeU3Eb__0_m8FFA77E8FB4FCE8F0125962D1192E052256AA512,
	U3CU3Ec__DisplayClass35_0_U3CDOFadeU3Eb__1_m857FA607EA2B021E9A5DF0AFA774242459924E3E,
	U3CU3Ec__DisplayClass36_0__ctor_mD71C2FD9E280F3A4DC631CA425A24E1AE0265CC8,
	U3CU3Ec__DisplayClass36_0_U3CDOTextU3Eb__0_mE1A296C1F72132B2BF559B54C734121CF98679DC,
	U3CU3Ec__DisplayClass36_0_U3CDOTextU3Eb__1_mDB35377C8C2F3FCAA36BDC6104B6123A01C159E7,
	U3CU3Ec__DisplayClass37_0__ctor_mDA142B56ABBC2597FCB543F5EA51FDE52DDA91E5,
	U3CU3Ec__DisplayClass37_0_U3CDOBlendableColorU3Eb__0_mA59968C9C7B4E749CB08FBD0B6EEF08A1B66B362,
	U3CU3Ec__DisplayClass37_0_U3CDOBlendableColorU3Eb__1_m6FD982BE0D5D355F1C0CF61FEB38A244956BE6E8,
	U3CU3Ec__DisplayClass38_0__ctor_mF5E51CB763FACE84BD5CD7EBDA60614BF88959E9,
	U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__0_m5CA9724149FCD3E48658442157DA3249D8966F6C,
	U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__1_m800BBDFF60B762B724C762D9C29F15474FB8A698,
	U3CU3Ec__DisplayClass39_0__ctor_m309F737816844D4A4CDC9518D1DE826E30C6D271,
	U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__0_mFFFA826A2C8066C0B5695C8153E6788167CCAD86,
	U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__1_m7C0B3D7601C4F8711E55BDE39FF63F235CE9F904,
	DOTweenModuleUnityVersion_DOGradientColor_mC9C2768747A9B142795620CF5501BCCB0385A64A,
	DOTweenModuleUnityVersion_DOGradientColor_m8B5EA2127C5D9206A1BC6BAC15BD89D5D9077DCC,
	DOTweenModuleUnityVersion_WaitForCompletion_mCD910620513CFC66E6360BDF100567E534DA8C47,
	DOTweenModuleUnityVersion_WaitForRewind_m80AF71AC60E938C7E0D4FD01CCBF98667DEDB8A1,
	DOTweenModuleUnityVersion_WaitForKill_m5D2A034D4E6912EE8FF0AE063329807F3399FF95,
	DOTweenModuleUnityVersion_WaitForElapsedLoops_m347E45F2B3E7F133E50D93DE5712D9FB0E828A79,
	DOTweenModuleUnityVersion_WaitForPosition_m39F8AC8FBB5962A4CC8CEFB055C85B13284CC39F,
	DOTweenModuleUnityVersion_WaitForStart_mE7E9F02D5CAF079B0F1C2002B633EA88C18AF3D1,
	DOTweenModuleUnityVersion_DOOffset_m5FE227A1D7FE40DEBFD0D15E9E2E140611E49BD4,
	DOTweenModuleUnityVersion_DOTiling_m46B35DDADB688BEB85EB21A5593E240C5FD990A6,
	U3CU3Ec__DisplayClass8_0__ctor_m4E9AD608BFA5058EA275819037B5EE4E384311AA,
	U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m313F8C26E8A72E7404065072AA78E9C737E35620,
	U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m4E8A169B481398D90A901BAD32A1CC0BDD77BAE8,
	U3CU3Ec__DisplayClass9_0__ctor_m34A953C85477B2BD1B635BDAF8885267ACDAFEEA,
	U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m32DCD53537E5D9250D043396A6636431DA4AC5DE,
	U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m586EE9E78A2967588A473314F2E4DDF7852A89A7,
	WaitForCompletion_get_keepWaiting_mC42F1D87B76571FEF5C96EB25CD2F233A7FBDDE2,
	WaitForCompletion__ctor_m194FFB6935EC44D8EBF9596755B410A7F3CAECDA,
	WaitForRewind_get_keepWaiting_mDC4ACCB00D1A64C9D59ED14620D3472036D2755E,
	WaitForRewind__ctor_m8FA908A77DFFAACB814B717915EAFBDA10B2FB36,
	WaitForKill_get_keepWaiting_mC3BC5155F3822FA2486800624680EA65464044D4,
	WaitForKill__ctor_m13C20AC2C9C2809AD51B8CEA30F11AACB4ECC64C,
	WaitForElapsedLoops_get_keepWaiting_mD62F90B0E8F34349F6CBCAD1DEE8C69F6AC9A4A0,
	WaitForElapsedLoops__ctor_mA2399269DDE36055552944650E8862464AAFF448,
	WaitForPosition_get_keepWaiting_mCE1EBD6DFC3462C603585CE8DD978F582FC0ADA6,
	WaitForPosition__ctor_m218039DD8AEC82CDB8BF269764EC8566A4E01F6F,
	WaitForStart_get_keepWaiting_mF6E49FFC399C5642C630865FCCB38FA56DCA890D,
	WaitForStart__ctor_m733FFDFE0C36F20AA645593347BDAA8D0610D508,
	DOTweenModuleUtils_Init_m9F7938AFFD814978DEE9140ED34B6E6647711324,
	DOTweenModuleUtils_Preserver_m5BBFCFD03A1E22FF9651F2407FB32FBDACFBEFDD,
	Physics_SetOrientationOnPath_m7909652CCC78E77ADE33C5BEB4BFF42AA536A7D1,
	Physics_HasRigidbody2D_m7B055F7D6B725DCE1616DE1BCAC6AF1E402946E6,
	Physics_HasRigidbody_m49C216B000D976B6AD22EA36C29BB922F4B02A2B,
	Physics_CreateDOTweenPathTween_mFA2C0271A146797AB71CD136F2A56ECA3A5AAB5C,
	DOTweenAnimation_add_OnReset_mD7AC9EFC9BD3AB33F0D99B4A81D93F9D154AED00,
	DOTweenAnimation_remove_OnReset_m1CF0F7FD188F09050137BC0A3E84197EE84EC010,
	DOTweenAnimation_Dispatch_OnReset_m9EB81885C06EAC1DB8153F1E9BACFDC1A36CF0B1,
	DOTweenAnimation_Awake_m8531F674633C180916C447ACF6C986EC18AF7B3B,
	DOTweenAnimation_Start_m908C8FD2C7336E4F04E22B4C7A821F22F621C905,
	DOTweenAnimation_Reset_m1A971B53301876CD61305BECD912B64B3766F76E,
	DOTweenAnimation_OnDestroy_mCE1919BF0059EA93C96345E2D2F7C0BE0F61B9AC,
	DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2,
	DOTweenAnimation_DOPlay_m13FCD1B90C270CC6A4CDC37D45B9C7906759EB65,
	DOTweenAnimation_DOPlayBackwards_m7DAD71BF7390EE5BB26CEE5E002A9F61BBD790BB,
	DOTweenAnimation_DOPlayForward_m1C460584821358C681FFB2A3824D8F532B94A3D6,
	DOTweenAnimation_DOPause_m579FECCC254EDE65F38B0BB132FA796876409547,
	DOTweenAnimation_DOTogglePause_m3976C710434A81CEF46C8202D6D43A4F09FAE91E,
	DOTweenAnimation_DORewind_m0ACC3EE9A69E368F08360B45500AF6417853AACF,
	DOTweenAnimation_DORestart_mA90E5090E585085C421A2A8D6E271D4A8EFBFBC0,
	DOTweenAnimation_DORestart_m3991D3973BAB757263F5B7DF49236854F7CFFDD6,
	DOTweenAnimation_DOComplete_mA22769F47C0477E80CEFD1278B2400F6944B6111,
	DOTweenAnimation_DOKill_m58766FE1B51A4ACB4AADF618088B24CA8BB558BE,
	DOTweenAnimation_DOPlayById_mB1AD544F5E83C3E5EE30EC09F55E3034625DD1FB,
	DOTweenAnimation_DOPlayAllById_m17BFE4D2AC992F441DA7DE57B06E1D8226F3422F,
	DOTweenAnimation_DOPauseAllById_m69B4156769396D15F7917D08584B27BB8DB33061,
	DOTweenAnimation_DOPlayBackwardsById_mF9C09452E4B6A01789AECFE65FEDE8FBE0BC99AA,
	DOTweenAnimation_DOPlayBackwardsAllById_m699DBBE571B55E8D2F46EFE7795132AEBFBAABF3,
	DOTweenAnimation_DOPlayForwardById_mDE37334AB66BCB98A6CEF089E126F03308F7A3AB,
	DOTweenAnimation_DOPlayForwardAllById_m52998F61B2172E61AA7834823E68C8F3436BD20D,
	DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA,
	DOTweenAnimation_DORewindAndPlayNext_m72276B3E5704C60C1F3662786656A0CAA4A63756,
	DOTweenAnimation_DORewindAllById_mE62FEDBE903BA4F5BBD184AF26CE173949C10FBC,
	DOTweenAnimation_DORestartById_m79A437D8087A41B5B1DB998B2D95ACBC06C92F34,
	DOTweenAnimation_DORestartAllById_mB4956E8A288B61CE7BFD1E091BE0F0E75B360E20,
	DOTweenAnimation_GetTweens_mFA2D6C6863BE615A2D33B8D0E97C5FA40DF9B4EF,
	DOTweenAnimation_TypeToDOTargetType_mD0026308F78DB2907DAFA8B790AF57437D031D3C,
	DOTweenAnimation_CreateEditorPreview_m71BB6F329F0A1A97C543F6DA20A9E2845F9E50FB,
	DOTweenAnimation_GetTweenGO_mAA4B88621B513AD6D7A76032131659A2453654CC,
	DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884,
	DOTweenAnimation__ctor_m250D5B591D9CDF8F9F165FF1F355597D2E615715,
	DOTweenAnimation_U3CCreateTweenU3Eb__47_0_mBD3557DDE92EE0029CF11BEFCEC3534AD5A5C283,
	NULL,
	DOTweenProShortcuts__cctor_m5BA9B49D2E4C189ED49E39C3E5961B11B6B1BE8F,
	DOTweenProShortcuts_DOSpiral_m545A153CD3A4F66CEF5D0376E959701D333FDE2B,
	DOTweenProShortcuts_DOSpiral_mBC25CF666EE124027A5E743CB99A490C1660CC24,
	U3CU3Ec__DisplayClass1_0__ctor_m806C59F8972EC150A820E385B593EA0B56B29B1F,
	U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_m1CCDACC82D59B9DD6DCEEE277BE3D1C410B40CEE,
	U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m2EA9119E181F78B27E9B32146D9861ABD0C3F7E8,
	U3CU3Ec__DisplayClass2_0__ctor_m7155F8E8DBB0B55CD44790BE6D26FFC39746D949,
	U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mA0C2085BFC6B0541C15180DAD8844FAFBF8E303C,
	JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C,
	JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55,
	JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706,
	JObject_set_ObjectValue_mC1FC6DE92EC25FA91A918316481B05AC58ACCC7A,
	JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D,
	JObject_set_ArrayValue_mFB93C515E10CCD51A778A1F5E3A6E8625E957768,
	JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58,
	JObject_set_StringValue_m0D9956200CEC32514C50C065145D6C07A538514B,
	JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542,
	JObject_set_BooleanValue_mCBD498B3264596F62B855602A850FEB4FA85F6FF,
	JObject_get_Count_mF9AF92947ACABC66F11C63C58693AEA05545EDF9,
	JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E,
	JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3,
	JObject_get_FloatValue_mA3FFA45A05D8D82FEBBF01968D3C5E545D003782,
	JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0,
	JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4,
	JObject_set_ULongValue_m9654C958809EA25787D7D7372A902AB027E3B6FC,
	JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036,
	JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840,
	JObject_get_UIntValue_m20AF155A1577719B5C67D5FC8F09B5AAF7C25E1D,
	JObject_set_UIntValue_mAA1F90058E59ED87886D5D8E29D5C7966A73A790,
	JObject_get_IntValue_mDB5384E73EDBA994CB3A4B840B201ED8B8373C64,
	JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE,
	JObject_get_UShortValue_mEB27E08EB88B31CE82192C8F6294F1E374C1B384,
	JObject_set_UShortValue_mD1B79F3A0F374218A07E9D691E6342EBDD70CF6D,
	JObject_get_ShortValue_mE133387DB20068631DA7874BD278B57C3D0E3E0A,
	JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909,
	JObject_get_ByteValue_m7895737CF1888EE4A42011AA0C276953746A6A68,
	JObject_set_ByteValue_m747F43C9CFA9A2FBA947FB54E03E8BE24222F5CA,
	JObject_get_SByteValue_m4440148C8FCE7D523D3D1CC9F85F6A3E171C7528,
	JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE,
	JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1,
	JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD,
	JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470,
	JObject_set_IsFractional_m54D026ED3DC60C618E4F0B035EADBAA2F7F85322,
	JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9,
	JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759,
	JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83,
	JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649,
	JObject_get_Item_m46C334AB26DA340F719D09FCA60BCB60C9CD48CA,
	JObject_get_Item_m812085ADF993D5888C5F69233195E5851C80C41A,
	JObject_op_Explicit_m91CE744D7CD627E8A19B081D7CA029436BC82A2B,
	JObject_op_Explicit_m6BB0BE577426EC26C1D78D4A7BE321523AE35DAB,
	JObject_op_Explicit_mCA528C9C1B2A5DE24DA8F54D4FF32D019B152DAF,
	JObject_op_Explicit_m5C37537EB0C5F8C9F7D9A6E297229AD667050407,
	JObject_op_Explicit_mE6AD01C8C18717761A33CDE14188133DF1354678,
	JObject_op_Explicit_mC4C1D472D280F55CBDA46139343207CD54FA09CD,
	JObject_op_Explicit_m58BDB38F8D53BEC03DC2B585BC93619FB8008EA9,
	JObject_op_Explicit_m8C4A8F99EC1181576CF506A9BDAE2EA2A7A461D3,
	JObject_op_Explicit_m95E4E424758D176CE5F782CB330753F69442F8A5,
	JObject_op_Explicit_m0783B9006A4371CCF2D2F07F2BFAB7C6B263E083,
	JObject_op_Explicit_mB57EE7A3507305E88BD0DAF8C50520F13919A52A,
	JObject_op_Explicit_mBD554A7AC5AF77C778FCB838F1F8030860EDE875,
	JObject_CreateString_m2D29F5DF3DA461D2411DD5236006A2E818AF24FD,
	JObject_CreateBoolean_m19A41F29B2C89DA4BB613D8284923113A24CE4A8,
	JObject_CreateNull_mE6BF7B1637ACF216EAD4D562329913ED9EBC15AE,
	JObject_CreateNumber_mDEDBB16F3828F4A3611D58ECFB19C54C06C8321A,
	JObject_CreateArray_mC94F63B6CA87C8CD7DF7D2E5A56F51A55860B873,
	JObject_CreateObject_m11F3D06CA8A08362C226387F51D672F1AA224BF6,
	JObject__ctor_mC3F8118DC1B1D33330FCCCFE9AAADBFBE97B8917,
	JObject__ctor_m84C13B77E472D391E1159CB615193999B13E0A27,
	JObject__ctor_m3F751D0346A8ED5B4900A1F09C9551E090423929,
	JObject__ctor_m7C615C831B35544505EC8D11CA992452676EF0AA,
	JObject__ctor_m17011C1ACA3110B22E4B691913B2BB6DCFABEA90,
	JObject__ctor_m5E1C718DC194B62A2A9CE1735EDB311E330CED8D,
	JObject_MakeInteger_m24713DDA28ACFCFDDAAFCD8C4753AC5D151314D3,
	JObject_MakeFloat_m1755505E51AE821225A8FED4833751165990EF09,
	JObject_Equals_m8D9A02DC9315E65D67684DD25A7FE20072E9ED4A,
	JObject_GetHashCode_m91C908795F81B70ACF230C7E128CE8A9D8139423,
	JObject_EqualNumber_m6ACB2B57B24104A3501EA94263D985B8A27000C7,
	JSONEncoder_Encode_mCC18CF69E4E2EE24AE5E713CE17FBC3DA6CF7756,
	JSONEncoder__ctor_m7996D27E65BA8DEA8981B519CDA71CF7B1068A04,
	JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2,
	JSONEncoder_EncodeNull_mB74CD302064B5C6DB11221CCBE016A9EB35222E0,
	JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1,
	JSONEncoder_EncodeFloat_m211558D4E8A28E3E3A66FD4D93A6FEF7DCA78F46,
	JSONEncoder_EncodeDouble_m9ADE6CBC4900C98ECE4BC350F85E790916060DCA,
	JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584,
	JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D,
	JSONEncoder_EncodeBool_m833DAD684ED4AA287A0AE5AB6729C8BFF5318AF8,
	JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D,
	JSONEncoder_EncodeEnumerable_mBBB301D592E22D694ACBE3FF317125DB0970814E,
	JSONEncoder__cctor_mE8F1C589FE0046B81EB5CF1C3B036D417E957EA5,
};
extern void YandexAppMetricaUserProfileUpdate_get_AttributeName_mAADFE603D501DD46D59FB6A2159276770BA31B86_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_set_AttributeName_m4191CC9A6655953F2B454199301F67F772B7AEA1_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_get_MethodName_m9E1EF786B3D8E2E7684245B08660901DD294BD26_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_set_MethodName_mD740C005661BF86B5C8350D33EF63D5B19AD8228_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_get_Key_mB162CFCC7C53CFF963FD454F74D758AF064A588D_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_set_Key_m33EE5D283CF342AA0ED524972932ADD147FEDE88_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_get_Values_m49078DBE6E048B602316BFDBFF787F6D4ECD562D_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate_set_Values_m9B309958C5FF83058B1A198A5500E4160C8797A2_AdjustorThunk (void);
extern void YandexAppMetricaUserProfileUpdate__ctor_m58616DC6E7A79A57922D05F3B02A9DA447E94CD2_AdjustorThunk (void);
extern void YandexAppMetricaConfig__ctor_m46CD397B0518F464E09C5F2038FA3F15C91FE872_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_ApiKey_m147BC417752FEA8D98C0F0A752BF9E3E00064C10_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_ApiKey_m727866EB46A1123B84F7E5A2068C41F3AC9F48DB_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_AppVersion_mED1821FDBD6E949FE587315530F27C4E17AC2E91_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_AppVersion_mF02728C0411AF6F7E861F2F59EFDDA9440A4BCEA_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_Location_mB53C928A0BBC78A4F40C28586D9F90890B2BE806_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_Location_mDDD47FCFE2F8C9277DCFBB8F5D59CB8B6FD54E6B_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_SessionTimeout_mF528D3798A45EB12C0CED466038D5DC620E163B5_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_SessionTimeout_m9ADB8370334372932C9BAC1620BD3B444A7B6204_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_CrashReporting_m39794ACC39D7A7B8348B1A10028A0BEE31794C97_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_CrashReporting_m10DEBB344FC60DBF52674A40B9B9ACD6FF171B03_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_LocationTracking_m40F248A4B9874C6509C59BB35CCA9417F0F0A0A7_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_LocationTracking_mA00064D255151AFF0476827221E2A13A9824DD92_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_Logs_mF3234BCD81011BB75DDFE87D6CDD105F8EB2411B_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_Logs_mD0CAD7EE386AE6FBDC643EF357D946A52CA5F6EE_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_HandleFirstActivationAsUpdate_m3C837F5D1B6EBAF5F25D836705DD6932AA6226F5_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_HandleFirstActivationAsUpdate_mC8A24E7B4F0067E2D44081C1B5C6DD31856629D1_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_PreloadInfo_m934E72D370ABB9E2243D4EBCFCA461144C05A2C4_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_PreloadInfo_mFCF94F7B016C8C708921864ACD244232A8E2CC70_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_StatisticsSending_mF8E5291F277DB595D3CD0D0DDDDD80864BC0D840_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_StatisticsSending_m838878DCE15864B27001F0D4102BD3906C42367B_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_AppForKids_mCE85C0B41FFD5C3E604B01D02290A7B42BD46F72_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_AppForKids_m0E62895DEEFD58865564FA0BEE83B30E96C6E8DA_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_UserProfileID_mAC80B41BDF1927A959013AA6F42A2B83DD466235_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_UserProfileID_mA3EBF3741E03C538E234AF6C85B05A7B87480DF1_AdjustorThunk (void);
extern void YandexAppMetricaConfig_get_RevenueAutoTrackingEnabled_m800674A3671F391DE265B4B3AA48B527EC17F99E_AdjustorThunk (void);
extern void YandexAppMetricaConfig_set_RevenueAutoTrackingEnabled_mAF14BA869A4CA489D05B51F30027729B55545FBC_AdjustorThunk (void);
extern void Coordinates_get_Latitude_m07E70B9DEDEF37DDF2850D24D0ED1E7A1826C0AA_AdjustorThunk (void);
extern void Coordinates_set_Latitude_mB5495F18B4EAB660550D614F47193266AFC04958_AdjustorThunk (void);
extern void Coordinates_get_Longitude_m225773A24459764B74431E09F66A415551F7B403_AdjustorThunk (void);
extern void Coordinates_set_Longitude_m4E24236DFF7C6505A1BB0F8B67A36CCD1A314D17_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo__ctor_mA08D07DD83284D8F038DA55B187D716655D15A82_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo_get_TrackingId_m9D47806A199F7E7F0D413FC8DA4CE4CC0578B716_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo_set_TrackingId_m4F186B83B0CC244EC20FC57DB1AF0CC6C17F8189_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo_get_AdditionalInfo_mA15DFA87FDD7845B281B5D68B0EAACD8BCE33D53_AdjustorThunk (void);
extern void YandexAppMetricaPreloadInfo_set_AdditionalInfo_m2BB980DCA77C372066E57803A273E1D68316F1EF_AdjustorThunk (void);
extern void YandexAppMetricaRevenue__ctor_mEFCFDB0686F78514C45021102EABF1C58FD08BEA_AdjustorThunk (void);
extern void YandexAppMetricaRevenue__ctor_m7A36F4E6A089659BE2C9A38FB411D4A5E00FB8B0_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Price_m00320990C2107FB0A3AD7CEBDDCA6E840A760030_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Price_mAD3F94FCEC1E66D09DE0396941932D9E4F7AAFA4_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_PriceDecimal_mB279A2BE633D3566C2361667496AB4E3468033ED_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_PriceDecimal_mF70A4373DD76AAD3D9172912C44A99A950733351_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Currency_m3FA5BCE2DC30757C824F157D3198B4B5638C26CA_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Currency_mEB5437F9FD8CC650791713DE40233158399550D0_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Quantity_mA405E5D1A6E7C6C34B35F51F518E443D3E880ABB_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Quantity_mD219197536505B4A7431F7DEAB37C65D8FB6AE3C_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_ProductID_m6BA1288B427B5ACB125C634C2DF41FC29E0F2246_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_ProductID_mA1CEECADC302ED6A7A6BD38CF9D130BF59391727_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Receipt_mD6BE3E2ECFD475796DCAF792DB96E9025FCC8101_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Receipt_mFC5DF642121EA3BBE45D5188D9D3C4FFDE4F8092_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_get_Payload_m4BB18D93F9A96CC8C104E2311E28259512F7475E_AdjustorThunk (void);
extern void YandexAppMetricaRevenue_set_Payload_mE50D0D2D624D7F134182FA70E4065B5F83FCA1AF_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_get_Data_m14E7C7A6A19436B92F0AEDC21AEBF0D598E51FDA_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_set_Data_m6E43F9474F83C1825BC0CD2536E7028341469447_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_get_Signature_m586F08DBD0AB661DF9D4C8D7154C5921B4F23ED2_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_set_Signature_m6CFA349C225137EFC2B686916FB2390FE03911A1_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_get_TransactionID_m9C4736645755549FBA3C2FA711879BEE669BD8C7_AdjustorThunk (void);
extern void YandexAppMetricaReceipt_set_TransactionID_m2E469887FC93DE2133C185AB100BEE920A510CEC_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[67] = 
{
	{ 0x0600007D, YandexAppMetricaUserProfileUpdate_get_AttributeName_mAADFE603D501DD46D59FB6A2159276770BA31B86_AdjustorThunk },
	{ 0x0600007E, YandexAppMetricaUserProfileUpdate_set_AttributeName_m4191CC9A6655953F2B454199301F67F772B7AEA1_AdjustorThunk },
	{ 0x0600007F, YandexAppMetricaUserProfileUpdate_get_MethodName_m9E1EF786B3D8E2E7684245B08660901DD294BD26_AdjustorThunk },
	{ 0x06000080, YandexAppMetricaUserProfileUpdate_set_MethodName_mD740C005661BF86B5C8350D33EF63D5B19AD8228_AdjustorThunk },
	{ 0x06000081, YandexAppMetricaUserProfileUpdate_get_Key_mB162CFCC7C53CFF963FD454F74D758AF064A588D_AdjustorThunk },
	{ 0x06000082, YandexAppMetricaUserProfileUpdate_set_Key_m33EE5D283CF342AA0ED524972932ADD147FEDE88_AdjustorThunk },
	{ 0x06000083, YandexAppMetricaUserProfileUpdate_get_Values_m49078DBE6E048B602316BFDBFF787F6D4ECD562D_AdjustorThunk },
	{ 0x06000084, YandexAppMetricaUserProfileUpdate_set_Values_m9B309958C5FF83058B1A198A5500E4160C8797A2_AdjustorThunk },
	{ 0x06000085, YandexAppMetricaUserProfileUpdate__ctor_m58616DC6E7A79A57922D05F3B02A9DA447E94CD2_AdjustorThunk },
	{ 0x060000BB, YandexAppMetricaConfig__ctor_m46CD397B0518F464E09C5F2038FA3F15C91FE872_AdjustorThunk },
	{ 0x060000BC, YandexAppMetricaConfig_get_ApiKey_m147BC417752FEA8D98C0F0A752BF9E3E00064C10_AdjustorThunk },
	{ 0x060000BD, YandexAppMetricaConfig_set_ApiKey_m727866EB46A1123B84F7E5A2068C41F3AC9F48DB_AdjustorThunk },
	{ 0x060000BE, YandexAppMetricaConfig_get_AppVersion_mED1821FDBD6E949FE587315530F27C4E17AC2E91_AdjustorThunk },
	{ 0x060000BF, YandexAppMetricaConfig_set_AppVersion_mF02728C0411AF6F7E861F2F59EFDDA9440A4BCEA_AdjustorThunk },
	{ 0x060000C0, YandexAppMetricaConfig_get_Location_mB53C928A0BBC78A4F40C28586D9F90890B2BE806_AdjustorThunk },
	{ 0x060000C1, YandexAppMetricaConfig_set_Location_mDDD47FCFE2F8C9277DCFBB8F5D59CB8B6FD54E6B_AdjustorThunk },
	{ 0x060000C2, YandexAppMetricaConfig_get_SessionTimeout_mF528D3798A45EB12C0CED466038D5DC620E163B5_AdjustorThunk },
	{ 0x060000C3, YandexAppMetricaConfig_set_SessionTimeout_m9ADB8370334372932C9BAC1620BD3B444A7B6204_AdjustorThunk },
	{ 0x060000C4, YandexAppMetricaConfig_get_CrashReporting_m39794ACC39D7A7B8348B1A10028A0BEE31794C97_AdjustorThunk },
	{ 0x060000C5, YandexAppMetricaConfig_set_CrashReporting_m10DEBB344FC60DBF52674A40B9B9ACD6FF171B03_AdjustorThunk },
	{ 0x060000C6, YandexAppMetricaConfig_get_LocationTracking_m40F248A4B9874C6509C59BB35CCA9417F0F0A0A7_AdjustorThunk },
	{ 0x060000C7, YandexAppMetricaConfig_set_LocationTracking_mA00064D255151AFF0476827221E2A13A9824DD92_AdjustorThunk },
	{ 0x060000C8, YandexAppMetricaConfig_get_Logs_mF3234BCD81011BB75DDFE87D6CDD105F8EB2411B_AdjustorThunk },
	{ 0x060000C9, YandexAppMetricaConfig_set_Logs_mD0CAD7EE386AE6FBDC643EF357D946A52CA5F6EE_AdjustorThunk },
	{ 0x060000CA, YandexAppMetricaConfig_get_HandleFirstActivationAsUpdate_m3C837F5D1B6EBAF5F25D836705DD6932AA6226F5_AdjustorThunk },
	{ 0x060000CB, YandexAppMetricaConfig_set_HandleFirstActivationAsUpdate_mC8A24E7B4F0067E2D44081C1B5C6DD31856629D1_AdjustorThunk },
	{ 0x060000CC, YandexAppMetricaConfig_get_PreloadInfo_m934E72D370ABB9E2243D4EBCFCA461144C05A2C4_AdjustorThunk },
	{ 0x060000CD, YandexAppMetricaConfig_set_PreloadInfo_mFCF94F7B016C8C708921864ACD244232A8E2CC70_AdjustorThunk },
	{ 0x060000CE, YandexAppMetricaConfig_get_StatisticsSending_mF8E5291F277DB595D3CD0D0DDDDD80864BC0D840_AdjustorThunk },
	{ 0x060000CF, YandexAppMetricaConfig_set_StatisticsSending_m838878DCE15864B27001F0D4102BD3906C42367B_AdjustorThunk },
	{ 0x060000D0, YandexAppMetricaConfig_get_AppForKids_mCE85C0B41FFD5C3E604B01D02290A7B42BD46F72_AdjustorThunk },
	{ 0x060000D1, YandexAppMetricaConfig_set_AppForKids_m0E62895DEEFD58865564FA0BEE83B30E96C6E8DA_AdjustorThunk },
	{ 0x060000D2, YandexAppMetricaConfig_get_UserProfileID_mAC80B41BDF1927A959013AA6F42A2B83DD466235_AdjustorThunk },
	{ 0x060000D3, YandexAppMetricaConfig_set_UserProfileID_mA3EBF3741E03C538E234AF6C85B05A7B87480DF1_AdjustorThunk },
	{ 0x060000D4, YandexAppMetricaConfig_get_RevenueAutoTrackingEnabled_m800674A3671F391DE265B4B3AA48B527EC17F99E_AdjustorThunk },
	{ 0x060000D5, YandexAppMetricaConfig_set_RevenueAutoTrackingEnabled_mAF14BA869A4CA489D05B51F30027729B55545FBC_AdjustorThunk },
	{ 0x060000D6, Coordinates_get_Latitude_m07E70B9DEDEF37DDF2850D24D0ED1E7A1826C0AA_AdjustorThunk },
	{ 0x060000D7, Coordinates_set_Latitude_mB5495F18B4EAB660550D614F47193266AFC04958_AdjustorThunk },
	{ 0x060000D8, Coordinates_get_Longitude_m225773A24459764B74431E09F66A415551F7B403_AdjustorThunk },
	{ 0x060000D9, Coordinates_set_Longitude_m4E24236DFF7C6505A1BB0F8B67A36CCD1A314D17_AdjustorThunk },
	{ 0x060000DA, YandexAppMetricaPreloadInfo__ctor_mA08D07DD83284D8F038DA55B187D716655D15A82_AdjustorThunk },
	{ 0x060000DB, YandexAppMetricaPreloadInfo_get_TrackingId_m9D47806A199F7E7F0D413FC8DA4CE4CC0578B716_AdjustorThunk },
	{ 0x060000DC, YandexAppMetricaPreloadInfo_set_TrackingId_m4F186B83B0CC244EC20FC57DB1AF0CC6C17F8189_AdjustorThunk },
	{ 0x060000DD, YandexAppMetricaPreloadInfo_get_AdditionalInfo_mA15DFA87FDD7845B281B5D68B0EAACD8BCE33D53_AdjustorThunk },
	{ 0x060000DE, YandexAppMetricaPreloadInfo_set_AdditionalInfo_m2BB980DCA77C372066E57803A273E1D68316F1EF_AdjustorThunk },
	{ 0x06000125, YandexAppMetricaRevenue__ctor_mEFCFDB0686F78514C45021102EABF1C58FD08BEA_AdjustorThunk },
	{ 0x06000126, YandexAppMetricaRevenue__ctor_m7A36F4E6A089659BE2C9A38FB411D4A5E00FB8B0_AdjustorThunk },
	{ 0x06000127, YandexAppMetricaRevenue_get_Price_m00320990C2107FB0A3AD7CEBDDCA6E840A760030_AdjustorThunk },
	{ 0x06000128, YandexAppMetricaRevenue_set_Price_mAD3F94FCEC1E66D09DE0396941932D9E4F7AAFA4_AdjustorThunk },
	{ 0x06000129, YandexAppMetricaRevenue_get_PriceDecimal_mB279A2BE633D3566C2361667496AB4E3468033ED_AdjustorThunk },
	{ 0x0600012A, YandexAppMetricaRevenue_set_PriceDecimal_mF70A4373DD76AAD3D9172912C44A99A950733351_AdjustorThunk },
	{ 0x0600012B, YandexAppMetricaRevenue_get_Currency_m3FA5BCE2DC30757C824F157D3198B4B5638C26CA_AdjustorThunk },
	{ 0x0600012C, YandexAppMetricaRevenue_set_Currency_mEB5437F9FD8CC650791713DE40233158399550D0_AdjustorThunk },
	{ 0x0600012D, YandexAppMetricaRevenue_get_Quantity_mA405E5D1A6E7C6C34B35F51F518E443D3E880ABB_AdjustorThunk },
	{ 0x0600012E, YandexAppMetricaRevenue_set_Quantity_mD219197536505B4A7431F7DEAB37C65D8FB6AE3C_AdjustorThunk },
	{ 0x0600012F, YandexAppMetricaRevenue_get_ProductID_m6BA1288B427B5ACB125C634C2DF41FC29E0F2246_AdjustorThunk },
	{ 0x06000130, YandexAppMetricaRevenue_set_ProductID_mA1CEECADC302ED6A7A6BD38CF9D130BF59391727_AdjustorThunk },
	{ 0x06000131, YandexAppMetricaRevenue_get_Receipt_mD6BE3E2ECFD475796DCAF792DB96E9025FCC8101_AdjustorThunk },
	{ 0x06000132, YandexAppMetricaRevenue_set_Receipt_mFC5DF642121EA3BBE45D5188D9D3C4FFDE4F8092_AdjustorThunk },
	{ 0x06000133, YandexAppMetricaRevenue_get_Payload_m4BB18D93F9A96CC8C104E2311E28259512F7475E_AdjustorThunk },
	{ 0x06000134, YandexAppMetricaRevenue_set_Payload_mE50D0D2D624D7F134182FA70E4065B5F83FCA1AF_AdjustorThunk },
	{ 0x06000135, YandexAppMetricaReceipt_get_Data_m14E7C7A6A19436B92F0AEDC21AEBF0D598E51FDA_AdjustorThunk },
	{ 0x06000136, YandexAppMetricaReceipt_set_Data_m6E43F9474F83C1825BC0CD2536E7028341469447_AdjustorThunk },
	{ 0x06000137, YandexAppMetricaReceipt_get_Signature_m586F08DBD0AB661DF9D4C8D7154C5921B4F23ED2_AdjustorThunk },
	{ 0x06000138, YandexAppMetricaReceipt_set_Signature_m6CFA349C225137EFC2B686916FB2390FE03911A1_AdjustorThunk },
	{ 0x06000139, YandexAppMetricaReceipt_get_TransactionID_m9C4736645755549FBA3C2FA711879BEE669BD8C7_AdjustorThunk },
	{ 0x0600013A, YandexAppMetricaReceipt_set_TransactionID_m2E469887FC93DE2133C185AB100BEE920A510CEC_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1543] = 
{
	7105,
	4654,
	4654,
	4654,
	4654,
	3654,
	4654,
	6103,
	4654,
	7133,
	3727,
	3727,
	4402,
	3580,
	3820,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3820,
	4654,
	2120,
	3820,
	967,
	3727,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7105,
	7105,
	7105,
	7105,
	6861,
	6861,
	6861,
	6861,
	4654,
	3914,
	3912,
	3914,
	2213,
	1183,
	4663,
	4654,
	3727,
	3911,
	3911,
	4663,
	3727,
	3913,
	3914,
	4663,
	4654,
	3915,
	4663,
	4654,
	3911,
	4663,
	4654,
	3727,
	3913,
	3913,
	4663,
	3727,
	3915,
	3915,
	4663,
	4552,
	3333,
	3319,
	4654,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	761,
	6861,
	6861,
	1130,
	1130,
	3319,
	3820,
	4654,
	4654,
	3727,
	2122,
	2122,
	2122,
	1130,
	1130,
	1130,
	2122,
	2122,
	3727,
	3727,
	2122,
	3654,
	3583,
	4527,
	4552,
	3727,
	3727,
	3823,
	3654,
	4654,
	3727,
	3727,
	2122,
	3727,
	3727,
	4654,
	6873,
	6881,
	6861,
	6875,
	6861,
	6846,
	6837,
	6861,
	6874,
	6861,
	6861,
	6861,
	7105,
	6861,
	3727,
	3727,
	3727,
	6638,
	3727,
	4552,
	3727,
	4552,
	3727,
	4405,
	3583,
	4399,
	3578,
	4394,
	3573,
	4394,
	3573,
	4394,
	3573,
	4394,
	3573,
	4403,
	3581,
	4394,
	3573,
	4394,
	3573,
	4552,
	3727,
	4394,
	3573,
	4498,
	3677,
	4498,
	3677,
	3727,
	4552,
	3727,
	4552,
	3727,
	3820,
	4654,
	4654,
	3727,
	2122,
	2122,
	2122,
	1130,
	1130,
	1130,
	2122,
	2122,
	3727,
	3727,
	2122,
	3654,
	3583,
	4552,
	4527,
	3727,
	3727,
	3823,
	3654,
	4654,
	3727,
	3727,
	3727,
	2122,
	3727,
	4654,
	4654,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	6861,
	6391,
	4552,
	4654,
	2677,
	7133,
	4654,
	2677,
	2677,
	3309,
	3319,
	4654,
	2677,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4399,
	3578,
	4399,
	3578,
	6861,
	6391,
	4552,
	4654,
	1749,
	1747,
	4398,
	3577,
	4397,
	3576,
	4552,
	3727,
	4399,
	3578,
	4552,
	3727,
	4404,
	3582,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4552,
	4654,
	4654,
	3808,
	4654,
	4654,
	3727,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	3705,
	4654,
	4654,
	4654,
	4654,
	3705,
	4654,
	4654,
	3727,
	4654,
	3727,
	3727,
	3727,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	4654,
	3727,
	4654,
	3727,
	4654,
	3727,
	4654,
	3705,
	4654,
	4654,
	3727,
	4654,
	3727,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	4654,
	4654,
	3654,
	4654,
	4654,
	4654,
	4654,
	3727,
	4654,
	4654,
	1622,
	4654,
	3727,
	3727,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	3727,
	3727,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	1622,
	3727,
	4654,
	3727,
	4654,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4654,
	3727,
	4654,
	4654,
	3727,
	3727,
	4654,
	4654,
	3727,
	4654,
	3319,
	4654,
	3727,
	4654,
	3727,
	4654,
	3727,
	4654,
	3727,
	4654,
	3727,
	4654,
	4654,
	3727,
	4654,
	4654,
	4654,
	3705,
	3705,
	3654,
	3654,
	4654,
	4654,
	4591,
	4591,
	4643,
	4591,
	3761,
	4591,
	3761,
	4527,
	3705,
	4478,
	3654,
	4478,
	3654,
	4654,
	3727,
	3727,
	783,
	4654,
	1668,
	3727,
	3449,
	4654,
	4591,
	3761,
	4654,
	3727,
	3727,
	783,
	4654,
	4654,
	4654,
	3727,
	3727,
	4654,
	4591,
	3761,
	3705,
	4654,
	3727,
	3727,
	783,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	4654,
	4654,
	4654,
	4654,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	4654,
	4654,
	4654,
	4654,
	7133,
	4654,
	4654,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	3727,
	3727,
	2677,
	4654,
	4654,
	4654,
	4654,
	7133,
	4654,
	4654,
	4654,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4527,
	4552,
	3727,
	3727,
	3727,
	2677,
	4654,
	4654,
	4654,
	4654,
	7133,
	4654,
	4654,
	4654,
	4552,
	3727,
	2126,
	3321,
	4654,
	4654,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4654,
	4654,
	4478,
	4654,
	4654,
	4654,
	2677,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	3727,
	4552,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4552,
	4478,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	4654,
	4654,
	3727,
	3727,
	4552,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	2653,
	4645,
	3452,
	3727,
	3727,
	4645,
	4654,
	3727,
	3727,
	4654,
	4552,
	4654,
	4654,
	2677,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	3727,
	3727,
	4552,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4552,
	4654,
	4654,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4552,
	4654,
	4654,
	4654,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4478,
	4552,
	4645,
	4645,
	4478,
	4478,
	3727,
	4654,
	4654,
	4654,
	3808,
	3808,
	4654,
	4654,
	4552,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	0,
	0,
	0,
	4654,
	3317,
	4478,
	1950,
	4527,
	4552,
	3705,
	4654,
	4654,
	2677,
	7133,
	4654,
	2677,
	2677,
	4654,
	2677,
	4654,
	2677,
	4478,
	3727,
	4552,
	4527,
	4552,
	4478,
	4552,
	3317,
	4552,
	4654,
	7133,
	4654,
	2677,
	2677,
	2677,
	2677,
	2677,
	0,
	0,
	0,
	4654,
	4478,
	4478,
	4654,
	2769,
	4654,
	4654,
	4527,
	2653,
	1950,
	3705,
	909,
	4478,
	2653,
	1950,
	3727,
	3727,
	4645,
	3452,
	4654,
	4654,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	2677,
	4654,
	2677,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4645,
	4478,
	4645,
	4478,
	4478,
	4552,
	4552,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3705,
	3705,
	4654,
	4654,
	2126,
	3321,
	4654,
	4654,
	4654,
	4654,
	4654,
	7133,
	4654,
	2677,
	2677,
	2677,
	2677,
	2677,
	2677,
	2677,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	3705,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	4552,
	4552,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4527,
	3727,
	3727,
	4552,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4654,
	3317,
	3705,
	3705,
	2653,
	3705,
	2653,
	3705,
	2653,
	3705,
	3109,
	4654,
	4654,
	2677,
	4654,
	2677,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	2677,
	4654,
	4478,
	4478,
	4654,
	4654,
	4527,
	4478,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3727,
	1609,
	3808,
	4654,
	4654,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4527,
	4478,
	4654,
	4654,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	7098,
	7098,
	7098,
	7098,
	7105,
	7014,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4643,
	3806,
	4591,
	4527,
	4552,
	4552,
	4552,
	4552,
	4654,
	2677,
	2106,
	4478,
	3727,
	4654,
	4654,
	7133,
	7014,
	4654,
	4654,
	7133,
	0,
	4478,
	4478,
	3727,
	3727,
	4654,
	4654,
	4654,
	4654,
	4654,
	3705,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4401,
	4654,
	4478,
	4654,
	4654,
	4654,
	3727,
	4552,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4478,
	4654,
	1950,
	4654,
	4654,
	4654,
	3654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4478,
	4654,
	4654,
	4654,
	4654,
	4654,
	3761,
	4654,
	4654,
	4654,
	4552,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4654,
	5956,
	4654,
	4654,
	4654,
	3727,
	4552,
	4654,
	3705,
	4654,
	4478,
	4552,
	4654,
	4552,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	2122,
	0,
	4654,
	4654,
	2122,
	0,
	4654,
	5909,
	5909,
	5520,
	6331,
	6331,
	6788,
	5806,
	6788,
	6788,
	6788,
	6788,
	6788,
	6788,
	6788,
	6788,
	4654,
	4591,
	3761,
	4654,
	4591,
	3761,
	4654,
	4591,
	3761,
	5548,
	5534,
	5534,
	5534,
	5549,
	5174,
	4953,
	4862,
	4862,
	5519,
	5519,
	4654,
	4645,
	4654,
	4645,
	4654,
	4645,
	4654,
	4645,
	4654,
	4563,
	4654,
	4563,
	4654,
	4645,
	4654,
	4645,
	4645,
	4654,
	4654,
	4645,
	4654,
	4645,
	3808,
	4654,
	4645,
	4654,
	4645,
	3808,
	5545,
	5534,
	5534,
	5909,
	4952,
	4654,
	4643,
	4654,
	4643,
	4654,
	4643,
	4654,
	4591,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	5888,
	5909,
	5904,
	5888,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	5909,
	5888,
	5909,
	5888,
	5909,
	5909,
	5904,
	5545,
	5545,
	5545,
	5888,
	5909,
	5916,
	5545,
	5534,
	5534,
	5548,
	5534,
	5534,
	5534,
	5545,
	5545,
	5916,
	5909,
	5909,
	5545,
	4952,
	4867,
	4868,
	4952,
	5545,
	5534,
	5534,
	5534,
	5888,
	5909,
	4947,
	5888,
	5888,
	5888,
	6490,
	4654,
	4591,
	3761,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	4654,
	4591,
	3761,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4645,
	3808,
	4654,
	4645,
	3808,
	4654,
	4645,
	3808,
	4654,
	4645,
	3808,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4645,
	3808,
	4654,
	4645,
	3808,
	4654,
	4645,
	3808,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4654,
	4654,
	4643,
	3806,
	4654,
	4591,
	3761,
	4654,
	4591,
	3761,
	4654,
	4591,
	3761,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	4654,
	4552,
	3727,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	4654,
	4480,
	3657,
	5904,
	5516,
	6384,
	6384,
	6384,
	5893,
	5907,
	6384,
	5543,
	5543,
	4654,
	4643,
	3806,
	4654,
	4643,
	3806,
	4478,
	3727,
	4478,
	3727,
	4478,
	3727,
	4478,
	2118,
	4478,
	2126,
	4478,
	3727,
	7133,
	7133,
	5655,
	6703,
	6703,
	4941,
	7014,
	7014,
	7014,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	4654,
	3654,
	4654,
	4654,
	3727,
	3727,
	3727,
	3727,
	3727,
	3727,
	3727,
	4654,
	4654,
	3727,
	3727,
	3727,
	4552,
	6788,
	4552,
	4552,
	4654,
	4654,
	4654,
	0,
	7133,
	4816,
	4816,
	4654,
	4645,
	3808,
	4654,
	4645,
	4527,
	3705,
	4552,
	3727,
	4552,
	3727,
	4552,
	3727,
	4478,
	3654,
	4527,
	4498,
	3677,
	4591,
	3761,
	4640,
	3803,
	4528,
	3706,
	4639,
	3802,
	4527,
	3705,
	4638,
	3801,
	4526,
	3704,
	4478,
	3654,
	4583,
	3754,
	4478,
	3654,
	4478,
	3654,
	4527,
	3705,
	4527,
	3705,
	3319,
	3317,
	6861,
	6703,
	6750,
	6917,
	6980,
	6805,
	6968,
	6788,
	6955,
	6769,
	6703,
	6901,
	6861,
	6850,
	7105,
	4854,
	6861,
	6861,
	3727,
	3654,
	4654,
	130,
	3727,
	3727,
	1733,
	196,
	2677,
	4527,
	6214,
	6861,
	4654,
	3727,
	4654,
	3727,
	3761,
	3677,
	3706,
	3803,
	3654,
	3727,
	3727,
	7133,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x0200007B, { 0, 5 } },
	{ 0x02000084, { 5, 5 } },
	{ 0x060005AC, { 10, 1 } },
};
extern const uint32_t g_rgctx_SerializedSingleton_1_t9F6DD102CC32FEA7FD605727F495030D3F53529A;
extern const uint32_t g_rgctx_T_t59F2170F692EC91CFC8A78583A063AD32F1C79B2;
extern const uint32_t g_rgctx_Object_FindObjectOfType_TisT_t59F2170F692EC91CFC8A78583A063AD32F1C79B2_m2DB434EA0717877CA25773B84E866DB45130EE88;
extern const uint32_t g_rgctx_T_t59F2170F692EC91CFC8A78583A063AD32F1C79B2;
extern const uint32_t g_rgctx_GameObject_AddComponent_TisT_t59F2170F692EC91CFC8A78583A063AD32F1C79B2_m11836D2D4DDF5094C6557C16D148B263E5B30BE9;
extern const uint32_t g_rgctx_Singleton_1_tEB10BC7581192E8DC4004CC6A80E88A3E42C3444;
extern const uint32_t g_rgctx_T_t2337B8A22C295A41D129CA0B4B104663AAC37B94;
extern const uint32_t g_rgctx_Object_FindObjectOfType_TisT_t2337B8A22C295A41D129CA0B4B104663AAC37B94_m6DC7339233F62BC56DE5782844CD1B0D2CD4C435;
extern const uint32_t g_rgctx_T_t2337B8A22C295A41D129CA0B4B104663AAC37B94;
extern const uint32_t g_rgctx_GameObject_AddComponent_TisT_t2337B8A22C295A41D129CA0B4B104663AAC37B94_m0CD12805FA8F016127C31F69C4C48F3599754DD7;
extern const uint32_t g_rgctx_T_t9940F1EF2E37ACBB0A67C02D55D5972F27CF9B9D;
static const Il2CppRGCTXDefinition s_rgctxValues[11] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_SerializedSingleton_1_t9F6DD102CC32FEA7FD605727F495030D3F53529A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t59F2170F692EC91CFC8A78583A063AD32F1C79B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Object_FindObjectOfType_TisT_t59F2170F692EC91CFC8A78583A063AD32F1C79B2_m2DB434EA0717877CA25773B84E866DB45130EE88 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t59F2170F692EC91CFC8A78583A063AD32F1C79B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GameObject_AddComponent_TisT_t59F2170F692EC91CFC8A78583A063AD32F1C79B2_m11836D2D4DDF5094C6557C16D148B263E5B30BE9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Singleton_1_tEB10BC7581192E8DC4004CC6A80E88A3E42C3444 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2337B8A22C295A41D129CA0B4B104663AAC37B94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Object_FindObjectOfType_TisT_t2337B8A22C295A41D129CA0B4B104663AAC37B94_m6DC7339233F62BC56DE5782844CD1B0D2CD4C435 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t2337B8A22C295A41D129CA0B4B104663AAC37B94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GameObject_AddComponent_TisT_t2337B8A22C295A41D129CA0B4B104663AAC37B94_m0CD12805FA8F016127C31F69C4C48F3599754DD7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t9940F1EF2E37ACBB0A67C02D55D5972F27CF9B9D },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule = 
{
	"Assembly-CSharp.dll",
	1543,
	s_methodPointers,
	67,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	11,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
