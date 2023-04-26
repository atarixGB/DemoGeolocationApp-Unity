#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Tuple`2<System.Double,System.Double>
struct Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// GPS
struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UI
struct UI_t16DF663EF61FBCB2402111DB12E3091C775B4539;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GPS/<getGPSCoordinates>d__17
struct U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral6CFC0D9BF7DD445A18DB4AA85B23D778C80633A3;
IL2CPP_EXTERN_C String_t* _stringLiteral768115EEF8781D44AA6B86B3FB32E7C28164EB78;
IL2CPP_EXTERN_C String_t* _stringLiteral9028F395EF04A6E84C0F9BCB37129B76235030A6;
IL2CPP_EXTERN_C String_t* _stringLiteral9150854E20960D7C4FF22DA43731C86836B37759;
IL2CPP_EXTERN_C String_t* _stringLiteralB29863D97935F87245759F48D47366B206A87A11;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralE0FC6177ACBCFF2A86316A251637860898C09956;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetGPSCoordinatesU3Ed__17_System_Collections_IEnumerator_Reset_mE7A7EBC2CEF2028A2E3D77912622D5B96745D4BE_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;

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

// System.Tuple`2<System.Double,System.Double>
struct Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	double ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	double ___m_Item2_1;
};

// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F  : public RuntimeObject
{
};

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// Helper
struct Helper_tC71049E762957550F9959B0779D2776A1203C587  : public RuntimeObject
{
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GPS/<getGPSCoordinates>d__17
struct U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1  : public RuntimeObject
{
	// System.Int32 GPS/<getGPSCoordinates>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GPS/<getGPSCoordinates>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GPS GPS/<getGPSCoordinates>d__17::<>4__this
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GPS
struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GPS::isMagneticNorth
	bool ___isMagneticNorth_5;
	// System.Double GPS::NewCoordinatesDistance
	double ___NewCoordinatesDistance_6;
	// System.Tuple`2<System.Double,System.Double> GPS::randomCoordinates
	Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* ___randomCoordinates_7;
	// System.Tuple`2<System.Double,System.Double> GPS::currentCoordinates
	Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* ___currentCoordinates_8;
	// UnityEngine.Vector3 GPS::attitude
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___attitude_9;
	// System.Double GPS::north
	double ___north_10;
	// System.Boolean GPS::areCoordinatesEmpty
	bool ___areCoordinatesEmpty_11;
	// System.Boolean GPS::areRandomCoordinatesSet
	bool ___areRandomCoordinatesSet_12;
	// System.Double GPS::randomBearing
	double ___randomBearing_13;
	// System.Random GPS::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_14;
};

// UI
struct UI_t16DF663EF61FBCB2402111DB12E3091C775B4539  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UI::distanceThreshold
	float ___distanceThreshold_5;
	// System.Int32 UI::numberOfDecimals
	int32_t ___numberOfDecimals_6;
	// TMPro.TextMeshProUGUI[] UI::textboxLabels
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___textboxLabels_7;
	// UnityEngine.UI.Image UI::greenSquare
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___greenSquare_8;
	// UnityEngine.UI.RawImage UI::arrow
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___arrow_9;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Tuple`2<System.Double,System.Double>

// System.Tuple`2<System.Double,System.Double>

// UnityEngine.Compass

// UnityEngine.Compass

// UnityEngine.Gyroscope

// UnityEngine.Gyroscope

// Helper

// Helper

// UnityEngine.LocationService

// UnityEngine.LocationService

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// GPS/<getGPSCoordinates>d__17

// GPS/<getGPSCoordinates>d__17

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// UnityEngine.LocationInfo

// UnityEngine.LocationInfo

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// GPS
struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields
{
	// GPS GPS::<Instance>k__BackingField
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___U3CInstanceU3Ek__BackingField_4;
};

// GPS

// UI

// UI

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.RawImage

// UnityEngine.UI.RawImage

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
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
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* m_Items[1];

	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T1 System.Tuple`2<System.Double,System.Double>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_gshared_inline (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Double,System.Double>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_gshared_inline (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* __this, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Double,System.Double>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC_gshared (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* __this, double ___0_item1, double ___1_item2, const RuntimeMethod* method) ;

// System.Void GPS::set_Instance(GPS)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPS_set_Instance_m9EFFCCBB4E801683289241F15D9B75C4D264EC0A_inline (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Helper::getElapsedSecondsFromUnixEpoch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Helper_getElapsedSecondsFromUnixEpoch_m0EBAD1A27A9D87F6AE1C68D9397ABFE7FE834D8C (const RuntimeMethod* method) ;
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___0_Seed, const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GPS::getGPSCoordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GPS_getGPSCoordinates_mA7AF050503FE06586138243C6BD8353760E07E11 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Double,System.Double>::get_Item1()
inline double Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D*, const RuntimeMethod*))Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<System.Double,System.Double>::get_Item2()
inline double Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D*, const RuntimeMethod*))Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_gshared_inline)(__this, method);
}
// System.Tuple`2<System.Double,System.Double> Helper::getNewGPSCoordinate(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* Helper_getNewGPSCoordinate_m77327B95A023F034A47BFBC654D96ABC6308F85C (double ___0_lat1, double ___1_long1, double ___2_bearing, double ___3_distance, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96 (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Compass UnityEngine.Input::get_compass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Compass::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9 (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void GPS/<getGPSCoordinates>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetGPSCoordinatesU3Ed__17__ctor_m17B61356F2C09872A8F22747A36E0F3416F74905 (U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_m5076FE201E96C086B0F9C2D8677DA69C98099F3D (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, float ___0_desiredAccuracyInMeters, float ___1_updateDistanceInMeters, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Double,System.Double>::.ctor(T1,T2)
inline void Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* __this, double ___0_item1, double ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D*, double, double, const RuntimeMethod*))Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC_gshared)(__this, ___0_item1, ___1_item2, method);
}
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.LocationInfo::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_horizontalAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_horizontalAccuracy_m3178154DD5F4F72B8743665F33CCAE5BEC6296F4 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Single UnityEngine.Compass::get_magneticHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Compass_get_magneticHeading_m5052F97DD5B914F629B138956D250AE2EFFE1C55 (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Compass::get_trueHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Double Helper::degreesToRadians(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B (double ___0_valueInDegrees, const RuntimeMethod* method) ;
// System.Double Helper::radiansToDegrees(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Helper_radiansToDegrees_m0B1D570588853C6720035C4D75D90EC19CE1DB0C (double ___0_valueInRadians, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_kind, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void UI::displayTargetLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_displayTargetLocation_m3CD585034947786F9B68DE5B3232B9E3CB7EE297 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::displayDistanceFromTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_displayDistanceFromTarget_m55E8E4562910E3C1FA5E6BF2E405AC008D92CA37 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::displayCurrentLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_displayCurrentLocation_m4590C00079FBAABFC05667697A1912DA810C1B3F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::rotateArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_rotateArrow_m2E42F991980B65EA55CDDFED91C6F12FA1B3DE94 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::displayCurrentDeviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_displayCurrentDeviceOrientation_mEC974F1E8CCD61C31249E3BDE96BBACFDD82738D (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// GPS GPS::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline (const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___0_value, int32_t ___1_digits, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Double Helper::distanceBetweenTwoGPSCoordinates(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Helper_distanceBetweenTwoGPSCoordinates_m20E9BBD75BC72FEFFF344375A747F061516DD8B7 (double ___0_lat1, double ___1_long1, double ___2_lat2, double ___3_long2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UI::toggleGreenSquare(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_toggleGreenSquare_mA2F16CF3402F9E407E95D0AE65214D7B748B66D6 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, double ___0_distanceFromTarget, const RuntimeMethod* method) ;
// System.Double Helper::getBearing(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Helper_getBearing_m6283597EDDF421069571C6DE0398A70FFB4C520D (double ___0_lat1, double ___1_long1, double ___2_lat2, double ___3_long2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Handheld::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1 (double ___0_value, int32_t ___1_digits, int32_t ___2_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
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
// GPS GPS::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GPS Instance { get; set; } // Enable access everywhere in the app
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_0 = ((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GPS::set_Instance(GPS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_set_Instance_m9EFFCCBB4E801683289241F15D9B75C4D264EC0A (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GPS Instance { get; set; } // Enable access everywhere in the app
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_0 = ___0_value;
		((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void GPS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_Start_m1A862A601DE8567A4784509DA15584ED5A0101F9 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		GPS_set_Instance_m9EFFCCBB4E801683289241F15D9B75C4D264EC0A_inline(__this, NULL);
		// random = new System.Random(Helper.getElapsedSecondsFromUnixEpoch());
		int32_t L_0;
		L_0 = Helper_getElapsedSecondsFromUnixEpoch_m0EBAD1A27A9D87F6AE1C68D9397ABFE7FE834D8C(NULL);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_1, L_0, NULL);
		__this->___random_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_14), (void*)L_1);
		// randomBearing = random.Next(Helper.NB_DEGREES_IN_CIRCLE + 1);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = __this->___random_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_2, ((int32_t)361));
		__this->___randomBearing_13 = ((double)L_3);
		// Input.gyro.enabled = true;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_4;
		L_4 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_4);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GPS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_Update_mBE59FCFF4CC1929C672A8A56D5D78890FC268917 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// StartCoroutine(getGPSCoordinates());
		RuntimeObject* L_0;
		L_0 = GPS_getGPSCoordinates_mA7AF050503FE06586138243C6BD8353760E07E11(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (!areCoordinatesEmpty && !areRandomCoordinatesSet) {
		bool L_2 = __this->___areCoordinatesEmpty_11;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		bool L_3 = __this->___areRandomCoordinatesSet_12;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// randomCoordinates = Helper.getNewGPSCoordinate(currentCoordinates.Item1, currentCoordinates.Item2, randomBearing, NewCoordinatesDistance);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_5 = __this->___currentCoordinates_8;
		NullCheck(L_5);
		double L_6;
		L_6 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_5, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_7 = __this->___currentCoordinates_8;
		NullCheck(L_7);
		double L_8;
		L_8 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_7, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		double L_9 = __this->___randomBearing_13;
		double L_10 = __this->___NewCoordinatesDistance_6;
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_11;
		L_11 = Helper_getNewGPSCoordinate_m77327B95A023F034A47BFBC654D96ABC6308F85C(L_6, L_8, L_9, L_10, NULL);
		__this->___randomCoordinates_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomCoordinates_7), (void*)L_11);
		// areRandomCoordinatesSet = true;
		__this->___areRandomCoordinatesSet_12 = (bool)1;
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void GPS::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_OnDestroy_mD6CA27972773AADDB4DFEC52E1FEFDB46E0BCCD9 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	{
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_0;
		L_0 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_0);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_0, NULL);
		// Input.compass.enabled = false;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_1;
		L_1 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_1);
		Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9(L_1, (bool)0, NULL);
		// Input.gyro.enabled = false;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2;
		L_2 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_2);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GPS::getGPSCoordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GPS_getGPSCoordinates_mA7AF050503FE06586138243C6BD8353760E07E11 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* L_0 = (U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1*)il2cpp_codegen_object_new(U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CgetGPSCoordinatesU3Ed__17__ctor_m17B61356F2C09872A8F22747A36E0F3416F74905(L_0, 0, NULL);
		U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS__ctor_mD1DE1233CA5BBE1CB8BACA287B8594BF7B010F59 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public double north = 0d;
		__this->___north_10 = (0.0);
		// private bool areCoordinatesEmpty = true;
		__this->___areCoordinatesEmpty_11 = (bool)1;
		// private bool areRandomCoordinatesSet = false;
		__this->___areRandomCoordinatesSet_12 = (bool)0;
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
// System.Void GPS/<getGPSCoordinates>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetGPSCoordinatesU3Ed__17__ctor_m17B61356F2C09872A8F22747A36E0F3416F74905 (U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GPS/<getGPSCoordinates>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetGPSCoordinatesU3Ed__17_System_IDisposable_Dispose_m187F201E9DEABFC677345FAE91775D333EB69991 (U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GPS/<getGPSCoordinates>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetGPSCoordinatesU3Ed__17_MoveNext_mAAA4B8FB31974AE317FBC773922FCCD47259659C (U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CFC0D9BF7DD445A18DB4AA85B23D778C80633A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29863D97935F87245759F48D47366B206A87A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B15_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000e;
	}

IL_000c:
	{
		goto IL_0010;
	}

IL_000e:
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation)) {
		bool L_2;
		L_2 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		// Permission.RequestUserPermission(Permission.CoarseLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteralB29863D97935F87245759F48D47366B206A87A11, NULL);
	}

IL_0041:
	{
		// if (Input.location.isEnabledByUser) {
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_4;
		L_4 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_020d;
		}
	}
	{
		// Input.location.Start(5.0f,1.0f);
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_7;
		L_7 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_7);
		LocationService_Start_m5076FE201E96C086B0F9C2D8677DA69C98099F3D(L_7, (5.0f), (1.0f), NULL);
		// Input.compass.enabled = true;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_8;
		L_8 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_8);
		Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9(L_8, (bool)1, NULL);
		// if (Input.location.status == LocationServiceStatus.Failed) {
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_9;
		L_9 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_9, NULL);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)3))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		// Debug.Log("Unable to determine device location");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB, NULL);
		// yield break;
		return (bool)0;
	}

