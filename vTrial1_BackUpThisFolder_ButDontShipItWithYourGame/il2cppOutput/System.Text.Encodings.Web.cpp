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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Text.Unicode.UnicodeRange[]
struct UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.Encodings.Web.DefaultHtmlEncoder
struct DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE;
// System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin
struct DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t00F22A38A8B8F8AD1EE66FFB472324DC68579566;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Text.Encodings.Web.HtmlEncoder
struct HtmlEncoder_tE84C4B976DB5BD6F0123CBBCD60556491170E353;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFE5A7C65174014C30D08774B620633CA2141B346;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_t8C5CACE4D6ECB37DDBCFA14BAE9F06F4AF804DF4;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tCBFFAB20AD9E68064976C7DC9D9AD53E3130BA14;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t0F2E3CF46D8AB038E589C88FA392D5D8B69150FE;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t76ED56E08ED096A598020BA0FF5FD30635089077;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691;
// System.Text.Encodings.Web.TextEncoderSettings
struct TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B;
// System.Type
struct Type_t;
// System.Text.Unicode.UnicodeRange
struct UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843____EFE627BE173681E4F55F4133AB4C1782E26D1080CB80CDB6BFAAC81416A2714E_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09EAD6A50C87B14995000A914300979F01096C97;
IL2CPP_EXTERN_C String_t* _stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FC0613DB074A9C5DAB592FE3F86B3EDD439F7E5;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2;
IL2CPP_EXTERN_C String_t* _stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E;
IL2CPP_EXTERN_C String_t* _stringLiteralA7724F58887AE658863220F8D9138F5AC5532B2C;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralCDB258E32AF5134A2B31FE4D1EE6C0E30C9B5E29;
IL2CPP_EXTERN_C String_t* _stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8;
IL2CPP_EXTERN_C String_t* _stringLiteralE3D7E554C2FD3D52D9690E3D5BB7B7321C3FA52B;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C const RuntimeMethod* AllowedCharactersBitmap__ctor_m84D288D533707728EBC3AA9F4D92A2A425CD4355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA7F9D55B3DD6D0035A620031025B2B0DBE88DB50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultHtmlEncoder_TryEncodeUnicodeScalar_m39A2DC1D1C3D9F58799A1A64B9CD83780BFE6BB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultHtmlEncoder__ctor_m0DF07C80DAB8C7B18B14176343114B086ECBBC0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultJavaScriptEncoderBasicLatin_FindFirstCharacterToEncode_mEE41382BC0EE3FBF57FCA8128B33CE14D0E60945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultJavaScriptEncoderBasicLatin_TryEncodeUnicodeScalar_m2691077A7D3D766406F250A5F245DB9803CA041E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE630BC590135F8CE4B147BB7DF7DD45C759397E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m90426C97E513B64C17AE47E597545E6686B0900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m91BD9FEB065273A6C9B180FF5C92904F139C5DBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m05AEC4D2A90CEC9EAC98791A1AA40D9398CBB3A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings_AllowRange_mE18D9F922D41074A99B571237B152FA25E3CD466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings_AllowRanges_m51D0C4BD65E72A1D7166C0CA74656AA1658D7580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnicodeRange_Create_m4B3D036F7B3761C596AE1D66A5BA46BA0AEA7F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37;;
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com;
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com;;
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke;
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke;;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t52CD7D93335451DFE123EF6FCFD7CA4EFA1F77F6 
{
};

// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};

struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value_0;
};

// System.EmptyArray`1<System.Char>
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};

struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

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

// System.HexConverter
struct HexConverter_t143D3EC900A7E50DED0D9A2007DB8B9B5A9EEB39  : public RuntimeObject
{
};

// System.Text.Encodings.Web.JavaScriptEncoderHelper
struct JavaScriptEncoderHelper_t6F0C1E0D8C98C3DD2B39DD5F3EC70C88D550EBD5  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// System.Text.Unicode.UnicodeHelpers
struct UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71  : public RuntimeObject
{
};

struct UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_StaticFields
{
	// System.UInt32[] System.Text.Unicode.UnicodeHelpers::_definedCharacterBitmapBigEndian
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____definedCharacterBitmapBigEndian_0;
};

// System.Text.Unicode.UnicodeRange
struct UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836  : public RuntimeObject
{
	// System.Int32 System.Text.Unicode.UnicodeRange::<FirstCodePoint>k__BackingField
	int32_t ___U3CFirstCodePointU3Ek__BackingField_0;
	// System.Int32 System.Text.Unicode.UnicodeRange::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
};

// System.Text.Unicode.UnicodeRanges
struct UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7  : public RuntimeObject
{
};

struct UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_StaticFields
{
	// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::_u0000
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* ____u0000_0;
};

// System.Text.UnicodeUtility
struct UnicodeUtility_t62149882DA12C1D23BA45AC572963C7FEA9DF32C  : public RuntimeObject
{
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

// System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED 
{
	// System.UInt32[] System.Text.Internal.AllowedCharactersBitmap::_allowedCharacters
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____allowedCharacters_0;
};
// Native definition for P/Invoke marshalling of System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____allowedCharacters_0;
};
// Native definition for COM marshalling of System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____allowedCharacters_0;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t00F22A38A8B8F8AD1EE66FFB472324DC68579566  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFE5A7C65174014C30D08774B620633CA2141B346  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_t8C5CACE4D6ECB37DDBCFA14BAE9F06F4AF804DF4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tCBFFAB20AD9E68064976C7DC9D9AD53E3130BA14  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t0F2E3CF46D8AB038E589C88FA392D5D8B69150FE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t76ED56E08ED096A598020BA0FF5FD30635089077  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t801718944F76C36638EA43F29012837CBA710948 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t801718944F76C36638EA43F29012837CBA710948__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192
struct __StaticArrayInitTypeSizeU3D8192_t6B42A11F775F676F25B0A63261E746DABAF39CB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D8192_t6B42A11F775F676F25B0A63261E746DABAF39CB5__padding[8192];
	};
};

// System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37 
{
	union
	{
		struct
		{
			// System.Boolean System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer::FixedElementField
			bool ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37__padding[128];
	};
};
// Native definition for P/Invoke marshalling of System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37__padding[128];
	};
};
// Native definition for COM marshalling of System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37__padding[128];
	};
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.UInt32>
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192 <PrivateImplementationDetails>::8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6
	__StaticArrayInitTypeSizeU3D8192_t6B42A11F775F676F25B0A63261E746DABAF39CB5 ___8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::EFE627BE173681E4F55F4133AB4C1782E26D1080CB80CDB6BFAAC81416A2714E
	__StaticArrayInitTypeSizeU3D256_t801718944F76C36638EA43F29012837CBA710948 ___EFE627BE173681E4F55F4133AB4C1782E26D1080CB80CDB6BFAAC81416A2714E_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Text.Encodings.Web.TextEncoderSettings
struct TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B  : public RuntimeObject
{
	// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.TextEncoderSettings::_allowedCharactersBitmap
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED ____allowedCharactersBitmap_0;
};

// System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData
struct AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC 
{
	// System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData::Data
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37 ___Data_0;
};
// Native definition for P/Invoke marshalling of System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData
struct AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshaled_pinvoke
{
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke ___Data_0;
};
// Native definition for COM marshalling of System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData
struct AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshaled_com
{
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com ___Data_0;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.UInt32>
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691  : public RuntimeObject
{
	// System.Byte[][] System.Text.Encodings.Web.TextEncoder::_asciiEscape
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____asciiEscape_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encodings.Web.TextEncoder::_isAsciiCacheInitialized
	bool ____isAsciiCacheInitialized_1;
	// System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData System.Text.Encodings.Web.TextEncoder::_asciiNeedsEscaping
	AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC ____asciiNeedsEscaping_2;
};

struct TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_StaticFields
{
	// System.Byte[] System.Text.Encodings.Web.TextEncoder::s_noEscape
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_noEscape_3;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Text.Encodings.Web.HtmlEncoder
struct HtmlEncoder_tE84C4B976DB5BD6F0123CBBCD60556491170E353  : public TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691
{
};

// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2  : public TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.Text.Encodings.Web.DefaultHtmlEncoder
struct DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE  : public HtmlEncoder_tE84C4B976DB5BD6F0123CBBCD60556491170E353
{
	// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.DefaultHtmlEncoder::_allowedCharacters
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED ____allowedCharacters_4;
};

struct DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields
{
	// System.Text.Encodings.Web.DefaultHtmlEncoder System.Text.Encodings.Web.DefaultHtmlEncoder::Singleton
	DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE* ___Singleton_5;
	// System.Char[] System.Text.Encodings.Web.DefaultHtmlEncoder::s_quote
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_quote_6;
	// System.Char[] System.Text.Encodings.Web.DefaultHtmlEncoder::s_ampersand
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_ampersand_7;
	// System.Char[] System.Text.Encodings.Web.DefaultHtmlEncoder::s_lessthan
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_lessthan_8;
	// System.Char[] System.Text.Encodings.Web.DefaultHtmlEncoder::s_greaterthan
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_greaterthan_9;
};

// System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin
struct DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C  : public JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2
{
};

struct DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields
{
	// System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::s_singleton
	DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* ___s_singleton_4;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::s_b
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_b_5;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::s_t
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_t_6;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::s_n
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_n_7;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::s_f
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_f_8;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::s_r
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_r_9;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::s_back
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_back_10;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Text.Unicode.UnicodeRange[]
struct UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3  : public RuntimeArray
{
	ALIGN_FIELD (8) UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* m_Items[1];

