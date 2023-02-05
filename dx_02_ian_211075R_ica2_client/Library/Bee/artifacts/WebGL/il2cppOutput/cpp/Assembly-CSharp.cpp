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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<OneScore>
struct List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
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
// OneScore[]
struct OneScoreU5BU5D_tFB603D27F18B7DF53D6CFF6F3A3991CBD10637D6;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// FPSCounter
struct FPSCounter_t43778C9F199A3BDC56F47834FC9838D1235DBC66;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// OneScore
struct OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerStats
struct PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RegLoginController
struct RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Rotator
struct Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreList
struct ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
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
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// GlobalStuffs/<ClearScores>d__13
struct U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51;
// GlobalStuffs/<DeleteCurrentUser>d__16
struct U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434;
// GlobalStuffs/<DoSendScore>d__11
struct U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A;
// GlobalStuffs/<GetScoreBoard>d__12
struct U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5;
// GlobalStuffs/<UpdatePlayerStats>d__15
struct U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// RegLoginController/<DoLogin>d__10
struct U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8;
// RegLoginController/<DoRegister>d__12
struct U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF;
// RegLoginController/<GetPlayerStats>d__13
struct U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral078722E798B90E2D32C7BFB96D4CE989F651EF07;
IL2CPP_EXTERN_C String_t* _stringLiteral09F2DE4E1891E71F09BB9E723565C59D93D7524B;
IL2CPP_EXTERN_C String_t* _stringLiteral13171E4D786BBF522DB1B7C17EDEBEF25FA7EAC5;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1F109272501675FCFF4CC363FBC5002FB428AEC6;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral25FFD04BC3D3A7CFA9DFFD7459E885CAB3169157;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28132506D3F108EFE7098223BEA56F77430E81F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE31CA18AF0A982CF5035307B7C40E98252EB04;
IL2CPP_EXTERN_C String_t* _stringLiteral2F5099951527E7FDB2F98A2DC0DC5F670E5C574A;
IL2CPP_EXTERN_C String_t* _stringLiteral30A565D36BCCDF8507A7F398CBEA7F67162E1297;
IL2CPP_EXTERN_C String_t* _stringLiteral3319F87D7FEA7C9576E578CF41C4A1518FB2B02F;
IL2CPP_EXTERN_C String_t* _stringLiteral401F3CFD68125B7597FF7AB22654E53E659E1257;
IL2CPP_EXTERN_C String_t* _stringLiteral4738BFD5A51C96582725E850915F0FA5A41F3883;
IL2CPP_EXTERN_C String_t* _stringLiteral5C8E55BDE815654FFE5467D830DE4B2A8289BF5B;
IL2CPP_EXTERN_C String_t* _stringLiteral5CB3AC948D4F5C1160F8D4C3BCDE16320AB3CB1B;
IL2CPP_EXTERN_C String_t* _stringLiteral65DD75581587DC6FB0B27A71B81D736F9133741C;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB1793A14B7380AA66571CC7675F9D6EB41501F;
IL2CPP_EXTERN_C String_t* _stringLiteral7531D28E2EA1A3A4E842923B19E02CE0AF65F7EA;
IL2CPP_EXTERN_C String_t* _stringLiteral7A29996EC4F271B1E6EC41C6FCA372FE6442E349;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD5BEC78B9E4474B859F495F1B835D88D435DAB;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1628D810FE955F074A2919E378F959D66A6CA3;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8A75DDF29D27793AC3B699B44D201C4D56585C3C;
IL2CPP_EXTERN_C String_t* _stringLiteral95231CF314F5FAFFBAAD8F0FE4FFB9683BF5202B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B8DB078DA43B99AF2531D54D6EE712BE90923C;
IL2CPP_EXTERN_C String_t* _stringLiteralA8192398D581F80B00E89782488F5FE565A1F8C8;
IL2CPP_EXTERN_C String_t* _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764;
IL2CPP_EXTERN_C String_t* _stringLiteralAA381A805B7EF3629E3047AFA3057CE1113FCD48;
IL2CPP_EXTERN_C String_t* _stringLiteralB606DCCE7BE76FE7FD008648FDA360737426EF6D;
IL2CPP_EXTERN_C String_t* _stringLiteralB8C2799FFD73D88C8D959F5EFDC3CF13EAAEAC1D;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralC787A5F8664B13CF31D853E9C60A4539E1C364F7;
IL2CPP_EXTERN_C String_t* _stringLiteralCACAA6EFF73DD6413DCCC80D1E8AB2EB4676B2EF;
IL2CPP_EXTERN_C String_t* _stringLiteralCB1B9BD8763EFAC4F4DDE30DECBB2B1DF61325A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD1AD9B0327AA536DEB57A65FC16FBEE84BF80FAB;
IL2CPP_EXTERN_C String_t* _stringLiteralD24214F0A88A8FBE716546BDAA4B3390A486E629;
IL2CPP_EXTERN_C String_t* _stringLiteralD5FC9EBE60408032D3C378D426CA0D03D28C1912;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB41D02FAEC024FEA204D29ED11CEF86220D2386;
IL2CPP_EXTERN_C String_t* _stringLiteralE26897AFBE8CE6B9A5CD4B53997A6F8AF9B9B1FF;
IL2CPP_EXTERN_C String_t* _stringLiteralE27F31821C3D549C27ECCCC1928221B8D933E5BF;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735;
IL2CPP_EXTERN_C String_t* _stringLiteralE99A6E038C198D7C702AC06EADF801F2D2CCCD93;
IL2CPP_EXTERN_C String_t* _stringLiteralED83D34413F6CE43C735171330348E73CB8A7D2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF1B315867282E7B426062C2DB8085A8BC0EC0F2B;
IL2CPP_EXTERN_C String_t* _stringLiteralF4FD5FF0B340ECFC6856D5B527074A255F320178;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mAB2526D812E32EBC6CA8B8D116EFF17057871742_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC_m489C0BD68CFA5A26B8F4FC4DD6C836CE060F20B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m56AA524D221E460752331B7E1940A978DDEDD0EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4152A5A1BED08D6F208121417A8165CC00494412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAD01E26B13BB38A817FF511BBC86AEBA03BD8B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearScoresU3Ed__13_System_Collections_IEnumerator_Reset_m18EEB1BCB0BC4AF56A1534754869842ED3D0D313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeleteCurrentUserU3Ed__16_System_Collections_IEnumerator_Reset_m7EAE3A45EA2170E720095831634206ABEF900923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoLoginU3Ed__10_System_Collections_IEnumerator_Reset_mA046352EFD5BD82B3C8E58D0D7200F978BE0135B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoRegisterU3Ed__12_System_Collections_IEnumerator_Reset_m5C1F129183E206483CBFF18B769E689EFA809913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoSendScoreU3Ed__11_System_Collections_IEnumerator_Reset_m4B2260306B272A266E3C75B77CC128A1C1A2CFF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetPlayerStatsU3Ed__13_System_Collections_IEnumerator_Reset_m02D42239631BE128CEED17FCE8F44BC8FADDA67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetScoreBoardU3Ed__12_System_Collections_IEnumerator_Reset_m7C594E46F8C7EC24A250D103563D8DD693B07F4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdatePlayerStatsU3Ed__15_System_Collections_IEnumerator_Reset_m49FEE00FEA8C98C2FC9D49BDE527EB469FD5FDB6_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

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

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<OneScore>
struct List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OneScoreU5BU5D_tFB603D27F18B7DF53D6CFF6F3A3991CBD10637D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OneScoreU5BU5D_tFB603D27F18B7DF53D6CFF6F3A3991CBD10637D6* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// GlobalStuffs
struct GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3  : public RuntimeObject
{
};

struct GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields
{
	// System.String GlobalStuffs::username
	String_t* ___username_0;
	// System.Int32 GlobalStuffs::xp
	int32_t ___xp_1;
	// System.Int32 GlobalStuffs::cash
	int32_t ___cash_2;
	// System.Int32 GlobalStuffs::level
	int32_t ___level_3;
	// System.Int32 GlobalStuffs::timesPlayed
	int32_t ___timesPlayed_4;
	// System.String GlobalStuffs::baseURL
	String_t* ___baseURL_5;
	// System.String GlobalStuffs::addscorebackendURL
	String_t* ___addscorebackendURL_6;
	// System.String GlobalStuffs::ReadSBJSONURL
	String_t* ___ReadSBJSONURL_7;
	// System.String GlobalStuffs::DeleteAllScoreURL
	String_t* ___DeleteAllScoreURL_8;
	// System.String GlobalStuffs::UpdatePlayerStatsURL
	String_t* ___UpdatePlayerStatsURL_9;
	// System.String GlobalStuffs::DeleteUserURL
	String_t* ___DeleteUserURL_10;
};

// OneScore
struct OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4  : public RuntimeObject
{
	// System.String OneScore::username
	String_t* ___username_0;
	// System.Int32 OneScore::score
	int32_t ___score_1;
	// System.String OneScore::recordDate
	String_t* ___recordDate_2;
};

// PlayerStats
struct PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8  : public RuntimeObject
{
	// System.String PlayerStats::username
	String_t* ___username_0;
	// System.Int32 PlayerStats::xp
	int32_t ___xp_1;
	// System.Int32 PlayerStats::level
	int32_t ___level_2;
	// System.Int32 PlayerStats::cash
	int32_t ___cash_3;
	// System.Int32 PlayerStats::timesPlayed
	int32_t ___timesPlayed_4;
};

