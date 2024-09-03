//
// Created by eeleephaant on 03.09.2024.
//

#ifndef NEWGAME_WINDOW_H
#define NEWGAME_WINDOW_H


#include <string>
#include <GLFW/glfw3.h>

class Window {
public:
    Window(int width, int height, const std::string &title);
    ~Window();

    void Destroy();
    void Create();
    GLFWwindow* GetNativeWindow() const;
    bool ShouldClose() const;
    void SwapBuffers();
    void PollEvents();


private:
    static void initGLFW();
    int width, height;
    std::string title;
    GLFWwindow *window;
};


#endif //NEWGAME_WINDOW_H