	inline UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke(const U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37& unmarshaled, U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke_back(const U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke& marshaled, U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37& unmarshaled);
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke_cleanup(U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com(const U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37& unmarshaled, U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com& marshaled);
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com_back(const U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com& marshaled, U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37& unmarshaled);
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com_cleanup(U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com& marshaled);

// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<TTo> System.Runtime.InteropServices.MemoryMarshal::Cast<System.Byte,System.UInt32>(System.ReadOnlySpan`1<TFrom>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.UInt32>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988_gshared (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___array0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_m05AEC4D2A90CEC9EAC98791A1AA40D9398CBB3A2_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Boolean System.ReadOnlySpan`1<System.Byte>::TryCopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.Boolean System.ReadOnlySpan`1<System.Byte>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Boolean System.ReadOnlySpan`1<System.Char>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m90426C97E513B64C17AE47E597545E6686B0900E_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Span`1<System.Char>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Char>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA7F9D55B3DD6D0035A620031025B2B0DBE88DB50_gshared_inline (const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt32>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m91BD9FEB065273A6C9B180FF5C92904F139C5DBF_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt32>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE630BC590135F8CE4B147BB7DF7DD45C759397E5_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.UnicodeUtility::IsInRangeInclusive(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Text.Unicode.UnicodeHelpers::get_DefinedCharsBitmapSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D UnicodeHelpers_get_DefinedCharsBitmapSpan_mC776443C3223BDA5BF23013BE65B9CDF4246B0B6 (const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReadUInt32LittleEndian(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_mE2E0C317C7E4EA0780ACD3F096B2E6FEA34B2DD7_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___start0, method);
}
// System.Boolean System.Text.UnicodeUtility::IsAsciiCodePoint(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m1329DDA5CDE3710C789833508D7BC18A49DB9AC7_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<TTo> System.Runtime.InteropServices.MemoryMarshal::Cast<System.Byte,System.UInt32>(System.ReadOnlySpan`1<TFrom>)
inline ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_gshared_inline)(___span0, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.UInt32>::op_Implicit(T[])
inline ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 (*) (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988_gshared)(___array0, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.UInt32[] System.Text.Unicode.UnicodeHelpers::CreateDefinedCharacterBitmapMachineEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* UnicodeHelpers_CreateDefinedCharacterBitmapMachineEndian_mFBA68D77CFB34CDEA3E0884823DBF677FDCFF564 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Text.Unicode.UnicodeRange::set_FirstCodePoint(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m786BFD5158D01D1AD0073DFC0609231BAF4E5777_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Unicode.UnicodeRange::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m7965F884FA95909701DC2125445C86B43B549720_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Unicode.UnicodeRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___firstCodePoint0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRange::Create(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRange_Create_m4B3D036F7B3761C596AE1D66A5BA46BA0AEA7F7A (Il2CppChar ___firstCharacter0, Il2CppChar ___lastCharacter1, const RuntimeMethod* method) ;
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::CreateRange(System.Text.Unicode.UnicodeRange&,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_CreateRange_m3B14F44235F73441CD3332BF5438E6914EA9C1BD (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** ___range0, Il2CppChar ___first1, Il2CppChar ___last2, const RuntimeMethod* method) ;
// System.Void System.Text.Internal.AllowedCharactersBitmap::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap__ctor_m84D288D533707728EBC3AA9F4D92A2A425CD4355 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___allowedCharacters0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Text.Internal.AllowedCharactersBitmap::AllowCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_AllowCharacter_mA62947598D488B8397D1B785EB8710A3C2502C24 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, Il2CppChar ___character0, const RuntimeMethod* method) ;
// System.Void System.Text.Internal.AllowedCharactersBitmap::ForbidCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, Il2CppChar ___character0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.UInt32> System.Text.Unicode.UnicodeHelpers::GetDefinedCharacterBitmap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 UnicodeHelpers_GetDefinedCharacterBitmap_m761216890B0DB8540279DB1F7CDD6694B50314D9_inline (const RuntimeMethod* method) ;
// System.Void System.Text.Internal.AllowedCharactersBitmap::ForbidUndefinedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_ForbidUndefinedCharacters_mD6CE16DBD95C181B9C36CF710079DFAC5AD7C639 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Text.Internal.AllowedCharactersBitmap System.Text.Internal.AllowedCharactersBitmap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED AllowedCharactersBitmap_Clone_m0B4354E106746EBAB8C251B846BC07C7F8EED079 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Internal.AllowedCharactersBitmap::IsUnicodeScalarAllowed(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsUnicodeScalarAllowed_mCE82E28101DFD37C0376B042BFDBD5713EBB51A5_inline (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, int32_t ___unicodeScalar0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Internal.AllowedCharactersBitmap::IsCharacterAllowed(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, Il2CppChar ___character0, const RuntimeMethod* method) ;
// System.Int32 System.Text.Internal.AllowedCharactersBitmap::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllowedCharactersBitmap_FindFirstCharacterToEncode_m0E37005FCB6C9A200E34E8D7F82119933B12510C (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.JavaScriptEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptEncoder__ctor_m59B9FB268C118BDFC532CC01F6E9798DE75386B6 (JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* __this, const RuntimeMethod* method) ;
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::get_BasicLatin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_get_BasicLatin_mD5C2B705BC7E92CA63A185071E78824CDE7DBA7D (const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.TextEncoderSettings::.ctor(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* ___allowedRanges0, const RuntimeMethod* method) ;
// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.TextEncoderSettings::GetAllowedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED TextEncoderSettings_GetAllowedCharacters_mE45DB4EE7216198ED57CA3F0789011FE08851064 (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::ForbidHtmlCharacters(System.Text.Internal.AllowedCharactersBitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder_ForbidHtmlCharacters_m4132C6476E1E32FB3D0DEF1897088373A66BE026 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED ___allowedCharacters0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Unicode.UnicodeHelpers::IsSupplementaryCodePoint(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeHelpers_IsSupplementaryCodePoint_mF61FF11936F2C7F2E041CFF0BF4080EF8B4967BC_inline (int32_t ___scalar0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::NeedsEscaping(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoderBasicLatin_NeedsEscaping_m97AF553884DB3154D793D507D0CFD78E07368810_inline (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::get_AllowList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D DefaultJavaScriptEncoderBasicLatin_get_AllowList_mA555CCE584A1306ED42E833EB957465A4244BF35 (const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::GetPinnableReference()
inline uint8_t* ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_gshared)(__this, method);
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryWriteScalarAsChar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_TryWriteScalarAsChar_m60246BD54FF00235642785D45ACA1360184D21FC_inline (int32_t ___unicodeScalar0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.JavaScriptEncoderHelper::TryWriteEncodedScalarAsNumericEntity(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JavaScriptEncoderHelper_TryWriteEncodedScalarAsNumericEntity_mCE6958442BE2DA2CBF00C8DF71D6BF7F070B8A73 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___length2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryCopyCharacters(System.Char[],System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryCopyCharacters_mAAE1CAAD2FF83DC11B508692758AD82A1497C81E (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___source0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoderBasicLatin__ctor_mA4678374F0BAF83C52194B6E675AB72725377972 (DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.TextEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__ctor_mAB973DBE5360A8CE416505D5F1487855B4A9B660 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.HtmlEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlEncoder__ctor_mB04BFEDA89DD7987924E2B8A75CD985F6EE71D02 (HtmlEncoder_tE84C4B976DB5BD6F0123CBBCD60556491170E353* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.DefaultHtmlEncoder::TryWriteEncodedScalarAsNumericEntity(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultHtmlEncoder_TryWriteEncodedScalarAsNumericEntity_m0790520BC251144999C05BF91214A99795627EB1 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) ;
// System.Char System.HexConverter::ToCharUpper(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar HexConverter_ToCharUpper_mB949F4F4AC26CB7AF3FFFEBBBFD4EFB2528F813E_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder__ctor_m0DF07C80DAB8C7B18B14176343114B086ECBBC0E (DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE* __this, TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* ___settings0, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Unicode.UnicodeHelpers::GetUtf16SurrogatePairFromAstralScalarValue(System.Int32,System.Char&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_m6D31B96CF0B7BB91D5BB5E87C20CA673D8C9AB6C (int32_t ___scalar0, Il2CppChar* ___highSurrogate1, Il2CppChar* ___lowSurrogate2, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.JavaScriptEncoderHelper::TryWriteEncodedSingleCharacter(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JavaScriptEncoderHelper_TryWriteEncodedSingleCharacter_m3687EBD9F62A7582ACD2DAB6008CA0C842247179 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___length2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Byte[] System.Text.Encodings.Web.TextEncoder::GetAsciiEncoding(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextEncoder_GetAsciiEncoding_m4127218BE1A0242F780621DCF5A415826367C63C_inline (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared)(__this, ___destination0, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___start0, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_m05AEC4D2A90CEC9EAC98791A1AA40D9398CBB3A2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m05AEC4D2A90CEC9EAC98791A1AA40D9398CBB3A2_gshared)(___array0, method);
}
// System.Boolean System.ReadOnlySpan`1<System.Byte>::TryCopyTo(System.Span`1<T>)
inline bool ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3_gshared)(__this, ___destination0, method);
}
// System.Buffers.OperationStatus System.Text.Unicode.UnicodeHelpers::DecodeScalarValueFromUtf8(System.ReadOnlySpan`1<System.Byte>,System.UInt32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_DecodeScalarValueFromUtf8_mAFF7073F104A992BBDB4755CFA3B1602920F4EFC (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, uint32_t* ___result1, int32_t* ___bytesConsumed2, const RuntimeMethod* method) ;
// System.Boolean System.ReadOnlySpan`1<System.Byte>::get_IsEmpty()
inline bool ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_gshared)(__this, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared)(__this, method);
}
// System.Boolean System.ReadOnlySpan`1<System.Char>::get_IsEmpty()
inline bool ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_gshared)(__this, method);
}
// System.Int32 System.Span`1<System.Char>::get_Length()
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncode(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncode_m055812C29995C1DFD2E2C899571736DBE5B28589 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___text0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared)(__this, ___destination0, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline)(__this, ___start0, method);
}
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, const RuntimeMethod*))Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline)(__this, ___start0, method);
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::<Encode>g__EncodeCore|15_0(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_U3CEncodeU3Eg__EncodeCoreU7C15_0_mEF12EEA0EC07785552E46509F3407967C95E9D26 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.ReadOnlySpan`1<T>)
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m90426C97E513B64C17AE47E597545E6686B0900E (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m90426C97E513B64C17AE47E597545E6686B0900E_gshared)(___span0, method);
}
// System.Void System.Text.Encodings.Web.TextEncoder::InitializeAsciiCache()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TextEncoder_InitializeAsciiCache_m28C04EEA881CAF8616897BF1E3973C7FC768960B (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.TextEncoder::DoesAsciiNeedEncoding(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_DoesAsciiNeedEncoding_m75B40B8AADFFD6095825932C2599D47165B257D6_inline (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline)(method);
}
// System.Boolean System.Span`1<System.Char>::get_IsEmpty()
inline bool Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_gshared)(__this, method);
}
// T[] System.Array::Empty<System.Char>()
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA7F9D55B3DD6D0035A620031025B2B0DBE88DB50_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (const RuntimeMethod*))Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA7F9D55B3DD6D0035A620031025B2B0DBE88DB50_gshared_inline)(method);
}
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_gshared)(___array0, method);
}
// System.Boolean System.Text.UnicodeUtility::IsSurrogateCodePoint(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_m0064BDCBDC0555AAF6E9F34C291428D1DD51FF7F_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Text.UnicodeUtility::IsHighSurrogateCodePoint(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsHighSurrogateCodePoint_mA76C812B4957758B05EEBDA71DD4DA5E9EDA1D27_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Text.UnicodeUtility::IsLowSurrogateCodePoint(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsLowSurrogateCodePoint_m22B1F45D81E0CE2F4FD32875B61B9E5082003F29_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Text.UnicodeUtility::GetScalarFromUtf16SurrogatePair(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnicodeUtility_GetScalarFromUtf16SurrogatePair_mC4315DD7C63F20B863EA8BCE61F03EA92B1240B1 (uint32_t ___highSurrogateCodePoint0, uint32_t ___lowSurrogateCodePoint1, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_gshared)(___span0, method);
}
// System.Int32 System.Text.UnicodeUtility::GetUtf16SequenceLength(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeUtility_GetUtf16SequenceLength_m24BE64983EC5481F7AD057BD49C7A5C850ABFAF9 (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Text.Internal.AllowedCharactersBitmap System.Text.Internal.AllowedCharactersBitmap::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED AllowedCharactersBitmap_CreateNew_m6A23DE6C45553DCBE52FFB511F92ADCA097B568A (const RuntimeMethod* method) ;
// System.Int32 System.Text.Unicode.UnicodeRange::get_FirstCodePoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_mA023CB7BCEE4210B23D6FBFA1B421D4C53F31D35_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.Unicode.UnicodeRange::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_m3664F9267AB716A55BB92139410B57B47C1AD154_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt32>(System.ReadOnlySpan`1<System.Byte>)
inline uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m91BD9FEB065273A6C9B180FF5C92904F139C5DBF_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m91BD9FEB065273A6C9B180FF5C92904F139C5DBF_gshared_inline)(___source0, method);
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mC4AB333A1E3C60D14DADE6015280AC3D30B94A2B_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5 (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt32>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E (int32_t ___argument0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE630BC590135F8CE4B147BB7DF7DD45C759397E5 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE630BC590135F8CE4B147BB7DF7DD45C759397E5_gshared)(___span0, method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m288BA0BFA12E5E462CB60C5B3D8BE3677EFF93F2 (EmbeddedAttribute_t00F22A38A8B8F8AD1EE66FFB472324DC68579566* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m522246D01124BDBCC7B05E716AF928006F31508D (IsReadOnlyAttribute_tFE5A7C65174014C30D08774B620633CA2141B346* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m74E75D3E2DC3E77488AB9C381D226214DF3CC2A0 (NullableAttribute_tCBFFAB20AD9E68064976C7DC9D9AD53E3130BA14* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = p0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
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
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m09AEB7692E9EE8247068756A53B49D700A2FBDF5 (NullableContextAttribute_t0F2E3CF46D8AB038E589C88FA392D5D8B69150FE* __this, uint8_t p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = p0;
		__this->___Flag_0 = L_0;
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
// System.Void System.Runtime.CompilerServices.NullablePublicOnlyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m1EB5F8C417EC2EC2A3046C71684DACCA5E15D15F (NullablePublicOnlyAttribute_t76ED56E08ED096A598020BA0FF5FD30635089077* __this, bool p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = p0;
		__this->___IncludesInternals_0 = L_0;
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
// System.Char System.HexConverter::ToCharUpper(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar HexConverter_ToCharUpper_mB949F4F4AC26CB7AF3FFFEBBBFD4EFB2528F813E (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		___value0 = ((int32_t)(L_0&((int32_t)15)));
		int32_t L_1 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)48)));
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_add(L_3, 7));
	}

IL_0016:
	{
		int32_t L_4 = ___value0;
		return ((int32_t)(uint16_t)L_4);
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_m2F96337C648C3DF27411B9368A82219C8D6A630D (NotNullAttribute_t8C5CACE4D6ECB37DDBCFA14BAE9F06F4AF804DF4* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.UInt32 System.Text.UnicodeUtility::GetScalarFromUtf16SurrogatePair(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnicodeUtility_GetScalarFromUtf16SurrogatePair_mC4315DD7C63F20B863EA8BCE61F03EA92B1240B1 (uint32_t ___highSurrogateCodePoint0, uint32_t ___lowSurrogateCodePoint1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___highSurrogateCodePoint0;
		uint32_t L_1 = ___lowSurrogateCodePoint1;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0<<((int32_t)10))), (int32_t)L_1)), ((int32_t)56613888)));
	}
}
// System.Int32 System.Text.UnicodeUtility::GetUtf16SequenceLength(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeUtility_GetUtf16SequenceLength_m24BE64983EC5481F7AD057BD49C7A5C850ABFAF9 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)65536)));
		uint32_t L_1 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)33554432)));
		uint32_t L_2 = ___value0;
		___value0 = ((int32_t)((uint32_t)L_2>>((int32_t)24)));
		uint32_t L_3 = ___value0;
		return L_3;
	}
}
// System.Boolean System.Text.UnicodeUtility::IsAsciiCodePoint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m1329DDA5CDE3710C789833508D7BC18A49DB9AC7 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.UnicodeUtility::IsHighSurrogateCodePoint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsHighSurrogateCodePoint_mA76C812B4957758B05EEBDA71DD4DA5E9EDA1D27 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_0, ((int32_t)55296), ((int32_t)56319), NULL);
		return L_1;
	}
}
// System.Boolean System.Text.UnicodeUtility::IsInRangeInclusive(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = ___lowerBound1;
		uint32_t L_2 = ___upperBound2;
		uint32_t L_3 = ___lowerBound1;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.UnicodeUtility::IsLowSurrogateCodePoint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsLowSurrogateCodePoint_m22B1F45D81E0CE2F4FD32875B61B9E5082003F29 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_0, ((int32_t)56320), ((int32_t)57343), NULL);
		return L_1;
	}
}
// System.Boolean System.Text.UnicodeUtility::IsSurrogateCodePoint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_m0064BDCBDC0555AAF6E9F34C291428D1DD51FF7F (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_0, ((int32_t)55296), ((int32_t)57343), NULL);
		return L_1;
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
// System.UInt32[] System.Text.Unicode.UnicodeHelpers::CreateDefinedCharacterBitmapMachineEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* UnicodeHelpers_CreateDefinedCharacterBitmapMachineEndian_mFBA68D77CFB34CDEA3E0884823DBF677FDCFF564 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = UnicodeHelpers_get_DefinedCharsBitmapSpan_mC776443C3223BDA5BF23013BE65B9CDF4246B0B6(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&V_0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_1/4)));
		V_1 = L_2;
		V_2 = 0;
		goto IL_002f;
	}

