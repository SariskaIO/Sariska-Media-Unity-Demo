#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t378757FF082427448349A80CC63683B50DA787D3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// CallingExample
struct CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Net.CookieCollection
struct CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608;
// System.Net.CookieContainer
struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// InputRoomName
struct InputRoomName_t0B31EC7BD0717616BDCCAB5E43C5FDEC2EA0B1B1;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PopulateGrid
struct PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F;
// System.Net.ServicePoint
struct ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// SwitchScene
struct SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Token
struct Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// System.Net.WebCompletionSource
struct WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebOperation
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// System.Net.WebRequestStream
struct WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Plugins.ExternalTextureSecond.ExternalTextureSecond/NativeCallbackHandler
struct NativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F;
// Plugins.ExternalTextureSecond.ExternalTextureSecond/PlatformNotSupportedException
struct PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Net.TimerThread/Queue
struct Queue_t644DC21212BC432819522EDA395EB4562BE2CC47;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07589D3D94D1C11EF36EA701FECF510BB9287EB8;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFCF0588B68D7A984E760218A78D2F4DDD2C965;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6552C8B11F66A2DEBFB5EB3DB40A93C049AB3B;
IL2CPP_EXTERN_C String_t* _stringLiteral14A27E70F6CCA9275F2C3CF7BC87225F99690BD8;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC;
IL2CPP_EXTERN_C String_t* _stringLiteral32F3DD73049A39D0D6EA6E63649C09814FEC9174;
IL2CPP_EXTERN_C String_t* _stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F;
IL2CPP_EXTERN_C String_t* _stringLiteral35CDB1F80F67FC612D023284F33E299FAE88133C;
IL2CPP_EXTERN_C String_t* _stringLiteral3D2143BF4CE12D17ED94CF61DBFDE336D3DA4C63;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral682613F9D2F557428095397B7C79AB21F8C6498C;
IL2CPP_EXTERN_C String_t* _stringLiteral73127A1AEB1A68158127FD38896772DEBF8DC320;
IL2CPP_EXTERN_C String_t* _stringLiteral7B335D3C1D5A81B90D816D2038629B4CD04FBCA9;
IL2CPP_EXTERN_C String_t* _stringLiteral7E56B59F9723DC524A7AFF86C2C82B0A14732E64;
IL2CPP_EXTERN_C String_t* _stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962;
IL2CPP_EXTERN_C String_t* _stringLiteral86A95BC22C4E34FD27ED9074139FCF54B0BBEB7E;
IL2CPP_EXTERN_C String_t* _stringLiteral90F4285D57D36202FC1CDE23C6C61BF3340373BF;
IL2CPP_EXTERN_C String_t* _stringLiteral911225FA368F36651E7F4A4C3D380B053626BB59;
IL2CPP_EXTERN_C String_t* _stringLiteral9B680008812CF88AFE80B0805EBC0F713CFDCFFA;
IL2CPP_EXTERN_C String_t* _stringLiteral9D996994351E2575DFFF35EC83059D65F3DA12B0;
IL2CPP_EXTERN_C String_t* _stringLiteralA0287DFC2D8186A0065E8D79504335D2B6345109;
IL2CPP_EXTERN_C String_t* _stringLiteralACF88969CEF6761BDB46D4C2990E853BE0D8FE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralCA86D3B8C9B6E053132E00CA49539B3A9A6A008F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B1B61E2F012DF1D8FA6BB9CB57567EF2FA430F;
IL2CPP_EXTERN_C String_t* _stringLiteralE7326BF4F127FE73C28CD270B3A193A960A76218;
IL2CPP_EXTERN_C String_t* _stringLiteralE83842D0A32F552DD118D279BCE7433F22C6627B;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDA7B01A37510B4A8D129690E3106942DA400AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF41EC4B41F1AAFEEF2D77AE09AAE07E1721D2900;
IL2CPP_EXTERN_C String_t* _stringLiteralFA071198F5CB0A3ADE073B6D1724B0C1DF8ACB15;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFFCFAAE6DC6122FF5D78BC9F4A81BD36217AA87A;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternalTextureSecond_StartAudioCall_m4904D1BB288B8AC0135E74F85D69B740089EF446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternalTextureSecond__cctor_mBEB46F3AB3A35D6F969BC28FE70284F8C4EDC2F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F_m27594C0580CFD73B356105E3D9CB08D11E371CB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRoomName_displayText_mB7DC765226C52697A995A55607CE6AB33CB82164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisToken_t98C63F450DC6EE55860A2E91BF1B3C00350142A9_m1234A5AD7A34619D30D7A428AFCCE5B5EF5ECF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Plugins.ExternalTextureSecond.ExternalTextureSecond
struct ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4  : public RuntimeObject
{
};

