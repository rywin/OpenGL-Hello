#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main(){

	GLFWwindow* window;

    /* Initialize GLFW */
    if (!glfwInit())
        return -1;

    /* Create a GLFW window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello OpenGL", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Initalize GLAD */
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}   

    /* Set OpenGL clear-color to red.*/
    glClearColor(1.0, 0.0, 0.0, 1.0);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;


}