// ScoreList
struct ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC  : public RuntimeObject
{
	// System.Collections.Generic.List`1<OneScore> ScoreList::scores
	List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84* ___scores_0;
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

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
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

// GlobalStuffs/<ClearScores>d__13
struct U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51  : public RuntimeObject
{
	// System.Int32 GlobalStuffs/<ClearScores>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GlobalStuffs/<ClearScores>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest GlobalStuffs/<ClearScores>d__13::<webreq>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebreqU3E5__2_2;
};

// GlobalStuffs/<DeleteCurrentUser>d__16
struct U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434  : public RuntimeObject
{
	// System.Int32 GlobalStuffs/<DeleteCurrentUser>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GlobalStuffs/<DeleteCurrentUser>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest GlobalStuffs/<DeleteCurrentUser>d__16::<webreq>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebreqU3E5__2_2;
};

// GlobalStuffs/<DoSendScore>d__11
struct U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A  : public RuntimeObject
{
	// System.Int32 GlobalStuffs/<DoSendScore>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GlobalStuffs/<DoSendScore>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String GlobalStuffs/<DoSendScore>d__11::pname
	String_t* ___pname_2;
	// System.Int32 GlobalStuffs/<DoSendScore>d__11::score
	int32_t ___score_3;
	// UnityEngine.Networking.UnityWebRequest GlobalStuffs/<DoSendScore>d__11::<webreq>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebreqU3E5__2_4;
};

// GlobalStuffs/<GetScoreBoard>d__12
struct U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5  : public RuntimeObject
{
	// System.Int32 GlobalStuffs/<GetScoreBoard>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GlobalStuffs/<GetScoreBoard>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Text GlobalStuffs/<GetScoreBoard>d__12::txtSB
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtSB_2;
	// UnityEngine.Networking.UnityWebRequest GlobalStuffs/<GetScoreBoard>d__12::<webRequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__2_3;
};

// GlobalStuffs/<UpdatePlayerStats>d__15
struct U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8  : public RuntimeObject
{
	// System.Int32 GlobalStuffs/<UpdatePlayerStats>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GlobalStuffs/<UpdatePlayerStats>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest GlobalStuffs/<UpdatePlayerStats>d__15::<webreq>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebreqU3E5__2_2;
};

// RegLoginController/<DoLogin>d__10
struct U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8  : public RuntimeObject
{
	// System.Int32 RegLoginController/<DoLogin>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RegLoginController/<DoLogin>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RegLoginController RegLoginController/<DoLogin>d__10::<>4__this
	RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest RegLoginController/<DoLogin>d__10::<webreq>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebreqU3E5__2_3;
};

// RegLoginController/<DoRegister>d__12
struct U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF  : public RuntimeObject
{
	// System.Int32 RegLoginController/<DoRegister>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RegLoginController/<DoRegister>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RegLoginController RegLoginController/<DoRegister>d__12::<>4__this
	RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest RegLoginController/<DoRegister>d__12::<webreq>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebreqU3E5__2_3;
};

// RegLoginController/<GetPlayerStats>d__13
struct U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86  : public RuntimeObject
{
	// System.Int32 RegLoginController/<GetPlayerStats>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RegLoginController/<GetPlayerStats>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String RegLoginController/<GetPlayerStats>d__13::playername
	String_t* ___playername_2;
	// RegLoginController RegLoginController/<GetPlayerStats>d__13::<>4__this
	RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest RegLoginController/<GetPlayerStats>d__13::<webRequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__2_4;
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

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
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

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
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

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraController::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
};

// FPSCounter
struct FPSCounter_t43778C9F199A3BDC56F47834FC9838D1235DBC66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FPSCounter::updateInterval
	float ___updateInterval_4;
	// System.Single FPSCounter::accum
	float ___accum_5;
	// System.Int32 FPSCounter::frames
	int32_t ___frames_6;
	// System.Single FPSCounter::timeleft
	float ___timeleft_7;
	// System.Single FPSCounter::fps
	float ___fps_8;
	// UnityEngine.GUIStyle FPSCounter::textStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___textStyle_9;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::speed
	float ___speed_4;
	// UnityEngine.UI.Text PlayerController::countText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___countText_5;
	// UnityEngine.UI.Text PlayerController::winText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___winText_6;
	// UnityEngine.UI.Text PlayerController::timerText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___timerText_7;
	// TMPro.TextMeshProUGUI PlayerController::TMPUGUI_playerStats
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TMPUGUI_playerStats_8;
	// System.Single PlayerController::countDownTimer
	float ___countDownTimer_9;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_10;
	// System.Int32 PlayerController::count
	int32_t ___count_11;
	// System.Boolean PlayerController::isRunning
	bool ___isRunning_12;
	// UnityEngine.GameObject PlayerController::winPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPanel_13;
	// UnityEngine.UI.InputField PlayerController::pname
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___pname_14;
	// UnityEngine.UI.Text PlayerController::txtsb
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtsb_15;
	// UnityEngine.AudioSource PlayerController::audsrc
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audsrc_16;
	// TMPro.TextMeshProUGUI PlayerController::TMPUGUI_LastScore
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TMPUGUI_LastScore_17;
};

// RegLoginController
struct RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String RegLoginController::URLLoginBackend
	String_t* ___URLLoginBackend_4;
	// System.String RegLoginController::URLRegBackend
	String_t* ___URLRegBackend_5;
	// System.String RegLoginController::URLReadPlayerStats
	String_t* ___URLReadPlayerStats_6;
	// TMPro.TextMeshProUGUI RegLoginController::displayTxt
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___displayTxt_7;
	// TMPro.TMP_InputField RegLoginController::if_regusername
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___if_regusername_8;
	// TMPro.TMP_InputField RegLoginController::if_regpassword
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___if_regpassword_9;
	// TMPro.TMP_InputField RegLoginController::if_regemail
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___if_regemail_10;
	// TMPro.TMP_InputField RegLoginController::if_loginusername
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___if_loginusername_11;
	// TMPro.TMP_InputField RegLoginController::if_loginpassword
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___if_loginpassword_12;
};

