# OpenGL/glut Rubik Cube
Rubik Cube in C++ with OpenGL/glut

![Rubik's Cube](1%20Fedora%20Builds/0%20Mini%20Projects/Rubik's%20Cube/Rubiks%20Cube.gif)

## Documentation

Everything is in one file just because you can compile and run them with just one command.

**Compile with:** `make`

**Run with:** `./OpenGL`

**Clean:** `make clean`

### Commands

Commands are case-insensitive.

**Cube visualization**

- L: rotate right
- J: rotate left
- I: rotate down
- K: rotate up
- +: zoom in
- -: zoom out
- mouse left click: zoom in
- mouse right click: zoom out

**Face selection (for moving parts)**

There is no face selection feedback.
(Consider left-bottom as origin)

*Along x axis*

- Q: select 1st layer
- W: select 2nd layer
- E: select 3rd layer

*Along y axis*

- A: select 1st layer
- S: select 2nd layer
- D: select 3rd layer

*Along z axis*

- Z: select 1st layer
- X: select 2nd layer
- C: select 3rd layer

**Face rotation**

- O: rotate selected face clockwise
- U: rotate selected face counter-clockwise
