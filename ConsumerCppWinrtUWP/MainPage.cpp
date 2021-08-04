#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include <winrt/CppWinrtComponent.h>

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::ConsumerCppWinrtUWP::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
        this->Loaded([](winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
            {
                winrt::CppWinrtComponent::Class demo;
                auto name = demo.GetModule();
            });
    }
}
