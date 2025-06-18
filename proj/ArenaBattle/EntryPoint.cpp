#include "PCH_ArenaBattle.h"
#include "EntryPoint.h"

#include "ArenaBattle/TestScene.h"

#include <Engine/Manager/SceneManager.h>

namespace AB
{
	void EntryPoint()
	{
		core::SceneManager::get_inst().LoadScene(std::make_unique<TestScene>());
	}
}

