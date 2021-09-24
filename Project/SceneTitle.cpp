/*************************************************************************//*!

					@file	SceneTitle.cpp
					@brief	タイトル画面。

															@author	池上　綾香
*//**************************************************************************/
#include "SceneTitle.h"

/// <summary>
/// コンストラクタ
/// </summary>
CSceneTitle::CSceneTitle() {
}

/// <summary>
/// デストラクタ
/// </summary>
CSceneTitle::~CSceneTitle() {
}

/// <summary>
/// 読み込み
/// </summary>
/// <returns>成功：true, 失敗：false</returns>
bool CSceneTitle::Load() {
	return false;
}

/// <summary>
/// 初期化
/// </summary>
void CSceneTitle::Initialize() {
}

/// <summary>
/// 更新
/// </summary>
void CSceneTitle::Update() {
}

/// <summary>
/// 描画
/// </summary>
void CSceneTitle::Render(void) {
	CGraphicsUtilities::RenderFillRect(0, 0, 100, 100, MOF_COLOR_RED);
}

/// <summary>
/// デバッグ描画
/// </summary>
void CSceneTitle::RenderDebug(void) {
	CGraphicsUtilities::RenderString(10, 10, "タイトル画面");
}

/// <summary>
/// 解放
/// </summary>
void CSceneTitle::Release(void) {
}