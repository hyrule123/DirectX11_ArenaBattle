#include "PCH_ArenaBattle.h"
#include "TestScene.h"

#include <core/Engine/Game/GameObject.h>
#include <core/Engine/Game/Component/Renderer/SkeletalMeshRenderer.h>
#include <core/Engine/Manager/ResourceManager.h>
#include <core/Engine/Resource/Model3D/Model3D.h>
#include <core/Engine/Game/Component/Animator/Animator3D.h>

namespace AB
{
	TestScene::TestScene()
		: core::Scene(TestScene::s_static_type_name)
	{
	}
	TestScene::~TestScene()
	{
	}

	void TestScene::awake()
	{
		Super::awake();

		using namespace core;
		s_ptr<GameObject> test_obj = std::make_shared<GameObject>();

		//s_ptr<SkeletalMeshRenderer> mesh = test_obj->add_component<SkeletalMeshRenderer>();
		//
		//auto res = ResourceManager<Model3D>::get_inst().load("WarriorRunFwd");

		//auto objs = res->instantiate();

		//auto animator = objs.front()->get_component<Com_Animator3D>();
		//for (const auto& obj : objs)
		//{
		//	obj->SetLayer(1);
		//}

		//animator->play_next_animation();

		//add_game_objects(objs);

		int a = 3;
	}
}