IL_0019:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		int32_t L_4 = V_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = V_0;
		uint32_t L_6;
		L_6 = BinaryPrimitives_ReadUInt32LittleEndian_mE2E0C317C7E4EA0780ACD3F096B2E6FEA34B2DD7_inline(L_5, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_6);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		L_7 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), 4, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		V_0 = L_7;
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		return L_11;
	}
}
// System.Buffers.OperationStatus System.Text.Unicode.UnicodeHelpers::DecodeScalarValueFromUtf8(System.ReadOnlySpan`1<System.Byte>,System.UInt32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_DecodeScalarValueFromUtf8_mAFF7073F104A992BBDB4755CFA3B1602920F4EFC (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, uint32_t* ___result1, int32_t* ___bytesConsumed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_2 = V_0;
		uint8_t* L_3;
		L_3 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_2), ((&___source0))->____length_1);
		int32_t L_4 = *((uint8_t*)L_3);
		V_1 = L_4;
		uint32_t L_5 = V_1;
		bool L_6;
		L_6 = UnicodeUtility_IsAsciiCodePoint_m1329DDA5CDE3710C789833508D7BC18A49DB9AC7_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}

IL_0021:
	{
		int32_t* L_7 = ___bytesConsumed2;
		int32_t L_8 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		uint32_t* L_9 = ___result1;
		uint32_t L_10 = V_1;
		*((int32_t*)L_9) = (int32_t)L_10;
		return (int32_t)(0);
	}

IL_002b:
	{
		uint32_t L_11 = V_1;
		bool L_12;
		L_12 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_11, ((int32_t)194), ((int32_t)244), NULL);
		if (!L_12)
		{
			goto IL_0142;
		}
	}
	{
		uint32_t L_13 = V_1;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)194)))<<6));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_15) < ((uint32_t)L_16))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_17 = V_0;
		uint8_t* L_18;
		L_18 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_17), ((&___source0))->____length_1);
		int32_t L_19 = *((uint8_t*)L_18);
		V_2 = ((int8_t)L_19);
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_21 = V_1;
		int32_t L_22 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, L_22));
		uint32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, ((int32_t)128)));
		uint32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, ((int32_t)128)));
		uint32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) >= ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_26 = V_1;
		bool L_27;
		L_27 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_26, ((int32_t)2080), ((int32_t)3343), NULL);
		if (!L_27)
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_28 = V_1;
		bool L_29;
		L_29 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_28, ((int32_t)2912), ((int32_t)2943), NULL);
		if (L_29)
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_30 = V_1;
		bool L_31;
		L_31 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_30, ((int32_t)3072), ((int32_t)3087), NULL);
		if (L_31)
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_33) < ((uint32_t)L_34))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_35 = V_0;
		uint8_t* L_36;
		L_36 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_35), ((&___source0))->____length_1);
		int32_t L_37 = *((uint8_t*)L_36);
		V_2 = ((int8_t)L_37);
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_39 = V_1;
		V_1 = ((int32_t)((int32_t)L_39<<6));
		uint32_t L_40 = V_1;
		int32_t L_41 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, L_41));
		uint32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, ((int32_t)128)));
		uint32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, ((int32_t)131072)));
		uint32_t L_44 = V_1;
		if ((!(((uint32_t)L_44) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_0;
		int32_t L_47;
		L_47 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_46) < ((uint32_t)L_47))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_48 = V_0;
		uint8_t* L_49;
		L_49 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_48), ((&___source0))->____length_1);
		int32_t L_50 = *((uint8_t*)L_49);
		V_2 = ((int8_t)L_50);
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_52 = V_1;
		V_1 = ((int32_t)((int32_t)L_52<<6));
		uint32_t L_53 = V_1;
		int32_t L_54 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, L_54));
		uint32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, ((int32_t)128)));
		uint32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, ((int32_t)4194304)));
		goto IL_0021;
	}

IL_0142:
	{
		V_0 = 1;
	}

IL_0144:
	{
		int32_t* L_57 = ___bytesConsumed2;
		int32_t L_58 = V_0;
		*((int32_t*)L_57) = (int32_t)L_58;
		uint32_t* L_59 = ___result1;
		*((int32_t*)L_59) = (int32_t)((int32_t)65533);
		return (int32_t)(3);
	}