// Rotator
struct Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
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

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<DoSendScore>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSendScoreU3Ed__11__ctor_mBD9BD3D1F7F68CDE576868051EA6D57D3D2AE04D (U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<GetScoreBoard>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScoreBoardU3Ed__12__ctor_m96D9D900C5BCE3DCBADBA85A261816FB9B9EE0C8 (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<ClearScores>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearScoresU3Ed__13__ctor_m5DE13E3A7D2C711BD44C97E1DC7927F3D8CFF298 (U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<ScoreList>(System.String)
inline ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC* JsonUtility_FromJson_TisScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC_m489C0BD68CFA5A26B8F4FC4DD6C836CE060F20B3 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// T System.Collections.Generic.List`1<OneScore>::get_Item(System.Int32)
inline OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4* List_1_get_Item_mAD01E26B13BB38A817FF511BBC86AEBA03BD8B52 (List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4* (*) (List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<OneScore>::get_Count()
inline int32_t List_1_get_Count_m4152A5A1BED08D6F208121417A8165CC00494412_inline (List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void GlobalStuffs/<UpdatePlayerStats>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayerStatsU3Ed__15__ctor_m3F0359394D6B6138419DE14C6FE22FF0104C5CAB (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<DeleteCurrentUser>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteCurrentUserU3Ed__16__ctor_m582C7A1735E8AC43DCDD5BEBE1ECAB3AED6A1134 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m94A5B3ACC392D98CB1993E0A36CC8201AE36D423 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, int32_t ___i1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373 (String_t* ___uri0, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___formData1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<GetScoreBoard>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScoreBoardU3Ed__12_U3CU3Em__Finally1_m57A02131CD7A48A51258CFB68A106ED9EAEA105A (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<GetScoreBoard>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScoreBoardU3Ed__12_System_IDisposable_Dispose_mB340A235CC7AEAFA5B102871F1CBB5980717F7C4 (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String GlobalStuffs::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GlobalStuffs_Deserialize_mD05F134872DB2C717521133174AE427FB6950F19 (String_t* ___RawJSON0, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<UpdatePlayerStats>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayerStatsU3Ed__15_U3CU3Em__Finally1_m55705ADA2412548A9A76FF20B4C822F180D11B37 (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<UpdatePlayerStats>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayerStatsU3Ed__15_System_IDisposable_Dispose_mED8BABC6DB699F6314186A6CF3533EC9E1F66165 (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<DeleteCurrentUser>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteCurrentUserU3Ed__16_U3CU3Em__Finally1_m06A4703E55BCF3AC85DF1FEC0D79D39820355B12 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, const RuntimeMethod* method) ;
// System.Void GlobalStuffs/<DeleteCurrentUser>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteCurrentUserU3Ed__16_System_IDisposable_Dispose_mEFF3D3C6641AE91BBDB23B5265699126C056E809 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<OneScore>::.ctor()
inline void List_1__ctor_m56AA524D221E460752331B7E1940A978DDEDD0EF (List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerController::SetCountText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetCountText_m6A9F5CF284E511EBFE348D2500F866BAB8CE2C24 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GlobalStuffs::GetScoreBoard(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_GetScoreBoard_mA756979549B858E5059E10686EA51E51D657A9DF (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtSB0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void PlayerController::RefreshPlayerStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_RefreshPlayerStats_m4EABE95B79B9DD2CA978BA46A83153B5A816B7AF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Void PlayerController::SetTimerText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetTimerText_mBBB56415F2EC2C7503081AAAAC0590C013FDAFEE (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GameOver_mD882D9359CF176F373469C979D9ED9C300723315 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GlobalStuffs::UpdatePlayerStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_UpdatePlayerStats_m21C1D62E3FBE24701C05FF9160B0AC75C5A96FF7 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator GlobalStuffs::DoSendScore(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_DoSendScore_m01399F6CFCCB4129705E14A75B094A3F0FF4EEDF (String_t* ___pname0, int32_t ___score1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GlobalStuffs::DeleteCurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_DeleteCurrentUser_m37DBA11BF5F44B174B535CEAAC55E7F1A4653CC3 (const RuntimeMethod* method) ;
// System.Void PlayerController::BacktoMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_BacktoMain_mE6A9AABA6D8CC798522B03CFB3EFA3D4B3A8B580 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GlobalStuffs::ClearScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_ClearScores_mD6F2C6B0DB1172118586BD46EE016A779512F357 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<PlayerStats>(System.String)
inline PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* JsonUtility_FromJson_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mAB2526D812E32EBC6CA8B8D116EFF17057871742 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.Collections.IEnumerator RegLoginController::DoLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegLoginController_DoLogin_m515A99F128D17B3DD1180E246615DBD9820C0B61 (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, const RuntimeMethod* method) ;
// System.Void RegLoginController/<DoLogin>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoLoginU3Ed__10__ctor_m1475229965FDA30D6FC06A806F2F97B98CDDE269 (U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator RegLoginController::DoRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegLoginController_DoRegister_m98A9023A9400B38DA0A1116B6DBD6B5237F85853 (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, const RuntimeMethod* method) ;
// System.Void RegLoginController/<DoRegister>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoRegisterU3Ed__12__ctor_mAA9672BA725D819E23D05DF2D9A7660E3F1EBBC6 (U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void RegLoginController/<GetPlayerStats>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPlayerStatsU3Ed__13__ctor_mAF7C88BA15151F86E3CBDF3A2FDC846F299C32AE (U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator RegLoginController::GetPlayerStats(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegLoginController_GetPlayerStats_m4A1C10078620CA9D4E1959681D8EB3849191183C (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, String_t* ___playername0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// PlayerStats PlayerStats::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* PlayerStats_CreateFromJSON_mA5F5A102CD833762B89ADDA34D31B17BE4518416 (String_t* ___jsonString0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_m8EAAC188934ECCBD009EC00751280DCFF4D96C71 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// offset = transform.position - player.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_4, NULL);
		__this->___offset_5 = L_5;
		// }
		return;
	}
}
// System.Void CameraController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_LateUpdate_mC14DB0924E6F67288113AA92B3345A9B0ACEA27F (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = player.transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
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
// System.Void FPSCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Start_mEF817D65C26431FDB05F83485BD95F79B7127D7F (FPSCounter_t43778C9F199A3BDC56F47834FC9838D1235DBC66* __this, const RuntimeMethod* method) 
{
	{
		// timeleft = updateInterval;
		float L_0 = __this->___updateInterval_4;
		__this->___timeleft_7 = L_0;
		// textStyle.fontStyle = FontStyle.Bold;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = __this->___textStyle_9;
		GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D(L_1, 1, NULL);
		// textStyle.normal.textColor = Color.white;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = __this->___textStyle_9;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3;
		L_3 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void FPSCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Update_m8FD51CDD4FC6103E47194F4D9848A7D325004E30 (FPSCounter_t43778C9F199A3BDC56F47834FC9838D1235DBC66* __this, const RuntimeMethod* method) 
{
	{
		// timeleft -= Time.deltaTime;
		float L_0 = __this->___timeleft_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeleft_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// accum += Time.timeScale / Time.deltaTime;
		float L_2 = __this->___accum_5;
		float L_3;
		L_3 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___accum_5 = ((float)il2cpp_codegen_add(L_2, ((float)(L_3/L_4))));
		// ++frames;
		int32_t L_5 = __this->___frames_6;
		__this->___frames_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if (timeleft <= 0.0)
		float L_6 = __this->___timeleft_7;
		if ((!(((double)((double)L_6)) <= ((double)(0.0)))))
		{
			goto IL_007c;
		}
	}
	{
		// fps = (accum / frames);
		float L_7 = __this->___accum_5;
		int32_t L_8 = __this->___frames_6;
		__this->___fps_8 = ((float)(L_7/((float)L_8)));
		// timeleft = updateInterval;
		float L_9 = __this->___updateInterval_4;
		__this->___timeleft_7 = L_9;
		// accum = 0.0f;
		__this->___accum_5 = (0.0f);
		// frames = 0;
		__this->___frames_6 = 0;
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void FPSCounter::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_OnGUI_mE235C1459C860E75FB2AC0B20F74E82AD63B465E (FPSCounter_t43778C9F199A3BDC56F47834FC9838D1235DBC66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB41D02FAEC024FEA204D29ED11CEF86220D2386);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.Label(new Rect(5, 5, 100, 25), fps.ToString("F2") + " FPS", textStyle);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (5.0f), (5.0f), (100.0f), (25.0f), /*hidden argument*/NULL);
		float* L_1 = (&__this->___fps_8);
		String_t* L_2;
		L_2 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_1, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteralDB41D02FAEC024FEA204D29ED11CEF86220D2386, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___textStyle_9;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_0, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void FPSCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter__ctor_m4814EB8CF15E05040C15D4F6B057357EC68B7268 (FPSCounter_t43778C9F199A3BDC56F47834FC9838D1235DBC66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float updateInterval = 0.5f; //How often should the number update
		__this->___updateInterval_4 = (0.5f);
		// GUIStyle textStyle = new GUIStyle();
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_0, NULL);
		__this->___textStyle_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textStyle_9), (void*)L_0);
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
// System.Collections.IEnumerator GlobalStuffs::DoSendScore(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_DoSendScore_m01399F6CFCCB4129705E14A75B094A3F0FF4EEDF (String_t* ___pname0, int32_t ___score1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* L_0 = (U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A*)il2cpp_codegen_object_new(U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A_il2cpp_TypeInfo_var);
		U3CDoSendScoreU3Ed__11__ctor_mBD9BD3D1F7F68CDE576868051EA6D57D3D2AE04D(L_0, 0, NULL);
		U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* L_1 = L_0;
		String_t* L_2 = ___pname0;
		L_1->___pname_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___pname_2), (void*)L_2);
		U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* L_3 = L_1;
		int32_t L_4 = ___score1;
		L_3->___score_3 = L_4;
		return L_3;
	}
}
// System.Collections.IEnumerator GlobalStuffs::GetScoreBoard(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_GetScoreBoard_mA756979549B858E5059E10686EA51E51D657A9DF (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtSB0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* L_0 = (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5*)il2cpp_codegen_object_new(U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5_il2cpp_TypeInfo_var);
		U3CGetScoreBoardU3Ed__12__ctor_m96D9D900C5BCE3DCBADBA85A261816FB9B9EE0C8(L_0, 0, NULL);
		U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* L_1 = L_0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ___txtSB0;
		L_1->___txtSB_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___txtSB_2), (void*)L_2);
		return L_1;
	}
}
// System.Collections.IEnumerator GlobalStuffs::ClearScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_ClearScores_mD6F2C6B0DB1172118586BD46EE016A779512F357 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51* L_0 = (U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51*)il2cpp_codegen_object_new(U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51_il2cpp_TypeInfo_var);
		U3CClearScoresU3Ed__13__ctor_m5DE13E3A7D2C711BD44C97E1DC7927F3D8CFF298(L_0, 0, NULL);
		return L_0;
	}
}
// System.String GlobalStuffs::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GlobalStuffs_Deserialize_mD05F134872DB2C717521133174AE427FB6950F19 (String_t* ___RawJSON0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC_m489C0BD68CFA5A26B8F4FC4DD6C836CE060F20B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4152A5A1BED08D6F208121417A8165CC00494412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAD01E26B13BB38A817FF511BBC86AEBA03BD8B52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCACAA6EFF73DD6413DCCC80D1E8AB2EB4676B2EF);
		s_Il2CppMethodInitialized = true;
	}
	ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4* V_3 = NULL;
	{
		// ScoreList sb=JsonUtility.FromJson<ScoreList>(RawJSON); //convert raw json to objects
		String_t* L_0 = ___RawJSON0;
		ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC* L_1;
		L_1 = JsonUtility_FromJson_TisScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC_m489C0BD68CFA5A26B8F4FC4DD6C836CE060F20B3(L_0, JsonUtility_FromJson_TisScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC_m489C0BD68CFA5A26B8F4FC4DD6C836CE060F20B3_RuntimeMethod_var);
		V_0 = L_1;
		// string ddata="Leaderboard:\n";
		V_1 = _stringLiteralCACAA6EFF73DD6413DCCC80D1E8AB2EB4676B2EF;
		// for(int a=0;a<sb.scores.Count;a++){
		V_2 = 0;
		goto IL_006a;
	}

IL_0011:
	{
		// OneScore oneScore=sb.scores[a];
		ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC* L_2 = V_0;
		List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84* L_3 = L_2->___scores_0;
		int32_t L_4 = V_2;
		OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4* L_5;
		L_5 = List_1_get_Item_mAD01E26B13BB38A817FF511BBC86AEBA03BD8B52(L_3, L_4, List_1_get_Item_mAD01E26B13BB38A817FF511BBC86AEBA03BD8B52_RuntimeMethod_var);
		V_3 = L_5;
		// ddata+=(oneScore.username+" : "+oneScore.score+ " : " + oneScore.recordDate + "\n");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_1;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4* L_10 = V_3;
		String_t* L_11 = L_10->___username_0;
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_9;
		ArrayElementTypeCheck (L_12, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4* L_14 = V_3;
		int32_t* L_15 = (&L_14->___score_1);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_13;
		ArrayElementTypeCheck (L_17, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4* L_19 = V_3;
		String_t* L_20 = L_19->___recordDate_2;
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		ArrayElementTypeCheck (L_21, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_21, NULL);
		V_1 = L_22;
		// for(int a=0;a<sb.scores.Count;a++){
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006a:
	{
		// for(int a=0;a<sb.scores.Count;a++){
		int32_t L_24 = V_2;
		ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC* L_25 = V_0;
		List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84* L_26 = L_25->___scores_0;
		int32_t L_27;
		L_27 = List_1_get_Count_m4152A5A1BED08D6F208121417A8165CC00494412_inline(L_26, List_1_get_Count_m4152A5A1BED08D6F208121417A8165CC00494412_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_27)))
		{
			goto IL_0011;
		}
	}
	{
		// return ddata;
		String_t* L_28 = V_1;
		return L_28;
	}
}
// System.Collections.IEnumerator GlobalStuffs::UpdatePlayerStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_UpdatePlayerStats_m21C1D62E3FBE24701C05FF9160B0AC75C5A96FF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* L_0 = (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8*)il2cpp_codegen_object_new(U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8_il2cpp_TypeInfo_var);
		U3CUpdatePlayerStatsU3Ed__15__ctor_m3F0359394D6B6138419DE14C6FE22FF0104C5CAB(L_0, 0, NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator GlobalStuffs::DeleteCurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalStuffs_DeleteCurrentUser_m37DBA11BF5F44B174B535CEAAC55E7F1A4653CC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* L_0 = (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434*)il2cpp_codegen_object_new(U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434_il2cpp_TypeInfo_var);
		U3CDeleteCurrentUserU3Ed__16__ctor_m582C7A1735E8AC43DCDD5BEBE1ECAB3AED6A1134(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void GlobalStuffs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalStuffs__cctor_m777B94EAB44469CE92E953EC45ABC2569ED4A1F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD5BEC78B9E4474B859F495F1B835D88D435DAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB606DCCE7BE76FE7FD008648FDA360737426EF6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8C2799FFD73D88C8D959F5EFDC3CF13EAAEAC1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC787A5F8664B13CF31D853E9C60A4539E1C364F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB1B9BD8763EFAC4F4DDE30DECBB2B1DF61325A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD24214F0A88A8FBE716546BDAA4B3390A486E629);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE99A6E038C198D7C702AC06EADF801F2D2CCCD93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string username="GuestPlayer";
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0 = _stringLiteralCB1B9BD8763EFAC4F4DDE30DECBB2B1DF61325A1;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0), (void*)_stringLiteralCB1B9BD8763EFAC4F4DDE30DECBB2B1DF61325A1);
		// public static int xp=0;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1 = 0;
		// public static int cash=0;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___cash_2 = 0;
		// public static int level=1;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___level_3 = 1;
		// public static int timesPlayed=0;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___timesPlayed_4 = 0;
		// public static string baseURL="http://54.157.140.64:8000/"; //rename this to your server path
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5 = _stringLiteralC787A5F8664B13CF31D853E9C60A4539E1C364F7;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5), (void*)_stringLiteralC787A5F8664B13CF31D853E9C60A4539E1C364F7);
		// static string addscorebackendURL=baseURL+"AddScoreBackend.php";
		String_t* L_0 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralE99A6E038C198D7C702AC06EADF801F2D2CCCD93, NULL);
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___addscorebackendURL_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___addscorebackendURL_6), (void*)L_1);
		// static string ReadSBJSONURL=baseURL+"ReadScoreBoardJSON.php";
		String_t* L_2 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral7CD5BEC78B9E4474B859F495F1B835D88D435DAB, NULL);
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___ReadSBJSONURL_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___ReadSBJSONURL_7), (void*)L_3);
		// static string DeleteAllScoreURL=baseURL+"DeleteAllScores.php";
		String_t* L_4 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralB606DCCE7BE76FE7FD008648FDA360737426EF6D, NULL);
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___DeleteAllScoreURL_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___DeleteAllScoreURL_8), (void*)L_5);
		// static string UpdatePlayerStatsURL=baseURL+"UpdatePlayerStatsBackend.php";
		String_t* L_6 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteralB8C2799FFD73D88C8D959F5EFDC3CF13EAAEAC1D, NULL);
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___UpdatePlayerStatsURL_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___UpdatePlayerStatsURL_9), (void*)L_7);
		// static string DeleteUserURL=baseURL+"DeleteUserBackend.php";
		String_t* L_8 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteralD24214F0A88A8FBE716546BDAA4B3390A486E629, NULL);
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___DeleteUserURL_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___DeleteUserURL_10), (void*)L_9);
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
// System.Void GlobalStuffs/<DoSendScore>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSendScoreU3Ed__11__ctor_mBD9BD3D1F7F68CDE576868051EA6D57D3D2AE04D (U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GlobalStuffs/<DoSendScore>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSendScoreU3Ed__11_System_IDisposable_Dispose_m7E855D194805BA2BD41033BE6E7B0448B730D6F0 (U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GlobalStuffs/<DoSendScore>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoSendScoreU3Ed__11_MoveNext_m3B10C39E9CE2A7B3FECD3463C22EF44FEC35F184 (U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F109272501675FCFF4CC363FBC5002FB428AEC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB1793A14B7380AA66571CC7675F9D6EB41501F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWWForm form=new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_3 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_3, NULL);
		V_1 = L_3;
		// form.AddField("sPlayerName",pname);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_4 = V_1;
		String_t* L_5 = __this->___pname_2;
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_4, _stringLiteral1F109272501675FCFF4CC363FBC5002FB428AEC6, L_5, NULL);
		// form.AddField("iScore",score);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_6 = V_1;
		int32_t L_7 = __this->___score_3;
		WWWForm_AddField_m94A5B3ACC392D98CB1993E0A36CC8201AE36D423(L_6, _stringLiteral6DB1793A14B7380AA66571CC7675F9D6EB41501F, L_7, NULL);
		// UnityWebRequest webreq=UnityWebRequest.Post(addscorebackendURL,form);
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		String_t* L_8 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___addscorebackendURL_6;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_9 = V_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10;
		L_10 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_8, L_9, NULL);
		__this->___U3CwebreqU3E5__2_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebreqU3E5__2_4), (void*)L_10);
		// yield return webreq.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CwebreqU3E5__2_4;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_12;
		L_12 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_11, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// switch (webreq.result)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebreqU3E5__2_4;
		int32_t L_14;
		L_14 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_13, NULL);
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0089;
		}
	}
	{
		// Debug.Log("error");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, NULL);
	}

