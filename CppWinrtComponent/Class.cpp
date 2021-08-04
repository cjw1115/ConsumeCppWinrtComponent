#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

namespace winrt::CppWinrtComponent::implementation
{
    hstring Class::GetModule()
    {
        wchar_t fileName[1024];
        auto re = GetModuleFileName(NULL, fileName, sizeof(fileName));
        return fileName;
    }
}
