CC = g++
CFLAGS = -std=c++11 -Wall -Wextra
LDFLAGS = -L/opt/homebrew/Cellar/glfw/3.3.8/lib -L/opt/homebrew/Cellar/freeglut/3.4.0/lib -framework OpenGL -lglfw -lglut

INCLUDE_DIRS = -I/opt/homebrew/Cellar/glfw/3.3.8/include -I/opt/homebrew/Cellar/glm/0.9.9.8/include -I/Users/arfaz/Library/CloudStorage/OneDrive-UniversityofVictoria/0\ UVIC/4\ Extra-Curricular/5\ Udemy/2\ OpenGL/2\ MacOS\ Builds/0\ Mini\ Projects/Rubik\'s\ Cube/dependencies/include

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = OpenGL

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -o $@ $^ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE)
