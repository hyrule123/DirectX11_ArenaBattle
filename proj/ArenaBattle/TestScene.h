#pragma once

#include <Engine/Game/Scene.h>

namespace AB
{
	class TestScene
		: public core::Scene
	{
		CLASS_INFO(TestScene, core::Scene);
	public:
		TestScene();
		virtual ~TestScene();

		virtual void awake() override;
	};
}