IL_0089:
	{
		// webreq.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwebreqU3E5__2_4;
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GlobalStuffs/<DoSendScore>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoSendScoreU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCC1FB7465EFEE97839BC6E32A91B9E4194680A23 (U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GlobalStuffs/<DoSendScore>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSendScoreU3Ed__11_System_Collections_IEnumerator_Reset_m4B2260306B272A266E3C75B77CC128A1C1A2CFF7 (U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoSendScoreU3Ed__11_System_Collections_IEnumerator_Reset_m4B2260306B272A266E3C75B77CC128A1C1A2CFF7_RuntimeMethod_var)));
	}
}
// System.Object GlobalStuffs/<DoSendScore>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoSendScoreU3Ed__11_System_Collections_IEnumerator_get_Current_m7BA88AA76796B084E3E7F3CB8984F687DC985CA8 (U3CDoSendScoreU3Ed__11_tC069BEA12885F000F9419B9CD864696B588FDF0A* __this, const RuntimeMethod* method) 
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
// System.Void GlobalStuffs/<GetScoreBoard>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScoreBoardU3Ed__12__ctor_m96D9D900C5BCE3DCBADBA85A261816FB9B9EE0C8 (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GlobalStuffs/<GetScoreBoard>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScoreBoardU3Ed__12_System_IDisposable_Dispose_mB340A235CC7AEAFA5B102871F1CBB5980717F7C4 (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetScoreBoardU3Ed__12_U3CU3Em__Finally1_m57A02131CD7A48A51258CFB68A106ED9EAEA105A(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean GlobalStuffs/<GetScoreBoard>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetScoreBoardU3Ed__12_MoveNext_m9D75823B445AA783435F31E763BC147A87D91755 (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral401F3CFD68125B7597FF7AB22654E53E659E1257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00e0:
			{// begin fault (depth: 1)
				U3CGetScoreBoardU3Ed__12_System_IDisposable_Dispose_mB340A235CC7AEAFA5B102871F1CBB5980717F7C4(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0053_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00e7;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest webRequest = UnityWebRequest.Get(ReadSBJSONURL))
				il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
				String_t* L_3 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___ReadSBJSONURL_7;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
				L_4 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_3, NULL);
				__this->___U3CwebRequestU3E5__2_3 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_3), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CwebRequestU3E5__2_3;
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
				L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
				__this->___U3CU3E2__current_1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00e7;
			}

IL_0053_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// switch (webRequest.result)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CwebRequestU3E5__2_3;
				int32_t L_8;
				L_8 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_7, NULL);
				if ((!(((uint32_t)L_8) == ((uint32_t)1))))
				{
					goto IL_00aa_1;
				}
			}
			{
				// Debug.Log("Received: " + webRequest.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwebRequestU3E5__2_3;
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_10;
				L_10 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_9, NULL);
				String_t* L_11;
				L_11 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_10, NULL);
				String_t* L_12;
				L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral401F3CFD68125B7597FF7AB22654E53E659E1257, L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
				// txtSB.text=Deserialize(webRequest.downloadHandler.text); //added
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___txtSB_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CwebRequestU3E5__2_3;
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_15;
				L_15 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_14, NULL);
				String_t* L_16;
				L_16 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
				String_t* L_17;
				L_17 = GlobalStuffs_Deserialize_mD05F134872DB2C717521133174AE427FB6950F19(L_16, NULL);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
				// break;
				goto IL_00c4_1;
			}

IL_00aa_1:
			{
				// Debug.Log("error"+webRequest.error);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___U3CwebRequestU3E5__2_3;
				String_t* L_19;
				L_19 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_18, NULL);
				String_t* L_20;
				L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, L_19, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
			}

IL_00c4_1:
			{
				// webRequest.Dispose();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CwebRequestU3E5__2_3;
				UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_21, NULL);
				// }
				U3CGetScoreBoardU3Ed__12_U3CU3Em__Finally1_m57A02131CD7A48A51258CFB68A106ED9EAEA105A(__this, NULL);
				__this->___U3CwebRequestU3E5__2_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00e7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e7:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// System.Void GlobalStuffs/<GetScoreBoard>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScoreBoardU3Ed__12_U3CU3Em__Finally1_m57A02131CD7A48A51258CFB68A106ED9EAEA105A (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__2_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__2_3;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object GlobalStuffs/<GetScoreBoard>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetScoreBoardU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCDCF77CCC9B4FE60200C724CAA6DF8319D756444 (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GlobalStuffs/<GetScoreBoard>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScoreBoardU3Ed__12_System_Collections_IEnumerator_Reset_m7C594E46F8C7EC24A250D103563D8DD693B07F4C (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetScoreBoardU3Ed__12_System_Collections_IEnumerator_Reset_m7C594E46F8C7EC24A250D103563D8DD693B07F4C_RuntimeMethod_var)));
	}
}
// System.Object GlobalStuffs/<GetScoreBoard>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetScoreBoardU3Ed__12_System_Collections_IEnumerator_get_Current_m484C38800D370FA34853EBB6BB109CEC7863D0F8 (U3CGetScoreBoardU3Ed__12_t85B4C903BEB953B692E0AD60B0302C24D5552FF5* __this, const RuntimeMethod* method) 
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
// System.Void GlobalStuffs/<ClearScores>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearScoresU3Ed__13__ctor_m5DE13E3A7D2C711BD44C97E1DC7927F3D8CFF298 (U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GlobalStuffs/<ClearScores>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearScoresU3Ed__13_System_IDisposable_Dispose_mBE13CBB4695014F66DB243040F8125F3D1B6ACA1 (U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GlobalStuffs/<ClearScores>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearScoresU3Ed__13_MoveNext_m33438B4A59325E5068826AC1018B2E1BB0C70508 (U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7531D28E2EA1A3A4E842923B19E02CE0AF65F7EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UnityWebRequest webreq=UnityWebRequest.Get(DeleteAllScoreURL);
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		String_t* L_3 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___DeleteAllScoreURL_8;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
		L_4 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_3, NULL);
		__this->___U3CwebreqU3E5__2_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebreqU3E5__2_2), (void*)L_4);
		// yield return webreq.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CwebreqU3E5__2_2;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
		L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0041:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// switch (webreq.result)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CwebreqU3E5__2_2;
		int32_t L_8;
		L_8 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		// Debug.Log(":\nReceived: " + webreq.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwebreqU3E5__2_2;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_10;
		L_10 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_9, NULL);
		String_t* L_11;
		L_11 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7531D28E2EA1A3A4E842923B19E02CE0AF65F7EA, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// break;
		goto IL_0081;
	}

IL_0077:
	{
		// Debug.Log("error");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, NULL);
	}