struct ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields
{
	// UnityEngine.AndroidJavaObject Plugins.ExternalTextureSecond.ExternalTextureSecond::mGLTexCtrl
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___mGLTexCtrl_0;
	// UnityEngine.GameObject Plugins.ExternalTextureSecond.ExternalTextureSecond::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_2;
	// UnityEngine.AndroidJavaObject Plugins.ExternalTextureSecond.ExternalTextureSecond::androidJavaNativeCalculation
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaNativeCalculation_4;
	// System.Int32 Plugins.ExternalTextureSecond.ExternalTextureSecond::numberOfUsers
	int32_t ___numberOfUsers_5;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Plugins.NumberOfUsers.NumberOfUsers
struct NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE  : public RuntimeObject
{
};

struct NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields
{
	// System.Int32 Plugins.NumberOfUsers.NumberOfUsers::numberOfUsers
	int32_t ___numberOfUsers_0;
	// UnityEngine.GameObject[] Plugins.NumberOfUsers.NumberOfUsers::prefabGameObject
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___prefabGameObject_1;
	// System.Boolean Plugins.NumberOfUsers.NumberOfUsers::userChanged
	bool ___userChanged_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Token
struct Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9  : public RuntimeObject
{
	// System.String Token::token
	String_t* ___token_0;
};

// TokenAPIHelp
struct TokenAPIHelp_tB94D4452111815BCDB8CF9E59FA5638A605BB1D2  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;
};

struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_StaticFields
{
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_t644DC21212BC432819522EDA395EB4562BE2CC47* ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E* ___webRequestCreate_6;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_8;
};

// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_1;
};

// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 
{
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;
};
// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_pinvoke
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_com
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9  : public WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B
{
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___requestUri_9;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___actualUri_10;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_11;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_12;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_13;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___certificates_14;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_15;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_16;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_17;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9* ___continueDelegate_18;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookieContainer_19;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_20;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_21;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_22;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_23;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_24;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_25;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_26;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_27;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_28;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_29;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_30;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_31;
	// System.Version System.Net.HttpWebRequest::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_32;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_33;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___actualVersion_34;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_35;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_36;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29* ___servicePoint_37;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_38;
	// System.Int32 System.Net.HttpWebRequest::continueTimeout
	int32_t ___continueTimeout_39;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB* ___writeStream_40;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___webResponse_41;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5* ___responseTask_42;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___currentOperation_43;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_44;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_45;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_46;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_47;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_48;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject* ___locker_49;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_50;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_51;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_55;
	// Mono.Net.Security.MobileTlsProvider System.Net.HttpWebRequest::tlsProvider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___tlsProvider_56;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___tlsSettings_57;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F* ___certValidationCallback_58;
	// System.Boolean System.Net.HttpWebRequest::hostHasPort
	bool ___hostHasPort_59;
	// System.Uri System.Net.HttpWebRequest::hostUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___hostUri_60;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___auth_state_61;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___proxy_auth_state_62;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t378757FF082427448349A80CC63683B50DA787D3* ___ResendContentFactory_63;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_64;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_65;
};

struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_StaticFields
{
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_52;
	// System.Int32 System.Net.HttpWebRequest::defaultMaximumErrorResponseLength
	int32_t ___defaultMaximumErrorResponseLength_53;
	// System.Net.Cache.RequestCachePolicy System.Net.HttpWebRequest::defaultCachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___defaultCachePolicy_54;
};

// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A  : public WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682
{
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_2;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_3;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608* ___cookieCollection_4;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_5;
	// System.Version System.Net.HttpWebResponse::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_6;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_7;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_8;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_9;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_10;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookie_container_11;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_12;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Plugins.ExternalTextureSecond.ExternalTextureSecond/PlatformNotSupportedException
struct PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD  : public Exception_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CallingExample
struct CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CallingExample::muteAudioObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muteAudioObject_4;
	// UnityEngine.GameObject CallingExample::speakerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speakerObject_5;
	// UnityEngine.UI.Button CallingExample::muteButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___muteButton_6;
	// UnityEngine.UI.Button CallingExample::speakerButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___speakerButton_7;
	// Token CallingExample::tokenInstance
	Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* ___tokenInstance_10;
	// System.String CallingExample::roomName
	String_t* ___roomName_11;
	// System.String CallingExample::userName
	String_t* ___userName_12;
};

struct CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_StaticFields
{
	// System.Boolean CallingExample::isMuted
	bool ___isMuted_8;
	// System.Boolean CallingExample::isSpeakerOn
	bool ___isSpeakerOn_9;
};

// InputRoomName
struct InputRoomName_t0B31EC7BD0717616BDCCAB5E43C5FDEC2EA0B1B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField InputRoomName::input
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___input_4;
};

// PopulateGrid
struct PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PopulateGrid::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_4;
	// UnityEngine.GameObject[] PopulateGrid::prefabGameObject
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___prefabGameObject_5;
};

// SwitchScene
struct SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button SwitchScene::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_6;
	// UnityEngine.GameObject SwitchScene::inputFieldRoomNameGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inputFieldRoomNameGameObject_7;
	// UnityEngine.GameObject SwitchScene::inputFieldUsernameGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inputFieldUsernameGameObject_8;
};