IL_0150:
	{
		int32_t* L_60 = ___bytesConsumed2;
		int32_t L_61 = V_0;
		*((int32_t*)L_60) = (int32_t)L_61;
		uint32_t* L_62 = ___result1;
		*((int32_t*)L_62) = (int32_t)((int32_t)65533);
		return (int32_t)(2);
	}
}
// System.ReadOnlySpan`1<System.UInt32> System.Text.Unicode.UnicodeHelpers::GetDefinedCharacterBitmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 UnicodeHelpers_GetDefinedCharacterBitmap_m761216890B0DB8540279DB1F7CDD6694B50314D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = UnicodeHelpers_get_DefinedCharsBitmapSpan_mC776443C3223BDA5BF23013BE65B9CDF4246B0B6(NULL);
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2;
		L_2 = MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_inline(L_1, MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ((UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var))->____definedCharacterBitmapBigEndian_0;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_4;
		L_4 = ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988(L_3, ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void System.Text.Unicode.UnicodeHelpers::GetUtf16SurrogatePairFromAstralScalarValue(System.Int32,System.Char&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_m6D31B96CF0B7BB91D5BB5E87C20CA673D8C9AB6C (int32_t ___scalar0, Il2CppChar* ___highSurrogate1, Il2CppChar* ___lowSurrogate2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___scalar0;
		V_0 = ((int32_t)(L_0&((int32_t)65535)));
		int32_t L_1 = ___scalar0;
		V_1 = ((int32_t)(L_1>>((int32_t)16)));
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		Il2CppChar* L_3 = ___highSurrogate1;
		int32_t L_4 = V_2;
		int32_t L_5 = V_0;
		*((int16_t*)L_3) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)55296)|((int32_t)(L_4<<6))))|((int32_t)(L_5>>((int32_t)10))))));
		Il2CppChar* L_6 = ___lowSurrogate2;
		int32_t L_7 = V_0;
		*((int16_t*)L_6) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)56320)|((int32_t)(L_7&((int32_t)1023))))));
		return;
	}
}
// System.Boolean System.Text.Unicode.UnicodeHelpers::IsSupplementaryCodePoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeHelpers_IsSupplementaryCodePoint_mF61FF11936F2C7F2E041CFF0BF4080EF8B4967BC (int32_t ___scalar0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___scalar0;
		return (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)-65536)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.ReadOnlySpan`1<System.Byte> System.Text.Unicode.UnicodeHelpers::get_DefinedCharsBitmapSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D UnicodeHelpers_get_DefinedCharsBitmapSpan_mC776443C3223BDA5BF23013BE65B9CDF4246B0B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline((&L_0), (void*)((__StaticArrayInitTypeSizeU3D8192_t6B42A11F775F676F25B0A63261E746DABAF39CB5*)il2cpp_codegen_get_field_data(U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_0_FieldInfo_var)), ((int32_t)8192), /*hidden argument*/ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeHelpers__cctor_m6FBAF18925227F4AF35BD5C071C3389134488574 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B3_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = UnicodeHelpers_CreateDefinedCharacterBitmapMachineEndian_mFBA68D77CFB34CDEA3E0884823DBF677FDCFF564(NULL);
		G_B3_0 = L_1;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(NULL));
	}

IL_000f:
	{
		((UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var))->____definedCharacterBitmapBigEndian_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var))->____definedCharacterBitmapBigEndian_0), (void*)G_B3_0);
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
// System.Void System.Text.Unicode.UnicodeRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___firstCodePoint0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___firstCodePoint0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___firstCodePoint0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09EAD6A50C87B14995000A914300979F01096C97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = ___firstCodePoint0;
		int32_t L_5 = ___length1;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)L_4), ((int64_t)L_5)))) <= ((int64_t)((int64_t)((int32_t)65536)))))
		{
			goto IL_0039;
		}
	}

IL_002e:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5_RuntimeMethod_var)));
	}

IL_0039:
	{
		int32_t L_7 = ___firstCodePoint0;
		UnicodeRange_set_FirstCodePoint_m786BFD5158D01D1AD0073DFC0609231BAF4E5777_inline(__this, L_7, NULL);
		int32_t L_8 = ___length1;
		UnicodeRange_set_Length_m7965F884FA95909701DC2125445C86B43B549720_inline(__this, L_8, NULL);
		return;
	}
}
// System.Int32 System.Text.Unicode.UnicodeRange::get_FirstCodePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_mA023CB7BCEE4210B23D6FBFA1B421D4C53F31D35 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFirstCodePointU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeRange::set_FirstCodePoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m786BFD5158D01D1AD0073DFC0609231BAF4E5777 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFirstCodePointU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 System.Text.Unicode.UnicodeRange::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_m3664F9267AB716A55BB92139410B57B47C1AD154 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeRange::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m7965F884FA95909701DC2125445C86B43B549720 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRange::Create(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRange_Create_m4B3D036F7B3761C596AE1D66A5BA46BA0AEA7F7A (Il2CppChar ___firstCharacter0, Il2CppChar ___lastCharacter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___lastCharacter1;
		Il2CppChar L_1 = ___firstCharacter0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7724F58887AE658863220F8D9138F5AC5532B2C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange_Create_m4B3D036F7B3761C596AE1D66A5BA46BA0AEA7F7A_RuntimeMethod_var)));
	}

IL_000f:
	{
		Il2CppChar L_3 = ___firstCharacter0;
		Il2CppChar L_4 = ___lastCharacter1;
		Il2CppChar L_5 = ___firstCharacter0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_6 = (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836*)il2cpp_codegen_object_new(UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5(L_6, L_3, ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))), NULL);
		return L_6;
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
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::CreateRange(System.Text.Unicode.UnicodeRange&,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_CreateRange_m3B14F44235F73441CD3332BF5438E6914EA9C1BD (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** ___range0, Il2CppChar ___first1, Il2CppChar ___last2, const RuntimeMethod* method) 
{
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** L_0 = ___range0;
		Il2CppChar L_1 = ___first1;
		Il2CppChar L_2 = ___last2;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_3;
		L_3 = UnicodeRange_Create_m4B3D036F7B3761C596AE1D66A5BA46BA0AEA7F7A(L_1, L_2, NULL);
		VolatileWrite(L_0, L_3);
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** L_4 = ___range0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_5 = *((UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836**)L_4);
		return L_5;
	}
}
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::get_BasicLatin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_get_BasicLatin_mD5C2B705BC7E92CA63A185071E78824CDE7DBA7D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* G_B2_0 = NULL;
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* G_B1_0 = NULL;
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_0 = ((UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var))->____u0000_0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_2;
		L_2 = UnicodeRanges_CreateRange_m3B14F44235F73441CD3332BF5438E6914EA9C1BD((&((UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var))->____u0000_0), 0, ((int32_t)127), NULL);
		G_B2_0 = L_2;
	}

IL_0016:
	{
		return G_B2_0;
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
// Conversion methods for marshalling of: System.Text.Internal.AllowedCharactersBitmap
IL2CPP_EXTERN_C void AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshal_pinvoke(const AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED& unmarshaled, AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_pinvoke& marshaled)
{
	marshaled.____allowedCharacters_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_UI4, unmarshaled.____allowedCharacters_0);
}
IL2CPP_EXTERN_C void AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshal_pinvoke_back(const AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_pinvoke& marshaled, AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.____allowedCharacters_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, marshaled.____allowedCharacters_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____allowedCharacters_0), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, marshaled.____allowedCharacters_0));
}
// Conversion method for clean up from marshalling of: System.Text.Internal.AllowedCharactersBitmap
IL2CPP_EXTERN_C void AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshal_pinvoke_cleanup(AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____allowedCharacters_0);
	marshaled.____allowedCharacters_0 = NULL;
}
// Conversion methods for marshalling of: System.Text.Internal.AllowedCharactersBitmap
IL2CPP_EXTERN_C void AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshal_com(const AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED& unmarshaled, AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_com& marshaled)
{
	marshaled.____allowedCharacters_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_UI4, unmarshaled.____allowedCharacters_0);
}
IL2CPP_EXTERN_C void AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshal_com_back(const AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_com& marshaled, AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.____allowedCharacters_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, marshaled.____allowedCharacters_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____allowedCharacters_0), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, marshaled.____allowedCharacters_0));
}
// Conversion method for clean up from marshalling of: System.Text.Internal.AllowedCharactersBitmap
IL2CPP_EXTERN_C void AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshal_com_cleanup(AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____allowedCharacters_0);
	marshaled.____allowedCharacters_0 = NULL;
}
// System.Text.Internal.AllowedCharactersBitmap System.Text.Internal.AllowedCharactersBitmap::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED AllowedCharactersBitmap_CreateNew_m6A23DE6C45553DCBE52FFB511F92ADCA097B568A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED L_1;
		memset((&L_1), 0, sizeof(L_1));
		AllowedCharactersBitmap__ctor_m84D288D533707728EBC3AA9F4D92A2A425CD4355((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap__ctor_m84D288D533707728EBC3AA9F4D92A2A425CD4355 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___allowedCharacters0, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___allowedCharacters0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDB258E32AF5134A2B31FE4D1EE6C0E30C9B5E29)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AllowedCharactersBitmap__ctor_m84D288D533707728EBC3AA9F4D92A2A425CD4355_RuntimeMethod_var)));
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___allowedCharacters0;
		__this->____allowedCharacters_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allowedCharacters_0), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedCharactersBitmap__ctor_m84D288D533707728EBC3AA9F4D92A2A425CD4355_AdjustorThunk (RuntimeObject* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___allowedCharacters0, const RuntimeMethod* method)
{
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED*>(__this + _offset);
	AllowedCharactersBitmap__ctor_m84D288D533707728EBC3AA9F4D92A2A425CD4355(_thisAdjusted, ___allowedCharacters0, method);
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::AllowCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_AllowCharacter_mA62947598D488B8397D1B785EB8710A3C2502C24 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, Il2CppChar ___character0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Il2CppChar L_0 = ___character0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1>>5));
		int32_t L_2 = V_0;
		V_2 = ((int32_t)(L_2&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____allowedCharacters_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		uint32_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		int32_t L_6 = *((uint32_t*)L_5);
		int32_t L_7 = V_2;
		*((int32_t*)L_5) = (int32_t)((int32_t)(L_6|((int32_t)(1<<((int32_t)(L_7&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedCharactersBitmap_AllowCharacter_mA62947598D488B8397D1B785EB8710A3C2502C24_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED*>(__this + _offset);
	AllowedCharactersBitmap_AllowCharacter_mA62947598D488B8397D1B785EB8710A3C2502C24(_thisAdjusted, ___character0, method);
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::ForbidCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, Il2CppChar ___character0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Il2CppChar L_0 = ___character0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1>>5));
		int32_t L_2 = V_0;
		V_2 = ((int32_t)(L_2&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____allowedCharacters_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		uint32_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		int32_t L_6 = *((uint32_t*)L_5);
		int32_t L_7 = V_2;
		*((int32_t*)L_5) = (int32_t)((int32_t)(L_6&((~((int32_t)(1<<((int32_t)(L_7&((int32_t)31)))))))));
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED*>(__this + _offset);
	AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65(_thisAdjusted, ___character0, method);
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::ForbidUndefinedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_ForbidUndefinedCharacters_mD6CE16DBD95C181B9C36CF710079DFAC5AD7C639 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_0;
		L_0 = UnicodeHelpers_GetDefinedCharacterBitmap_m761216890B0DB8540279DB1F7CDD6694B50314D9_inline(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0027;
	}

IL_000a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____allowedCharacters_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		uint32_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		int32_t L_4 = *((uint32_t*)L_3);
		int32_t L_5 = V_1;
		uint32_t* L_6;
		L_6 = il2cpp_span_get_item((uint32_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_5), ((&V_0))->____length_1);
		int32_t L_7 = *((uint32_t*)L_6);
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4&L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____allowedCharacters_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedCharactersBitmap_ForbidUndefinedCharacters_mD6CE16DBD95C181B9C36CF710079DFAC5AD7C639_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED*>(__this + _offset);
	AllowedCharactersBitmap_ForbidUndefinedCharacters_mD6CE16DBD95C181B9C36CF710079DFAC5AD7C639(_thisAdjusted, method);
}
// System.Text.Internal.AllowedCharactersBitmap System.Text.Internal.AllowedCharactersBitmap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED AllowedCharactersBitmap_Clone_m0B4354E106746EBAB8C251B846BC07C7F8EED079 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____allowedCharacters_0;
		NullCheck((RuntimeArray*)L_0);
		RuntimeObject* L_1;
		L_1 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_0, NULL);
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED L_2;
		memset((&L_2), 0, sizeof(L_2));
		AllowedCharactersBitmap__ctor_m84D288D533707728EBC3AA9F4D92A2A425CD4355((&L_2), ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED AllowedCharactersBitmap_Clone_m0B4354E106746EBAB8C251B846BC07C7F8EED079_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED*>(__this + _offset);
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED _returnValue;
	_returnValue = AllowedCharactersBitmap_Clone_m0B4354E106746EBAB8C251B846BC07C7F8EED079(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Internal.AllowedCharactersBitmap::IsCharacterAllowed(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, Il2CppChar ___character0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___character0;
		bool L_1;
		L_1 = AllowedCharactersBitmap_IsUnicodeScalarAllowed_mCE82E28101DFD37C0376B042BFDBD5713EBB51A5_inline(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED*>(__this + _offset);
	bool _returnValue;
	_returnValue = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(_thisAdjusted, ___character0, method);
	return _returnValue;
}
// System.Boolean System.Text.Internal.AllowedCharactersBitmap::IsUnicodeScalarAllowed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsUnicodeScalarAllowed_mCE82E28101DFD37C0376B042BFDBD5713EBB51A5 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, int32_t ___unicodeScalar0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___unicodeScalar0;
		V_0 = ((int32_t)(L_0>>5));
		int32_t L_1 = ___unicodeScalar0;
		V_1 = ((int32_t)(L_1&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____allowedCharacters_0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_5&((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AllowedCharactersBitmap_IsUnicodeScalarAllowed_mCE82E28101DFD37C0376B042BFDBD5713EBB51A5_AdjustorThunk (RuntimeObject* __this, int32_t ___unicodeScalar0, const RuntimeMethod* method)
{
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED*>(__this + _offset);
	bool _returnValue;
	_returnValue = AllowedCharactersBitmap_IsUnicodeScalarAllowed_mCE82E28101DFD37C0376B042BFDBD5713EBB51A5_inline(_thisAdjusted, ___unicodeScalar0, method);
	return _returnValue;
}
// System.Int32 System.Text.Internal.AllowedCharactersBitmap::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllowedCharactersBitmap_FindFirstCharacterToEncode_m0E37005FCB6C9A200E34E8D7F82119933B12510C (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_00b4;
	}

IL_0007:
	{
		Il2CppChar* L_0 = ___text0;
		int32_t L_1 = V_0;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 2)))));
		bool L_3;
		L_3 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_4 = ___text0;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_0 = L_6;
		int32_t L_7 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 2)))));
		bool L_8;
		L_8 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_9 = ___text0;
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		V_0 = L_11;
		int32_t L_12 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 2)))));
		bool L_13;
		L_13 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_12, NULL);
		if (!L_13)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_14 = ___text0;
		int32_t L_15 = V_0;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		V_0 = L_16;
		int32_t L_17 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 2)))));
		bool L_18;
		L_18 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_17, NULL);
		if (!L_18)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_19 = ___text0;
		int32_t L_20 = V_0;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		V_0 = L_21;
		int32_t L_22 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 2)))));
		bool L_23;
		L_23 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_22, NULL);
		if (!L_23)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_24 = ___text0;
		int32_t L_25 = V_0;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		V_0 = L_26;
		int32_t L_27 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 2)))));
		bool L_28;
		L_28 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_27, NULL);
		if (!L_28)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_29 = ___text0;
		int32_t L_30 = V_0;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_0 = L_31;
		int32_t L_32 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 2)))));
		bool L_33;
		L_33 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_32, NULL);
		if (!L_33)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_34 = ___text0;
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		V_0 = L_36;
		int32_t L_37 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 2)))));
		bool L_38;
		L_38 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_37, NULL);
		if (!L_38)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00b4:
	{
		int32_t L_40 = V_0;
		int32_t L_41 = ___textLength1;
		if ((((int32_t)L_40) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_41, 8)))))
		{
			goto IL_0007;
		}
	}
	{
		goto IL_010b;
	}

IL_00bf:
	{
		Il2CppChar* L_42 = ___text0;
		int32_t L_43 = V_0;
		int32_t L_44 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 2)))));
		bool L_45;
		L_45 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_44, NULL);
		if (!L_45)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_46 = ___text0;
		int32_t L_47 = V_0;
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		V_0 = L_48;
		int32_t L_49 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_46, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_48), 2)))));
		bool L_50;
		L_50 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_49, NULL);
		if (!L_50)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_51 = ___text0;
		int32_t L_52 = V_0;
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		V_0 = L_53;
		int32_t L_54 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 2)))));
		bool L_55;
		L_55 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_54, NULL);
		if (!L_55)
		{
			goto IL_012c;
		}
	}
	{
		Il2CppChar* L_56 = ___text0;
		int32_t L_57 = V_0;
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		V_0 = L_58;
		int32_t L_59 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_56, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 2)))));
		bool L_60;
		L_60 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_59, NULL);
		if (!L_60)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_61 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_010b:
	{
		int32_t L_62 = V_0;
		int32_t L_63 = ___textLength1;
		if ((((int32_t)L_62) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_63, 4)))))
		{
			goto IL_00bf;
		}
	}
	{
		goto IL_0126;
	}

IL_0113:
	{
		Il2CppChar* L_64 = ___text0;
		int32_t L_65 = V_0;
		int32_t L_66 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_65), 2)))));
		bool L_67;
		L_67 = AllowedCharactersBitmap_IsCharacterAllowed_mBAD9A317E8F0EB7672C2C1C4D0F277F1F112E2D2(__this, L_66, NULL);
		if (!L_67)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_68 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0126:
	{
		int32_t L_69 = V_0;
		int32_t L_70 = ___textLength1;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_0113;
		}
	}
	{
		V_0 = (-1);
	}

IL_012c:
	{
		int32_t L_71 = V_0;
		return L_71;
	}
}
IL2CPP_EXTERN_C  int32_t AllowedCharactersBitmap_FindFirstCharacterToEncode_m0E37005FCB6C9A200E34E8D7F82119933B12510C_AdjustorThunk (RuntimeObject* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method)
{
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AllowedCharactersBitmap_FindFirstCharacterToEncode_m0E37005FCB6C9A200E34E8D7F82119933B12510C(_thisAdjusted, ___text0, ___textLength1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoderBasicLatin__ctor_mA4678374F0BAF83C52194B6E675AB72725377972 (DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* V_0 = NULL;
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		JavaScriptEncoder__ctor_m59B9FB268C118BDFC532CC01F6E9798DE75386B6(__this, NULL);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_0 = (UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3*)(UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3*)SZArrayNew(UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var, (uint32_t)1);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_1 = L_0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_2;
		L_2 = UnicodeRanges_get_BasicLatin_mD5C2B705BC7E92CA63A185071E78824CDE7DBA7D(NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836*)L_2);
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_3 = (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B*)il2cpp_codegen_object_new(TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB(L_3, L_1, NULL);
		V_0 = L_3;
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_4 = V_0;
		NullCheck(L_4);
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED L_5;
		L_5 = TextEncoderSettings_GetAllowedCharacters_mE45DB4EE7216198ED57CA3F0789011FE08851064(L_4, NULL);
		V_1 = L_5;
		AllowedCharactersBitmap_ForbidUndefinedCharacters_mD6CE16DBD95C181B9C36CF710079DFAC5AD7C639((&V_1), NULL);
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		DefaultHtmlEncoder_ForbidHtmlCharacters_m4132C6476E1E32FB3D0DEF1897088373A66BE026(L_6, NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65((&V_1), ((int32_t)92), NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65((&V_1), ((int32_t)96), NULL);
		return;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::WillEncode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoderBasicLatin_WillEncode_m4E53C5910E23CD0549705CF3B6316DBC39CABC1C (DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* __this, int32_t ___unicodeScalar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___unicodeScalar0;
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UnicodeHelpers_IsSupplementaryCodePoint_mF61FF11936F2C7F2E041CFF0BF4080EF8B4967BC_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		int32_t L_2 = ___unicodeScalar0;
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = DefaultJavaScriptEncoderBasicLatin_NeedsEscaping_m97AF553884DB3154D793D507D0CFD78E07368810_inline(((int32_t)(uint16_t)L_2), NULL);
		return L_3;
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoderBasicLatin_FindFirstCharacterToEncode_mEE41382BC0EE3FBF57FCA8128B33CE14D0E60945 (DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int16_t* V_1 = NULL;
	int16_t* V_2 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_3;
	memset((&V_3), 0, sizeof(V_3));
	Il2CppChar V_4 = 0x0;
	{
		Il2CppChar* L_0 = ___text0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_FindFirstCharacterToEncode_mEE41382BC0EE3FBF57FCA8128B33CE14D0E60945_RuntimeMethod_var)));
	}

IL_0010:
	{
		int32_t L_2 = ___textLength1;
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		V_0 = 0;
		Il2CppChar* L_3 = ___text0;
		V_1 = (int16_t*)L_3;
		int16_t* L_4 = V_1;
		int32_t L_5 = ___textLength1;
		V_2 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_5)), ((int64_t)2))))));
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = DefaultJavaScriptEncoderBasicLatin_get_AllowList_mA555CCE584A1306ED42E833EB957465A4244BF35(NULL);
		V_3 = L_6;
	}

IL_0026:
	{
		int16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		V_4 = L_8;
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)127))))
		{
			goto IL_004a;
		}
	}
	{
		Il2CppChar L_10 = V_4;
		uint8_t* L_11;
		L_11 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_10), ((&V_3))->____length_1);
		int32_t L_12 = *((uint8_t*)L_11);
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		int16_t* L_13 = V_1;
		V_1 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_13, 2));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int16_t* L_15 = V_1;
		int16_t* L_16 = V_2;
		if ((!(((uintptr_t)L_15) >= ((uintptr_t)L_16))))
		{
			goto IL_0026;
		}
	}

IL_0048:
	{
		V_0 = (-1);
	}

IL_004a:
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::FindFirstCharacterToEncodeUtf8(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoderBasicLatin_FindFirstCharacterToEncodeUtf8_mDA508AED3C4D8AE936BBAA2F484DB8A692607F45 (DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___utf8Text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57((&___utf8Text0), ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Text0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		V_3 = 0;
		uint8_t* L_4 = V_0;
		V_4 = L_4;
		uint8_t* L_5 = V_4;
		uint32_t L_6 = V_2;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((uintptr_t)L_6)));
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		L_7 = DefaultJavaScriptEncoderBasicLatin_get_AllowList_mA555CCE584A1306ED42E833EB957465A4244BF35(NULL);
		V_6 = L_7;
	}

IL_0029:
	{
		uint8_t* L_8 = V_4;
		int32_t L_9 = *((uint8_t*)L_8);
		uint8_t* L_10;
		L_10 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_6))->____pointer_0))->value, (L_9), ((&V_6))->____length_1);
		int32_t L_11 = *((uint8_t*)L_10);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		uint8_t* L_12 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, 1));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		uint8_t* L_14 = V_4;
		uint8_t* L_15 = V_5;
		if ((!(((uintptr_t)L_14) >= ((uintptr_t)L_15))))
		{
			goto IL_0029;
		}
	}

IL_0046:
	{
		V_3 = (-1);
	}

IL_0048:
	{
		int32_t L_16 = V_3;
		return L_16;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoderBasicLatin_TryEncodeUnicodeScalar_m2691077A7D3D766406F250A5F245DB9803CA041E (DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* __this, int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		Il2CppChar* L_0 = ___buffer1;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_TryEncodeUnicodeScalar_m2691077A7D3D766406F250A5F245DB9803CA041E_RuntimeMethod_var)));
	}

IL_0010:
	{
		int32_t L_2 = ___unicodeScalar0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_2);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___unicodeScalar0;
		Il2CppChar* L_5 = ___buffer1;
		int32_t L_6 = ___bufferLength2;
		int32_t* L_7 = ___numberOfCharactersWritten3;
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TextEncoder_TryWriteScalarAsChar_m60246BD54FF00235642785D45ACA1360184D21FC_inline(L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = ___unicodeScalar0;
		switch (((int32_t)il2cpp_codegen_subtract(L_9, 8)))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_0063;
			}
			case 5:
			{
				goto IL_006b;
			}
		}
	}
	{
		int32_t L_10 = ___unicodeScalar0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_007b;
	}

IL_004b:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_b_5;
		V_0 = L_11;
		goto IL_0086;
	}

IL_0053:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_t_6;
		V_0 = L_12;
		goto IL_0086;
	}

IL_005b:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_n_7;
		V_0 = L_13;
		goto IL_0086;
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_f_8;
		V_0 = L_14;
		goto IL_0086;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = ((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_r_9;
		V_0 = L_15;
		goto IL_0086;
	}

IL_0073:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = ((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_back_10;
		V_0 = L_16;
		goto IL_0086;
	}

IL_007b:
	{
		int32_t L_17 = ___unicodeScalar0;
		Il2CppChar* L_18 = ___buffer1;
		int32_t L_19 = ___bufferLength2;
		int32_t* L_20 = ___numberOfCharactersWritten3;
		bool L_21;
		L_21 = JavaScriptEncoderHelper_TryWriteEncodedScalarAsNumericEntity_mCE6958442BE2DA2CBF00C8DF71D6BF7F070B8A73(L_17, L_18, L_19, L_20, NULL);
		return L_21;
	}

IL_0086:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = V_0;
		Il2CppChar* L_23 = ___buffer1;
		int32_t L_24 = ___bufferLength2;
		int32_t* L_25 = ___numberOfCharactersWritten3;
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = TextEncoder_TryCopyCharacters_mAAE1CAAD2FF83DC11B508692758AD82A1497C81E(L_22, L_23, L_24, L_25, NULL);
		return L_26;
	}
}
// System.ReadOnlySpan`1<System.Byte> System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::get_AllowList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D DefaultJavaScriptEncoderBasicLatin_get_AllowList_mA555CCE584A1306ED42E833EB957465A4244BF35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843____EFE627BE173681E4F55F4133AB4C1782E26D1080CB80CDB6BFAAC81416A2714E_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline((&L_0), (void*)((__StaticArrayInitTypeSizeU3D256_t801718944F76C36638EA43F29012837CBA710948*)il2cpp_codegen_get_field_data(U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843____EFE627BE173681E4F55F4133AB4C1782E26D1080CB80CDB6BFAAC81416A2714E_1_FieldInfo_var)), ((int32_t)256), /*hidden argument*/ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::NeedsEscaping(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoderBasicLatin_NeedsEscaping_m97AF553884DB3154D793D507D0CFD78E07368810 (Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar L_0 = ___value0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)127))))
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = DefaultJavaScriptEncoderBasicLatin_get_AllowList_mA555CCE584A1306ED42E833EB957465A4244BF35(NULL);
		V_0 = L_1;
		Il2CppChar L_2 = ___value0;
		uint8_t* L_3;
		L_3 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_2), ((&V_0))->____length_1);
		int32_t L_4 = *((uint8_t*)L_3);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)1;
	}
}
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoderBasicLatin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoderBasicLatin__cctor_m97FC61195EA1CA58DABF6D888B1C30A5272B684E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* L_0 = (DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C*)il2cpp_codegen_object_new(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultJavaScriptEncoderBasicLatin__ctor_mA4678374F0BAF83C52194B6E675AB72725377972(L_0, NULL);
		((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_singleton_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_singleton_4), (void*)L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)98));
		((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_b_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_b_5), (void*)L_3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)116));
		((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_t_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_t_6), (void*)L_6);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)110));
		((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_n_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_n_7), (void*)L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)102));
		((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_f_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_f_8), (void*)L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)114));
		((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_r_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_r_9), (void*)L_15);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)92));
		((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_back_10 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_back_10), (void*)L_18);
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
// System.Void System.Text.Encodings.Web.HtmlEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlEncoder__ctor_mB04BFEDA89DD7987924E2B8A75CD985F6EE71D02 (HtmlEncoder_tE84C4B976DB5BD6F0123CBBCD60556491170E353* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		TextEncoder__ctor_mAB973DBE5360A8CE416505D5F1487855B4A9B660(__this, NULL);
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
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder__ctor_m0DF07C80DAB8C7B18B14176343114B086ECBBC0E (DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE* __this, TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HtmlEncoder__ctor_mB04BFEDA89DD7987924E2B8A75CD985F6EE71D02(__this, NULL);
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_0 = ___settings0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultHtmlEncoder__ctor_m0DF07C80DAB8C7B18B14176343114B086ECBBC0E_RuntimeMethod_var)));
	}

