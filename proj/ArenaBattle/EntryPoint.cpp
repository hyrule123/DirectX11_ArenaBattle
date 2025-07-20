#include "PCH_ArenaBattle.h"
#include "EntryPoint.h"

#include "ArenaBattle/TestScene.h"

#include <Engine/Manager/SceneManager.h>

namespace AB
{
	void entry_point()
	{
		core::SceneManager::get_inst().load_scene(std::make_unique<TestScene>());
	}
}

