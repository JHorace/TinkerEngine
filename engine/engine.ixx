//
// Created by jasum on 10/7/2023.
//

module;

import vulkan_hpp;

export module Engine;
import :Defaults;

export
{
    struct VulkanEnvironment
    {

    };

    class Engine
    {
    public:
        Engine();
    private:
        vk::raii::Context _vkContext;
        vk::raii::Instance _vkInstance;
        vk::raii::PhysicalDevices _physDevices;
    };
}

Engine::Engine() : _vkContext({}), _vkInstance(_vkContext, InstanceCreateInfo), _physDevices(_vkInstance)
{

}