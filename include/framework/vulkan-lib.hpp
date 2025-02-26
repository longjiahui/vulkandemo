#include "vulkan.hpp"
#include <vector>
#include <GLFW/glfw3.h>
#pragma once

class VulkanInstance
{
private:
vk::Instance instance;
    void createInstance()
    {
        vk::ApplicationInfo appInfo{
            .pApplicationName = "Hello Triangle",
            .applicationVersion = VK_MAKE_VERSION(1, 0, 0),
            .pEngineName = "",
            .engineVersion = VK_MAKE_VERSION(0, 0, 0),
            .apiVersion = VK_API_VERSION_1_0,
        };
        uint32_t glfwExtensionCount = 0;
        const char** glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);
        vk::InstanceCreateInfo instanceCreateInfo{
            .pApplicationInfo = &appInfo,

            .enabledExtensionCount = glfwExtensionCount,
            .ppEnabledExtensionNames = glfwExtensions,
            .pNext = nullptr,
        };

        this->instance = vk::createInstance(instanceCreateInfo);
    }
};