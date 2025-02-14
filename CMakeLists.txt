cmake_minimum_required(VERSION 3.24)
project(vulkandemo)

set(CMAKE_CXX_STANDARD 17)

find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)
find_package(Vulkan REQUIRED)

set(Program demo)
add_executable(${Program})

target_include_directories(
    ${Program}
    PRIVATE
)

target_link_libraries(
    ${Program}
    glfw
    glm::glm
    Vulkan::Vulkan
)

target_sources(
    ${Program}
    PRIVATE
    src/main.cpp
)