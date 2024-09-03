cmake_minimum_required(VERSION 3.28)
project(NewGame)

set(CMAKE_CXX_STANDARD 26)

#find_package(glfw3 3.4 REQUIRED)
find_package (OpenGL REQUIRED)

include_directories("C:/glfw/include")
link_directories("C:/glfw/lib-mingw-w64")

include_directories("C:/glew/include")
link_directories("C:/glew/lib")

find_package(glm CONFIG REQUIRED)

set(SOURCE_FILES main.cpp)
set(CMAKE_INCLUDE_PATH "C:/glfw/include")

add_executable(NewGame main.cpp
        Window.cpp
        Window.h
        Renderer.cpp
        Renderer.h
        Shader.cpp
        Shader.h
)

target_link_libraries (NewGame ${OPENGL_LIBRARIES} glfw3 glu32 opengl32 glm::glm)