IL_0014:
	{
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_2 = ___settings0;
		NullCheck(L_2);
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED L_3;
		L_3 = TextEncoderSettings_GetAllowedCharacters_mE45DB4EE7216198ED57CA3F0789011FE08851064(L_2, NULL);
		__this->____allowedCharacters_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____allowedCharacters_4))->____allowedCharacters_0), (void*)NULL);
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* L_4 = (&__this->____allowedCharacters_4);
		AllowedCharactersBitmap_ForbidUndefinedCharacters_mD6CE16DBD95C181B9C36CF710079DFAC5AD7C639(L_4, NULL);
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED L_5 = __this->____allowedCharacters_4;
		il2cpp_codegen_runtime_class_init_inline(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		DefaultHtmlEncoder_ForbidHtmlCharacters_m4132C6476E1E32FB3D0DEF1897088373A66BE026(L_5, NULL);
		return;
	}
}
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::ForbidHtmlCharacters(System.Text.Internal.AllowedCharactersBitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder_ForbidHtmlCharacters_m4132C6476E1E32FB3D0DEF1897088373A66BE026 (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED ___allowedCharacters0, const RuntimeMethod* method) 
{
	{
		AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65((&___allowedCharacters0), ((int32_t)60), NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65((&___allowedCharacters0), ((int32_t)62), NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65((&___allowedCharacters0), ((int32_t)38), NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65((&___allowedCharacters0), ((int32_t)39), NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65((&___allowedCharacters0), ((int32_t)34), NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA96107773390A5E578FE51E57088924839152B65((&___allowedCharacters0), ((int32_t)43), NULL);
		return;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultHtmlEncoder::WillEncode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultHtmlEncoder_WillEncode_m714DB0F9F170F5E40C6635DC903C7F89C50DAD28 (DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE* __this, int32_t ___unicodeScalar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___unicodeScalar0;
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UnicodeHelpers_IsSupplementaryCodePoint_mF61FF11936F2C7F2E041CFF0BF4080EF8B4967BC_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* L_2 = (&__this->____allowedCharacters_4);
		int32_t L_3 = ___unicodeScalar0;
		bool L_4;
		L_4 = AllowedCharactersBitmap_IsUnicodeScalarAllowed_mCE82E28101DFD37C0376B042BFDBD5713EBB51A5_inline(L_2, L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultHtmlEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultHtmlEncoder_FindFirstCharacterToEncode_m726646ED7E20FC2094AE1A133D31A6CE49BCC3F3 (DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method) 
{
	{
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* L_0 = (&__this->____allowedCharacters_4);
		Il2CppChar* L_1 = ___text0;
		int32_t L_2 = ___textLength1;
		int32_t L_3;
		L_3 = AllowedCharactersBitmap_FindFirstCharacterToEncode_m0E37005FCB6C9A200E34E8D7F82119933B12510C(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultHtmlEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultHtmlEncoder_TryEncodeUnicodeScalar_m39A2DC1D1C3D9F58799A1A64B9CD83780BFE6BB3 (DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE* __this, int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar* L_0 = ___buffer1;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultHtmlEncoder_TryEncodeUnicodeScalar_m39A2DC1D1C3D9F58799A1A64B9CD83780BFE6BB3_RuntimeMethod_var)));
	}

IL_0010:
	{
		int32_t L_2 = ___unicodeScalar0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_2);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___unicodeScalar0;
		Il2CppChar* L_5 = ___buffer1;
		int32_t L_6 = ___bufferLength2;
		int32_t* L_7 = ___numberOfCharactersWritten3;
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TextEncoder_TryWriteScalarAsChar_m60246BD54FF00235642785D45ACA1360184D21FC_inline(L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = ___unicodeScalar0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_quote_6;
		Il2CppChar* L_11 = ___buffer1;
		int32_t L_12 = ___bufferLength2;
		int32_t* L_13 = ___numberOfCharactersWritten3;
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TextEncoder_TryCopyCharacters_mAAE1CAAD2FF83DC11B508692758AD82A1497C81E(L_10, L_11, L_12, L_13, NULL);
		return L_14;
	}

IL_0038:
	{
		int32_t L_15 = ___unicodeScalar0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = ((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_ampersand_7;
		Il2CppChar* L_17 = ___buffer1;
		int32_t L_18 = ___bufferLength2;
		int32_t* L_19 = ___numberOfCharactersWritten3;
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = TextEncoder_TryCopyCharacters_mAAE1CAAD2FF83DC11B508692758AD82A1497C81E(L_16, L_17, L_18, L_19, NULL);
		return L_20;
	}

IL_004c:
	{
		int32_t L_21 = ___unicodeScalar0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = ((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_lessthan_8;
		Il2CppChar* L_23 = ___buffer1;
		int32_t L_24 = ___bufferLength2;
		int32_t* L_25 = ___numberOfCharactersWritten3;
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = TextEncoder_TryCopyCharacters_mAAE1CAAD2FF83DC11B508692758AD82A1497C81E(L_22, L_23, L_24, L_25, NULL);
		return L_26;
	}

IL_0060:
	{
		int32_t L_27 = ___unicodeScalar0;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0074;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = ((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_greaterthan_9;
		Il2CppChar* L_29 = ___buffer1;
		int32_t L_30 = ___bufferLength2;
		int32_t* L_31 = ___numberOfCharactersWritten3;
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = TextEncoder_TryCopyCharacters_mAAE1CAAD2FF83DC11B508692758AD82A1497C81E(L_28, L_29, L_30, L_31, NULL);
		return L_32;
	}

IL_0074:
	{
		int32_t L_33 = ___unicodeScalar0;
		Il2CppChar* L_34 = ___buffer1;
		int32_t L_35 = ___bufferLength2;
		int32_t* L_36 = ___numberOfCharactersWritten3;
		il2cpp_codegen_runtime_class_init_inline(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = DefaultHtmlEncoder_TryWriteEncodedScalarAsNumericEntity_m0790520BC251144999C05BF91214A99795627EB1(L_33, L_34, L_35, L_36, NULL);
		return L_37;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultHtmlEncoder::TryWriteEncodedScalarAsNumericEntity(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultHtmlEncoder_TryWriteEncodedScalarAsNumericEntity_m0790520BC251144999C05BF91214A99795627EB1 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___unicodeScalar0;
		V_1 = L_0;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_1;
		V_1 = ((int32_t)(L_2>>4));
		int32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_0004;
		}
	}
	{
		int32_t* L_4 = ___numberOfCharactersWritten3;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_5, 4));
		int32_t L_6 = V_0;
		int32_t L_7 = ___bufferLength2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, 4))) <= ((int32_t)L_7)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t* L_8 = ___numberOfCharactersWritten3;
		*((int32_t*)L_8) = (int32_t)0;
		return (bool)0;
	}

IL_001f:
	{
		Il2CppChar* L_9 = ___buffer1;
		*((int16_t*)L_9) = (int16_t)((int32_t)38);
		Il2CppChar* L_10 = ___buffer1;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, 2));
		Il2CppChar* L_11 = ___buffer1;
		*((int16_t*)L_11) = (int16_t)((int32_t)35);
		Il2CppChar* L_12 = ___buffer1;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, 2));
		Il2CppChar* L_13 = ___buffer1;
		*((int16_t*)L_13) = (int16_t)((int32_t)120);
		Il2CppChar* L_14 = ___buffer1;
		int32_t L_15 = V_0;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 2))));
	}

IL_003d:
	{
		Il2CppChar* L_16 = ___buffer1;
		int32_t L_17 = ___unicodeScalar0;
		Il2CppChar L_18;
		L_18 = HexConverter_ToCharUpper_mB949F4F4AC26CB7AF3FFFEBBBFD4EFB2528F813E_inline(L_17, NULL);
		*((int16_t*)L_16) = (int16_t)L_18;
		int32_t L_19 = ___unicodeScalar0;
		___unicodeScalar0 = ((int32_t)(L_19>>4));
		Il2CppChar* L_20 = ___buffer1;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_20, 2));
		int32_t L_21 = ___unicodeScalar0;
		if (L_21)
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar* L_22 = ___buffer1;
		int32_t L_23 = V_0;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_23, 1))), 2))));
		Il2CppChar* L_24 = ___buffer1;
		*((int16_t*)L_24) = (int16_t)((int32_t)59);
		return (bool)1;
	}
}
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder__cctor_mD50101ACF8811C3110C65413B2BB8FD514BD7944 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_0 = (UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3*)(UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3*)SZArrayNew(UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var, (uint32_t)1);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_1 = L_0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_2;
		L_2 = UnicodeRanges_get_BasicLatin_mD5C2B705BC7E92CA63A185071E78824CDE7DBA7D(NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836*)L_2);
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_3 = (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B*)il2cpp_codegen_object_new(TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB(L_3, L_1, NULL);
		DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE* L_4 = (DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE*)il2cpp_codegen_object_new(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DefaultHtmlEncoder__ctor_m0DF07C80DAB8C7B18B14176343114B086ECBBC0E(L_4, L_3, NULL);
		((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___Singleton_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___Singleton_5), (void*)L_4);
		NullCheck(_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5;
		L_5 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E, NULL);
		((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_quote_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_quote_6), (void*)L_5);
		NullCheck(_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6;
		L_6 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387, NULL);
		((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_ampersand_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_ampersand_7), (void*)L_6);
		NullCheck(_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7;
		L_7 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8, NULL);
		((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_lessthan_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_lessthan_8), (void*)L_7);
		NullCheck(_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8;
		L_8 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837, NULL);
		((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_greaterthan_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t65341C0036795EED811809CFA8956E9B170C0CAE_il2cpp_TypeInfo_var))->___s_greaterthan_9), (void*)L_8);
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
// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Encodings.Web.JavaScriptEncoder::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* JavaScriptEncoder_get_Default_mF05E6C025E2683AA08C5677625F0DF08C175F5F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C* L_0 = ((DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var))->___s_singleton_4;
		return L_0;
	}
}
// System.Void System.Text.Encodings.Web.JavaScriptEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptEncoder__ctor_m59B9FB268C118BDFC532CC01F6E9798DE75386B6 (JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		TextEncoder__ctor_mAB973DBE5360A8CE416505D5F1487855B4A9B660(__this, NULL);
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
// System.Boolean System.Text.Encodings.Web.JavaScriptEncoderHelper::TryWriteEncodedScalarAsNumericEntity(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JavaScriptEncoderHelper_TryWriteEncodedScalarAsNumericEntity_mCE6958442BE2DA2CBF00C8DF71D6BF7F070B8A73 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___length2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___unicodeScalar0;
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UnicodeHelpers_IsSupplementaryCodePoint_mF61FF11936F2C7F2E041CFF0BF4080EF8B4967BC_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_2 = ___unicodeScalar0;
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_m6D31B96CF0B7BB91D5BB5E87C20CA673D8C9AB6C(L_2, (&V_0), (&V_1), NULL);
		Il2CppChar L_3 = V_0;
		Il2CppChar* L_4 = ___buffer1;
		int32_t L_5 = ___length2;
		bool L_6;
		L_6 = JavaScriptEncoderHelper_TryWriteEncodedSingleCharacter_m3687EBD9F62A7582ACD2DAB6008CA0C842247179(L_3, L_4, L_5, (&V_2), NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		Il2CppChar* L_8 = ___buffer1;
		int32_t L_9 = V_2;
		int32_t L_10 = ___length2;
		int32_t L_11 = V_2;
		int32_t* L_12 = ___numberOfCharactersWritten3;
		bool L_13;
		L_13 = JavaScriptEncoderHelper_TryWriteEncodedSingleCharacter_m3687EBD9F62A7582ACD2DAB6008CA0C842247179(L_7, ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 2)))), ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), L_12, NULL);
		if (!L_13)
		{
			goto IL_0038;
		}
	}
	{
		int32_t* L_14 = ___numberOfCharactersWritten3;
		int32_t* L_15 = ___numberOfCharactersWritten3;
		int32_t L_16 = *((int32_t*)L_15);
		int32_t L_17 = V_2;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_16, L_17));
		return (bool)1;
	}

