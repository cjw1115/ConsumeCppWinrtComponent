#pragma once

#include "Class.g.h"

namespace winrt::CppWinrtComponent::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        hstring GetModule();
    };
}

namespace winrt::CppWinrtComponent::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
