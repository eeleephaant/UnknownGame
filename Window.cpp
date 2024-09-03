//
// Created by eeleephaant on 03.09.2024.
//

#include <iostream>
#include "Window.h"

Window::Window(int width, int height, const std::string &title) {
    glfwInit();
    this->height = height;
    this->width = width;
    this->title = title;
    this->window = nullptr;
}

Window::~Window() {
    Destroy();
}

void Window::Destroy() {
    if (window) {
        glfwDestroyWindow(window);
        window = nullptr;
    }
}

void Window::Create() {
    this->window = glfwCreateWindow(this->width, this->height, this->title.c_str(), nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to init glfwWindow" << std::endl;
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);
}

GLFWwindow *Window::GetNativeWindow() const {
    return this->window;
}

bool Window::ShouldClose() const {
    return glfwWindowShouldClose(this->window);
}

void Window::SwapBuffers() {
    glfwSwapBuffers(this->window);
}

void Window::PollEvents() {
    glfwPollEvents();
}

void Window::initGLFW() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
}