IL_0038:
	{
		int32_t* L_18 = ___numberOfCharactersWritten3;
		*((int32_t*)L_18) = (int32_t)0;
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_19 = ___unicodeScalar0;
		Il2CppChar* L_20 = ___buffer1;
		int32_t L_21 = ___length2;
		int32_t* L_22 = ___numberOfCharactersWritten3;
		bool L_23;
		L_23 = JavaScriptEncoderHelper_TryWriteEncodedSingleCharacter_m3687EBD9F62A7582ACD2DAB6008CA0C842247179(L_19, L_20, L_21, L_22, NULL);
		return L_23;
	}
}
// System.Boolean System.Text.Encodings.Web.JavaScriptEncoderHelper::TryWriteEncodedSingleCharacter(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JavaScriptEncoderHelper_TryWriteEncodedSingleCharacter_m3687EBD9F62A7582ACD2DAB6008CA0C842247179 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___length2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___length2;
		if ((((int32_t)L_0) >= ((int32_t)6)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_1 = ___numberOfCharactersWritten3;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0009:
	{
		Il2CppChar* L_2 = ___buffer1;
		*((int16_t*)L_2) = (int16_t)((int32_t)92);
		Il2CppChar* L_3 = ___buffer1;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, 2));
		Il2CppChar* L_4 = ___buffer1;
		*((int16_t*)L_4) = (int16_t)((int32_t)117);
		Il2CppChar* L_5 = ___buffer1;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, 2));
		Il2CppChar* L_6 = ___buffer1;
		int32_t L_7 = ___unicodeScalar0;
		Il2CppChar L_8;
		L_8 = HexConverter_ToCharUpper_mB949F4F4AC26CB7AF3FFFEBBBFD4EFB2528F813E_inline(((int32_t)(L_7>>((int32_t)12))), NULL);
		*((int16_t*)L_6) = (int16_t)L_8;
		Il2CppChar* L_9 = ___buffer1;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, 2));
		Il2CppChar* L_10 = ___buffer1;
		int32_t L_11 = ___unicodeScalar0;
		Il2CppChar L_12;
		L_12 = HexConverter_ToCharUpper_mB949F4F4AC26CB7AF3FFFEBBBFD4EFB2528F813E_inline(((int32_t)(L_11>>8)), NULL);
		*((int16_t*)L_10) = (int16_t)L_12;
		Il2CppChar* L_13 = ___buffer1;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, 2));
		Il2CppChar* L_14 = ___buffer1;
		int32_t L_15 = ___unicodeScalar0;
		Il2CppChar L_16;
		L_16 = HexConverter_ToCharUpper_mB949F4F4AC26CB7AF3FFFEBBBFD4EFB2528F813E_inline(((int32_t)(L_15>>4)), NULL);
		*((int16_t*)L_14) = (int16_t)L_16;
		Il2CppChar* L_17 = ___buffer1;
		___buffer1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_17, 2));
		Il2CppChar* L_18 = ___buffer1;
		int32_t L_19 = ___unicodeScalar0;
		Il2CppChar L_20;
		L_20 = HexConverter_ToCharUpper_mB949F4F4AC26CB7AF3FFFEBBBFD4EFB2528F813E_inline(L_19, NULL);
		*((int16_t*)L_18) = (int16_t)L_20;
		int32_t* L_21 = ___numberOfCharactersWritten3;
		*((int32_t*)L_21) = (int32_t)6;
		return (bool)1;
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
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeUtf8_mBDED5D080EC52F201E62664593CECBC70FCCC200 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___utf8Source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___utf8Destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m05AEC4D2A90CEC9EAC98791A1AA40D9398CBB3A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		V_1 = L_1;
		int8_t* L_2 = (int8_t*) alloca(((uintptr_t)((int32_t)48)));
		memset(L_2, 0, ((uintptr_t)((int32_t)48)));
		V_2 = (Il2CppChar*)(L_2);
		int8_t* L_3 = (int8_t*) alloca(((uintptr_t)((int32_t)72)));
		memset(L_3, 0, ((uintptr_t)((int32_t)72)));
		V_3 = (uint8_t*)(L_3);
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		goto IL_0222;
	}

IL_002a:
	{
		int32_t L_4 = V_6;
		uint8_t* L_5;
		L_5 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___utf8Source0))->____pointer_0))->value, (L_4), ((&___utf8Source0))->____length_1);
		int32_t L_6 = *((uint8_t*)L_5);
		V_4 = L_6;
		uint32_t L_7 = V_4;
		bool L_8;
		L_8 = UnicodeUtility_IsAsciiCodePoint_m1329DDA5CDE3710C789833508D7BC18A49DB9AC7_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_00e9;
		}
	}
	{
		uint32_t L_9 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = TextEncoder_GetAsciiEncoding_m4127218BE1A0242F780621DCF5A415826367C63C_inline(__this, (uint8_t)((int32_t)(uint8_t)L_9), NULL);
		V_9 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_9;
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var))->___s_noEscape_3;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_11) == ((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_13 = V_6;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		V_6 = L_14;
		int32_t L_15;
		L_15 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		V_7 = 1;
		goto IL_0137;
	}

IL_0077:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_9;
		if (L_17)
		{
			goto IL_0086;
		}
	}
	{
		V_7 = 0;
		V_5 = 1;
		goto IL_0137;
	}

IL_0086:
	{
		int32_t L_18 = V_6;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_19 = V_6;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_20;
		L_20 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&___utf8Source0), 0, L_19, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		V_10 = L_20;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21 = ___utf8Destination1;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_10), L_21, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_22 = V_6;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_23;
		L_23 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Source0), L_22, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___utf8Source0 = L_23;
		int32_t L_24 = V_6;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_25;
		L_25 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___utf8Destination1), L_24, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___utf8Destination1 = L_25;
		V_6 = 0;
	}

IL_00b8:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_9;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_27;
		L_27 = ReadOnlySpan_1_op_Implicit_m05AEC4D2A90CEC9EAC98791A1AA40D9398CBB3A2(L_26, ReadOnlySpan_1_op_Implicit_m05AEC4D2A90CEC9EAC98791A1AA40D9398CBB3A2_RuntimeMethod_var);
		V_10 = L_27;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28 = ___utf8Destination1;
		bool L_29;
		L_29 = ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3((&V_10), L_28, ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_00d0;
		}
	}
	{
		V_7 = 1;
		goto IL_0137;
	}

IL_00d0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_9;
		NullCheck(L_30);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_31;
		L_31 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___utf8Destination1), ((int32_t)(((RuntimeArray*)L_30)->max_length)), Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___utf8Destination1 = L_31;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_32;
		L_32 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Source0), 1, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___utf8Source0 = L_32;
		goto IL_0129;
	}

IL_00e9:
	{
		int32_t L_33 = V_6;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_34;
		L_34 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Source0), L_33, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = UnicodeHelpers_DecodeScalarValueFromUtf8_mAFF7073F104A992BBDB4755CFA3B1602920F4EFC(L_34, (&V_4), (&V_5), NULL);
		V_7 = L_35;
		int32_t L_36 = V_7;
		if (L_36)
		{
			goto IL_0137;
		}
	}
	{
		uint32_t L_37 = V_4;
		bool L_38;
		L_38 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_37);
		if (L_38)
		{
			goto IL_0137;
		}
	}
	{
		int32_t L_39 = V_6;
		int32_t L_40 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		int32_t L_41 = V_6;
		int32_t L_42;
		L_42 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_41) <= ((int32_t)L_42)))
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_43 = V_6;
		int32_t L_44 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_43, L_44));
		V_7 = 1;
		goto IL_0137;
	}

IL_0129:
	{
		int32_t L_45 = V_6;
		int32_t L_46;
		L_46 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_002a;
		}
	}

IL_0137:
	{
		int32_t L_47 = V_6;
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_48 = V_6;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_49;
		L_49 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&___utf8Source0), 0, L_48, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		V_10 = L_49;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_50 = ___utf8Destination1;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_10), L_50, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_51 = V_6;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_52;
		L_52 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Source0), L_51, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___utf8Source0 = L_52;
		int32_t L_53 = V_6;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_54;
		L_54 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___utf8Destination1), L_53, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___utf8Destination1 = L_54;
		V_6 = 0;
	}

IL_0169:
	{
		bool L_55;
		L_55 = ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843((&___utf8Source0), ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		if (L_55)
		{
			goto IL_022e;
		}
	}
	{
		int32_t L_56 = V_7;
		if (!L_56)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_57 = V_7;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_019b;
		}
	}
	{
		bool L_58 = ___isFinalBlock4;
		if (L_58)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t* L_59 = ___bytesConsumed2;
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_60, L_61));
		int32_t* L_62 = ___bytesWritten3;
		int32_t L_63 = V_1;
		int32_t L_64;
		L_64 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_63, L_64));
		return (int32_t)(2);
	}

IL_019b:
	{
		int32_t L_65 = V_7;
		if ((((int32_t)L_65) == ((int32_t)1)))
		{
			goto IL_023f;
		}
	}

IL_01a3:
	{
		uint32_t L_66 = V_4;
		Il2CppChar* L_67 = V_2;
		bool L_68;
		L_68 = VirtualFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4 /* System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&) */, __this, L_66, L_67, ((int32_t)24), (&V_8));
		if (!L_68)
		{
			goto IL_01fe;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_69;
		L_69 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		Il2CppChar* L_70 = V_2;
		int32_t L_71 = V_8;
		uint8_t* L_72 = V_3;
		NullCheck(L_69);
		int32_t L_73;
		L_73 = VirtualFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, L_69, L_70, L_71, L_72, ((int32_t)72));
		V_11 = L_73;
		uint8_t* L_74 = V_3;
		int32_t L_75 = V_11;
		ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline((&V_12), (void*)L_74, L_75, ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		uint32_t L_76 = V_4;
		bool L_77;
		L_77 = UnicodeUtility_IsAsciiCodePoint_m1329DDA5CDE3710C789833508D7BC18A49DB9AC7_inline(L_76, NULL);
		if (!L_77)
		{
			goto IL_01e7;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_78 = __this->____asciiEscape_0;
		uint32_t L_79 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80;
		L_80 = ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E((&V_12), ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_80);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_80);
	}

IL_01e7:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_81 = ___utf8Destination1;
		bool L_82;
		L_82 = ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3((&V_12), L_81, ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3_RuntimeMethod_var);
		if (!L_82)
		{
			goto IL_023f;
		}
	}
	{
		int32_t L_83 = V_11;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_84;
		L_84 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___utf8Destination1), L_83, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___utf8Destination1 = L_84;
		goto IL_0217;
	}

