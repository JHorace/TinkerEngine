find_package(Vulkan REQUIRED)

if( ${Vulkan_VERSION} VERSION_LESS "1.3.256" )
    message( FATAL_ERROR "Minimum required Vulkan version for C++ modules is 1.3.256. "
            "Found ${Vulkan_VERSION}."
    )
endif()

add_library(VulkanHppModule)
target_sources( VulkanHppModule PUBLIC
        FILE_SET CXX_MODULES
        BASE_DIRS ${Vulkan_INCLUDE_DIR}
        FILES ${Vulkan_INCLUDE_DIR}/vulkan/vulkan.cppm
)
target_compile_features( VulkanHppModule PUBLIC cxx_std_20 )

add_compile_definitions(VULKAN_HPP_NO_STRUCT_CONSTRUCTORS)
if(WIN32)
    add_compile_definitions(VK_USE_PLATFORM_WIN32_KHR)
endif(WIN32)

target_include_directories(VulkanHppModule PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(VulkanHppModule PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Vulkan-Headers/include)
target_link_libraries( VulkanHppModule PUBLIC Vulkan::Vulkan )