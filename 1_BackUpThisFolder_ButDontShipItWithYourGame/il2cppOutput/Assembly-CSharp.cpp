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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
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
// ExternalTextureSecond
struct ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
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
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
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
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Token
struct Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
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
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00D56E2D7AE967F8CD7B061D9F5D03E880B8C417;
IL2CPP_EXTERN_C String_t* _stringLiteral07589D3D94D1C11EF36EA701FECF510BB9287EB8;
IL2CPP_EXTERN_C String_t* _stringLiteral096D505510E5181E451A086DB4DEED732E1CF366;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFCF0588B68D7A984E760218A78D2F4DDD2C965;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC;
IL2CPP_EXTERN_C String_t* _stringLiteral26DE19287653E468174BBDCA7C7BD5008AE0281D;
IL2CPP_EXTERN_C String_t* _stringLiteral32F3DD73049A39D0D6EA6E63649C09814FEC9174;
IL2CPP_EXTERN_C String_t* _stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F;
IL2CPP_EXTERN_C String_t* _stringLiteral35CDB1F80F67FC612D023284F33E299FAE88133C;
IL2CPP_EXTERN_C String_t* _stringLiteral3D2143BF4CE12D17ED94CF61DBFDE336D3DA4C63;
IL2CPP_EXTERN_C String_t* _stringLiteral45407A06E8FBBF6F228C21CE5AB2F1A26B7156BA;
IL2CPP_EXTERN_C String_t* _stringLiteral496AE9057DACBBE44A6BE9BE912403D9930F4058;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4DBC386C64D2D657224498DBCB24210F22620FFF;
IL2CPP_EXTERN_C String_t* _stringLiteral58A2D27D14936F0E85D4D32D3C8D7AC586B0E01C;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD4DCD655534FB9BE66F60025A339C6DE6EC203;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral682613F9D2F557428095397B7C79AB21F8C6498C;
IL2CPP_EXTERN_C String_t* _stringLiteral717841F86EEE0A5C5E132D74472D755C7B9DDEA1;
IL2CPP_EXTERN_C String_t* _stringLiteral77396B2DC8A6F6440FBFDCC9D7A5DB2430FA4538;
IL2CPP_EXTERN_C String_t* _stringLiteral7E56B59F9723DC524A7AFF86C2C82B0A14732E64;
IL2CPP_EXTERN_C String_t* _stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962;
IL2CPP_EXTERN_C String_t* _stringLiteral90F4285D57D36202FC1CDE23C6C61BF3340373BF;
IL2CPP_EXTERN_C String_t* _stringLiteral911225FA368F36651E7F4A4C3D380B053626BB59;
IL2CPP_EXTERN_C String_t* _stringLiteral9B680008812CF88AFE80B0805EBC0F713CFDCFFA;
IL2CPP_EXTERN_C String_t* _stringLiteral9D996994351E2575DFFF35EC83059D65F3DA12B0;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3002C93EDF762ECFA4F0F4128C044248A54C52;
IL2CPP_EXTERN_C String_t* _stringLiteralB6063F82E937E2089973A417C938B9201A95FEF9;
IL2CPP_EXTERN_C String_t* _stringLiteralBF23CDD93AED49422A7C8A710B56C8EE3278FE9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC13D7635D58757EC6B6E4EAA3B105C111D794008;
IL2CPP_EXTERN_C String_t* _stringLiteralCA86D3B8C9B6E053132E00CA49539B3A9A6A008F;
IL2CPP_EXTERN_C String_t* _stringLiteralD384308048C008DC5AC3540BC793AA22919BFC8A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE079CB28372D0F451282963C9BA163E07E6E2C50;
IL2CPP_EXTERN_C String_t* _stringLiteralE54B282389B55C51E2797A6CF0702E6F925B4C55;
IL2CPP_EXTERN_C String_t* _stringLiteralEB26D47DA595A79F2DA42FEA1D4A485A83178FF1;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8A418BAFE26E9752A952EE667351C4C9E3DECB;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDA7B01A37510B4A8D129690E3106942DA400AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF41EC4B41F1AAFEEF2D77AE09AAE07E1721D2900;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRoomName_displayText_mB7DC765226C52697A995A55607CE6AB33CB82164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisToken_t98C63F450DC6EE55860A2E91BF1B3C00350142A9_m1234A5AD7A34619D30D7A428AFCCE5B5EF5ECF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ExternalTextureSecond
struct ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AndroidJavaObject ExternalTextureSecond::mGLTexCtrl
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___mGLTexCtrl_4;
	// System.Boolean ExternalTextureSecond::isPaused
	bool ___isPaused_5;
	// UnityEngine.UI.RawImage ExternalTextureSecond::localImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___localImage_6;
	// UnityEngine.UI.RawImage ExternalTextureSecond::remoteImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___remoteImage_7;
	// System.Int32 ExternalTextureSecond::mTextureId
	int32_t ___mTextureId_8;
	// System.Int32 ExternalTextureSecond::mWidth
	int32_t ___mWidth_9;
	// System.Int32 ExternalTextureSecond::mHeight
	int32_t ___mHeight_10;
	// UnityEngine.Texture2D ExternalTextureSecond::localTexture2D
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___localTexture2D_11;
	// UnityEngine.Texture2D ExternalTextureSecond::remoteTexture2D
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___remoteTexture2D_12;
	// System.IntPtr ExternalTextureSecond::remoteTexturePointer
	intptr_t ___remoteTexturePointer_13;
	// System.IntPtr ExternalTextureSecond::localTexturePointer
	intptr_t ___localTexturePointer_14;
	// Token ExternalTextureSecond::tokenInstance
	Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* ___tokenInstance_15;
	// System.Int32 ExternalTextureSecond::tapAudio
	int32_t ___tapAudio_16;
	// System.Int32 ExternalTextureSecond::tapVideo
	int32_t ___tapVideo_17;
	// UnityEngine.UI.Text ExternalTextureSecond::roomNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___roomNameText_18;
	// UnityEngine.UI.Image ExternalTextureSecond::myImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___myImage_19;
	// UnityEngine.GameObject ExternalTextureSecond::muteAudioObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muteAudioObject_20;
	// UnityEngine.GameObject ExternalTextureSecond::muteVideoObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muteVideoObject_21;
	// UnityEngine.UI.Button ExternalTextureSecond::muteButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___muteButton_22;
	// UnityEngine.UI.Button ExternalTextureSecond::muteVideoButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___muteVideoButton_23;
	// UnityEngine.GameObject ExternalTextureSecond::exitImageGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___exitImageGameObject_24;
};