IL_01fe:
	{
		int32_t* L_85 = ___bytesConsumed2;
		int32_t L_86 = V_0;
		int32_t L_87;
		L_87 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		*((int32_t*)L_85) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_86, L_87));
		int32_t* L_88 = ___bytesWritten3;
		int32_t L_89 = V_1;
		int32_t L_90;
		L_90 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_89, L_90));
		return (int32_t)(3);
	}

IL_0217:
	{
		int32_t L_91 = V_5;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_92;
		L_92 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Source0), L_91, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___utf8Source0 = L_92;
	}

IL_0222:
	{
		bool L_93;
		L_93 = ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843((&___utf8Source0), ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		if (!L_93)
		{
			goto IL_002a;
		}
	}

IL_022e:
	{
		int32_t* L_94 = ___bytesConsumed2;
		int32_t L_95 = V_0;
		*((int32_t*)L_94) = (int32_t)L_95;
		int32_t* L_96 = ___bytesWritten3;
		int32_t L_97 = V_1;
		int32_t L_98;
		L_98 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		*((int32_t*)L_96) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_97, L_98));
		return (int32_t)(0);
	}

IL_023f:
	{
		int32_t* L_99 = ___bytesConsumed2;
		int32_t L_100 = V_0;
		int32_t L_101;
		L_101 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_100, L_101));
		int32_t* L_102 = ___bytesWritten3;
		int32_t L_103 = V_1;
		int32_t L_104;
		L_104 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		*((int32_t*)L_102) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_103, L_104));
		return (int32_t)(1);
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::Encode(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_Encode_mD4B2544A8B30FBA75511601A6672A95C262EB663 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		bool L_0;
		L_0 = ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7((&___source0), ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t* L_1 = ___charsConsumed2;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t* L_2 = ___charsWritten3;
		*((int32_t*)L_2) = (int32_t)0;
		return (int32_t)(0);
	}

IL_0012:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___source0;
		V_0 = L_3;
		int32_t L_4;
		L_4 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6;
		L_6 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_7;
		L_7 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___source0), 0, L_6, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0034:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = V_0;
		int32_t L_9;
		L_9 = TextEncoder_FindFirstCharacterToEncode_m055812C29995C1DFD2E2C899571736DBE5B28589(__this, L_8, NULL);
		V_1 = L_9;
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_11;
		L_11 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_1 = L_11;
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_13;
		L_13 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___source0), 0, L_12, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_5 = L_13;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_14 = ___destination1;
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_5), L_14, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t* L_17 = ___charsConsumed2;
		int32_t L_18;
		L_18 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		*((int32_t*)L_17) = (int32_t)L_18;
		int32_t* L_19 = ___charsWritten3;
		int32_t L_20;
		L_20 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		*((int32_t*)L_19) = (int32_t)L_20;
		return (int32_t)(0);
	}

IL_007a:
	{
		int32_t L_21 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_22;
		L_22 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___source0), L_21, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		int32_t L_23 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_24;
		L_24 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___destination1), L_23, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		bool L_25 = ___isFinalBlock4;
		int32_t L_26;
		L_26 = TextEncoder_U3CEncodeU3Eg__EncodeCoreU7C15_0_mEF12EEA0EC07785552E46509F3407967C95E9D26(__this, L_22, L_24, (&V_3), (&V_4), L_25, NULL);
		V_2 = L_26;
		int32_t* L_27 = ___charsConsumed2;
		int32_t L_28 = V_1;
		int32_t L_29 = V_3;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29));
		int32_t* L_30 = ___charsWritten3;
		int32_t L_31 = V_1;
		int32_t L_32 = V_4;
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_add(L_31, L_32));
		int32_t L_33 = V_2;
		return L_33;
	}
}
// System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncode(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncode_m055812C29995C1DFD2E2C899571736DBE5B28589 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m90426C97E513B64C17AE47E597545E6686B0900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___text0;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m90426C97E513B64C17AE47E597545E6686B0900E(L_0, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m90426C97E513B64C17AE47E597545E6686B0900E_RuntimeMethod_var);
		V_1 = L_1;
		Il2CppChar* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___text0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_5;
		L_5 = VirtualFuncInvoker2< int32_t, Il2CppChar*, int32_t >::Invoke(5 /* System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32) */, __this, L_3, L_4);
		return L_5;
	}
}
// System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncodeUtf8(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncodeUtf8_mAF4E9C94A751B36CE70A67B1324BDC2169D9FA9E (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___utf8Text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		bool L_0 = __this->____isAsciiCacheInitialized_1;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		TextEncoder_InitializeAsciiCache_m28C04EEA881CAF8616897BF1E3973C7FC768960B(__this, NULL);
	}

IL_0010:
	{
		uint8_t* L_1;
		L_1 = ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57((&___utf8Text0), ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		V_2 = 0;
		goto IL_0060;
	}

IL_001f:
	{
		uint8_t* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)));
		bool L_6;
		L_6 = UnicodeUtility_IsAsciiCodePoint_m1329DDA5CDE3710C789833508D7BC18A49DB9AC7_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		uint8_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_8)));
		bool L_10;
		L_10 = TextEncoder_DoesAsciiNeedEncoding_m75B40B8AADFFD6095825932C2599D47165B257D6_inline(__this, L_9, NULL);
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_0060;
	}

IL_003c:
	{
		int32_t L_12 = V_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_13;
		L_13 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Text0), L_12, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = UnicodeHelpers_DecodeScalarValueFromUtf8_mAFF7073F104A992BBDB4755CFA3B1602920F4EFC(L_13, (&V_4), (&V_5), NULL);
		V_3 = L_14;
		int32_t L_15 = V_3;
		if (L_15)
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_16 = V_4;
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_16);
		if (L_17)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
	}

IL_0060:
	{
		int32_t L_20 = V_2;
		int32_t L_21;
		L_21 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Text0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_001f;
		}
	}
	{
		V_2 = (-1);
	}

IL_006c:
	{
		int32_t L_22 = V_2;
		return L_22;
	}
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryCopyCharacters(System.Char[],System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryCopyCharacters_mAAE1CAAD2FF83DC11B508692758AD82A1497C81E (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___source0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___destinationLength2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___source0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_2 = ___numberOfCharactersWritten3;
		*((int32_t*)L_2) = (int32_t)0;
		return (bool)0;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_001d;
	}

IL_000f:
	{
		Il2CppChar* L_3 = ___destination1;
		int32_t L_4 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___source0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), 2))))) = (int16_t)L_8;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001d:
	{
		int32_t L_10 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___source0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t* L_12 = ___numberOfCharactersWritten3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___source0;
		NullCheck(L_13);
		*((int32_t*)L_12) = (int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length));
		return (bool)1;
	}
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryWriteScalarAsChar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryWriteScalarAsChar_m60246BD54FF00235642785D45ACA1360184D21FC (int32_t ___unicodeScalar0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___destinationLength2;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_1 = ___numberOfCharactersWritten3;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0009:
	{
		Il2CppChar* L_2 = ___destination1;
		int32_t L_3 = ___unicodeScalar0;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)L_3);
		int32_t* L_4 = ___numberOfCharactersWritten3;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}
}
// System.Byte[] System.Text.Encodings.Web.TextEncoder::GetAsciiEncoding(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextEncoder_GetAsciiEncoding_m4127218BE1A0242F780621DCF5A415826367C63C (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->____asciiEscape_0;
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_5 = ___value0;
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_5);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var))->___s_noEscape_3;
		V_0 = L_7;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_8 = __this->____asciiEscape_0;
		uint8_t L_9 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoder::InitializeAsciiCache()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TextEncoder_InitializeAsciiCache_m28C04EEA881CAF8616897BF1E3973C7FC768960B (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC* L_0 = (&__this->____asciiNeedsEscaping_2);
		U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37* L_1 = (&L_0->___Data_0);
		bool* L_2 = (&L_1->___FixedElementField_0);
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_4);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_2, L_3))) = (int8_t)L_5;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)128))))
		{
			goto IL_0004;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isAsciiCacheInitialized_1 = (bool)1;
		return;
	}
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::DoesAsciiNeedEncoding(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_DoesAsciiNeedEncoding_m75B40B8AADFFD6095825932C2599D47165B257D6 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC* L_0 = (&__this->____asciiNeedsEscaping_2);
		U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37* L_1 = (&L_0->___Data_0);
		bool* L_2 = (&L_1->___FixedElementField_0);
		uint32_t L_3 = ___value0;
		int32_t L_4 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)L_3))));
		return (bool)L_4;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__ctor_mAB973DBE5360A8CE416505D5F1487855B4A9B660 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->____asciiEscape_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____asciiEscape_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__cctor_m49149BFB1B59BE5A6FE501C9FD8CFF53ED05E99E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var);
		((TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var))->___s_noEscape_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var))->___s_noEscape_3), (void*)L_0);
		return;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::<Encode>g__EncodeCore|15_0(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_U3CEncodeU3Eg__EncodeCoreU7C15_0_mEF12EEA0EC07785552E46509F3407967C95E9D26 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA7F9D55B3DD6D0035A620031025B2B0DBE88DB50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	Il2CppChar* V_8 = NULL;
	Il2CppChar* V_9 = NULL;
	{
		bool L_0;
		L_0 = Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30((&___destination1), Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA7F9D55B3DD6D0035A620031025B2B0DBE88DB50_inline(Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA7F9D55B3DD6D0035A620031025B2B0DBE88DB50_RuntimeMethod_var);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2;
		L_2 = Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1(L_1, Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var);
		___destination1 = L_2;
	}

IL_0015:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0127;
	}

IL_001e:
	{
		int32_t L_3 = V_1;
		Il2CppChar* L_4;
		L_4 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_3), ((&___source0))->____length_1);
		int32_t L_5 = *((uint16_t*)L_4);
		V_3 = L_5;
		int32_t L_6 = V_3;
		bool L_7;
		L_7 = UnicodeUtility_IsSurrogateCodePoint_m0064BDCBDC0555AAF6E9F34C291428D1DD51FF7F_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = V_3;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_8);
		if (L_9)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((!(((uint32_t)L_10) < ((uint32_t)L_11))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		Il2CppChar* L_14;
		L_14 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (L_13), ((&___destination1))->____length_1);
		int32_t L_15 = V_3;
		*((int16_t*)L_14) = (int16_t)((int32_t)(uint16_t)L_15);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		goto IL_0127;
	}

IL_0061:
	{
		int32_t L_17 = V_3;
		V_5 = L_17;
		V_3 = ((int32_t)65533);
		uint32_t L_18 = V_5;
		bool L_19;
		L_19 = UnicodeUtility_IsHighSurrogateCodePoint_mA76C812B4957758B05EEBDA71DD4DA5E9EDA1D27_inline(L_18, NULL);
		if (!L_19)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_20 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_6;
		int32_t L_22;
		L_22 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_22))))
		{
			goto IL_008c;
		}
	}
	{
		bool L_23 = ___isFinalBlock4;
		if (L_23)
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_013f;
	}

IL_008c:
	{
		int32_t L_24 = V_6;
		Il2CppChar* L_25;
		L_25 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_24), ((&___source0))->____length_1);
		int32_t L_26 = *((uint16_t*)L_25);
		V_7 = L_26;
		uint32_t L_27 = V_7;
		bool L_28;
		L_28 = UnicodeUtility_IsLowSurrogateCodePoint_m22B1F45D81E0CE2F4FD32875B61B9E5082003F29_inline(L_27, NULL);
		if (!L_28)
		{
			goto IL_00e7;
		}
	}
	{
		uint32_t L_29 = V_5;
		uint32_t L_30 = V_7;
		uint32_t L_31;
		L_31 = UnicodeUtility_GetScalarFromUtf16SurrogatePair_mC4315DD7C63F20B863EA8BCE61F03EA92B1240B1(L_29, L_30, NULL);
		V_3 = L_31;
		int32_t L_32 = V_3;
		bool L_33;
		L_33 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_32);
		if (L_33)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_34, 1))) < ((uint32_t)L_35))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_36 = V_0;
		Il2CppChar* L_37;
		L_37 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (L_36), ((&___destination1))->____length_1);
		uint32_t L_38 = V_5;
		*((int16_t*)L_37) = (int16_t)((int32_t)(uint16_t)L_38);
		int32_t L_39 = V_0;
		Il2CppChar* L_40;
		L_40 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (((int32_t)il2cpp_codegen_add(L_39, 1))), ((&___destination1))->____length_1);
		uint32_t L_41 = V_7;
		*((int16_t*)L_40) = (int16_t)((int32_t)(uint16_t)L_41);
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 2));
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 2));
		goto IL_0127;
	}

IL_00e7:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{// begin finally (depth: 1)
				V_9 = (Il2CppChar*)((uintptr_t)0);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_44 = ___destination1;
				Il2CppChar* L_45;
				L_45 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71(L_44, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_RuntimeMethod_var);
				V_9 = L_45;
				Il2CppChar* L_46 = V_9;
				V_8 = (Il2CppChar*)((uintptr_t)L_46);
				int32_t L_47 = V_3;
				Il2CppChar* L_48 = V_8;
				int32_t L_49 = V_0;
				int32_t L_50;
				L_50 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
				int32_t L_51 = V_0;
				bool L_52;
				L_52 = VirtualFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4 /* System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&) */, __this, L_47, ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 2)))), ((int32_t)il2cpp_codegen_subtract(L_50, L_51)), (&V_4));
				if (L_52)
				{
					goto IL_0112_1;
				}
			}
			{
				goto IL_0143;
			}

IL_0112_1:
			{
				goto IL_0119;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0119:
	{
		int32_t L_53 = V_1;
		int32_t L_54 = V_3;
		int32_t L_55;
		L_55 = UnicodeUtility_GetUtf16SequenceLength_m24BE64983EC5481F7AD057BD49C7A5C850ABFAF9(L_54, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, L_55));
		int32_t L_56 = V_0;
		int32_t L_57 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_56, L_57));
	}

IL_0127:
	{
		int32_t L_58 = V_1;
		int32_t L_59;
		L_59 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_58) >= ((uint32_t)L_59))))
		{
			goto IL_001e;
		}
	}
	{
		V_2 = 0;
	}

