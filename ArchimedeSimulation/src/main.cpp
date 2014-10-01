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
#include "ArbreDeRendu\NoeudSimple.h"

int main(){
	//Check if lib tinyXML works
	TiXmlDocument doc("users.xml");

	//Check if GLFW and GLEW work
	glfwInit();
	GLFWwindow* window;
	const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
	window = glfwCreateWindow(mode->width, mode->height, "Test GLFW Window", glfwGetPrimaryMonitor(), NULL);
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