struct SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields
{
	// System.String SwitchScene::InputRoomName
	String_t* ___InputRoomName_4;
	// System.String SwitchScene::InputUserName
	String_t* ___InputUserName_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Plugins.ExternalTextureSecond.ExternalTextureSecond/NativeCallbackHandler
struct NativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Plugins.ExternalTextureSecond.ExternalTextureSecond/NativeCallbackHandler::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_32;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_70;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// Token TokenAPIHelp::GetSessionToken(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* TokenAPIHelp_GetSessionToken_mFC4B5526AEF58FB43D261B8174A7147050CB83D3 (String_t* ___RoomName0, String_t* ___UserName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond::StartAudioCall(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_StartAudioCall_m4904D1BB288B8AC0135E74F85D69B740089EF446 (String_t* ___token0, String_t* ___userName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond::nativeGenericCallHandler(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_nativeGenericCallHandler_m1DA3188C142C9F2E8BF3EA1E4787F073C0F356BF (String_t* ___onMethodCalled0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::get_onEndEdit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void PopulateGrid::populate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopulateGrid_populate_m22CDF7307C507C05495BC9DF6B09BA41108971A2 (PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7* __this, const RuntimeMethod* method) ;
// System.Void PopulateGrid::onDestroyGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopulateGrid_onDestroyGrid_mF7D09A2EB258D3DC9F6B3AA8208109DBB04B966E (PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* WebRequest_Create_m18D598C169B53797E9B26A710442CAF2D786B04A (String_t* ___requestUriString0, const RuntimeMethod* method) ;
// System.Void System.Net.HttpWebRequest::set_AutomaticDecompression(System.Net.DecompressionMethods)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_AutomaticDecompression_m476D1CA785C0FF74419526CFBCA00F29E0E59D73 (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Token>(System.String)
inline Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* JsonUtility_FromJson_TisToken_t98C63F450DC6EE55860A2E91BF1B3C00350142A9_m1234A5AD7A34619D30D7A428AFCCE5B5EF5ECF32 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Plugins.ExternalTextureSecond.ExternalTextureSecond/NativeCallbackHandler>()
inline NativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F* GameObject_AddComponent_TisNativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F_m27594C0580CFD73B356105E3D9CB08D11E371CB0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond/PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mCEFBB7D6AA52EA85E07C5C86C3533893E492AAA3 (PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::initializeSariskaMediaTransport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_initializeSariskaMediaTransport_m9EBCF62C4F9CE9F2A9C8883910C4CC41593D9F05 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onMuteAudioIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onMuteAudioIos_mA92E8BAFA02F591FB25089C9D5B5CB0ED66E5931 (const RuntimeMethod* method) ;
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onUnMuteAudioIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onUnMuteAudioIos_m070DDF53825AC13C0DFF9EA7EF77A3013431E414 (const RuntimeMethod* method) ;
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onSpeakerIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onSpeakerIos_m3DC0ACED79DCA21F6C05202BBC5D20F068DE45A6 (const RuntimeMethod* method) ;
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::offSpeakerIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_offSpeakerIos_m0271324C438D125337E015585851C7D023A51265 (const RuntimeMethod* method) ;
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onLogoutIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onLogoutIos_m5B858FC1059B4D7467AA0DAE6D7DADD446BA7F97 (const RuntimeMethod* method) ;
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onEndCallIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onEndCallIos_m477FA472D5B6EEC1987FE0F1FD0CEA47CDEABB90 (const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CallingExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallingExample_Awake_m6CB8A3554C26E4119EE90BE54F44D7361F9AA072 (CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682613F9D2F557428095397B7C79AB21F8C6498C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73127A1AEB1A68158127FD38896772DEBF8DC320);
		s_Il2CppMethodInitialized = true;
	}
	{
		// muteAudioObject = GameObject.FindWithTag("Mute Button");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F(_stringLiteral682613F9D2F557428095397B7C79AB21F8C6498C, NULL);
		__this->___muteAudioObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___muteAudioObject_4), (void*)L_0);
		// muteButton = muteAudioObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___muteAudioObject_4;
		NullCheck(L_1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_1, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___muteButton_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___muteButton_6), (void*)L_2);
		// speakerObject = GameObject.FindWithTag("Speaker Button");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F(_stringLiteral73127A1AEB1A68158127FD38896772DEBF8DC320, NULL);
		__this->___speakerObject_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speakerObject_5), (void*)L_3);
		// speakerButton = speakerObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___speakerObject_5;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5;
		L_5 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_4, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___speakerButton_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speakerButton_7), (void*)L_5);
		// roomName = SwitchScene.InputRoomName;
		String_t* L_6 = ((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputRoomName_4;
		__this->___roomName_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomName_11), (void*)L_6);
		// userName = SwitchScene.InputUserName;
		String_t* L_7 = ((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputUserName_5;
		__this->___userName_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userName_12), (void*)L_7);
		// tokenInstance  = TokenAPIHelp.GetSessionToken(roomName, userName);
		String_t* L_8 = __this->___roomName_11;
		String_t* L_9 = __this->___userName_12;
		Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* L_10;
		L_10 = TokenAPIHelp_GetSessionToken_mFC4B5526AEF58FB43D261B8174A7147050CB83D3(L_8, L_9, NULL);
		__this->___tokenInstance_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenInstance_10), (void*)L_10);
		// }
		return;
	}
}
// System.Void CallingExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallingExample_Start_m4D885D793A1468C540F027AFD223CA4554CF8124 (CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE83842D0A32F552DD118D279BCE7433F22C6627B);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Debug.Log("Calling Example Started");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE83842D0A32F552DD118D279BCE7433F22C6627B, NULL);
		// ExternalTextureSecond.StartAudioCall(tokenInstance.token, roomName);
		Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* L_0 = __this->___tokenInstance_10;
		NullCheck(L_0);
		String_t* L_1 = L_0->___token_0;
		String_t* L_2 = __this->___roomName_11;
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		ExternalTextureSecond_StartAudioCall_m4904D1BB288B8AC0135E74F85D69B740089EF446(L_1, L_2, NULL);
		// }
		goto IL_0029;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.Exception)
		// Debug.LogError(exception);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// }
		return;
	}
}
// System.Void CallingExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallingExample_Update_m6B2C0C04F089867A23F9FA00798B0EAAD4982548 (CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CallingExample::MuteUnMuteAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallingExample_MuteUnMuteAudio_mE49653E1F47ED66BAFCB347FA994A3A5E4803B6C (CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35CDB1F80F67FC612D023284F33E299FAE88133C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D2143BF4CE12D17ED94CF61DBFDE336D3DA4C63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E56B59F9723DC524A7AFF86C2C82B0A14732E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFDA7B01A37510B4A8D129690E3106942DA400AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isMuted)
		bool L_0 = ((CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_StaticFields*)il2cpp_codegen_static_fields_for(CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var))->___isMuted_8;
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		// muteButton.image.sprite = Resources.Load<Sprite>("unmute-audio") as Sprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___muteButton_6;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_1, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralEFDA7B01A37510B4A8D129690E3106942DA400AD, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// ExternalTextureSecond.nativeGenericCallHandler("onMuteAudio");
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		ExternalTextureSecond_nativeGenericCallHandler_m1DA3188C142C9F2E8BF3EA1E4787F073C0F356BF(_stringLiteral35CDB1F80F67FC612D023284F33E299FAE88133C, NULL);
		// isMuted = true;
		((CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_StaticFields*)il2cpp_codegen_static_fields_for(CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var))->___isMuted_8 = (bool)1;
		return;
	}