// InputRoomName
struct InputRoomName_t0B31EC7BD0717616BDCCAB5E43C5FDEC2EA0B1B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField InputRoomName::input
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___input_4;
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

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A (int32_t ___value0, const RuntimeMethod* method) ;
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
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// Token TokenAPIHelp::GetSessionToken(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* TokenAPIHelp_GetSessionToken_mFC4B5526AEF58FB43D261B8174A7147050CB83D3 (String_t* ___RoomName0, String_t* ___UserName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void ExternalTextureSecond::BindTexture(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_BindTexture_m30AE104974782465E6F36D324F518A3144C4E6F3 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, intptr_t ___remoteTexturePointer0, intptr_t ___localTexturePointer1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
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
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
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
// System.Void ExternalTextureSecond::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_Awake_mCC3E3D18C8EF4FFA62111C18C6008FF1905F651E (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00D56E2D7AE967F8CD7B061D9F5D03E880B8C417);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58A2D27D14936F0E85D4D32D3C8D7AC586B0E01C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682613F9D2F557428095397B7C79AB21F8C6498C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF23CDD93AED49422A7C8A710B56C8EE3278FE9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// Screen.sleepTimeout = (int)SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A((-1), NULL);
		// AndroidJavaClass androidWebViewApiClass = new AndroidJavaClass("io.sariska.sariskamediaunityplugin.SariskaMediaUnityPlugin");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral00D56E2D7AE967F8CD7B061D9F5D03E880B8C417, NULL);
		V_0 = L_0;
		// AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// mGLTexCtrl = androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_3, _stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962, L_5, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		__this->___mGLTexCtrl_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mGLTexCtrl_4), (void*)L_7);
		// var roomName = SwitchScene.InputRoomName;
		String_t* L_8 = ((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputRoomName_4;
		V_2 = L_8;
		// var userName = SwitchScene.InputUserName;
		String_t* L_9 = ((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputUserName_5;
		V_3 = L_9;
		// muteAudioObject = GameObject.FindWithTag("Mute Button");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F(_stringLiteral682613F9D2F557428095397B7C79AB21F8C6498C, NULL);
		__this->___muteAudioObject_20 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___muteAudioObject_20), (void*)L_10);
		// muteVideoObject = GameObject.FindWithTag("Mute Video");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F(_stringLiteralBF23CDD93AED49422A7C8A710B56C8EE3278FE9E, NULL);
		__this->___muteVideoObject_21 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___muteVideoObject_21), (void*)L_11);
		// muteButton = muteAudioObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___muteAudioObject_20;
		NullCheck(L_12);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13;
		L_13 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_12, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___muteButton_22 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___muteButton_22), (void*)L_13);
		// muteVideoButton = muteVideoObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___muteVideoObject_21;
		NullCheck(L_14);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15;
		L_15 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_14, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___muteVideoButton_23 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___muteVideoButton_23), (void*)L_15);
		// tokenInstance = TokenAPIHelp.GetSessionToken(roomName, userName);
		String_t* L_16 = V_2;
		String_t* L_17 = V_3;
		Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* L_18;
		L_18 = TokenAPIHelp_GetSessionToken_mFC4B5526AEF58FB43D261B8174A7147050CB83D3(L_16, L_17, NULL);
		__this->___tokenInstance_15 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenInstance_15), (void*)L_18);
		// mGLTexCtrl.Call("setupOpenGL", tokenInstance.token, roomName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		Token_t98C63F450DC6EE55860A2E91BF1B3C00350142A9* L_22 = __this->___tokenInstance_15;
		NullCheck(L_22);
		String_t* L_23 = L_22->___token_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_21;
		String_t* L_25 = V_2;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_25);
		NullCheck(L_19);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_19, _stringLiteral58A2D27D14936F0E85D4D32D3C8D7AC586B0E01C, L_24, NULL);
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_Start_m5EB2E8470336F02A3BC5E8B012C2333CDA65BBF7 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral096D505510E5181E451A086DB4DEED732E1CF366);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45407A06E8FBBF6F228C21CE5AB2F1A26B7156BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC13D7635D58757EC6B6E4EAA3B105C111D794008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE079CB28372D0F451282963C9BA163E07E6E2C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE54B282389B55C51E2797A6CF0702E6F925B4C55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC8A418BAFE26E9752A952EE667351C4C9E3DECB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// roomNameText = GameObject.Find("RoomName").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral096D505510E5181E451A086DB4DEED732E1CF366, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___roomNameText_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomNameText_18), (void*)L_1);
		// roomNameText.text = "Room Name: " + SwitchScene.InputRoomName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___roomNameText_18;
		String_t* L_3 = ((SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_StaticFields*)il2cpp_codegen_static_fields_for(SwitchScene_t9688B1ED1B73D992F6DD75DE112AC5ACD5FC362E_il2cpp_TypeInfo_var))->___InputRoomName_4;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC13D7635D58757EC6B6E4EAA3B105C111D794008, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// Debug.Log("We before local texture");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral45407A06E8FBBF6F228C21CE5AB2F1A26B7156BA, NULL);
		// localTexture2D = new Texture2D(480, 640, TextureFormat.ARGB32, false)
		// {
		//     filterMode = FilterMode.Point
		// };
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_5, ((int32_t)480), ((int32_t)640), 5, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = L_5;
		NullCheck(L_6);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_6, 0, NULL);
		__this->___localTexture2D_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localTexture2D_11), (void*)L_6);
		// localTexture2D.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___localTexture2D_11;
		NullCheck(L_7);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_7, NULL);
		// localImage.texture = localTexture2D;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_8 = __this->___localImage_6;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___localTexture2D_11;
		NullCheck(L_8);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_8, L_9, NULL);
		// Debug.Log("Applied local texture");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralEC8A418BAFE26E9752A952EE667351C4C9E3DECB, NULL);
		// localTexturePointer = localTexture2D.GetNativeTexturePtr();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___localTexture2D_11;
		NullCheck(L_10);
		intptr_t L_11;
		L_11 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_10, NULL);
		__this->___localTexturePointer_14 = L_11;
		// Debug.Log("we after local texture");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE079CB28372D0F451282963C9BA163E07E6E2C50, NULL);
		// remoteTexture2D = new Texture2D(480, 640, TextureFormat.ARGB32, false)
		// {
		//     filterMode = FilterMode.Point
		// };
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_12, ((int32_t)480), ((int32_t)640), 5, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = L_12;
		NullCheck(L_13);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_13, 0, NULL);
		__this->___remoteTexture2D_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteTexture2D_12), (void*)L_13);
		// remoteImage.texture = remoteTexture2D;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_14 = __this->___remoteImage_7;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = __this->___remoteTexture2D_12;
		NullCheck(L_14);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_14, L_15, NULL);
		// remoteTexture2D.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = __this->___remoteTexture2D_12;
		NullCheck(L_16);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_16, NULL);
		// remoteTexturePointer = remoteTexture2D.GetNativeTexturePtr();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = __this->___remoteTexture2D_12;
		NullCheck(L_17);
		intptr_t L_18;
		L_18 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_17, NULL);
		__this->___remoteTexturePointer_13 = L_18;
		// Debug.Log("we are here");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE54B282389B55C51E2797A6CF0702E6F925B4C55, NULL);
		// BindTexture(remoteTexturePointer, localTexturePointer);
		intptr_t L_19 = __this->___remoteTexturePointer_13;
		intptr_t L_20 = __this->___localTexturePointer_14;
		ExternalTextureSecond_BindTexture_m30AE104974782465E6F36D324F518A3144C4E6F3(__this, L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_OnGUI_m8C26C51DFD5C6E473A115CE4D66A2328D5A7214B (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6063F82E937E2089973A417C938B9201A95FEF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isPaused)
		bool L_0 = __this->___isPaused_5;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// GUI.Label(new Rect(100, 100, 50, 30), "Game paused");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_1), (100.0f), (100.0f), (50.0f), (30.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_1, _stringLiteralB6063F82E937E2089973A417C938B9201A95FEF9, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_OnApplicationFocus_m60710FA921E7298053E7F8F9902ADE065973EFD4 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	{
		// isPaused = !hasFocus;
		bool L_0 = ___hasFocus0;
		__this->___isPaused_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_OnApplicationPause_m652BC58F8447753F7EEC2FF8B92721240B6D7B47 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	{
		// isPaused = pauseStatus;
		bool L_0 = ___pauseStatus0;
		__this->___isPaused_5 = L_0;
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::BindTexture(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_BindTexture_m30AE104974782465E6F36D324F518A3144C4E6F3 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, intptr_t ___remoteTexturePointer0, intptr_t ___localTexturePointer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB26D47DA595A79F2DA42FEA1D4A485A83178FF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mGLTexCtrl.Call("setupLocalStream", remoteTexturePointer.ToInt32(), localTexturePointer.ToInt32());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3;
		L_3 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&___remoteTexturePointer0), NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		int32_t L_7;
		L_7 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&___localTexturePointer1), NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralEB26D47DA595A79F2DA42FEA1D4A485A83178FF1, L_6, NULL);
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::MuteUnMuteAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_MuteUnMuteAudio_mE2FD8190CC5841986A51DC1067EE1A548F9D2870 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35CDB1F80F67FC612D023284F33E299FAE88133C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D2143BF4CE12D17ED94CF61DBFDE336D3DA4C63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E56B59F9723DC524A7AFF86C2C82B0A14732E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFDA7B01A37510B4A8D129690E3106942DA400AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tapAudio % 2 == 0)
		int32_t L_0 = __this->___tapAudio_16;
		if (((int32_t)(L_0%2)))
		{
			goto IL_0048;
		}
	}
	{
		// muteButton.image.sprite = Resources.Load<Sprite>("unmute-audio") as Sprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___muteButton_22;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_1, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralEFDA7B01A37510B4A8D129690E3106942DA400AD, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// mGLTexCtrl.Call("onMuteAudio");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral35CDB1F80F67FC612D023284F33E299FAE88133C, L_5, NULL);
		// tapAudio++;
		int32_t L_6 = __this->___tapAudio_16;
		__this->___tapAudio_16 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}

