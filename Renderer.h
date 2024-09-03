//
// Created by eeleephaant on 03.09.2024.
//

#ifndef NEWGAME_RENDERER_H
#define NEWGAME_RENDERER_H


#include "Shader.h"

class Renderer {
public:
    void Init();
    void Clear();
    void Draw();

    Shader shader;
    GLuint vao, vbo;
};


#endif //NEWGAME_RENDERER_H