IL_0032:
	{
		// muteButton.image.sprite = Resources.Load<Sprite>("mute-audio") as Sprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___muteButton_6;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_4, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral3D2143BF4CE12D17ED94CF61DBFDE336D3DA4C63, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// ExternalTextureSecond.nativeGenericCallHandler("onUnMuteAudio");
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		ExternalTextureSecond_nativeGenericCallHandler_m1DA3188C142C9F2E8BF3EA1E4787F073C0F356BF(_stringLiteral7E56B59F9723DC524A7AFF86C2C82B0A14732E64, NULL);
		// isMuted = false;
		((CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_StaticFields*)il2cpp_codegen_static_fields_for(CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var))->___isMuted_8 = (bool)0;
		// }
		return;
	}
}
// System.Void CallingExample::EndCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallingExample_EndCall_m84572AE73E1C8B211618839684CA044BA9E68388 (CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ExternalTextureSecond.nativeGenericCallHandler("onEndCall");
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		ExternalTextureSecond_nativeGenericCallHandler_m1DA3188C142C9F2E8BF3EA1E4787F073C0F356BF(_stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC, NULL);
		// }
		return;
	}
}
// System.Void CallingExample::OnSpeakerChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallingExample_OnSpeakerChange_m183A28BD948851F3E6061AC583B4E46AE1AE6DD9 (CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6552C8B11F66A2DEBFB5EB3DB40A93C049AB3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14A27E70F6CCA9275F2C3CF7BC87225F99690BD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B1B61E2F012DF1D8FA6BB9CB57567EF2FA430F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFCFAAE6DC6122FF5D78BC9F4A81BD36217AA87A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isSpeakerOn)
		bool L_0 = ((CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_StaticFields*)il2cpp_codegen_static_fields_for(CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var))->___isSpeakerOn_9;
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		// speakerButton.image.sprite = Resources.Load<Sprite>("speaker-off") as Sprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___speakerButton_7;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_1, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral14A27E70F6CCA9275F2C3CF7BC87225F99690BD8, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// ExternalTextureSecond.nativeGenericCallHandler("onSpeaker");
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		ExternalTextureSecond_nativeGenericCallHandler_m1DA3188C142C9F2E8BF3EA1E4787F073C0F356BF(_stringLiteralFFCFAAE6DC6122FF5D78BC9F4A81BD36217AA87A, NULL);
		// isSpeakerOn = true;
		((CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_StaticFields*)il2cpp_codegen_static_fields_for(CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var))->___isSpeakerOn_9 = (bool)1;
		return;
	}