IL_0048:
	{
		// muteButton.image.sprite = Resources.Load<Sprite>("mute-audio") as Sprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___muteButton_22;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_7, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral3D2143BF4CE12D17ED94CF61DBFDE336D3DA4C63, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_9, NULL);
		// mGLTexCtrl.Call("onUnMuteAudio");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_10, _stringLiteral7E56B59F9723DC524A7AFF86C2C82B0A14732E64, L_11, NULL);
		// tapAudio++;
		int32_t L_12 = __this->___tapAudio_16;
		__this->___tapAudio_16 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::MuteVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_MuteVideo_m1A72DBFD299434D2399975BC4E45C2CCC4E59CFD (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral496AE9057DACBBE44A6BE9BE912403D9930F4058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DBC386C64D2D657224498DBCB24210F22620FFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3002C93EDF762ECFA4F0F4128C044248A54C52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD384308048C008DC5AC3540BC793AA22919BFC8A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tapVideo % 2 == 0)
		int32_t L_0 = __this->___tapVideo_17;
		if (((int32_t)(L_0%2)))
		{
			goto IL_0048;
		}
	}
	{
		// muteVideoButton.image.sprite = Resources.Load<Sprite>("unmute-video") as Sprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___muteVideoButton_23;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_1, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral496AE9057DACBBE44A6BE9BE912403D9930F4058, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// mGLTexCtrl.Call("onMuteVideo");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteralAB3002C93EDF762ECFA4F0F4128C044248A54C52, L_5, NULL);
		// tapVideo++;
		int32_t L_6 = __this->___tapVideo_17;
		__this->___tapVideo_17 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}

