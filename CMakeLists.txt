cmake_minimum_required(VERSION 3.2)

project(template)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR} ./conan_cmake)
# message(WARNING "PATH IS ${CMAKE_PREFIX_PATH}")
set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ./conan_cmake)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/conan_cmake)
set(OPENSSL_USE_STATIC_LIBS TRUE)

find_package(fmt REQUIRED)
find_package(SDL2 REQUIRED)
find_package(glfw3 REQUIRED)
find_package(imgui REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenSSL REQUIRED)

add_executable(t1)
target_include_directories(t1 PRIVATE includes bindings)
set(SOURCES
    src/main.cpp
    src/style.cpp
    bindings/imgui_impl_glfw.cpp
    bindings/imgui_impl_opengl3.cpp
    bindings/imgui_impl_glfw.h
    bindings/imgui_impl_opengl3.h
    bindings/imgui_impl_opengl3_loader.h)

target_sources(t1 PRIVATE ${SOURCES})

target_link_libraries(t1 PRIVATE fmt::fmt OpenSSL::Crypto SDL2::SDL2 glfw::glfw
                                 GLEW::GLEW imgui::imgui)

# target_link_libraries(t1 PRIVATE fmt::fmt)
