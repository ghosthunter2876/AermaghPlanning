cmake_minimum_required(VERSION 3.31)
project(AermaghPlanning)

add_subdirectory("3rdparty/sdl3")
add_subdirectory("3rdparty/glm")

set(CMAKE_CXX_STANDARD 17)
if (WIN32)
    set(CMAKE_EXE_LINKER_FLAGS "-static")
endif(WIN32)

add_executable(AermaghPlanning "src/main.cpp" "3rdparty/glad2/src/gl.c")

target_include_directories(AermaghPlanning PUBLIC "3rdparty/sdl3/include" "3rdparty/glad2/include" "3rdparty/glm" "3rdparty/imgui" "3rdparty/stb")

target_link_libraries(AermaghPlanning PUBLIC SDL3::SDL3-shared glm)