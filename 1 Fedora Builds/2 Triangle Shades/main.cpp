#include <stdio.h>
#include <string.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Window dimensions
const GLint WIDTH = 800;  // The width of the window in pixels.
const GLint HEIGHT = 600; // The height of the window in pixels.

GLuint VBO, VAO, shader; // Variables used for OpenGL object handling.

/*
 * VERTEX SHADER CODE
 *			-	The vertex shader code written in GLSL (OpenGL Shading Language).
 *			-	It takes the position of the vertex as input and transforms it by applying a scaling factor.
 *			- 	The transformed vertex position is then assigned to the built-in variable gl_Position.
 *		(Summary of what's already written)
 *
 * 		In the given vertex shader code, let's break down the relevant parts:
 *
 * 		1 [ layout (location = 0) in vec3 pos; ]
 * 			- 	`layout` is a keyword in GLSL used to specify the layout or organization of shader variables.
 * 			- 	`location = 0` is a layout qualifier that assigns a specific location to the input variable `pos`.
 * 				In this case, `pos` will receive data from attribute location 0.
 * 			- 	`in` indicates that `pos` is an input variable, which means it will receive values from the vertex 
 * 				attributes of the input vertices.
 *
 * 		So, [ layout (location = 0) in vec3 pos; ]
 * 		declares an input variable `pos` of type `vec3` (a 3-component vector)
 * 		and assigns it to attribute location 0.
 *
 * 		2 [ gl_Position = vec4(0.4 * pos.x, 0.4 * pos.y, pos.z, 1.0); ]
 *
 * 			- 	`gl_Position` is a built-in output variable in GLSL representing the transformed position of the vertex.
 * 			- 	`vec4` is a 4-component vector type in GLSL.
 * 			- 	`(0.4 * pos.x, 0.4 * pos.y, pos.z, 1.0)` is the value assigned to `gl_Position`.
 *	 		- 	`0.4 * pos.x` scales the x-coordinate of the input position by 0.4.
 *	 		- 	`0.4 * pos.y` scales the y-coordinate of the input position by 0.4.
 *	 		- 	`pos.z` keeps the z-coordinate unchanged.
 *	 		- 	`1.0` sets the w-coordinate (homogeneous coordinate) to 1.0.
 *
 *		By assigning the transformed position to `gl_Position`,
 *		the vertex shader specifies the final position of the vertex
 * 		after applying the scaling transformation.
 *
 * 		3 Regarding the use of `vec3` for `pos` and `vec4` for `gl_Position`:
 * 			- 	`vec3` is used for `pos` because it represents the input position of the vertex in 3D space, 
 * 				consisting of x, y, and z coordinates.
 * 			- 	`vec4` is used for `gl_Position` because it represents the homogeneous position of the 
 * 				vertex in 4D space.
 * 			- 	The w-coordinate is necessary for perspective transformations and homogeneous clipping.
 * 			- 	In this case, it is set to 1.0, indicating that the vertex is not being projected onto 
 * 				a homogeneous space.
 *
 * 		The transformation scales the x and y coordinates of the input position by 0.4, which effectively reduces the size of the rendered object.
 */
static const char *vShader = R"(
#version 330

layout (location = 0) in vec3 pos;

void main()
{
    gl_Position = vec4(0.4 * pos.x, 0.4 * pos.y, pos.z, 1.0);
}
)";

/* 	FRAGMENT SHADER CODE
 * 	The fragment shader code written in GLSL.
 * 	It sets the output color of each fragment (pixel) to a specific RGBA value (0.5, 0.5, 0.0, 0.5).
 * 	The alpha value of 0.5 makes the fragment semi-transparent.
 */
static const char *fShader = R"(
#version 330

out vec4 colour;

void main()
{
    colour = vec4(0.5, 0.5, 0.0, 0.5);
}
)";

void CreateTriangle()
{
	// Step 1: Define the vertices of the triangle
	GLfloat vertices[] = 
	{ 
	   	-1.0f, -1.0f, +0.0f,
	   	+1.0f, -1.0f, +0.0f,
		+0.0f, +1.0f, +0.0f
	};
						   
	// Step 2: Generate a vertex array object (VAO)
	glGenVertexArrays(1, &VAO);
	// Step 3: Bind the vertex array object (VAO)
	glBindVertexArray(VAO);		
		// Step 4: Generate a vertex buffer object (VBO)
		glGenBuffers(1, &VBO);
		// Step 5: Bind the VBO to GL_ARRAY_BUFFER
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
			// Step 6: Copy the vertex data to the VBO 
			glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
			// Step 7: Specify the layout of the vertex data 
			glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
			// Step 8: Enable the vertex attribute at index 0
			glEnableVertexAttribArray(0);
		 // Step 9: Unbind the vertex buffer object (VBO)
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	// Step 10: Unbind the vertex array object (VAO)
	glBindVertexArray(0);
}

