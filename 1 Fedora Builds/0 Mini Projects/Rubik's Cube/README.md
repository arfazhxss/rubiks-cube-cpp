## OpenGL Rubik's Cube

This project is an implementation of a 3D Rubik's Cube using C++ and popular C libraries such as GLUT, GLFW, and GLM. The program allows you to interactively manipulate and solve the Rubik's Cube through keyboard commands and mouse input.

<img src="./Rubiks%20Cube.gif" alt="Rubik's Cube" width="500" height="500">

### Compilation and Execution

To compile the program, use the following command:

```
make
```

This command will compile the source code and generate an executable file named `OpenGL`.

To run the program, execute the following command:

```
./OpenGL
```

### Controls

The Rubik's Cube visualization can be manipulated using the following keyboard commands:

**Cube Rotation:**

- **L**: Rotate the cube to the right.
- **J**: Rotate the cube to the left.
- **I**: Rotate the cube downwards.
- **K**: Rotate the cube upwards.
- **+**: Zoom in.
- **-**: Zoom out.
- **Mouse Left Click**: Zoom in.
- **Mouse Right Click**: Zoom out.

**Face Selection (for moving parts):**

Face selection is based on the coordinate system, with the origin located at the bottom-left of the Rubik's Cube.

Along the x-axis:

- **Q**: Select the 1st layer.
- **W**: Select the 2nd layer.
- **E**: Select the 3rd layer.

Along the y-axis:

- **A**: Select the 1st layer.
- **S**: Select the 2nd layer.
- **D**: Select the 3rd layer.

Along the z-axis:

- **Z**: Select the 1st layer.
- **X**: Select the 2nd layer.
- **C**: Select the 3rd layer.

**Face Rotation:**

- **O**: Rotate the selected face clockwise.
- **U**: Rotate the selected face counterclockwise.

### Notes

- Face selection feedback is not provided visually.
- The Rubik's Cube can be solved by executing the necessary rotations to restore each face to its original state.

Feel free to explore and interact with the Rubik's Cube using the provided controls. Have fun solving it!
