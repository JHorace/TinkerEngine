cmake_minimum_required(VERSION 3.26)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

project("TinkerEngine" LANGUAGES CXX)

add_subdirectory(vulkan-module)
add_subdirectory(engine)
add_subdirectory(samples)