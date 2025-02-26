#include <iostream>
#include <vulkan/vulkan.hpp>

#include "framework/application.hpp"

using namespace std;

int main()
{
    anfo::Application app;
    app.createWindow();
    app.loop();
    return 0;
}