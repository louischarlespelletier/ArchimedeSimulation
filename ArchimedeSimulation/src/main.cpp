///////////////////////////////////////////////////////////////////////////////////////////////////
///
///	Name : main.cpp
///	Description : Main file of the program
///	Created on : 22/09/14
///	Updated on :
///	Modified by: G.Arruda
///
///////////////////////////////////////////////////////////////////////////////////////////////////

//Toujours inclure glew avant glfw3
#include <gl\glew.h>
#include <GLFW\glfw3.h>
#include <tinyXML\tinyxml.h>

int main(){
	//Check if lib tinyXML works
	TiXmlDocument doc("users.xml");

	//Check if GLFW and GLEW work
	glfwInit();
	GLFWwindow* window;
	window = glfwCreateWindow(600, 480, "Test GLFW Window", NULL, NULL);
	glfwMakeContextCurrent(window);
	GLenum errorGlew = glewInit();
	glClearColor(0.0f, 0.0f, 1.0f, 0.0f);

	do {
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (true);

	glfwDestroyWindow(window);
	glfwTerminate();
};