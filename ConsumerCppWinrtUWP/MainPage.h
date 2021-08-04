#pragma once

#include "MainPage.g.h"

namespace winrt::ConsumerCppWinrtUWP::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
    };
}

namespace winrt::ConsumerCppWinrtUWP::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
