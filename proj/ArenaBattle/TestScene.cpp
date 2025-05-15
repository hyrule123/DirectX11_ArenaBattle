#include "PCH_ArenaBattle.h"
#include "TestScene.h"

namespace AB
{
	TestScene::TestScene()
		: core::Scene(TestScene::concrete_class_name)
	{
	}
	TestScene::~TestScene()
	{
	}
	void TestScene::init()
	{
		core::Scene::init();
	}
	void TestScene::on_enter()
	{
		core::Scene::on_enter();
	}
}