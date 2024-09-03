#include <GLFW/glfw3.h>
#include <iostream>
#include "Window.h"

int main() {
    Window window = Window(1000, 1000, "Hello");
    window.Create();


    while (!window.ShouldClose()) {
        window.SwapBuffers();
        window.PollEvents();
    }
    return 0;
}