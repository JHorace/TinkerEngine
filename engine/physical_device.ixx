//
// Created by jasum on 4/9/2024.
//

module;
import vulkan_hpp;
#include <algorithm>

export module Engine:PhysicalDevice;

export {

  uint32_t GetGraphicsQueueFamily(const vk::raii::PhysicalDevice& physDevice)
  {
    std::vector<vk::QueueFamilyProperties> queueFamilyProps = physDevice.getQueueFamilyProperties();

    auto it = std::find_if(queueFamilyProps.begin(), queueFamilyProps.end(), [](const vk::QueueFamilyProperties& p)
    {
      return p.queueFlags & vk::QueueFlagBits::eGraphics;
    });

    return it - queueFamilyProps.begin();
  }

}