IL_0081:
	{
		// webreq.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebreqU3E5__2_2;
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GlobalStuffs/<ClearScores>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CClearScoresU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDAFC64CA2492A08434C659C049CCCB8CB44C2CE4 (U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GlobalStuffs/<ClearScores>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearScoresU3Ed__13_System_Collections_IEnumerator_Reset_m18EEB1BCB0BC4AF56A1534754869842ED3D0D313 (U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearScoresU3Ed__13_System_Collections_IEnumerator_Reset_m18EEB1BCB0BC4AF56A1534754869842ED3D0D313_RuntimeMethod_var)));
	}
}
// System.Object GlobalStuffs/<ClearScores>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CClearScoresU3Ed__13_System_Collections_IEnumerator_get_Current_m6B5E64B6C23965D2AB1FA537138449DE0DE5C375 (U3CClearScoresU3Ed__13_tF84B3CF8128EC7674A9ADF6A703CFB9C3D9B7C51* __this, const RuntimeMethod* method) 
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
// System.Void GlobalStuffs/<UpdatePlayerStats>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayerStatsU3Ed__15__ctor_m3F0359394D6B6138419DE14C6FE22FF0104C5CAB (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GlobalStuffs/<UpdatePlayerStats>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayerStatsU3Ed__15_System_IDisposable_Dispose_mED8BABC6DB699F6314186A6CF3533EC9E1F66165 (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CUpdatePlayerStatsU3Ed__15_U3CU3Em__Finally1_m55705ADA2412548A9A76FF20B4C822F180D11B37(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean GlobalStuffs/<UpdatePlayerStats>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdatePlayerStatsU3Ed__15_MoveNext_m888770864BF799956F64E6C8BD34146F54CA503D (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral078722E798B90E2D32C7BFB96D4CE989F651EF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4738BFD5A51C96582725E850915F0FA5A41F3883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7531D28E2EA1A3A4E842923B19E02CE0AF65F7EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A29996EC4F271B1E6EC41C6FCA372FE6442E349);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1B315867282E7B426062C2DB8085A8BC0EC0F2B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00ec:
			{// begin fault (depth: 1)
				U3CUpdatePlayerStatsU3Ed__15_System_IDisposable_Dispose_mED8BABC6DB699F6314186A6CF3533EC9E1F66165(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0018_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_009a_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00f3;
			}

IL_0018_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// WWWForm form=new WWWForm();
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_3 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_3, NULL);
				V_2 = L_3;
				// form.AddField("username",username);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_4 = V_2;
				il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
				String_t* L_5 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0;
				WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_4, _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735, L_5, NULL);
				// form.AddField("newxp",xp);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_6 = V_2;
				int32_t L_7 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1;
				WWWForm_AddField_m94A5B3ACC392D98CB1993E0A36CC8201AE36D423(L_6, _stringLiteral4738BFD5A51C96582725E850915F0FA5A41F3883, L_7, NULL);
				// form.AddField("newlevel",level);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_8 = V_2;
				int32_t L_9 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___level_3;
				WWWForm_AddField_m94A5B3ACC392D98CB1993E0A36CC8201AE36D423(L_8, _stringLiteral7A29996EC4F271B1E6EC41C6FCA372FE6442E349, L_9, NULL);
				// form.AddField("newcash",cash);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_10 = V_2;
				int32_t L_11 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___cash_2;
				WWWForm_AddField_m94A5B3ACC392D98CB1993E0A36CC8201AE36D423(L_10, _stringLiteralF1B315867282E7B426062C2DB8085A8BC0EC0F2B, L_11, NULL);
				// using(UnityWebRequest webreq=UnityWebRequest.Post(UpdatePlayerStatsURL,form)){
				String_t* L_12 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___UpdatePlayerStatsURL_9;
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_13 = V_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14;
				L_14 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_12, L_13, NULL);
				__this->___U3CwebreqU3E5__2_2 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebreqU3E5__2_2), (void*)L_14);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return webreq.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwebreqU3E5__2_2;
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_16;
				L_16 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_15, NULL);
				__this->___U3CU3E2__current_1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00f3;
			}

IL_009a_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// switch (webreq.result)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebreqU3E5__2_2;
				int32_t L_18;
				L_18 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_17, NULL);
				if ((!(((uint32_t)L_18) == ((uint32_t)1))))
				{
					goto IL_00d1_1;
				}
			}
			{
				// Debug.Log(":\nReceived: " + webreq.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CwebreqU3E5__2_2;
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_20;
				L_20 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_19, NULL);
				String_t* L_21;
				L_21 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_20, NULL);
				String_t* L_22;
				L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7531D28E2EA1A3A4E842923B19E02CE0AF65F7EA, L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_22, NULL);
				// break;
				goto IL_00db_1;
			}

IL_00d1_1:
			{
				// Debug.Log("baderror");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral078722E798B90E2D32C7BFB96D4CE989F651EF07, NULL);
			}

IL_00db_1:
			{
				// }
				U3CUpdatePlayerStatsU3Ed__15_U3CU3Em__Finally1_m55705ADA2412548A9A76FF20B4C822F180D11B37(__this, NULL);
				__this->___U3CwebreqU3E5__2_2 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebreqU3E5__2_2), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00f3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f3:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void GlobalStuffs/<UpdatePlayerStats>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayerStatsU3Ed__15_U3CU3Em__Finally1_m55705ADA2412548A9A76FF20B4C822F180D11B37 (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebreqU3E5__2_2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebreqU3E5__2_2;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object GlobalStuffs/<UpdatePlayerStats>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePlayerStatsU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA74035EC105633DF1A8BA6AC989AAF2E41B38C3 (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GlobalStuffs/<UpdatePlayerStats>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayerStatsU3Ed__15_System_Collections_IEnumerator_Reset_m49FEE00FEA8C98C2FC9D49BDE527EB469FD5FDB6 (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdatePlayerStatsU3Ed__15_System_Collections_IEnumerator_Reset_m49FEE00FEA8C98C2FC9D49BDE527EB469FD5FDB6_RuntimeMethod_var)));
	}
}
// System.Object GlobalStuffs/<UpdatePlayerStats>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePlayerStatsU3Ed__15_System_Collections_IEnumerator_get_Current_m26645854357CEA8A62D910857A15C2A91601AEDC (U3CUpdatePlayerStatsU3Ed__15_t6749075297A968DC6BA4E8AEFFF6D8B66A9F40D8* __this, const RuntimeMethod* method) 
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
// System.Void GlobalStuffs/<DeleteCurrentUser>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteCurrentUserU3Ed__16__ctor_m582C7A1735E8AC43DCDD5BEBE1ECAB3AED6A1134 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GlobalStuffs/<DeleteCurrentUser>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteCurrentUserU3Ed__16_System_IDisposable_Dispose_mEFF3D3C6641AE91BBDB23B5265699126C056E809 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CDeleteCurrentUserU3Ed__16_U3CU3Em__Finally1_m06A4703E55BCF3AC85DF1FEC0D79D39820355B12(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean GlobalStuffs/<DeleteCurrentUser>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeleteCurrentUserU3Ed__16_MoveNext_mD9425114D1863D0AAFBF5ED7631CCA93074A21B3 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral078722E798B90E2D32C7BFB96D4CE989F651EF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7531D28E2EA1A3A4E842923B19E02CE0AF65F7EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00b9:
			{// begin fault (depth: 1)
				U3CDeleteCurrentUserU3Ed__16_System_IDisposable_Dispose_mEFF3D3C6641AE91BBDB23B5265699126C056E809(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0067_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00c0;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// WWWForm form=new WWWForm();
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_3 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_3, NULL);
				V_2 = L_3;
				// form.AddField("username",username);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_4 = V_2;
				il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
				String_t* L_5 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0;
				WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_4, _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735, L_5, NULL);
				// using(UnityWebRequest webreq=UnityWebRequest.Post(DeleteUserURL,form)){
				String_t* L_6 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___DeleteUserURL_10;
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_7 = V_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8;
				L_8 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_6, L_7, NULL);
				__this->___U3CwebreqU3E5__2_2 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebreqU3E5__2_2), (void*)L_8);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return webreq.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwebreqU3E5__2_2;
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10;
				L_10 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_9, NULL);
				__this->___U3CU3E2__current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00c0;
			}

IL_0067_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// switch (webreq.result)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CwebreqU3E5__2_2;
				int32_t L_12;
				L_12 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_11, NULL);
				if ((!(((uint32_t)L_12) == ((uint32_t)1))))
				{
					goto IL_009e_1;
				}
			}
			{
				// Debug.Log(":\nReceived: " + webreq.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebreqU3E5__2_2;
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
				L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
				String_t* L_15;
				L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
				String_t* L_16;
				L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7531D28E2EA1A3A4E842923B19E02CE0AF65F7EA, L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
				// break;
				goto IL_00a8_1;
			}

IL_009e_1:
			{
				// Debug.Log("baderror");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral078722E798B90E2D32C7BFB96D4CE989F651EF07, NULL);
			}