IL_0032:
	{
		// speakerButton.image.sprite = Resources.Load<Sprite>("speaker") as Sprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___speakerButton_7;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_4, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral0F6552C8B11F66A2DEBFB5EB3DB40A93C049AB3B, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// ExternalTextureSecond.nativeGenericCallHandler("offSpeaker");
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		ExternalTextureSecond_nativeGenericCallHandler_m1DA3188C142C9F2E8BF3EA1E4787F073C0F356BF(_stringLiteralE2B1B61E2F012DF1D8FA6BB9CB57567EF2FA430F, NULL);
		// isSpeakerOn = false;
		((CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_StaticFields*)il2cpp_codegen_static_fields_for(CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB_il2cpp_TypeInfo_var))->___isSpeakerOn_9 = (bool)0;
		// }
		return;
	}
}
// System.Void CallingExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallingExample__ctor_mAEC6183633B21F5FBCC634E4BE5D5287ACC4DDF8 (CallingExample_t4ABE6E23DE554E7CB7F53D471B58B3EF5AF7B7AB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InputRoomName::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRoomName_Start_mAF50689F94DE25281FFDEDBB626E1FED1EDE1086 (InputRoomName_t0B31EC7BD0717616BDCCAB5E43C5FDEC2EA0B1B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRoomName_displayText_mB7DC765226C52697A995A55607CE6AB33CB82164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<InputField>().onEndEdit.AddListener(displayText);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1;
		L_1 = GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E(L_0, GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var);
		NullCheck(L_1);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_2;
		L_2 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3_inline(L_1, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_3 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_3, __this, (intptr_t)((void*)InputRoomName_displayText_mB7DC765226C52697A995A55607CE6AB33CB82164_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_2, L_3, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void InputRoomName::displayText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRoomName_displayText_mB7DC765226C52697A995A55607CE6AB33CB82164 (InputRoomName_t0B31EC7BD0717616BDCCAB5E43C5FDEC2EA0B1B1* __this, String_t* ___arg00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B680008812CF88AFE80B0805EBC0F713CFDCFFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print(arg0);
		String_t* L_0 = ___arg00;
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_0, NULL);
		// Console.WriteLine("Dipak is here");
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteral9B680008812CF88AFE80B0805EBC0F713CFDCFFA, NULL);
		// Debug.Log(arg0);
		String_t* L_1 = ___arg00;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void InputRoomName::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRoomName_Update_m627ABB65C79EA3D06DCF0C5CD822A80BFF250314 (InputRoomName_t0B31EC7BD0717616BDCCAB5E43C5FDEC2EA0B1B1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InputRoomName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRoomName__ctor_mD37EFE75059D937BF4A4F4BA0BEC361306F1FAEA (InputRoomName_t0B31EC7BD0717616BDCCAB5E43C5FDEC2EA0B1B1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PopulateGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopulateGrid_Start_mEE07A848D5701829BDD009CEA164C0BA0591CEBF (PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7* __this, const RuntimeMethod* method) 
{
	{
		// populate();
		PopulateGrid_populate_m22CDF7307C507C05495BC9DF6B09BA41108971A2(__this, NULL);
		// }
		return;
	}
}
// System.Void PopulateGrid::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopulateGrid_Update_mB1013F22F11B8FBBB569463DF68749C3B6E72A82 (PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(NumberOfUsers.userChanged == false)
		il2cpp_codegen_runtime_class_init_inline(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		bool L_0 = ((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___userChanged_2;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// NumberOfUsers.userChanged = false;
		il2cpp_codegen_runtime_class_init_inline(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___userChanged_2 = (bool)0;
		// onDestroyGrid();
		PopulateGrid_onDestroyGrid_mF7D09A2EB258D3DC9F6B3AA8208109DBB04B966E(__this, NULL);
		// prefabGameObject = new GameObject[NumberOfUsers.numberOfUsers];
		int32_t L_1 = ((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___numberOfUsers_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___prefabGameObject_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabGameObject_5), (void*)L_2);
		// populate();
		PopulateGrid_populate_m22CDF7307C507C05495BC9DF6B09BA41108971A2(__this, NULL);
		// }
		return;
	}
}
// System.Void PopulateGrid::populate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopulateGrid_populate_m22CDF7307C507C05495BC9DF6B09BA41108971A2 (PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < NumberOfUsers.numberOfUsers; i++)
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		// prefabGameObject[i] = Instantiate(prefab, transform);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___prefabGameObject_5;
		int32_t L_1 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___prefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_4);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_4);
		// for(int i = 0; i < NumberOfUsers.numberOfUsers; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		// for(int i = 0; i < NumberOfUsers.numberOfUsers; i++)
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		int32_t L_7 = ((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___numberOfUsers_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PopulateGrid::onDestroyGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopulateGrid_onDestroyGrid_mF7D09A2EB258D3DC9F6B3AA8208109DBB04B966E (PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(GameObject obj in prefabGameObject)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___prefabGameObject_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach(GameObject obj in prefabGameObject)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// Destroy(obj);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// foreach(GameObject obj in prefabGameObject)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PopulateGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopulateGrid__ctor_m402B6CDEA782DC528CD11E2F8F01BEFC3AC437C9 (PopulateGrid_t3ED36E51EB886EACE7296E901859BEEC7486E8A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[] prefabGameObject = NumberOfUsers.prefabGameObject;
		il2cpp_codegen_runtime_class_init_inline(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___prefabGameObject_1;
		__this->___prefabGameObject_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabGameObject_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchScene_Start_m230D8F5E41ACDA027A44FF546087082EA6E2D3B0 (SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F4285D57D36202FC1CDE23C6C61BF3340373BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputFieldRoomNameGameObject = GameObject.Find("InputField");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F, NULL);
		__this->___inputFieldRoomNameGameObject_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputFieldRoomNameGameObject_7), (void*)L_0);
		// inputFieldUsernameGameObject = GameObject.Find("InputFieldUsername");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral90F4285D57D36202FC1CDE23C6C61BF3340373BF, NULL);
		__this->___inputFieldUsernameGameObject_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputFieldUsernameGameObject_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void SwitchScene::TaskOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchScene_TaskOnClick_m37C533311E42988B428E2E91DB557330ADAE6792 (SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA86D3B8C9B6E053132E00CA49539B3A9A6A008F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputRoomName = inputFieldRoomNameGameObject.GetComponent<InputField>().text;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___inputFieldRoomNameGameObject_7;
		NullCheck(L_0);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1;
		L_1 = GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E(L_0, GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_1, NULL);
		((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputRoomName_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputRoomName_4), (void*)L_2);
		// InputUserName = inputFieldUsernameGameObject.GetComponent<InputField>().text;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___inputFieldUsernameGameObject_8;
		NullCheck(L_3);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4;
		L_4 = GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E(L_3, GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_4, NULL);
		((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputUserName_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputUserName_5), (void*)L_5);
		// if(InputRoomName == "")
		String_t* L_6 = ((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputRoomName_4;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// }else if (InputUserName == "")
		String_t* L_8 = ((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputUserName_5;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		// return;
		return;
	}

IL_004e:
	{
		// SceneManager.LoadScene(sceneName: "MediaUnityScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralCA86D3B8C9B6E053132E00CA49539B3A9A6A008F, NULL);
		// }
		return;
	}
}
// System.Void SwitchScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchScene__ctor_m952ED4020DD0C41DFC96B2088E72F87611E4F028 (SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Token::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_m566A2DD32C941B96EB80AE9C2D8E268571692BFF (Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Token TokenAPIHelp::GetSessionToken(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* TokenAPIHelp_GetSessionToken_mFC4B5526AEF58FB43D261B8174A7147050CB83D3 (String_t* ___RoomName0, String_t* ___UserName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisToken_t98C63F450DC6EE55860A2E91BF1B3C00350142A9_m1234A5AD7A34619D30D7A428AFCCE5B5EF5ECF32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07589D3D94D1C11EF36EA701FECF510BB9287EB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFCF0588B68D7A984E760218A78D2F4DDD2C965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32F3DD73049A39D0D6EA6E63649C09814FEC9174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A95BC22C4E34FD27ED9074139FCF54B0BBEB7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D996994351E2575DFFF35EC83059D65F3DA12B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF41EC4B41F1AAFEEF2D77AE09AAE07E1721D2900);
		s_Il2CppMethodInitialized = true;
	}
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_3 = NULL;
	{
		// string data = "{\"sessionId\":\"" + RoomName + "\"," +
		//     "\"apiKey\":\"27fd6f8080d512442a3694f461adb3986cda5ba39dbe368d75\",\"user\":{\"name\":\"" + UserName + "\",\"moderator\": false}}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral07589D3D94D1C11EF36EA701FECF510BB9287EB8);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral07589D3D94D1C11EF36EA701FECF510BB9287EB8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___RoomName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral86A95BC22C4E34FD27ED9074139FCF54B0BBEB7E);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral86A95BC22C4E34FD27ED9074139FCF54B0BBEB7E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___UserName1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral32F3DD73049A39D0D6EA6E63649C09814FEC9174);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral32F3DD73049A39D0D6EA6E63649C09814FEC9174);
		String_t* L_8;
		L_8 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_7, NULL);
		V_1 = L_8;
		// byte[] dataBytes = Encoding.UTF8.GetBytes(data);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
		L_9 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_10 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, L_10);
		V_2 = L_11;
		// Debug.Log("Creating request");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF41EC4B41F1AAFEEF2D77AE09AAE07E1721D2900, NULL);
		// request = (HttpWebRequest)(WebRequest.Create("https://api.sariska.io/api/v1/misc/generate-token"));
		il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_12;
		L_12 = WebRequest_Create_m18D598C169B53797E9B26A710442CAF2D786B04A(_stringLiteral0DFCF0588B68D7A984E760218A78D2F4DDD2C965, NULL);
		V_0 = ((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)CastclassClass((RuntimeObject*)L_12, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var));
		// Debug.Log(request);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_13 = V_0;
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		// Debug.Log("Done Creating request");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9D996994351E2575DFFF35EC83059D65F3DA12B0, NULL);
		// request.AutomaticDecompression = DecompressionMethods.GZip | DecompressionMethods.Deflate;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_14 = V_0;
		NullCheck(L_14);
		HttpWebRequest_set_AutomaticDecompression_m476D1CA785C0FF74419526CFBCA00F29E0E59D73(L_14, 3, NULL);
		// request.ContentLength = dataBytes.Length;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		NullCheck(L_16);
		NullCheck(L_15);
		VirtualActionInvoker1< int64_t >::Invoke(14 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_15, ((int64_t)((int32_t)(((RuntimeArray*)L_16)->max_length))));
		// request.ContentType = "application/json";
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_17 = V_0;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Net.WebRequest::set_ContentType(System.String) */, L_17, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		// request.Method = "POST";
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_18 = V_0;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_18, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		// using (Stream requestBody = request.GetRequestStream())
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_19 = V_0;
		NullCheck(L_19);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20;
		L_20 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(24 /* System.IO.Stream System.Net.WebRequest::GetRequestStream() */, L_19);
		V_3 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = V_3;
					if (!L_21)
					{
						goto IL_00a6;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = V_3;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_00a6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// requestBody.Write(dataBytes, 0, dataBytes.Length);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)));
			// }
			goto IL_00a7;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		// HttpWebResponse response = (HttpWebResponse)request.GetResponse();
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_26 = V_0;
		NullCheck(L_26);
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_27;
		L_27 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(25 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_26);
		// StreamReader reader = new StreamReader(response.GetResponseStream());
		NullCheck(((HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A*)CastclassClass((RuntimeObject*)L_27, HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var)));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28;
		L_28 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(12 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, ((HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A*)CastclassClass((RuntimeObject*)L_27, HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var)));
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_29 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_29, L_28, NULL);
		// string json = reader.ReadToEnd();
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadToEnd() */, L_29);
		// return JsonUtility.FromJson<Token>(json);
		Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* L_31;
		L_31 = JsonUtility_FromJson_TisToken_t98C63F450DC6EE55860A2E91BF1B3C00350142A9_m1234A5AD7A34619D30D7A428AFCCE5B5EF5ECF32(L_30, JsonUtility_FromJson_TisToken_t98C63F450DC6EE55860A2E91BF1B3C00350142A9_m1234A5AD7A34619D30D7A428AFCCE5B5EF5ECF32_RuntimeMethod_var);
		return L_31;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Plugins.NumberOfUsers.NumberOfUsers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberOfUsers__cctor_m0252C5839DB3D45CD992EA099108E1AC3D65FE85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int numberOfUsers = 1;
		((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___numberOfUsers_0 = 1;
		// public static GameObject[] prefabGameObject = new GameObject[numberOfUsers];
		int32_t L_0 = ((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___numberOfUsers_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___prefabGameObject_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___prefabGameObject_1), (void*)L_1);
		// public static bool userChanged = false;
		((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___userChanged_2 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::initializeSariskaMediaTransport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_initializeSariskaMediaTransport_m9EBCF62C4F9CE9F2A9C8883910C4CC41593D9F05 (const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::initializeSariskaMediaTransport()' has no implementation."), NULL);
}
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onMuteAudioIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onMuteAudioIos_mA92E8BAFA02F591FB25089C9D5B5CB0ED66E5931 (const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onMuteAudioIos()' has no implementation."), NULL);
}
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onUnMuteAudioIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onUnMuteAudioIos_m070DDF53825AC13C0DFF9EA7EF77A3013431E414 (const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onUnMuteAudioIos()' has no implementation."), NULL);
}
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onSpeakerIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onSpeakerIos_m3DC0ACED79DCA21F6C05202BBC5D20F068DE45A6 (const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onSpeakerIos()' has no implementation."), NULL);
}
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::offSpeakerIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_offSpeakerIos_m0271324C438D125337E015585851C7D023A51265 (const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::offSpeakerIos()' has no implementation."), NULL);
}
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onLogoutIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onLogoutIos_m5B858FC1059B4D7467AA0DAE6D7DADD446BA7F97 (const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onLogoutIos()' has no implementation."), NULL);
}
// System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onEndCallIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalTextureSecond_onEndCallIos_m477FA472D5B6EEC1987FE0F1FD0CEA47CDEABB90 (const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.String Plugins.ExternalTextureSecond.ExternalTextureSecond::onEndCallIos()' has no implementation."), NULL);
}
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond__cctor_mBEB46F3AB3A35D6F969BC28FE70284F8C4EDC2F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F_m27594C0580CFD73B356105E3D9CB08D11E371CB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACF88969CEF6761BDB46D4C2990E853BE0D8FE5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7326BF4F127FE73C28CD270B3A193A960A76218);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// private static int numberOfUsers = 1;
		((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5 = 1;
		// gameObject = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_0, NULL);
		((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___gameObject_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___gameObject_2), (void*)L_0);
		// gameObject.name = "PluginBridge";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___gameObject_2;
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteralACF88969CEF6761BDB46D4C2990E853BE0D8FE5D, NULL);
		// gameObject.AddComponent<NativeCallbackHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___gameObject_2;
		NullCheck(L_2);
		NativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F* L_3;
		L_3 = GameObject_AddComponent_TisNativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F_m27594C0580CFD73B356105E3D9CB08D11E371CB0(L_2, GameObject_AddComponent_TisNativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F_m27594C0580CFD73B356105E3D9CB08D11E371CB0_RuntimeMethod_var);
		// UnityEngine.Object.DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___gameObject_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_4, NULL);
		// switch (Application.platform)
		int32_t L_5;
		L_5 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_007c;
		}
	}
	{
		// var androidJavaUnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_8, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivityObject = androidJavaUnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_8, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_0 = L_9;
		// AndroidJavaClass androidWebViewApiClass = new AndroidJavaClass(JAVA_OBJECT_NAME);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteralE7326BF4F127FE73C28CD270B3A193A960A76218, NULL);
		// androidJavaNativeCalculation = androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		NullCheck(L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_10, _stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962, L_12, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___androidJavaNativeCalculation_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___androidJavaNativeCalculation_4), (void*)L_14);
		// break;
		return;
	}

IL_007c:
	{
		// throw new PlatformNotSupportedException();
		PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD* L_15 = (PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		PlatformNotSupportedException__ctor_mCEFBB7D6AA52EA85E07C5C86C3533893E492AAA3(L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalTextureSecond__cctor_mBEB46F3AB3A35D6F969BC28FE70284F8C4EDC2F6_RuntimeMethod_var)));
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond::StartAudioCall(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_StartAudioCall_m4904D1BB288B8AC0135E74F85D69B740089EF446 (String_t* ___token0, String_t* ___userName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA071198F5CB0A3ADE073B6D1724B0C1DF8ACB15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (Application.platform)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0034;
		}
	}
	{
		// androidJavaNativeCalculation.Call("startAudioCall", token, userName);
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___androidJavaNativeCalculation_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = ___token0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___userName1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteralFA071198F5CB0A3ADE073B6D1724B0C1DF8ACB15, L_7, NULL);
		// break;
		return;
	}

IL_002d:
	{
		// initializeSariskaMediaTransport();
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = ExternalTextureSecond_initializeSariskaMediaTransport_m9EBCF62C4F9CE9F2A9C8883910C4CC41593D9F05(NULL);
		// break;
		return;
	}

IL_0034:
	{
		// throw new PlatformNotSupportedException();
		PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD* L_10 = (PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		PlatformNotSupportedException__ctor_mCEFBB7D6AA52EA85E07C5C86C3533893E492AAA3(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalTextureSecond_StartAudioCall_m4904D1BB288B8AC0135E74F85D69B740089EF446_RuntimeMethod_var)));
	}
}
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond::nativeGenericCallHandler(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_nativeGenericCallHandler_m1DA3188C142C9F2E8BF3EA1E4787F073C0F356BF (String_t* ___onMethodCalled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35CDB1F80F67FC612D023284F33E299FAE88133C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E56B59F9723DC524A7AFF86C2C82B0A14732E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911225FA368F36651E7F4A4C3D380B053626BB59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B1B61E2F012DF1D8FA6BB9CB57567EF2FA430F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFCFAAE6DC6122FF5D78BC9F4A81BD36217AA87A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (Application.platform)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_009b;
		}
	}
	{
		// androidJavaNativeCalculation.Call(onMethodCalled);
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___androidJavaNativeCalculation_4;
		String_t* L_4 = ___onMethodCalled0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, L_4, L_5, NULL);
		// break;
		return;
	}

IL_0023:
	{
		String_t* L_6 = ___onMethodCalled0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral35CDB1F80F67FC612D023284F33E299FAE88133C, NULL);
		if (L_7)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_8 = ___onMethodCalled0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral7E56B59F9723DC524A7AFF86C2C82B0A14732E64, NULL);
		if (L_9)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = ___onMethodCalled0;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralFFCFAAE6DC6122FF5D78BC9F4A81BD36217AA87A, NULL);
		if (L_11)
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_12 = ___onMethodCalled0;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteralE2B1B61E2F012DF1D8FA6BB9CB57567EF2FA430F, NULL);
		if (L_13)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_14 = ___onMethodCalled0;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral911225FA368F36651E7F4A4C3D380B053626BB59, NULL);
		if (L_15)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_16 = ___onMethodCalled0;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC, NULL);
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		return;
	}