IL_0093:
	{
		// currentCoordinates = new Tuple<double, double>(Input.location.lastData.latitude, Input.location.lastData.longitude);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_12 = __this->___U3CU3E4__this_2;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_13;
		L_13 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_13);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_14;
		L_14 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_13, NULL);
		V_4 = L_14;
		float L_15;
		L_15 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_4), NULL);
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_16;
		L_16 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_16);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_17;
		L_17 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_16, NULL);
		V_4 = L_17;
		float L_18;
		L_18 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_4), NULL);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_19 = (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D*)il2cpp_codegen_object_new(Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC(L_19, ((double)L_15), ((double)L_18), Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->___currentCoordinates_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___currentCoordinates_8), (void*)L_19);
		// attitude = Input.gyro.attitude.eulerAngles;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_20 = __this->___U3CU3E4__this_2;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_21;
		L_21 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85(L_21, NULL);
		V_5 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_5), NULL);
		NullCheck(L_20);
		L_20->___attitude_9 = L_23;
		// Debug.Log(string.Format("TIME: {0}\tLAT: {1}\tLONG: {2}\tACC: {3}\tGYRO: {4}",
		//     Input.location.lastData.timestamp,
		//     currentCoordinates.Item1,
		//     currentCoordinates.Item2,
		//     Input.location.lastData.horizontalAccuracy,
		//     Input.gyro.attitude));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_26;
		L_26 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_26);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_27;
		L_27 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_26, NULL);
		V_4 = L_27;
		double L_28;
		L_28 = LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F((&V_4), NULL);
		double L_29 = L_28;
		RuntimeObject* L_30 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_30);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_25;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_32 = __this->___U3CU3E4__this_2;
		NullCheck(L_32);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_33 = L_32->___currentCoordinates_8;
		NullCheck(L_33);
		double L_34;
		L_34 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_33, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		double L_35 = L_34;
		RuntimeObject* L_36 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_36);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_31;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_38 = __this->___U3CU3E4__this_2;
		NullCheck(L_38);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_39 = L_38->___currentCoordinates_8;
		NullCheck(L_39);
		double L_40;
		L_40 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_39, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		double L_41 = L_40;
		RuntimeObject* L_42 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_42);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_42);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_37;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_44;
		L_44 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_44);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_45;
		L_45 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_44, NULL);
		V_4 = L_45;
		float L_46;
		L_46 = LocationInfo_get_horizontalAccuracy_m3178154DD5F4F72B8743665F33CCAE5BEC6296F4((&V_4), NULL);
		float L_47 = L_46;
		RuntimeObject* L_48 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_48);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_48);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_43;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_50;
		L_50 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_50);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85(L_50, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = L_51;
		RuntimeObject* L_53 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_53);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_53);
		String_t* L_54;
		L_54 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral6CFC0D9BF7DD445A18DB4AA85B23D778C80633A3, L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_54, NULL);
		// if (isMagneticNorth) {
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_55 = __this->___U3CU3E4__this_2;
		NullCheck(L_55);
		bool L_56 = L_55->___isMagneticNorth_5;
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_01a3;
		}
	}
	{
		// north = Input.compass.magneticHeading;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_58 = __this->___U3CU3E4__this_2;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_59;
		L_59 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_59);
		float L_60;
		L_60 = Compass_get_magneticHeading_m5052F97DD5B914F629B138956D250AE2EFFE1C55(L_59, NULL);
		NullCheck(L_58);
		L_58->___north_10 = ((double)L_60);
		goto IL_01bb;
	}

