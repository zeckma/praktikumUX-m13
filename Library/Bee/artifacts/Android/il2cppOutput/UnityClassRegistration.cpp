extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_AndroidJNI();
	RegisterModule_AndroidJNI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_AssetBundle();
	RegisterModule_AssetBundle();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityWebRequestAudio();
	RegisterModule_UnityWebRequestAudio();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AssetBundle; template <> void RegisterUnityClass<AssetBundle>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SortingGroup; template <> void RegisterUnityClass<SortingGroup>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
namespace Unity { class ConfigurableJoint; } template <> void RegisterUnityClass<Unity::ConfigurableJoint>(const char*);
namespace Unity { class FixedJoint; } template <> void RegisterUnityClass<Unity::FixedJoint>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; template <> void RegisterUnityClass<TerrainLayer>(const char*);
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 97 non stripped classes
	//0. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//1. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//2. Animation
	RegisterUnityClass<Animation>("Animation");
	//3. Animator
	RegisterUnityClass<Animator>("Animation");
	//4. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//5. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//6. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//7. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//8. AssetBundle
	RegisterUnityClass<AssetBundle>("AssetBundle");
	//9. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//10. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//11. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//12. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//13. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//14. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//15. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//16. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//17. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//18. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//19. Camera
	RegisterUnityClass<Camera>("Core");
	//20. Component
	RegisterUnityClass<Unity::Component>("Core");
	//21. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//22. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//23. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//24. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//25. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//26. GameManager
	RegisterUnityClass<GameManager>("Core");
	//27. GameObject
	RegisterUnityClass<GameObject>("Core");
	//28. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//29. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//30. InputManager
	RegisterUnityClass<InputManager>("Core");
	//31. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//32. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//33. Light
	RegisterUnityClass<Light>("Core");
	//34. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//35. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//36. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//37. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//38. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//39. Material
	RegisterUnityClass<Material>("Core");
	//40. Mesh
	RegisterUnityClass<Mesh>("Core");
	//41. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//42. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//43. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//44. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//45. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//46. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//47. Object
	//Skipping Object
	//48. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//49. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//50. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//51. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//52. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//53. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//54. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//55. Renderer
	RegisterUnityClass<Renderer>("Core");
	//56. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//57. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//58. Shader
	RegisterUnityClass<Shader>("Core");
	//59. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//60. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//61. SortingGroup
	RegisterUnityClass<SortingGroup>("Core");
	//62. Sprite
	RegisterUnityClass<Sprite>("Core");
	//63. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//64. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//65. TagManager
	RegisterUnityClass<TagManager>("Core");
	//66. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//67. Texture
	RegisterUnityClass<Texture>("Core");
	//68. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//69. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//70. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//71. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//72. Transform
	RegisterUnityClass<Transform>("Core");
	//73. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//74. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//75. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//76. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//77. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//78. Collider
	RegisterUnityClass<Collider>("Physics");
	//79. ConfigurableJoint
	RegisterUnityClass<Unity::ConfigurableJoint>("Physics");
	//80. FixedJoint
	RegisterUnityClass<Unity::FixedJoint>("Physics");
	//81. Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//82. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//83. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//84. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//85. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//86. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//87. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//88. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//89. TerrainLayer
	RegisterUnityClass<TerrainLayer>("Terrain");
	//90. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//91. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//92. TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//93. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//94. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//95. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//96. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");

}