IL_0072:
	{
		// onMuteAudioIos();
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = ExternalTextureSecond_onMuteAudioIos_mA92E8BAFA02F591FB25089C9D5B5CB0ED66E5931(NULL);
		// break;
		return;
	}

IL_0079:
	{
		// onUnMuteAudioIos();
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = ExternalTextureSecond_onUnMuteAudioIos_m070DDF53825AC13C0DFF9EA7EF77A3013431E414(NULL);
		// break;
		return;
	}

IL_0080:
	{
		// onSpeakerIos();
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = ExternalTextureSecond_onSpeakerIos_m3DC0ACED79DCA21F6C05202BBC5D20F068DE45A6(NULL);
		// break;
		return;
	}

IL_0087:
	{
		// offSpeakerIos();
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = ExternalTextureSecond_offSpeakerIos_m0271324C438D125337E015585851C7D023A51265(NULL);
		// break;
		return;
	}

IL_008e:
	{
		// onLogoutIos();
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = ExternalTextureSecond_onLogoutIos_m5B858FC1059B4D7467AA0DAE6D7DADD446BA7F97(NULL);
		// break;
		return;
	}

IL_0095:
	{
		// onEndCallIos();
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = ExternalTextureSecond_onEndCallIos_m477FA472D5B6EEC1987FE0F1FD0CEA47CDEABB90(NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond/PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mCEFBB7D6AA52EA85E07C5C86C3533893E492AAA3 (PlatformNotSupportedException_tA0F8F129929116455D93392B1644B352FE48A2BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlatformNotSupportedException() : base() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public PlatformNotSupportedException() : base() { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond/NativeCallbackHandler::HandleTrackAdded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler_HandleTrackAdded_m59887AA5EFE04D0BC3AFAA44AD7FC2BDABB76607 (NativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F* __this, String_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B335D3C1D5A81B90D816D2038629B4CD04FBCA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(exception);
		String_t* L_0 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// numberOfUsers = numberOfUsers + 1;
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5;
		((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// NumberOfUsers.NumberOfUsers.numberOfUsers = numberOfUsers;
		int32_t L_2 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5;
		il2cpp_codegen_runtime_class_init_inline(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___numberOfUsers_0 = L_2;
		// NumberOfUsers.NumberOfUsers.userChanged = true;
		((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___userChanged_2 = (bool)1;
		// Debug.Log("number of user = " + numberOfUsers);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7B335D3C1D5A81B90D816D2038629B4CD04FBCA9, L_3, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// }
		return;
	}
}
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond/NativeCallbackHandler::HandleTrackRemoved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler_HandleTrackRemoved_m396A4A14EB37DCB26A3ADA177ED7653EB8729170 (NativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F* __this, String_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0287DFC2D8186A0065E8D79504335D2B6345109);
		s_Il2CppMethodInitialized = true;
	}
	{
		// numberOfUsers = numberOfUsers - 1;
		il2cpp_codegen_runtime_class_init_inline(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5;
		((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// NumberOfUsers.NumberOfUsers.numberOfUsers = numberOfUsers;
		int32_t L_1 = ((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5;
		il2cpp_codegen_runtime_class_init_inline(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var);
		((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___numberOfUsers_0 = L_1;
		// NumberOfUsers.NumberOfUsers.userChanged = true;
		((NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_StaticFields*)il2cpp_codegen_static_fields_for(NumberOfUsers_tBE3184477288ED9B407B73D3FF1A935E01A27FFE_il2cpp_TypeInfo_var))->___userChanged_2 = (bool)1;
		// Debug.Log("number of user after removal = " + numberOfUsers);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_StaticFields*)il2cpp_codegen_static_fields_for(ExternalTextureSecond_tE5C2B3E3E116EE8758BF9A14184F49EB477CFEC4_il2cpp_TypeInfo_var))->___numberOfUsers_5), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA0287DFC2D8186A0065E8D79504335D2B6345109, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void Plugins.ExternalTextureSecond.ExternalTextureSecond/NativeCallbackHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler__ctor_m8A0BB19331B3914BBBE4B574B55A0FA2622820B9 (NativeCallbackHandler_t489F77C9B0C629683223D85E418DE3C37626911F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public EndEditEvent onEndEdit { get { return m_OnDidEndEdit; } set { SetPropertyUtility.SetClass(ref m_OnDidEndEdit, value); } }
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_0 = __this->___m_OnDidEndEdit_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
