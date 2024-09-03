//
// Created by eeleephaant on 03.09.2024.
//

#include <GL/gl.h>
#include "Renderer.h"

void Renderer::Init() {
    glEnable(GL_DEPTH_TEST);
}

void Renderer::Clear() {
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Renderer::Draw() {
    shader.Use();

    shader.SetUniform("projection", projectionMatrix);
    shader.SetUniform("view", viewMatrix);

    glBindVertexArray(vao);

    glDrawArrays(GL_TRIANGLES, 0, 3);

    glBindVertexArray(0);
}
