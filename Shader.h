//
// Created by eeleephaant on 03.09.2024.
//

#ifndef NEWGAME_SHADER_H
#define NEWGAME_SHADER_H


#include <string>
#include <GL/glew.h>
#include <fstream>
#include <sstream>
#include <glm/vec3.hpp>
#include <glm/mat4x4.hpp>


class Shader {
public:
    Shader(const std::string& vertexPath, const std::string& fragmentPath);
    ~Shader();

    void Use() const;
    GLuint GetProgramID() const;

    void SetUniform(const std::string& name, int value) const;
    void SetUniform(const std::string& name, float value) const;
    void SetUniform(const std::string& name, glm::vec3& value) const;
    void SetUniform(const std::string& name, glm::mat4& value) const;

private:
    GLuint programID;
    std::string LoadShaderSource(const std::string& filePath);
    GLuint CompileShader(const std::string& source, GLenum shaderType);
    void LinkProgram(GLuint vertexShader, GLuint fragmentShader);
};


#endif //NEWGAME_SHADER_H