IL_00a8_1:
			{
				// }
				U3CDeleteCurrentUserU3Ed__16_U3CU3Em__Finally1_m06A4703E55BCF3AC85DF1FEC0D79D39820355B12(__this, NULL);
				__this->___U3CwebreqU3E5__2_2 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebreqU3E5__2_2), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00c0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c0:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void GlobalStuffs/<DeleteCurrentUser>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteCurrentUserU3Ed__16_U3CU3Em__Finally1_m06A4703E55BCF3AC85DF1FEC0D79D39820355B12 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebreqU3E5__2_2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebreqU3E5__2_2;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object GlobalStuffs/<DeleteCurrentUser>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeleteCurrentUserU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E4FC6105D843FE3D86E0221D9514E3ED85AAB32 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GlobalStuffs/<DeleteCurrentUser>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteCurrentUserU3Ed__16_System_Collections_IEnumerator_Reset_m7EAE3A45EA2170E720095831634206ABEF900923 (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteCurrentUserU3Ed__16_System_Collections_IEnumerator_Reset_m7EAE3A45EA2170E720095831634206ABEF900923_RuntimeMethod_var)));
	}
}
// System.Object GlobalStuffs/<DeleteCurrentUser>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeleteCurrentUserU3Ed__16_System_Collections_IEnumerator_get_Current_m387A6444EADBF688E5A696E21A3D20AB18947A7B (U3CDeleteCurrentUserU3Ed__16_t4C4C22FC397266571A32C3F597C5A9DE98F3F434* __this, const RuntimeMethod* method) 
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
// System.Void OneScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneScore__ctor_m845BD6C581734706066717D28F2C5CDC482B3B5C (OneScore_t6C6D4CF3B2C324269F947378A9B777BB6362C1C4* __this, const RuntimeMethod* method) 
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
// System.Void ScoreList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreList__ctor_mDADDDD3DDDBF009960D902C0AE112B1CA065ED42 (ScoreList_t9C9BD599F2DCF4C202CF4DCC0AF4984820A244FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m56AA524D221E460752331B7E1940A978DDEDD0EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<OneScore> scores=new List<OneScore>();
		List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84* L_0 = (List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84*)il2cpp_codegen_object_new(List_1_tC04CFCD14B79A69A9A6E77D7E9B6E12D9DCB2B84_il2cpp_TypeInfo_var);
		List_1__ctor_m56AA524D221E460752331B7E1940A978DDEDD0EF(L_0, List_1__ctor_m56AA524D221E460752331B7E1940A978DDEDD0EF_RuntimeMethod_var);
		__this->___scores_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scores_0), (void*)L_0);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_10), (void*)L_0);
		// count = 0;
		__this->___count_11 = 0;
		// SetCountText ();
		PlayerController_SetCountText_m6A9F5CF284E511EBFE348D2500F866BAB8CE2C24(__this, NULL);
		// winText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___winText_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// winPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___winPanel_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// StartCoroutine(GlobalStuffs.GetScoreBoard(txtsb));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___txtsb_15;
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = GlobalStuffs_GetScoreBoard_mA756979549B858E5059E10686EA51E51D657A9DF(L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// RefreshPlayerStats();
		PlayerController_RefreshPlayerStats_m4EABE95B79B9DD2CA978BA46A83153B5A816B7AF(__this, NULL);
		// speed=GlobalStuffs.level*5+5;
		int32_t L_6 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___level_3;
		__this->___speed_4 = ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, 5)), 5)));
		// }
		return;
	}
}
// System.Void PlayerController::RefreshPlayerStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_RefreshPlayerStats_m4EABE95B79B9DD2CA978BA46A83153B5A816B7AF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25FFD04BC3D3A7CFA9DFFD7459E885CAB3169157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A75DDF29D27793AC3B699B44D201C4D56585C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8192398D581F80B00E89782488F5FE565A1F8C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA381A805B7EF3629E3047AFA3057CE1113FCD48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4FD5FF0B340ECFC6856D5B527074A255F320178);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPUGUI_playerStats.text="Player Stats\nName:"+GlobalStuffs.username+"\nLevel:"+GlobalStuffs.level+"\nXP:"+GlobalStuffs.xp+"\nCash:"+GlobalStuffs.cash+"\nTimes Played:"+GlobalStuffs.timesPlayed;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___TMPUGUI_playerStats_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralA8192398D581F80B00E89782488F5FE565A1F8C8);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA8192398D581F80B00E89782488F5FE565A1F8C8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		String_t* L_4 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		ArrayElementTypeCheck (L_5, _stringLiteralAA381A805B7EF3629E3047AFA3057CE1113FCD48);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAA381A805B7EF3629E3047AFA3057CE1113FCD48);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___level_3), NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		ArrayElementTypeCheck (L_8, _stringLiteral25FFD04BC3D3A7CFA9DFFD7459E885CAB3169157);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral25FFD04BC3D3A7CFA9DFFD7459E885CAB3169157);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1), NULL);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		ArrayElementTypeCheck (L_11, _stringLiteral8A75DDF29D27793AC3B699B44D201C4D56585C3C);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8A75DDF29D27793AC3B699B44D201C4D56585C3C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___cash_2), NULL);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		ArrayElementTypeCheck (L_14, _stringLiteralF4FD5FF0B340ECFC6856D5B527074A255F320178);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralF4FD5FF0B340ECFC6856D5B527074A255F320178);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___timesPlayed_4), NULL);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_17);
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if(!isRunning)return;
		bool L_0 = __this->___isRunning_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(!isRunning)return;
		return;
	}

IL_0009:
	{
		// float moveHorizontal = Input.GetAxis ("Horizontal");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_1;
		// float moveVertical = Input.GetAxis ("Vertical");
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_2;
		// Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);
		float L_3 = V_0;
		float L_4 = V_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_3, (0.0f), L_4, NULL);
		// rb.AddForce (movement * speed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		float L_7 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if(!isRunning)return;
		bool L_0 = __this->___isRunning_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(!isRunning)return;
		return;
	}

IL_0009:
	{
		// countDownTimer-=Time.deltaTime;
		float L_1 = __this->___countDownTimer_9;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___countDownTimer_9 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// SetTimerText();
		PlayerController_SetTimerText_mBBB56415F2EC2C7503081AAAAC0590C013FDAFEE(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter_mF2704872AEA62333341DCBEA2831320C385701D1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE27F31821C3D549C27ECCCC1928221B8D933E5BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag ("Pick Up"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralE27F31821C3D549C27ECCCC1928221B8D933E5BF, NULL);
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		// other.gameObject.SetActive (false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// count = count + 1;
		int32_t L_5 = __this->___count_11;
		__this->___count_11 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// GlobalStuffs.xp+=1;
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		int32_t L_6 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// if(GlobalStuffs.xp>GlobalStuffs.level*10){
		int32_t L_7 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1;
		int32_t L_8 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___level_3;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)10))))))
		{
			goto IL_0059;
		}
	}
	{
		// GlobalStuffs.level++;
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		int32_t L_9 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___level_3;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___level_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// GlobalStuffs.xp=0;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1 = 0;
	}

IL_0059:
	{
		// SetCountText ();
		PlayerController_SetCountText_m6A9F5CF284E511EBFE348D2500F866BAB8CE2C24(__this, NULL);
		// audsrc.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___audsrc_16;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_10, NULL);
		// RefreshPlayerStats();
		PlayerController_RefreshPlayerStats_m4EABE95B79B9DD2CA978BA46A83153B5A816B7AF(__this, NULL);
	}