/*
 *    AddShader function
 *    Adds a shader to a program
 *    PARAM: theProgram - the program to which the shader will be attached
 *    PARAM: shaderCode - the source code of the shader
 *    PARAM: shaderType - the type of the shader (e.g., GL_VERTEX_SHADER, GL_FRAGMENT_SHADER)
 *    This function compiles the shader, attaches it to the program, and performs error handling.
 */
void AddShader(GLuint theProgram, const char *shaderCode, GLenum shaderType)
{
	GLuint theShader = glCreateShader(shaderType); // Create a shader object of the specified type

	const GLchar *theCode[1];
	theCode[0] = shaderCode;

	GLint codeLength[1];
	codeLength[0] = strlen(shaderCode);

	glShaderSource(theShader, 1, theCode, codeLength); // Set the shader source code
	glCompileShader(theShader);						   // Compile the shader

	GLint result = 0;
	GLchar eLog[1024] = {0};

	glGetShaderiv(theShader, GL_COMPILE_STATUS, &result); // Get the compilation status of the shader
	if (!result)
	{
		glGetShaderInfoLog(theShader, 1024, NULL, eLog); // Get the error log if compilation fails
		fprintf(stderr, "Error compiling the %d shader: '%s'\n", shaderType, eLog);
		return;
	}

	glAttachShader(theProgram, theShader); // Attach the shader to the program
}

void CompileShaders()
{
	shader = glCreateProgram(); // Create a shader program

	if (!shader) // Check if the shader program was created successfully
	{
		printf("Failed to create shader\n"); // Print an error message if creation failed
		return;
	}

	AddShader(shader, vShader, GL_VERTEX_SHADER);	// Add a vertex shader to the shader program
	AddShader(shader, fShader, GL_FRAGMENT_SHADER); // Add a fragment shader to the shader program

	GLint result = 0;		 // Variable to store the result of shader program operations
	GLchar eLog[1024] = {0}; // Array to store error log messages

	glLinkProgram (shader);							 // Link the shader program
	glGetProgramiv (shader, GL_LINK_STATUS, &result); // Check the linking status

	if (!result) // Check if the linking was successful
	{
		glGetProgramInfoLog(shader, sizeof(eLog), NULL, eLog); // Get the error log
		printf("Error linking program: '%s'\n", eLog);		   // Print the error message
		return;
	}

	glValidateProgram(shader);							 // Validate the shader program
	glGetProgramiv(shader, GL_VALIDATE_STATUS, &result); // Check the validation status

	if (!result) // Check if the validation was successful
	{
		glGetProgramInfoLog(shader, sizeof(eLog), NULL, eLog); // Get the error log
		printf("Error validating program: '%s'\n", eLog);	   // Print the error message
		return;
	}
}

int main()
{
	// Initialise GLFW
	if (!glfwInit())
	{
		printf("GLFW initialisation failed!");
		glfwTerminate();
		return 1;
	}

	// Setup GLFW window properties
	// OpenGL version
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Core Profile
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	// Allow Forward Compatbility
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	// Create the window
	GLFWwindow *mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "Test Window", NULL, NULL);
	if (!mainWindow)
	{
		printf("GLFW window creation failed!");
		glfwTerminate();
		return 1;
	}

	// Get Buffer Size information
	int bufferWidth, bufferHeight;
	glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);

	// Set context for GLEW to use
	glfwMakeContextCurrent(mainWindow);

	// Allow modern extension features
	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK)
	{
		printf("GLEW initialisation failed!");
		glfwDestroyWindow(mainWindow);
		glfwTerminate();
		return 1;
	}

	// Setup Viewport size
	glViewport(0, 0, bufferWidth, bufferHeight);

	CreateTriangle();
	CompileShaders();

	// Loop until window closed; function -> closed? NO! closed? NO! closed? NO....
	while (!glfwWindowShouldClose(mainWindow))
	{
		// Get + Handle user input events
		glfwPollEvents();

		// Clear window
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		glUseProgram(shader);
			glBindVertexArray(VAO);
				glDrawArrays(GL_TRIANGLES, 0, 3);
			glBindVertexArray(0);
		glUseProgram(0);

		glfwSwapBuffers(mainWindow);
	}

	return 0;
}