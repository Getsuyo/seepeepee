#include <GLEW/glew.h>
#include <GLFW/glfw3.h>
#include "fn.h"
/*
static unsigned int CompileShader(unsigned int, const std::string&);
static unsigned int CreateShader(const std::string&, const std::string&);
*/

int main()
{





    //I might wanna master cpp before OpenGL or even just finish my school pending works OR BEAT THAT KNIGHT THAT'S "HOLLOW"







#ifdef 0
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Triangle", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK)
        std::cout << "ERR" << std::endl;
    std::cout << glGetString(GL_VERSION) << std::endl;

    float position[6] = {
        -0.5f, -0.5f,
         0.0f,  0.5f,
         0.5f, -0.5f
    };

    unsigned int buffer;
    glGenBuffers(1, &buffer);
    glBindBuffer(GL_ARRAY_BUFFER, buffer);
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), position, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2*sizeof(GL_FLOAT), 0);

    std::string vertexShader =
        "#version 330 core"
        "\n"
        "layout(location = 0) in vec4 position;"
        "\n"
        "void main()\n"
        "{\n"
        "gl_Position = position;\n"
        "}\n";
    std::string fragmentShader =
        "#version 330 core"
        "\n"
        "layout(location = 0) out vec4 colour;"
        "\n"
        "void main()\n"
        "{\n"
        "colour = vec4(0.9, 0.05, 0.05, 1.0);\n"
        "}\n";
    unsigned int shader = CreateShader(vertexShader, fragmentShader);
    glUseProgram(shader);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        
        glDrawArrays(GL_TRIANGLES, 0, 3);
        
        
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glDeleteProgram(shader);
    glfwTerminate();
#endif
}