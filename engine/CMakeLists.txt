cmake_minimum_required(VERSION 3.26)
project(engine)

add_library(engine STATIC)
target_sources(engine
        PUBLIC
        FILE_SET CXX_MODULES FILES
        engine.ixx
        util/defaults.ixx
        resource_manager/resource_manager.ixx
        physical_device.ixx)

add_dependencies(engine VulkanHppModule)

target_link_libraries(engine PUBLIC VulkanHppModule)