IL_0070:
	{
		// if (other.gameObject.CompareTag ("Coin"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		bool L_13;
		L_13 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_12, _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, NULL);
		if (!L_13)
		{
			goto IL_00ab;
		}
	}
	{
		// other.gameObject.SetActive (false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// GlobalStuffs.cash+=5;
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		int32_t L_16 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___cash_2;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___cash_2 = ((int32_t)il2cpp_codegen_add(L_16, 5));
		// audsrc.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___audsrc_16;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_17, NULL);
		// RefreshPlayerStats();
		PlayerController_RefreshPlayerStats_m4EABE95B79B9DD2CA978BA46A83153B5A816B7AF(__this, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void PlayerController::SetCountText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetCountText_m6A9F5CF284E511EBFE348D2500F866BAB8CE2C24 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED83D34413F6CE43C735171330348E73CB8A7D2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countText.text = "Score: " + count.ToString ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___countText_5;
		int32_t* L_1 = (&__this->___count_11);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// if (count >= 12)
		int32_t L_4 = __this->___count_11;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)12))))
		{
			goto IL_0040;
		}
	}
	{
		// winText.text = "You Win!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___winText_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralED83D34413F6CE43C735171330348E73CB8A7D2A);
		// GameOver();
		PlayerController_GameOver_mD882D9359CF176F373469C979D9ED9C300723315(__this, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void PlayerController::SetTimerText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetTimerText_mBBB56415F2EC2C7503081AAAAC0590C013FDAFEE (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3319F87D7FEA7C9576E578CF41C4A1518FB2B02F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1628D810FE955F074A2919E378F959D66A6CA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timerText.text="Time Left:"+countDownTimer.ToString("0.0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___timerText_7;
		float* L_1 = (&__this->___countDownTimer_9);
		String_t* L_2;
		L_2 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_1, _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7D1628D810FE955F074A2919E378F959D66A6CA3, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// if(countDownTimer<=0){
		float L_4 = __this->___countDownTimer_9;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// winText.text = "Time over!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___winText_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral3319F87D7FEA7C9576E578CF41C4A1518FB2B02F);
		// GameOver();
		PlayerController_GameOver_mD882D9359CF176F373469C979D9ED9C300723315(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void PlayerController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GameOver_mD882D9359CF176F373469C979D9ED9C300723315 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C8E55BDE815654FFE5467D830DE4B2A8289BF5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isRunning=false;
		__this->___isRunning_12 = (bool)0;
		// winPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___winPanel_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// GlobalStuffs.xp+=count;
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1;
		int32_t L_2 = __this->___count_11;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		// GlobalStuffs.timesPlayed += 1;
		int32_t L_3 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___timesPlayed_4;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___timesPlayed_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// rb.velocity=Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_4, L_5, NULL);
		// rb.angularVelocity=Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_6, L_7, NULL);
		// TMPUGUI_LastScore.text="LastScore:"+count;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___TMPUGUI_LastScore_17;
		int32_t* L_9 = (&__this->___count_11);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5C8E55BDE815654FFE5467D830DE4B2A8289BF5B, L_10, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_11);
		// StartCoroutine(GlobalStuffs.UpdatePlayerStats());
		RuntimeObject* L_12;
		L_12 = GlobalStuffs_UpdatePlayerStats_m21C1D62E3FBE24701C05FF9160B0AC75C5A96FF7(NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// StartCoroutine(GlobalStuffs.DoSendScore(GlobalStuffs.username,count));
		String_t* L_14 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0;
		int32_t L_15 = __this->___count_11;
		RuntimeObject* L_16;
		L_16 = GlobalStuffs_DoSendScore_m01399F6CFCCB4129705E14A75B094A3F0FF4EEDF(L_14, L_15, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Replay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Replay_m7F61BA3DE051ED82290D11A952108259EA4A2D82 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnDeleteUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnDeleteUser_mB40BFE0CC9F03BAACA890425CDB25C781C69EA4A (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(GlobalStuffs.DeleteCurrentUser());
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = GlobalStuffs_DeleteCurrentUser_m37DBA11BF5F44B174B535CEAAC55E7F1A4653CC3(NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// BacktoMain();
		PlayerController_BacktoMain_mE6A9AABA6D8CC798522B03CFB3EFA3D4B3A8B580(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::ClearScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ClearScores_m8825A424E815393E64683A3124387A0FBB763C6D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(GlobalStuffs.ClearScores());
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = GlobalStuffs_ClearScores_mD6F2C6B0DB1172118586BD46EE016A779512F357(NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// StartCoroutine(GlobalStuffs.GetScoreBoard(txtsb));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___txtsb_15;
		RuntimeObject* L_3;
		L_3 = GlobalStuffs_GetScoreBoard_mA756979549B858E5059E10686EA51E51D657A9DF(L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::BacktoMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_BacktoMain_mE6A9AABA6D8CC798522B03CFB3EFA3D4B3A8B580 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28132506D3F108EFE7098223BEA56F77430E81F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainScn");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral28132506D3F108EFE7098223BEA56F77430E81F4, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// bool isRunning=true;
		__this->___isRunning_12 = (bool)1;
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
// PlayerStats PlayerStats::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* PlayerStats_CreateFromJSON_mA5F5A102CD833762B89ADDA34D31B17BE4518416 (String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mAB2526D812E32EBC6CA8B8D116EFF17057871742_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<PlayerStats>(jsonString);
		String_t* L_0 = ___jsonString0;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_1;
		L_1 = JsonUtility_FromJson_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mAB2526D812E32EBC6CA8B8D116EFF17057871742(L_0, JsonUtility_FromJson_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mAB2526D812E32EBC6CA8B8D116EFF17057871742_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_mACDFFF1D0051299DFCDC4AA2E9D29232D892B2EE (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
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
// System.Void RegLoginController::OnButtonLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegLoginController_OnButtonLogin_m951F97DA8EA1995924934F9215B14EF445FF7D9C (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, const RuntimeMethod* method) 
{
	{
		// ? ? ? ? StartCoroutine(DoLogin());
		RuntimeObject* L_0;
		L_0 = RegLoginController_DoLogin_m515A99F128D17B3DD1180E246615DBD9820C0B61(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RegLoginController::DoLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegLoginController_DoLogin_m515A99F128D17B3DD1180E246615DBD9820C0B61 (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* L_0 = (U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8*)il2cpp_codegen_object_new(U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8_il2cpp_TypeInfo_var);
		U3CDoLoginU3Ed__10__ctor_m1475229965FDA30D6FC06A806F2F97B98CDDE269(L_0, 0, NULL);
		U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RegLoginController::OnButtonRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegLoginController_OnButtonRegister_m512CC4F8ABD77CCD1D501AE05AACBCA34559371A (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, const RuntimeMethod* method) 
{
	{
		// ? ? ? ? StartCoroutine(DoRegister());
		RuntimeObject* L_0;
		L_0 = RegLoginController_DoRegister_m98A9023A9400B38DA0A1116B6DBD6B5237F85853(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RegLoginController::DoRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegLoginController_DoRegister_m98A9023A9400B38DA0A1116B6DBD6B5237F85853 (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* L_0 = (U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF*)il2cpp_codegen_object_new(U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF_il2cpp_TypeInfo_var);
		U3CDoRegisterU3Ed__12__ctor_mAA9672BA725D819E23D05DF2D9A7660E3F1EBBC6(L_0, 0, NULL);
		U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator RegLoginController::GetPlayerStats(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegLoginController_GetPlayerStats_m4A1C10078620CA9D4E1959681D8EB3849191183C (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, String_t* ___playername0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* L_0 = (U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86*)il2cpp_codegen_object_new(U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86_il2cpp_TypeInfo_var);
		U3CGetPlayerStatsU3Ed__13__ctor_mAF7C88BA15151F86E3CBDF3A2FDC846F299C32AE(L_0, 0, NULL);
		U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* L_1 = L_0;
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* L_2 = L_1;
		String_t* L_3 = ___playername0;
		L_2->___playername_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___playername_2), (void*)L_3);
		return L_2;
	}
}
// System.Void RegLoginController::GuestLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegLoginController_GuestLogin_m006A1051A5EE180A9E132BE564D3AB28EF329C27 (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09F2DE4E1891E71F09BB9E723565C59D93D7524B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScn");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral09F2DE4E1891E71F09BB9E723565C59D93D7524B, NULL);
		// }
		return;
	}
}
// System.Void RegLoginController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegLoginController__ctor_m3CA3E62D35C553DBD427C2DF48E78C48102A81FB (RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13171E4D786BBF522DB1B7C17EDEBEF25FA7EAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F5099951527E7FDB2F98A2DC0DC5F670E5C574A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5FC9EBE60408032D3C378D426CA0D03D28C1912);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string URLLoginBackend = GlobalStuffs.baseURL + "LoginBackend.php";
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralD5FC9EBE60408032D3C378D426CA0D03D28C1912, NULL);
		__this->___URLLoginBackend_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___URLLoginBackend_4), (void*)L_1);
		// string URLRegBackend = GlobalStuffs.baseURL + "RegisterBackend.php";
		String_t* L_2 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral13171E4D786BBF522DB1B7C17EDEBEF25FA7EAC5, NULL);
		__this->___URLRegBackend_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___URLRegBackend_5), (void*)L_3);
		// string URLReadPlayerStats = GlobalStuffs.baseURL + "ReadPlayerStatsJSON.php";
		String_t* L_4 = ((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___baseURL_5;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral2F5099951527E7FDB2F98A2DC0DC5F670E5C574A, NULL);
		__this->___URLReadPlayerStats_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___URLReadPlayerStats_6), (void*)L_5);
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
// System.Void RegLoginController/<DoLogin>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoLoginU3Ed__10__ctor_m1475229965FDA30D6FC06A806F2F97B98CDDE269 (U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RegLoginController/<DoLogin>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoLoginU3Ed__10_System_IDisposable_Dispose_mBA6133D2823590B8CC4AEDA1EE843B6D46C1B844 (U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RegLoginController/<DoLogin>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoLoginU3Ed__10_MoveNext_mF7493C1C24D81B7658FC87DA2C35D541E6BCF465 (U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BE31CA18AF0A982CF5035307B7C40E98252EB04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CB3AC948D4F5C1160F8D4C3BCDE16320AB3CB1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95231CF314F5FAFFBAAD8F0FE4FFB9683BF5202B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7B8DB078DA43B99AF2531D54D6EE712BE90923C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE26897AFBE8CE6B9A5CD4B53997A6F8AF9B9B1FF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* V_1 = NULL;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWWForm form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_4 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_4, NULL);
		V_2 = L_4;
		// form.AddField("sUsername", if_loginusername.text);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_5 = V_2;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_6 = V_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = L_6->___if_loginusername_11;
		String_t* L_8;
		L_8 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_7, NULL);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_5, _stringLiteral95231CF314F5FAFFBAAD8F0FE4FFB9683BF5202B, L_8, NULL);
		// form.AddField("sPassword", if_loginpassword.text);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_9 = V_2;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_10 = V_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_11 = L_10->___if_loginpassword_12;
		String_t* L_12;
		L_12 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_11, NULL);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_9, _stringLiteral5CB3AC948D4F5C1160F8D4C3BCDE16320AB3CB1B, L_12, NULL);
		// UnityWebRequest webreq = UnityWebRequest.Post(URLLoginBackend, form);
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_13 = V_1;
		String_t* L_14 = L_13->___URLLoginBackend_4;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_15 = V_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16;
		L_16 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_14, L_15, NULL);
		__this->___U3CwebreqU3E5__2_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebreqU3E5__2_3), (void*)L_16);
		// yield return webreq.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebreqU3E5__2_3;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_18;
		L_18 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// switch (webreq.result)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CwebreqU3E5__2_3;
		int32_t L_20;
		L_20 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0108;
		}
	}
	{
		// displayTxt.text = webreq.downloadHandler.text;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_21 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_22 = L_21->___displayTxt_7;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = __this->___U3CwebreqU3E5__2_3;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_24;
		L_24 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_23, NULL);
		String_t* L_25;
		L_25 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_24, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_22, L_25);
		// if (webreq.downloadHandler.text == "LOGIN SUCCESS")
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26 = __this->___U3CwebreqU3E5__2_3;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_27;
		L_27 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_26, NULL);
		String_t* L_28;
		L_28 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_27, NULL);
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralE26897AFBE8CE6B9A5CD4B53997A6F8AF9B9B1FF, NULL);
		if (!L_29)
		{
			goto IL_0118;
		}
	}
	{
		// Debug.Log("Load new Scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA7B8DB078DA43B99AF2531D54D6EE712BE90923C, NULL);
		// GlobalStuffs.username = if_loginusername.text;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_30 = V_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_31 = L_30->___if_loginusername_11;
		String_t* L_32;
		L_32 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0), (void*)L_32);
		// GlobalStuffs.xp = 0;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1 = 0;
		// GlobalStuffs.cash = 0;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___cash_2 = 0;
		// StartCoroutine(GetPlayerStats(if_loginusername.text));
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_33 = V_1;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_34 = V_1;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_35 = V_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_36 = L_35->___if_loginusername_11;
		String_t* L_37;
		L_37 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_36, NULL);
		RuntimeObject* L_38;
		L_38 = RegLoginController_GetPlayerStats_m4A1C10078620CA9D4E1959681D8EB3849191183C(L_34, L_37, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_39;
		L_39 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_33, L_38, NULL);
		// break;
		goto IL_0118;
	}

IL_0108:
	{
		// displayTxt.text = "server error";
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_40 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = L_40->___displayTxt_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, _stringLiteral2BE31CA18AF0A982CF5035307B7C40E98252EB04);
	}

IL_0118:
	{
		// webreq.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_42 = __this->___U3CwebreqU3E5__2_3;
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_42, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RegLoginController/<DoLogin>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoLoginU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m21421B3111BA8F692D68EDCE63A095CD51DF85A3 (U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RegLoginController/<DoLogin>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoLoginU3Ed__10_System_Collections_IEnumerator_Reset_mA046352EFD5BD82B3C8E58D0D7200F978BE0135B (U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoLoginU3Ed__10_System_Collections_IEnumerator_Reset_mA046352EFD5BD82B3C8E58D0D7200F978BE0135B_RuntimeMethod_var)));
	}
}
// System.Object RegLoginController/<DoLogin>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoLoginU3Ed__10_System_Collections_IEnumerator_get_Current_mBE70D2CE215D05D3BA49B80A009B54D6F28D8B59 (U3CDoLoginU3Ed__10_tCA5D7DADAB6A835A4B349EC79F1EE57C2081E8E8* __this, const RuntimeMethod* method) 
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
// System.Void RegLoginController/<DoRegister>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoRegisterU3Ed__12__ctor_mAA9672BA725D819E23D05DF2D9A7660E3F1EBBC6 (U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RegLoginController/<DoRegister>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoRegisterU3Ed__12_System_IDisposable_Dispose_m58C574EBBB27B1297BDB2EE5A4DC27003275CED8 (U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RegLoginController/<DoRegister>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoRegisterU3Ed__12_MoveNext_mC7BED5CA9B2BDD86149E5AB51E99F8778A8C01AF (U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BE31CA18AF0A982CF5035307B7C40E98252EB04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CB3AC948D4F5C1160F8D4C3BCDE16320AB3CB1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95231CF314F5FAFFBAAD8F0FE4FFB9683BF5202B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1AD9B0327AA536DEB57A65FC16FBEE84BF80FAB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* V_1 = NULL;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0092;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWWForm form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_4 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_4, NULL);
		V_2 = L_4;
		// form.AddField("sUsername", if_regusername.text);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_5 = V_2;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_6 = V_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = L_6->___if_regusername_8;
		String_t* L_8;
		L_8 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_7, NULL);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_5, _stringLiteral95231CF314F5FAFFBAAD8F0FE4FFB9683BF5202B, L_8, NULL);
		// form.AddField("sPassword", if_regpassword.text);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_9 = V_2;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_10 = V_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_11 = L_10->___if_regpassword_9;
		String_t* L_12;
		L_12 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_11, NULL);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_9, _stringLiteral5CB3AC948D4F5C1160F8D4C3BCDE16320AB3CB1B, L_12, NULL);
		// form.AddField("sEmail", if_regemail.text);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_13 = V_2;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_14 = V_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_15 = L_14->___if_regemail_10;
		String_t* L_16;
		L_16 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_15, NULL);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_13, _stringLiteralD1AD9B0327AA536DEB57A65FC16FBEE84BF80FAB, L_16, NULL);
		// UnityWebRequest webreq = UnityWebRequest.Post(URLRegBackend, form);
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_17 = V_1;
		String_t* L_18 = L_17->___URLRegBackend_5;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_19 = V_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20;
		L_20 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_18, L_19, NULL);
		__this->___U3CwebreqU3E5__2_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebreqU3E5__2_3), (void*)L_20);
		// yield return webreq.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CwebreqU3E5__2_3;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_22;
		L_22 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0092:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// switch (webreq.result)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = __this->___U3CwebreqU3E5__2_3;
		int32_t L_24;
		L_24 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_23, NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		// displayTxt.text = webreq.downloadHandler.text;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_25 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = L_25->___displayTxt_7;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = __this->___U3CwebreqU3E5__2_3;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_28;
		L_28 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_27, NULL);
		String_t* L_29;
		L_29 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_28, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_29);
		// break;
		goto IL_00d4;
	}

