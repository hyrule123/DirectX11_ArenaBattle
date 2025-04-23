#include "PCH_ArenaBattle.h"

#include "ArenaBattle/EntryPoint.h"

BOOL APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    using namespace core;

    tDesc_EngineMain Desc{};

    Desc.hInstance = hInstance;
    Desc.titleName = TEXT("ArenaBattle");
    Desc.className = TEXT("GameEngine Client");
    Desc.leftPos = 100;
    Desc.topPos = 100;
    Desc.width = 1280;
    Desc.height = 720;

    Desc.windowIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1));

    Desc.GPUDesc.ResolutionX = (UINT)Desc.width;
    Desc.GPUDesc.ResolutionY = (UINT)Desc.height;
    Desc.GPUDesc.RefreshRate = (UINT)60u;

    Desc.entryFunction = AB::EntryPoint;

    ENGINE_MAIN engine(Desc);
    return engine.Run();
}