# rubik_cube: src/main.cpp
# 	g++ src/main.cpp -std=c++0x -lglut -lGLU -o rubik_cube

CC = g++
CFLAGS = -Wall -Wextra -std=c++11
LDFLAGS = -lGL -lGLU -lglut

SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = OpenGL

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE) $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