IL_0136:
	{
		int32_t* L_60 = ___charsConsumed2;
		int32_t L_61 = V_1;
		*((int32_t*)L_60) = (int32_t)L_61;
		int32_t* L_62 = ___charsWritten3;
		int32_t L_63 = V_0;
		*((int32_t*)L_62) = (int32_t)L_63;
		int32_t L_64 = V_2;
		return L_64;
	}

IL_013f:
	{
		V_2 = 2;
		goto IL_0136;
	}

IL_0143:
	{
		V_2 = 1;
		goto IL_0136;
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


// Conversion methods for marshalling of: System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData
IL2CPP_EXTERN_C void AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshal_pinvoke(const AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC& unmarshaled, AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshaled_pinvoke& marshaled)
{
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke(unmarshaled.___Data_0, marshaled.___Data_0);
}
IL2CPP_EXTERN_C void AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshal_pinvoke_back(const AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshaled_pinvoke& marshaled, AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC& unmarshaled)
{
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37 unmarshaledData_temp_0;
	memset((&unmarshaledData_temp_0), 0, sizeof(unmarshaledData_temp_0));
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke_back(marshaled.___Data_0, unmarshaledData_temp_0);
	unmarshaled.___Data_0 = unmarshaledData_temp_0;
}
// Conversion method for clean up from marshalling of: System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData
IL2CPP_EXTERN_C void AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshal_pinvoke_cleanup(AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshaled_pinvoke& marshaled)
{
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke_cleanup(marshaled.___Data_0);
}


// Conversion methods for marshalling of: System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData
IL2CPP_EXTERN_C void AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshal_com(const AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC& unmarshaled, AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshaled_com& marshaled)
{
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com(unmarshaled.___Data_0, marshaled.___Data_0);
}
IL2CPP_EXTERN_C void AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshal_com_back(const AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshaled_com& marshaled, AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC& unmarshaled)
{
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37 unmarshaledData_temp_0;
	memset((&unmarshaledData_temp_0), 0, sizeof(unmarshaledData_temp_0));
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com_back(marshaled.___Data_0, unmarshaledData_temp_0);
	unmarshaled.___Data_0 = unmarshaledData_temp_0;
}
// Conversion method for clean up from marshalling of: System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData
IL2CPP_EXTERN_C void AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshal_com_cleanup(AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC_marshaled_com& marshaled)
{
	U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com_cleanup(marshaled.___Data_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke(const U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37& unmarshaled, U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke& marshaled)
{
	marshaled.___FixedElementField_0 = static_cast<int32_t>(unmarshaled.___FixedElementField_0);
}
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke_back(const U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke& marshaled, U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37& unmarshaled)
{
	bool unmarshaledFixedElementField_temp_0 = false;
	unmarshaledFixedElementField_temp_0 = static_cast<bool>(marshaled.___FixedElementField_0);
	unmarshaled.___FixedElementField_0 = unmarshaledFixedElementField_temp_0;
}
// Conversion method for clean up from marshalling of: System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_pinvoke_cleanup(U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com(const U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37& unmarshaled, U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com& marshaled)
{
	marshaled.___FixedElementField_0 = static_cast<int32_t>(unmarshaled.___FixedElementField_0);
}
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com_back(const U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com& marshaled, U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37& unmarshaled)
{
	bool unmarshaledFixedElementField_temp_0 = false;
	unmarshaledFixedElementField_temp_0 = static_cast<bool>(marshaled.___FixedElementField_0);
	unmarshaled.___FixedElementField_0 = unmarshaledFixedElementField_temp_0;
}
// Conversion method for clean up from marshalling of: System.Text.Encodings.Web.TextEncoder/AsciiNeedsEscapingData/<Data>e__FixedBuffer
IL2CPP_EXTERN_C void U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshal_com_cleanup(U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Encodings.Web.TextEncoderSettings::.ctor(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* ___allowedRanges0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_0 = ___allowedRanges0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3D7E554C2FD3D52D9690E3D5BB7B7321C3FA52B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB_RuntimeMethod_var)));
	}

IL_0014:
	{
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED L_2;
		L_2 = AllowedCharactersBitmap_CreateNew_m6A23DE6C45553DCBE52FFB511F92ADCA097B568A(NULL);
		__this->____allowedCharactersBitmap_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____allowedCharactersBitmap_0))->____allowedCharacters_0), (void*)NULL);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_3 = ___allowedRanges0;
		VirtualActionInvoker1< UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* >::Invoke(5 /* System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRanges(System.Text.Unicode.UnicodeRange[]) */, __this, L_3);
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRange(System.Text.Unicode.UnicodeRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings_AllowRange_mE18D9F922D41074A99B571237B152FA25E3CD466 (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* ___range0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_0 = ___range0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings_AllowRange_mE18D9F922D41074A99B571237B152FA25E3CD466_RuntimeMethod_var)));
	}

IL_000e:
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_2 = ___range0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnicodeRange_get_FirstCodePoint_mA023CB7BCEE4210B23D6FBFA1B421D4C53F31D35_inline(L_2, NULL);
		V_0 = L_3;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_4 = ___range0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnicodeRange_get_Length_m3664F9267AB716A55BB92139410B57B47C1AD154_inline(L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0033;
	}

IL_0020:
	{
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* L_6 = (&__this->____allowedCharactersBitmap_0);
		int32_t L_7 = V_0;
		int32_t L_8 = V_2;
		AllowedCharactersBitmap_AllowCharacter_mA62947598D488B8397D1B785EB8710A3C2502C24(L_6, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_7, L_8))), NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRanges(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings_AllowRanges_m51D0C4BD65E72A1D7166C0CA74656AA1658D7580 (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* ___ranges0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_0 = ___ranges0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FC0613DB074A9C5DAB592FE3F86B3EDD439F7E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings_AllowRanges_m51D0C4BD65E72A1D7166C0CA74656AA1658D7580_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_2 = ___ranges0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		VirtualActionInvoker1< UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* >::Invoke(4 /* System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRange(System.Text.Unicode.UnicodeRange) */, __this, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_8 = ___ranges0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.TextEncoderSettings::GetAllowedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED TextEncoderSettings_GetAllowedCharacters_mE45DB4EE7216198ED57CA3F0789011FE08851064 (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, const RuntimeMethod* method) 
{
	{
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* L_0 = (&__this->____allowedCharactersBitmap_0);
		AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED L_1;
		L_1 = AllowedCharactersBitmap_Clone_m0B4354E106746EBAB8C251B846BC07C7F8EED079(L_0, NULL);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = ___lowerBound1;
		uint32_t L_2 = ___upperBound2;
		uint32_t L_3 = ___lowerBound1;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_mE2E0C317C7E4EA0780ACD3F096B2E6FEA34B2DD7_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m91BD9FEB065273A6C9B180FF5C92904F139C5DBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___source0;
		uint32_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m91BD9FEB065273A6C9B180FF5C92904F139C5DBF_inline(L_0, MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m91BD9FEB065273A6C9B180FF5C92904F139C5DBF_RuntimeMethod_var);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		uint32_t L_3 = V_0;
		uint32_t L_4;
		L_4 = BinaryPrimitives_ReverseEndianness_mC4AB333A1E3C60D14DADE6015280AC3D30B94A2B_inline(L_3, NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		uint32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m1329DDA5CDE3710C789833508D7BC18A49DB9AC7_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m786BFD5158D01D1AD0073DFC0609231BAF4E5777_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFirstCodePointU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m7965F884FA95909701DC2125445C86B43B549720_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 UnicodeHelpers_GetDefinedCharacterBitmap_m761216890B0DB8540279DB1F7CDD6694B50314D9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = UnicodeHelpers_get_DefinedCharsBitmapSpan_mC776443C3223BDA5BF23013BE65B9CDF4246B0B6(NULL);
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2;
		L_2 = MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_inline(L_1, MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ((UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71_il2cpp_TypeInfo_var))->____definedCharacterBitmapBigEndian_0;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_4;
		L_4 = ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988(L_3, ReadOnlySpan_1_op_Implicit_mB8D8D4A523F8C6EE5C81529003C9592400512988_RuntimeMethod_var);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsUnicodeScalarAllowed_mCE82E28101DFD37C0376B042BFDBD5713EBB51A5_inline (AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED* __this, int32_t ___unicodeScalar0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___unicodeScalar0;
		V_0 = ((int32_t)(L_0>>5));
		int32_t L_1 = ___unicodeScalar0;
		V_1 = ((int32_t)(L_1&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____allowedCharacters_0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_5&((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeHelpers_IsSupplementaryCodePoint_mF61FF11936F2C7F2E041CFF0BF4080EF8B4967BC_inline (int32_t ___scalar0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___scalar0;
		return (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)-65536)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoderBasicLatin_NeedsEscaping_m97AF553884DB3154D793D507D0CFD78E07368810_inline (Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar L_0 = ___value0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)127))))
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoderBasicLatin_t9C31BFC6663FA80C9B05E2964FAEEEDA77636E7C_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = DefaultJavaScriptEncoderBasicLatin_get_AllowList_mA555CCE584A1306ED42E833EB957465A4244BF35(NULL);
		V_0 = L_1;
		Il2CppChar L_2 = ___value0;
		uint8_t* L_3;
		L_3 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_2), ((&V_0))->____length_1);
		int32_t L_4 = *((uint8_t*)L_3);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_TryWriteScalarAsChar_m60246BD54FF00235642785D45ACA1360184D21FC_inline (int32_t ___unicodeScalar0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___destinationLength2;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_1 = ___numberOfCharactersWritten3;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0009:
	{
		Il2CppChar* L_2 = ___destination1;
		int32_t L_3 = ___unicodeScalar0;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)L_3);
		int32_t* L_4 = ___numberOfCharactersWritten3;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar HexConverter_ToCharUpper_mB949F4F4AC26CB7AF3FFFEBBBFD4EFB2528F813E_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		___value0 = ((int32_t)(L_0&((int32_t)15)));
		int32_t L_1 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)48)));
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_add(L_3, 7));
	}

IL_0016:
	{
		int32_t L_4 = ___value0;
		return ((int32_t)(uint16_t)L_4);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextEncoder_GetAsciiEncoding_m4127218BE1A0242F780621DCF5A415826367C63C_inline (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->____asciiEscape_0;
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_5 = ___value0;
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_5);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_il2cpp_TypeInfo_var))->___s_noEscape_3;
		V_0 = L_7;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_8 = __this->____asciiEscape_0;
		uint8_t L_9 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_DoesAsciiNeedEncoding_m75B40B8AADFFD6095825932C2599D47165B257D6_inline (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		AsciiNeedsEscapingData_t00F9B997CA974017BCD982A68921BC34F4D1C2FC* L_0 = (&__this->____asciiNeedsEscaping_2);
		U3CDataU3Ee__FixedBuffer_t20CBAE413C47188F7794C5CEEB13B732F34A5D37* L_1 = (&L_0->___Data_0);
		bool* L_2 = (&L_1->___FixedElementField_0);
		uint32_t L_3 = ___value0;
		int32_t L_4 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)L_3))));
		return (bool)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_m0064BDCBDC0555AAF6E9F34C291428D1DD51FF7F_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_0, ((int32_t)55296), ((int32_t)57343), NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsHighSurrogateCodePoint_mA76C812B4957758B05EEBDA71DD4DA5E9EDA1D27_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_0, ((int32_t)55296), ((int32_t)56319), NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsLowSurrogateCodePoint_m22B1F45D81E0CE2F4FD32875B61B9E5082003F29_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_mFC49E636E3A42AADB68FD55CD050B21BA617ED0E_inline(L_0, ((int32_t)56320), ((int32_t)57343), NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_mA023CB7BCEE4210B23D6FBFA1B421D4C53F31D35_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFirstCodePointU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_m3664F9267AB716A55BB92139410B57B47C1AD154_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_1, NULL);
	}

IL_0016:
	{
		if (!false)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_3, NULL);
	}

IL_002c:
	{
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint8_t>();
		V_0 = (uint32_t)L_4;
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<uint32_t>();
		V_1 = (uint32_t)L_5;
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (uint32_t)L_6;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_9 = V_2;
		V_3 = (int32_t)L_9;
		goto IL_005c;
	}

IL_0048:
	{
		uint32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0052;
		}
	}
	{
		uint32_t L_11 = V_2;
		uint32_t L_12 = V_1;
		V_3 = ((int32_t)((uint32_t)(int32_t)L_11/(uint32_t)(int32_t)L_12));
		goto IL_005c;
	}

IL_0052:
	{
		uint32_t L_13 = V_2;
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_1;
		if ((uint64_t)(((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_14)))/(uint64_t)(int64_t)((int64_t)(uint64_t)L_15)))) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_Cast_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6507E4C4082DEE7B211FBA61EE47C061D6E8BDFB_RuntimeMethod_var);
		V_3 = ((int32_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_14)))/(uint64_t)(int64_t)((int64_t)(uint64_t)L_15))));
	}

IL_005c:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_16 = ___span0;
		uint8_t* L_17;
		L_17 = ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_16, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint32_t* L_18;
		L_18 = il2cpp_unsafe_as_ref<uint32_t>(L_17);
		int32_t L_19 = V_3;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_20), L_18, L_19, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_20;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA7F9D55B3DD6D0035A620031025B2B0DBE88DB50_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mC4AB333A1E3C60D14DADE6015280AC3D30B94A2B_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m91BD9FEB065273A6C9B180FF5C92904F139C5DBF_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE630BC590135F8CE4B147BB7DF7DD45C759397E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_3;
		L_3 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___source0;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE630BC590135F8CE4B147BB7DF7DD45C759397E5(L_4, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE630BC590135F8CE4B147BB7DF7DD45C759397E5_RuntimeMethod_var);
		uint32_t L_6;
		L_6 = il2cpp_unsafe_read_unaligned<uint32_t>(L_5);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___ptr0;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
