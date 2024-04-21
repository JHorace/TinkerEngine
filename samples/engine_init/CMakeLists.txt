add_executable(SampleEngineInit main.cpp)

add_dependencies(SampleEngineInit engine)

target_link_libraries(SampleEngineInit PRIVATE engine)