IL_0048:
	{
		// muteVideoButton.image.sprite = Resources.Load<Sprite>("mute-video") as Sprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___muteVideoButton_23;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_7, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralD384308048C008DC5AC3540BC793AA22919BFC8A, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_9, NULL);
		// mGLTexCtrl.Call("onUnMuteVideo");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_10, _stringLiteral4DBC386C64D2D657224498DBCB24210F22620FFF, L_11, NULL);
		// tapVideo++;
		int32_t L_12 = __this->___tapVideo_17;
		__this->___tapVideo_17 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::switchCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_switchCamera_m7B0C1F17A8DA9D7CF3B3C82D09C8E88C7138FBB8 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77396B2DC8A6F6440FBFDCC9D7A5DB2430FA4538);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mGLTexCtrl.Call("onSwitchCamera");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral77396B2DC8A6F6440FBFDCC9D7A5DB2430FA4538, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::onSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_onSpeaker_mE2C75CBB2D5A10B033B54E0ABC328BBD0C16FEB1 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BD4DCD655534FB9BE66F60025A339C6DE6EC203);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mGLTexCtrl.Call("onSpeakerChanges");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral5BD4DCD655534FB9BE66F60025A339C6DE6EC203, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::EndCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_EndCall_m01E4015C8BEB8C1091D9489427FDA20AF29CE880 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mGLTexCtrl.Call("onEndCall");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::LogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_LogOut_mC8553F548C6708B42817A16D73098E2606F9AAB9 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DE19287653E468174BBDCA7C7BD5008AE0281D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911225FA368F36651E7F4A4C3D380B053626BB59);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mGLTexCtrl.Call("onLogout");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral911225FA368F36651E7F4A4C3D380B053626BB59, L_1, NULL);
		// SceneManager.LoadScene(sceneName: "LandingPage");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral26DE19287653E468174BBDCA7C7BD5008AE0281D, NULL);
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond_Update_m871D8230D12805180093F2C573686CC7F3A0A5D9 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0027;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// mGLTexCtrl.Call("onEndCall");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___mGLTexCtrl_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral20447C2A5E15207F56042895F8145FDA12DC4DAC, L_3, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ExternalTextureSecond::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalTextureSecond__ctor_m9F0EA900BF724A430BA5FC04858FAB800405D9F7 (ExternalTextureSecond_tA5C5BE46819F356A2622A1EFB3152956C2004C5E* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral717841F86EEE0A5C5E132D74472D755C7B9DDEA1);
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
		//     "\"apiKey\":\"249202aabed00b41363794b526eee6927bd35cbc9bac36cd3edcaa\",\"user\":{\"name\":\"" + UserName+"\",\"moderator\": false}}";
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
		ArrayElementTypeCheck (L_4, _stringLiteral717841F86EEE0A5C5E132D74472D755C7B9DDEA1);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral717841F86EEE0A5C5E132D74472D755C7B9DDEA1);
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