IL_00c4:
	{
		// displayTxt.text = "server error";
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_30 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = L_30->___displayTxt_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_31, _stringLiteral2BE31CA18AF0A982CF5035307B7C40E98252EB04);
	}

IL_00d4:
	{
		// webreq.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_32 = __this->___U3CwebreqU3E5__2_3;
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_32, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RegLoginController/<DoRegister>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoRegisterU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7F75F0B010339698FD41A7A86CDC5658A3CEC348 (U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RegLoginController/<DoRegister>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoRegisterU3Ed__12_System_Collections_IEnumerator_Reset_m5C1F129183E206483CBFF18B769E689EFA809913 (U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoRegisterU3Ed__12_System_Collections_IEnumerator_Reset_m5C1F129183E206483CBFF18B769E689EFA809913_RuntimeMethod_var)));
	}
}
// System.Object RegLoginController/<DoRegister>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoRegisterU3Ed__12_System_Collections_IEnumerator_get_Current_m962FEBB018DCFDBB3567D214822FF1BA05697338 (U3CDoRegisterU3Ed__12_tEFF5BDA0EB1567343B37D76B80C94C7290356AAF* __this, const RuntimeMethod* method) 
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
// System.Void RegLoginController/<GetPlayerStats>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPlayerStatsU3Ed__13__ctor_mAF7C88BA15151F86E3CBDF3A2FDC846F299C32AE (U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RegLoginController/<GetPlayerStats>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPlayerStatsU3Ed__13_System_IDisposable_Dispose_mFA5EBABBB62F4C10E3C74871A470283BA0DED08A (U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RegLoginController/<GetPlayerStats>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetPlayerStatsU3Ed__13_MoveNext_mE32205C6A5E72BC28817438261CFD053604C98E4 (U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09F2DE4E1891E71F09BB9E723565C59D93D7524B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25FFD04BC3D3A7CFA9DFFD7459E885CAB3169157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BE31CA18AF0A982CF5035307B7C40E98252EB04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A565D36BCCDF8507A7F398CBEA7F67162E1297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral401F3CFD68125B7597FF7AB22654E53E659E1257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65DD75581587DC6FB0B27A71B81D736F9133741C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A75DDF29D27793AC3B699B44D201C4D56585C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA381A805B7EF3629E3047AFA3057CE1113FCD48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* V_1 = NULL;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_2 = NULL;
	PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWWForm form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_4 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_4, NULL);
		V_2 = L_4;
		// form.AddField("username", playername);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_5 = V_2;
		String_t* L_6 = __this->___playername_2;
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_5, _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735, L_6, NULL);
		// UnityWebRequest webRequest = UnityWebRequest.Post(URLReadPlayerStats, form);
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_7 = V_1;
		String_t* L_8 = L_7->___URLReadPlayerStats_6;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_9 = V_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10;
		L_10 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_8, L_9, NULL);
		__this->___U3CwebRequestU3E5__2_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)L_10);
		// yield return webRequest.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CwebRequestU3E5__2_4;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_12;
		L_12 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_11, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0061:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// switch (webRequest.result)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebRequestU3E5__2_4;
		int32_t L_14;
		L_14 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0194;
		}
	}
	{
		// Debug.Log("Received: " + webRequest.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwebRequestU3E5__2_4;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_16;
		L_16 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_15, NULL);
		String_t* L_17;
		L_17 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral401F3CFD68125B7597FF7AB22654E53E659E1257, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
		// displayTxt.text = "RawData:\n" + webRequest.downloadHandler.text + "\n";
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_19 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = L_19->___displayTxt_7;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CwebRequestU3E5__2_4;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_22;
		L_22 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_21, NULL);
		String_t* L_23;
		L_23 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral65DD75581587DC6FB0B27A71B81D736F9133741C, L_23, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_20, L_24);
		// PlayerStats ps = PlayerStats.CreateFromJSON(webRequest.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25 = __this->___U3CwebRequestU3E5__2_4;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_26;
		L_26 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_25, NULL);
		String_t* L_27;
		L_27 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_26, NULL);
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_28;
		L_28 = PlayerStats_CreateFromJSON_mA5F5A102CD833762B89ADDA34D31B17BE4518416(L_27, NULL);
		V_3 = L_28;
		// displayTxt.text = "Username:" + ps.username + "\nXP:" + ps.xp + "\nLevel:" + ps.level + "\nCash:" + ps.cash;
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_29 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_30 = L_29->___displayTxt_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		ArrayElementTypeCheck (L_32, _stringLiteral30A565D36BCCDF8507A7F398CBEA7F67162E1297);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral30A565D36BCCDF8507A7F398CBEA7F67162E1297);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_34 = V_3;
		String_t* L_35 = L_34->___username_0;
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_33;
		ArrayElementTypeCheck (L_36, _stringLiteral25FFD04BC3D3A7CFA9DFFD7459E885CAB3169157);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral25FFD04BC3D3A7CFA9DFFD7459E885CAB3169157);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_38 = V_3;
		int32_t* L_39 = (&L_38->___xp_1);
		String_t* L_40;
		L_40 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_39, NULL);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_37;
		ArrayElementTypeCheck (L_41, _stringLiteralAA381A805B7EF3629E3047AFA3057CE1113FCD48);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAA381A805B7EF3629E3047AFA3057CE1113FCD48);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_43 = V_3;
		int32_t* L_44 = (&L_43->___level_2);
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_44, NULL);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_42;
		ArrayElementTypeCheck (L_46, _stringLiteral8A75DDF29D27793AC3B699B44D201C4D56585C3C);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8A75DDF29D27793AC3B699B44D201C4D56585C3C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_48 = V_3;
		int32_t* L_49 = (&L_48->___cash_3);
		String_t* L_50;
		L_50 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_49, NULL);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_50);
		String_t* L_51;
		L_51 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_47, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_30, L_51);
		// Debug.Log(displayTxt.text);
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_52 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_53 = L_52->___displayTxt_7;
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_53);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_54, NULL);
		// GlobalStuffs.username = ps.username;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_55 = V_3;
		String_t* L_56 = L_55->___username_0;
		il2cpp_codegen_runtime_class_init_inline(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var);
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___username_0), (void*)L_56);
		// GlobalStuffs.xp = ps.xp;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_57 = V_3;
		int32_t L_58 = L_57->___xp_1;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___xp_1 = L_58;
		// GlobalStuffs.level = ps.level;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_59 = V_3;
		int32_t L_60 = L_59->___level_2;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___level_3 = L_60;
		// GlobalStuffs.cash = ps.cash;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_61 = V_3;
		int32_t L_62 = L_61->___cash_3;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___cash_2 = L_62;
		// GlobalStuffs.timesPlayed = ps.timesPlayed;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_63 = V_3;
		int32_t L_64 = L_63->___timesPlayed_4;
		((GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalStuffs_t23D6C58AF8250C050EF071934BFA824D050594E3_il2cpp_TypeInfo_var))->___timesPlayed_4 = L_64;
		// SceneManager.LoadScene("GameScn");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral09F2DE4E1891E71F09BB9E723565C59D93D7524B, NULL);
		// break;
		goto IL_01a4;
	}

IL_0194:
	{
		// displayTxt.text = "server error";
		RegLoginController_t9DCE18FE8BE5F213BD9B3F2AF2A8981767B2B78B* L_65 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = L_65->___displayTxt_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_66, _stringLiteral2BE31CA18AF0A982CF5035307B7C40E98252EB04);
	}

IL_01a4:
	{
		// webRequest.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_67 = __this->___U3CwebRequestU3E5__2_4;
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_67, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RegLoginController/<GetPlayerStats>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPlayerStatsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m64CBDB1341DEFB0BC414CCF93CC679876AD42B58 (U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RegLoginController/<GetPlayerStats>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPlayerStatsU3Ed__13_System_Collections_IEnumerator_Reset_m02D42239631BE128CEED17FCE8F44BC8FADDA67F (U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetPlayerStatsU3Ed__13_System_Collections_IEnumerator_Reset_m02D42239631BE128CEED17FCE8F44BC8FADDA67F_RuntimeMethod_var)));
	}
}
// System.Object RegLoginController/<GetPlayerStats>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPlayerStatsU3Ed__13_System_Collections_IEnumerator_get_Current_m844973430F303AB480746B94B181FECAA986A98F (U3CGetPlayerStatsU3Ed__13_t906331CDC632D7A810AD34FEA69E649D5F92DF86* __this, const RuntimeMethod* method) 
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
// System.Void Rotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Update_mEDB0F4729DEB6075BDB3177DB5A90104D8020D68 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate (new Vector3 (15, 30, 45) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_m6DD9F22CD049D079A6246125410EFE63DE76FAF2 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
