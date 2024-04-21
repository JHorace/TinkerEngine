//
// Created by jasum on 1/31/2024.
//

module;
#include "array"
#include "vulkan/vulkan_hpp_macros.hpp"

export module Engine:Defaults;
import vulkan_hpp;

export
{
  constexpr const char *VK_PLATFORM_SURFACE_EXTENSION_NAME =
  #if defined(_WIN32)
    "VK_KHR_win32_surface";
  #endif


  constexpr std::array LayerNames{"VK_LAYER_KHRONOS_validation"};

  constexpr std::array ExtensionNames{
      VK_PLATFORM_SURFACE_EXTENSION_NAME,
  };

  vk::InstanceCreateInfo InstanceCreateInfo = vk::InstanceCreateInfo{.pApplicationInfo = nullptr, .enabledLayerCount = LayerNames.size(), .ppEnabledLayerNames = LayerNames.data(), .enabledExtensionCount = 0,};


}


