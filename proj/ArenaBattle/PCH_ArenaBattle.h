#pragma once
#ifdef _DEBUG

#pragma comment(lib, "Editor.lib")
#include <Editor/PCH_Editor.h>

#else

#pragma comment(lib, "Engine.lib")
#include <Engine/PCH_Engine.h>

#endif

#include "ArenaBattle/resource.h"