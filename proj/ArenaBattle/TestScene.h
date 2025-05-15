#pragma once

#include <Engine/Game/Scene.h>

namespace AB
{
	class TestScene
		: public core::Scene
	{
		CLASS_INFO(TestScene);

	public:
		TestScene();
		virtual ~TestScene();

		virtual void init() override;
		virtual void on_enter() override;
	};
}