IL_01a3:
	{
		// north = Input.compass.trueHeading;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_61 = __this->___U3CU3E4__this_2;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_62;
		L_62 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_62);
		float L_63;
		L_63 = Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C(L_62, NULL);
		NullCheck(L_61);
		L_61->___north_10 = ((double)L_63);
	}

IL_01bb:
	{
		// if (currentCoordinates.Item1 != 0d && currentCoordinates.Item2 != 0d) {
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_64 = __this->___U3CU3E4__this_2;
		NullCheck(L_64);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_65 = L_64->___currentCoordinates_8;
		NullCheck(L_65);
		double L_66;
		L_66 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_65, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		if ((((double)L_66) == ((double)(0.0))))
		{
			goto IL_01f6;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_67 = __this->___U3CU3E4__this_2;
		NullCheck(L_67);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_68 = L_67->___currentCoordinates_8;
		NullCheck(L_68);
		double L_69;
		L_69 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_68, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		G_B15_0 = ((((int32_t)((((double)L_69) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01f7;
	}

IL_01f6:
	{
		G_B15_0 = 0;
	}

IL_01f7:
	{
		V_7 = (bool)G_B15_0;
		bool L_70 = V_7;
		if (!L_70)
		{
			goto IL_020b;
		}
	}
	{
		// areCoordinatesEmpty = false;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_71 = __this->___U3CU3E4__this_2;
		NullCheck(L_71);
		L_71->___areCoordinatesEmpty_11 = (bool)0;
	}

IL_020b:
	{
	}

IL_020d:
	{
		// }
		return (bool)0;
	}
}
// System.Object GPS/<getGPSCoordinates>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CgetGPSCoordinatesU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8CD621290856B081B9004528C3D8FC165DB203C6 (U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GPS/<getGPSCoordinates>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetGPSCoordinatesU3Ed__17_System_Collections_IEnumerator_Reset_mE7A7EBC2CEF2028A2E3D77912622D5B96745D4BE (U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetGPSCoordinatesU3Ed__17_System_Collections_IEnumerator_Reset_mE7A7EBC2CEF2028A2E3D77912622D5B96745D4BE_RuntimeMethod_var)));
	}
}
// System.Object GPS/<getGPSCoordinates>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CgetGPSCoordinatesU3Ed__17_System_Collections_IEnumerator_get_Current_mB3A734F19EDB4ECA4D4943B08EA3A2A4E6820030 (U3CgetGPSCoordinatesU3Ed__17_t03E25DFA29A81746CFF6C9202C9601A66E5FF9E1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Double Helper::degreesToRadians(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B (double ___0_valueInDegrees, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// return valueInDegrees * (Math.PI) / 180;
		double L_0 = ___0_valueInDegrees;
		V_0 = ((double)(((double)il2cpp_codegen_multiply(L_0, (3.1415926535897931)))/(180.0)));
		goto IL_0019;
	}

IL_0019:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Double Helper::radiansToDegrees(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Helper_radiansToDegrees_m0B1D570588853C6720035C4D75D90EC19CE1DB0C (double ___0_valueInRadians, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// return valueInRadians * 180 / Math.PI;
		double L_0 = ___0_valueInRadians;
		V_0 = ((double)(((double)il2cpp_codegen_multiply(L_0, (180.0)))/(3.1415926535897931)));
		goto IL_0019;
	}

IL_0019:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Tuple`2<System.Double,System.Double> Helper::getNewGPSCoordinate(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* Helper_getNewGPSCoordinate_m77327B95A023F034A47BFBC654D96ABC6308F85C (double ___0_lat1, double ___1_long1, double ___2_bearing, double ___3_distance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* V_2 = NULL;
	{
		// bearing = degreesToRadians(bearing);
		double L_0 = ___2_bearing;
		double L_1;
		L_1 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_0, NULL);
		___2_bearing = L_1;
		// lat1 = degreesToRadians(lat1);
		double L_2 = ___0_lat1;
		double L_3;
		L_3 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_2, NULL);
		___0_lat1 = L_3;
		// long1 = degreesToRadians(long1);
		double L_4 = ___1_long1;
		double L_5;
		L_5 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_4, NULL);
		___1_long1 = L_5;
		// double lat2 = Math.Asin(Math.Sin(lat1) * Math.Cos(distance / EARTH_RADIUS) + Math.Cos(lat1) * Math.Sin(distance / EARTH_RADIUS) * Math.Cos(bearing));
		double L_6 = ___0_lat1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = sin(L_6);
		double L_8 = ___3_distance;
		double L_9;
		L_9 = cos(((double)(L_8/(6371000.0))));
		double L_10 = ___0_lat1;
		double L_11;
		L_11 = cos(L_10);
		double L_12 = ___3_distance;
		double L_13;
		L_13 = sin(((double)(L_12/(6371000.0))));
		double L_14 = ___2_bearing;
		double L_15;
		L_15 = cos(L_14);
		double L_16;
		L_16 = asin(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_7, L_9)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_11, L_13)), L_15)))));
		V_0 = L_16;
		// double long2 = long1 + Math.Atan2(Math.Sin(bearing) * Math.Sin(distance / EARTH_RADIUS) * Math.Cos(lat1), Math.Cos(distance / EARTH_RADIUS) - Math.Sin(lat1) * Math.Sin(lat2));
		double L_17 = ___1_long1;
		double L_18 = ___2_bearing;
		double L_19;
		L_19 = sin(L_18);
		double L_20 = ___3_distance;
		double L_21;
		L_21 = sin(((double)(L_20/(6371000.0))));
		double L_22 = ___0_lat1;
		double L_23;
		L_23 = cos(L_22);
		double L_24 = ___3_distance;
		double L_25;
		L_25 = cos(((double)(L_24/(6371000.0))));
		double L_26 = ___0_lat1;
		double L_27;
		L_27 = sin(L_26);
		double L_28 = V_0;
		double L_29;
		L_29 = sin(L_28);
		double L_30;
		L_30 = atan2(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_19, L_21)), L_23)), ((double)il2cpp_codegen_subtract(L_25, ((double)il2cpp_codegen_multiply(L_27, L_29)))));
		V_1 = ((double)il2cpp_codegen_add(L_17, L_30));
		// return new Tuple<double, double>(radiansToDegrees(lat2), radiansToDegrees(long2));
		double L_31 = V_0;
		double L_32;
		L_32 = Helper_radiansToDegrees_m0B1D570588853C6720035C4D75D90EC19CE1DB0C(L_31, NULL);
		double L_33 = V_1;
		double L_34;
		L_34 = Helper_radiansToDegrees_m0B1D570588853C6720035C4D75D90EC19CE1DB0C(L_33, NULL);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_35 = (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D*)il2cpp_codegen_object_new(Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC(L_35, L_32, L_34, Tuple_2__ctor_mE72034DF96F59667EFAD29C8063FE4B2C134DCCC_RuntimeMethod_var);
		V_2 = L_35;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_36 = V_2;
		return L_36;
	}
}
// System.Double Helper::distanceBetweenTwoGPSCoordinates(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Helper_distanceBetweenTwoGPSCoordinates_m20E9BBD75BC72FEFFF344375A747F061516DD8B7 (double ___0_lat1, double ___1_long1, double ___2_lat2, double ___3_long2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// double deltaLat = degreesToRadians(lat2 - lat1);
		double L_0 = ___2_lat2;
		double L_1 = ___0_lat1;
		double L_2;
		L_2 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(((double)il2cpp_codegen_subtract(L_0, L_1)), NULL);
		V_0 = L_2;
		// double deltaLong = degreesToRadians(long2 - long1);
		double L_3 = ___3_long2;
		double L_4 = ___1_long1;
		double L_5;
		L_5 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(((double)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		V_1 = L_5;
		// double radicand = Math.Pow(Math.Sin(deltaLat / 2), 2) + Math.Cos(degreesToRadians(lat1)) * Math.Cos(degreesToRadians(lat2)) * Math.Pow(Math.Sin(deltaLong / 2), 2);
		double L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = sin(((double)(L_6/(2.0))));
		double L_8;
		L_8 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_7, (2.0), NULL);
		double L_9 = ___0_lat1;
		double L_10;
		L_10 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_9, NULL);
		double L_11;
		L_11 = cos(L_10);
		double L_12 = ___2_lat2;
		double L_13;
		L_13 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_12, NULL);
		double L_14;
		L_14 = cos(L_13);
		double L_15 = V_1;
		double L_16;
		L_16 = sin(((double)(L_15/(2.0))));
		double L_17;
		L_17 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_16, (2.0), NULL);
		V_2 = ((double)il2cpp_codegen_add(L_8, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_11, L_14)), L_17))));
		// double angularDistance = 2 * Math.Atan2(Math.Sqrt(radicand), Math.Sqrt(1 - radicand));
		double L_18 = V_2;
		double L_19;
		L_19 = sqrt(L_18);
		double L_20 = V_2;
		double L_21;
		L_21 = sqrt(((double)il2cpp_codegen_subtract((1.0), L_20)));
		double L_22;
		L_22 = atan2(L_19, L_21);
		V_3 = ((double)il2cpp_codegen_multiply((2.0), L_22));
		// double distance = EARTH_RADIUS * angularDistance;
		double L_23 = V_3;
		V_4 = ((double)il2cpp_codegen_multiply((6371000.0), L_23));
		// return distance;
		double L_24 = V_4;
		V_5 = L_24;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		double L_25 = V_5;
		return L_25;
	}
}
// System.Double Helper::getBearing(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Helper_getBearing_m6283597EDDF421069571C6DE0398A70FFB4C520D (double ___0_lat1, double ___1_long1, double ___2_lat2, double ___3_long2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		// lat1 = degreesToRadians(lat1);
		double L_0 = ___0_lat1;
		double L_1;
		L_1 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_0, NULL);
		___0_lat1 = L_1;
		// long1 = degreesToRadians(long1);
		double L_2 = ___1_long1;
		double L_3;
		L_3 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_2, NULL);
		___1_long1 = L_3;
		// lat2 = degreesToRadians(lat2);
		double L_4 = ___2_lat2;
		double L_5;
		L_5 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_4, NULL);
		___2_lat2 = L_5;
		// long2 = degreesToRadians(long2);
		double L_6 = ___3_long2;
		double L_7;
		L_7 = Helper_degreesToRadians_m90682E512BBF866B7CF7AC81B5AD3BD6C28F3B6B(L_6, NULL);
		___3_long2 = L_7;
		// double x = Math.Cos(lat2) * Math.Sin(long2-long1);
		double L_8 = ___2_lat2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = cos(L_8);
		double L_10 = ___3_long2;
		double L_11 = ___1_long1;
		double L_12;
		L_12 = sin(((double)il2cpp_codegen_subtract(L_10, L_11)));
		V_0 = ((double)il2cpp_codegen_multiply(L_9, L_12));
		// double y = Math.Cos(lat1) * Math.Sin(lat2) - Math.Sin(lat1) * Math.Cos(lat2) * Math.Cos(long2 - long1);
		double L_13 = ___0_lat1;
		double L_14;
		L_14 = cos(L_13);
		double L_15 = ___2_lat2;
		double L_16;
		L_16 = sin(L_15);
		double L_17 = ___0_lat1;
		double L_18;
		L_18 = sin(L_17);
		double L_19 = ___2_lat2;
		double L_20;
		L_20 = cos(L_19);
		double L_21 = ___3_long2;
		double L_22 = ___1_long1;
		double L_23;
		L_23 = cos(((double)il2cpp_codegen_subtract(L_21, L_22)));
		V_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_14, L_16)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_18, L_20)), L_23))));
		// double bearing = Math.Atan2(x, y);
		double L_24 = V_0;
		double L_25 = V_1;
		double L_26;
		L_26 = atan2(L_24, L_25);
		V_2 = L_26;
		// return radiansToDegrees(bearing);
		double L_27 = V_2;
		double L_28;
		L_28 = Helper_radiansToDegrees_m0B1D570588853C6720035C4D75D90EC19CE1DB0C(L_27, NULL);
		V_3 = L_28;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		double L_29 = V_3;
		return L_29;
	}
}
// System.Int32 Helper::getElapsedSecondsFromUnixEpoch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Helper_getElapsedSecondsFromUnixEpoch_m0EBAD1A27A9D87F6AE1C68D9397ABFE7FE834D8C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// DateTime start = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, NULL);
		// int current = (int)(DateTime.UtcNow - start).TotalSeconds;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_2 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_2), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		// return current;
		int32_t L_4 = V_1;
		V_3 = L_4;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		int32_t L_5 = V_3;
		return L_5;
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
// System.Void UI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Start_m36F3E11677AB5677BD3A76B5865E90CD3609183A (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768115EEF8781D44AA6B86B3FB32E7C28164EB78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0FC6177ACBCFF2A86316A251637860898C09956);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textboxLabels[0].text = "(0,0)";
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_0 = __this->___textboxLabels_7;
		NullCheck(L_0);
		int32_t L_1 = 0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral768115EEF8781D44AA6B86B3FB32E7C28164EB78);
		// textboxLabels[1].text = "0.0";
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_3 = __this->___textboxLabels_7;
		NullCheck(L_3);
		int32_t L_4 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		// textboxLabels[2].text = "(0,0)";
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_6 = __this->___textboxLabels_7;
		NullCheck(L_6);
		int32_t L_7 = 2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteral768115EEF8781D44AA6B86B3FB32E7C28164EB78);
		// textboxLabels[3].text = "0 ?";
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_9 = __this->___textboxLabels_7;
		NullCheck(L_9);
		int32_t L_10 = 3;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, _stringLiteralE0FC6177ACBCFF2A86316A251637860898C09956);
		// }
		return;
	}
}
// System.Void UI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Update_m7F9212980C571870E0700BAB400E09111370F6ED (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// displayTargetLocation();
		UI_displayTargetLocation_m3CD585034947786F9B68DE5B3232B9E3CB7EE297(__this, NULL);
		// displayDistanceFromTarget();
		UI_displayDistanceFromTarget_m55E8E4562910E3C1FA5E6BF2E405AC008D92CA37(__this, NULL);
		// displayCurrentLocation();
		UI_displayCurrentLocation_m4590C00079FBAABFC05667697A1912DA810C1B3F(__this, NULL);
		// rotateArrow();
		UI_rotateArrow_m2E42F991980B65EA55CDDFED91C6F12FA1B3DE94(__this, NULL);
		// displayCurrentDeviceOrientation();
		UI_displayCurrentDeviceOrientation_mEC974F1E8CCD61C31249E3BDE96BBACFDD82738D(__this, NULL);
		// }
		return;
	}
}
// System.Void UI::displayTargetLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_displayTargetLocation_m3CD585034947786F9B68DE5B3232B9E3CB7EE297 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textboxLabels[0].text = string.Format("({0}, {1})",
		//     Math.Round(GPS.Instance.randomCoordinates.Item1, numberOfDecimals),
		//     Math.Round(GPS.Instance.randomCoordinates.Item2, numberOfDecimals));
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_0 = __this->___textboxLabels_7;
		NullCheck(L_0);
		int32_t L_1 = 0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_3;
		L_3 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_3);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_4 = L_3->___randomCoordinates_7;
		NullCheck(L_4);
		double L_5;
		L_5 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_4, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		int32_t L_6 = __this->___numberOfDecimals_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(L_5, L_6, NULL);
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_10;
		L_10 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_10);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_11 = L_10->___randomCoordinates_7;
		NullCheck(L_11);
		double L_12;
		L_12 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_11, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		int32_t L_13 = __this->___numberOfDecimals_6;
		double L_14;
		L_14 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(L_12, L_13, NULL);
		double L_15 = L_14;
		RuntimeObject* L_16 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_9, L_16, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_17);
		// }
		return;
	}
}
// System.Void UI::displayDistanceFromTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_displayDistanceFromTarget_m55E8E4562910E3C1FA5E6BF2E405AC008D92CA37 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9150854E20960D7C4FF22DA43731C86836B37759);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double distanceFromTarget = Helper.distanceBetweenTwoGPSCoordinates(
		//     GPS.Instance.currentCoordinates.Item1, GPS.Instance.currentCoordinates.Item2,
		//     GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_0;
		L_0 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_0);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_1 = L_0->___currentCoordinates_8;
		NullCheck(L_1);
		double L_2;
		L_2 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_1, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_3;
		L_3 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_3);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_4 = L_3->___currentCoordinates_8;
		NullCheck(L_4);
		double L_5;
		L_5 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_4, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_6;
		L_6 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_6);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_7 = L_6->___randomCoordinates_7;
		NullCheck(L_7);
		double L_8;
		L_8 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_7, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_9;
		L_9 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_9);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_10 = L_9->___randomCoordinates_7;
		NullCheck(L_10);
		double L_11;
		L_11 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_10, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		double L_12;
		L_12 = Helper_distanceBetweenTwoGPSCoordinates_m20E9BBD75BC72FEFFF344375A747F061516DD8B7(L_2, L_5, L_8, L_11, NULL);
		V_0 = L_12;
		// textboxLabels[1].text = string.Format("{0} m", Math.Round(distanceFromTarget, DEFAULT_ROUND_VALUE));
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_13 = __this->___textboxLabels_7;
		NullCheck(L_13);
		int32_t L_14 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		double L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(L_16, 2, NULL);
		double L_18 = L_17;
		RuntimeObject* L_19 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9150854E20960D7C4FF22DA43731C86836B37759, L_19, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_20);
		// toggleGreenSquare(distanceFromTarget);
		double L_21 = V_0;
		UI_toggleGreenSquare_mA2F16CF3402F9E407E95D0AE65214D7B748B66D6(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Void UI::displayCurrentLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_displayCurrentLocation_m4590C00079FBAABFC05667697A1912DA810C1B3F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textboxLabels[2].text = string.Format("({0}, {1})",
		//     Math.Round(GPS.Instance.currentCoordinates.Item1, numberOfDecimals),
		//     Math.Round(GPS.Instance.currentCoordinates.Item2, numberOfDecimals));
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_0 = __this->___textboxLabels_7;
		NullCheck(L_0);
		int32_t L_1 = 2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_3;
		L_3 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_3);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_4 = L_3->___currentCoordinates_8;
		NullCheck(L_4);
		double L_5;
		L_5 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_4, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		int32_t L_6 = __this->___numberOfDecimals_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(L_5, L_6, NULL);
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_10;
		L_10 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_10);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_11 = L_10->___currentCoordinates_8;
		NullCheck(L_11);
		double L_12;
		L_12 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_11, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		int32_t L_13 = __this->___numberOfDecimals_6;
		double L_14;
		L_14 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(L_12, L_13, NULL);
		double L_15 = L_14;
		RuntimeObject* L_16 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_9, L_16, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_17);
		// }
		return;
	}
}
// System.Void UI::rotateArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_rotateArrow_m2E42F991980B65EA55CDDFED91C6F12FA1B3DE94 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double bearing = Helper.getBearing(
		//     GPS.Instance.currentCoordinates.Item1, GPS.Instance.currentCoordinates.Item2,
		//     GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_0;
		L_0 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_0);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_1 = L_0->___currentCoordinates_8;
		NullCheck(L_1);
		double L_2;
		L_2 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_1, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_3;
		L_3 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_3);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_4 = L_3->___currentCoordinates_8;
		NullCheck(L_4);
		double L_5;
		L_5 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_4, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_6;
		L_6 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_6);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_7 = L_6->___randomCoordinates_7;
		NullCheck(L_7);
		double L_8;
		L_8 = Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_inline(L_7, Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_RuntimeMethod_var);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_9;
		L_9 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_9);
		Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* L_10 = L_9->___randomCoordinates_7;
		NullCheck(L_10);
		double L_11;
		L_11 = Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_inline(L_10, Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_RuntimeMethod_var);
		double L_12;
		L_12 = Helper_getBearing_m6283597EDDF421069571C6DE0398A70FFB4C520D(L_2, L_5, L_8, L_11, NULL);
		V_0 = L_12;
		// arrow.transform.rotation = Quaternion.Euler(0, 0, (float)(GPS.Instance.north - bearing)); // Inverted bearing to match Unity Z-axis
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_13 = __this->___arrow_9;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_15;
		L_15 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_15);
		double L_16 = L_15->___north_10;
		double L_17 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)((double)il2cpp_codegen_subtract(L_16, L_17))), NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void UI::displayCurrentDeviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_displayCurrentDeviceOrientation_mEC974F1E8CCD61C31249E3BDE96BBACFDD82738D (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9028F395EF04A6E84C0F9BCB37129B76235030A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textboxLabels[3].text = string.Format("{0} ?", Math.Round(GPS.Instance.attitude.z, DEFAULT_ROUND_VALUE));
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_0 = __this->___textboxLabels_7;
		NullCheck(L_0);
		int32_t L_1 = 3;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_3;
		L_3 = GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline(NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_3->___attitude_9);
		float L_5 = L_4->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(((double)L_5), 2, NULL);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9028F395EF04A6E84C0F9BCB37129B76235030A6, L_8, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_9);
		// }
		return;
	}
}
// System.Void UI::toggleGreenSquare(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_toggleGreenSquare_mA2F16CF3402F9E407E95D0AE65214D7B748B66D6 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, double ___0_distanceFromTarget, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (distanceFromTarget <= distanceThreshold) {
		double L_0 = ___0_distanceFromTarget;
		float L_1 = __this->___distanceThreshold_5;
		V_0 = (bool)((((int32_t)((!(((double)L_0) <= ((double)((double)L_1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// greenSquare.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___greenSquare_8;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
		// Handheld.Vibrate();
		Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9(NULL);
		goto IL_0038;
	}

IL_0029:
	{
		// greenSquare.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___greenSquare_8;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void UI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI__ctor_m177FCA8E7C6A148BFF6FED9F758B3396F25FDFBB (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPS_set_Instance_m9EFFCCBB4E801683289241F15D9B75C4D264EC0A_inline (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GPS Instance { get; set; } // Enable access everywhere in the app
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_0 = ___0_value;
		((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* GPS_get_Instance_m1D5707610052E85B0B999E9BC31376A0250D72AC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GPS Instance { get; set; } // Enable access everywhere in the app
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_0 = ((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___0_value, int32_t ___1_digits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_value;
		int32_t L_1 = ___1_digits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Tuple_2_get_Item1_mA3F20536609B42C75DCD46C022C9110F1DE06786_gshared_inline (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Tuple_2_get_Item2_m011BEB46A13E7D5A346ECD55D517B7183783FA5D_gshared_inline (Tuple_2_t9FCCF6CB24B47E13BAC2522D881ED30140609C9D* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
