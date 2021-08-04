#include <winrt/CppWinrtComponent.h>
int main()
{
	winrt::CppWinrtComponent::Class demo;
	auto name = demo.GetModule();
}